package com.google.android.gms.measurement.internal;

import android.content.ServiceConnection;
import android.net.Uri;
import android.os.Bundle;
import com.adjust.sdk.Constants;
import com.google.android.gms.common.stats.ConnectionTracker;
import com.google.android.gms.internal.measurement.zzns;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzez implements Runnable {
    final /* synthetic */ com.google.android.gms.internal.measurement.zzbr zza;
    final /* synthetic */ ServiceConnection zzb;
    final /* synthetic */ zzfa zzc;

    zzez(zzfa zzfaVar, com.google.android.gms.internal.measurement.zzbr zzbrVar, ServiceConnection serviceConnection) {
        this.zzc = zzfaVar;
        this.zza = zzbrVar;
        this.zzb = serviceConnection;
    }

    /* JADX WARN: Code duplicated, block: B:40:0x0124  */
    /* JADX WARN: Code duplicated, block: B:43:0x013b  */
    @Override // java.lang.Runnable
    public final void run() {
        Bundle bundleZzd;
        zzfa zzfaVar = this.zzc;
        zzfb zzfbVar = zzfaVar.zza;
        String str = zzfaVar.zzb;
        com.google.android.gms.internal.measurement.zzbr zzbrVar = this.zza;
        ServiceConnection serviceConnection = this.zzb;
        zzfbVar.zza.zzaz().zzg();
        Bundle bundle = new Bundle();
        bundle.putString("package_name", str);
        try {
            bundleZzd = zzbrVar.zzd(bundle);
            if (bundleZzd == null) {
                zzfbVar.zza.zzay().zzd().zza("Install Referrer Service returned a null response");
                bundleZzd = null;
            }
        } catch (Exception e) {
            zzfbVar.zza.zzay().zzd().zzb("Exception occurred while retrieving the Install Referrer", e.getMessage());
        }
        zzfbVar.zza.zzaz().zzg();
        zzft.zzO();
        if (bundleZzd != null) {
            long j = bundleZzd.getLong("install_begin_timestamp_seconds", 0L) * 1000;
            if (j == 0) {
                zzfbVar.zza.zzay().zzk().zza("Service response is missing Install Referrer install timestamp");
            } else {
                String string = bundleZzd.getString(Constants.INSTALL_REFERRER);
                if (string == null || string.isEmpty()) {
                    zzfbVar.zza.zzay().zzd().zza("No referrer defined in Install Referrer response");
                } else {
                    zzfbVar.zza.zzay().zzj().zzb("InstallReferrer API result", string);
                    zzky zzkyVarZzv = zzfbVar.zza.zzv();
                    Uri uri = Uri.parse(string.length() != 0 ? "?".concat(string) : new String("?"));
                    zzns.zzc();
                    Bundle bundleZzs = zzkyVarZzv.zzs(uri, zzfbVar.zza.zzf().zzs(null, zzdw.zzau));
                    if (bundleZzs == null) {
                        zzfbVar.zza.zzay().zzd().zza("No campaign params defined in Install Referrer result");
                    } else {
                        String string2 = bundleZzs.getString("medium");
                        if (string2 == null || "(not set)".equalsIgnoreCase(string2) || "organic".equalsIgnoreCase(string2)) {
                            if (j == zzfbVar.zza.zzm().zzd.zza()) {
                                zzfbVar.zza.zzay().zzj().zza("Logging Install Referrer campaign from module while it may have already been logged.");
                            }
                            if (zzfbVar.zza.zzJ()) {
                                zzfbVar.zza.zzm().zzd.zzb(j);
                                zzfbVar.zza.zzay().zzj().zzb("Logging Install Referrer campaign from gmscore with ", "referrer API v2");
                                bundleZzs.putString("_cis", "referrer API v2");
                                zzfbVar.zza.zzq().zzF("auto", com.google.firebase.messaging.Constants.ScionAnalytics.EVENT_FIREBASE_CAMPAIGN, bundleZzs, str);
                            }
                        } else {
                            long j2 = bundleZzd.getLong("referrer_click_timestamp_seconds", 0L) * 1000;
                            if (j2 == 0) {
                                zzfbVar.zza.zzay().zzd().zza("Install Referrer is missing click timestamp for ad campaign");
                            } else {
                                bundleZzs.putLong("click_timestamp", j2);
                                if (j == zzfbVar.zza.zzm().zzd.zza()) {
                                    zzfbVar.zza.zzay().zzj().zza("Logging Install Referrer campaign from module while it may have already been logged.");
                                }
                                if (zzfbVar.zza.zzJ()) {
                                    zzfbVar.zza.zzm().zzd.zzb(j);
                                    zzfbVar.zza.zzay().zzj().zzb("Logging Install Referrer campaign from gmscore with ", "referrer API v2");
                                    bundleZzs.putString("_cis", "referrer API v2");
                                    zzfbVar.zza.zzq().zzF("auto", com.google.firebase.messaging.Constants.ScionAnalytics.EVENT_FIREBASE_CAMPAIGN, bundleZzs, str);
                                }
                            }
                        }
                    }
                }
            }
        }
        ConnectionTracker.getInstance().unbindService(zzfbVar.zza.zzau(), serviceConnection);
    }
}
