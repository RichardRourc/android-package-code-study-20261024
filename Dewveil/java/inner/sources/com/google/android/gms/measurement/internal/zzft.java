package com.google.android.gms.measurement.internal;

import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.pm.ResolveInfo;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Pair;
import com.adjust.sdk.Constants;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.common.util.Clock;
import com.google.android.gms.common.util.DefaultClock;
import com.google.android.gms.common.wrappers.Wrappers;
import com.google.android.gms.internal.measurement.zzob;
import java.net.URL;
import java.util.List;
import java.util.Map;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicReference;
import org.checkerframework.dataflow.qual.Pure;
import org.checkerframework.dataflow.qual.SideEffectFree;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzft implements zzgo {
    private static volatile zzft zzd;
    private zzea zzA;
    private Boolean zzC;
    private long zzD;
    private volatile Boolean zzE;
    private volatile boolean zzF;
    private int zzG;
    protected Boolean zza;
    protected Boolean zzb;
    final long zzc;
    private final Context zze;
    private final String zzf;
    private final String zzg;
    private final String zzh;
    private final boolean zzi;
    private final zzaa zzj;
    private final zzaf zzk;
    private final zzey zzl;
    private final zzej zzm;
    private final zzfq zzn;
    private final zzkc zzo;
    private final zzky zzp;
    private final zzee zzq;
    private final Clock zzr;
    private final zzim zzs;
    private final zzhy zzt;
    private final zzd zzu;
    private final zzic zzv;
    private final String zzw;
    private zzec zzx;
    private zzjm zzy;
    private zzao zzz;
    private boolean zzB = false;
    private final AtomicInteger zzH = new AtomicInteger(0);

    zzft(zzgw zzgwVar) {
        Bundle bundle;
        Preconditions.checkNotNull(zzgwVar);
        Context context = zzgwVar.zza;
        zzaa zzaaVar = new zzaa(context);
        this.zzj = zzaaVar;
        zzdt.zza = zzaaVar;
        this.zze = context;
        this.zzf = zzgwVar.zzb;
        this.zzg = zzgwVar.zzc;
        this.zzh = zzgwVar.zzd;
        this.zzi = zzgwVar.zzh;
        this.zzE = zzgwVar.zze;
        this.zzw = zzgwVar.zzj;
        this.zzF = true;
        com.google.android.gms.internal.measurement.zzcl zzclVar = zzgwVar.zzg;
        if (zzclVar != null && (bundle = zzclVar.zzg) != null) {
            Object obj = bundle.get("measurementEnabled");
            if (obj instanceof Boolean) {
                this.zza = (Boolean) obj;
            }
            Object obj2 = zzclVar.zzg.get("measurementDeactivated");
            if (obj2 instanceof Boolean) {
                this.zzb = (Boolean) obj2;
            }
        }
        com.google.android.gms.internal.measurement.zzhu.zze(context);
        Clock defaultClock = DefaultClock.getInstance();
        this.zzr = defaultClock;
        Long l = zzgwVar.zzi;
        this.zzc = l != null ? l.longValue() : defaultClock.currentTimeMillis();
        this.zzk = new zzaf(this);
        zzey zzeyVar = new zzey(this);
        zzeyVar.zzv();
        this.zzl = zzeyVar;
        zzej zzejVar = new zzej(this);
        zzejVar.zzv();
        this.zzm = zzejVar;
        zzky zzkyVar = new zzky(this);
        zzkyVar.zzv();
        this.zzp = zzkyVar;
        this.zzq = new zzee(new zzgv(zzgwVar, this));
        this.zzu = new zzd(this);
        zzim zzimVar = new zzim(this);
        zzimVar.zzb();
        this.zzs = zzimVar;
        zzhy zzhyVar = new zzhy(this);
        zzhyVar.zzb();
        this.zzt = zzhyVar;
        zzkc zzkcVar = new zzkc(this);
        zzkcVar.zzb();
        this.zzo = zzkcVar;
        zzic zzicVar = new zzic(this);
        zzicVar.zzv();
        this.zzv = zzicVar;
        zzfq zzfqVar = new zzfq(this);
        zzfqVar.zzv();
        this.zzn = zzfqVar;
        com.google.android.gms.internal.measurement.zzcl zzclVar2 = zzgwVar.zzg;
        boolean z = zzclVar2 == null || zzclVar2.zzb == 0;
        if (context.getApplicationContext() instanceof Application) {
            zzhy zzhyVarZzq = zzq();
            if (zzhyVarZzq.zzs.zze.getApplicationContext() instanceof Application) {
                Application application = (Application) zzhyVarZzq.zzs.zze.getApplicationContext();
                if (zzhyVarZzq.zza == null) {
                    zzhyVarZzq.zza = new zzhx(zzhyVarZzq, null);
                }
                if (z) {
                    application.unregisterActivityLifecycleCallbacks(zzhyVarZzq.zza);
                    application.registerActivityLifecycleCallbacks(zzhyVarZzq.zza);
                    zzhyVarZzq.zzs.zzay().zzj().zza("Registered activity lifecycle callback");
                }
            }
        } else {
            zzay().zzk().zza("Application context is not an Application");
        }
        zzfqVar.zzp(new zzfs(this, zzgwVar));
    }

    static /* bridge */ /* synthetic */ void zzA(zzft zzftVar, zzgw zzgwVar) {
        zzftVar.zzaz().zzg();
        zzftVar.zzk.zzn();
        zzao zzaoVar = new zzao(zzftVar);
        zzaoVar.zzv();
        zzftVar.zzz = zzaoVar;
        zzea zzeaVar = new zzea(zzftVar, zzgwVar.zzf);
        zzeaVar.zzb();
        zzftVar.zzA = zzeaVar;
        zzec zzecVar = new zzec(zzftVar);
        zzecVar.zzb();
        zzftVar.zzx = zzecVar;
        zzjm zzjmVar = new zzjm(zzftVar);
        zzjmVar.zzb();
        zzftVar.zzy = zzjmVar;
        zzftVar.zzp.zzw();
        zzftVar.zzl.zzw();
        zzftVar.zzA.zzc();
        zzeh zzehVarZzi = zzftVar.zzay().zzi();
        zzftVar.zzk.zzh();
        zzehVarZzi.zzb("App measurement initialized, version", 60000L);
        zzftVar.zzay().zzi().zza("To enable debug logging run: adb shell setprop log.tag.FA VERBOSE");
        String strZzl = zzeaVar.zzl();
        if (TextUtils.isEmpty(zzftVar.zzf)) {
            if (zzftVar.zzv().zzad(strZzl)) {
                zzftVar.zzay().zzi().zza("Faster debug mode event logging enabled. To disable, run:\n  adb shell setprop debug.firebase.analytics.app .none.");
            } else {
                zzeh zzehVarZzi2 = zzftVar.zzay().zzi();
                String strValueOf = String.valueOf(strZzl);
                zzehVarZzi2.zza(strValueOf.length() != 0 ? "To enable faster debug mode event logging run:\n  adb shell setprop debug.firebase.analytics.app ".concat(strValueOf) : new String("To enable faster debug mode event logging run:\n  adb shell setprop debug.firebase.analytics.app "));
            }
        }
        zzftVar.zzay().zzc().zza("Debug-level message logging enabled");
        if (zzftVar.zzG != zzftVar.zzH.get()) {
            zzftVar.zzay().zzd().zzc("Not all components initialized", Integer.valueOf(zzftVar.zzG), Integer.valueOf(zzftVar.zzH.get()));
        }
        zzftVar.zzB = true;
    }

    static final void zzO() {
        throw new IllegalStateException("Unexpected call on client side");
    }

    private static final void zzP(zzgm zzgmVar) {
        if (zzgmVar == null) {
            throw new IllegalStateException("Component not created");
        }
    }

    private static final void zzQ(zzf zzfVar) {
        if (zzfVar == null) {
            throw new IllegalStateException("Component not created");
        }
        if (zzfVar.zze()) {
            return;
        }
        String strValueOf = String.valueOf(zzfVar.getClass());
        String.valueOf(strValueOf).length();
        throw new IllegalStateException("Component not initialized: ".concat(String.valueOf(strValueOf)));
    }

    private static final void zzR(zzgn zzgnVar) {
        if (zzgnVar == null) {
            throw new IllegalStateException("Component not created");
        }
        if (zzgnVar.zzx()) {
            return;
        }
        String strValueOf = String.valueOf(zzgnVar.getClass());
        String.valueOf(strValueOf).length();
        throw new IllegalStateException("Component not initialized: ".concat(String.valueOf(strValueOf)));
    }

    public static zzft zzp(Context context, com.google.android.gms.internal.measurement.zzcl zzclVar, Long l) {
        Bundle bundle;
        if (zzclVar != null && (zzclVar.zze == null || zzclVar.zzf == null)) {
            zzclVar = new com.google.android.gms.internal.measurement.zzcl(zzclVar.zza, zzclVar.zzb, zzclVar.zzc, zzclVar.zzd, null, null, zzclVar.zzg, null);
        }
        Preconditions.checkNotNull(context);
        Preconditions.checkNotNull(context.getApplicationContext());
        if (zzd == null) {
            synchronized (zzft.class) {
                if (zzd == null) {
                    zzd = new zzft(new zzgw(context, zzclVar, l));
                }
            }
        } else if (zzclVar != null && (bundle = zzclVar.zzg) != null && bundle.containsKey("dataCollectionDefaultEnabled")) {
            Preconditions.checkNotNull(zzd);
            zzd.zzE = Boolean.valueOf(zzclVar.zzg.getBoolean("dataCollectionDefaultEnabled"));
        }
        Preconditions.checkNotNull(zzd);
        return zzd;
    }

    final void zzB() {
        this.zzH.incrementAndGet();
    }

    /* JADX WARN: Code duplicated, block: B:10:0x0017  */
    final /* synthetic */ void zzC(String str, int i, Throwable th, byte[] bArr, Map map) {
        List<ResolveInfo> listQueryIntentActivities;
        if (i == 200 || i == 204) {
            if (th == null) {
                zzm().zzm.zza(true);
                if (bArr != null || bArr.length == 0) {
                    zzay().zzc().zza("Deferred Deep Link response empty.");
                    return;
                }
                try {
                    JSONObject jSONObject = new JSONObject(new String(bArr));
                    String strOptString = jSONObject.optString(Constants.DEEPLINK, "");
                    String strOptString2 = jSONObject.optString("gclid", "");
                    double dOptDouble = jSONObject.optDouble("timestamp", 0.0d);
                    if (TextUtils.isEmpty(strOptString)) {
                        zzay().zzc().zza("Deferred Deep Link is empty.");
                        return;
                    }
                    zzky zzkyVarZzv = zzv();
                    zzft zzftVar = zzkyVarZzv.zzs;
                    if (!TextUtils.isEmpty(strOptString) && (listQueryIntentActivities = zzkyVarZzv.zzs.zze.getPackageManager().queryIntentActivities(new Intent("android.intent.action.VIEW", Uri.parse(strOptString)), 0)) != null && !listQueryIntentActivities.isEmpty()) {
                        Bundle bundle = new Bundle();
                        bundle.putString("gclid", strOptString2);
                        bundle.putString("_cis", "ddp");
                        this.zzt.zzG("auto", com.google.firebase.messaging.Constants.ScionAnalytics.EVENT_FIREBASE_CAMPAIGN, bundle);
                        zzky zzkyVarZzv2 = zzv();
                        if (TextUtils.isEmpty(strOptString)) {
                            return;
                        }
                        try {
                            SharedPreferences.Editor editorEdit = zzkyVarZzv2.zzs.zze.getSharedPreferences("google.analytics.deferred.deeplink.prefs", 0).edit();
                            editorEdit.putString(Constants.DEEPLINK, strOptString);
                            editorEdit.putLong("timestamp", Double.doubleToRawLongBits(dOptDouble));
                            if (editorEdit.commit()) {
                                zzkyVarZzv2.zzs.zze.sendBroadcast(new Intent("android.google.analytics.action.DEEPLINK_ACTION"));
                                return;
                            }
                            return;
                        } catch (RuntimeException e) {
                            zzkyVarZzv2.zzs.zzay().zzd().zzb("Failed to persist Deferred Deep Link. exception", e);
                            return;
                        }
                    }
                    zzay().zzk().zzc("Deferred Deep Link validation failed. gclid, deep link", strOptString2, strOptString);
                    return;
                } catch (JSONException e2) {
                    zzay().zzd().zzb("Failed to parse the Deferred Deep Link response. exception", e2);
                    return;
                }
            }
        } else if (i == 304) {
            i = 304;
            if (th == null) {
                zzm().zzm.zza(true);
                if (bArr != null) {
                }
                zzay().zzc().zza("Deferred Deep Link response empty.");
                return;
            }
        }
        zzay().zzk().zzc("Network Request for Deferred Deep Link failed. response, exception", Integer.valueOf(i), th);
    }

    final void zzD() {
        this.zzG++;
    }

    public final void zzE() {
        zzaz().zzg();
        zzR(zzr());
        String strZzl = zzh().zzl();
        Pair pairZzb = zzm().zzb(strZzl);
        if (!this.zzk.zzr() || ((Boolean) pairZzb.second).booleanValue() || TextUtils.isEmpty((CharSequence) pairZzb.first)) {
            zzay().zzc().zza("ADID unavailable to retrieve Deferred Deep Link. Skipping");
            return;
        }
        zzic zzicVarZzr = zzr();
        zzicVarZzr.zzu();
        ConnectivityManager connectivityManager = (ConnectivityManager) zzicVarZzr.zzs.zze.getSystemService("connectivity");
        NetworkInfo activeNetworkInfo = null;
        if (connectivityManager != null) {
            try {
                activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
            } catch (SecurityException unused) {
            }
        }
        if (activeNetworkInfo == null || !activeNetworkInfo.isConnected()) {
            zzay().zzk().zza("Network is not available for Deferred Deep Link request. Skipping");
            return;
        }
        zzky zzkyVarZzv = zzv();
        zzh().zzs.zzk.zzh();
        URL urlZzD = zzkyVarZzv.zzD(60000L, strZzl, (String) pairZzb.first, (-1) + zzm().zzn.zza());
        if (urlZzD != null) {
            zzic zzicVarZzr2 = zzr();
            zzfr zzfrVar = new zzfr(this);
            zzicVarZzr2.zzg();
            zzicVarZzr2.zzu();
            Preconditions.checkNotNull(urlZzD);
            Preconditions.checkNotNull(zzfrVar);
            zzicVarZzr2.zzs.zzaz().zzo(new zzib(zzicVarZzr2, strZzl, urlZzD, null, null, zzfrVar, null));
        }
    }

    final void zzF(boolean z) {
        this.zzE = Boolean.valueOf(z);
    }

    public final void zzG(boolean z) {
        zzaz().zzg();
        this.zzF = z;
    }

    protected final void zzH(com.google.android.gms.internal.measurement.zzcl zzclVar) {
        zzah zzahVar;
        zzaz().zzg();
        zzah zzahVarZzc = zzm().zzc();
        zzey zzeyVarZzm = zzm();
        zzft zzftVar = zzeyVarZzm.zzs;
        zzeyVarZzm.zzg();
        int i = 100;
        int i2 = zzeyVarZzm.zza().getInt("consent_source", 100);
        zzaf zzafVar = this.zzk;
        zzft zzftVar2 = zzafVar.zzs;
        Boolean boolZzk = zzafVar.zzk("google_analytics_default_allow_ad_storage");
        zzaf zzafVar2 = this.zzk;
        zzft zzftVar3 = zzafVar2.zzs;
        Boolean boolZzk2 = zzafVar2.zzk("google_analytics_default_allow_analytics_storage");
        if (!(boolZzk == null && boolZzk2 == null) && zzm().zzl(-10)) {
            zzahVar = new zzah(boolZzk, boolZzk2);
            i = -10;
        } else {
            if (!TextUtils.isEmpty(zzh().zzm()) && (i2 == 0 || i2 == 30 || i2 == 10 || i2 == 30 || i2 == 30 || i2 == 40)) {
                zzq().zzS(zzah.zza, -10, this.zzc);
            } else if (TextUtils.isEmpty(zzh().zzm()) && zzclVar != null && zzclVar.zzg != null && zzm().zzl(30)) {
                zzahVar = zzah.zza(zzclVar.zzg);
                if (!zzahVar.equals(zzah.zza)) {
                    i = 30;
                }
            }
            zzahVar = null;
        }
        if (zzahVar != null) {
            zzq().zzS(zzahVar, i, this.zzc);
            zzahVarZzc = zzahVar;
        }
        zzq().zzW(zzahVarZzc);
        if (zzm().zzc.zza() == 0) {
            zzay().zzj().zzb("Persisting first open", Long.valueOf(this.zzc));
            zzm().zzc.zzb(this.zzc);
        }
        zzq().zzb.zzc();
        if (zzM()) {
            if (!TextUtils.isEmpty(zzh().zzm()) || !TextUtils.isEmpty(zzh().zzk())) {
                zzky zzkyVarZzv = zzv();
                String strZzm = zzh().zzm();
                zzey zzeyVarZzm2 = zzm();
                zzeyVarZzm2.zzg();
                String string = zzeyVarZzm2.zza().getString("gmp_app_id", null);
                String strZzk = zzh().zzk();
                zzey zzeyVarZzm3 = zzm();
                zzeyVarZzm3.zzg();
                if (zzkyVarZzv.zzam(strZzm, string, strZzk, zzeyVarZzm3.zza().getString("admob_app_id", null))) {
                    zzay().zzi().zza("Rechecking which service to use due to a GMP App Id change");
                    zzey zzeyVarZzm4 = zzm();
                    zzeyVarZzm4.zzg();
                    Boolean boolZzd = zzeyVarZzm4.zzd();
                    SharedPreferences.Editor editorEdit = zzeyVarZzm4.zza().edit();
                    editorEdit.clear();
                    editorEdit.apply();
                    if (boolZzd != null) {
                        zzeyVarZzm4.zzh(boolZzd);
                    }
                    zzi().zzj();
                    this.zzy.zzs();
                    this.zzy.zzr();
                    zzm().zzc.zzb(this.zzc);
                    zzm().zze.zzb(null);
                }
                zzey zzeyVarZzm5 = zzm();
                String strZzm2 = zzh().zzm();
                zzeyVarZzm5.zzg();
                SharedPreferences.Editor editorEdit2 = zzeyVarZzm5.zza().edit();
                editorEdit2.putString("gmp_app_id", strZzm2);
                editorEdit2.apply();
                zzey zzeyVarZzm6 = zzm();
                String strZzk2 = zzh().zzk();
                zzeyVarZzm6.zzg();
                SharedPreferences.Editor editorEdit3 = zzeyVarZzm6.zza().edit();
                editorEdit3.putString("admob_app_id", strZzk2);
                editorEdit3.apply();
            }
            if (!zzm().zzc().zzi(zzag.ANALYTICS_STORAGE)) {
                zzm().zze.zzb(null);
            }
            zzq().zzO(zzm().zze.zza());
            zzob.zzc();
            if (this.zzk.zzs(null, zzdw.zzac)) {
                try {
                    zzv().zzs.zze.getClassLoader().loadClass("com.google.firebase.remoteconfig.FirebaseRemoteConfig");
                } catch (ClassNotFoundException unused) {
                    if (!TextUtils.isEmpty(zzm().zzo.zza())) {
                        zzay().zzk().zza("Remote config removed with active feature rollouts");
                        zzm().zzo.zzb(null);
                    }
                }
            }
            if (!TextUtils.isEmpty(zzh().zzm()) || !TextUtils.isEmpty(zzh().zzk())) {
                boolean zZzJ = zzJ();
                if (!zzm().zzj() && !this.zzk.zzv()) {
                    zzm().zzi(!zZzJ);
                }
                if (zZzJ) {
                    zzq().zzy();
                }
                zzu().zza.zza();
                zzt().zzu(new AtomicReference());
                zzt().zzH(zzm().zzr.zza());
            }
        } else if (zzJ()) {
            if (!zzv().zzac("android.permission.INTERNET")) {
                zzay().zzd().zza("App is missing INTERNET permission");
            }
            if (!zzv().zzac("android.permission.ACCESS_NETWORK_STATE")) {
                zzay().zzd().zza("App is missing ACCESS_NETWORK_STATE permission");
            }
            if (!Wrappers.packageManager(this.zze).isCallerInstantApp() && !this.zzk.zzx()) {
                if (!zzky.zzai(this.zze)) {
                    zzay().zzd().zza("AppMeasurementReceiver not registered/enabled");
                }
                if (!zzky.zzaj(this.zze, false)) {
                    zzay().zzd().zza("AppMeasurementService not registered/enabled");
                }
            }
            zzay().zzd().zza("Uploading is not possible. App measurement disabled");
        }
        zzm().zzi.zza(true);
    }

    public final boolean zzI() {
        return this.zzE != null && this.zzE.booleanValue();
    }

    public final boolean zzJ() {
        return zza() == 0;
    }

    public final boolean zzK() {
        zzaz().zzg();
        return this.zzF;
    }

    @Pure
    public final boolean zzL() {
        return TextUtils.isEmpty(this.zzf);
    }

    protected final boolean zzM() {
        if (!this.zzB) {
            throw new IllegalStateException("AppMeasurement is not initialized");
        }
        zzaz().zzg();
        Boolean bool = this.zzC;
        if (bool == null || this.zzD == 0 || (!bool.booleanValue() && Math.abs(this.zzr.elapsedRealtime() - this.zzD) > 1000)) {
            this.zzD = this.zzr.elapsedRealtime();
            boolean z = true;
            Boolean boolValueOf = Boolean.valueOf(zzv().zzac("android.permission.INTERNET") && zzv().zzac("android.permission.ACCESS_NETWORK_STATE") && (Wrappers.packageManager(this.zze).isCallerInstantApp() || this.zzk.zzx() || (zzky.zzai(this.zze) && zzky.zzaj(this.zze, false))));
            this.zzC = boolValueOf;
            if (boolValueOf.booleanValue()) {
                if (!zzv().zzW(zzh().zzm(), zzh().zzk()) && TextUtils.isEmpty(zzh().zzk())) {
                    z = false;
                }
                this.zzC = Boolean.valueOf(z);
            }
        }
        return this.zzC.booleanValue();
    }

    @Pure
    public final boolean zzN() {
        return this.zzi;
    }

    public final int zza() {
        zzaz().zzg();
        if (this.zzk.zzv()) {
            return 1;
        }
        Boolean bool = this.zzb;
        if (bool != null && bool.booleanValue()) {
            return 2;
        }
        zzaz().zzg();
        if (!this.zzF) {
            return 8;
        }
        Boolean boolZzd = zzm().zzd();
        if (boolZzd != null) {
            return boolZzd.booleanValue() ? 0 : 3;
        }
        zzaf zzafVar = this.zzk;
        zzaa zzaaVar = zzafVar.zzs.zzj;
        Boolean boolZzk = zzafVar.zzk("firebase_analytics_collection_enabled");
        if (boolZzk != null) {
            return boolZzk.booleanValue() ? 0 : 4;
        }
        Boolean bool2 = this.zza;
        if (bool2 != null) {
            return bool2.booleanValue() ? 0 : 5;
        }
        return (this.zzE == null || this.zzE.booleanValue()) ? 0 : 7;
    }

    @Override // com.google.android.gms.measurement.internal.zzgo
    @Pure
    public final Context zzau() {
        return this.zze;
    }

    @Override // com.google.android.gms.measurement.internal.zzgo
    @Pure
    public final Clock zzav() {
        return this.zzr;
    }

    @Override // com.google.android.gms.measurement.internal.zzgo
    @Pure
    public final zzaa zzaw() {
        return this.zzj;
    }

    @Override // com.google.android.gms.measurement.internal.zzgo
    @Pure
    public final zzej zzay() {
        zzR(this.zzm);
        return this.zzm;
    }

    @Override // com.google.android.gms.measurement.internal.zzgo
    @Pure
    public final zzfq zzaz() {
        zzR(this.zzn);
        return this.zzn;
    }

    @Pure
    public final zzd zzd() {
        zzd zzdVar = this.zzu;
        if (zzdVar != null) {
            return zzdVar;
        }
        throw new IllegalStateException("Component not created");
    }

    @Pure
    public final zzaf zzf() {
        return this.zzk;
    }

    @Pure
    public final zzao zzg() {
        zzR(this.zzz);
        return this.zzz;
    }

    @Pure
    public final zzea zzh() {
        zzQ(this.zzA);
        return this.zzA;
    }

    @Pure
    public final zzec zzi() {
        zzQ(this.zzx);
        return this.zzx;
    }

    @Pure
    public final zzee zzj() {
        return this.zzq;
    }

    public final zzej zzl() {
        zzej zzejVar = this.zzm;
        if (zzejVar == null || !zzejVar.zzx()) {
            return null;
        }
        return zzejVar;
    }

    @Pure
    public final zzey zzm() {
        zzP(this.zzl);
        return this.zzl;
    }

    @SideEffectFree
    final zzfq zzo() {
        return this.zzn;
    }

    @Pure
    public final zzhy zzq() {
        zzQ(this.zzt);
        return this.zzt;
    }

    @Pure
    public final zzic zzr() {
        zzR(this.zzv);
        return this.zzv;
    }

    @Pure
    public final zzim zzs() {
        zzQ(this.zzs);
        return this.zzs;
    }

    @Pure
    public final zzjm zzt() {
        zzQ(this.zzy);
        return this.zzy;
    }

    @Pure
    public final zzkc zzu() {
        zzQ(this.zzo);
        return this.zzo;
    }

    @Pure
    public final zzky zzv() {
        zzP(this.zzp);
        return this.zzp;
    }

    @Pure
    public final String zzw() {
        return this.zzf;
    }

    @Pure
    public final String zzx() {
        return this.zzg;
    }

    @Pure
    public final String zzy() {
        return this.zzh;
    }

    @Pure
    public final String zzz() {
        return this.zzw;
    }
}
