package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzht implements Runnable {
    final /* synthetic */ zzah zza;
    final /* synthetic */ int zzb;
    final /* synthetic */ long zzc;
    final /* synthetic */ boolean zzd;
    final /* synthetic */ zzhy zze;

    zzht(zzhy zzhyVar, zzah zzahVar, int i, long j, boolean z) {
        this.zze = zzhyVar;
        this.zza = zzahVar;
        this.zzb = i;
        this.zzc = j;
        this.zzd = z;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.zze.zzW(this.zza);
        zzhy.zzv(this.zze, this.zza, this.zzb, this.zzc, false, this.zzd);
    }
}
