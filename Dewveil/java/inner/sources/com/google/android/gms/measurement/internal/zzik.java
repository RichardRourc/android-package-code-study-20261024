package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzik implements Runnable {
    final /* synthetic */ zzif zza;
    final /* synthetic */ long zzb;
    final /* synthetic */ zzim zzc;

    zzik(zzim zzimVar, zzif zzifVar, long j) {
        this.zzc = zzimVar;
        this.zza = zzifVar;
        this.zzb = j;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.zzc.zzC(this.zza, false, this.zzb);
        zzim zzimVar = this.zzc;
        zzimVar.zza = null;
        zzimVar.zzs.zzt().zzG(null);
    }
}
