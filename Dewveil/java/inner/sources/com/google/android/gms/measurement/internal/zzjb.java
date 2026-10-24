package com.google.android.gms.measurement.internal;

import com.google.android.gms.common.internal.Preconditions;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzjb implements Runnable {
    final /* synthetic */ zzp zza;
    final /* synthetic */ boolean zzb;
    final /* synthetic */ zzau zzc;
    final /* synthetic */ String zzd;
    final /* synthetic */ zzjm zze;

    zzjb(zzjm zzjmVar, boolean z, zzp zzpVar, boolean z2, zzau zzauVar, String str) {
        this.zze = zzjmVar;
        this.zza = zzpVar;
        this.zzb = z2;
        this.zzc = zzauVar;
        this.zzd = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        zzjm zzjmVar = this.zze;
        zzdz zzdzVar = zzjmVar.zzb;
        if (zzdzVar == null) {
            zzjmVar.zzs.zzay().zzd().zza("Discarding data. Failed to send event to service");
            return;
        }
        Preconditions.checkNotNull(this.zza);
        this.zze.zzD(zzdzVar, this.zzb ? null : this.zzc, this.zza);
        this.zze.zzQ();
    }
}
