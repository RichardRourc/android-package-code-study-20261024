package com.google.android.gms.measurement.internal;

import android.os.Bundle;
import android.text.TextUtils;
import com.google.android.gms.common.internal.Preconditions;
import java.util.Iterator;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzap {
    final String zza;
    final String zzb;
    final String zzc;
    final long zzd;
    final long zze;
    final zzas zzf;

    zzap(zzft zzftVar, String str, String str2, String str3, long j, long j2, Bundle bundle) {
        zzas zzasVar;
        Preconditions.checkNotEmpty(str2);
        Preconditions.checkNotEmpty(str3);
        this.zza = str2;
        this.zzb = str3;
        this.zzc = true == TextUtils.isEmpty(str) ? null : str;
        this.zzd = j;
        this.zze = j2;
        if (j2 != 0 && j2 > j) {
            zzftVar.zzay().zzk().zzb("Event created with reverse previous/current timestamps. appId", zzej.zzn(str2));
        }
        if (bundle == null || bundle.isEmpty()) {
            zzasVar = new zzas(new Bundle());
        } else {
            Bundle bundle2 = new Bundle(bundle);
            Iterator<String> it = bundle2.keySet().iterator();
            while (it.hasNext()) {
                String next = it.next();
                if (next == null) {
                    zzftVar.zzay().zzd().zza("Param name can't be null");
                    it.remove();
                } else {
                    Object objZzA = zzftVar.zzv().zzA(next, bundle2.get(next));
                    if (objZzA == null) {
                        zzftVar.zzay().zzk().zzb("Param value can't be null", zzftVar.zzj().zze(next));
                        it.remove();
                    } else {
                        zzftVar.zzv().zzN(bundle2, next, objZzA);
                    }
                }
            }
            zzasVar = new zzas(bundle2);
        }
        this.zzf = zzasVar;
    }

    public final String toString() {
        String str = this.zza;
        String str2 = this.zzb;
        String string = this.zzf.toString();
        StringBuilder sb = new StringBuilder(String.valueOf(str).length() + 33 + String.valueOf(str2).length() + string.length());
        sb.append("Event{appId='");
        sb.append(str);
        sb.append("', name='");
        sb.append(str2);
        sb.append("', params=");
        sb.append(string);
        sb.append('}');
        return sb.toString();
    }

    final zzap zza(zzft zzftVar, long j) {
        return new zzap(zzftVar, this.zzc, this.zza, this.zzb, this.zzd, j, this.zzf);
    }

    private zzap(zzft zzftVar, String str, String str2, String str3, long j, long j2, zzas zzasVar) {
        Preconditions.checkNotEmpty(str2);
        Preconditions.checkNotEmpty(str3);
        Preconditions.checkNotNull(zzasVar);
        this.zza = str2;
        this.zzb = str3;
        this.zzc = true == TextUtils.isEmpty(str) ? null : str;
        this.zzd = j;
        this.zze = j2;
        if (j2 != 0 && j2 > j) {
            zzftVar.zzay().zzk().zzc("Event created with reverse previous/current timestamps. appId, name", zzej.zzn(str2), zzej.zzn(str3));
        }
        this.zzf = zzasVar;
    }
}
