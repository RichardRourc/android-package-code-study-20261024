package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzke extends zzan {
    final /* synthetic */ zzkf zza;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    zzke(zzkf zzkfVar, zzgo zzgoVar) {
        super(zzgoVar);
        this.zza = zzkfVar;
    }

    @Override // com.google.android.gms.measurement.internal.zzan
    public final void zzc() {
        this.zza.zza();
        this.zza.zzs.zzay().zzj().zza("Starting upload from DelayedRunnable");
        this.zza.zzf.zzW();
    }
}
