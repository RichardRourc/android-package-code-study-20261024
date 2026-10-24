package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzge implements Runnable {
    final /* synthetic */ zzau zza;
    final /* synthetic */ zzp zzb;
    final /* synthetic */ zzgl zzc;

    zzge(zzgl zzglVar, zzau zzauVar, zzp zzpVar) {
        this.zzc = zzglVar;
        this.zza = zzauVar;
        this.zzb = zzpVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.zzc.zzv(this.zzc.zzb(this.zza, this.zzb), this.zzb);
    }
}
