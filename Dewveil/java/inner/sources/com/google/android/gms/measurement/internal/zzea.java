package com.google.android.gms.measurement.internal;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.res.Resources;
import android.text.TextUtils;
import androidx.core.os.EnvironmentCompat;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.common.wrappers.InstantApps;
import com.google.android.gms.common.wrappers.Wrappers;
import com.google.android.gms.internal.measurement.zzoe;
import com.google.android.gms.internal.measurement.zzpo;
import java.security.MessageDigest;
import java.util.Iterator;
import java.util.List;
import org.checkerframework.checker.nullness.qual.EnsuresNonNull;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzea extends zzf {
    private String zza;
    private String zzb;
    private int zzc;
    private String zzd;
    private String zze;
    private long zzf;
    private final long zzg;
    private List zzh;
    private int zzi;
    private String zzj;
    private String zzk;

    zzea(zzft zzftVar, long j) {
        super(zzftVar);
        this.zzg = j;
    }

    /* JADX WARN: Code duplicated, block: B:31:0x00c6  */
    /* JADX WARN: Code duplicated, block: B:34:0x00d0  */
    /* JADX WARN: Code duplicated, block: B:35:0x00e1  */
    /* JADX WARN: Code duplicated, block: B:36:0x00f1  */
    /* JADX WARN: Code duplicated, block: B:37:0x0101  */
    /* JADX WARN: Code duplicated, block: B:38:0x0111  */
    /* JADX WARN: Code duplicated, block: B:39:0x0121  */
    /* JADX WARN: Code duplicated, block: B:40:0x0131  */
    /* JADX WARN: Code duplicated, block: B:41:0x0141  */
    /* JADX WARN: Code duplicated, block: B:42:0x0151  */
    /* JADX WARN: Code duplicated, block: B:45:0x016b  */
    /* JADX WARN: Code duplicated, block: B:48:0x018b  */
    /* JADX WARN: Code duplicated, block: B:51:0x0194 A[Catch: IllegalStateException -> 0x01db, TryCatch #3 {IllegalStateException -> 0x01db, blocks: (B:46:0x0173, B:49:0x018c, B:51:0x0194, B:55:0x01b2, B:54:0x01ae, B:57:0x01bc, B:59:0x01d2, B:61:0x01d7, B:60:0x01d5), top: B:89:0x0173 }] */
    /* JADX WARN: Code duplicated, block: B:53:0x01ad  */
    /* JADX WARN: Code duplicated, block: B:54:0x01ae A[Catch: IllegalStateException -> 0x01db, TryCatch #3 {IllegalStateException -> 0x01db, blocks: (B:46:0x0173, B:49:0x018c, B:51:0x0194, B:55:0x01b2, B:54:0x01ae, B:57:0x01bc, B:59:0x01d2, B:61:0x01d7, B:60:0x01d5), top: B:89:0x0173 }] */
    /* JADX WARN: Code duplicated, block: B:57:0x01bc A[Catch: IllegalStateException -> 0x01db, TryCatch #3 {IllegalStateException -> 0x01db, blocks: (B:46:0x0173, B:49:0x018c, B:51:0x0194, B:55:0x01b2, B:54:0x01ae, B:57:0x01bc, B:59:0x01d2, B:61:0x01d7, B:60:0x01d5), top: B:89:0x0173 }] */
    /* JADX WARN: Code duplicated, block: B:59:0x01d2 A[Catch: IllegalStateException -> 0x01db, TryCatch #3 {IllegalStateException -> 0x01db, blocks: (B:46:0x0173, B:49:0x018c, B:51:0x0194, B:55:0x01b2, B:54:0x01ae, B:57:0x01bc, B:59:0x01d2, B:61:0x01d7, B:60:0x01d5), top: B:89:0x0173 }] */
    /* JADX WARN: Code duplicated, block: B:60:0x01d5 A[Catch: IllegalStateException -> 0x01db, TryCatch #3 {IllegalStateException -> 0x01db, blocks: (B:46:0x0173, B:49:0x018c, B:51:0x0194, B:55:0x01b2, B:54:0x01ae, B:57:0x01bc, B:59:0x01d2, B:61:0x01d7, B:60:0x01d5), top: B:89:0x0173 }] */
    /* JADX WARN: Code duplicated, block: B:68:0x0206  */
    /* JADX WARN: Code duplicated, block: B:70:0x020c  */
    /* JADX WARN: Code duplicated, block: B:71:0x021c  */
    /* JADX WARN: Code duplicated, block: B:74:0x0226  */
    /* JADX WARN: Code duplicated, block: B:77:0x023b  */
    /* JADX WARN: Code duplicated, block: B:79:0x023f  */
    /* JADX WARN: Code duplicated, block: B:81:0x024c  */
    /* JADX WARN: Code duplicated, block: B:91:0x023b A[SYNTHETIC] */
    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.google.android.gms.measurement.internal.zzf
    @EnsuresNonNull({"appId", "appStore", "appName", "gmpAppId", "gaAppId"})
    protected final void zzd() {
        String str;
        String string;
        Object[] objArr;
        int iZza;
        List listZzp;
        Iterator it;
        String strZzc;
        String str2;
        Context contextZzau;
        String strZzz;
        String packageName = this.zzs.zzau().getPackageName();
        PackageManager packageManager = this.zzs.zzau().getPackageManager();
        int i = Integer.MIN_VALUE;
        String installerPackageName = EnvironmentCompat.MEDIA_UNKNOWN;
        String str3 = "Unknown";
        try {
            if (packageManager != null) {
                try {
                    installerPackageName = packageManager.getInstallerPackageName(packageName);
                } catch (IllegalArgumentException unused) {
                    this.zzs.zzay().zzd().zzb("Error retrieving app installer package name. appId", zzej.zzn(packageName));
                }
                if (installerPackageName == null) {
                    installerPackageName = "manual_install";
                } else if ("com.android.vending".equals(installerPackageName)) {
                    installerPackageName = "";
                }
                try {
                    PackageInfo packageInfo = packageManager.getPackageInfo(this.zzs.zzau().getPackageName(), 0);
                    if (packageInfo != null) {
                        CharSequence applicationLabel = packageManager.getApplicationLabel(packageInfo.applicationInfo);
                        string = !TextUtils.isEmpty(applicationLabel) ? applicationLabel.toString() : "Unknown";
                        try {
                            str3 = packageInfo.versionName;
                            i = packageInfo.versionCode;
                        } catch (PackageManager.NameNotFoundException unused2) {
                            str = str3;
                            str3 = string;
                            this.zzs.zzay().zzd().zzc("Error retrieving package info. appId, appName", zzej.zzn(packageName), str3);
                            string = str3;
                            str3 = str;
                        }
                    }
                } catch (PackageManager.NameNotFoundException unused3) {
                    str = "Unknown";
                }
                this.zza = packageName;
                this.zzd = installerPackageName;
                this.zzb = str3;
                this.zzc = i;
                this.zze = string;
                this.zzf = 0L;
                if (TextUtils.isEmpty(this.zzs.zzw()) && "am".equals(this.zzs.zzx())) {
                    objArr = true;
                } else {
                    objArr = false;
                }
                iZza = this.zzs.zza();
                switch (iZza) {
                    case 0:
                        this.zzs.zzay().zzj().zza("App measurement collection enabled");
                        break;
                    case 1:
                        this.zzs.zzay().zzi().zza("App measurement deactivated via the manifest");
                        break;
                    case 2:
                        this.zzs.zzay().zzj().zza("App measurement deactivated via the init parameters");
                        break;
                    case 3:
                        this.zzs.zzay().zzi().zza("App measurement disabled by setAnalyticsCollectionEnabled(false)");
                        break;
                    case 4:
                        this.zzs.zzay().zzi().zza("App measurement disabled via the manifest");
                        break;
                    case 5:
                        this.zzs.zzay().zzj().zza("App measurement disabled via the init parameters");
                        break;
                    case 6:
                        this.zzs.zzay().zzl().zza("App measurement deactivated via resources. This method is being deprecated. Please refer to https://firebase.google.com/support/guides/disable-analytics");
                        break;
                    case 7:
                        this.zzs.zzay().zzi().zza("App measurement disabled via the global data collection setting");
                        break;
                    default:
                        this.zzs.zzay().zzi().zza("App measurement disabled due to denied storage consent");
                        break;
                }
                this.zzj = "";
                this.zzk = "";
                this.zzs.zzaw();
                if (objArr != false) {
                    this.zzk = this.zzs.zzw();
                }
                strZzc = zzie.zzc(this.zzs.zzau(), "google_app_id", this.zzs.zzz());
                this.zzj = true != TextUtils.isEmpty(strZzc) ? strZzc : "";
                if (!TextUtils.isEmpty(strZzc)) {
                    contextZzau = this.zzs.zzau();
                    strZzz = this.zzs.zzz();
                    Preconditions.checkNotNull(contextZzau);
                    Resources resources = contextZzau.getResources();
                    if (!TextUtils.isEmpty(strZzz)) {
                        strZzz = zzfl.zza(contextZzau);
                    }
                    this.zzk = zzfl.zzb("admob_app_id", resources, strZzz);
                }
                if (iZza == 0) {
                    zzeh zzehVarZzj = this.zzs.zzay().zzj();
                    String str4 = this.zza;
                    if (TextUtils.isEmpty(this.zzj)) {
                        str2 = this.zzk;
                    } else {
                        str2 = this.zzj;
                    }
                    zzehVarZzj.zzc("App measurement enabled for app package, google app id", str4, str2);
                }
                this.zzh = null;
                this.zzs.zzaw();
                listZzp = this.zzs.zzf().zzp("analytics.safelisted_events");
                if (listZzp != null) {
                    this.zzh = listZzp;
                } else if (listZzp.size() == 0) {
                    this.zzs.zzay().zzl().zza("Safelisted event list is empty. Ignoring");
                } else {
                    it = listZzp.iterator();
                    do {
                        if (it.hasNext()) {
                            this.zzh = listZzp;
                        }
                    } while (this.zzs.zzv().zzaa("safelisted event", (String) it.next()));
                }
                if (packageManager != null) {
                    this.zzi = InstantApps.isInstantApp(this.zzs.zzau()) ? 1 : 0;
                } else {
                    this.zzi = 0;
                }
            }
            this.zzs.zzay().zzd().zzb("PackageManager is null, app identity information might be inaccurate. appId", zzej.zzn(packageName));
            strZzc = zzie.zzc(this.zzs.zzau(), "google_app_id", this.zzs.zzz());
            this.zzj = true != TextUtils.isEmpty(strZzc) ? strZzc : "";
            if (!TextUtils.isEmpty(strZzc)) {
                contextZzau = this.zzs.zzau();
                strZzz = this.zzs.zzz();
                Preconditions.checkNotNull(contextZzau);
                Resources resources2 = contextZzau.getResources();
                if (!TextUtils.isEmpty(strZzz)) {
                    strZzz = zzfl.zza(contextZzau);
                }
                this.zzk = zzfl.zzb("admob_app_id", resources2, strZzz);
            }
            if (iZza == 0) {
                zzeh zzehVarZzj2 = this.zzs.zzay().zzj();
                String str5 = this.zza;
                if (TextUtils.isEmpty(this.zzj)) {
                    str2 = this.zzk;
                } else {
                    str2 = this.zzj;
                }
                zzehVarZzj2.zzc("App measurement enabled for app package, google app id", str5, str2);
            }
        } catch (IllegalStateException e) {
            this.zzs.zzay().zzd().zzc("Fetching Google App Id failed with exception. appId", zzej.zzn(packageName), e);
        }
        string = "Unknown";
        this.zza = packageName;
        this.zzd = installerPackageName;
        this.zzb = str3;
        this.zzc = i;
        this.zze = string;
        this.zzf = 0L;
        if (TextUtils.isEmpty(this.zzs.zzw())) {
            objArr = false;
        } else {
            objArr = false;
        }
        iZza = this.zzs.zza();
        switch (iZza) {
            case 0:
                this.zzs.zzay().zzj().zza("App measurement collection enabled");
                break;
            case 1:
                this.zzs.zzay().zzi().zza("App measurement deactivated via the manifest");
                break;
            case 2:
                this.zzs.zzay().zzj().zza("App measurement deactivated via the init parameters");
                break;
            case 3:
                this.zzs.zzay().zzi().zza("App measurement disabled by setAnalyticsCollectionEnabled(false)");
                break;
            case 4:
                this.zzs.zzay().zzi().zza("App measurement disabled via the manifest");
                break;
            case 5:
                this.zzs.zzay().zzj().zza("App measurement disabled via the init parameters");
                break;
            case 6:
                this.zzs.zzay().zzl().zza("App measurement deactivated via resources. This method is being deprecated. Please refer to https://firebase.google.com/support/guides/disable-analytics");
                break;
            case 7:
                this.zzs.zzay().zzi().zza("App measurement disabled via the global data collection setting");
                break;
            default:
                this.zzs.zzay().zzi().zza("App measurement disabled due to denied storage consent");
                break;
        }
        this.zzj = "";
        this.zzk = "";
        this.zzs.zzaw();
        if (objArr != false) {
            this.zzk = this.zzs.zzw();
        }
        this.zzh = null;
        this.zzs.zzaw();
        listZzp = this.zzs.zzf().zzp("analytics.safelisted_events");
        if (listZzp != null) {
            this.zzh = listZzp;
        } else if (listZzp.size() == 0) {
            this.zzs.zzay().zzl().zza("Safelisted event list is empty. Ignoring");
        } else {
            it = listZzp.iterator();
            do {
                if (it.hasNext()) {
                    this.zzh = listZzp;
                }
            } while (this.zzs.zzv().zzaa("safelisted event", (String) it.next()));
        }
        if (packageManager != null) {
            this.zzi = InstantApps.isInstantApp(this.zzs.zzau()) ? 1 : 0;
        } else {
            this.zzi = 0;
        }
    }

    @Override // com.google.android.gms.measurement.internal.zzf
    protected final boolean zzf() {
        return true;
    }

    final int zzh() {
        zza();
        return this.zzi;
    }

    final int zzi() {
        zza();
        return this.zzc;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r9v33, types: [com.google.android.gms.measurement.internal.zzgm, com.google.android.gms.measurement.internal.zzky] */
    /* JADX WARN: Type inference failed for: r9v34, types: [com.google.android.gms.measurement.internal.zzgm] */
    /* JADX WARN: Type inference failed for: r9v38 */
    /* JADX WARN: Type inference failed for: r9v43 */
    /* JADX WARN: Type inference failed for: r9v44 */
    /* JADX WARN: Type inference failed for: r9v45 */
    final zzp zzj(String str) {
        String str2;
        long j;
        zzg();
        String strZzl = zzl();
        String strZzm = zzm();
        zza();
        String str3 = this.zzb;
        zza();
        long j2 = this.zzc;
        zza();
        Preconditions.checkNotNull(this.zzd);
        String str4 = this.zzd;
        this.zzs.zzf().zzh();
        zza();
        zzg();
        long j3 = this.zzf;
        long j4 = j3;
        if (j3 == 0) {
            ?? Zzv = this.zzs.zzv();
            Context contextZzau = this.zzs.zzau();
            String packageName = this.zzs.zzau().getPackageName();
            Zzv.zzg();
            Preconditions.checkNotNull(contextZzau);
            Preconditions.checkNotEmpty(packageName);
            PackageManager packageManager = contextZzau.getPackageManager();
            MessageDigest messageDigestZzE = zzky.zzE();
            long j5 = -1;
            j5 = -1;
            if (messageDigestZzE == null) {
                Zzv.zzs.zzay().zzd().zza("Could not get MD5 instance");
            } else {
                if (packageManager != null) {
                    try {
                        if (Zzv.zzaf(contextZzau, packageName)) {
                            j5 = 0;
                            Zzv = Zzv;
                        } else {
                            PackageInfo packageInfo = Wrappers.packageManager(contextZzau).getPackageInfo(Zzv.zzs.zzau().getPackageName(), 64);
                            if (packageInfo.signatures == null || packageInfo.signatures.length <= 0) {
                                Zzv.zzs.zzay().zzk().zza("Could not get signatures");
                                Zzv = Zzv;
                            } else {
                                long jZzp = zzky.zzp(messageDigestZzE.digest(packageInfo.signatures[0].toByteArray()));
                                j5 = jZzp;
                                Zzv = jZzp;
                            }
                        }
                    } catch (PackageManager.NameNotFoundException e) {
                        Zzv.zzs.zzay().zzd().zzb("Package name not found", e);
                        j = 0;
                    }
                }
                j = 0;
                this.zzf = j;
                j4 = j;
            }
            j = j5;
            this.zzf = j;
            j4 = j;
        }
        long j6 = j4;
        boolean zZzJ = this.zzs.zzJ();
        boolean z = !this.zzs.zzm().zzk;
        zzg();
        if (this.zzs.zzJ()) {
            zzpo.zzc();
            if (this.zzs.zzf().zzs(null, zzdw.zzaa)) {
                this.zzs.zzay().zzj().zza("Disabled IID for tests.");
            } else {
                try {
                    Class<?> clsLoadClass = this.zzs.zzau().getClassLoader().loadClass("com.google.firebase.analytics.FirebaseAnalytics");
                    if (clsLoadClass != null) {
                        try {
                            Object objInvoke = clsLoadClass.getDeclaredMethod("getInstance", Context.class).invoke(null, this.zzs.zzau());
                            if (objInvoke != null) {
                                try {
                                    str2 = (String) clsLoadClass.getDeclaredMethod("getFirebaseInstanceId", new Class[0]).invoke(objInvoke, new Object[0]);
                                } catch (Exception unused) {
                                    this.zzs.zzay().zzl().zza("Failed to retrieve Firebase Instance Id");
                                    str2 = null;
                                }
                            }
                        } catch (Exception unused2) {
                            this.zzs.zzay().zzm().zza("Failed to obtain Firebase Analytics instance");
                        }
                    }
                } catch (ClassNotFoundException unused3) {
                }
            }
            str2 = null;
        } else {
            str2 = null;
        }
        zzft zzftVar = this.zzs;
        long jZza = zzftVar.zzm().zzc.zza();
        long jMin = jZza == 0 ? zzftVar.zzc : Math.min(zzftVar.zzc, jZza);
        zza();
        int i = this.zzi;
        boolean zZzr = this.zzs.zzf().zzr();
        zzey zzeyVarZzm = this.zzs.zzm();
        zzeyVarZzm.zzg();
        boolean z2 = zzeyVarZzm.zza().getBoolean("deferred_analytics_collection", false);
        zza();
        String str5 = this.zzk;
        Boolean boolZzk = this.zzs.zzf().zzk("google_analytics_default_allow_ad_personalization_signals");
        return new zzp(strZzl, strZzm, str3, j2, str4, 60000L, j6, str, zZzJ, z, str2, 0L, jMin, i, zZzr, z2, str5, boolZzk == null ? null : Boolean.valueOf(!boolZzk.booleanValue()), this.zzg, this.zzh, (String) null, this.zzs.zzm().zzc().zzh());
    }

    final String zzk() {
        zza();
        return this.zzk;
    }

    final String zzl() {
        zza();
        Preconditions.checkNotNull(this.zza);
        return this.zza;
    }

    final String zzm() {
        zzoe.zzc();
        if (this.zzs.zzf().zzs(null, zzdw.zzal)) {
            zzg();
        }
        zza();
        Preconditions.checkNotNull(this.zzj);
        return this.zzj;
    }

    final List zzn() {
        return this.zzh;
    }
}
