package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzgh implements Runnable {
    final /* synthetic */ zzku zza;
    final /* synthetic */ zzp zzb;
    final /* synthetic */ zzgl zzc;

    zzgh(zzgl zzglVar, zzku zzkuVar, zzp zzpVar) {
        this.zzc = zzglVar;
        this.zza = zzkuVar;
        this.zzb = zzpVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.zzc.zza.zzA();
        if (this.zza.zza() == null) {
            this.zzc.zza.zzO(this.zza, this.zzb);
        } else {
            this.zzc.zza.zzV(this.zza, this.zzb);
        }
    }
}
