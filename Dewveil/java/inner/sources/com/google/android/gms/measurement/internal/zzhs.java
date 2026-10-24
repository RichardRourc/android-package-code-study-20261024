package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzhs implements Runnable {
    final /* synthetic */ zzah zza;
    final /* synthetic */ long zzb;
    final /* synthetic */ int zzc;
    final /* synthetic */ long zzd;
    final /* synthetic */ boolean zze;
    final /* synthetic */ zzhy zzf;

    zzhs(zzhy zzhyVar, zzah zzahVar, long j, int i, long j2, boolean z) {
        this.zzf = zzhyVar;
        this.zza = zzahVar;
        this.zzb = j;
        this.zzc = i;
        this.zzd = j2;
        this.zze = z;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.zzf.zzW(this.zza);
        this.zzf.zzL(this.zzb, false);
        zzhy.zzv(this.zzf, this.zza, this.zzc, this.zzd, true, this.zze);
    }
}
