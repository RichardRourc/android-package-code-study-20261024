package com.google.android.gms.internal.measurement;

import java.io.IOException;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzmk extends zzmi {
    zzmk() {
    }

    @Override // com.google.android.gms.internal.measurement.zzmi
    final /* synthetic */ int zza(Object obj) {
        return ((zzmj) obj).zza();
    }

    @Override // com.google.android.gms.internal.measurement.zzmi
    final /* synthetic */ int zzb(Object obj) {
        return ((zzmj) obj).zzb();
    }

    @Override // com.google.android.gms.internal.measurement.zzmi
    final /* synthetic */ Object zzc(Object obj) {
        return ((zzjz) obj).zzc;
    }

    @Override // com.google.android.gms.internal.measurement.zzmi
    final /* bridge */ /* synthetic */ Object zzd(Object obj, Object obj2) {
        zzmj zzmjVar = (zzmj) obj2;
        return zzmjVar.equals(zzmj.zzc()) ? obj : zzmj.zzd((zzmj) obj, zzmjVar);
    }

    @Override // com.google.android.gms.internal.measurement.zzmi
    final /* synthetic */ Object zze() {
        return zzmj.zze();
    }

    @Override // com.google.android.gms.internal.measurement.zzmi
    final /* bridge */ /* synthetic */ void zzf(Object obj, int i, long j) {
        ((zzmj) obj).zzh(i << 3, Long.valueOf(j));
    }

    @Override // com.google.android.gms.internal.measurement.zzmi
    final void zzg(Object obj) {
        ((zzjz) obj).zzc.zzf();
    }

    @Override // com.google.android.gms.internal.measurement.zzmi
    final /* synthetic */ void zzh(Object obj, Object obj2) {
        ((zzjz) obj).zzc = (zzmj) obj2;
    }

    @Override // com.google.android.gms.internal.measurement.zzmi
    final /* synthetic */ void zzi(Object obj, zzjh zzjhVar) throws IOException {
        ((zzmj) obj).zzi(zzjhVar);
    }
}
