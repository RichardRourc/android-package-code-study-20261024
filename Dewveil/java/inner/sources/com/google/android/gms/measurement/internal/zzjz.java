package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzjz extends zzan {
    final /* synthetic */ zzka zza;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    zzjz(zzka zzkaVar, zzgo zzgoVar) {
        super(zzgoVar);
        this.zza = zzkaVar;
    }

    @Override // com.google.android.gms.measurement.internal.zzan
    public final void zzc() {
        zzka zzkaVar = this.zza;
        zzkaVar.zzc.zzg();
        zzkaVar.zzd(false, false, zzkaVar.zzc.zzs.zzav().elapsedRealtime());
        zzkaVar.zzc.zzs.zzd().zzf(zzkaVar.zzc.zzs.zzav().elapsedRealtime());
    }
}
