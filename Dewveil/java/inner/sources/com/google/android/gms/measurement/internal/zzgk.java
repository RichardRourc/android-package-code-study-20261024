package com.google.android.gms.measurement.internal;

import com.google.android.gms.internal.measurement.zzpi;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzgk implements Runnable {
    final /* synthetic */ String zza;
    final /* synthetic */ String zzb;
    final /* synthetic */ String zzc;
    final /* synthetic */ long zzd;
    final /* synthetic */ zzgl zze;

    zzgk(zzgl zzglVar, String str, String str2, String str3, long j) {
        this.zze = zzglVar;
        this.zza = str;
        this.zzb = str2;
        this.zzc = str3;
        this.zzd = j;
    }

    @Override // java.lang.Runnable
    public final void run() {
        zzpi.zzc();
        if (this.zze.zza.zzg().zzs(null, zzdw.zzat)) {
            String str = this.zza;
            if (str == null) {
                this.zze.zza.zzQ(this.zzb, null);
                return;
            } else {
                this.zze.zza.zzQ(this.zzb, new zzif(this.zzc, str, this.zzd));
                return;
            }
        }
        String str2 = this.zza;
        if (str2 == null) {
            this.zze.zza.zzq().zzs().zzy(this.zzb, null);
        } else {
            this.zze.zza.zzq().zzs().zzy(this.zzb, new zzif(this.zzc, str2, this.zzd));
        }
    }
}
