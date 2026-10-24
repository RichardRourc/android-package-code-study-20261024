package com.google.android.gms.measurement.internal;

import android.os.Bundle;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzjx implements Runnable {
    final long zza;
    final long zzb;
    final /* synthetic */ zzjy zzc;

    zzjx(zzjy zzjyVar, long j, long j2) {
        this.zzc = zzjyVar;
        this.zza = j;
        this.zzb = j2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.zzc.zza.zzs.zzaz().zzp(new Runnable() { // from class: com.google.android.gms.measurement.internal.zzjw
            @Override // java.lang.Runnable
            public final void run() {
                zzjx zzjxVar = this.zza;
                zzjy zzjyVar = zzjxVar.zzc;
                long j = zzjxVar.zza;
                long j2 = zzjxVar.zzb;
                zzjyVar.zza.zzg();
                zzjyVar.zza.zzs.zzay().zzc().zza("Application going to the background");
                zzjyVar.zza.zzs.zzm().zzl.zza(true);
                Bundle bundle = new Bundle();
                if (!zzjyVar.zza.zzs.zzf().zzu()) {
                    zzjyVar.zza.zzb.zzb(j2);
                    zzjyVar.zza.zzb.zzd(false, false, j2);
                }
                zzjyVar.zza.zzs.zzq().zzH("auto", "_ab", j, bundle);
            }
        });
    }
}
