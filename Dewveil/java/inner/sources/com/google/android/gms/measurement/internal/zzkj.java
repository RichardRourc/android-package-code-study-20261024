package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzkj implements Runnable {
    final /* synthetic */ zzks zza;
    final /* synthetic */ zzkr zzb;

    zzkj(zzkr zzkrVar, zzks zzksVar) {
        this.zzb = zzkrVar;
        this.zza = zzksVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        zzkr.zzy(this.zzb, this.zza);
        this.zzb.zzR();
    }
}
