package com.google.android.gms.measurement.internal;

import android.os.RemoteException;
import com.google.android.gms.common.internal.Preconditions;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzip implements Runnable {
    final /* synthetic */ AtomicReference zza;
    final /* synthetic */ zzp zzb;
    final /* synthetic */ boolean zzc;
    final /* synthetic */ zzjm zzd;

    zzip(zzjm zzjmVar, AtomicReference atomicReference, zzp zzpVar, boolean z) {
        this.zzd = zzjmVar;
        this.zza = atomicReference;
        this.zzb = zzpVar;
        this.zzc = z;
    }

    @Override // java.lang.Runnable
    public final void run() {
        AtomicReference atomicReference;
        synchronized (this.zza) {
            try {
                try {
                    zzjm zzjmVar = this.zzd;
                    zzdz zzdzVar = zzjmVar.zzb;
                    if (zzdzVar == null) {
                        zzjmVar.zzs.zzay().zzd().zza("Failed to get all user properties; not connected to service");
                        this.zza.notify();
                        return;
                    }
                    Preconditions.checkNotNull(this.zzb);
                    this.zza.set(zzdzVar.zze(this.zzb, this.zzc));
                    this.zzd.zzQ();
                    atomicReference = this.zza;
                    atomicReference.notify();
                } catch (RemoteException e) {
                    this.zzd.zzs.zzay().zzd().zzb("Failed to get all user properties; remote exception", e);
                    atomicReference = this.zza;
                }
            } catch (Throwable th) {
                this.zza.notify();
                throw th;
            }
        }
    }
}
