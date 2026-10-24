package com.google.android.gms.measurement.internal;

import android.os.RemoteException;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zziu implements Runnable {
    final /* synthetic */ zzif zza;
    final /* synthetic */ zzjm zzb;

    zziu(zzjm zzjmVar, zzif zzifVar) {
        this.zzb = zzjmVar;
        this.zza = zzifVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        zzjm zzjmVar = this.zzb;
        zzdz zzdzVar = zzjmVar.zzb;
        if (zzdzVar == null) {
            zzjmVar.zzs.zzay().zzd().zza("Failed to send current screen to service");
            return;
        }
        try {
            zzif zzifVar = this.zza;
            if (zzifVar == null) {
                zzdzVar.zzq(0L, null, null, zzjmVar.zzs.zzau().getPackageName());
            } else {
                zzdzVar.zzq(zzifVar.zzc, zzifVar.zza, zzifVar.zzb, zzjmVar.zzs.zzau().getPackageName());
            }
            this.zzb.zzQ();
        } catch (RemoteException e) {
            this.zzb.zzs.zzay().zzd().zzb("Failed to send current screen to the service", e);
        }
    }
}
