package com.google.android.gms.measurement.internal;

import android.os.Process;
import com.google.android.gms.common.internal.Preconditions;
import java.util.concurrent.BlockingQueue;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzfp extends Thread {
    final /* synthetic */ zzfq zza;
    private final Object zzb;
    private final BlockingQueue zzc;
    private boolean zzd = false;

    public zzfp(zzfq zzfqVar, String str, BlockingQueue blockingQueue) {
        this.zza = zzfqVar;
        Preconditions.checkNotNull(str);
        Preconditions.checkNotNull(blockingQueue);
        this.zzb = new Object();
        this.zzc = blockingQueue;
        setName(str);
    }

    private final void zzb() {
        synchronized (this.zza.zzh) {
            if (!this.zzd) {
                this.zza.zzi.release();
                this.zza.zzh.notifyAll();
                zzfq zzfqVar = this.zza;
                if (this == zzfqVar.zzb) {
                    zzfqVar.zzb = null;
                } else if (this == zzfqVar.zzc) {
                    zzfqVar.zzc = null;
                } else {
                    zzfqVar.zzs.zzay().zzd().zza("Current scheduler thread is neither worker nor network");
                }
                this.zzd = true;
            }
        }
    }

    private final void zzc(InterruptedException interruptedException) {
        this.zza.zzs.zzay().zzk().zzb(String.valueOf(getName()).concat(" was interrupted"), interruptedException);
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public final void run() {
        boolean z = false;
        while (!z) {
            try {
                this.zza.zzi.acquire();
                z = true;
            } catch (InterruptedException e) {
                zzc(e);
            }
        }
        try {
            int threadPriority = Process.getThreadPriority(Process.myTid());
            while (true) {
                zzfo zzfoVar = (zzfo) this.zzc.poll();
                if (zzfoVar == null) {
                    synchronized (this.zzb) {
                        if (this.zzc.peek() == null) {
                            zzfq.zzr(this.zza);
                            try {
                                this.zzb.wait(30000L);
                            } catch (InterruptedException e2) {
                                zzc(e2);
                            }
                        }
                    }
                    synchronized (this.zza.zzh) {
                        if (this.zzc.peek() == null) {
                            break;
                        }
                    }
                } else {
                    Process.setThreadPriority(true != zzfoVar.zza ? 10 : threadPriority);
                    zzfoVar.run();
                }
            }
            if (this.zza.zzs.zzf().zzs(null, zzdw.zzae)) {
                zzb();
            }
            zzb();
        } catch (Throwable th) {
            zzb();
            throw th;
        }
    }

    public final void zza() {
        synchronized (this.zzb) {
            this.zzb.notifyAll();
        }
    }
}
