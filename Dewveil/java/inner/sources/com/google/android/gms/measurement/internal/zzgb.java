package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzgb implements Runnable {
    final /* synthetic */ zzp zza;
    final /* synthetic */ zzgl zzb;

    zzgb(zzgl zzglVar, zzp zzpVar) {
        this.zzb = zzglVar;
        this.zza = zzpVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.zzb.zza.zzA();
        this.zzb.zza.zzP(this.zza);
    }
}
