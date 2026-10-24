package com.google.android.gms.measurement.internal;

import android.util.Pair;
import com.google.android.gms.ads.identifier.AdvertisingIdClient;
import com.google.android.gms.internal.measurement.zzna;
import java.math.BigInteger;
import java.security.MessageDigest;
import java.util.HashMap;
import java.util.Locale;
import java.util.Map;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzjo extends zzkh {
    public final zzeu zza;
    public final zzeu zzb;
    public final zzeu zzc;
    public final zzeu zzd;
    public final zzeu zze;
    private final Map zzg;
    private String zzh;
    private boolean zzi;
    private long zzj;

    zzjo(zzkr zzkrVar) {
        super(zzkrVar);
        this.zzg = new HashMap();
        zzey zzeyVarZzm = this.zzs.zzm();
        zzeyVarZzm.getClass();
        this.zza = new zzeu(zzeyVarZzm, "last_delete_stale", 0L);
        zzey zzeyVarZzm2 = this.zzs.zzm();
        zzeyVarZzm2.getClass();
        this.zzb = new zzeu(zzeyVarZzm2, "backoff", 0L);
        zzey zzeyVarZzm3 = this.zzs.zzm();
        zzeyVarZzm3.getClass();
        this.zzc = new zzeu(zzeyVarZzm3, "last_upload", 0L);
        zzey zzeyVarZzm4 = this.zzs.zzm();
        zzeyVarZzm4.getClass();
        this.zzd = new zzeu(zzeyVarZzm4, "last_upload_attempt", 0L);
        zzey zzeyVarZzm5 = this.zzs.zzm();
        zzeyVarZzm5.getClass();
        this.zze = new zzeu(zzeyVarZzm5, "midnight_offset", 0L);
    }

    @Deprecated
    final Pair zza(String str) {
        zzjn zzjnVar;
        zzg();
        long jElapsedRealtime = this.zzs.zzav().elapsedRealtime();
        zzna.zzc();
        if (this.zzs.zzf().zzs(null, zzdw.zzar)) {
            zzjn zzjnVar2 = (zzjn) this.zzg.get(str);
            if (zzjnVar2 != null && jElapsedRealtime < zzjnVar2.zzc) {
                return new Pair(zzjnVar2.zza, Boolean.valueOf(zzjnVar2.zzb));
            }
            AdvertisingIdClient.setShouldSkipGmsCoreVersionCheck(true);
            long jZzi = jElapsedRealtime + this.zzs.zzf().zzi(str, zzdw.zza);
            try {
                AdvertisingIdClient.Info advertisingIdInfo = AdvertisingIdClient.getAdvertisingIdInfo(this.zzs.zzau());
                if (advertisingIdInfo == null) {
                    return new Pair("", false);
                }
                String id = advertisingIdInfo.getId();
                zzjnVar = id != null ? new zzjn(id, advertisingIdInfo.isLimitAdTrackingEnabled(), jZzi) : new zzjn("", advertisingIdInfo.isLimitAdTrackingEnabled(), jZzi);
                this.zzg.put(str, zzjnVar);
                AdvertisingIdClient.setShouldSkipGmsCoreVersionCheck(false);
                return new Pair(zzjnVar.zza, Boolean.valueOf(zzjnVar.zzb));
            } catch (Exception e) {
                this.zzs.zzay().zzc().zzb("Unable to get advertising id", e);
                zzjnVar = new zzjn("", false, jZzi);
            }
        } else {
            String str2 = this.zzh;
            if (str2 != null && jElapsedRealtime < this.zzj) {
                return new Pair(str2, Boolean.valueOf(this.zzi));
            }
            this.zzj = jElapsedRealtime + this.zzs.zzf().zzi(str, zzdw.zza);
            AdvertisingIdClient.setShouldSkipGmsCoreVersionCheck(true);
            try {
                AdvertisingIdClient.Info advertisingIdInfo2 = AdvertisingIdClient.getAdvertisingIdInfo(this.zzs.zzau());
                if (advertisingIdInfo2 == null) {
                    return new Pair("", false);
                }
                this.zzh = "";
                String id2 = advertisingIdInfo2.getId();
                if (id2 != null) {
                    this.zzh = id2;
                }
                this.zzi = advertisingIdInfo2.isLimitAdTrackingEnabled();
                AdvertisingIdClient.setShouldSkipGmsCoreVersionCheck(false);
                return new Pair(this.zzh, Boolean.valueOf(this.zzi));
            } catch (Exception e2) {
                this.zzs.zzay().zzc().zzb("Unable to get advertising id", e2);
                this.zzh = "";
            }
        }
    }

    @Override // com.google.android.gms.measurement.internal.zzkh
    protected final boolean zzb() {
        return false;
    }

    final Pair zzd(String str, zzah zzahVar) {
        return zzahVar.zzi(zzag.AD_STORAGE) ? zza(str) : new Pair("", false);
    }

    @Deprecated
    final String zzf(String str) {
        zzg();
        String str2 = (String) zza(str).first;
        MessageDigest messageDigestZzE = zzky.zzE();
        if (messageDigestZzE == null) {
            return null;
        }
        return String.format(Locale.US, "%032X", new BigInteger(1, messageDigestZzE.digest(str2.getBytes())));
    }
}
