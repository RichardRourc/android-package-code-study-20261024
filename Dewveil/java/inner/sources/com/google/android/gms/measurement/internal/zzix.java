package com.google.android.gms.measurement.internal;

import android.os.RemoteException;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzix implements Runnable {
    final /* synthetic */ zzau zza;
    final /* synthetic */ String zzb;
    final /* synthetic */ com.google.android.gms.internal.measurement.zzcf zzc;
    final /* synthetic */ zzjm zzd;

    zzix(zzjm zzjmVar, zzau zzauVar, String str, com.google.android.gms.internal.measurement.zzcf zzcfVar) {
        this.zzd = zzjmVar;
        this.zza = zzauVar;
        this.zzb = str;
        this.zzc = zzcfVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r4v3, types: [com.google.android.gms.internal.measurement.zzcf] */
    @Override // java.lang.Runnable
    public final void run() {
        zzft zzftVar;
        byte[] bArrZzu = null;
        try {
            try {
                zzjm zzjmVar = this.zzd;
                zzdz zzdzVar = zzjmVar.zzb;
                if (zzdzVar == null) {
                    zzjmVar.zzs.zzay().zzd().zza("Discarding data. Failed to send event to service to bundle");
                    zzftVar = this.zzd.zzs;
                } else {
                    bArrZzu = zzdzVar.zzu(this.zza, this.zzb);
                    this.zzd.zzQ();
                    zzftVar = this.zzd.zzs;
                }
            } catch (RemoteException e) {
                this.zzd.zzs.zzay().zzd().zzb("Failed to send event to the service to bundle", e);
                zzftVar = this.zzd.zzs;
            }
            zzky zzkyVarZzv = zzftVar.zzv();
        } finally {
            this.zzd.zzs.zzv().zzR(this.zzc, bArrZzu);
        }
    }
}
