package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzfw implements Runnable {
    final /* synthetic */ zzab zza;
    final /* synthetic */ zzgl zzb;

    zzfw(zzgl zzglVar, zzab zzabVar) {
        this.zzb = zzglVar;
        this.zza = zzabVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.zzb.zza.zzA();
        if (this.zza.zzc.zza() == null) {
            this.zzb.zza.zzM(this.zza);
        } else {
            this.zzb.zza.zzS(this.zza);
        }
    }
}
