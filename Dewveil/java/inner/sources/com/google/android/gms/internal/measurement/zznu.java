package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zznu implements zznt {
    public static final zzhu zza;
    public static final zzhu zzb;
    public static final zzhu zzc;
    public static final zzhu zzd;
    public static final zzhu zze;

    static {
        zzhr zzhrVarZza = new zzhr(zzhk.zza("com.google.android.gms.measurement")).zza();
        zza = zzhrVarZza.zze("measurement.enhanced_campaign.client", false);
        zzb = zzhrVarZza.zze("measurement.enhanced_campaign.service", false);
        zzc = zzhrVarZza.zze("measurement.enhanced_campaign.srsltid.client", false);
        zzd = zzhrVarZza.zze("measurement.enhanced_campaign.srsltid.service", false);
        zze = zzhrVarZza.zzc("measurement.id.enhanced_campaign.service", 0L);
    }

    @Override // com.google.android.gms.internal.measurement.zznt
    public final boolean zza() {
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.zznt
    public final boolean zzb() {
        return ((Boolean) zza.zzb()).booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.zznt
    public final boolean zzc() {
        return ((Boolean) zzb.zzb()).booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.zznt
    public final boolean zzd() {
        return ((Boolean) zzc.zzb()).booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.zznt
    public final boolean zze() {
        return ((Boolean) zzd.zzb()).booleanValue();
    }
}
