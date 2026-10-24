package com.google.android.gms.measurement.internal;

import com.google.android.gms.common.internal.Preconditions;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzio implements Runnable {
    final /* synthetic */ zzp zza;
    final /* synthetic */ boolean zzb;
    final /* synthetic */ zzku zzc;
    final /* synthetic */ zzjm zzd;

    zzio(zzjm zzjmVar, zzp zzpVar, boolean z, zzku zzkuVar) {
        this.zzd = zzjmVar;
        this.zza = zzpVar;
        this.zzb = z;
        this.zzc = zzkuVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        zzjm zzjmVar = this.zzd;
        zzdz zzdzVar = zzjmVar.zzb;
        if (zzdzVar == null) {
            zzjmVar.zzs.zzay().zzd().zza("Discarding data. Failed to set user property");
            return;
        }
        Preconditions.checkNotNull(this.zza);
        this.zzd.zzD(zzdzVar, this.zzb ? null : this.zzc, this.zza);
        this.zzd.zzQ();
    }
}
