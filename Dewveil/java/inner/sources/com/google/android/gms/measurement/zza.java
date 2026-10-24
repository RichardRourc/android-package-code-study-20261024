package com.google.android.gms.measurement;

import android.os.Bundle;
import androidx.collection.ArrayMap;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.measurement.internal.zzft;
import com.google.android.gms.measurement.internal.zzgt;
import com.google.android.gms.measurement.internal.zzgu;
import com.google.android.gms.measurement.internal.zzhy;
import com.google.android.gms.measurement.internal.zzku;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zza extends zzd {
    private final zzft zza;
    private final zzhy zzb;

    public zza(zzft zzftVar) {
        super(null);
        Preconditions.checkNotNull(zzftVar);
        this.zza = zzftVar;
        this.zzb = zzftVar.zzq();
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final int zza(String str) {
        this.zzb.zzh(str);
        return 25;
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final long zzb() {
        return this.zza.zzv().zzq();
    }

    @Override // com.google.android.gms.measurement.zzd
    public final Boolean zzc() {
        return this.zzb.zzi();
    }

    @Override // com.google.android.gms.measurement.zzd
    public final Double zzd() {
        return this.zzb.zzj();
    }

    @Override // com.google.android.gms.measurement.zzd
    public final Integer zze() {
        return this.zzb.zzl();
    }

    @Override // com.google.android.gms.measurement.zzd
    public final Long zzf() {
        return this.zzb.zzm();
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final String zzh() {
        return this.zzb.zzo();
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final String zzi() {
        return this.zzb.zzp();
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final String zzj() {
        return this.zzb.zzq();
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final String zzk() {
        return this.zzb.zzo();
    }

    @Override // com.google.android.gms.measurement.zzd
    public final String zzl() {
        return this.zzb.zzr();
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final List zzm(String str, String str2) {
        return this.zzb.zzs(str, str2);
    }

    @Override // com.google.android.gms.measurement.zzd
    public final Map zzn(boolean z) {
        List<zzku> listZzt = this.zzb.zzt(z);
        ArrayMap arrayMap = new ArrayMap(listZzt.size());
        for (zzku zzkuVar : listZzt) {
            Object objZza = zzkuVar.zza();
            if (objZza != null) {
                arrayMap.put(zzkuVar.zzb, objZza);
            }
        }
        return arrayMap;
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final Map zzo(String str, String str2, boolean z) {
        return this.zzb.zzu(str, str2, z);
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final void zzp(String str) {
        this.zza.zzd().zzd(str, this.zza.zzav().elapsedRealtime());
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final void zzq(String str, String str2, Bundle bundle) {
        this.zza.zzq().zzz(str, str2, bundle);
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final void zzr(String str) {
        this.zza.zzd().zze(str, this.zza.zzav().elapsedRealtime());
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final void zzs(String str, String str2, Bundle bundle) {
        this.zzb.zzD(str, str2, bundle);
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final void zzt(String str, String str2, Bundle bundle, long j) {
        this.zzb.zzE(str, str2, bundle, true, false, j);
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final void zzu(zzgu zzguVar) {
        this.zzb.zzJ(zzguVar);
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final void zzv(Bundle bundle) {
        this.zzb.zzP(bundle);
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final void zzw(zzgt zzgtVar) {
        this.zzb.zzU(zzgtVar);
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final void zzx(zzgu zzguVar) {
        this.zzb.zzaa(zzguVar);
    }

    @Override // com.google.android.gms.measurement.internal.zzhz
    public final Object zzg(int i) {
        if (i == 0) {
            return this.zzb.zzr();
        }
        if (i == 1) {
            return this.zzb.zzm();
        }
        if (i != 2) {
            return i != 3 ? this.zzb.zzi() : this.zzb.zzl();
        }
        return this.zzb.zzj();
    }
}
