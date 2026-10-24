package com.appsflyer.internal;

import android.app.UiModeManager;
import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Environment;
import android.os.StatFs;
import android.os.SystemClock;
import android.provider.Settings;
import android.text.TextUtils;
import android.widget.ExpandableListView;
import androidx.appcompat.app.AppCompatDelegate;
import com.adjust.sdk.Constants;
import com.appsflyer.AFLogger;
import com.appsflyer.AdRevenueScheme;
import com.appsflyer.AppsFlyerProperties;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;
import java.nio.charset.Charset;
import java.security.NoSuchAlgorithmException;
import java.security.cert.CertificateException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Properties;
import java.util.TimeZone;
import java.util.concurrent.TimeUnit;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.TuplesKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public final class AFg1oSDK implements AFg1qSDK {
    private static int $10 = 0;
    private static int $11 = 1;
    private static int d = 1;
    private static int w;
    private final AFj1lSDK AFAdRevenueData;
    private final Lazy AFLogger;
    private final AFh1vSDK areAllFieldsValid;
    private final AFi1tSDK component1;
    private final AFg1vSDK component2;
    private final AFc1pSDK component3;
    private final AFc1qSDK component4;
    private final AFc1kSDK copy;
    private final Lazy copydefault;
    private final AFf1gSDK equals;
    private final String getCurrencyIso4217Code;
    private final AFg1uSDK getMediationNetwork;
    private final Context getMonetizationNetwork;
    private final AFi1lSDK getRevenue;
    private final AFg1xSDK hashCode;
    private final AFc1iSDK toString;
    private static char[] registerClient = {8582, 8581, 8594, 8595, 8592, 8312, 8589, 8593, 8606, 8579, 8580, 8288, 8577, 8578, 8576};
    private static int AFKeystoreWrapper = -771284948;
    private static boolean AFInAppEventParameterName = true;
    private static boolean AFInAppEventType = true;

    public static /* synthetic */ Object getMediationNetwork(Object[] objArr, int i, int i2, int i3) throws PackageManager.NameNotFoundException {
        int i4 = ~i3;
        int i5 = (i * 522) + (i2 * (-520)) + (((~(i4 | i2)) | i) * (-1042)) + ((i2 | i3) * 521);
        int i6 = ~i;
        switch (i5 + (((~(i | i4 | i2)) | (~(i3 | i6)) | (~((~i2) | i6))) * 521)) {
            case 1:
                File file = (File) objArr[0];
                int i7 = 2 % 2;
                int i8 = d;
                int i9 = i8 + 43;
                w = i9 % 128;
                int i10 = i9 % 2;
                if (file != null) {
                    int i11 = i8 + 95;
                    w = i11 % 128;
                    int i12 = i11 % 2;
                    if (file.exists()) {
                        return false;
                    }
                }
                return true;
            case 2:
                PackageManager packageManager = (PackageManager) objArr[0];
                String str = (String) objArr[1];
                int i13 = 2 % 2;
                int i14 = w + 91;
                d = i14 % 128;
                int i15 = i14 % 2;
                if (Build.VERSION.SDK_INT < 33) {
                    PackageInfo packageInfo = packageManager.getPackageInfo(str, 0);
                    Intrinsics.checkNotNullExpressionValue(packageInfo, "");
                    return packageInfo;
                }
                PackageInfo packageInfo2 = packageManager.getPackageInfo(str, PackageManager.PackageInfoFlags.of(0L));
                Intrinsics.checkNotNullExpressionValue(packageInfo2, "");
                int i16 = d + 21;
                w = i16 % 128;
                int i17 = i16 % 2;
                return packageInfo2;
            case 3:
                AFg1oSDK aFg1oSDK = (AFg1oSDK) objArr[0];
                int i18 = 2 % 2;
                File currencyIso4217Code = getCurrencyIso4217Code(getMediationNetwork("ro.appsflyer.preinstall.path"));
                if (getMediationNetwork(currencyIso4217Code)) {
                    currencyIso4217Code = getCurrencyIso4217Code(aFg1oSDK.AFAdRevenueData("AF_PRE_INSTALL_PATH"));
                }
                if (getMediationNetwork(currencyIso4217Code)) {
                    int i19 = w + 1;
                    d = i19 % 128;
                    int i20 = i19 % 2;
                    currencyIso4217Code = getCurrencyIso4217Code("/data/local/tmp/pre_install.appsflyer");
                    int i21 = w + 79;
                    d = i21 % 128;
                    int i22 = i21 % 2;
                }
                if (getMediationNetwork(currencyIso4217Code)) {
                    currencyIso4217Code = getCurrencyIso4217Code("/etc/pre_install.appsflyer");
                }
                if (getMediationNetwork(currencyIso4217Code)) {
                    return null;
                }
                String packageName = aFg1oSDK.getMonetizationNetwork.getPackageName();
                Intrinsics.checkNotNullExpressionValue(packageName, "");
                String str2 = (String) getMediationNetwork(new Object[]{currencyIso4217Code, packageName}, -2094417185, 2094417192, (int) System.currentTimeMillis());
                int i23 = w + 89;
                d = i23 % 128;
                int i24 = i23 % 2;
                return str2;
            case 4:
                return AFAdRevenueData(objArr);
            case 5:
                return getCurrencyIso4217Code(objArr);
            case 6:
                return getMonetizationNetwork(objArr);
            case 7:
                return getRevenue(objArr);
            case 8:
                AFg1oSDK aFg1oSDK2 = (AFg1oSDK) objArr[0];
                Map map = (Map) objArr[1];
                int i25 = 2 % 2;
                int i26 = d + 115;
                w = i26 % 128;
                int i27 = i26 % 2;
                Intrinsics.checkNotNullParameter(map, "");
                AFb1mSDK aFb1mSDKK_ = AFb1jSDK.k_(aFg1oSDK2.getMonetizationNetwork.getContentResolver());
                if (aFb1mSDKK_ != null) {
                    int i28 = d + 15;
                    w = i28 % 128;
                    int i29 = i28 % 2;
                    map.put("amazon_aid", aFb1mSDKK_.getMonetizationNetwork);
                    map.put("amazon_aid_limit", String.valueOf(aFb1mSDKK_.getMediationNetwork));
                }
                return null;
            case 9:
                return component1(objArr);
            case 10:
                int i30 = 2 % 2;
                int i31 = w + 13;
                d = i31 % 128;
                int i32 = i31 % 2;
                long jCurrentTimeMillis = System.currentTimeMillis();
                int i33 = d + 7;
                w = i33 % 128;
                int i34 = i33 % 2;
                return Long.valueOf(jCurrentTimeMillis);
            case 11:
                return areAllFieldsValid(objArr);
            case 12:
                AFg1oSDK aFg1oSDK3 = (AFg1oSDK) objArr[0];
                int i35 = 2 % 2;
                int i36 = d + 59;
                w = i36 % 128;
                int i37 = i36 % 2;
                AppsFlyerProperties appsFlyerProperties = (AppsFlyerProperties) aFg1oSDK3.copydefault.getValue();
                int i38 = w + 23;
                d = i38 % 128;
                int i39 = i38 % 2;
                return appsFlyerProperties;
            default:
                return getMediationNetwork(objArr);
        }
    }

    public AFg1oSDK(String str, Context context, AFi1lSDK aFi1lSDK, AFg1uSDK aFg1uSDK, AFj1lSDK aFj1lSDK, AFg1vSDK aFg1vSDK, AFh1vSDK aFh1vSDK, AFc1qSDK aFc1qSDK, AFc1pSDK aFc1pSDK, AFi1tSDK aFi1tSDK, AFf1gSDK aFf1gSDK, AFc1iSDK aFc1iSDK, AFg1xSDK aFg1xSDK, AFc1kSDK aFc1kSDK) {
        Intrinsics.checkNotNullParameter(str, "");
        Intrinsics.checkNotNullParameter(context, "");
        Intrinsics.checkNotNullParameter(aFi1lSDK, "");
        Intrinsics.checkNotNullParameter(aFg1uSDK, "");
        Intrinsics.checkNotNullParameter(aFj1lSDK, "");
        Intrinsics.checkNotNullParameter(aFg1vSDK, "");
        Intrinsics.checkNotNullParameter(aFh1vSDK, "");
        Intrinsics.checkNotNullParameter(aFc1qSDK, "");
        Intrinsics.checkNotNullParameter(aFc1pSDK, "");
        Intrinsics.checkNotNullParameter(aFi1tSDK, "");
        Intrinsics.checkNotNullParameter(aFf1gSDK, "");
        Intrinsics.checkNotNullParameter(aFc1iSDK, "");
        Intrinsics.checkNotNullParameter(aFg1xSDK, "");
        Intrinsics.checkNotNullParameter(aFc1kSDK, "");
        this.getCurrencyIso4217Code = str;
        this.getMonetizationNetwork = context;
        this.getRevenue = aFi1lSDK;
        this.getMediationNetwork = aFg1uSDK;
        this.AFAdRevenueData = aFj1lSDK;
        this.component2 = aFg1vSDK;
        this.areAllFieldsValid = aFh1vSDK;
        this.component4 = aFc1qSDK;
        this.component3 = aFc1pSDK;
        this.component1 = aFi1tSDK;
        this.equals = aFf1gSDK;
        this.toString = aFc1iSDK;
        this.hashCode = aFg1xSDK;
        this.copy = aFc1kSDK;
        this.copydefault = LazyKt.lazy(new Function0<AppsFlyerProperties>() { // from class: com.appsflyer.internal.AFg1oSDK.4
            @Override // kotlin.jvm.functions.Function0
            /* JADX INFO: renamed from: AFAdRevenueData, reason: merged with bridge method [inline-methods] */
            public final AppsFlyerProperties invoke() {
                return AppsFlyerProperties.getInstance();
            }
        });
        this.AFLogger = LazyKt.lazy(new Function0<SimpleDateFormat>() { // from class: com.appsflyer.internal.AFg1oSDK.1
            @Override // kotlin.jvm.functions.Function0
            /* JADX INFO: renamed from: AFAdRevenueData, reason: merged with bridge method [inline-methods] */
            public final SimpleDateFormat invoke() {
                return new SimpleDateFormat("yyyy-MM-dd_HHmmssZ", Locale.US);
            }
        });
    }

    private final SimpleDateFormat getMonetizationNetwork() {
        int i = 2 % 2;
        int i2 = w + 93;
        d = i2 % 128;
        int i3 = i2 % 2;
        SimpleDateFormat simpleDateFormat = (SimpleDateFormat) this.AFLogger.getValue();
        int i4 = d + 91;
        w = i4 % 128;
        if (i4 % 2 == 0) {
            return simpleDateFormat;
        }
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    @Override // com.appsflyer.internal.AFg1qSDK
    public final void getMonetizationNetwork(AFh1rSDK aFh1rSDK) throws PackageManager.NameNotFoundException {
        int i = 2 % 2;
        int i2 = d + 53;
        w = i2 % 128;
        int i3 = i2 % 2;
        Intrinsics.checkNotNullParameter(aFh1rSDK, "");
        Map<String, Object> map = aFh1rSDK.AFAdRevenueData;
        if (aFh1rSDK.getMediationNetwork()) {
            getMonetizationNetwork(aFh1rSDK, aFh1rSDK.component3, this.copy.getMediationNetwork, this.copy.getMonetizationNetwork);
            int i4 = d + 107;
            w = i4 % 128;
            int i5 = i4 % 2;
        } else if (!(aFh1rSDK instanceof AFh1hSDK)) {
            int i6 = d + 7;
            w = i6 % 128;
            if (i6 % 2 != 0) {
                Intrinsics.checkNotNullExpressionValue(map, "");
                String str = aFh1rSDK.areAllFieldsValid;
                Intrinsics.checkNotNullExpressionValue(str, "");
                getMediationNetwork(map, str);
                int i7 = 48 / 0;
            } else {
                Intrinsics.checkNotNullExpressionValue(map, "");
                String str2 = aFh1rSDK.areAllFieldsValid;
                Intrinsics.checkNotNullExpressionValue(str2, "");
                getMediationNetwork(map, str2);
            }
        }
        if (CollectionsKt.listOf((Object[]) new AFe1mSDK[]{AFe1mSDK.CONVERSION, AFe1mSDK.LAUNCH, AFe1mSDK.INAPP}).contains(aFh1rSDK.getCurrencyIso4217Code())) {
            int i8 = w + 103;
            d = i8 % 128;
            int i9 = i8 % 2;
            Intrinsics.checkNotNullExpressionValue(map, "");
            equals(map);
        }
        if (aFh1rSDK.getRevenue()) {
            int i10 = w + 15;
            d = i10 % 128;
            int i11 = i10 % 2;
            Intrinsics.checkNotNullExpressionValue(map, "");
            areAllFieldsValid(map);
        }
        Intrinsics.checkNotNullExpressionValue(map, "");
        force(map);
        AFInAppEventType(map);
        getMediationNetwork(new Object[]{this, map}, -140518465, 140518471, System.identityHashCode(this));
        AFKeystoreWrapper(map);
        d(map);
        getMediationNetwork(map, aFh1rSDK.getMediationNetwork());
        e(map);
        afInfoLog(map);
        getRevenue(map, aFh1rSDK);
        map.put("af_events_api", "1");
    }

    @Override // com.appsflyer.internal.AFg1qSDK
    public final void getMediationNetwork(AFh1rSDK aFh1rSDK) {
        int i = 2 % 2;
        int i2 = w + 11;
        d = i2 % 128;
        int i3 = i2 % 2;
        Intrinsics.checkNotNullParameter(aFh1rSDK, "");
        Map<String, Object> map = aFh1rSDK.AFAdRevenueData;
        Intrinsics.checkNotNullExpressionValue(map, "");
        getMediationNetwork(map);
        Map<String, Object> map2 = aFh1rSDK.AFAdRevenueData;
        Intrinsics.checkNotNullExpressionValue(map2, "");
        getMonetizationNetwork(map2);
        Map<String, Object> map3 = aFh1rSDK.AFAdRevenueData;
        Intrinsics.checkNotNullExpressionValue(map3, "");
        AFInAppEventParameterName(map3);
        Map<String, Object> map4 = aFh1rSDK.AFAdRevenueData;
        Intrinsics.checkNotNullExpressionValue(map4, "");
        unregisterClient(map4);
        Map<String, Object> map5 = aFh1rSDK.AFAdRevenueData;
        Intrinsics.checkNotNullExpressionValue(map5, "");
        afDebugLog(map5);
        if (getMediationNetwork().contains(aFh1rSDK.getCurrencyIso4217Code())) {
            int i4 = w + 125;
            d = i4 % 128;
            int i5 = i4 % 2;
            Map<String, Object> map6 = aFh1rSDK.AFAdRevenueData;
            Intrinsics.checkNotNullExpressionValue(map6, "");
            afErrorLog(map6);
            int i6 = w + 17;
            d = i6 % 128;
            if (i6 % 2 == 0) {
                int i7 = 5 % 3;
            }
        }
    }

    private static List<AFe1mSDK> getMediationNetwork() {
        int i = 2 % 2;
        int i2 = d + AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR_OVERLAY;
        w = i2 % 128;
        int i3 = i2 % 2;
        List<AFe1mSDK> listListOf = CollectionsKt.listOf((Object[]) new AFe1mSDK[]{AFe1mSDK.CONVERSION, AFe1mSDK.LAUNCH, AFe1mSDK.INAPP, AFe1mSDK.MANUAL_PURCHASE_VALIDATION, AFe1mSDK.ARS_VALIDATE, AFe1mSDK.PURCHASE_VALIDATE, AFe1mSDK.ADREVENUE});
        int i4 = w + 75;
        d = i4 % 128;
        if (i4 % 2 != 0) {
            return listListOf;
        }
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    private final void getMediationNetwork(Map<String, Object> map) {
        int i = 2 % 2;
        try {
            long j = this.getMonetizationNetwork.getPackageManager().getPackageInfo(this.getMonetizationNetwork.getPackageName(), 0).firstInstallTime;
            SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd_HHmmssZ", Locale.US);
            simpleDateFormat.setTimeZone(TimeZone.getTimeZone("UTC"));
            map.put("installDate", simpleDateFormat.format(new Date(j)));
            int i2 = d + 111;
            w = i2 % 128;
            if (i2 % 2 != 0) {
                int i3 = 79 / 0;
            }
        } catch (Exception e) {
            AFLogger.afErrorLog("Exception while collecting install date. ", e);
        }
    }

    private static void a(String str, int[] iArr, String str2, int i, Object[] objArr) throws UnsupportedEncodingException {
        int i2;
        int i3 = 2 % 2;
        Object charArray = str2;
        if (str2 != null) {
            int i4 = $10 + 17;
            $11 = i4 % 128;
            int i5 = i4 % 2;
            charArray = str2.toCharArray();
        }
        char[] cArr = (char[]) charArray;
        Object bytes = str;
        if (str != null) {
            bytes = str.getBytes("ISO-8859-1");
        }
        byte[] bArr = (byte[]) bytes;
        AFk1nSDK aFk1nSDK = new AFk1nSDK();
        char[] cArr2 = registerClient;
        if (cArr2 != null) {
            int i6 = $10 + 113;
            $11 = i6 % 128;
            int i7 = i6 % 2;
            int length = cArr2.length;
            char[] cArr3 = new char[length];
            for (int i8 = 0; i8 < length; i8++) {
                cArr3[i8] = (char) (((long) cArr2[i8]) ^ (-5879130172463570806L));
            }
            cArr2 = cArr3;
        }
        int i9 = (int) ((-5879130172463570806L) ^ ((long) AFKeystoreWrapper));
        if (AFInAppEventType) {
            aFk1nSDK.getMonetizationNetwork = bArr.length;
            char[] cArr4 = new char[aFk1nSDK.getMonetizationNetwork];
            aFk1nSDK.AFAdRevenueData = 0;
            while (aFk1nSDK.AFAdRevenueData < aFk1nSDK.getMonetizationNetwork) {
                cArr4[aFk1nSDK.AFAdRevenueData] = (char) (cArr2[bArr[(aFk1nSDK.getMonetizationNetwork - 1) - aFk1nSDK.AFAdRevenueData] + i] - i9);
                aFk1nSDK.AFAdRevenueData++;
            }
            objArr[0] = new String(cArr4);
            return;
        }
        if (!AFInAppEventParameterName) {
            aFk1nSDK.getMonetizationNetwork = iArr.length;
            char[] cArr5 = new char[aFk1nSDK.getMonetizationNetwork];
            aFk1nSDK.AFAdRevenueData = 0;
            while (aFk1nSDK.AFAdRevenueData < aFk1nSDK.getMonetizationNetwork) {
                cArr5[aFk1nSDK.AFAdRevenueData] = (char) (cArr2[iArr[(aFk1nSDK.getMonetizationNetwork - 1) - aFk1nSDK.AFAdRevenueData] - i] - i9);
                aFk1nSDK.AFAdRevenueData++;
            }
            objArr[0] = new String(cArr5);
            return;
        }
        int i10 = $11 + 81;
        $10 = i10 % 128;
        int i11 = i10 % 2;
        aFk1nSDK.getMonetizationNetwork = cArr.length;
        char[] cArr6 = new char[aFk1nSDK.getMonetizationNetwork];
        aFk1nSDK.AFAdRevenueData = 0;
        while (aFk1nSDK.AFAdRevenueData < aFk1nSDK.getMonetizationNetwork) {
            int i12 = $10 + 13;
            $11 = i12 % 128;
            if (i12 % 2 == 0) {
                cArr6[aFk1nSDK.AFAdRevenueData] = (char) (cArr2[cArr[aFk1nSDK.getMonetizationNetwork * aFk1nSDK.AFAdRevenueData] - i] / i9);
                i2 = aFk1nSDK.AFAdRevenueData % 0;
            } else {
                cArr6[aFk1nSDK.AFAdRevenueData] = (char) (cArr2[cArr[(aFk1nSDK.getMonetizationNetwork - 1) - aFk1nSDK.AFAdRevenueData] - i] - i9);
                i2 = aFk1nSDK.AFAdRevenueData + 1;
            }
            aFk1nSDK.AFAdRevenueData = i2;
        }
        objArr[0] = new String(cArr6);
    }

    private final void getMonetizationNetwork(Map<String, Object> map) {
        PackageInfo packageInfo;
        int i = 2 % 2;
        int i2 = w + 41;
        d = i2 % 128;
        try {
            if (i2 % 2 == 0) {
                packageInfo = this.getMonetizationNetwork.getPackageManager().getPackageInfo(this.getMonetizationNetwork.getPackageName(), 1);
                if (packageInfo.versionCode > this.component4.AFAdRevenueData("versionCode", 1)) {
                    this.component4.getMediationNetwork("versionCode", packageInfo.versionCode);
                }
            } else {
                packageInfo = this.getMonetizationNetwork.getPackageManager().getPackageInfo(this.getMonetizationNetwork.getPackageName(), 0);
                if (packageInfo.versionCode > this.component4.AFAdRevenueData("versionCode", 0)) {
                    this.component4.getMediationNetwork("versionCode", packageInfo.versionCode);
                }
            }
            map.put("app_version_code", String.valueOf(packageInfo.versionCode));
            AFc1pSDK aFc1pSDK = this.component3;
            map.put("app_version_name", AFj1iSDK.getMediationNetwork(aFc1pSDK.getRevenue.getMonetizationNetwork, aFc1pSDK.getRevenue.getMonetizationNetwork.getPackageName()));
            map.put("targetSDKver", Integer.valueOf(this.component3.getRevenue.getMonetizationNetwork.getApplicationInfo().targetSdkVersion));
            long j = packageInfo.firstInstallTime;
            long j2 = packageInfo.lastUpdateTime;
            map.put("date1", getMonetizationNetwork().format(new Date(j)));
            map.put("date2", getMonetizationNetwork().format(new Date(j2)));
            Object[] objArr = new Object[1];
            a("\u008d\u0085\u0087\u008c\u008b\u008a\u0089\u0088\u0087\u0086\u0085\u0084\u0083\u0082\u0081", null, null, 127 - TextUtils.getTrimmedLength(""), objArr);
            String strIntern = ((String) objArr[0]).intern();
            SimpleDateFormat monetizationNetwork = getMonetizationNetwork();
            Intrinsics.checkNotNullExpressionValue(monetizationNetwork, "");
            map.put(strIntern, getMediationNetwork(monetizationNetwork));
            int i3 = d + 47;
            w = i3 % 128;
            int i4 = i3 % 2;
        } catch (Throwable th) {
            AFLogger.afErrorLog("Exception while collecting app version data ", th, true);
        }
    }

    @Override // com.appsflyer.internal.AFg1qSDK
    public final void getRevenue(AFh1rSDK aFh1rSDK) throws PackageManager.NameNotFoundException, UnsupportedEncodingException {
        int i = 2 % 2;
        int i2 = d + 35;
        w = i2 % 128;
        int i3 = i2 % 2;
        Intrinsics.checkNotNullParameter(aFh1rSDK, "");
        Map<String, Object> map = aFh1rSDK.AFAdRevenueData;
        Intrinsics.checkNotNullExpressionValue(map, "");
        getCurrencyIso4217Code(map, aFh1rSDK.getMediationNetwork());
        component2(map);
        w(map);
        getMediationNetwork(new Object[]{this, map}, -1412383531, 1412383531, System.identityHashCode(this));
        getCurrencyIso4217Code(map, this.copy.AFAdRevenueData);
        getMediationNetwork(new Object[]{this, map}, -1753918152, 1753918160, System.identityHashCode(this));
        map.put("cell", MapsKt.mapOf(TuplesKt.to("mcc", Integer.valueOf(this.getMonetizationNetwork.getResources().getConfiguration().mcc)), TuplesKt.to("mnc", Integer.valueOf(this.getMonetizationNetwork.getResources().getConfiguration().mnc))));
        map.put("sig", component4());
        map.put("last_boot_time", Long.valueOf(component1()));
        map.put("disk", component3());
        int i4 = w + 25;
        d = i4 % 128;
        if (i4 % 2 == 0) {
            throw null;
        }
    }

    private static /* synthetic */ Object getCurrencyIso4217Code(Object[] objArr) {
        String[] strArr;
        AFg1oSDK aFg1oSDK = (AFg1oSDK) objArr[0];
        Map map = (Map) objArr[1];
        int i = 2 % 2;
        int i2 = d + 51;
        w = i2 % 128;
        if (i2 % 2 != 0) {
            Intrinsics.checkNotNullParameter(map, "");
            ((AppsFlyerProperties) getMediationNetwork(new Object[]{aFg1oSDK}, 2080605438, -2080605426, System.identityHashCode(aFg1oSDK))).getString(AppsFlyerProperties.APP_ID);
            throw null;
        }
        Intrinsics.checkNotNullParameter(map, "");
        String string = ((AppsFlyerProperties) getMediationNetwork(new Object[]{aFg1oSDK}, 2080605438, -2080605426, System.identityHashCode(aFg1oSDK))).getString(AppsFlyerProperties.APP_ID);
        if (string != null) {
            int i3 = d + 31;
            w = i3 % 128;
            int i4 = i3 % 2;
            map.put(AppsFlyerProperties.APP_ID, string);
        }
        String string2 = ((AppsFlyerProperties) getMediationNetwork(new Object[]{aFg1oSDK}, 2080605438, -2080605426, System.identityHashCode(aFg1oSDK))).getString(AppsFlyerProperties.CURRENCY_CODE);
        if (string2 != null) {
            if (string2.length() != 3) {
                String string3 = new StringBuilder("WARNING: currency code should be 3 characters!!! '").append(string2).append("' is not a legal value.").toString();
                Intrinsics.checkNotNullExpressionValue(string3, "");
                AFLogger.afWarnLog(string3);
            }
            map.put("currency", string2);
        }
        String string4 = ((AppsFlyerProperties) getMediationNetwork(new Object[]{aFg1oSDK}, 2080605438, -2080605426, System.identityHashCode(aFg1oSDK))).getString(AppsFlyerProperties.IS_UPDATE);
        if (string4 != null) {
            map.put("isUpdate", string4);
        }
        String string5 = ((AppsFlyerProperties) getMediationNetwork(new Object[]{aFg1oSDK}, 2080605438, -2080605426, System.identityHashCode(aFg1oSDK))).getString(AppsFlyerProperties.ADDITIONAL_CUSTOM_DATA);
        if (string5 != null) {
            int i5 = w + 5;
            d = i5 % 128;
            if (i5 % 2 == 0) {
                map.put("customData", string5);
                throw null;
            }
            map.put("customData", string5);
        }
        String string6 = ((AppsFlyerProperties) getMediationNetwork(new Object[]{aFg1oSDK}, 2080605438, -2080605426, System.identityHashCode(aFg1oSDK))).getString(AppsFlyerProperties.APP_USER_ID);
        if (string6 != null) {
            int i6 = w + 69;
            d = i6 % 128;
            if (i6 % 2 == 0) {
                map.put("appUserId", string6);
                throw null;
            }
            map.put("appUserId", string6);
        }
        String string7 = ((AppsFlyerProperties) getMediationNetwork(new Object[]{aFg1oSDK}, 2080605438, -2080605426, System.identityHashCode(aFg1oSDK))).getString(AppsFlyerProperties.USER_EMAILS);
        if (string7 != null) {
            map.put("user_emails", string7);
        }
        AFb1uSDK aFb1uSDK = aFg1oSDK.copy.getRevenue;
        if (aFb1uSDK != null && (strArr = aFb1uSDK.getMediationNetwork) != null) {
            int i7 = d + 107;
            w = i7 % 128;
            int i8 = i7 % 2;
            map.put("sharing_filter", strArr);
        }
        return null;
    }

    private static /* synthetic */ Object AFAdRevenueData(Object[] objArr) {
        boolean zAreEqual;
        AFg1oSDK aFg1oSDK = (AFg1oSDK) objArr[0];
        AFh1rSDK aFh1rSDK = (AFh1rSDK) objArr[1];
        int i = 2 % 2;
        Intrinsics.checkNotNullParameter(aFh1rSDK, "");
        if (aFg1oSDK.component3.component4()) {
            AFh1oSDK aFh1oSDK = aFg1oSDK.component3.getCurrencyIso4217Code.component3;
            if (aFh1oSDK == null) {
                return null;
            }
            String str = aFh1oSDK.getMediationNetwork;
            if (str != null) {
                int i2 = w + AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR_OVERLAY;
                d = i2 % 128;
                int i3 = i2 % 2;
                if (str.length() != 0) {
                    aFh1rSDK.getMediationNetwork("gaidError", aFh1oSDK.getMediationNetwork);
                    int i4 = d + 31;
                    w = i4 % 128;
                    int i5 = i4 % 2;
                }
            }
            if (aFh1oSDK.getRevenue != null && aFh1oSDK.getMonetizationNetwork != null) {
                aFh1rSDK.getMediationNetwork("advertiserId", aFh1oSDK.getRevenue);
                aFh1rSDK.getMediationNetwork("advertiserIdEnabled", String.valueOf(aFh1oSDK.getMonetizationNetwork));
                aFh1rSDK.getMediationNetwork("isGaidWithGps", String.valueOf(aFh1oSDK.getCurrencyIso4217Code));
            }
        } else {
            Map<String, Object> revenue = AFa1tSDK.getRevenue(aFh1rSDK.AFAdRevenueData);
            Intrinsics.checkNotNullExpressionValue(revenue, "");
            revenue.put("ad_ids_disabled", Boolean.TRUE);
        }
        AFh1oSDK aFh1oSDK2 = aFg1oSDK.component3.getCurrencyIso4217Code.component3;
        if (aFh1oSDK2 != null) {
            int i6 = d + 23;
            w = i6 % 128;
            if (i6 % 2 != 0) {
                Intrinsics.areEqual(aFh1oSDK2.component4, Boolean.TRUE);
                throw null;
            }
            zAreEqual = Intrinsics.areEqual(aFh1oSDK2.component4, Boolean.TRUE);
        } else {
            zAreEqual = false;
        }
        aFh1rSDK.getMediationNetwork("GAID_retry", String.valueOf(zAreEqual));
        if (CollectionsKt.listOf((Object[]) new AFe1mSDK[]{AFe1mSDK.CONVERSION, AFe1mSDK.LAUNCH}).contains(aFh1rSDK.getCurrencyIso4217Code())) {
            int i7 = w + 97;
            d = i7 % 128;
            int i8 = i7 % 2;
            AFd1hSDK aFd1hSDK = aFg1oSDK.copy.component4;
            if (aFd1hSDK != null) {
                Map<String, Object> revenue2 = AFa1tSDK.getRevenue(aFh1rSDK.AFAdRevenueData);
                Intrinsics.checkNotNullExpressionValue(revenue2, "");
                revenue2.put("fetchAdIdLatency", Long.valueOf(aFd1hSDK.getRevenue));
                return null;
            }
        }
        int i9 = w + 35;
        d = i9 % 128;
        if (i9 % 2 != 0) {
            return null;
        }
        throw null;
    }

    @Override // com.appsflyer.internal.AFg1qSDK
    public final Long getCurrencyIso4217Code() {
        int i = 2 % 2;
        int i2 = w + 43;
        d = i2 % 128;
        Object obj = null;
        if (i2 % 2 != 0) {
            Context context = this.toString.getMonetizationNetwork;
            if (context == null) {
                return null;
            }
            int i3 = d + 49;
            w = i3 % 128;
            if (i3 % 2 == 0) {
                PackageManager packageManager = context.getPackageManager();
                if (packageManager != null) {
                    String packageName = context.getPackageName();
                    Intrinsics.checkNotNullExpressionValue(packageName, "");
                    PackageInfo packageInfo = (PackageInfo) getMediationNetwork(new Object[]{packageManager, packageName}, 1014234820, -1014234818, (int) System.currentTimeMillis());
                    if (packageInfo != null) {
                        Long lValueOf = Long.valueOf(packageInfo.firstInstallTime);
                        int i4 = w + 47;
                        d = i4 % 128;
                        int i5 = i4 % 2;
                        return lValueOf;
                    }
                }
                int i6 = d + 51;
                w = i6 % 128;
                if (i6 % 2 != 0) {
                    int i7 = 27 / 0;
                }
                return null;
            }
            context.getPackageManager();
            obj.hashCode();
            throw null;
        }
        Context context2 = this.toString.getMonetizationNetwork;
        obj.hashCode();
        throw null;
    }

    private String component4() throws NoSuchAlgorithmException, PackageManager.NameNotFoundException, CertificateException {
        int i = 2 % 2;
        int i2 = d + 65;
        w = i2 % 128;
        int i3 = i2 % 2;
        String strN_ = AFj1iSDK.N_(this.getMonetizationNetwork.getApplicationContext().getPackageManager(), this.getMonetizationNetwork.getApplicationContext().getPackageName());
        int i4 = w + 19;
        d = i4 % 128;
        if (i4 % 2 != 0) {
            return strN_;
        }
        throw null;
    }

    private static long component1() {
        int i = 2 % 2;
        int i2 = d + 11;
        w = i2 % 128;
        int i3 = i2 % 2;
        long jCurrentTimeMillis = System.currentTimeMillis() - SystemClock.elapsedRealtime();
        int i4 = w + 67;
        d = i4 % 128;
        if (i4 % 2 != 0) {
            return jCurrentTimeMillis;
        }
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    private static String component3() {
        int i = 2 % 2;
        StatFs statFs = new StatFs(Environment.getDataDirectory().getAbsolutePath());
        long blockSizeLong = statFs.getBlockSizeLong();
        long availableBlocksLong = statFs.getAvailableBlocksLong() * blockSizeLong;
        long blockCountLong = statFs.getBlockCountLong() * blockSizeLong;
        double dPow = Math.pow(2.0d, 20.0d);
        String str = ((long) (availableBlocksLong / dPow)) + "/" + ((long) (blockCountLong / dPow));
        int i2 = d + 67;
        w = i2 % 128;
        int i3 = i2 % 2;
        return str;
    }

    private void getMediationNetwork(Map<String, Object> map, boolean z) {
        int i = 2 % 2;
        int i2 = w + 29;
        d = i2 % 128;
        int i3 = i2 % 2;
        Intrinsics.checkNotNullParameter(map, "");
        map.put("platformextension", this.getCurrencyIso4217Code);
        if (z) {
            int i4 = d + 83;
            w = i4 % 128;
            int i5 = i4 % 2;
            map.put("platform_extension_v2", this.getRevenue.getMediationNetwork());
        }
        int i6 = w + 5;
        d = i6 % 128;
        int i7 = i6 % 2;
    }

    private void areAllFieldsValid(Map<String, Object> map) {
        int i = 2 % 2;
        int i2 = d + 59;
        w = i2 % 128;
        int i3 = i2 % 2;
        Intrinsics.checkNotNullParameter(map, "");
        AFf1gSDK.getRevenue(map, this.component3);
        int i4 = d + 85;
        w = i4 % 128;
        if (i4 % 2 == 0) {
            return;
        }
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    private void getCurrencyIso4217Code(Map<String, Object> map, boolean z) {
        int i = 2 % 2;
        Intrinsics.checkNotNullParameter(map, "");
        HashMap map2 = new HashMap();
        map2.put("cpu_abi", getMediationNetwork("ro.product.cpu.abi"));
        map2.put("cpu_abi2", getMediationNetwork("ro.product.cpu.abi2"));
        map2.put("arch", getMediationNetwork("os.arch"));
        map2.put("build_display_id", getMediationNetwork("ro.build.display.id"));
        if (z) {
            int i2 = d + 13;
            w = i2 % 128;
            int i3 = i2 % 2;
            component4(map2);
            if (this.component3.getMonetizationNetwork.AFAdRevenueData("appsFlyerCount", 0) <= 2) {
                map2.putAll(this.AFAdRevenueData.AFAdRevenueData());
            }
        }
        map2.put("dim", this.component2.AFAdRevenueData(this.getMonetizationNetwork));
        map.put("deviceData", map2);
        int i4 = w + 1;
        d = i4 % 128;
        int i5 = i4 % 2;
    }

    private static /* synthetic */ Object getMediationNetwork(Object[] objArr) {
        AFg1oSDK aFg1oSDK = (AFg1oSDK) objArr[0];
        Map map = (Map) objArr[1];
        int i = 2 % 2;
        Intrinsics.checkNotNullParameter(map, "");
        AFi1pSDK aFi1pSDK = aFg1oSDK.component1.getMediationNetwork;
        Object obj = null;
        AFi1rSDK mediationNetwork = aFi1pSDK != null ? aFi1pSDK.getMediationNetwork() : null;
        if (mediationNetwork != null) {
            map.put("network", mediationNetwork.getCurrencyIso4217Code);
            map.put("ivc", Boolean.valueOf(mediationNetwork.getMediationNetwork()));
            if (!((AppsFlyerProperties) getMediationNetwork(new Object[]{aFg1oSDK}, 2080605438, -2080605426, System.identityHashCode(aFg1oSDK))).getBoolean(AppsFlyerProperties.DISABLE_NETWORK_DATA, false)) {
                int i2 = w + AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR_OVERLAY;
                d = i2 % 128;
                int i3 = i2 % 2;
                String str = mediationNetwork.AFAdRevenueData;
                if (str != null) {
                    int i4 = d + 115;
                    w = i4 % 128;
                    if (i4 % 2 != 0) {
                        map.put("operator", str);
                        int i5 = 74 / 0;
                    } else {
                        map.put("operator", str);
                    }
                }
                String str2 = mediationNetwork.getRevenue;
                if (str2 != null) {
                    int i6 = w + 105;
                    d = i6 % 128;
                    if (i6 % 2 != 0) {
                        map.put("carrier", str2);
                        return null;
                    }
                    map.put("carrier", str2);
                    obj.hashCode();
                    throw null;
                }
            }
        }
        return null;
    }

    @Override // com.appsflyer.internal.AFg1qSDK
    public final void getRevenue(Map<String, Object> map, int i, int i2) {
        int i3 = 2 % 2;
        Intrinsics.checkNotNullParameter(map, "");
        map.put("counter", String.valueOf(i));
        map.put("iaecounter", String.valueOf(i2));
        boolean z = false;
        if (!equals()) {
            int i4 = d + 19;
            w = i4 % 128;
            if (i4 % 2 == 0) {
                z = true;
            }
        }
        map.put("isFirstCall", String.valueOf(z));
        int i5 = d + 107;
        w = i5 % 128;
        int i6 = i5 % 2;
    }

    @Override // com.appsflyer.internal.AFg1qSDK
    public final void getCurrencyIso4217Code(Map<String, Object> map) {
        Object objM126constructorimpl;
        int i = 2 % 2;
        int i2 = w + 115;
        d = i2 % 128;
        Object obj = null;
        if (i2 % 2 == 0) {
            Intrinsics.checkNotNullParameter(map, "");
            String str = this.copy.getCurrencyIso4217Code;
            obj.hashCode();
            throw null;
        }
        Intrinsics.checkNotNullParameter(map, "");
        String str2 = this.copy.getCurrencyIso4217Code;
        if (str2 != null) {
            int i3 = w + 39;
            d = i3 % 128;
            int i4 = i3 % 2;
            if (map.get("af_deeplink") != null) {
                int i5 = w + 97;
                d = i5 % 128;
                if (i5 % 2 == 0) {
                    AFLogger.afDebugLog("Skip 'af' payload as deeplink was found by path");
                    throw null;
                }
                AFLogger.afDebugLog("Skip 'af' payload as deeplink was found by path");
            } else {
                try {
                    Result.Companion companion = Result.INSTANCE;
                    AFg1oSDK aFg1oSDK = this;
                    JSONObject jSONObject = new JSONObject(str2);
                    jSONObject.put("isPush", "true");
                    map.put("af_deeplink", jSONObject.toString());
                    objM126constructorimpl = Result.m126constructorimpl(Unit.INSTANCE);
                } catch (Throwable th) {
                    Result.Companion companion2 = Result.INSTANCE;
                    objM126constructorimpl = Result.m126constructorimpl(ResultKt.createFailure(th));
                }
                Throwable thM129exceptionOrNullimpl = Result.m129exceptionOrNullimpl(objM126constructorimpl);
                if (thM129exceptionOrNullimpl != null) {
                    AFg1gSDK.e$default(AFLogger.INSTANCE, AFg1cSDK.GENERAL, "Exception while trying to create JSONObject from pushPayload", thM129exceptionOrNullimpl, false, false, false, false, 120, null);
                } else {
                    int i6 = d + 119;
                    w = i6 % 128;
                    int i7 = i6 % 2;
                }
                Result.m125boximpl(objM126constructorimpl);
            }
        }
        this.copy.getCurrencyIso4217Code = null;
    }

    @Override // com.appsflyer.internal.AFg1qSDK
    public final void getCurrencyIso4217Code(AFh1rSDK aFh1rSDK) {
        int i = 2 % 2;
        Intrinsics.checkNotNullParameter(aFh1rSDK, "");
        Map<String, Object> map = aFh1rSDK.AFAdRevenueData;
        Intrinsics.checkNotNullExpressionValue(map, "");
        map.put("open_referrer", aFh1rSDK.getMediationNetwork);
        String str = aFh1rSDK.component4;
        if (str != null) {
            int i2 = w + 43;
            d = i2 % 128;
            if (i2 % 2 == 0) {
                StringsKt.isBlank(str);
                Object obj = null;
                obj.hashCode();
                throw null;
            }
            if (StringsKt.isBlank(str)) {
                return;
            }
            int i3 = w + 119;
            d = i3 % 128;
            if (i3 % 2 != 0) {
                map.put("af_web_referrer", aFh1rSDK.component4);
            } else {
                map.put("af_web_referrer", aFh1rSDK.component4);
                int i4 = 26 / 0;
            }
        }
    }

    private final void component4(Map<String, Object> map) {
        int i = 2 % 2;
        AFg1uSDK.AFa1uSDK revenue = this.getMediationNetwork.getRevenue(this.getMonetizationNetwork);
        float f = revenue.getRevenue;
        String str = revenue.getMediationNetwork;
        map.put("btl", String.valueOf(f));
        if (str != null) {
            int i2 = d + 67;
            w = i2 % 128;
            int i3 = i2 % 2;
            map.put("btch", str);
            int i4 = d + AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR_OVERLAY;
            w = i4 % 128;
            int i5 = i4 % 2;
        }
    }

    /* JADX WARN: Code duplicated, block: B:9:0x0071 A[PHI: r1 r2
  0x0071: PHI (r1v8 java.lang.String) = (r1v7 java.lang.String), (r1v12 java.lang.String) binds: [B:8:0x006f, B:5:0x0045] A[DONT_GENERATE, DONT_INLINE]
  0x0071: PHI (r2v3 java.lang.String) = (r2v2 java.lang.String), (r2v5 java.lang.String) binds: [B:8:0x006f, B:5:0x0045] A[DONT_GENERATE, DONT_INLINE]] */
    private void component3(Map<String, Object> map) {
        String string;
        String string2;
        int i = 2 % 2;
        int i2 = w + 63;
        d = i2 % 128;
        if (i2 % 2 == 0) {
            Intrinsics.checkNotNullParameter(map, "");
            string = ((AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this))).getString(AppsFlyerProperties.ONELINK_ID);
            string2 = ((AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this))).getString(AppsFlyerProperties.ONELINK_VERSION);
            int i3 = 69 / 0;
            if (string != null) {
                int i4 = w + 121;
                d = i4 % 128;
                int i5 = i4 % 2;
                map.put("onelink_id", string);
            }
        } else {
            Intrinsics.checkNotNullParameter(map, "");
            string = ((AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this))).getString(AppsFlyerProperties.ONELINK_ID);
            string2 = ((AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this))).getString(AppsFlyerProperties.ONELINK_VERSION);
            if (string != null) {
                int i6 = w + 121;
                d = i6 % 128;
                int i7 = i6 % 2;
                map.put("onelink_id", string);
            }
        }
        if (string2 != null) {
            map.put("onelink_ver", string2);
        }
    }

    private void component1(Map<String, ? extends Object> map) {
        int i = 2 % 2;
        Intrinsics.checkNotNullParameter(map, "");
        AFh1vSDK aFh1vSDK = this.areAllFieldsValid;
        HashMap map2 = new HashMap(aFh1vSDK.getRevenue);
        aFh1vSDK.getRevenue.clear();
        this.areAllFieldsValid.getCurrencyIso4217Code.getMonetizationNetwork("gcd");
        Intrinsics.checkNotNullExpressionValue(map2, "");
        if (map2.isEmpty()) {
            int i2 = w + 113;
            d = i2 % 128;
            int i3 = i2 % 2;
        } else {
            int i4 = d + 71;
            w = i4 % 128;
            int i5 = i4 % 2;
            Map<String, Object> revenue = AFa1tSDK.getRevenue(map);
            Intrinsics.checkNotNullExpressionValue(revenue, "");
            revenue.put("gcd", map2);
        }
    }

    private void getMediationNetwork(Map<String, Object> map, String str) {
        int i = 2 % 2;
        int i2 = d + 7;
        w = i2 % 128;
        Object obj = null;
        try {
            if (i2 % 2 != 0) {
                Intrinsics.checkNotNullParameter(map, "");
                Intrinsics.checkNotNullParameter(str, "");
                this.component4.AFAdRevenueData("prev_event_name", (String) null);
                obj.hashCode();
                throw null;
            }
            Intrinsics.checkNotNullParameter(map, "");
            Intrinsics.checkNotNullParameter(str, "");
            String strAFAdRevenueData = this.component4.AFAdRevenueData("prev_event_name", (String) null);
            if (strAFAdRevenueData != null) {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("prev_event_timestamp", this.component4.getCurrencyIso4217Code("prev_event_timestamp", -1L));
                jSONObject.put("prev_event_name", strAFAdRevenueData);
                map.put("prev_event", jSONObject);
                int i3 = d + 27;
                w = i3 % 128;
                int i4 = i3 % 2;
            }
            this.component4.getMediationNetwork("prev_event_name", str);
            this.component4.getMonetizationNetwork("prev_event_timestamp", System.currentTimeMillis());
        } catch (Exception e) {
            AFLogger.afErrorLog("Error while processing previous event.", e);
        }
    }

    private String areAllFieldsValid() {
        int i = 2 % 2;
        String strComponent2 = null;
        if (this.component4.getMediationNetwork("INSTALL_STORE")) {
            return this.component4.AFAdRevenueData("INSTALL_STORE", (String) null);
        }
        if (copydefault()) {
            int i2 = d + 123;
            w = i2 % 128;
            if (i2 % 2 != 0) {
                component2();
                throw null;
            }
            strComponent2 = component2();
        } else {
            int i3 = w + 67;
            d = i3 % 128;
            if (i3 % 2 == 0) {
                int i4 = 4 % 2;
            }
        }
        this.component4.getMediationNetwork("INSTALL_STORE", strComponent2);
        return strComponent2;
    }

    private String component2() {
        int i = 2 % 2;
        int i2 = d + 119;
        w = i2 % 128;
        if (i2 % 2 == 0) {
            String string = ((AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this))).getString(AppsFlyerProperties.AF_STORE_FROM_API);
            if (string == null) {
                string = AFAdRevenueData("AF_STORE");
            }
            int i3 = d + 11;
            w = i3 % 128;
            if (i3 % 2 == 0) {
                return string;
            }
            throw null;
        }
        ((AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this))).getString(AppsFlyerProperties.AF_STORE_FROM_API);
        throw null;
    }

    private String getMediationNetwork(SimpleDateFormat simpleDateFormat) {
        int i = 2 % 2;
        int i2 = d + 113;
        w = i2 % 128;
        if (i2 % 2 != 0) {
            Intrinsics.checkNotNullParameter(simpleDateFormat, "");
            this.component4.AFAdRevenueData("appsFlyerFirstInstall", (String) null);
            throw null;
        }
        Intrinsics.checkNotNullParameter(simpleDateFormat, "");
        String strAFAdRevenueData = this.component4.AFAdRevenueData("appsFlyerFirstInstall", (String) null);
        if (strAFAdRevenueData == null) {
            if (copydefault()) {
                AFLogger.afDebugLog("AppsFlyer: first launch detected");
                strAFAdRevenueData = simpleDateFormat.format(new Date());
            } else {
                int i3 = d + 11;
                w = i3 % 128;
                int i4 = i3 % 2;
                strAFAdRevenueData = "";
            }
            this.component4.getMediationNetwork("appsFlyerFirstInstall", strAFAdRevenueData);
        }
        AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.GENERAL, "AppsFlyer: first launch date: " + strAFAdRevenueData, false, 4, null);
        Intrinsics.checkNotNullExpressionValue(strAFAdRevenueData, "");
        return strAFAdRevenueData;
    }

    private boolean copydefault() {
        int i = 2 % 2;
        int i2 = w + 93;
        d = i2 % 128;
        if (i2 % 2 != 0 ? this.component3.getMonetizationNetwork.AFAdRevenueData("appsFlyerCount", 0) > 1 : this.component3.getMonetizationNetwork.AFAdRevenueData("appsFlyerCount", 1) > 1) {
            return false;
        }
        int i3 = w + 91;
        d = i3 % 128;
        int i4 = i3 % 2;
        return true;
    }

    private boolean equals() {
        int i = 2 % 2;
        int i2 = w + 89;
        d = i2 % 128;
        int i3 = i2 % 2;
        Object obj = null;
        boolean z = Boolean.parseBoolean(this.component4.AFAdRevenueData("sentSuccessfully", (String) null));
        int i4 = d + 49;
        w = i4 % 128;
        if (i4 % 2 == 0) {
            return z;
        }
        obj.hashCode();
        throw null;
    }

    private String copy() {
        String strAFAdRevenueData;
        int i = 2 % 2;
        int i2 = d + 21;
        w = i2 % 128;
        int i3 = i2 % 2;
        String string = ((AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this))).getString("preInstallName");
        Object obj = null;
        if (string != null) {
            int i4 = w + 77;
            d = i4 % 128;
            if (i4 % 2 != 0) {
                return string;
            }
            obj.hashCode();
            throw null;
        }
        if (this.component4.getMediationNetwork("preInstallName")) {
            int i5 = w + 91;
            d = i5 % 128;
            int i6 = i5 % 2;
            strAFAdRevenueData = this.component4.AFAdRevenueData("preInstallName", (String) null);
        } else {
            if (copydefault() && (string = (String) getMediationNetwork(new Object[]{this}, -1713193940, 1713193943, System.identityHashCode(this))) == null) {
                int i7 = w + 119;
                d = i7 % 128;
                if (i7 % 2 == 0) {
                    AFAdRevenueData("AF_PRE_INSTALL_NAME");
                    obj.hashCode();
                    throw null;
                }
                string = AFAdRevenueData("AF_PRE_INSTALL_NAME");
            }
            if (string != null) {
                this.component4.getMediationNetwork("preInstallName", string);
            }
            strAFAdRevenueData = string;
        }
        if (strAFAdRevenueData != null) {
            ((AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this))).set("preInstallName", strAFAdRevenueData);
        }
        return strAFAdRevenueData;
    }

    private void getCurrencyIso4217Code(Map<String, Object> map, String str) {
        int i = 2 % 2;
        Intrinsics.checkNotNullParameter(map, "");
        if (((AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this))).getBoolean(AppsFlyerProperties.DEVICE_TRACKING_DISABLED, false)) {
            int i2 = d + 89;
            w = i2 % 128;
            if (i2 % 2 == 0) {
                map.put(AppsFlyerProperties.DEVICE_TRACKING_DISABLED, "true");
                return;
            } else {
                map.put(AppsFlyerProperties.DEVICE_TRACKING_DISABLED, "true");
                int i3 = 33 / 0;
                return;
            }
        }
        AFf1gSDK aFf1gSDK = this.equals;
        Object obj = (String) AFf1gSDK.getCurrencyIso4217Code(new Object[]{aFf1gSDK, this.component4}, -1198101809, 1198101809, System.identityHashCode(aFf1gSDK));
        String str2 = (CharSequence) obj;
        if (str2 != null && str2.length() != 0) {
            map.put("imei", obj);
        }
        String monetizationNetwork = getMonetizationNetwork(str);
        if (monetizationNetwork != null) {
            this.component4.getMediationNetwork("androidIdCached", monetizationNetwork);
            map.put("android_id", monetizationNetwork);
        } else {
            AFLogger.afInfoLog("Android ID was not collected.");
            int i4 = w + 39;
            d = i4 % 128;
            int i5 = i4 % 2;
        }
        AFb1mSDK mediationNetwork = AFb1jSDK.getMediationNetwork(this.getMonetizationNetwork);
        if (mediationNetwork != null) {
            LinkedHashMap linkedHashMap = new LinkedHashMap();
            Boolean bool = mediationNetwork.AFAdRevenueData;
            Intrinsics.checkNotNullExpressionValue(bool, "");
            linkedHashMap.put("isManual", bool);
            String str3 = mediationNetwork.getMonetizationNetwork;
            Intrinsics.checkNotNullExpressionValue(str3, "");
            linkedHashMap.put("val", str3);
            Boolean bool2 = mediationNetwork.getMediationNetwork;
            if (bool2 != null) {
                linkedHashMap.put("isLat", bool2);
            }
            map.put("oaid", linkedHashMap);
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:7:0x0033, code lost:
    
        if (r1.length() == 0) goto L8;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private final java.lang.String getMonetizationNetwork(java.lang.String r6) {
        /*
            r5 = this;
            r0 = 2
            int r1 = r0 % r0
            java.lang.Object[] r1 = new java.lang.Object[]{r5}
            int r2 = java.lang.System.identityHashCode(r5)
            r3 = 2080605438(0x7c0384fe, float:2.7315532E36)
            r4 = -2080605426(0xffffffff83fc7b0e, float:-1.4839481E-36)
            java.lang.Object r1 = getMediationNetwork(r1, r3, r4, r2)
            com.appsflyer.AppsFlyerProperties r1 = (com.appsflyer.AppsFlyerProperties) r1
            java.lang.String r2 = "collectAndroidId"
            r3 = 0
            boolean r1 = r1.getBoolean(r2, r3)
            r2 = 0
            if (r1 == 0) goto L53
            r1 = r6
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            if (r1 == 0) goto L35
            int r3 = com.appsflyer.internal.AFg1oSDK.w
            int r3 = r3 + 119
            int r4 = r3 % 128
            com.appsflyer.internal.AFg1oSDK.d = r4
            int r3 = r3 % r0
            int r1 = r1.length()
            if (r1 != 0) goto L53
        L35:
            boolean r6 = r5.AFKeystoreWrapper()
            if (r6 == 0) goto L52
            int r6 = com.appsflyer.internal.AFg1oSDK.d
            int r6 = r6 + 35
            int r1 = r6 % 128
            com.appsflyer.internal.AFg1oSDK.w = r1
            int r6 = r6 % r0
            java.lang.String r6 = r5.AFInAppEventParameterName()
            int r1 = com.appsflyer.internal.AFg1oSDK.d
            int r1 = r1 + 81
            int r2 = r1 % 128
            com.appsflyer.internal.AFg1oSDK.w = r2
            int r1 = r1 % r0
            return r6
        L52:
            return r2
        L53:
            if (r6 == 0) goto L56
            return r6
        L56:
            return r2
        */
        throw new UnsupportedOperationException("Method not decompiled: com.appsflyer.internal.AFg1oSDK.getMonetizationNetwork(java.lang.String):java.lang.String");
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final String AFInAppEventParameterName() {
        String str;
        int i = 2 % 2;
        int i2 = w + 67;
        d = i2 % 128;
        int i3 = i2 % 2;
        try {
            if (i3 != 0) {
                String strAFAdRevenueData = this.component4.AFAdRevenueData("androidIdCached", (String) null);
                String string = Settings.Secure.getString(this.getMonetizationNetwork.getContentResolver(), "android_id");
                str = strAFAdRevenueData;
                if (string != null) {
                    return string;
                }
                if (str == 0) {
                    return null;
                }
                int i4 = w + 73;
                d = i4 % 128;
                int i5 = i4 % 2;
                AFLogger.afDebugLog("use cached AndroidId: " + str);
                int i6 = d + 125;
                w = i6 % 128;
                if (i6 % 2 != 0) {
                    int i7 = 82 / 0;
                }
                return str;
            }
            this.component4.AFAdRevenueData("androidIdCached", (String) null);
            Settings.Secure.getString(this.getMonetizationNetwork.getContentResolver(), "android_id");
            throw null;
        } catch (Exception e) {
            AFLogger.afErrorLog(e.getMessage(), e);
            str = i3;
        }
    }

    private static void component2(Map<String, Object> map) throws UnsupportedEncodingException {
        int i = 2 % 2;
        int i2 = w + 37;
        d = i2 % 128;
        int i3 = i2 % 2;
        Intrinsics.checkNotNullParameter(map, "");
        Object[] objArr = new Object[1];
        a("\u008f\u0089\u0087\u0083\u008e", null, null, 127 - ExpandableListView.getPackedPositionType(0L), objArr);
        map.put(((String) objArr[0]).intern(), Build.BRAND);
        map.put("device", Build.DEVICE);
        map.put("product", Build.PRODUCT);
        map.put("sdk", String.valueOf(Build.VERSION.SDK_INT));
        map.put("model", Build.MODEL);
        map.put("deviceType", Build.TYPE);
        int i4 = w + 95;
        d = i4 % 128;
        if (i4 % 2 == 0) {
            throw null;
        }
    }

    private void getMonetizationNetwork(AFh1rSDK aFh1rSDK, String str, String str2, AFb1qSDK aFb1qSDK) throws PackageManager.NameNotFoundException {
        int i = 2 % 2;
        int i2 = d + 121;
        w = i2 % 128;
        int i3 = i2 % 2;
        Intrinsics.checkNotNullParameter(aFh1rSDK, "");
        Map<String, Object> map = aFh1rSDK.AFAdRevenueData;
        if (aFh1rSDK.getCurrencyIso4217Code() == AFe1mSDK.CONVERSION) {
            int i4 = d + 107;
            w = i4 % 128;
            if (i4 % 2 != 0) {
                Intrinsics.checkNotNullExpressionValue(map, "");
                toString(map);
                copydefault(map);
                hashCode(map);
                AFa1zSDK.AFAdRevenueData(this.toString, this.component3);
                int i5 = 38 / 0;
            } else {
                Intrinsics.checkNotNullExpressionValue(map, "");
                toString(map);
                copydefault(map);
                hashCode(map);
                AFa1zSDK.AFAdRevenueData(this.toString, this.component3);
            }
        }
        Intrinsics.checkNotNullExpressionValue(map, "");
        copy(map);
        component3(map);
        component1((Map<String, ? extends Object>) map);
        getMonetizationNetwork(map, str2);
        getMediationNetwork(new Object[]{this, map, str}, 1763970144, -1763970135, System.identityHashCode(this));
        registerClient(map);
        if (aFb1qSDK != null) {
            aFb1qSDK.getRevenue(map);
        }
    }

    private final void toString(Map<String, Object> map) {
        int i = 2 % 2;
        int i2 = w + 33;
        d = i2 % 128;
        int i3 = i2 % 2;
        if (((AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this))).isOtherSdkStringDisabled()) {
            return;
        }
        int i4 = w + 69;
        d = i4 % 128;
        int i5 = i4 % 2;
        map.put("batteryLevel", String.valueOf(this.getMediationNetwork.getRevenue(this.getMonetizationNetwork).getRevenue));
        int i6 = d + 103;
        w = i6 % 128;
        int i7 = i6 % 2;
    }

    private final void copydefault(Map<String, Object> map) {
        int i = 2 % 2;
        int i2 = d + 33;
        w = i2 % 128;
        int i3 = i2 % 2;
        int i4 = w + 97;
        d = i4 % 128;
        if (i4 % 2 != 0) {
            UiModeManager uiModeManager = (UiModeManager) this.getMonetizationNetwork.getSystemService(UiModeManager.class);
            if (uiModeManager == null || uiModeManager.getCurrentModeType() != 4) {
                return;
            }
            map.put("tv", Boolean.TRUE);
            return;
        }
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    private void equals(Map<String, Object> map) {
        int i = 2 % 2;
        int i2 = w + 101;
        d = i2 % 128;
        Object obj = null;
        if (i2 % 2 == 0) {
            Intrinsics.checkNotNullParameter(map, "");
            map.put("is_pc", Boolean.valueOf(this.getMonetizationNetwork.getApplicationContext().getPackageManager().hasSystemFeature("com.google.android.play.feature.HPE_EXPERIENCE")));
            obj.hashCode();
            throw null;
        }
        Intrinsics.checkNotNullParameter(map, "");
        map.put("is_pc", Boolean.valueOf(this.getMonetizationNetwork.getApplicationContext().getPackageManager().hasSystemFeature("com.google.android.play.feature.HPE_EXPERIENCE")));
        int i3 = w + 99;
        d = i3 % 128;
        if (i3 % 2 == 0) {
            throw null;
        }
    }

    private final void hashCode(Map<String, Object> map) {
        int i = 2 % 2;
        int i2 = d + 49;
        w = i2 % 128;
        if (i2 % 2 != 0) {
            int i3 = 74 / 0;
            if (!AFg1kSDK.getMediationNetwork(this.getMonetizationNetwork)) {
                return;
            }
        } else if (!AFg1kSDK.getMediationNetwork(this.getMonetizationNetwork)) {
            return;
        }
        map.put("inst_app", Boolean.TRUE);
        int i4 = d + 85;
        w = i4 % 128;
        if (i4 % 2 != 0) {
            int i5 = 4 % 5;
        }
    }

    /* JADX WARN: Code duplicated, block: B:11:0x0055  */
    /* JADX WARN: Code duplicated, block: B:12:0x0058  */
    /* JADX WARN: Code duplicated, block: B:9:0x0043 A[PHI: r1 r6
  0x0043: PHI (r1v6 long) = (r1v5 long), (r1v12 long) binds: [B:8:0x0041, B:5:0x0028] A[DONT_GENERATE, DONT_INLINE]
  0x0043: PHI (r6v1 long) = (r6v0 long), (r6v3 long) binds: [B:8:0x0041, B:5:0x0028] A[DONT_GENERATE, DONT_INLINE]] */
    private void copy(Map<String, Object> map) {
        long currencyIso4217Code;
        long jCurrentTimeMillis;
        long seconds;
        int i;
        int i2 = 2 % 2;
        int i3 = d + 97;
        w = i3 % 128;
        if (i3 % 2 != 0) {
            Intrinsics.checkNotNullParameter(map, "");
            currencyIso4217Code = this.component4.getCurrencyIso4217Code("AppsFlyerTimePassedSincePrevLaunch", 1L);
            jCurrentTimeMillis = System.currentTimeMillis();
            this.component4.getMonetizationNetwork("AppsFlyerTimePassedSincePrevLaunch", jCurrentTimeMillis);
            if (currencyIso4217Code > 1) {
                seconds = TimeUnit.MILLISECONDS.toSeconds(jCurrentTimeMillis - currencyIso4217Code);
                i = d + 81;
                w = i % 128;
                if (i % 2 != 0) {
                    int i4 = 4 / 2;
                }
            } else {
                seconds = -1;
            }
        } else {
            Intrinsics.checkNotNullParameter(map, "");
            currencyIso4217Code = this.component4.getCurrencyIso4217Code("AppsFlyerTimePassedSincePrevLaunch", 0L);
            jCurrentTimeMillis = System.currentTimeMillis();
            this.component4.getMonetizationNetwork("AppsFlyerTimePassedSincePrevLaunch", jCurrentTimeMillis);
            if (currencyIso4217Code > 0) {
                seconds = TimeUnit.MILLISECONDS.toSeconds(jCurrentTimeMillis - currencyIso4217Code);
                i = d + 81;
                w = i % 128;
                if (i % 2 != 0) {
                    int i5 = 4 / 2;
                }
            } else {
                seconds = -1;
            }
        }
        map.put("timepassedsincelastlaunch", String.valueOf(seconds));
    }

    private static void getMonetizationNetwork(Map<String, Object> map, String str) {
        int i = 2 % 2;
        int i2 = d + 117;
        w = i2 % 128;
        if (i2 % 2 != 0) {
            Intrinsics.checkNotNullParameter(map, "");
            Object obj = null;
            obj.hashCode();
            throw null;
        }
        Intrinsics.checkNotNullParameter(map, "");
        if (str != null) {
            int i3 = w + 99;
            d = i3 % 128;
            int i4 = i3 % 2;
            map.put("phone", str);
        }
        int i5 = d + 15;
        w = i5 % 128;
        int i6 = i5 % 2;
    }

    /* JADX WARN: Code duplicated, block: B:12:0x0039  */
    private static /* synthetic */ Object component1(Object[] objArr) {
        AFg1oSDK aFg1oSDK = (AFg1oSDK) objArr[0];
        Map map = (Map) objArr[1];
        String str = (String) objArr[2];
        int i = 2 % 2;
        Intrinsics.checkNotNullParameter(map, "");
        String str2 = str;
        if (str2 != null) {
            int i2 = w + 53;
            d = i2 % 128;
            if (i2 % 2 == 0) {
                int i3 = 87 / 0;
                if (str2.length() != 0) {
                    map.put(Constants.REFERRER, str);
                    int i4 = w + 103;
                    d = i4 % 128;
                    int i5 = i4 % 2;
                }
            } else if (str2.length() != 0) {
                map.put(Constants.REFERRER, str);
                int i6 = w + 103;
                d = i6 % 128;
                int i7 = i6 % 2;
            }
        }
        String strAFAdRevenueData = aFg1oSDK.component4.AFAdRevenueData("extraReferrers", (String) null);
        if (strAFAdRevenueData != null) {
            map.put("extraReferrers", strAFAdRevenueData);
        }
        String referrer = ((AppsFlyerProperties) getMediationNetwork(new Object[]{aFg1oSDK}, 2080605438, -2080605426, System.identityHashCode(aFg1oSDK))).getReferrer(aFg1oSDK.component4);
        String str3 = referrer;
        if (str3 != null && str3.length() != 0 && map.get(Constants.REFERRER) == null) {
            int i8 = w + 33;
            d = i8 % 128;
            int i9 = i8 % 2;
            map.put(Constants.REFERRER, referrer);
        }
        int i10 = d + 15;
        w = i10 % 128;
        if (i10 % 2 == 0) {
            return null;
        }
        throw null;
    }

    private void registerClient(Map<String, Object> map) {
        int i = 2 % 2;
        Intrinsics.checkNotNullParameter(map, "");
        long j = this.areAllFieldsValid.toString;
        if (j != 0) {
            int i2 = w + 97;
            d = i2 % 128;
            if (i2 % 2 == 0) {
                map.put("prev_session_dur", Long.valueOf(j));
                Object obj = null;
                obj.hashCode();
                throw null;
            }
            map.put("prev_session_dur", Long.valueOf(j));
        }
        int i3 = d + 105;
        w = i3 % 128;
        int i4 = i3 % 2;
    }

    private static void AFInAppEventType(Map<String, Object> map) {
        int i = 2 % 2;
        int i2 = d + AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR_OVERLAY;
        w = i2 % 128;
        if (i2 % 2 != 0) {
            Intrinsics.checkNotNullParameter(map, "");
            AFa1zSDK aFa1zSDK = AFa1zSDK.INSTANCE;
            AFa1zSDK.getCurrencyIso4217Code();
            AFa1zSDK aFa1zSDK2 = AFa1zSDK.INSTANCE;
            AFa1zSDK.getRevenue();
            throw null;
        }
        Intrinsics.checkNotNullParameter(map, "");
        AFa1zSDK aFa1zSDK3 = AFa1zSDK.INSTANCE;
        Object currencyIso4217Code = AFa1zSDK.getCurrencyIso4217Code();
        AFa1zSDK aFa1zSDK4 = AFa1zSDK.INSTANCE;
        String revenue = AFa1zSDK.getRevenue();
        if (currencyIso4217Code == null || revenue == null || Integer.parseInt(revenue) <= 0) {
            return;
        }
        int i3 = w + 27;
        d = i3 % 128;
        if (i3 % 2 != 0) {
            map.put("reinstallCounter", revenue);
            map.put("originalAppsflyerId", currencyIso4217Code);
        } else {
            map.put("reinstallCounter", revenue);
            map.put("originalAppsflyerId", currencyIso4217Code);
            throw null;
        }
    }

    private static /* synthetic */ Object getMonetizationNetwork(Object[] objArr) {
        AFg1oSDK aFg1oSDK = (AFg1oSDK) objArr[0];
        Map map = (Map) objArr[1];
        int i = 2 % 2;
        int i2 = d + 65;
        w = i2 % 128;
        if (i2 % 2 != 0) {
            Intrinsics.checkNotNullParameter(map, "");
            map.putAll(aFg1oSDK.hashCode.getCurrencyIso4217Code());
            int i3 = 13 / 0;
        } else {
            Intrinsics.checkNotNullParameter(map, "");
            map.putAll(aFg1oSDK.hashCode.getCurrencyIso4217Code());
        }
        int i4 = w + 87;
        d = i4 % 128;
        int i5 = i4 % 2;
        return null;
    }

    private void AFKeystoreWrapper(Map<String, Object> map) {
        int i = 2 % 2;
        int i2 = w + 111;
        d = i2 % 128;
        if (i2 % 2 == 0) {
            Intrinsics.checkNotNullParameter(map, "");
            ((AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this))).getString(AppsFlyerProperties.EXTENSION);
            throw null;
        }
        Intrinsics.checkNotNullParameter(map, "");
        String string = ((AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this))).getString(AppsFlyerProperties.EXTENSION);
        String str = string;
        if (str != null) {
            int i3 = d + 125;
            w = i3 % 128;
            int i4 = i3 % 2;
            if (str.length() == 0) {
                return;
            }
            map.put(AppsFlyerProperties.EXTENSION, string);
        }
    }

    /* JADX WARN: Code duplicated, block: B:12:0x0040  */
    /* JADX WARN: Code duplicated, block: B:16:0x004e  */
    private void AFInAppEventParameterName(Map<String, Object> map) {
        boolean z;
        int i = 2 % 2;
        Intrinsics.checkNotNullParameter(map, "");
        String strComponent2 = this.component3.component2();
        String str = (String) getMediationNetwork(new Object[]{this.component4, strComponent2}, 381318279, -381318268, (int) System.currentTimeMillis());
        boolean z2 = (str == null || Intrinsics.areEqual(str, strComponent2)) ? false : true;
        if (str == null) {
            int i2 = w + 67;
            d = i2 % 128;
            int i3 = i2 % 2;
            z = strComponent2 != null;
        }
        if (z2) {
            map.put("af_latestchannel", strComponent2);
        } else {
            int i4 = w + 9;
            d = i4 % 128;
            int i5 = i4 % 2;
            if (z) {
                map.put("af_latestchannel", strComponent2);
            }
        }
        String strAreAllFieldsValid = areAllFieldsValid();
        if (strAreAllFieldsValid != null) {
            int i6 = w + 101;
            d = i6 % 128;
            if (i6 % 2 == 0) {
                Locale locale = Locale.getDefault();
                Intrinsics.checkNotNullExpressionValue(locale, "");
                String lowerCase = strAreAllFieldsValid.toLowerCase(locale);
                Intrinsics.checkNotNullExpressionValue(lowerCase, "");
                map.put("af_installstore", lowerCase);
                Object obj = null;
                obj.hashCode();
                throw null;
            }
            Locale locale2 = Locale.getDefault();
            Intrinsics.checkNotNullExpressionValue(locale2, "");
            String lowerCase2 = strAreAllFieldsValid.toLowerCase(locale2);
            Intrinsics.checkNotNullExpressionValue(lowerCase2, "");
            map.put("af_installstore", lowerCase2);
        }
        String strCopy = copy();
        if (strCopy != null) {
            Locale locale3 = Locale.getDefault();
            Intrinsics.checkNotNullExpressionValue(locale3, "");
            String lowerCase3 = strCopy.toLowerCase(locale3);
            Intrinsics.checkNotNullExpressionValue(lowerCase3, "");
            map.put("af_preinstall_name", lowerCase3);
        }
        String strComponent3 = component2();
        if (strComponent3 != null) {
            Locale locale4 = Locale.getDefault();
            Intrinsics.checkNotNullExpressionValue(locale4, "");
            String lowerCase4 = strComponent3.toLowerCase(locale4);
            Intrinsics.checkNotNullExpressionValue(lowerCase4, "");
            map.put("af_currentstore", lowerCase4);
        }
    }

    private void unregisterClient(Map<String, Object> map) {
        int i = 2 % 2;
        int i2 = d + 27;
        w = i2 % 128;
        if (i2 % 2 == 0) {
            Intrinsics.checkNotNullParameter(map, "");
            map.put("af_preinstalled", String.valueOf(AFc1pSDK.AFAdRevenueData(this.getMonetizationNetwork)));
        } else {
            Intrinsics.checkNotNullParameter(map, "");
            map.put("af_preinstalled", String.valueOf(AFc1pSDK.AFAdRevenueData(this.getMonetizationNetwork)));
            Object obj = null;
            obj.hashCode();
            throw null;
        }
    }

    private static void w(Map<String, Object> map) {
        int i = 2 % 2;
        Intrinsics.checkNotNullParameter(map, "");
        try {
            map.put("lang", Locale.getDefault().getDisplayLanguage());
            int i2 = w + 103;
            d = i2 % 128;
            int i3 = i2 % 2;
        } catch (Exception e) {
            AFLogger.afErrorLog("Exception while collecting display language name. ", e);
        }
        try {
            map.put("lang_code", Locale.getDefault().getLanguage());
            int i4 = d + 119;
            w = i4 % 128;
            if (i4 % 2 != 0) {
                int i5 = 5 / 4;
            }
        } catch (Exception e2) {
            AFLogger.afErrorLog("Exception while collecting display language code. ", e2);
        }
        try {
            map.put(AdRevenueScheme.COUNTRY, Locale.getDefault().getCountry());
            int i6 = w + 103;
            d = i6 % 128;
            int i7 = i6 % 2;
        } catch (Exception e3) {
            AFLogger.afErrorLog("Exception while collecting country name. ", e3);
        }
    }

    private void d(Map<String, Object> map) {
        int i = 2 % 2;
        int i2 = w + 13;
        d = i2 % 128;
        int i3 = i2 % 2;
        Intrinsics.checkNotNullParameter(map, "");
        String revenue = AFb1iSDK.getRevenue(this.component3.getMonetizationNetwork);
        if (revenue != null) {
            int i4 = d + 13;
            w = i4 % 128;
            if (i4 % 2 != 0) {
                map.put("uid", revenue);
                Boolean boolValueOf = Boolean.valueOf(this.component3.getMonetizationNetwork.getMediationNetwork("CUSTOM_INSTALL_ID_APPLIED", true));
                Intrinsics.checkNotNullExpressionValue(boolValueOf, "");
                if (!boolValueOf.booleanValue()) {
                    return;
                }
            } else {
                map.put("uid", revenue);
                Boolean boolValueOf2 = Boolean.valueOf(this.component3.getMonetizationNetwork.getMediationNetwork("CUSTOM_INSTALL_ID_APPLIED", false));
                Intrinsics.checkNotNullExpressionValue(boolValueOf2, "");
                if (!boolValueOf2.booleanValue()) {
                    return;
                }
            }
            int i5 = w + 117;
            d = i5 % 128;
            if (i5 % 2 != 0) {
                map.put("custom_install_id", Boolean.TRUE);
            } else {
                map.put("custom_install_id", Boolean.TRUE);
                throw null;
            }
        }
    }

    private void e(Map<String, Object> map) {
        int i = 2 % 2;
        Intrinsics.checkNotNullParameter(map, "");
        boolean monetizationNetwork = AFg1ySDK.getMonetizationNetwork(this.getMonetizationNetwork);
        AFLogger.afDebugLog("didConfigureTokenRefreshService=" + monetizationNetwork);
        if (!monetizationNetwork) {
            int i2 = w + 55;
            d = i2 % 128;
            int i3 = i2 % 2;
            map.put("tokenRefreshConfigured", Boolean.FALSE);
            int i4 = d + 125;
            w = i4 % 128;
            int i5 = i4 % 2;
        }
        map.put("registeredUninstall", Boolean.valueOf(AFg1ySDK.getMonetizationNetwork(this.component4)));
    }

    private void afInfoLog(Map<String, Object> map) {
        int i = 2 % 2;
        int i2 = w + 11;
        d = i2 % 128;
        int i3 = i2 % 2;
        Intrinsics.checkNotNullParameter(map, "");
        if (this.component4.getMediationNetwork("is_stop_tracking_used")) {
            map.put("istu", String.valueOf(this.component4.getMediationNetwork("is_stop_tracking_used", false)));
        }
        int i4 = w + 87;
        d = i4 % 128;
        int i5 = i4 % 2;
    }

    private void force(Map<String, Object> map) {
        int i = 2 % 2;
        int i2 = w + 113;
        d = i2 % 128;
        int i3 = i2 % 2;
        Intrinsics.checkNotNullParameter(map, "");
        String mediationNetwork = this.equals.getMediationNetwork();
        String str = mediationNetwork;
        if (str != null) {
            int i4 = w + AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR_OVERLAY;
            d = i4 % 128;
            Object obj = null;
            if (i4 % 2 == 0) {
                str.length();
                throw null;
            }
            if (str.length() == 0) {
                return;
            }
            int i5 = d + 41;
            w = i5 % 128;
            if (i5 % 2 == 0) {
                map.put("appsflyerKey", mediationNetwork);
            } else {
                map.put("appsflyerKey", mediationNetwork);
                obj.hashCode();
                throw null;
            }
        }
    }

    private void afDebugLog(Map<String, Object> map) {
        String currencyIso4217Code;
        int i = 2 % 2;
        int i2 = w + 111;
        d = i2 % 128;
        if (i2 % 2 == 0) {
            Intrinsics.checkNotNullParameter(map, "");
            if (!((AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this))).getBoolean(AppsFlyerProperties.COLLECT_FACEBOOK_ATTR_ID, true)) {
                return;
            }
        } else {
            Intrinsics.checkNotNullParameter(map, "");
            if (!((AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this))).getBoolean(AppsFlyerProperties.COLLECT_FACEBOOK_ATTR_ID, true)) {
                return;
            }
        }
        try {
            this.getMonetizationNetwork.getPackageManager().getApplicationInfo("com.facebook.katana", 0);
            currencyIso4217Code = this.component3.getCurrencyIso4217Code(this.getMonetizationNetwork);
        } catch (Throwable unused) {
            currencyIso4217Code = null;
        }
        if (currencyIso4217Code != null) {
            int i3 = d + 113;
            w = i3 % 128;
            if (i3 % 2 == 0) {
                map.put("fb", currencyIso4217Code);
            } else {
                map.put("fb", currencyIso4217Code);
                throw null;
            }
        }
    }

    private void afErrorLog(Map<String, Object> map) {
        int i = 2 % 2;
        int i2 = d + 89;
        w = i2 % 128;
        Object obj = null;
        if (i2 % 2 != 0) {
            Intrinsics.checkNotNullParameter(map, "");
            this.copy.AFAdRevenueData();
            throw null;
        }
        Intrinsics.checkNotNullParameter(map, "");
        if (!this.copy.AFAdRevenueData()) {
            AFb1gSDK aFb1gSDK = this.copy.toString;
            if (aFb1gSDK != null) {
                int i3 = d + 89;
                w = i3 % 128;
                int i4 = i3 % 2;
                map.put("app_set_id", MapsKt.mapOf(TuplesKt.to("scope", Integer.valueOf(aFb1gSDK.AFAdRevenueData)), TuplesKt.to("id", aFb1gSDK.getMonetizationNetwork)));
                return;
            }
            return;
        }
        map.put("app_set_id", MapsKt.mapOf(TuplesKt.to("app_set_id_disabled", Boolean.TRUE)));
        if (this.copy.toString == null) {
            AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.APP_SET_ID, "App Set ID collection is disabled. Skipping inclusion in the event payload.", false, 4, null);
            return;
        }
        AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.APP_SET_ID, "App Set Id was collected, but will not be included in the payload.To prevent collection entirely, call disableAppSetId() before initializing the SDK.", false, 4, null);
        int i5 = d + AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR_OVERLAY;
        w = i5 % 128;
        if (i5 % 2 == 0) {
            return;
        }
        obj.hashCode();
        throw null;
    }

    private static /* synthetic */ Object areAllFieldsValid(Object[] objArr) {
        AFc1qSDK aFc1qSDK = (AFc1qSDK) objArr[0];
        String str = (String) objArr[1];
        int i = 2 % 2;
        int i2 = d + 1;
        w = i2 % 128;
        int i3 = i2 % 2;
        String strAFAdRevenueData = aFc1qSDK.AFAdRevenueData("CACHED_CHANNEL", (String) null);
        if (strAFAdRevenueData != null) {
            int i4 = d + 27;
            w = i4 % 128;
            if (i4 % 2 == 0) {
                return strAFAdRevenueData;
            }
            throw null;
        }
        aFc1qSDK.getMediationNetwork("CACHED_CHANNEL", str);
        int i5 = w + 19;
        d = i5 % 128;
        int i6 = i5 % 2;
        return str;
    }

    private static String getMediationNetwork(String str) {
        int i = 2 % 2;
        int i2 = d + 91;
        w = i2 % 128;
        int i3 = i2 % 2;
        try {
            Object objInvoke = Class.forName("android.os.SystemProperties").getMethod("get", String.class).invoke(null, str);
            Intrinsics.checkNotNull(objInvoke, "");
            String str2 = (String) objInvoke;
            int i4 = d + 43;
            w = i4 % 128;
            int i5 = i4 % 2;
            return str2;
        } catch (Throwable th) {
            AFLogger.afErrorLog(th.getMessage(), th);
            return null;
        }
    }

    private final String AFAdRevenueData(String str) {
        int i = 2 % 2;
        int i2 = d + 5;
        w = i2 % 128;
        int i3 = i2 % 2;
        String currencyIso4217Code = this.component3.getCurrencyIso4217Code(str);
        if (i3 != 0) {
            int i4 = 38 / 0;
        }
        return currencyIso4217Code;
    }

    private static File getCurrencyIso4217Code(String str) {
        int i = 2 % 2;
        int i2 = w + 97;
        int i3 = i2 % 128;
        d = i3;
        int i4 = i2 % 2;
        Object obj = null;
        if (str != null) {
            int i5 = i3 + 105;
            w = i5 % 128;
            try {
                if (i5 % 2 == 0) {
                    if (StringsKt.trim((CharSequence) str).toString().length() > 0) {
                        int i6 = w + 107;
                        d = i6 % 128;
                        int i7 = i6 % 2;
                        return new File(StringsKt.trim((CharSequence) str).toString());
                    }
                } else {
                    StringsKt.trim((CharSequence) str).toString().length();
                    obj.hashCode();
                    throw null;
                }
            } catch (Throwable th) {
                AFLogger.afErrorLog(th.getMessage(), th);
            }
        }
        return null;
    }

    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:22:0x005e -> B:41:0x0089). Please report as a decompilation issue!!! */
    private static /* synthetic */ Object getRevenue(Object[] objArr) {
        InputStreamReader inputStreamReader;
        File file = (File) objArr[0];
        String str = (String) objArr[1];
        int i = 2 % 2;
        try {
            try {
                if (file == null) {
                    int i2 = w + 43;
                    d = i2 % 128;
                    int i3 = i2 % 2;
                    return null;
                }
                try {
                    Properties properties = new Properties();
                    inputStreamReader = new InputStreamReader(new FileInputStream(file), Charset.defaultCharset());
                    try {
                        properties.load(inputStreamReader);
                        AFLogger.afInfoLog("Found PreInstall property!");
                        String property = properties.getProperty(str);
                        try {
                            inputStreamReader.close();
                            return property;
                        } catch (Throwable th) {
                            AFLogger.afErrorLog(th.getMessage(), th);
                            return property;
                        }
                    } catch (FileNotFoundException unused) {
                        AFLogger.afDebugLog("PreInstall file wasn't found: " + file.getAbsolutePath());
                        if (inputStreamReader != null) {
                            inputStreamReader.close();
                            int i4 = w + 31;
                            d = i4 % 128;
                            int i5 = i4 % 2;
                        }
                        return null;
                    } catch (Throwable th2) {
                        th = th2;
                        AFLogger.afErrorLog(th.getMessage(), th);
                        if (inputStreamReader != null) {
                            inputStreamReader.close();
                        }
                        return null;
                    }
                } catch (FileNotFoundException unused2) {
                    inputStreamReader = null;
                } catch (Throwable th3) {
                    th = th3;
                    inputStreamReader = null;
                }
            } catch (Throwable th4) {
                if (inputStreamReader != null) {
                    try {
                        inputStreamReader.close();
                        int i6 = d + 91;
                        w = i6 % 128;
                        int i7 = i6 % 2;
                    } catch (Throwable th5) {
                        AFLogger.afErrorLog(th5.getMessage(), th5);
                    }
                }
                throw th4;
            }
        } catch (Throwable th6) {
            AFLogger.afErrorLog(th6.getMessage(), th6);
        }
    }

    private final boolean AFKeystoreWrapper() {
        int i = 2 % 2;
        if (!((AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this))).getBoolean(AppsFlyerProperties.COLLECT_ANDROID_ID_FORCE_BY_USER, false)) {
            int i2 = w + 23;
            d = i2 % 128;
            if (i2 % 2 != 0 ? !((AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this))).getBoolean(AppsFlyerProperties.COLLECT_IMEI_FORCE_BY_USER, false) : !((AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this))).getBoolean(AppsFlyerProperties.COLLECT_IMEI_FORCE_BY_USER, false)) {
                return !AFa1tSDK.getCurrencyIso4217Code(this.getMonetizationNetwork);
            }
        }
        int i3 = d + 115;
        w = i3 % 128;
        int i4 = i3 % 2;
        return true;
    }

    private static void getRevenue(Map<String, Object> map, AFh1rSDK aFh1rSDK) {
        Intrinsics.checkNotNullParameter(map, "");
        Intrinsics.checkNotNullParameter(aFh1rSDK, "");
        String str = aFh1rSDK.areAllFieldsValid;
        if (str != null) {
            map.put("eventName", str);
            map.put("eventValue", new JSONObject(aFh1rSDK.getMonetizationNetwork == null ? new HashMap() : aFh1rSDK.getMonetizationNetwork).toString());
        }
    }

    private static String getMediationNetwork(File file, String str) {
        return (String) getMediationNetwork(new Object[]{file, str}, -2094417185, 2094417192, (int) System.currentTimeMillis());
    }

    private static boolean getMediationNetwork(File file) {
        return ((Boolean) getMediationNetwork(new Object[]{file}, 1334456290, -1334456289, (int) System.currentTimeMillis())).booleanValue();
    }

    private final String AFInAppEventType() {
        return (String) getMediationNetwork(new Object[]{this}, -1713193940, 1713193943, System.identityHashCode(this));
    }

    private static String getMonetizationNetwork(AFc1qSDK aFc1qSDK, String str) {
        return (String) getMediationNetwork(new Object[]{aFc1qSDK, str}, 381318279, -381318268, (int) System.currentTimeMillis());
    }

    private void i(Map<String, Object> map) throws PackageManager.NameNotFoundException {
        getMediationNetwork(new Object[]{this, map}, -1753918152, 1753918160, System.identityHashCode(this));
    }

    private void AFLogger(Map<String, Object> map) throws PackageManager.NameNotFoundException {
        getMediationNetwork(new Object[]{this, map}, -140518465, 140518471, System.identityHashCode(this));
    }

    private void getRevenue(Map<String, Object> map, String str) throws PackageManager.NameNotFoundException {
        getMediationNetwork(new Object[]{this, map, str}, 1763970144, -1763970135, System.identityHashCode(this));
    }

    @Override // com.appsflyer.internal.AFg1qSDK
    public final void AFAdRevenueData(Map<String, Object> map) throws PackageManager.NameNotFoundException {
        getMediationNetwork(new Object[]{this, map}, -1412383531, 1412383531, System.identityHashCode(this));
    }

    @Override // com.appsflyer.internal.AFg1qSDK
    public final long AFAdRevenueData() {
        return ((Long) getMediationNetwork(new Object[]{this}, 1094427935, -1094427925, System.identityHashCode(this))).longValue();
    }

    private static PackageInfo s_(PackageManager packageManager, String str) {
        return (PackageInfo) getMediationNetwork(new Object[]{packageManager, str}, 1014234820, -1014234818, (int) System.currentTimeMillis());
    }

    @Override // com.appsflyer.internal.AFg1qSDK
    public final void AFAdRevenueData(AFh1rSDK aFh1rSDK) throws PackageManager.NameNotFoundException {
        getMediationNetwork(new Object[]{this, aFh1rSDK}, 840096269, -840096265, System.identityHashCode(this));
    }

    @Override // com.appsflyer.internal.AFg1qSDK
    public final void getRevenue(Map<String, Object> map) throws PackageManager.NameNotFoundException {
        getMediationNetwork(new Object[]{this, map}, -1435534785, 1435534790, System.identityHashCode(this));
    }

    private final AppsFlyerProperties getRevenue() {
        return (AppsFlyerProperties) getMediationNetwork(new Object[]{this}, 2080605438, -2080605426, System.identityHashCode(this));
    }
}
