package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzih implements Runnable {
    final /* synthetic */ zzif zza;
    final /* synthetic */ zzif zzb;
    final /* synthetic */ long zzc;
    final /* synthetic */ boolean zzd;
    final /* synthetic */ zzim zze;

    zzih(zzim zzimVar, zzif zzifVar, zzif zzifVar2, long j, boolean z) {
        this.zze = zzimVar;
        this.zza = zzifVar;
        this.zzb = zzifVar2;
        this.zzc = j;
        this.zzd = z;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.zze.zzB(this.zza, this.zzb, this.zzc, this.zzd, null);
    }
}
