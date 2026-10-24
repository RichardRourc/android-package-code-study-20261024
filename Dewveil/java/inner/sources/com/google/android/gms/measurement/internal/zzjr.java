package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzjr implements Runnable {
    final /* synthetic */ zzkr zza;
    final /* synthetic */ Runnable zzb;

    zzjr(zzjt zzjtVar, zzkr zzkrVar, Runnable runnable) {
        this.zza = zzkrVar;
        this.zzb = runnable;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.zza.zzA();
        this.zza.zzz(this.zzb);
        this.zza.zzW();
    }
}
