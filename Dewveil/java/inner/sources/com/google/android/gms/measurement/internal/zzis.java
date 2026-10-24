package com.google.android.gms.measurement.internal;

import android.os.RemoteException;
import com.google.android.gms.common.internal.Preconditions;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzis implements Runnable {
    final /* synthetic */ zzp zza;
    final /* synthetic */ com.google.android.gms.internal.measurement.zzcf zzb;
    final /* synthetic */ zzjm zzc;

    zzis(zzjm zzjmVar, zzp zzpVar, com.google.android.gms.internal.measurement.zzcf zzcfVar) {
        this.zzc = zzjmVar;
        this.zza = zzpVar;
        this.zzb = zzcfVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        zzft zzftVar;
        String strZzd = null;
        try {
            if (this.zzc.zzs.zzm().zzc().zzi(zzag.ANALYTICS_STORAGE)) {
                zzjm zzjmVar = this.zzc;
                zzdz zzdzVar = zzjmVar.zzb;
                if (zzdzVar == null) {
                    zzjmVar.zzs.zzay().zzd().zza("Failed to get app instance id");
                    zzftVar = this.zzc.zzs;
                } else {
                    Preconditions.checkNotNull(this.zza);
                    strZzd = zzdzVar.zzd(this.zza);
                    if (strZzd != null) {
                        this.zzc.zzs.zzq().zzO(strZzd);
                        this.zzc.zzs.zzm().zze.zzb(strZzd);
                    }
                    this.zzc.zzQ();
                    zzftVar = this.zzc.zzs;
                }
            } else {
                this.zzc.zzs.zzay().zzl().zza("Analytics storage consent denied; will not get app instance id");
                this.zzc.zzs.zzq().zzO(null);
                this.zzc.zzs.zzm().zze.zzb(null);
                zzftVar = this.zzc.zzs;
            }
        } catch (RemoteException e) {
            this.zzc.zzs.zzay().zzd().zzb("Failed to get app instance id", e);
            zzftVar = this.zzc.zzs;
        } finally {
            this.zzc.zzs.zzv().zzU(this.zzb, null);
        }
        zzky zzkyVarZzv = zzftVar.zzv();
    }
}
