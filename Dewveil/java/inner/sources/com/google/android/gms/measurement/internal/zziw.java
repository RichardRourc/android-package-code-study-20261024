package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zziw extends zzan {
    final /* synthetic */ zzjm zza;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    zziw(zzjm zzjmVar, zzgo zzgoVar) {
        super(zzgoVar);
        this.zza = zzjmVar;
    }

    @Override // com.google.android.gms.measurement.internal.zzan
    public final void zzc() {
        zzjm zzjmVar = this.zza;
        zzjmVar.zzg();
        if (zzjmVar.zzL()) {
            zzjmVar.zzs.zzay().zzj().zza("Inactivity, disconnecting from the service");
            zzjmVar.zzs();
        }
    }
}
