package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzhr implements Runnable {
    final /* synthetic */ Boolean zza;
    final /* synthetic */ zzhy zzb;

    zzhr(zzhy zzhyVar, Boolean bool) {
        this.zzb = zzhyVar;
        this.zza = bool;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.zzb.zzac(this.zza, true);
    }
}
