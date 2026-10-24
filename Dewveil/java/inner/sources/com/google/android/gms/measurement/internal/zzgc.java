package com.google.android.gms.measurement.internal;

import com.google.android.gms.common.internal.Preconditions;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzgc implements Runnable {
    final /* synthetic */ zzp zza;
    final /* synthetic */ zzgl zzb;

    zzgc(zzgl zzglVar, zzp zzpVar) {
        this.zzb = zzglVar;
        this.zza = zzpVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.zzb.zza.zzA();
        zzkr zzkrVar = this.zzb.zza;
        zzp zzpVar = this.zza;
        zzkrVar.zzaz().zzg();
        zzkrVar.zzB();
        Preconditions.checkNotEmpty(zzpVar.zza);
        zzkrVar.zzd(zzpVar);
    }
}
