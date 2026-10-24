package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzom implements zzol {
    public static final zzhu zza;
    public static final zzhu zzb;
    public static final zzhu zzc;

    static {
        zzhr zzhrVar = new zzhr(zzhk.zza("com.google.android.gms.measurement"));
        zza = zzhrVar.zze("measurement.client.sessions.check_on_reset_and_enable2", true);
        zzb = zzhrVar.zze("measurement.client.sessions.check_on_startup", true);
        zzc = zzhrVar.zze("measurement.client.sessions.start_session_before_view_screen", true);
    }

    @Override // com.google.android.gms.internal.measurement.zzol
    public final boolean zza() {
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.zzol
    public final boolean zzb() {
        return ((Boolean) zza.zzb()).booleanValue();
    }
}
