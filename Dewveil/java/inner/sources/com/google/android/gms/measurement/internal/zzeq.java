package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzeq implements Runnable {
    final /* synthetic */ boolean zza;
    final /* synthetic */ zzer zzb;

    zzeq(zzer zzerVar, boolean z) {
        this.zzb = zzerVar;
        this.zza = z;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.zzb.zzb.zzI(this.zza);
    }
}
