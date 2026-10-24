package com.google.android.gms.measurement.internal;

import android.os.RemoteException;
import com.google.android.gms.common.internal.Preconditions;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzir implements Runnable {
    final /* synthetic */ AtomicReference zza;
    final /* synthetic */ zzp zzb;
    final /* synthetic */ zzjm zzc;

    zzir(zzjm zzjmVar, AtomicReference atomicReference, zzp zzpVar) {
        this.zzc = zzjmVar;
        this.zza = atomicReference;
        this.zzb = zzpVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        AtomicReference atomicReference;
        synchronized (this.zza) {
            try {
                try {
                    if (!this.zzc.zzs.zzm().zzc().zzi(zzag.ANALYTICS_STORAGE)) {
                        this.zzc.zzs.zzay().zzl().zza("Analytics storage consent denied; will not get app instance id");
                        this.zzc.zzs.zzq().zzO(null);
                        this.zzc.zzs.zzm().zze.zzb(null);
                        this.zza.set(null);
                        this.zza.notify();
                        return;
                    }
                    zzjm zzjmVar = this.zzc;
                    zzdz zzdzVar = zzjmVar.zzb;
                    if (zzdzVar == null) {
                        zzjmVar.zzs.zzay().zzd().zza("Failed to get app instance id");
                        this.zza.notify();
                        return;
                    }
                    Preconditions.checkNotNull(this.zzb);
                    this.zza.set(zzdzVar.zzd(this.zzb));
                    String str = (String) this.zza.get();
                    if (str != null) {
                        this.zzc.zzs.zzq().zzO(str);
                        this.zzc.zzs.zzm().zze.zzb(str);
                    }
                    this.zzc.zzQ();
                    atomicReference = this.zza;
                    atomicReference.notify();
                } catch (RemoteException e) {
                    this.zzc.zzs.zzay().zzd().zzb("Failed to get app instance id", e);
                    atomicReference = this.zza;
                }
            } catch (Throwable th) {
                this.zza.notify();
                throw th;
            }
        }
    }
}
