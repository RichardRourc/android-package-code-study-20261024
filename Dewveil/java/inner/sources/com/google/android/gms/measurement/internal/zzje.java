package com.google.android.gms.measurement.internal;

import android.os.RemoteException;
import com.google.android.gms.common.internal.Preconditions;
import java.util.ArrayList;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzje implements Runnable {
    final /* synthetic */ String zza;
    final /* synthetic */ String zzb;
    final /* synthetic */ zzp zzc;
    final /* synthetic */ com.google.android.gms.internal.measurement.zzcf zzd;
    final /* synthetic */ zzjm zze;

    zzje(zzjm zzjmVar, String str, String str2, zzp zzpVar, com.google.android.gms.internal.measurement.zzcf zzcfVar) {
        this.zze = zzjmVar;
        this.zza = str;
        this.zzb = str2;
        this.zzc = zzpVar;
        this.zzd = zzcfVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        zzft zzftVar;
        ArrayList arrayList = new ArrayList();
        try {
            try {
                zzjm zzjmVar = this.zze;
                zzdz zzdzVar = zzjmVar.zzb;
                if (zzdzVar == null) {
                    zzjmVar.zzs.zzay().zzd().zzc("Failed to get conditional properties; not connected to service", this.zza, this.zzb);
                    zzftVar = this.zze.zzs;
                } else {
                    Preconditions.checkNotNull(this.zzc);
                    arrayList = zzky.zzG(zzdzVar.zzf(this.zza, this.zzb, this.zzc));
                    this.zze.zzQ();
                    zzftVar = this.zze.zzs;
                }
            } catch (RemoteException e) {
                this.zze.zzs.zzay().zzd().zzd("Failed to get conditional properties; remote exception", this.zza, this.zzb, e);
                zzftVar = this.zze.zzs;
            }
            zzky zzkyVarZzv = zzftVar.zzv();
        } finally {
            this.zze.zzs.zzv().zzP(this.zzd, arrayList);
        }
    }
}
