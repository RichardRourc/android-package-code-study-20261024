package com.google.android.gms.measurement.internal;

import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import com.adjust.sdk.Constants;
import com.google.android.gms.internal.measurement.zzns;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzhv implements Runnable {
    final /* synthetic */ boolean zza;
    final /* synthetic */ Uri zzb;
    final /* synthetic */ String zzc;
    final /* synthetic */ String zzd;
    final /* synthetic */ zzhx zze;

    zzhv(zzhx zzhxVar, boolean z, Uri uri, String str, String str2) {
        this.zze = zzhxVar;
        this.zza = z;
        this.zzb = uri;
        this.zzc = str;
        this.zzd = str2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Bundle bundleZzs;
        zzhx zzhxVar = this.zze;
        boolean z = this.zza;
        Uri uri = this.zzb;
        String str = this.zzc;
        String str2 = this.zzd;
        zzhxVar.zza.zzg();
        try {
            zzky zzkyVarZzv = zzhxVar.zza.zzs.zzv();
            zzns.zzc();
            boolean zZzs = zzhxVar.zza.zzs.zzf().zzs(null, zzdw.zzav);
            if (TextUtils.isEmpty(str2)) {
                bundleZzs = null;
            } else {
                if (!str2.contains("gclid") && !str2.contains("utm_campaign") && !str2.contains("utm_source") && !str2.contains("utm_medium")) {
                    if (zZzs && (str2.contains("utm_id") || str2.contains("dclid"))) {
                        zZzs = true;
                    }
                    zzkyVarZzv.zzs.zzay().zzc().zza("Activity created with data 'referrer' without required params");
                    bundleZzs = null;
                }
                String strValueOf = String.valueOf(str2);
                bundleZzs = zzkyVarZzv.zzs(Uri.parse(strValueOf.length() != 0 ? "https://google.com/search?".concat(strValueOf) : new String("https://google.com/search?")), zZzs);
                if (bundleZzs != null) {
                    bundleZzs.putString("_cis", Constants.REFERRER);
                }
            }
            if (z) {
                zzky zzkyVarZzv2 = zzhxVar.zza.zzs.zzv();
                zzns.zzc();
                Bundle bundleZzs2 = zzkyVarZzv2.zzs(uri, zzhxVar.zza.zzs.zzf().zzs(null, zzdw.zzav));
                if (bundleZzs2 != null) {
                    bundleZzs2.putString("_cis", "intent");
                    if (!bundleZzs2.containsKey("gclid") && bundleZzs != null && bundleZzs.containsKey("gclid")) {
                        bundleZzs2.putString("_cer", String.format("gclid=%s", bundleZzs.getString("gclid")));
                    }
                    zzhxVar.zza.zzG(str, com.google.firebase.messaging.Constants.ScionAnalytics.EVENT_FIREBASE_CAMPAIGN, bundleZzs2);
                    zzhxVar.zza.zzb.zza(str, bundleZzs2);
                }
            }
            if (TextUtils.isEmpty(str2)) {
                return;
            }
            zzhxVar.zza.zzs.zzay().zzc().zzb("Activity created with referrer", str2);
            if (zzhxVar.zza.zzs.zzf().zzs(null, zzdw.zzY)) {
                if (bundleZzs != null) {
                    zzhxVar.zza.zzG(str, com.google.firebase.messaging.Constants.ScionAnalytics.EVENT_FIREBASE_CAMPAIGN, bundleZzs);
                    zzhxVar.zza.zzb.zza(str, bundleZzs);
                } else {
                    zzhxVar.zza.zzs.zzay().zzc().zzb("Referrer does not contain valid parameters", str2);
                }
                zzhxVar.zza.zzX("auto", "_ldl", null, true);
                return;
            }
            if (!str2.contains("gclid") || (!str2.contains("utm_campaign") && !str2.contains("utm_source") && !str2.contains("utm_medium") && !str2.contains("utm_term") && !str2.contains("utm_content"))) {
                zzhxVar.zza.zzs.zzay().zzc().zza("Activity created with data 'referrer' without required params");
            } else {
                if (TextUtils.isEmpty(str2)) {
                    return;
                }
                zzhxVar.zza.zzX("auto", "_ldl", str2, true);
            }
        } catch (RuntimeException e) {
            zzhxVar.zza.zzs.zzay().zzd().zzb("Throwable caught in handleReferrerForOnActivityCreated", e);
        }
    }
}
