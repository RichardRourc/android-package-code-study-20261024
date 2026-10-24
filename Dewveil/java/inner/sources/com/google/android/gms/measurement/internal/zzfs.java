package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzfs implements Runnable {
    final /* synthetic */ zzgw zza;
    final /* synthetic */ zzft zzb;

    zzfs(zzft zzftVar, zzgw zzgwVar) {
        this.zzb = zzftVar;
        this.zza = zzgwVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        zzft.zzA(this.zzb, this.zza);
        this.zzb.zzH(this.zza.zzg);
    }
}
