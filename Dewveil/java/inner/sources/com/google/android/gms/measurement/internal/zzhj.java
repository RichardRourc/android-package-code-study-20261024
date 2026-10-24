package com.google.android.gms.measurement.internal;

import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzhj implements Runnable {
    final /* synthetic */ AtomicReference zza;
    final /* synthetic */ zzhy zzb;

    zzhj(zzhy zzhyVar, AtomicReference atomicReference) {
        this.zzb = zzhyVar;
        this.zza = atomicReference;
    }

    @Override // java.lang.Runnable
    public final void run() {
        synchronized (this.zza) {
            try {
                this.zza.set(Boolean.valueOf(this.zzb.zzs.zzf().zzs(this.zzb.zzs.zzh().zzl(), zzdw.zzJ)));
                this.zza.notify();
            } catch (Throwable th) {
                this.zza.notify();
                throw th;
            }
        }
    }
}
