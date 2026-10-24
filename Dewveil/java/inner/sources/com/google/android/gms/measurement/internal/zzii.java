package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzii implements Runnable {
    final /* synthetic */ zzim zza;

    zzii(zzim zzimVar) {
        this.zza = zzimVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        zzim zzimVar = this.zza;
        zzimVar.zza = zzimVar.zzh;
    }
}
