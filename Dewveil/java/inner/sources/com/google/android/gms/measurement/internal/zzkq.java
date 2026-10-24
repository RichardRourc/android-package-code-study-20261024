package com.google.android.gms.measurement.internal;

import com.google.android.gms.common.internal.Preconditions;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzkq {
    com.google.android.gms.internal.measurement.zzfy zza;
    List zzb;
    List zzc;
    long zzd;
    final /* synthetic */ zzkr zze;

    /* synthetic */ zzkq(zzkr zzkrVar, zzkp zzkpVar) {
        this.zze = zzkrVar;
    }

    private static final long zzb(com.google.android.gms.internal.measurement.zzfo zzfoVar) {
        return ((zzfoVar.zzd() / 1000) / 60) / 60;
    }

    public final boolean zza(long j, com.google.android.gms.internal.measurement.zzfo zzfoVar) {
        Preconditions.checkNotNull(zzfoVar);
        if (this.zzc == null) {
            this.zzc = new ArrayList();
        }
        if (this.zzb == null) {
            this.zzb = new ArrayList();
        }
        if (this.zzc.size() > 0 && zzb((com.google.android.gms.internal.measurement.zzfo) this.zzc.get(0)) != zzb(zzfoVar)) {
            return false;
        }
        long jZzbr = this.zzd + ((long) zzfoVar.zzbr());
        this.zze.zzg();
        if (jZzbr >= Math.max(0, ((Integer) zzdw.zzh.zza(null)).intValue())) {
            return false;
        }
        this.zzd = jZzbr;
        this.zzc.add(zzfoVar);
        this.zzb.add(Long.valueOf(j));
        int size = this.zzc.size();
        this.zze.zzg();
        return size < Math.max(1, ((Integer) zzdw.zzi.zza(null)).intValue());
    }
}
