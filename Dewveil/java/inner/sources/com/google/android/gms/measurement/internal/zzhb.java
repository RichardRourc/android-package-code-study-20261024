package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzhb implements Runnable {
    final /* synthetic */ zzhy zza;

    zzhb(zzhy zzhyVar) {
        this.zza = zzhyVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.zza.zzb.zzb();
    }
}
