package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzks extends zzku {
    private zzks() {
        super(null);
    }

    /* synthetic */ zzks(zzkr zzkrVar) {
        super(null);
    }

    @Override // com.google.android.gms.internal.measurement.zzku
    final void zza(Object obj, long j) {
        ((zzkg) zzms.zzf(obj, j)).zzb();
    }

    @Override // com.google.android.gms.internal.measurement.zzku
    final void zzb(Object obj, Object obj2, long j) {
        zzkg zzkgVarZzd = (zzkg) zzms.zzf(obj, j);
        zzkg zzkgVar = (zzkg) zzms.zzf(obj2, j);
        int size = zzkgVarZzd.size();
        int size2 = zzkgVar.size();
        if (size > 0 && size2 > 0) {
            if (!zzkgVarZzd.zzc()) {
                zzkgVarZzd = zzkgVarZzd.zzd(size2 + size);
            }
            zzkgVarZzd.addAll(zzkgVar);
        }
        if (size > 0) {
            zzkgVar = zzkgVarZzd;
        }
        zzms.zzs(obj, j, zzkgVar);
    }
}
