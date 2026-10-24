package com.google.android.gms.measurement.internal;

import com.google.android.gms.common.internal.Preconditions;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.Callable;
import java.util.concurrent.Future;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.PriorityBlockingQueue;
import java.util.concurrent.Semaphore;
import java.util.concurrent.atomic.AtomicLong;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzfq extends zzgn {
    private static final AtomicLong zza = new AtomicLong(Long.MIN_VALUE);
    private zzfp zzb;
    private zzfp zzc;
    private final PriorityBlockingQueue zzd;
    private final BlockingQueue zze;
    private final Thread.UncaughtExceptionHandler zzf;
    private final Thread.UncaughtExceptionHandler zzg;
    private final Object zzh;
    private final Semaphore zzi;
    private volatile boolean zzj;

    zzfq(zzft zzftVar) {
        super(zzftVar);
        this.zzh = new Object();
        this.zzi = new Semaphore(2);
        this.zzd = new PriorityBlockingQueue();
        this.zze = new LinkedBlockingQueue();
        this.zzf = new zzfn(this, "Thread death: Uncaught exception on worker thread");
        this.zzg = new zzfn(this, "Thread death: Uncaught exception on network thread");
    }

    static /* bridge */ /* synthetic */ boolean zzr(zzfq zzfqVar) {
        boolean z = zzfqVar.zzj;
        return false;
    }

    private final void zzt(zzfo zzfoVar) {
        synchronized (this.zzh) {
            this.zzd.add(zzfoVar);
            zzfp zzfpVar = this.zzb;
            if (zzfpVar == null) {
                zzfp zzfpVar2 = new zzfp(this, "Measurement Worker", this.zzd);
                this.zzb = zzfpVar2;
                zzfpVar2.setUncaughtExceptionHandler(this.zzf);
                this.zzb.start();
            } else {
                zzfpVar.zza();
            }
        }
    }

    @Override // com.google.android.gms.measurement.internal.zzgm
    public final void zzax() {
        if (Thread.currentThread() != this.zzc) {
            throw new IllegalStateException("Call expected from network thread");
        }
    }

    final Object zzd(AtomicReference atomicReference, long j, String str, Runnable runnable) {
        synchronized (atomicReference) {
            this.zzs.zzaz().zzp(runnable);
            try {
                atomicReference.wait(j);
            } catch (InterruptedException unused) {
                this.zzs.zzay().zzk().zza(str.length() != 0 ? "Interrupted waiting for ".concat(str) : new String("Interrupted waiting for "));
                return null;
            }
        }
        Object obj = atomicReference.get();
        if (obj == null) {
            this.zzs.zzay().zzk().zza(str.length() != 0 ? "Timed out waiting for ".concat(str) : new String("Timed out waiting for "));
        }
        return obj;
    }

    @Override // com.google.android.gms.measurement.internal.zzgn
    protected final boolean zzf() {
        return false;
    }

    @Override // com.google.android.gms.measurement.internal.zzgm
    public final void zzg() {
        if (Thread.currentThread() != this.zzb) {
            throw new IllegalStateException("Call expected from worker thread");
        }
    }

    public final Future zzh(Callable callable) throws IllegalStateException {
        zzu();
        Preconditions.checkNotNull(callable);
        zzfo zzfoVar = new zzfo(this, callable, false, "Task exception on worker thread");
        if (Thread.currentThread() == this.zzb) {
            if (!this.zzd.isEmpty()) {
                this.zzs.zzay().zzk().zza("Callable skipped the worker queue.");
            }
            zzfoVar.run();
        } else {
            zzt(zzfoVar);
        }
        return zzfoVar;
    }

    public final Future zzi(Callable callable) throws IllegalStateException {
        zzu();
        Preconditions.checkNotNull(callable);
        zzfo zzfoVar = new zzfo(this, callable, true, "Task exception on worker thread");
        if (Thread.currentThread() == this.zzb) {
            zzfoVar.run();
        } else {
            zzt(zzfoVar);
        }
        return zzfoVar;
    }

    public final void zzo(Runnable runnable) throws IllegalStateException {
        zzu();
        Preconditions.checkNotNull(runnable);
        zzfo zzfoVar = new zzfo(this, runnable, false, "Task exception on network thread");
        synchronized (this.zzh) {
            this.zze.add(zzfoVar);
            zzfp zzfpVar = this.zzc;
            if (zzfpVar == null) {
                zzfp zzfpVar2 = new zzfp(this, "Measurement Network", this.zze);
                this.zzc = zzfpVar2;
                zzfpVar2.setUncaughtExceptionHandler(this.zzg);
                this.zzc.start();
            } else {
                zzfpVar.zza();
            }
        }
    }

    public final void zzp(Runnable runnable) throws IllegalStateException {
        zzu();
        Preconditions.checkNotNull(runnable);
        zzt(new zzfo(this, runnable, false, "Task exception on worker thread"));
    }

    public final void zzq(Runnable runnable) throws IllegalStateException {
        zzu();
        Preconditions.checkNotNull(runnable);
        zzt(new zzfo(this, runnable, true, "Task exception on worker thread"));
    }

    public final boolean zzs() {
        return Thread.currentThread() == this.zzb;
    }
}
