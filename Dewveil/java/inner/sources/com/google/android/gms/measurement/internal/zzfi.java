package com.google.android.gms.measurement.internal;

import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzfi implements com.google.android.gms.internal.measurement.zzr {
    final /* synthetic */ zzfk zza;

    zzfi(zzfk zzfkVar) {
        this.zza = zzfkVar;
    }

    @Override // com.google.android.gms.internal.measurement.zzr
    public final void zza(int i, String str, List list, boolean z, boolean z2) {
        zzeh zzehVarZzc;
        int i2 = i - 1;
        if (i2 == 0) {
            zzehVarZzc = this.zza.zzs.zzay().zzc();
        } else if (i2 != 1) {
            if (i2 == 3) {
                zzehVarZzc = this.zza.zzs.zzay().zzj();
            } else if (i2 != 4) {
                zzehVarZzc = this.zza.zzs.zzay().zzi();
            } else if (z) {
                zzehVarZzc = this.zza.zzs.zzay().zzm();
            } else {
                zzehVarZzc = !z2 ? this.zza.zzs.zzay().zzl() : this.zza.zzs.zzay().zzk();
            }
        } else if (z) {
            zzehVarZzc = this.zza.zzs.zzay().zzh();
        } else {
            zzehVarZzc = !z2 ? this.zza.zzs.zzay().zze() : this.zza.zzs.zzay().zzd();
        }
        int size = list.size();
        if (size == 1) {
            zzehVarZzc.zzb(str, list.get(0));
            return;
        }
        if (size == 2) {
            zzehVarZzc.zzc(str, list.get(0), list.get(1));
        } else if (size != 3) {
            zzehVarZzc.zza(str);
        } else {
            zzehVarZzc.zzd(str, list.get(0), list.get(1), list.get(2));
        }
    }
}
