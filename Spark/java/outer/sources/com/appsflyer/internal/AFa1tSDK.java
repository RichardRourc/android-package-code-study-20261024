package com.appsflyer.internal;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.pm.PackageManager;
import android.content.pm.ProviderInfo;
import android.content.pm.ResolveInfo;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.StrictMode;
import android.os.SystemClock;
import android.text.TextUtils;
import android.view.MotionEvent;
import androidx.appcompat.app.AppCompatDelegate;
import com.adjust.sdk.Constants;
import com.appsflyer.AFAdRevenueData;
import com.appsflyer.AFInAppEventParameterName;
import com.appsflyer.AFInAppEventType;
import com.appsflyer.AFLogger;
import com.appsflyer.AFPurchaseDetails;
import com.appsflyer.AppsFlyerConsent;
import com.appsflyer.AppsFlyerConversionListener;
import com.appsflyer.AppsFlyerInAppPurchaseValidationCallback;
import com.appsflyer.AppsFlyerInAppPurchaseValidatorListener;
import com.appsflyer.AppsFlyerLib;
import com.appsflyer.AppsFlyerProperties;
import com.appsflyer.PurchaseHandler;
import com.appsflyer.attribution.AppsFlyerRequestListener;
import com.appsflyer.deeplink.DeepLinkListener;
import com.appsflyer.deeplink.DeepLinkResult;
import com.appsflyer.internal.AFe1lSDK.AnonymousClass5;
import com.appsflyer.internal.components.network.http.ResponseNetwork;
import com.appsflyer.internal.platform_extension.PluginInfo;
import com.google.android.gms.common.GoogleApiAvailability;
import java.net.URI;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Date;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Objects;
import java.util.TimeZone;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.TimeUnit;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public final class AFa1tSDK extends AppsFlyerLib {
    private static int $10 = 0;
    private static int $11 = 1;
    static AppsFlyerInAppPurchaseValidatorListener AFAdRevenueData = null;
    private static int AFInAppEventParameterName = 0;
    private static int AFInAppEventType = 1;
    private static int[] AFKeystoreWrapper;
    private static AFa1tSDK areAllFieldsValid;
    public static final String getMonetizationNetwork;
    public static final String getRevenue;
    Application component1;
    private Map<Long, String> copydefault;
    private AFf1mSDK equals;
    private SharedPreferences hashCode;
    private boolean toString;
    public volatile AppsFlyerConversionListener getCurrencyIso4217Code = null;
    private long component2 = -1;
    long getMediationNetwork = -1;
    private long component3 = TimeUnit.SECONDS.toMillis(5);
    boolean component4 = false;
    private final AFc1eSDK copy = new AFc1eSDK();

    static {
        areAllFieldsValid();
        getMonetizationNetwork = "348";
        getRevenue = "6.17.0".substring(0, "6.17.0".lastIndexOf("."));
        AFAdRevenueData = null;
        areAllFieldsValid = new AFa1tSDK();
        int i = AFInAppEventParameterName + 83;
        AFInAppEventType = i % 128;
        int i2 = i % 2;
    }

    private static void a(int[] iArr, int i, Object[] objArr) {
        int i2 = 2 % 2;
        AFk1kSDK aFk1kSDK = new AFk1kSDK();
        int i3 = 4;
        char[] cArr = new char[4];
        char[] cArr2 = new char[iArr.length * 2];
        int[] iArr2 = AFKeystoreWrapper;
        if (iArr2 != null) {
            int length = iArr2.length;
            int[] iArr3 = new int[length];
            int i4 = 0;
            while (i4 < length) {
                int i5 = $11 + 113;
                int i6 = i5 % 128;
                $10 = i6;
                int i7 = i5 % 2;
                iArr3[i4] = (int) (((long) iArr2[i4]) ^ 3670241895213185600L);
                i4++;
                int i8 = i6 + 83;
                $11 = i8 % 128;
                int i9 = i8 % 2;
                i3 = i3;
                cArr = cArr;
            }
            iArr2 = iArr3;
        }
        int i10 = i3;
        char[] cArr3 = cArr;
        int length2 = iArr2.length;
        int[] iArr4 = new int[length2];
        int[] iArr5 = AFKeystoreWrapper;
        if (iArr5 != null) {
            int length3 = iArr5.length;
            int[] iArr6 = new int[length3];
            for (int i11 = 0; i11 < length3; i11++) {
                iArr6[i11] = (int) (((long) iArr5[i11]) ^ 3670241895213185600L);
            }
            iArr5 = iArr6;
        }
        System.arraycopy(iArr5, 0, iArr4, 0, length2);
        aFk1kSDK.getCurrencyIso4217Code = 0;
        int i12 = $11 + 21;
        $10 = i12 % 128;
        if (i12 % 2 != 0) {
            int i13 = i10 % 5;
        }
        while (aFk1kSDK.getCurrencyIso4217Code < iArr.length) {
            cArr3[0] = (char) (iArr[aFk1kSDK.getCurrencyIso4217Code] >> 16);
            cArr3[1] = (char) iArr[aFk1kSDK.getCurrencyIso4217Code];
            cArr3[2] = (char) (iArr[aFk1kSDK.getCurrencyIso4217Code + 1] >> 16);
            cArr3[3] = (char) iArr[aFk1kSDK.getCurrencyIso4217Code + 1];
            aFk1kSDK.AFAdRevenueData = (cArr3[0] << 16) + cArr3[1];
            aFk1kSDK.getMonetizationNetwork = (cArr3[2] << 16) + cArr3[3];
            AFk1kSDK.getMediationNetwork(iArr4);
            for (int i14 = 0; i14 < 16; i14++) {
                int i15 = $10 + 47;
                $11 = i15 % 128;
                int i16 = i15 % 2;
                aFk1kSDK.AFAdRevenueData ^= iArr4[i14];
                aFk1kSDK.getMonetizationNetwork = AFk1kSDK.AFAdRevenueData(aFk1kSDK.AFAdRevenueData) ^ aFk1kSDK.getMonetizationNetwork;
                int i17 = aFk1kSDK.AFAdRevenueData;
                aFk1kSDK.AFAdRevenueData = aFk1kSDK.getMonetizationNetwork;
                aFk1kSDK.getMonetizationNetwork = i17;
            }
            int i18 = aFk1kSDK.AFAdRevenueData;
            aFk1kSDK.AFAdRevenueData = aFk1kSDK.getMonetizationNetwork;
            aFk1kSDK.getMonetizationNetwork = i18;
            aFk1kSDK.getMonetizationNetwork ^= iArr4[16];
            aFk1kSDK.AFAdRevenueData ^= iArr4[17];
            int i19 = aFk1kSDK.AFAdRevenueData;
            int i20 = aFk1kSDK.getMonetizationNetwork;
            cArr3[0] = (char) (aFk1kSDK.AFAdRevenueData >>> 16);
            cArr3[1] = (char) aFk1kSDK.AFAdRevenueData;
            cArr3[2] = (char) (aFk1kSDK.getMonetizationNetwork >>> 16);
            cArr3[3] = (char) aFk1kSDK.getMonetizationNetwork;
            AFk1kSDK.getMediationNetwork(iArr4);
            cArr2[aFk1kSDK.getCurrencyIso4217Code * 2] = cArr3[0];
            cArr2[(aFk1kSDK.getCurrencyIso4217Code * 2) + 1] = cArr3[1];
            cArr2[(aFk1kSDK.getCurrencyIso4217Code * 2) + 2] = cArr3[2];
            cArr2[(aFk1kSDK.getCurrencyIso4217Code * 2) + 3] = cArr3[3];
            aFk1kSDK.getCurrencyIso4217Code += 2;
        }
        objArr[0] = new String(cArr2, 0, i);
    }

    public final AFc1dSDK AFAdRevenueData() {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName;
        int i3 = i2 + 61;
        AFInAppEventType = i3 % 128;
        int i4 = i3 % 2;
        AFc1eSDK aFc1eSDK = this.copy;
        int i5 = i2 + 85;
        AFInAppEventType = i5 % 128;
        if (i5 % 2 == 0) {
            int i6 = 84 / 0;
        }
        return aFc1eSDK;
    }

    public final void getMediationNetwork(Context context) {
        int i = 2 % 2;
        int i2 = AFInAppEventType;
        int i3 = i2 + 121;
        AFInAppEventParameterName = i3 % 128;
        int i4 = i3 % 2;
        AFc1eSDK aFc1eSDK = this.copy;
        if (context != null) {
            int i5 = i2 + 113;
            AFInAppEventParameterName = i5 % 128;
            int i6 = i5 % 2;
            AFc1iSDK aFc1iSDK = aFc1eSDK.AFAdRevenueData;
            if (context != null) {
                int i7 = AFInAppEventParameterName + 117;
                AFInAppEventType = i7 % 128;
                int i8 = i7 % 2;
                aFc1iSDK.getMonetizationNetwork = context.getApplicationContext();
                int i9 = AFInAppEventParameterName + 19;
                AFInAppEventType = i9 % 128;
                if (i9 % 2 == 0) {
                    int i10 = 3 % 3;
                }
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void getCurrencyIso4217Code(AFf1nSDK aFf1nSDK) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 1;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        AFc1dSDK aFc1dSDKAFAdRevenueData = AFAdRevenueData();
        if (aFf1nSDK == AFf1nSDK.SUCCESS) {
            int i4 = AFInAppEventParameterName + 75;
            AFInAppEventType = i4 % 128;
            if (i4 % 2 != 0) {
                aFc1dSDKAFAdRevenueData.afRDLog().getCurrencyIso4217Code();
            } else {
                aFc1dSDKAFAdRevenueData.afRDLog().getCurrencyIso4217Code();
                Object obj = null;
                obj.hashCode();
                throw null;
            }
        }
        if (aFc1dSDKAFAdRevenueData.copy().getMonetizationNetwork()) {
            aFc1dSDKAFAdRevenueData.v().AFAdRevenueData();
            return;
        }
        int i5 = AFInAppEventType + 69;
        AFInAppEventParameterName = i5 % 128;
        int i6 = i5 % 2;
        aFc1dSDKAFAdRevenueData.v().getMediationNetwork();
    }

    final synchronized AFf1mSDK getMonetizationNetwork() {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 17;
        AFInAppEventParameterName = i2 % 128;
        if (i2 % 2 == 0) {
            if (this.equals == null) {
                this.equals = new AFf1mSDK() { // from class: com.appsflyer.internal.AFa1tSDK$$ExternalSyntheticLambda3
                    @Override // com.appsflyer.internal.AFf1mSDK
                    public final void onRemoteConfigUpdateFinished(AFf1nSDK aFf1nSDK) {
                        this.f$0.getCurrencyIso4217Code(aFf1nSDK);
                    }
                };
                int i3 = AFInAppEventType + 119;
                AFInAppEventParameterName = i3 % 128;
                if (i3 % 2 == 0) {
                    int i4 = 2 % 2;
                }
            }
        } else {
            Object obj = null;
            obj.hashCode();
            throw null;
        }
        return this.equals;
    }

    public AFa1tSDK() {
        AFAdRevenueData().v().AFAdRevenueData();
        AFAdRevenueData().v().getMonetizationNetwork();
        AFe1lSDK aFe1lSDKCopydefault = AFAdRevenueData().copydefault();
        aFe1lSDKCopydefault.AFAdRevenueData.add(new AFa1vSDK());
    }

    /* JADX WARN: Code duplicated, block: B:11:0x0024 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:12:0x0026  */
    /* JADX WARN: Code duplicated, block: B:14:0x0047  */
    /* JADX WARN: Code duplicated, block: B:8:0x0019  */
    @Override // com.appsflyer.AppsFlyerLib
    @Deprecated
    public final void performOnAppAttribution(Context context, URI uri) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 35;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 == 0) {
            int i3 = 52 / 0;
            if (uri != null) {
                if (!uri.toString().isEmpty()) {
                    if (context == null) {
                        AFAdRevenueData().d().AFAdRevenueData(new StringBuilder("Context is \"").append(context).append("\"").toString(), DeepLinkResult.Error.NETWORK);
                        return;
                    }
                    getMediationNetwork(context);
                    AFAdRevenueData().d().f_(AFa1jSDK.getCurrencyIso4217Code(AFAdRevenueData().afVerboseLog()), Uri.parse(uri.toString()));
                    int i4 = AFInAppEventType + 113;
                    AFInAppEventParameterName = i4 % 128;
                    int i5 = i4 % 2;
                    return;
                }
            }
        } else if (uri != null) {
            if (!uri.toString().isEmpty()) {
                if (context == null) {
                    AFAdRevenueData().d().AFAdRevenueData(new StringBuilder("Context is \"").append(context).append("\"").toString(), DeepLinkResult.Error.NETWORK);
                    return;
                }
                getMediationNetwork(context);
                AFAdRevenueData().d().f_(AFa1jSDK.getCurrencyIso4217Code(AFAdRevenueData().afVerboseLog()), Uri.parse(uri.toString()));
                int i6 = AFInAppEventType + 113;
                AFInAppEventParameterName = i6 % 128;
                int i7 = i6 % 2;
                return;
            }
        }
        AFAdRevenueData().d().AFAdRevenueData(new StringBuilder("Link is \"").append(uri).append("\"").toString(), DeepLinkResult.Error.NETWORK);
    }

    @Override // com.appsflyer.AppsFlyerLib
    @Deprecated
    public final void setSharingFilter(String... strArr) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 9;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        setSharingFilterForPartners(strArr);
        int i4 = AFInAppEventParameterName + 9;
        AFInAppEventType = i4 % 128;
        if (i4 % 2 == 0) {
            throw null;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    @Deprecated
    public final void setSharingFilterForAllPartners() {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 87;
        AFInAppEventParameterName = i2 % 128;
        if (i2 % 2 != 0) {
            setSharingFilterForPartners("all");
        } else {
            setSharingFilterForPartners("all");
        }
        int i3 = AFInAppEventParameterName + 27;
        AFInAppEventType = i3 % 128;
        if (i3 % 2 != 0) {
            return;
        }
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setSharingFilterForPartners(String... strArr) {
        int i = 2 % 2;
        AFAdRevenueData().afInfoLog().getRevenue = new AFb1uSDK(strArr);
        int i2 = AFInAppEventType + 77;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
    }

    /* JADX WARN: Code duplicated, block: B:9:0x003d A[PHI: r6
  0x003d: PHI (r6v3 com.appsflyer.PurchaseHandler) = (r6v2 com.appsflyer.PurchaseHandler), (r6v9 com.appsflyer.PurchaseHandler) binds: [B:8:0x003b, B:5:0x0025] A[DONT_GENERATE, DONT_INLINE]] */
    @Override // com.appsflyer.AppsFlyerLib
    public final void sendPurchaseData(Context context, Map<String, Object> map, PurchaseHandler.PurchaseValidationCallback purchaseValidationCallback) {
        PurchaseHandler purchaseHandlerComponent4;
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 43;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 == 0) {
            getMediationNetwork(context);
            purchaseHandlerComponent4 = AFAdRevenueData().component4();
            String[] strArr = new String[0];
            strArr[1] = "subscriptions";
            if (purchaseHandlerComponent4.AFAdRevenueData(map, purchaseValidationCallback, strArr)) {
                AFe1hSDK aFe1hSDK = new AFe1hSDK(map, purchaseValidationCallback, purchaseHandlerComponent4.getCurrencyIso4217Code);
                AFe1lSDK aFe1lSDK = purchaseHandlerComponent4.getRevenue;
                aFe1lSDK.getRevenue.execute(aFe1lSDK.new AnonymousClass5(aFe1hSDK));
            }
        } else {
            getMediationNetwork(context);
            purchaseHandlerComponent4 = AFAdRevenueData().component4();
            if (purchaseHandlerComponent4.AFAdRevenueData(map, purchaseValidationCallback, "subscriptions")) {
                AFe1hSDK aFe1hSDK2 = new AFe1hSDK(map, purchaseValidationCallback, purchaseHandlerComponent4.getCurrencyIso4217Code);
                AFe1lSDK aFe1lSDK2 = purchaseHandlerComponent4.getRevenue;
                aFe1lSDK2.getRevenue.execute(aFe1lSDK2.new AnonymousClass5(aFe1hSDK2));
            }
        }
        int i3 = AFInAppEventType + 21;
        AFInAppEventParameterName = i3 % 128;
        int i4 = i3 % 2;
    }

    /* JADX WARN: Code duplicated, block: B:9:0x003d A[PHI: r5
  0x003d: PHI (r5v3 com.appsflyer.PurchaseHandler) = (r5v2 com.appsflyer.PurchaseHandler), (r5v10 com.appsflyer.PurchaseHandler) binds: [B:8:0x003b, B:5:0x0024] A[DONT_GENERATE, DONT_INLINE]] */
    @Override // com.appsflyer.AppsFlyerLib
    public final void sendInAppPurchaseData(Context context, Map<String, Object> map, PurchaseHandler.PurchaseValidationCallback purchaseValidationCallback) {
        PurchaseHandler purchaseHandlerComponent4;
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 101;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 == 0) {
            getMediationNetwork(context);
            purchaseHandlerComponent4 = AFAdRevenueData().component4();
            String[] strArr = new String[0];
            strArr[0] = "purchases";
            if (purchaseHandlerComponent4.AFAdRevenueData(map, purchaseValidationCallback, strArr)) {
                AFe1cSDK aFe1cSDK = new AFe1cSDK(map, purchaseValidationCallback, purchaseHandlerComponent4.getCurrencyIso4217Code);
                AFe1lSDK aFe1lSDK = purchaseHandlerComponent4.getRevenue;
                aFe1lSDK.getRevenue.execute(aFe1lSDK.new AnonymousClass5(aFe1cSDK));
            }
        } else {
            getMediationNetwork(context);
            purchaseHandlerComponent4 = AFAdRevenueData().component4();
            if (purchaseHandlerComponent4.AFAdRevenueData(map, purchaseValidationCallback, "purchases")) {
                AFe1cSDK aFe1cSDK2 = new AFe1cSDK(map, purchaseValidationCallback, purchaseHandlerComponent4.getCurrencyIso4217Code);
                AFe1lSDK aFe1lSDK2 = purchaseHandlerComponent4.getRevenue;
                aFe1lSDK2.getRevenue.execute(aFe1lSDK2.new AnonymousClass5(aFe1cSDK2));
            }
        }
        int i3 = AFInAppEventParameterName + 27;
        AFInAppEventType = i3 % 128;
        if (i3 % 2 != 0) {
            return;
        }
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    private static /* synthetic */ Object component4(Object[] objArr) {
        AFa1tSDK aFa1tSDK = (AFa1tSDK) objArr[0];
        String str = (String) objArr[1];
        Map<String, String> map = (Map) objArr[2];
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 123;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        AFa1oSDK aFa1oSDKD = aFa1tSDK.AFAdRevenueData().d();
        aFa1oSDKD.getCurrencyIso4217Code = str;
        aFa1oSDKD.getRevenue = map;
        int i4 = AFInAppEventParameterName + 103;
        AFInAppEventType = i4 % 128;
        if (i4 % 2 != 0) {
            return null;
        }
        throw null;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void subscribeForDeepLink(DeepLinkListener deepLinkListener) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 47;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        subscribeForDeepLink(deepLinkListener, TimeUnit.SECONDS.toMillis(3L));
        int i4 = AFInAppEventType + 3;
        AFInAppEventParameterName = i4 % 128;
        int i5 = i4 % 2;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void subscribeForDeepLink(DeepLinkListener deepLinkListener, long j) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 7;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        AFAdRevenueData().d().getMonetizationNetwork = deepLinkListener;
        AFAdRevenueData().d().component3 = j;
        int i4 = AFInAppEventType + 7;
        AFInAppEventParameterName = i4 % 128;
        int i5 = i4 % 2;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void performOnDeepLinking(final Intent intent, Context context) {
        int i = 2 % 2;
        int i2 = AFInAppEventType;
        int i3 = i2 + 55;
        AFInAppEventParameterName = i3 % 128;
        Object obj = null;
        if (i3 % 2 != 0) {
            obj.hashCode();
            throw null;
        }
        if (intent == null) {
            AFAdRevenueData().d().AFAdRevenueData("performOnDeepLinking was called with null intent", DeepLinkResult.Error.DEVELOPER_ERROR);
            return;
        }
        if (context == null) {
            int i4 = i2 + 29;
            AFInAppEventParameterName = i4 % 128;
            int i5 = i4 % 2;
            AFAdRevenueData().d().AFAdRevenueData("performOnDeepLinking was called with null context", DeepLinkResult.Error.DEVELOPER_ERROR);
            return;
        }
        final Context applicationContext = context.getApplicationContext();
        getMediationNetwork(applicationContext);
        AFAdRevenueData().getMonetizationNetwork().execute(new Runnable() { // from class: com.appsflyer.internal.AFa1tSDK$$ExternalSyntheticLambda5
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.d_(applicationContext, intent);
            }
        });
        int i6 = AFInAppEventType + 59;
        AFInAppEventParameterName = i6 % 128;
        if (i6 % 2 != 0) {
            throw null;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void addPushNotificationDeepLinkPath(String... strArr) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 41;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        List<String> listAsList = Arrays.asList(strArr);
        List<List<String>> list = AFAdRevenueData().d().getMediationNetwork;
        if (!list.contains(listAsList)) {
            list.add(listAsList);
        }
        int i4 = AFInAppEventParameterName + 33;
        AFInAppEventType = i4 % 128;
        int i5 = i4 % 2;
    }

    /* JADX WARN: Code duplicated, block: B:9:0x003c  */
    private static /* synthetic */ Object areAllFieldsValid(Object[] objArr) {
        boolean z = false;
        AFa1tSDK aFa1tSDK = (AFa1tSDK) objArr[0];
        boolean zBooleanValue = ((Boolean) objArr[1]).booleanValue();
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 29;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 == 0) {
            AFLogger.afDebugLog("setDisableAdvertisingIdentifiers: ".concat(String.valueOf(zBooleanValue)));
            int i3 = 66 / 0;
            if (!zBooleanValue) {
                z = true;
            }
        } else {
            AFLogger.afDebugLog("setDisableAdvertisingIdentifiers: ".concat(String.valueOf(zBooleanValue)));
            if (!zBooleanValue) {
                z = true;
            }
        }
        AFb1jSDK.getRevenue = Boolean.valueOf(z);
        AFc1dSDK aFc1dSDKAFAdRevenueData = aFa1tSDK.AFAdRevenueData();
        aFc1dSDKAFAdRevenueData.afInfoLog().areAllFieldsValid = zBooleanValue;
        if (!zBooleanValue) {
            AFe1lSDK aFe1lSDKCopydefault = aFc1dSDKAFAdRevenueData.copydefault();
            aFe1lSDKCopydefault.getRevenue.execute(aFe1lSDKCopydefault.new AnonymousClass5(new AFe1eSDK(aFa1tSDK.AFAdRevenueData())));
            int i4 = AFInAppEventParameterName + 57;
            AFInAppEventType = i4 % 128;
            if (i4 % 2 != 0) {
                return null;
            }
            throw null;
        }
        aFc1dSDKAFAdRevenueData.afInfoLog().component3 = null;
        return null;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setDisableNetworkData(boolean z) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 61;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        AFLogger.afDebugLog("setDisableNetworkData: ".concat(String.valueOf(z)));
        getCurrencyIso4217Code(AppsFlyerProperties.DISABLE_NETWORK_DATA, z);
        int i4 = AFInAppEventType + 19;
        AFInAppEventParameterName = i4 % 128;
        int i5 = i4 % 2;
    }

    public final void b_(Context context, Intent intent) {
        int i = 2 % 2;
        AFj1jSDK aFj1jSDK = new AFj1jSDK(intent);
        if (aFj1jSDK.getRevenue("appsflyer_preinstall") != null) {
            getMonetizationNetwork(new Object[]{aFj1jSDK.getRevenue("appsflyer_preinstall")}, 998031041, -998031039, (int) System.currentTimeMillis());
        }
        AFLogger.afInfoLog("****** onReceive called *******");
        AppsFlyerProperties.getInstance();
        String revenue = aFj1jSDK.getRevenue(Constants.REFERRER);
        AFLogger.afInfoLog("Play store referrer: ".concat(String.valueOf(revenue)));
        Object obj = null;
        if (revenue != null) {
            int i2 = AFInAppEventParameterName + 41;
            AFInAppEventType = i2 % 128;
            if (i2 % 2 != 0) {
                getRevenue(context).getMediationNetwork(Constants.REFERRER, revenue);
                AppsFlyerProperties appsFlyerProperties = AppsFlyerProperties.getInstance();
                appsFlyerProperties.set("AF_REFERRER", revenue);
                appsFlyerProperties.getMediationNetwork = revenue;
                if (AppsFlyerProperties.getInstance().AFAdRevenueData()) {
                    AFLogger.afInfoLog("onReceive: isLaunchCalled");
                    getCurrencyIso4217Code(context, AFh1xSDK.onReceive);
                    getMediationNetwork(revenue);
                }
            } else {
                getRevenue(context).getMediationNetwork(Constants.REFERRER, revenue);
                AppsFlyerProperties appsFlyerProperties2 = AppsFlyerProperties.getInstance();
                appsFlyerProperties2.set("AF_REFERRER", revenue);
                appsFlyerProperties2.getMediationNetwork = revenue;
                AppsFlyerProperties.getInstance().AFAdRevenueData();
                throw null;
            }
        }
        int i3 = AFInAppEventType + 63;
        AFInAppEventParameterName = i3 % 128;
        if (i3 % 2 == 0) {
            return;
        }
        obj.hashCode();
        throw null;
    }

    private static void getMediationNetwork(JSONObject jSONObject) {
        String str;
        int i = 2 % 2;
        ArrayList arrayList = new ArrayList();
        Iterator<String> itKeys = jSONObject.keys();
        while (true) {
            if (!itKeys.hasNext()) {
                break;
            }
            try {
                JSONArray jSONArray = new JSONArray((String) jSONObject.get(itKeys.next()));
                for (int i2 = 0; i2 < jSONArray.length(); i2++) {
                    arrayList.add(Long.valueOf(jSONArray.getLong(i2)));
                }
            } catch (JSONException e) {
                AFLogger.afErrorLogForExcManagerOnly("error at timeStampArr", e);
            }
        }
        Collections.sort(arrayList);
        Iterator<String> itKeys2 = jSONObject.keys();
        loop2: while (true) {
            str = null;
            while (true) {
                if (!itKeys2.hasNext()) {
                    break loop2;
                }
                int i3 = AFInAppEventType + 45;
                AFInAppEventParameterName = i3 % 128;
                int i4 = i3 % 2;
                if (str != null) {
                    break loop2;
                }
                String next = itKeys2.next();
                try {
                    JSONArray jSONArray2 = new JSONArray((String) jSONObject.get(next));
                    int i5 = 0;
                    while (i5 < jSONArray2.length()) {
                        if (jSONArray2.getLong(i5) == ((Long) arrayList.get(0)).longValue() || jSONArray2.getLong(i5) == ((Long) arrayList.get(1)).longValue()) {
                            break;
                        }
                        int i6 = AFInAppEventType + 53;
                        AFInAppEventParameterName = i6 % 128;
                        int i7 = i6 % 2;
                        if (jSONArray2.getLong(i5) == ((Long) arrayList.get(arrayList.size() - 1)).longValue()) {
                            break;
                        }
                        i5++;
                        int i8 = AFInAppEventParameterName + 15;
                        AFInAppEventType = i8 % 128;
                        int i9 = i8 % 2;
                        str = next;
                    }
                } catch (JSONException e2) {
                    AFLogger.afErrorLogForExcManagerOnly("error at manageExtraReferrers", e2);
                }
            }
        }
        if (str != null) {
            int i10 = AFInAppEventType + 115;
            AFInAppEventParameterName = i10 % 128;
            if (i10 % 2 == 0) {
                jSONObject.remove(str);
            } else {
                jSONObject.remove(str);
                int i11 = 31 / 0;
            }
        }
    }

    public final void getMediationNetwork(Context context, String str) {
        JSONArray jSONArray;
        JSONArray jSONArray2;
        JSONObject jSONObject;
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 43;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        AFLogger.afDebugLog("received a new (extra) referrer: ".concat(String.valueOf(str)));
        try {
            long jCurrentTimeMillis = System.currentTimeMillis();
            String strAFAdRevenueData = getRevenue(context).AFAdRevenueData("extraReferrers", (String) null);
            if (strAFAdRevenueData == null) {
                jSONObject = new JSONObject();
                jSONArray2 = new JSONArray();
            } else {
                JSONObject jSONObject2 = new JSONObject(strAFAdRevenueData);
                if (jSONObject2.has(str)) {
                    jSONArray = new JSONArray((String) jSONObject2.get(str));
                } else {
                    jSONArray = new JSONArray();
                }
                jSONArray2 = jSONArray;
                jSONObject = jSONObject2;
            }
            if (jSONArray2.length() < 5) {
                int i4 = AFInAppEventType + 25;
                AFInAppEventParameterName = i4 % 128;
                if (i4 % 2 != 0) {
                    jSONArray2.put(jCurrentTimeMillis);
                    int i5 = 87 / 0;
                } else {
                    jSONArray2.put(jCurrentTimeMillis);
                }
            }
            if (jSONObject.length() >= 4) {
                getMediationNetwork(jSONObject);
            }
            jSONObject.put(str, jSONArray2.toString());
            getRevenue(context).getMediationNetwork("extraReferrers", jSONObject.toString());
            int i6 = AFInAppEventParameterName + 121;
            AFInAppEventType = i6 % 128;
            int i7 = i6 % 2;
        } catch (JSONException e) {
            AFLogger.afErrorLogForExcManagerOnly("error at addReferrer", e);
        } catch (Throwable th) {
            AFLogger.afErrorLog(new StringBuilder("Couldn't save referrer - ").append(str).append(": ").toString(), th);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void getRevenue(AFc1dSDK aFc1dSDK) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 95;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        aFc1dSDK.AFInAppEventParameterName().getMediationNetwork();
        if (i3 != 0) {
            return;
        }
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void stop(boolean z, Context context) {
        AFc1qSDK aFc1qSDKComponent2;
        boolean z2;
        int i = 2 % 2;
        getMediationNetwork(context);
        final AFc1dSDK aFc1dSDKAFAdRevenueData = AFAdRevenueData();
        aFc1dSDKAFAdRevenueData.registerClient().getMediationNetwork(z);
        aFc1dSDKAFAdRevenueData.getMonetizationNetwork().submit(new Runnable() { // from class: com.appsflyer.internal.AFa1tSDK$$ExternalSyntheticLambda6
            @Override // java.lang.Runnable
            public final void run() {
                AFa1tSDK.getRevenue(aFc1dSDKAFAdRevenueData);
            }
        });
        if (z) {
            int i2 = AFInAppEventParameterName + 15;
            AFInAppEventType = i2 % 128;
            if (i2 % 2 == 0) {
                aFc1qSDKComponent2 = aFc1dSDKAFAdRevenueData.component2();
                z2 = false;
            } else {
                aFc1qSDKComponent2 = aFc1dSDKAFAdRevenueData.component2();
                z2 = true;
            }
            aFc1qSDKComponent2.getCurrencyIso4217Code("is_stop_tracking_used", z2);
        }
        int i3 = AFInAppEventType + 51;
        AFInAppEventParameterName = i3 % 128;
        int i4 = i3 % 2;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final String getSdkVersion() {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 97;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 == 0) {
            AFAdRevenueData().copy().getMediationNetwork("getSdkVersion", new String[1]);
        } else {
            AFAdRevenueData().copy().getMediationNetwork("getSdkVersion", new String[0]);
        }
        String strComponent1 = AFc1pSDK.component1();
        int i3 = AFInAppEventType + 87;
        AFInAppEventParameterName = i3 % 128;
        int i4 = i3 % 2;
        return strComponent1;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void enableTCFDataCollection(boolean z) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 43;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 == 0) {
            getMonetizationNetwork(new Object[]{AppsFlyerProperties.ENABLE_TCF_DATA_COLLECTION, Boolean.toString(z)}, -692563571, 692563575, (int) System.currentTimeMillis());
            int i3 = 36 / 0;
        } else {
            getMonetizationNetwork(new Object[]{AppsFlyerProperties.ENABLE_TCF_DATA_COLLECTION, Boolean.toString(z)}, -692563571, 692563575, (int) System.currentTimeMillis());
        }
    }

    private static /* synthetic */ Object copydefault(Object[] objArr) {
        AFa1tSDK aFa1tSDK = (AFa1tSDK) objArr[0];
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 1;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 != 0) {
            aFa1tSDK.AFAdRevenueData().afDebugLog().AFAdRevenueData();
            int i3 = AFInAppEventType + 17;
            AFInAppEventParameterName = i3 % 128;
            int i4 = i3 % 2;
            return null;
        }
        aFa1tSDK.AFAdRevenueData().afDebugLog().AFAdRevenueData();
        throw null;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void updateServerUninstallToken(Context context, String str) {
        getMediationNetwork(context);
        AFg1ySDK aFg1ySDK = new AFg1ySDK(context);
        if (str == null || str.trim().isEmpty()) {
            AFLogger.INSTANCE.w(AFg1cSDK.UNINSTALL, "Firebase Token is either empty or null and was not registered.");
            return;
        }
        AFLogger.INSTANCE.i(AFg1cSDK.UNINSTALL, "Firebase Refreshed Token = ".concat(String.valueOf(str)));
        AFf1aSDK revenue = aFg1ySDK.getRevenue();
        if (revenue == null || !str.equals(revenue.getRevenue)) {
            long jCurrentTimeMillis = System.currentTimeMillis();
            boolean z = revenue == null || jCurrentTimeMillis - revenue.AFAdRevenueData > TimeUnit.SECONDS.toMillis(2L);
            AFf1aSDK aFf1aSDK = new AFf1aSDK(str, jCurrentTimeMillis, !z);
            aFg1ySDK.AFAdRevenueData.getMediationNetwork("afUninstallToken", aFf1aSDK.getRevenue);
            aFg1ySDK.AFAdRevenueData.getMonetizationNetwork("afUninstallToken_received_time", aFf1aSDK.AFAdRevenueData);
            aFg1ySDK.AFAdRevenueData.getCurrencyIso4217Code("afUninstallToken_queued", aFf1aSDK.getMediationNetwork);
            if (z) {
                AFc1dSDK aFc1dSDKAFAdRevenueData = ((AFa1tSDK) getMonetizationNetwork(new Object[0], -631580017, 631580017, (int) System.currentTimeMillis())).AFAdRevenueData();
                AFf1tSDK aFf1tSDK = new AFf1tSDK(str, aFc1dSDKAFAdRevenueData);
                AFe1lSDK aFe1lSDKCopydefault = aFc1dSDKAFAdRevenueData.copydefault();
                aFe1lSDKCopydefault.getRevenue.execute(aFe1lSDKCopydefault.new AnonymousClass5(aFf1tSDK));
            }
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setDebugLog(boolean z) {
        AFLogger.LogLevel logLevel;
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 115;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        if (z) {
            logLevel = AFLogger.LogLevel.DEBUG;
            int i4 = AFInAppEventType + 101;
            AFInAppEventParameterName = i4 % 128;
            int i5 = i4 % 2;
        } else {
            logLevel = AFLogger.LogLevel.NONE;
        }
        setLogLevel(logLevel);
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setImeiData(String str) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 37;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        AFAdRevenueData().copy().getMediationNetwork("setImeiData", str);
        AFAdRevenueData().registerClient().getMediationNetwork(str);
        int i4 = AFInAppEventParameterName + 125;
        AFInAppEventType = i4 % 128;
        int i5 = i4 % 2;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setOaidData(String str) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 85;
        AFInAppEventParameterName = i2 % 128;
        if (i2 % 2 != 0) {
            AFd1pSDK aFd1pSDKCopy = AFAdRevenueData().copy();
            String[] strArr = new String[1];
            strArr[1] = str;
            aFd1pSDKCopy.getMediationNetwork("setOaidData", strArr);
        } else {
            AFAdRevenueData().copy().getMediationNetwork("setOaidData", str);
        }
        AFb1jSDK.getMonetizationNetwork = str;
        int i3 = AFInAppEventType + 103;
        AFInAppEventParameterName = i3 % 128;
        int i4 = i3 % 2;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setAndroidIdData(String str) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 13;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        AFAdRevenueData().copy().getMediationNetwork("setAndroidIdData", str);
        AFAdRevenueData().afInfoLog().AFAdRevenueData = str;
        int i4 = AFInAppEventType + 41;
        AFInAppEventParameterName = i4 % 128;
        if (i4 % 2 != 0) {
            int i5 = 38 / 0;
        }
    }

    private static /* synthetic */ Object getCurrencyIso4217Code(Object[] objArr) {
        String str = (String) objArr[0];
        String str2 = (String) objArr[1];
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 1;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 == 0) {
            AppsFlyerProperties.getInstance().set(str, str2);
            int i3 = 44 / 0;
        } else {
            AppsFlyerProperties.getInstance().set(str, str2);
        }
        int i4 = AFInAppEventParameterName + 81;
        AFInAppEventType = i4 % 128;
        int i5 = i4 % 2;
        return null;
    }

    private static void getCurrencyIso4217Code(String str, boolean z) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 19;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 != 0) {
            AppsFlyerProperties.getInstance().set(str, z);
            return;
        }
        AppsFlyerProperties.getInstance().set(str, z);
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    private static String getMonetizationNetwork(String str) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 111;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        String string = AppsFlyerProperties.getInstance().getString(str);
        int i4 = AFInAppEventType + 1;
        AFInAppEventParameterName = i4 % 128;
        if (i4 % 2 == 0) {
            return string;
        }
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    private static boolean getCurrencyIso4217Code(String str) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 35;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        boolean z = AppsFlyerProperties.getInstance().getBoolean(str, false);
        int i4 = AFInAppEventParameterName + 5;
        AFInAppEventType = i4 % 128;
        int i5 = i4 % 2;
        return z;
    }

    public final boolean getMediationNetwork() {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 47;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        if (!getCurrencyIso4217Code(AppsFlyerProperties.AF_WAITFOR_CUSTOMERID)) {
            return false;
        }
        int i4 = AFInAppEventType + 69;
        AFInAppEventParameterName = i4 % 128;
        if (i4 % 2 == 0) {
            return getRevenue() == null;
        }
        getRevenue();
        throw null;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void waitForCustomerUserId(boolean z) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 1;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        AFLogger.afInfoLog("initAfterCustomerUserID: ".concat(String.valueOf(z)), true);
        getCurrencyIso4217Code(AppsFlyerProperties.AF_WAITFOR_CUSTOMERID, z);
        int i4 = AFInAppEventType + 39;
        AFInAppEventParameterName = i4 % 128;
        int i5 = i4 % 2;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setCustomerIdAndLogSession(String str, Context context) {
        int i = 2 % 2;
        if (context != null) {
            if (getMediationNetwork()) {
                setCustomerUserId(str);
                AFLogger.afInfoLog(new StringBuilder("CustomerUserId set: ").append(str).append(" - Initializing AppsFlyer Tacking").toString(), true);
                String referrer = AppsFlyerProperties.getInstance().getReferrer(AFAdRevenueData().component2());
                getCurrencyIso4217Code(context, AFh1xSDK.setCustomerIdAndLogSession);
                AFAdRevenueData().registerClient().getMediationNetwork();
                if (referrer == null) {
                    int i2 = AFInAppEventParameterName + 35;
                    AFInAppEventType = i2 % 128;
                    int i3 = i2 % 2;
                    referrer = "";
                }
                if (context instanceof Activity) {
                    ((Activity) context).getIntent();
                    int i4 = AFInAppEventParameterName + 107;
                    AFInAppEventType = i4 % 128;
                    int i5 = i4 % 2;
                }
                getMonetizationNetwork(new Object[]{this, context, referrer}, 1659672083, -1659672066, System.identityHashCode(this));
                return;
            }
            setCustomerUserId(str);
            AFLogger.afInfoLog("waitForCustomerUserId is false; setting CustomerUserID: ".concat(String.valueOf(str)), true);
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final String getOutOfStore(Context context) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 115;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        String string = AppsFlyerProperties.getInstance().getString(AppsFlyerProperties.AF_STORE_FROM_API);
        if (string == null) {
            String revenue = getRevenue(context, "AF_STORE");
            if (revenue == null) {
                AFLogger.afInfoLog("No out-of-store value set");
                return null;
            }
            int i4 = AFInAppEventParameterName + 99;
            AFInAppEventType = i4 % 128;
            if (i4 % 2 == 0) {
                int i5 = 63 / 0;
            }
            return revenue;
        }
        int i6 = AFInAppEventParameterName + 107;
        AFInAppEventType = i6 % 128;
        int i7 = i6 % 2;
        return string;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setOutOfStore(String str) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 81;
        int i3 = i2 % 128;
        AFInAppEventType = i3;
        if (i2 % 2 == 0) {
            Object obj = null;
            obj.hashCode();
            throw null;
        }
        if (str == null) {
            AFLogger.afWarnLog("Cannot set setOutOfStore with null", true);
            return;
        }
        int i4 = i3 + 25;
        AFInAppEventParameterName = i4 % 128;
        if (i4 % 2 != 0) {
            String lowerCase = str.toLowerCase(Locale.getDefault());
            AppsFlyerProperties.getInstance().set(AppsFlyerProperties.AF_STORE_FROM_API, lowerCase);
            AFLogger.afInfoLog("Store API set with value: ".concat(String.valueOf(lowerCase)), false);
        } else {
            String lowerCase2 = str.toLowerCase(Locale.getDefault());
            AppsFlyerProperties.getInstance().set(AppsFlyerProperties.AF_STORE_FROM_API, lowerCase2);
            AFLogger.afInfoLog("Store API set with value: ".concat(String.valueOf(lowerCase2)), true);
        }
    }

    /* JADX WARN: Code duplicated, block: B:9:0x004f  */
    @Override // com.appsflyer.AppsFlyerLib
    public final void setAppInviteOneLink(String str) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 15;
        AFInAppEventParameterName = i2 % 128;
        if (i2 % 2 != 0) {
            AFd1pSDK aFd1pSDKCopy = AFAdRevenueData().copy();
            String[] strArr = new String[1];
            strArr[1] = str;
            aFd1pSDKCopy.getMediationNetwork("setAppInviteOneLink", strArr);
            AFLogger.afInfoLog("setAppInviteOneLink = ".concat(String.valueOf(str)));
            if (str != null) {
                if (!str.equals(AppsFlyerProperties.getInstance().getString(AppsFlyerProperties.ONELINK_ID))) {
                }
            }
            getMonetizationNetwork(new Object[]{AppsFlyerProperties.ONELINK_ID, str}, -692563571, 692563575, (int) System.currentTimeMillis());
        }
        AFAdRevenueData().copy().getMediationNetwork("setAppInviteOneLink", str);
        AFLogger.afInfoLog("setAppInviteOneLink = ".concat(String.valueOf(str)));
        if (str != null) {
            if (!str.equals(AppsFlyerProperties.getInstance().getString(AppsFlyerProperties.ONELINK_ID))) {
            }
        }
        getMonetizationNetwork(new Object[]{AppsFlyerProperties.ONELINK_ID, str}, -692563571, 692563575, (int) System.currentTimeMillis());
        AppsFlyerProperties.getInstance().remove(AppsFlyerProperties.ONELINK_DOMAIN);
        AppsFlyerProperties.getInstance().remove(AppsFlyerProperties.ONELINK_VERSION);
        AppsFlyerProperties.getInstance().remove(AppsFlyerProperties.ONELINK_SCHEME);
        int i3 = AFInAppEventType + 29;
        AFInAppEventParameterName = i3 % 128;
        int i4 = i3 % 2;
        getMonetizationNetwork(new Object[]{AppsFlyerProperties.ONELINK_ID, str}, -692563571, 692563575, (int) System.currentTimeMillis());
    }

    private static /* synthetic */ Object getMonetizationNetwork(Object[] objArr) {
        AFa1tSDK aFa1tSDK = (AFa1tSDK) objArr[0];
        Map map = (Map) objArr[1];
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 103;
        AFInAppEventType = i2 % 128;
        Object obj = null;
        if (i2 % 2 == 0) {
            obj.hashCode();
            throw null;
        }
        if (map != null) {
            aFa1tSDK.AFAdRevenueData().copy().getMediationNetwork("setAdditionalData", map.toString());
            AppsFlyerProperties.getInstance().setCustomData(new JSONObject(map).toString());
            int i3 = AFInAppEventType + 45;
            AFInAppEventParameterName = i3 % 128;
            if (i3 % 2 != 0) {
                int i4 = 4 % 4;
            }
        }
        return null;
    }

    /* JADX WARN: Code duplicated, block: B:49:0x0199  */
    /* JADX WARN: Code duplicated, block: B:7:0x004b A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:8:0x004d  */
    /* JADX WARN: Code duplicated, block: B:9:0x006e  */
    @Override // com.appsflyer.AppsFlyerLib
    public final void sendPushNotificationData(Activity activity) {
        int i;
        long j;
        long jLongValue;
        int i2 = 2;
        int i3 = 2 % 2;
        if (activity != null) {
            int i4 = AFInAppEventParameterName + 119;
            AFInAppEventType = i4 % 128;
            int i5 = i4 % 2;
            if (activity.getIntent() != null) {
                AFAdRevenueData().copy().getMediationNetwork("sendPushNotificationData", activity.getLocalClassName(), new StringBuilder("activity_intent_").append(activity.getIntent().toString()).toString());
            } else if (activity != null) {
                int i6 = AFInAppEventParameterName + 65;
                AFInAppEventType = i6 % 128;
                int i7 = i6 % 2;
                AFAdRevenueData().copy().getMediationNetwork("sendPushNotificationData", activity.getLocalClassName(), "activity_intent_null");
            } else {
                AFAdRevenueData().copy().getMediationNetwork("sendPushNotificationData", "activity_null");
            }
        } else if (activity != null) {
            int i8 = AFInAppEventParameterName + 65;
            AFInAppEventType = i8 % 128;
            int i9 = i8 % 2;
            AFAdRevenueData().copy().getMediationNetwork("sendPushNotificationData", activity.getLocalClassName(), "activity_intent_null");
        } else {
            AFAdRevenueData().copy().getMediationNetwork("sendPushNotificationData", "activity_null");
        }
        AFc1kSDK aFc1kSDKAfInfoLog = AFAdRevenueData().afInfoLog();
        aFc1kSDKAfInfoLog.getCurrencyIso4217Code = getMediationNetwork(activity);
        if (aFc1kSDKAfInfoLog.getCurrencyIso4217Code != null) {
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (this.copydefault == null) {
                AFLogger.afInfoLog("pushes: initializing pushes history..");
                this.copydefault = new ConcurrentHashMap();
                i = 2;
                jLongValue = jCurrentTimeMillis;
                j = jLongValue;
            } else {
                try {
                    long j2 = AppsFlyerProperties.getInstance().getLong("pushPayloadMaxAging", 1800000L);
                    jLongValue = jCurrentTimeMillis;
                    for (Long l : this.copydefault.keySet()) {
                        try {
                            JSONObject jSONObject = new JSONObject(aFc1kSDKAfInfoLog.getCurrencyIso4217Code);
                            i = i2;
                            try {
                                JSONObject jSONObject2 = new JSONObject(this.copydefault.get(l));
                                j = jCurrentTimeMillis;
                                try {
                                    if (jSONObject.opt("pid").equals(jSONObject2.opt("pid")) && jSONObject.opt("c").equals(jSONObject2.opt("c"))) {
                                        AFLogger.afInfoLog(new StringBuilder("PushNotificationMeasurement: A previous payload with same PID and campaign was already acknowledged! (old: ").append(jSONObject2).append(", new: ").append(jSONObject).append(")").toString());
                                        aFc1kSDKAfInfoLog.getCurrencyIso4217Code = null;
                                        return;
                                    }
                                    if (j - l.longValue() > j2) {
                                        this.copydefault.remove(l);
                                    }
                                    if (l.longValue() <= jLongValue) {
                                        jLongValue = l.longValue();
                                    }
                                    int i10 = AFInAppEventParameterName + 83;
                                    AFInAppEventType = i10 % 128;
                                    int i11 = i10 % 2;
                                    i2 = i;
                                    jCurrentTimeMillis = j;
                                } catch (Throwable th) {
                                    th = th;
                                    AFLogger.afErrorLog(new StringBuilder("Error while handling push notification measurement: ").append(th.getClass().getSimpleName()).toString(), th);
                                    if (this.copydefault.size() == AppsFlyerProperties.getInstance().getInt("pushPayloadHistorySize", i)) {
                                        AFLogger.afInfoLog(new StringBuilder("pushes: removing oldest overflowing push (oldest push:").append(jLongValue).append(")").toString());
                                        this.copydefault.remove(Long.valueOf(jLongValue));
                                    }
                                    this.copydefault.put(Long.valueOf(j), aFc1kSDKAfInfoLog.getCurrencyIso4217Code);
                                    start(activity);
                                    int i12 = AFInAppEventType + 11;
                                    AFInAppEventParameterName = i12 % 128;
                                    int i13 = i12 % 2;
                                }
                            } catch (Throwable th2) {
                                th = th2;
                                j = jCurrentTimeMillis;
                                AFLogger.afErrorLog(new StringBuilder("Error while handling push notification measurement: ").append(th.getClass().getSimpleName()).toString(), th);
                                if (this.copydefault.size() == AppsFlyerProperties.getInstance().getInt("pushPayloadHistorySize", i)) {
                                    AFLogger.afInfoLog(new StringBuilder("pushes: removing oldest overflowing push (oldest push:").append(jLongValue).append(")").toString());
                                    this.copydefault.remove(Long.valueOf(jLongValue));
                                }
                                this.copydefault.put(Long.valueOf(j), aFc1kSDKAfInfoLog.getCurrencyIso4217Code);
                                start(activity);
                                int i14 = AFInAppEventType + 11;
                                AFInAppEventParameterName = i14 % 128;
                                int i15 = i14 % 2;
                            }
                        } catch (Throwable th3) {
                            th = th3;
                            i = i2;
                        }
                    }
                    i = i2;
                    j = jCurrentTimeMillis;
                } catch (Throwable th4) {
                    th = th4;
                    i = 2;
                    j = jCurrentTimeMillis;
                    jLongValue = j;
                }
            }
            if (this.copydefault.size() == AppsFlyerProperties.getInstance().getInt("pushPayloadHistorySize", i)) {
                AFLogger.afInfoLog(new StringBuilder("pushes: removing oldest overflowing push (oldest push:").append(jLongValue).append(")").toString());
                this.copydefault.remove(Long.valueOf(jLongValue));
            }
            this.copydefault.put(Long.valueOf(j), aFc1kSDKAfInfoLog.getCurrencyIso4217Code);
            start(activity);
            int i16 = AFInAppEventType + 11;
            AFInAppEventParameterName = i16 % 128;
            int i17 = i16 % 2;
        }
    }

    private static /* synthetic */ Object AFLogger(Object[] objArr) {
        AFa1tSDK aFa1tSDK = (AFa1tSDK) objArr[0];
        String[] strArr = (String[]) objArr[1];
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 69;
        AFInAppEventType = i2 % 128;
        Object obj = null;
        if (i2 % 2 != 0) {
            aFa1tSDK.AFAdRevenueData().copy().getMediationNetwork("setUserEmails", strArr);
            aFa1tSDK.setUserEmails(AppsFlyerProperties.EmailsCryptType.NONE, strArr);
            return null;
        }
        aFa1tSDK.AFAdRevenueData().copy().getMediationNetwork("setUserEmails", strArr);
        aFa1tSDK.setUserEmails(AppsFlyerProperties.EmailsCryptType.NONE, strArr);
        obj.hashCode();
        throw null;
    }

    /* JADX INFO: renamed from: com.appsflyer.internal.AFa1tSDK$3, reason: invalid class name */
    static /* synthetic */ class AnonymousClass3 {
        static final /* synthetic */ int[] getRevenue;

        static {
            int[] iArr = new int[AppsFlyerProperties.EmailsCryptType.values().length];
            getRevenue = iArr;
            try {
                iArr[AppsFlyerProperties.EmailsCryptType.SHA256.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                getRevenue[AppsFlyerProperties.EmailsCryptType.NONE.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
        }
    }

    private static /* synthetic */ Object component2(Object[] objArr) {
        AFa1tSDK aFa1tSDK = (AFa1tSDK) objArr[0];
        AppsFlyerProperties.EmailsCryptType emailsCryptType = (AppsFlyerProperties.EmailsCryptType) objArr[1];
        String[] strArr = (String[]) objArr[2];
        int i = 2 % 2;
        ArrayList arrayList = new ArrayList(strArr.length + 1);
        arrayList.add(emailsCryptType.toString());
        arrayList.addAll(Arrays.asList(strArr));
        aFa1tSDK.AFAdRevenueData().copy().getMediationNetwork("setUserEmails", (String[]) arrayList.toArray(new String[strArr.length + 1]));
        AppsFlyerProperties.getInstance().set(AppsFlyerProperties.EMAIL_CRYPT_TYPE, emailsCryptType.getValue());
        HashMap map = new HashMap();
        ArrayList arrayList2 = new ArrayList();
        Object obj = null;
        String str = null;
        for (String str2 : strArr) {
            int i2 = AFInAppEventParameterName + 35;
            AFInAppEventType = i2 % 128;
            int i3 = i2 % 2;
            if (AnonymousClass3.getRevenue[emailsCryptType.ordinal()] != 2) {
                arrayList2.add(AFj1cSDK.getMonetizationNetwork(str2));
                int i4 = AFInAppEventType + 111;
                AFInAppEventParameterName = i4 % 128;
                int i5 = i4 % 2;
                str = "sha256_el_arr";
            } else {
                arrayList2.add(str2);
                str = "plain_el_arr";
            }
        }
        map.put(str, arrayList2);
        AppsFlyerProperties.getInstance().setUserEmails(new JSONObject(map).toString());
        int i6 = AFInAppEventParameterName + 87;
        AFInAppEventType = i6 % 128;
        if (i6 % 2 != 0) {
            return null;
        }
        obj.hashCode();
        throw null;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setCollectAndroidID(boolean z) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 99;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        AFAdRevenueData().copy().getMediationNetwork("setCollectAndroidID", String.valueOf(z));
        getMonetizationNetwork(new Object[]{AppsFlyerProperties.COLLECT_ANDROID_ID, Boolean.toString(z)}, -692563571, 692563575, (int) System.currentTimeMillis());
        getMonetizationNetwork(new Object[]{AppsFlyerProperties.COLLECT_ANDROID_ID_FORCE_BY_USER, Boolean.toString(z)}, -692563571, 692563575, (int) System.currentTimeMillis());
        int i4 = AFInAppEventType + AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR_OVERLAY;
        AFInAppEventParameterName = i4 % 128;
        if (i4 % 2 != 0) {
            int i5 = 3 / 0;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setCollectIMEI(boolean z) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 45;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        AFAdRevenueData().copy().getMediationNetwork("setCollectIMEI", String.valueOf(z));
        getMonetizationNetwork(new Object[]{AppsFlyerProperties.COLLECT_IMEI, Boolean.toString(z)}, -692563571, 692563575, (int) System.currentTimeMillis());
        getMonetizationNetwork(new Object[]{AppsFlyerProperties.COLLECT_IMEI_FORCE_BY_USER, Boolean.toString(z)}, -692563571, 692563575, (int) System.currentTimeMillis());
        int i4 = AFInAppEventType + 117;
        AFInAppEventParameterName = i4 % 128;
        if (i4 % 2 != 0) {
            int i5 = 95 / 0;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    @Deprecated
    public final void setCollectOaid(boolean z) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 125;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        AFAdRevenueData().copy().getMediationNetwork("setCollectOaid", String.valueOf(z));
        getMonetizationNetwork(new Object[]{AppsFlyerProperties.COLLECT_OAID, Boolean.toString(z)}, -692563571, 692563575, (int) System.currentTimeMillis());
        int i4 = AFInAppEventType + 85;
        AFInAppEventParameterName = i4 % 128;
        if (i4 % 2 != 0) {
            int i5 = 31 / 0;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setResolveDeepLinkURLs(String... strArr) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 9;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        AFLogger.afDebugLog(String.format("setResolveDeepLinkURLs %s", Arrays.toString(strArr)));
        AFa1oSDK aFa1oSDKD = AFAdRevenueData().d();
        aFa1oSDKD.component2.clear();
        aFa1oSDKD.component2.addAll(Arrays.asList(strArr));
        int i4 = AFInAppEventType + 41;
        AFInAppEventParameterName = i4 % 128;
        int i5 = i4 % 2;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setOneLinkCustomDomain(String... strArr) {
        String str;
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 125;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 == 0) {
            Object[] objArr = new Object[0];
            objArr[1] = Arrays.toString(strArr);
            str = String.format("setOneLinkCustomDomain %s", objArr);
        } else {
            str = String.format("setOneLinkCustomDomain %s", Arrays.toString(strArr));
        }
        AFLogger.afDebugLog(str);
        AFAdRevenueData().d().component4 = strArr;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void equals() {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 27;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        AFAdRevenueData().AFInAppEventParameterName().AFAdRevenueData();
        component2();
        int i4 = AFInAppEventType + 17;
        AFInAppEventParameterName = i4 % 128;
        if (i4 % 2 != 0) {
            throw null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code restructure failed: missing block: B:10:0x0023, code lost:
    
        AFAdRevenueData().v().getCurrencyIso4217Code();
        r4 = com.appsflyer.internal.AFa1tSDK.AFInAppEventType + 43;
        com.appsflyer.internal.AFa1tSDK.AFInAppEventParameterName = r4 % 128;
        r4 = r4 % 2;
     */
    /* JADX WARN: Code restructure failed: missing block: B:11:0x0037, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:5:0x0012, code lost:
    
        if (r4 != false) goto L8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:7:0x0015, code lost:
    
        if (r4 != false) goto L8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x0017, code lost:
    
        AFAdRevenueData().v().getRevenue();
     */
    /* JADX WARN: Code restructure failed: missing block: B:9:0x0022, code lost:
    
        return;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public /* synthetic */ void getMonetizationNetwork(boolean r4) {
        /*
            r3 = this;
            r0 = 2
            int r1 = r0 % r0
            int r1 = com.appsflyer.internal.AFa1tSDK.AFInAppEventParameterName
            int r1 = r1 + 95
            int r2 = r1 % 128
            com.appsflyer.internal.AFa1tSDK.AFInAppEventType = r2
            int r1 = r1 % r0
            if (r1 != 0) goto L15
            r1 = 41
            int r1 = r1 / 0
            if (r4 == 0) goto L23
            goto L17
        L15:
            if (r4 == 0) goto L23
        L17:
            com.appsflyer.internal.AFc1dSDK r4 = r3.AFAdRevenueData()
            com.appsflyer.internal.AFg1bSDK r4 = r4.v()
            r4.getRevenue()
            return
        L23:
            com.appsflyer.internal.AFc1dSDK r4 = r3.AFAdRevenueData()
            com.appsflyer.internal.AFg1bSDK r4 = r4.v()
            r4.getCurrencyIso4217Code()
            int r4 = com.appsflyer.internal.AFa1tSDK.AFInAppEventType
            int r4 = r4 + 43
            int r1 = r4 % 128
            com.appsflyer.internal.AFa1tSDK.AFInAppEventParameterName = r1
            int r4 = r4 % r0
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.appsflyer.internal.AFa1tSDK.getMonetizationNetwork(boolean):void");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void copydefault() {
        int i = 2 % 2;
        getMonetizationNetwork(new Object[]{this, new AFh1kSDK()}, 974724333, -974724320, System.identityHashCode(this));
        int i2 = AFInAppEventType + 71;
        AFInAppEventParameterName = i2 % 128;
        if (i2 % 2 == 0) {
            return;
        }
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    private static /* synthetic */ Object component3(Object[] objArr) {
        String str;
        final AFa1tSDK aFa1tSDK = (AFa1tSDK) objArr[0];
        String str2 = (String) objArr[1];
        AppsFlyerConversionListener appsFlyerConversionListener = (AppsFlyerConversionListener) objArr[2];
        Context context = (Context) objArr[3];
        int i = 2 % 2;
        int i2 = AFInAppEventType + 117;
        AFInAppEventParameterName = i2 % 128;
        if (i2 % 2 != 0) {
            boolean z = aFa1tSDK.toString;
            throw null;
        }
        if (aFa1tSDK.toString) {
            return aFa1tSDK;
        }
        aFa1tSDK.toString = true;
        aFa1tSDK.AFAdRevenueData().registerClient().AFAdRevenueData(str2);
        if (context != null) {
            int i3 = AFInAppEventParameterName + 25;
            AFInAppEventType = i3 % 128;
            int i4 = i3 % 2;
            aFa1tSDK.getMediationNetwork(context);
            Application applicationO_ = AFj1iSDK.O_(context);
            if (applicationO_ == null) {
                return aFa1tSDK;
            }
            aFa1tSDK.component1 = applicationO_;
            aFa1tSDK.AFAdRevenueData().getMonetizationNetwork().execute(new Runnable() { // from class: com.appsflyer.internal.AFa1tSDK$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.equals();
                }
            });
            aFa1tSDK.AFAdRevenueData().areAllFieldsValid().getMediationNetwork = System.currentTimeMillis();
            AFe1lSDK aFe1lSDKCopydefault = aFa1tSDK.AFAdRevenueData().copydefault();
            aFe1lSDKCopydefault.getRevenue.execute(aFe1lSDKCopydefault.new AnonymousClass5(new AFe1eSDK(aFa1tSDK.AFAdRevenueData())));
            AFi1tSDK aFi1tSDKI = aFa1tSDK.AFAdRevenueData().i();
            aFi1tSDKI.getMediationNetwork = Build.VERSION.SDK_INT >= 31 ? new AFi1sSDK(aFi1tSDKI.getCurrencyIso4217Code) : new AFi1qSDK(aFi1tSDKI.getCurrencyIso4217Code);
            aFa1tSDK.AFAdRevenueData().afRDLog().AFAdRevenueData(new AFd1vSDK.AFa1ySDK() { // from class: com.appsflyer.internal.AFa1tSDK$$ExternalSyntheticLambda1
                @Override // com.appsflyer.internal.AFd1vSDK.AFa1ySDK
                public final void onConfigurationChanged(boolean z2) {
                    this.f$0.getMonetizationNetwork(z2);
                }
            });
            aFa1tSDK.AFAdRevenueData().component1().getCurrencyIso4217Code(aFa1tSDK.getMonetizationNetwork());
            AFj1sSDK aFj1sSDKAFLogger = aFa1tSDK.AFAdRevenueData().AFLogger();
            Runnable runnable = new Runnable() { // from class: com.appsflyer.internal.AFa1tSDK$$ExternalSyntheticLambda2
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.copydefault();
                }
            };
            AFi1aSDK aFi1aSDKAFAdRevenueData = aFj1sSDKAFLogger.AFAdRevenueData(runnable);
            Runnable runnableAFAdRevenueData = aFj1sSDKAFLogger.AFAdRevenueData(aFi1aSDKAFAdRevenueData, runnable);
            aFj1sSDKAFLogger.getMediationNetwork(aFi1aSDKAFAdRevenueData);
            aFj1sSDKAFLogger.getMediationNetwork(new AFj1oSDK(aFj1sSDKAFLogger.getMediationNetwork.getRevenue(), runnableAFAdRevenueData));
            aFj1sSDKAFLogger.getMediationNetwork(new AFj1vSDK(runnableAFAdRevenueData, aFj1sSDKAFLogger.getMediationNetwork, new AFj1wSDK()));
            aFj1sSDKAFLogger.getMediationNetwork(new AFj1tSDK(runnableAFAdRevenueData, aFj1sSDKAFLogger.getMediationNetwork));
            aFj1sSDKAFLogger.getMediationNetwork(new AFj1uSDK(aFj1sSDKAFLogger.getMediationNetwork.getMonetizationNetwork(), aFj1sSDKAFLogger.getMediationNetwork.getRevenue(), runnableAFAdRevenueData));
            aFj1sSDKAFLogger.getMediationNetwork(runnableAFAdRevenueData);
            if (!aFj1sSDKAFLogger.getMonetizationNetwork()) {
                Context context2 = aFj1sSDKAFLogger.getMediationNetwork.AFInAppEventType().getMonetizationNetwork;
                AFc1dSDK aFc1dSDK = aFj1sSDKAFLogger.getMediationNetwork;
                List<ResolveInfo> listQueryIntentContentProviders = context2.getPackageManager().queryIntentContentProviders(new Intent("com.appsflyer.referrer.INSTALL_PROVIDER"), 0);
                if (listQueryIntentContentProviders != null && !listQueryIntentContentProviders.isEmpty()) {
                    ArrayList arrayList = new ArrayList();
                    Iterator<ResolveInfo> it = listQueryIntentContentProviders.iterator();
                    while (it.hasNext()) {
                        int i5 = AFInAppEventType + 59;
                        AFInAppEventParameterName = i5 % 128;
                        int i6 = i5 % 2;
                        ProviderInfo providerInfo = it.next().providerInfo;
                        if (providerInfo != null) {
                            arrayList.add(new AFj1rSDK(providerInfo, runnableAFAdRevenueData, aFc1dSDK));
                        } else {
                            AFLogger.INSTANCE.w(AFg1cSDK.PREINSTALL, "com.appsflyer.referrer.INSTALL_PROVIDER Action is set for non ContentProvider component");
                        }
                    }
                    if (!arrayList.isEmpty()) {
                        aFj1sSDKAFLogger.getCurrencyIso4217Code.addAll(arrayList);
                        AFLogger.INSTANCE.d(AFg1cSDK.PREINSTALL, new StringBuilder("Detected ").append(arrayList.size()).append(" valid preinstall provider(s)").toString());
                    }
                }
            }
            for (AFj1qSDK aFj1qSDK : aFj1sSDKAFLogger.getRevenue()) {
                int i7 = AFInAppEventParameterName + 29;
                AFInAppEventType = i7 % 128;
                int i8 = i7 % 2;
                aFj1qSDK.getRevenue(aFj1sSDKAFLogger.getMediationNetwork.AFInAppEventType().getMonetizationNetwork);
            }
            aFa1tSDK.AFAdRevenueData().registerClient().AFAdRevenueData(aFa1tSDK.AFAdRevenueData().getRevenue());
            if (aFa1tSDK.AFAdRevenueData().afWarnLog().getCurrencyIso4217Code()) {
                aFa1tSDK.AFAdRevenueData().afWarnLog().getMediationNetwork();
            }
        } else {
            AFLogger.INSTANCE.w(AFg1cSDK.REFERRER, "context is null, Google Install Referrer will be not initialized");
        }
        AFd1pSDK aFd1pSDKCopy = aFa1tSDK.AFAdRevenueData().copy();
        String[] strArr = new String[2];
        strArr[0] = str2;
        if (appsFlyerConversionListener == null) {
            str = "null";
        } else {
            int i9 = AFInAppEventType + 101;
            AFInAppEventParameterName = i9 % 128;
            int i10 = i9 % 2;
            str = "conversionDataListener";
        }
        strArr[1] = str;
        aFd1pSDKCopy.getMediationNetwork("init", strArr);
        AFLogger.INSTANCE.force(AFg1cSDK.GENERAL, String.format("Initializing AppsFlyer SDK: (v%s.%s)", "6.17.0", getMonetizationNetwork));
        aFa1tSDK.getCurrencyIso4217Code = appsFlyerConversionListener;
        return aFa1tSDK;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void AFAdRevenueData(AFi1fSDK aFi1fSDK) {
        int i = 2 % 2;
        AFf1wSDK aFf1wSDK = new AFf1wSDK(aFi1fSDK, AFAdRevenueData().getRevenue(), AFAdRevenueData());
        AFe1lSDK aFe1lSDKCopydefault = AFAdRevenueData().copydefault();
        aFe1lSDKCopydefault.getRevenue.execute(aFe1lSDKCopydefault.new AnonymousClass5(aFf1wSDK));
        int i2 = AFInAppEventType + 111;
        AFInAppEventParameterName = i2 % 128;
        if (i2 % 2 != 0) {
            int i3 = 50 / 0;
        }
    }

    private void component2() {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 37;
        AFInAppEventParameterName = i2 % 128;
        try {
            if (i2 % 2 == 0) {
                final AFi1fSDK aFi1fSDKForce = AFAdRevenueData().force();
                if (aFi1fSDKForce != null) {
                    int i3 = AFInAppEventType + 77;
                    AFInAppEventParameterName = i3 % 128;
                    int i4 = i3 % 2;
                    if (aFi1fSDKForce.getMediationNetwork()) {
                        aFi1fSDKForce.AFAdRevenueData(new AFi1cSDK() { // from class: com.appsflyer.internal.AFa1tSDK$$ExternalSyntheticLambda4
                            @Override // com.appsflyer.internal.AFi1cSDK
                            public final void onRequestFinished() {
                                this.f$0.AFAdRevenueData(aFi1fSDKForce);
                            }
                        });
                        return;
                    }
                    return;
                }
                return;
            }
            AFAdRevenueData().force();
            throw null;
        } catch (Throwable th) {
            AFLogger.afErrorLogForExcManagerOnly("Error at attempt to request PIA token", th);
            AFLogger.afRDLog("Get PIA token failed with exception:".concat(String.valueOf(th)));
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void enableFacebookDeferredApplinks(boolean z) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 107;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 != 0) {
            AFAdRevenueData().e().getCurrencyIso4217Code(z);
            int i3 = AFInAppEventType + 1;
            AFInAppEventParameterName = i3 % 128;
            if (i3 % 2 != 0) {
                throw null;
            }
            return;
        }
        AFAdRevenueData().e().getCurrencyIso4217Code(z);
        throw null;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void start(Context context) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 15;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        start(context, null);
        int i4 = AFInAppEventParameterName + 107;
        AFInAppEventType = i4 % 128;
        int i5 = i4 % 2;
    }

    private static /* synthetic */ Object toString(Object[] objArr) {
        AFa1tSDK aFa1tSDK = (AFa1tSDK) objArr[0];
        Context context = (Context) objArr[1];
        String str = (String) objArr[2];
        int i = 2 % 2;
        int i2 = AFInAppEventType + 71;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        aFa1tSDK.start(context, str, null);
        int i4 = AFInAppEventParameterName + 65;
        AFInAppEventType = i4 % 128;
        if (i4 % 2 != 0) {
            return null;
        }
        throw null;
    }

    private static /* synthetic */ Object getMediationNetwork(Object[] objArr) {
        AFa1tSDK aFa1tSDK = (AFa1tSDK) objArr[0];
        Context context = (Context) objArr[1];
        String str = (String) objArr[2];
        final AppsFlyerRequestListener appsFlyerRequestListener = (AppsFlyerRequestListener) objArr[3];
        int i = 2 % 2;
        Object obj = null;
        if (aFa1tSDK.AFAdRevenueData().afDebugLog().getCurrencyIso4217Code()) {
            return null;
        }
        if (!aFa1tSDK.toString) {
            int i2 = AFInAppEventType + 33;
            AFInAppEventParameterName = i2 % 128;
            int i3 = i2 % 2;
            AFAdRevenueData("start");
            if (str == null) {
                int i4 = AFInAppEventType + 19;
                AFInAppEventParameterName = i4 % 128;
                if (i4 % 2 != 0) {
                    obj.hashCode();
                    throw null;
                }
                if (appsFlyerRequestListener != null) {
                    appsFlyerRequestListener.onError(41, "No dev key");
                }
                return null;
            }
        }
        aFa1tSDK.getMediationNetwork(context);
        final AFh1vSDK aFh1vSDKAreAllFieldsValid = aFa1tSDK.AFAdRevenueData().areAllFieldsValid();
        aFh1vSDKAreAllFieldsValid.getMediationNetwork(AFh1tSDK.getRevenue(context));
        if (aFa1tSDK.component1 == null) {
            int i5 = AFInAppEventParameterName + 23;
            AFInAppEventType = i5 % 128;
            int i6 = i5 % 2;
            Application applicationO_ = AFj1iSDK.O_(context);
            if (applicationO_ == null) {
                return null;
            }
            int i7 = AFInAppEventType + 119;
            AFInAppEventParameterName = i7 % 128;
            if (i7 % 2 != 0) {
                aFa1tSDK.component1 = applicationO_;
                obj.hashCode();
                throw null;
            }
            aFa1tSDK.component1 = applicationO_;
        }
        aFa1tSDK.AFAdRevenueData().copy().getMediationNetwork("start", str);
        AFLogger aFLogger = AFLogger.INSTANCE;
        AFg1cSDK aFg1cSDK = AFg1cSDK.GENERAL;
        String str2 = getMonetizationNetwork;
        aFLogger.i(aFg1cSDK, String.format("Starting AppsFlyer: (v%s.%s)", "6.17.0", str2));
        AFLogger.INSTANCE.i(AFg1cSDK.GENERAL, new StringBuilder("Build Number: ").append(str2).toString());
        AppsFlyerProperties.getInstance().loadProperties(aFa1tSDK.AFAdRevenueData().component2());
        if (!TextUtils.isEmpty(str)) {
            int i8 = AFInAppEventType + 45;
            AFInAppEventParameterName = i8 % 128;
            int i9 = i8 % 2;
            aFa1tSDK.AFAdRevenueData().registerClient().AFAdRevenueData(str);
            int i10 = AFInAppEventType + AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR_OVERLAY;
            AFInAppEventParameterName = i10 % 128;
            int i11 = i10 % 2;
        } else if (TextUtils.isEmpty(aFa1tSDK.AFAdRevenueData().registerClient().getMediationNetwork())) {
            copy();
            if (appsFlyerRequestListener != null) {
                appsFlyerRequestListener.onError(41, "No dev key");
            }
            return null;
        }
        aFa1tSDK.AFAdRevenueData().component1().getCurrencyIso4217Code(aFa1tSDK.getMonetizationNetwork());
        aFa1tSDK.component4();
        getMonetizationNetwork(aFa1tSDK.component1.getBaseContext());
        aFa1tSDK.AFAdRevenueData().e().getRevenue();
        aFa1tSDK.copy.afDebugLog().AFAdRevenueData(context, new AFb1bSDK.AFa1zSDK() { // from class: com.appsflyer.internal.AFa1tSDK.1
            @Override // com.appsflyer.internal.AFb1bSDK.AFa1zSDK
            public final void getRevenue(AFh1qSDK aFh1qSDK) {
                aFh1vSDKAreAllFieldsValid.AFAdRevenueData();
                AFc1dSDK aFc1dSDKAFAdRevenueData = AFa1tSDK.this.AFAdRevenueData();
                aFc1dSDKAFAdRevenueData.component1().getCurrencyIso4217Code(AFa1tSDK.this.getMonetizationNetwork());
                AFa1tSDK.this.component4();
                int iAFAdRevenueData = aFc1dSDKAFAdRevenueData.getRevenue().getMonetizationNetwork.AFAdRevenueData("appsFlyerCount", 0);
                AFLogger.afInfoLog("onBecameForeground");
                if (iAFAdRevenueData < 2) {
                    AFa1tSDK.this.AFAdRevenueData().equals().getCurrencyIso4217Code();
                }
                AFh1iSDK aFh1iSDK = new AFh1iSDK();
                if (aFh1qSDK != null) {
                    AFa1tSDK.this.AFAdRevenueData().d().e_(AFa1jSDK.AFAdRevenueData(aFh1iSDK), aFh1qSDK.getRevenue, aFc1dSDKAFAdRevenueData.AFInAppEventType().getMonetizationNetwork);
                    AFh1uSDK aFh1uSDKAfErrorLogForExcManagerOnly = aFc1dSDKAFAdRevenueData.afErrorLogForExcManagerOnly();
                    if (aFh1uSDKAfErrorLogForExcManagerOnly != null && aFh1qSDK.getRevenue != null) {
                        aFh1uSDKAfErrorLogForExcManagerOnly.u_(aFh1qSDK.getRevenue, AFa1tSDK.this.AFAdRevenueData().d());
                    }
                }
                AFa1tSDK aFa1tSDK2 = AFa1tSDK.this;
                aFh1iSDK.getCurrencyIso4217Code = appsFlyerRequestListener;
                aFa1tSDK2.getMonetizationNetwork(aFh1iSDK, aFh1qSDK);
                AFa1tSDK.this.AFAdRevenueData().getMediationNetwork().getRevenue();
                AFa1tSDK.this.AFAdRevenueData().getMediationNetwork().AFAdRevenueData.getCurrencyIso4217Code("didSendRevenueTriggerOnLastBackground", false);
            }

            @Override // com.appsflyer.internal.AFb1bSDK.AFa1zSDK
            public final void getCurrencyIso4217Code() {
                Context context2 = AFa1tSDK.this.AFAdRevenueData().AFInAppEventType().getMonetizationNetwork;
                AFLogger.afInfoLog("onBecameBackground");
                AFh1vSDK aFh1vSDK = aFh1vSDKAreAllFieldsValid;
                long jCurrentTimeMillis = System.currentTimeMillis();
                if (aFh1vSDK.component3 != 0) {
                    long j = jCurrentTimeMillis - aFh1vSDK.component3;
                    if (j > 0 && j < 1000) {
                        j = 1000;
                    }
                    aFh1vSDK.toString = TimeUnit.MILLISECONDS.toSeconds(j);
                    aFh1vSDK.getCurrencyIso4217Code.getMonetizationNetwork("prev_session_dur", aFh1vSDK.toString);
                } else {
                    AFLogger.afInfoLog("Metrics: fg ts is missing");
                }
                AFLogger.afInfoLog("callStatsBackground background call");
                AFa1tSDK.this.AFAdRevenueData().afRDLog().AFAdRevenueData();
                AFd1pSDK aFd1pSDKCopy = AFa1tSDK.this.AFAdRevenueData().copy();
                if (aFd1pSDKCopy.component4()) {
                    aFd1pSDKCopy.getMediationNetwork();
                    if (context2 != null && !AppsFlyerLib.getInstance().isStopped()) {
                        aFd1pSDKCopy.o_(context2.getPackageName(), context2.getPackageManager());
                    }
                    aFd1pSDKCopy.AFAdRevenueData();
                } else {
                    AFLogger.afDebugLog("RD status is OFF");
                }
                AFa1tSDK.this.AFAdRevenueData().equals().getRevenue();
                AFa1tSDK.this.AFAdRevenueData().afVerboseLog().getMonetizationNetwork();
                AFa1tSDK.this.AFAdRevenueData().getMediationNetwork().getRevenue();
                AFh1uSDK aFh1uSDKAfErrorLogForExcManagerOnly = AFa1tSDK.this.AFAdRevenueData().afErrorLogForExcManagerOnly();
                if (aFh1uSDKAfErrorLogForExcManagerOnly != null) {
                    aFh1uSDKAfErrorLogForExcManagerOnly.getMediationNetwork();
                }
            }
        });
        int i12 = AFInAppEventParameterName + 105;
        AFInAppEventType = i12 % 128;
        if (i12 % 2 != 0) {
            return null;
        }
        obj.hashCode();
        throw null;
    }

    private static void getMonetizationNetwork(Context context) {
        int i = 2 % 2;
        try {
            if ((context.getPackageManager().getPackageInfo(context.getPackageName(), 0).applicationInfo.flags & 32768) != 0) {
                if (Build.VERSION.SDK_INT < 31) {
                    if (context.getResources().getIdentifier("appsflyer_backup_rules", "xml", context.getPackageName()) != 0) {
                        AFLogger.INSTANCE.i(AFg1cSDK.GENERAL, "appsflyer_backup_rules.xml detected, using AppsFlyer defined backup rules for AppsFlyer SDK data", true);
                        return;
                    } else {
                        AFLogger.INSTANCE.w(AFg1cSDK.GENERAL, "'allowBackup' is set to true; appsflyer_backup_rules.xml is NOT detected.\nAppsFlyer shared preferences should be excluded from auto backup by adding: <exclude domain=\"sharedpref\" path=\"appsflyer-data\"/> to the Application's <full-backup-content> rules.\nIf Appsflyer's Purchase Connector is in use then you also must add the following to your rules: <exclude domain=\"sharedpref\" path=\"appsflyer-purchase-data\"/> AND <exclude domain=\"database\" path=\"afpurchases.db\"/>", true);
                        return;
                    }
                }
                int i2 = AFInAppEventParameterName + 61;
                AFInAppEventType = i2 % 128;
                int i3 = i2 % 2;
                if (context.getResources().getIdentifier("appsflyer_data_extraction_rules", "xml", context.getPackageName()) == 0) {
                    AFLogger.INSTANCE.w(AFg1cSDK.GENERAL, "'allowBackup' is set to true; appsflyer_data_extraction_rules.xml is NOT detected.\nAppsFlyer shared preferences should be excluded from auto backup by adding: <exclude domain=\"sharedpref\" path=\"appsflyer-data\"/> to the Application's <data-extraction-rules> both in <device-transfer> and <cloud-backup>.\nIf Appsflyer's Purchase Connector is in use then you also must add to <device-transfer> and <cloud-backup> the following excludes: <exclude domain=\"sharedpref\" path=\"appsflyer-purchase-data\"/> AND <exclude domain=\"database\" path=\"afpurchases.db\"/>", true);
                    int i4 = AFInAppEventType + 79;
                    AFInAppEventParameterName = i4 % 128;
                    int i5 = i4 % 2;
                    return;
                }
                int i6 = AFInAppEventType + 119;
                AFInAppEventParameterName = i6 % 128;
                if (i6 % 2 != 0) {
                    AFLogger.INSTANCE.i(AFg1cSDK.GENERAL, "appsflyer_data_extraction_rules.xml detected, using AppsFlyer data extraction rules for AppsFlyer SDK data", false);
                } else {
                    AFLogger.INSTANCE.i(AFg1cSDK.GENERAL, "appsflyer_data_extraction_rules.xml detected, using AppsFlyer data extraction rules for AppsFlyer SDK data", true);
                }
            }
        } catch (Throwable th) {
            AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "Exception while checking BackupRules: ", th);
        }
    }

    public static String getRevenue() {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 61;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        String monetizationNetwork = getMonetizationNetwork(AppsFlyerProperties.APP_USER_ID);
        int i4 = AFInAppEventParameterName + 11;
        AFInAppEventType = i4 % 128;
        int i5 = i4 % 2;
        return monetizationNetwork;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setCustomerUserId(String str) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 65;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        AFAdRevenueData().copy().getMediationNetwork("setCustomerUserId", str);
        AFLogger.afInfoLog("setCustomerUserId = ".concat(String.valueOf(str)));
        getMonetizationNetwork(new Object[]{AppsFlyerProperties.APP_USER_ID, str}, -692563571, 692563575, (int) System.currentTimeMillis());
        getCurrencyIso4217Code(AppsFlyerProperties.AF_WAITFOR_CUSTOMERID, false);
        int i4 = AFInAppEventType + 33;
        AFInAppEventParameterName = i4 % 128;
        int i5 = i4 % 2;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setPhoneNumber(String str) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 113;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 != 0) {
            AFAdRevenueData().afInfoLog().getMediationNetwork = AFj1cSDK.getMonetizationNetwork(str);
        } else {
            AFAdRevenueData().afInfoLog().getMediationNetwork = AFj1cSDK.getMonetizationNetwork(str);
            throw null;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setAppId(String str) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 53;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        AFAdRevenueData().copy().getMediationNetwork("setAppId", str);
        getMonetizationNetwork(new Object[]{AppsFlyerProperties.APP_ID, str}, -692563571, 692563575, (int) System.currentTimeMillis());
        int i4 = AFInAppEventParameterName + 95;
        AFInAppEventType = i4 % 128;
        int i5 = i4 % 2;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setExtension(String str) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 101;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 == 0) {
            AFd1pSDK aFd1pSDKCopy = AFAdRevenueData().copy();
            String[] strArr = new String[0];
            strArr[0] = str;
            aFd1pSDKCopy.getMediationNetwork("setExtension", strArr);
        } else {
            AFAdRevenueData().copy().getMediationNetwork("setExtension", str);
        }
        AppsFlyerProperties.getInstance().set(AppsFlyerProperties.EXTENSION, str);
        int i3 = AFInAppEventParameterName + 1;
        AFInAppEventType = i3 % 128;
        if (i3 % 2 == 0) {
            throw null;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setIsUpdate(boolean z) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 31;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 == 0) {
            AFd1pSDK aFd1pSDKCopy = AFAdRevenueData().copy();
            String[] strArr = new String[0];
            strArr[1] = String.valueOf(z);
            aFd1pSDKCopy.getMediationNetwork("setIsUpdate", strArr);
        } else {
            AFAdRevenueData().copy().getMediationNetwork("setIsUpdate", String.valueOf(z));
        }
        AppsFlyerProperties.getInstance().set(AppsFlyerProperties.IS_UPDATE, z);
        int i3 = AFInAppEventParameterName + 51;
        AFInAppEventType = i3 % 128;
        int i4 = i3 % 2;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setCurrencyCode(String str) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 73;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        AFAdRevenueData().copy().getMediationNetwork("setCurrencyCode", str);
        AppsFlyerProperties.getInstance().set(AppsFlyerProperties.CURRENCY_CODE, str);
        int i4 = AFInAppEventParameterName + 9;
        AFInAppEventType = i4 % 128;
        int i5 = i4 % 2;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void logLocation(Context context, double d, double d2) {
        int i = 2 % 2;
        AFAdRevenueData().copy().getMediationNetwork("logLocation", String.valueOf(d), String.valueOf(d2));
        HashMap map = new HashMap();
        map.put(AFInAppEventParameterName.LONGITUDE, Double.toString(d2));
        map.put(AFInAppEventParameterName.LATITUDE, Double.toString(d));
        getMonetizationNetwork(new Object[]{this, context, AFInAppEventType.LOCATION_COORDINATES, map}, 1732368696, -1732368678, System.identityHashCode(this));
        int i2 = AFInAppEventParameterName + 93;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 == 0) {
            int i3 = 71 / 0;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void logSession(Context context) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 67;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        AFAdRevenueData().copy().getMediationNetwork("logSession", new String[0]);
        AFAdRevenueData().copy().getCurrencyIso4217Code();
        getCurrencyIso4217Code(context, AFh1xSDK.logSession);
        getMonetizationNetwork(new Object[]{this, context, null, null}, 1732368696, -1732368678, System.identityHashCode(this));
        int i4 = AFInAppEventParameterName + 87;
        AFInAppEventType = i4 % 128;
        if (i4 % 2 == 0) {
            int i5 = 16 / 0;
        }
    }

    private void getCurrencyIso4217Code(Context context, AFh1xSDK aFh1xSDK) {
        int i = 2 % 2;
        getMediationNetwork(context);
        AFh1vSDK aFh1vSDKAreAllFieldsValid = AFAdRevenueData().areAllFieldsValid();
        AFh1tSDK revenue = AFh1tSDK.getRevenue(context);
        if (aFh1vSDKAreAllFieldsValid.getCurrencyIso4217Code()) {
            int i2 = AFInAppEventType + 5;
            AFInAppEventParameterName = i2 % 128;
            if (i2 % 2 == 0) {
                aFh1vSDKAreAllFieldsValid.AFAdRevenueData.put("api_name", aFh1xSDK.toString());
                aFh1vSDKAreAllFieldsValid.getMediationNetwork(revenue);
            } else {
                aFh1vSDKAreAllFieldsValid.AFAdRevenueData.put("api_name", aFh1xSDK.toString());
                aFh1vSDKAreAllFieldsValid.getMediationNetwork(revenue);
                Object obj = null;
                obj.hashCode();
                throw null;
            }
        }
        aFh1vSDKAreAllFieldsValid.AFAdRevenueData();
        int i3 = AFInAppEventType + 19;
        AFInAppEventParameterName = i3 % 128;
        int i4 = i3 % 2;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void logAdRevenue(AFAdRevenueData aFAdRevenueData, Map<String, Object> map) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 95;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        if (!this.toString) {
            AFAdRevenueData("logAdRevenue");
            return;
        }
        if (!aFAdRevenueData.areAllFieldsValid()) {
            int i4 = AFInAppEventType + 81;
            AFInAppEventParameterName = i4 % 128;
            if (i4 % 2 != 0) {
                AFLogger.INSTANCE.w(AFg1cSDK.AD_REVENUE, "Invalid ad revenue parameters provided");
                Object obj = null;
                obj.hashCode();
                throw null;
            }
            AFLogger.INSTANCE.w(AFg1cSDK.AD_REVENUE, "Invalid ad revenue parameters provided");
            int i5 = AFInAppEventParameterName + 111;
            AFInAppEventType = i5 % 128;
            int i6 = i5 % 2;
            return;
        }
        if (AFAdRevenueData().registerClient().AFAdRevenueData()) {
            int i7 = AFInAppEventType + 93;
            AFInAppEventParameterName = i7 % 128;
            int i8 = i7 % 2;
            AFLogger.INSTANCE.w(AFg1cSDK.AD_REVENUE, "SDK is stopped");
            return;
        }
        if (!AFk1ySDK.getMediationNetwork(AFAdRevenueData().registerClient().getMediationNetwork())) {
            AFAdRevenueData(new AFh1lSDK(aFAdRevenueData, map));
            return;
        }
        int i9 = AFInAppEventType + 41;
        AFInAppEventParameterName = i9 % 128;
        int i10 = i9 % 2;
        copy();
        int i11 = AFInAppEventParameterName + 51;
        AFInAppEventType = i11 % 128;
        if (i11 % 2 == 0) {
            int i12 = 27 / 0;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void logEvent(Context context, String str, Map<String, Object> map) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 103;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        logEvent(context, str, map, null);
        int i4 = AFInAppEventType + 57;
        AFInAppEventParameterName = i4 % 128;
        if (i4 % 2 != 0) {
            int i5 = 63 / 0;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x0034, code lost:
    
        if ((r5 % 2) != 0) goto L12;
     */
    /* JADX WARN: Code restructure failed: missing block: B:11:0x0036, code lost:
    
        return r1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:12:0x0037, code lost:
    
        r2.hashCode();
     */
    /* JADX WARN: Code restructure failed: missing block: B:13:0x003a, code lost:
    
        throw null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x003b, code lost:
    
        return null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:5:0x0015, code lost:
    
        if ((r5 instanceof android.app.Activity) != false) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x001a, code lost:
    
        if ((r5 instanceof android.app.Activity) != false) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:9:0x001c, code lost:
    
        r1 = new com.appsflyer.internal.AFh1qSDK((android.app.Activity) r5, AFAdRevenueData().w());
        r5 = com.appsflyer.internal.AFa1tSDK.AFInAppEventType + 105;
        com.appsflyer.internal.AFa1tSDK.AFInAppEventParameterName = r5 % 128;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private com.appsflyer.internal.AFh1qSDK component1(android.content.Context r5) {
        /*
            r4 = this;
            r0 = 2
            int r1 = r0 % r0
            int r1 = com.appsflyer.internal.AFa1tSDK.AFInAppEventType
            int r1 = r1 + 9
            int r2 = r1 % 128
            com.appsflyer.internal.AFa1tSDK.AFInAppEventParameterName = r2
            int r1 = r1 % r0
            r2 = 0
            if (r1 == 0) goto L18
            boolean r1 = r5 instanceof android.app.Activity
            r3 = 87
            int r3 = r3 / 0
            if (r1 == 0) goto L3b
            goto L1c
        L18:
            boolean r1 = r5 instanceof android.app.Activity
            if (r1 == 0) goto L3b
        L1c:
            com.appsflyer.internal.AFh1qSDK r1 = new com.appsflyer.internal.AFh1qSDK
            android.app.Activity r5 = (android.app.Activity) r5
            com.appsflyer.internal.AFc1dSDK r3 = r4.AFAdRevenueData()
            com.appsflyer.internal.AFi1kSDK r3 = r3.w()
            r1.<init>(r5, r3)
            int r5 = com.appsflyer.internal.AFa1tSDK.AFInAppEventType
            int r5 = r5 + 105
            int r3 = r5 % 128
            com.appsflyer.internal.AFa1tSDK.AFInAppEventParameterName = r3
            int r5 = r5 % r0
            if (r5 != 0) goto L37
            return r1
        L37:
            r2.hashCode()
            throw r2
        L3b:
            return r2
        */
        throw new UnsupportedOperationException("Method not decompiled: com.appsflyer.internal.AFa1tSDK.component1(android.content.Context):com.appsflyer.internal.AFh1qSDK");
    }

    private static /* synthetic */ Object copy(Object[] objArr) {
        AFa1tSDK aFa1tSDK = (AFa1tSDK) objArr[0];
        Context context = (Context) objArr[1];
        String str = (String) objArr[2];
        Map<String, Object> map = (Map) objArr[3];
        int i = 2 % 2;
        AFh1fSDK aFh1fSDK = new AFh1fSDK();
        aFh1fSDK.areAllFieldsValid = str;
        aFh1fSDK.getMonetizationNetwork = map;
        aFa1tSDK.getMonetizationNetwork(aFh1fSDK, aFa1tSDK.component1(context));
        int i2 = AFInAppEventParameterName + 15;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 == 0) {
            int i3 = 49 / 0;
        }
        return null;
    }

    final void getMonetizationNetwork(AFh1rSDK aFh1rSDK, AFh1qSDK aFh1qSDK) {
        int i = 2 % 2;
        getCurrencyIso4217Code(aFh1rSDK, aFh1qSDK);
        if (AFAdRevenueData().registerClient().getMediationNetwork() != null) {
            String referrer = AppsFlyerProperties.getInstance().getReferrer(AFAdRevenueData().component2());
            if (referrer != null) {
                int i2 = AFInAppEventParameterName + 9;
                AFInAppEventType = i2 % 128;
                if (i2 % 2 == 0) {
                    int i3 = 4 / 4;
                }
            } else {
                referrer = "";
            }
            aFh1rSDK.component3 = referrer;
            AFAdRevenueData(aFh1rSDK);
            return;
        }
        int i4 = AFInAppEventType + 45;
        AFInAppEventParameterName = i4 % 128;
        int i5 = i4 % 2;
        AFLogger.afWarnLog("[LogEvent/Launch] AppsFlyer's SDK cannot send any event without providing DevKey.");
        AppsFlyerRequestListener appsFlyerRequestListener = aFh1rSDK.getCurrencyIso4217Code;
        if (appsFlyerRequestListener != null) {
            int i6 = AFInAppEventType + 105;
            AFInAppEventParameterName = i6 % 128;
            appsFlyerRequestListener.onError(i6 % 2 != 0 ? AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR : 41, "No dev key");
        }
        int i7 = AFInAppEventType + 11;
        AFInAppEventParameterName = i7 % 128;
        int i8 = i7 % 2;
    }

    private static void getCurrencyIso4217Code(AFh1rSDK aFh1rSDK, AFh1qSDK aFh1qSDK) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 73;
        int i3 = i2 % 128;
        AFInAppEventParameterName = i3;
        int i4 = i2 % 2;
        if (aFh1qSDK != null) {
            int i5 = i3 + 79;
            AFInAppEventType = i5 % 128;
            if (i5 % 2 != 0) {
                aFh1rSDK.getMediationNetwork = aFh1qSDK.getCurrencyIso4217Code;
                aFh1rSDK.component4 = aFh1qSDK.getMediationNetwork;
            } else {
                aFh1rSDK.getMediationNetwork = aFh1qSDK.getCurrencyIso4217Code;
                aFh1rSDK.component4 = aFh1qSDK.getMediationNetwork;
                Object obj = null;
                obj.hashCode();
                throw null;
            }
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void anonymizeUser(boolean z) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 1;
        AFInAppEventParameterName = i2 % 128;
        if (i2 % 2 != 0) {
            AFd1pSDK aFd1pSDKCopy = AFAdRevenueData().copy();
            String[] strArr = new String[0];
            strArr[1] = String.valueOf(z);
            aFd1pSDKCopy.getMediationNetwork("anonymizeUser", strArr);
        } else {
            AFAdRevenueData().copy().getMediationNetwork("anonymizeUser", String.valueOf(z));
        }
        AppsFlyerProperties.getInstance().set(AppsFlyerProperties.DEVICE_TRACKING_DISABLED, z);
        int i3 = AFInAppEventType + 69;
        AFInAppEventParameterName = i3 % 128;
        int i4 = i3 % 2;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void registerConversionListener(Context context, AppsFlyerConversionListener appsFlyerConversionListener) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 79;
        AFInAppEventParameterName = i2 % 128;
        if (i2 % 2 != 0) {
            AFAdRevenueData().copy().getMediationNetwork("registerConversionListener", new String[0]);
        } else {
            AFAdRevenueData().copy().getMediationNetwork("registerConversionListener", new String[0]);
        }
        getRevenue(appsFlyerConversionListener);
    }

    private void getRevenue(AppsFlyerConversionListener appsFlyerConversionListener) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 113;
        int i3 = i2 % 128;
        AFInAppEventType = i3;
        if (i2 % 2 == 0) {
            throw null;
        }
        if (appsFlyerConversionListener != null) {
            this.getCurrencyIso4217Code = appsFlyerConversionListener;
            return;
        }
        int i4 = i3 + 125;
        AFInAppEventParameterName = i4 % 128;
        int i5 = i4 % 2;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void unregisterConversionListener() {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 79;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        AFAdRevenueData().copy().getMediationNetwork("unregisterConversionListener", new String[0]);
        Object obj = null;
        this.getCurrencyIso4217Code = null;
        int i4 = AFInAppEventType + 75;
        AFInAppEventParameterName = i4 % 128;
        if (i4 % 2 == 0) {
            return;
        }
        obj.hashCode();
        throw null;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void registerValidatorListener(Context context, AppsFlyerInAppPurchaseValidatorListener appsFlyerInAppPurchaseValidatorListener) {
        int i = 2 % 2;
        AFAdRevenueData().copy().getMediationNetwork("registerValidatorListener", new String[0]);
        AFLogger.afDebugLog("registerValidatorListener called");
        if (appsFlyerInAppPurchaseValidatorListener != null) {
            AFAdRevenueData = appsFlyerInAppPurchaseValidatorListener;
            int i2 = AFInAppEventType + 11;
            AFInAppEventParameterName = i2 % 128;
            int i3 = i2 % 2;
            return;
        }
        int i4 = AFInAppEventParameterName + 25;
        AFInAppEventType = i4 % 128;
        if (i4 % 2 != 0) {
            AFLogger.afDebugLog("registerValidatorListener null listener");
            return;
        }
        AFLogger.afDebugLog("registerValidatorListener null listener");
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    public static String getRevenue(SimpleDateFormat simpleDateFormat, long j) {
        int i = 2 % 2;
        simpleDateFormat.setTimeZone(TimeZone.getTimeZone("UTC"));
        String str = simpleDateFormat.format(new Date(j));
        int i2 = AFInAppEventParameterName + 61;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 != 0) {
            return str;
        }
        throw null;
    }

    private static /* synthetic */ Object hashCode(Object[] objArr) {
        AFa1tSDK aFa1tSDK = (AFa1tSDK) objArr[0];
        Context context = (Context) objArr[1];
        String str = (String) objArr[2];
        int i = 2 % 2;
        AFh1iSDK aFh1iSDK = new AFh1iSDK();
        aFa1tSDK.getMediationNetwork(context);
        aFh1iSDK.areAllFieldsValid = null;
        aFh1iSDK.getMonetizationNetwork = null;
        aFh1iSDK.component3 = str;
        aFh1iSDK.getMediationNetwork = null;
        aFa1tSDK.AFAdRevenueData(aFh1iSDK);
        int i2 = AFInAppEventParameterName + 101;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 == 0) {
            int i3 = 32 / 0;
        }
        return null;
    }

    /* JADX WARN: Code duplicated, block: B:9:0x001c  */
    private void AFAdRevenueData(AFh1rSDK aFh1rSDK) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 3;
        AFInAppEventType = i2 % 128;
        boolean z = false;
        if (i2 % 2 == 0) {
            int i3 = 19 / 0;
            if (aFh1rSDK.areAllFieldsValid == null) {
                z = true;
            }
        } else if (aFh1rSDK.areAllFieldsValid == null) {
            z = true;
        }
        if (getMediationNetwork()) {
            int i4 = AFInAppEventType + 87;
            AFInAppEventParameterName = i4 % 128;
            int i5 = i4 % 2;
            AFLogger.afInfoLog("CustomerUserId not set, reporting is disabled", true);
            return;
        }
        if (z) {
            if (!AppsFlyerProperties.getInstance().getBoolean(AppsFlyerProperties.LAUNCH_PROTECT_ENABLED, true)) {
                AFLogger.afInfoLog("Allowing multiple launches within a 5 second time window.");
            } else if (component1()) {
                int i6 = AFInAppEventParameterName + 117;
                AFInAppEventType = i6 % 128;
                int i7 = i6 % 2;
                AppsFlyerRequestListener appsFlyerRequestListener = aFh1rSDK.getCurrencyIso4217Code;
                if (appsFlyerRequestListener != null) {
                    int i8 = AFInAppEventType + 113;
                    AFInAppEventParameterName = i8 % 128;
                    int i9 = i8 % 2;
                    appsFlyerRequestListener.onError(10, "Event timeout. Check 'minTimeBetweenSessions' param");
                    return;
                }
                return;
            }
            this.component2 = System.currentTimeMillis();
            int i10 = AFInAppEventParameterName + 101;
            AFInAppEventType = i10 % 128;
            int i11 = i10 % 2;
        }
        AFj1dSDK.getMediationNetwork(AFAdRevenueData().AFAdRevenueData(), new AFa1ySDK(aFh1rSDK), 0L, TimeUnit.MILLISECONDS);
    }

    private void getMediationNetwork(String str) {
        int i = 2 % 2;
        AFh1rSDK aFh1rSDKAFAdRevenueData = new AFh1jSDK().AFAdRevenueData(AFAdRevenueData().getRevenue().getMonetizationNetwork.AFAdRevenueData("appsFlyerCount", 0));
        aFh1rSDKAFAdRevenueData.component3 = str;
        if (str != null) {
            int i2 = AFInAppEventParameterName + 31;
            AFInAppEventType = i2 % 128;
            int i3 = i2 % 2;
            if (str.length() > 5) {
                int i4 = AFInAppEventType + 59;
                AFInAppEventParameterName = i4 % 128;
                int i5 = i4 % 2;
                if (AFAdRevenueData().AFLogger().getCurrencyIso4217Code(aFh1rSDKAFAdRevenueData)) {
                    AFj1dSDK.getMediationNetwork(AFAdRevenueData().AFAdRevenueData(), new AFa1ySDK(aFh1rSDKAFAdRevenueData), 5L, TimeUnit.MILLISECONDS);
                }
            }
        }
    }

    /* JADX WARN: Code duplicated, block: B:23:0x005e  */
    private void getCurrencyIso4217Code(Map<String, Object> map) {
        int i = 2 % 2;
        if (AppsFlyerProperties.getInstance().getBoolean(AppsFlyerProperties.COLLECT_ANDROID_ID_FORCE_BY_USER, false) || AppsFlyerProperties.getInstance().getBoolean(AppsFlyerProperties.COLLECT_IMEI_FORCE_BY_USER, false) || map.get("advertiserId") == null) {
            return;
        }
        int i2 = AFInAppEventType + 41;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        try {
            if (AFk1ySDK.getMediationNetwork(AFAdRevenueData().afInfoLog().AFAdRevenueData)) {
                int i4 = AFInAppEventType + 29;
                AFInAppEventParameterName = i4 % 128;
                if (i4 % 2 != 0) {
                    int i5 = 63 / 0;
                    if (map.remove("android_id") != null) {
                        int i6 = AFInAppEventType + 117;
                        AFInAppEventParameterName = i6 % 128;
                        int i7 = i6 % 2;
                        AFLogger.afInfoLog("validateGaidAndIMEI :: removing: android_id");
                    }
                } else if (map.remove("android_id") != null) {
                    int i8 = AFInAppEventType + 117;
                    AFInAppEventParameterName = i8 % 128;
                    int i9 = i8 % 2;
                    AFLogger.afInfoLog("validateGaidAndIMEI :: removing: android_id");
                }
            }
            if (!AFk1ySDK.getMediationNetwork(AFAdRevenueData().registerClient().getRevenue()) || map.remove("imei") == null) {
                return;
            }
            AFLogger.afInfoLog("validateGaidAndIMEI :: removing: imei");
        } catch (Exception e) {
            AFLogger.afErrorLog("failed to remove IMEI or AndroidID key from params; ", e);
        }
    }

    final Map<String, Object> getMediationNetwork(AFh1rSDK aFh1rSDK) {
        String str;
        int i = 2 % 2;
        Context context = AFAdRevenueData().AFInAppEventType().getMonetizationNetwork;
        AFc1qSDK revenue = getRevenue(context);
        AFg1qSDK aFg1qSDKComponent3 = AFAdRevenueData().component3();
        boolean zAFAdRevenueData = AFAdRevenueData().registerClient().AFAdRevenueData();
        boolean mediationNetwork = aFh1rSDK.getMediationNetwork();
        Map<String, Object> map = aFh1rSDK.AFAdRevenueData;
        long time = new Date().getTime();
        Object[] objArr = new Object[1];
        a(new int[]{1293966833, -1332243105, 2001922811, -600378744, 548813369, -684723692}, 13 - (SystemClock.uptimeMillis() > 0L ? 1 : (SystemClock.uptimeMillis() == 0L ? 0 : -1)), objArr);
        map.put(((String) objArr[0]).intern(), Long.toString(time));
        try {
            if (zAFAdRevenueData) {
                int i2 = AFInAppEventType + 83;
                AFInAppEventParameterName = i2 % 128;
                int i3 = i2 % 2;
                AFLogger.INSTANCE.i(AFg1cSDK.GENERAL, "AppsFlyer SDK Reporting has been stopped", true);
            } else {
                AFLogger aFLogger = AFLogger.INSTANCE;
                AFg1cSDK aFg1cSDK = AFg1cSDK.GENERAL;
                StringBuilder sb = new StringBuilder("******* sendTrackingWithEvent: ");
                if (mediationNetwork) {
                    int i4 = AFInAppEventParameterName;
                    int i5 = i4 + 125;
                    AFInAppEventType = i5 % 128;
                    int i6 = i5 % 2;
                    str = "Launch";
                    int i7 = i4 + 7;
                    AFInAppEventType = i7 % 128;
                    int i8 = i7 % 2;
                } else {
                    str = aFh1rSDK.areAllFieldsValid;
                }
                aFLogger.i(aFg1cSDK, sb.append(str).toString(), true);
            }
            component4(context);
            int iIntValue = ((Integer) getMonetizationNetwork(new Object[]{revenue, Boolean.valueOf(mediationNetwork)}, -1175980247, 1175980268, (int) System.currentTimeMillis())).intValue();
            int currencyIso4217Code = getCurrencyIso4217Code(revenue, aFh1rSDK.areAllFieldsValid != null);
            if (mediationNetwork) {
                int i9 = AFInAppEventType;
                int i10 = i9 + 69;
                AFInAppEventParameterName = i10 % 128;
                int i11 = i10 % 2;
                if (iIntValue == 1) {
                    int i12 = i9 + 61;
                    AFInAppEventParameterName = i12 % 128;
                    int i13 = i12 % 2;
                    AppsFlyerProperties.getInstance().getCurrencyIso4217Code = true;
                }
            }
            aFg1qSDKComponent3.getRevenue(map, iIntValue, currencyIso4217Code);
            return map;
        } catch (Throwable th) {
            AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "Error while preparing to send event", th, true, true, true);
            return map;
        }
    }

    private static void component4(Context context) {
        List listAsList;
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 5;
        AFInAppEventType = i2 % 128;
        try {
            if (i2 % 2 == 0) {
                listAsList = Arrays.asList(context.getPackageManager().getPackageInfo(context.getPackageName(), 13800).requestedPermissions);
                if (!listAsList.contains("android.permission.INTERNET")) {
                    AFLogger.INSTANCE.w(AFg1cSDK.GENERAL, "Permission android.permission.INTERNET is missing in the AndroidManifest.xml");
                }
            } else {
                listAsList = Arrays.asList(context.getPackageManager().getPackageInfo(context.getPackageName(), 4096).requestedPermissions);
                if (!listAsList.contains("android.permission.INTERNET")) {
                    AFLogger.INSTANCE.w(AFg1cSDK.GENERAL, "Permission android.permission.INTERNET is missing in the AndroidManifest.xml");
                }
            }
            if (!listAsList.contains("android.permission.ACCESS_NETWORK_STATE")) {
                int i3 = AFInAppEventType + 23;
                AFInAppEventParameterName = i3 % 128;
                if (i3 % 2 == 0) {
                    AFLogger.INSTANCE.w(AFg1cSDK.GENERAL, "Permission android.permission.ACCESS_NETWORK_STATE is missing in the AndroidManifest.xml");
                } else {
                    AFLogger.INSTANCE.w(AFg1cSDK.GENERAL, "Permission android.permission.ACCESS_NETWORK_STATE is missing in the AndroidManifest.xml");
                    Object obj = null;
                    obj.hashCode();
                    throw null;
                }
            }
            if (Build.VERSION.SDK_INT > 32 && !listAsList.contains("com.google.android.gms.permission.AD_ID")) {
                AFLogger.INSTANCE.w(AFg1cSDK.GENERAL, "Permission com.google.android.gms.permission.AD_ID is missing in the AndroidManifest.xml");
                int i4 = AFInAppEventParameterName + 71;
                AFInAppEventType = i4 % 128;
                int i5 = i4 % 2;
            }
            int i6 = AFInAppEventType + 125;
            AFInAppEventParameterName = i6 % 128;
            int i7 = i6 % 2;
        } catch (Exception e) {
            AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "Exception while validation permissions. ", e);
        }
    }

    public static Map<String, Object> getRevenue(Map<String, Object> map) {
        Map<String, Object> map2;
        int i = 2 % 2;
        Object obj = null;
        if (!map.containsKey(Constants.REFERRER_API_META)) {
            HashMap map3 = new HashMap();
            map.put(Constants.REFERRER_API_META, map3);
            map2 = map3;
        } else {
            int i2 = AFInAppEventType + 117;
            AFInAppEventParameterName = i2 % 128;
            if (i2 % 2 != 0) {
                obj.hashCode();
                throw null;
            }
            map2 = (Map) map.get(Constants.REFERRER_API_META);
        }
        int i3 = AFInAppEventParameterName + 45;
        AFInAppEventType = i3 % 128;
        if (i3 % 2 != 0) {
            return map2;
        }
        obj.hashCode();
        throw null;
    }

    private static String getMediationNetwork(Activity activity) {
        Intent intent;
        int i = 2 % 2;
        int i2 = AFInAppEventType + 37;
        AFInAppEventParameterName = i2 % 128;
        String string = null;
        if (i2 % 2 != 0) {
            string.hashCode();
            throw null;
        }
        if (activity != null && (intent = activity.getIntent()) != null) {
            int i3 = AFInAppEventParameterName + 99;
            AFInAppEventType = i3 % 128;
            int i4 = i3 % 2;
            try {
                Bundle extras = intent.getExtras();
                if (extras != null) {
                    int i5 = AFInAppEventType + 39;
                    AFInAppEventParameterName = i5 % 128;
                    if (i5 % 2 == 0) {
                        string = extras.getString("af");
                        if (string != null) {
                            AFLogger.INSTANCE.w(AFg1cSDK.ENGAGEMENT, "Push Notification received af payload = ".concat(String.valueOf(string)));
                            extras.remove("af");
                            activity.setIntent(intent.putExtras(extras));
                            int i6 = AFInAppEventParameterName + 29;
                            AFInAppEventType = i6 % 128;
                            if (i6 % 2 == 0) {
                                int i7 = 2 % 5;
                            }
                        }
                    } else {
                        String string2 = extras.getString("af");
                        try {
                            throw null;
                        } catch (Throwable th) {
                            string = string2;
                            th = th;
                            AFLogger.INSTANCE.e(AFg1cSDK.ENGAGEMENT, th.getMessage(), th);
                            return string;
                        }
                    }
                }
                return string;
            } catch (Throwable th2) {
                th = th2;
            }
        }
        return string;
    }

    private static /* synthetic */ Object component1(Object[] objArr) {
        Context context = (Context) objArr[0];
        int i = 2 % 2;
        int i2 = AFInAppEventType + 105;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        try {
            if (GoogleApiAvailability.getInstance().isGooglePlayServicesAvailable(context) == 0) {
                int i4 = AFInAppEventParameterName + 35;
                AFInAppEventType = i4 % 128;
                return i4 % 2 != 0;
            }
        } catch (Throwable th) {
            AFLogger.afErrorLog("WARNING:  Google play services is unavailable. ", th);
        }
        try {
            context.getPackageManager().getPackageInfo("com.google.android.gms", 0);
            return true;
        } catch (PackageManager.NameNotFoundException e) {
            AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "WARNING:  Google Play Services is unavailable. ", e);
            return false;
        }
    }

    private String getRevenue(Context context, String str) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 15;
        int i3 = i2 % 128;
        AFInAppEventParameterName = i3;
        int i4 = i2 % 2;
        if (context == null) {
            int i5 = i3 + 7;
            AFInAppEventType = i5 % 128;
            int i6 = i5 % 2;
            return null;
        }
        getMediationNetwork(context);
        String currencyIso4217Code = AFAdRevenueData().getRevenue().getCurrencyIso4217Code(str);
        int i7 = AFInAppEventType + 65;
        AFInAppEventParameterName = i7 % 128;
        if (i7 % 2 != 0) {
            int i8 = 41 / 0;
        }
        return currencyIso4217Code;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setPreinstallAttribution(String str, String str2, String str3) {
        int i = 2 % 2;
        AFLogger.afDebugLog("setPreinstallAttribution API called");
        JSONObject jSONObject = new JSONObject();
        try {
            if (str != null) {
                int i2 = AFInAppEventType + 3;
                AFInAppEventParameterName = i2 % 128;
                if (i2 % 2 != 0) {
                    jSONObject.put("pid", str);
                    int i3 = 70 / 0;
                } else {
                    jSONObject.put("pid", str);
                }
            }
            if (str2 != null) {
                jSONObject.put("c", str2);
            }
            if (str3 != null) {
                jSONObject.put("af_siteid", str3);
            }
        } catch (JSONException e) {
            AFLogger.afErrorLog(e.getMessage(), e);
        }
        if (jSONObject.has("pid")) {
            int i4 = AFInAppEventParameterName + 85;
            AFInAppEventType = i4 % 128;
            int i5 = i4 % 2;
            getMonetizationNetwork(new Object[]{"preInstallName", jSONObject.toString()}, -692563571, 692563575, (int) System.currentTimeMillis());
            return;
        }
        AFLogger.afWarnLog("Cannot set preinstall attribution data without a media source");
        int i6 = AFInAppEventType + 5;
        AFInAppEventParameterName = i6 % 128;
        if (i6 % 2 != 0) {
            int i7 = 19 / 0;
        }
    }

    private static /* synthetic */ Object AFAdRevenueData(Object[] objArr) {
        String str = (String) objArr[0];
        int i = 2 % 2;
        Object obj = null;
        try {
            if (!new JSONObject(str).has("pid")) {
                AFLogger.afWarnLog("Cannot set preinstall attribution data without a media source");
                int i2 = AFInAppEventType + 125;
                AFInAppEventParameterName = i2 % 128;
                if (i2 % 2 == 0) {
                    return null;
                }
                obj.hashCode();
                throw null;
            }
            int i3 = AFInAppEventParameterName + 107;
            AFInAppEventType = i3 % 128;
            int i4 = i3 % 2;
            getMonetizationNetwork(new Object[]{"preInstallName", str}, -692563571, 692563575, (int) System.currentTimeMillis());
            return null;
        } catch (JSONException e) {
            AFLogger.afErrorLog("Error parsing JSON for preinstall", e);
            return null;
        }
    }

    final void component4() {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 123;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        if (!AFe1bSDK.component3()) {
            AFc1dSDK aFc1dSDKAFAdRevenueData = AFAdRevenueData();
            AFe1lSDK aFe1lSDKCopydefault = aFc1dSDKAFAdRevenueData.copydefault();
            aFe1lSDKCopydefault.getRevenue.execute(aFe1lSDKCopydefault.new AnonymousClass5(new AFe1bSDK(aFc1dSDKAFAdRevenueData)));
            return;
        }
        int i4 = AFInAppEventType + 93;
        AFInAppEventParameterName = i4 % 128;
        if (i4 % 2 != 0) {
            int i5 = 25 / 0;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final boolean isPreInstalledApp(Context context) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 77;
        AFInAppEventType = i2 % 128;
        if (i2 % 2 != 0) {
            getMediationNetwork(context);
            AFAdRevenueData().getRevenue();
            return AFc1pSDK.AFAdRevenueData(context);
        }
        getMediationNetwork(context);
        AFAdRevenueData().getRevenue();
        AFc1pSDK.AFAdRevenueData(context);
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    public static String getMonetizationNetwork(AFc1qSDK aFc1qSDK, String str) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 99;
        AFInAppEventParameterName = i2 % 128;
        if (i2 % 2 == 0) {
            String strAFAdRevenueData = aFc1qSDK.AFAdRevenueData("CACHED_CHANNEL", (String) null);
            if (strAFAdRevenueData != null) {
                return strAFAdRevenueData;
            }
            aFc1qSDK.getMediationNetwork("CACHED_CHANNEL", str);
            int i3 = AFInAppEventParameterName + 103;
            AFInAppEventType = i3 % 128;
            int i4 = i3 % 2;
            return str;
        }
        aFc1qSDK.AFAdRevenueData("CACHED_CHANNEL", (String) null);
        throw null;
    }

    public static synchronized SharedPreferences c_(Context context) {
        SharedPreferences sharedPreferences;
        int i = 2 % 2;
        int i2 = AFInAppEventType + 63;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        if (((AFa1tSDK) getMonetizationNetwork(new Object[0], -631580017, 631580017, (int) System.currentTimeMillis())).hashCode == null) {
            StrictMode.ThreadPolicy threadPolicyAllowThreadDiskReads = StrictMode.allowThreadDiskReads();
            try {
                ((AFa1tSDK) getMonetizationNetwork(new Object[0], -631580017, 631580017, (int) System.currentTimeMillis())).hashCode = context.getApplicationContext().getSharedPreferences("appsflyer-data", 0);
                StrictMode.setThreadPolicy(threadPolicyAllowThreadDiskReads);
                int i4 = AFInAppEventType + 35;
                AFInAppEventParameterName = i4 % 128;
                int i5 = i4 % 2;
                int i6 = 2 % 2;
            } catch (Throwable th) {
                StrictMode.setThreadPolicy(threadPolicyAllowThreadDiskReads);
                throw th;
            }
        }
        sharedPreferences = ((AFa1tSDK) getMonetizationNetwork(new Object[0], -631580017, 631580017, (int) System.currentTimeMillis())).hashCode;
        int i7 = AFInAppEventType + 103;
        AFInAppEventParameterName = i7 % 128;
        int i8 = i7 % 2;
        return sharedPreferences;
    }

    public final AFc1qSDK getRevenue(Context context) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 11;
        AFInAppEventType = i2 % 128;
        Object obj = null;
        if (i2 % 2 != 0) {
            getMediationNetwork(context);
            AFc1qSDK aFc1qSDKComponent2 = AFAdRevenueData().component2();
            int i3 = AFInAppEventParameterName + 121;
            AFInAppEventType = i3 % 128;
            if (i3 % 2 != 0) {
                return aFc1qSDKComponent2;
            }
            obj.hashCode();
            throw null;
        }
        getMediationNetwork(context);
        AFAdRevenueData().component2();
        obj.hashCode();
        throw null;
    }

    private static int getCurrencyIso4217Code(AFc1qSDK aFc1qSDK, boolean z) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 125;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        int monetizationNetwork = getMonetizationNetwork(aFc1qSDK, "appsFlyerInAppEventCount", z);
        int i4 = AFInAppEventParameterName + 123;
        AFInAppEventType = i4 % 128;
        if (i4 % 2 != 0) {
            return monetizationNetwork;
        }
        throw null;
    }

    private static int getMonetizationNetwork(AFc1qSDK aFc1qSDK, String str, boolean z) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 35;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        int iAFAdRevenueData = aFc1qSDK.AFAdRevenueData(str, 0);
        if (z) {
            iAFAdRevenueData++;
            aFc1qSDK.getMediationNetwork(str, iAFAdRevenueData);
        }
        int i4 = AFInAppEventParameterName + 61;
        AFInAppEventType = i4 % 128;
        if (i4 % 2 != 0) {
            return iAFAdRevenueData;
        }
        throw null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x003a, code lost:
    
        if ((r5 % 2) != 0) goto L12;
     */
    /* JADX WARN: Code restructure failed: missing block: B:11:0x003c, code lost:
    
        return null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:12:0x003d, code lost:
    
        r0.hashCode();
     */
    /* JADX WARN: Code restructure failed: missing block: B:13:0x0040, code lost:
    
        throw null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x0041, code lost:
    
        getMediationNetwork(r5);
     */
    /* JADX WARN: Code restructure failed: missing block: B:15:0x0052, code lost:
    
        return com.appsflyer.internal.AFb1iSDK.getRevenue(AFAdRevenueData().getRevenue().getMonetizationNetwork);
     */
    /* JADX WARN: Code restructure failed: missing block: B:5:0x001e, code lost:
    
        if (r5 == null) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x002e, code lost:
    
        if (r5 == null) goto L9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:9:0x0030, code lost:
    
        r5 = com.appsflyer.internal.AFa1tSDK.AFInAppEventType + 69;
        com.appsflyer.internal.AFa1tSDK.AFInAppEventParameterName = r5 % 128;
        r0 = null;
     */
    @Override // com.appsflyer.AppsFlyerLib
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.lang.String getAppsFlyerUID(android.content.Context r5) {
        /*
            r4 = this;
            r0 = 2
            int r1 = r0 % r0
            int r1 = com.appsflyer.internal.AFa1tSDK.AFInAppEventParameterName
            int r1 = r1 + 103
            int r2 = r1 % 128
            com.appsflyer.internal.AFa1tSDK.AFInAppEventType = r2
            int r1 = r1 % r0
            r2 = 0
            java.lang.String r3 = "getAppsFlyerUID"
            if (r1 != 0) goto L21
            com.appsflyer.internal.AFc1dSDK r1 = r4.AFAdRevenueData()
            com.appsflyer.internal.AFd1pSDK r1 = r1.copy()
            java.lang.String[] r2 = new java.lang.String[r2]
            r1.getMediationNetwork(r3, r2)
            if (r5 != 0) goto L41
            goto L30
        L21:
            com.appsflyer.internal.AFc1dSDK r1 = r4.AFAdRevenueData()
            com.appsflyer.internal.AFd1pSDK r1 = r1.copy()
            java.lang.String[] r2 = new java.lang.String[r2]
            r1.getMediationNetwork(r3, r2)
            if (r5 != 0) goto L41
        L30:
            int r5 = com.appsflyer.internal.AFa1tSDK.AFInAppEventType
            int r5 = r5 + 69
            int r1 = r5 % 128
            com.appsflyer.internal.AFa1tSDK.AFInAppEventParameterName = r1
            int r5 = r5 % r0
            r0 = 0
            if (r5 != 0) goto L3d
            return r0
        L3d:
            r0.hashCode()
            throw r0
        L41:
            r4.getMediationNetwork(r5)
            com.appsflyer.internal.AFc1dSDK r5 = r4.AFAdRevenueData()
            com.appsflyer.internal.AFc1pSDK r5 = r5.getRevenue()
            com.appsflyer.internal.AFc1qSDK r5 = r5.getMonetizationNetwork
            java.lang.String r5 = com.appsflyer.internal.AFb1iSDK.getRevenue(r5)
            return r5
        */
        throw new UnsupportedOperationException("Method not decompiled: com.appsflyer.internal.AFa1tSDK.getAppsFlyerUID(android.content.Context):java.lang.String");
    }

    /* JADX WARN: Code duplicated, block: B:19:0x00cd  */
    /* JADX WARN: Code duplicated, block: B:21:0x00d1  */
    /* JADX WARN: Code duplicated, block: B:23:0x00e1  */
    private static /* synthetic */ Object getRevenue(Object[] objArr) {
        AppsFlyerInAppPurchaseValidatorListener appsFlyerInAppPurchaseValidatorListener;
        int i;
        AFa1tSDK aFa1tSDK = (AFa1tSDK) objArr[0];
        Context context = (Context) objArr[1];
        String str = (String) objArr[2];
        String str2 = (String) objArr[3];
        String str3 = (String) objArr[4];
        String str4 = (String) objArr[5];
        String str5 = (String) objArr[6];
        Map map = (Map) objArr[7];
        int i2 = 2 % 2;
        int i3 = AFInAppEventType + 117;
        AFInAppEventParameterName = i3 % 128;
        int i4 = i3 % 2;
        AFd1pSDK aFd1pSDKCopy = aFa1tSDK.AFAdRevenueData().copy();
        String[] strArr = new String[6];
        strArr[0] = str;
        strArr[1] = str2;
        strArr[2] = str3;
        strArr[3] = str4;
        strArr[4] = str5;
        strArr[5] = map == null ? "" : map.toString();
        aFd1pSDKCopy.getMediationNetwork("validateAndTrackInAppPurchase", strArr);
        if (!aFa1tSDK.AFAdRevenueData().registerClient().AFAdRevenueData()) {
            AFLogger.INSTANCE.i(AFg1cSDK.PURCHASE_VALIDATION, new StringBuilder("Validate in app called with parameters: ").append(str3).append(" ").append(str4).append(" ").append(str5).toString());
        }
        if (str == null || str4 == null) {
            appsFlyerInAppPurchaseValidatorListener = AFAdRevenueData;
            if (appsFlyerInAppPurchaseValidatorListener != null) {
                appsFlyerInAppPurchaseValidatorListener.onValidateInAppFailure("Please provide purchase parameters");
                i = AFInAppEventType + 91;
                AFInAppEventParameterName = i % 128;
                if (i % 2 != 0) {
                    int i5 = 74 / 0;
                }
            }
        } else {
            int i6 = AFInAppEventParameterName;
            int i7 = i6 + 105;
            AFInAppEventType = i7 % 128;
            int i8 = i7 % 2;
            if (str2 != null) {
                int i9 = i6 + 39;
                AFInAppEventType = i9 % 128;
                int i10 = i9 % 2;
                if (str5 == null || str3 == null) {
                    appsFlyerInAppPurchaseValidatorListener = AFAdRevenueData;
                    if (appsFlyerInAppPurchaseValidatorListener != null) {
                        appsFlyerInAppPurchaseValidatorListener.onValidateInAppFailure("Please provide purchase parameters");
                        i = AFInAppEventType + 91;
                        AFInAppEventParameterName = i % 128;
                        if (i % 2 != 0) {
                            int i11 = 74 / 0;
                        }
                    }
                } else {
                    new Thread(new com.appsflyer.internal.AFa1ySDK(context.getApplicationContext(), aFa1tSDK.AFAdRevenueData().registerClient().getMediationNetwork(), str, str2, str3, str4, str5, map)).start();
                }
            } else {
                appsFlyerInAppPurchaseValidatorListener = AFAdRevenueData;
                if (appsFlyerInAppPurchaseValidatorListener != null) {
                    appsFlyerInAppPurchaseValidatorListener.onValidateInAppFailure("Please provide purchase parameters");
                    i = AFInAppEventType + 91;
                    AFInAppEventParameterName = i % 128;
                    if (i % 2 != 0) {
                        int i12 = 74 / 0;
                    }
                }
            }
        }
        return null;
    }

    private static /* synthetic */ Object equals(Object[] objArr) {
        AFa1tSDK aFa1tSDK = (AFa1tSDK) objArr[0];
        int i = 2 % 2;
        int i2 = AFInAppEventType + 115;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        boolean zAFAdRevenueData = aFa1tSDK.AFAdRevenueData().registerClient().AFAdRevenueData();
        int i4 = AFInAppEventType + 9;
        AFInAppEventParameterName = i4 % 128;
        if (i4 % 2 == 0) {
            return Boolean.valueOf(zAFAdRevenueData);
        }
        int i5 = 9 / 0;
        return Boolean.valueOf(zAFAdRevenueData);
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setLogLevel(AFLogger.LogLevel logLevel) {
        boolean z;
        int i = 2 % 2;
        if (logLevel.getLevel() > AFLogger.LogLevel.NONE.getLevel()) {
            z = true;
        } else {
            int i2 = AFInAppEventParameterName + 51;
            AFInAppEventType = i2 % 128;
            int i3 = i2 % 2;
            z = false;
        }
        AFAdRevenueData().copy().getMediationNetwork("log", String.valueOf(z));
        AppsFlyerProperties.getInstance().set("logLevel", logLevel.getLevel());
        if (z) {
            AFAdRevenueData().v().component4();
            return;
        }
        int i4 = AFInAppEventParameterName + 121;
        AFInAppEventType = i4 % 128;
        if (i4 % 2 != 0) {
            AFAdRevenueData().v().getMonetizationNetwork();
            return;
        }
        AFAdRevenueData().v().getMonetizationNetwork();
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setHost(String str, String str2) {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 13;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        if (AFk1ySDK.getCurrencyIso4217Code(str2)) {
            AFLogger.afWarnLog("hostname was empty or null - call for setHost is skipped");
            return;
        }
        int i4 = AFInAppEventType + 27;
        AFInAppEventParameterName = i4 % 128;
        if (i4 % 2 != 0) {
            Object obj = null;
            obj.hashCode();
            throw null;
        }
        AFe1zSDK.getMediationNetwork(new AFe1vSDK(str != null ? str.trim() : "", str2.trim()));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final String getHostName() {
        int i = 2 % 2;
        int i2 = AFInAppEventParameterName + 21;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
        String mediationNetwork = AFAdRevenueData().AFKeystoreWrapper().getMediationNetwork();
        int i4 = AFInAppEventParameterName + 71;
        AFInAppEventType = i4 % 128;
        int i5 = i4 % 2;
        return mediationNetwork;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final String getHostPrefix() {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 3;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        String currencyIso4217Code = AFAdRevenueData().AFKeystoreWrapper().getCurrencyIso4217Code();
        int i4 = AFInAppEventParameterName + 67;
        AFInAppEventType = i4 % 128;
        if (i4 % 2 != 0) {
            return currencyIso4217Code;
        }
        throw null;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setMinTimeBetweenSessions(int i) {
        int i2 = 2 % 2;
        int i3 = AFInAppEventParameterName + 5;
        AFInAppEventType = i3 % 128;
        if (i3 % 2 == 0) {
            this.component3 = TimeUnit.SECONDS.toMillis(i);
            int i4 = 15 / 0;
        } else {
            this.component3 = TimeUnit.SECONDS.toMillis(i);
        }
    }

    private AFj1qSDK[] component3() {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 121;
        AFInAppEventParameterName = i2 % 128;
        Object obj = null;
        if (i2 % 2 != 0) {
            AFAdRevenueData().AFLogger().getRevenue();
            obj.hashCode();
            throw null;
        }
        AFj1qSDK[] revenue = AFAdRevenueData().AFLogger().getRevenue();
        int i3 = AFInAppEventParameterName + 65;
        AFInAppEventType = i3 % 128;
        if (i3 % 2 != 0) {
            return revenue;
        }
        throw null;
    }

    class AFa1ySDK implements Runnable {
        private final AFh1rSDK getCurrencyIso4217Code;

        AFa1ySDK(AFh1rSDK aFh1rSDK) {
            this.getCurrencyIso4217Code = aFh1rSDK;
        }

        @Override // java.lang.Runnable
        public final void run() {
            AFa1tSDK aFa1tSDK = AFa1tSDK.this;
            AFa1tSDK.getMonetizationNetwork(new Object[]{aFa1tSDK, this.getCurrencyIso4217Code}, 974724333, -974724320, System.identityHashCode(aFa1tSDK));
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setPluginInfo(PluginInfo pluginInfo) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 71;
        AFInAppEventParameterName = i2 % 128;
        if (i2 % 2 != 0) {
            Objects.requireNonNull(pluginInfo);
            AFAdRevenueData().unregisterClient().AFAdRevenueData(pluginInfo);
            int i3 = 39 / 0;
        } else {
            Objects.requireNonNull(pluginInfo);
            AFAdRevenueData().unregisterClient().AFAdRevenueData(pluginInfo);
        }
        int i4 = AFInAppEventParameterName + 95;
        AFInAppEventType = i4 % 128;
        if (i4 % 2 == 0) {
            int i5 = 38 / 0;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setConsentData(AppsFlyerConsent appsFlyerConsent) {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 77;
        AFInAppEventParameterName = i2 % 128;
        int i3 = i2 % 2;
        Objects.requireNonNull(appsFlyerConsent);
        AFAdRevenueData().afInfoLog().component2 = appsFlyerConsent;
        int i4 = AFInAppEventParameterName + 45;
        AFInAppEventType = i4 % 128;
        int i5 = i4 % 2;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void validateAndLogInAppPurchase(AFPurchaseDetails aFPurchaseDetails, Map<String, String> map, AppsFlyerInAppPurchaseValidationCallback appsFlyerInAppPurchaseValidationCallback) {
        int i = 2 % 2;
        AFe1lSDK aFe1lSDKCopydefault = this.copy.copydefault();
        aFe1lSDKCopydefault.getRevenue.execute(aFe1lSDKCopydefault.new AnonymousClass5(new AFe1fSDK(this.copy, AppsFlyerProperties.getInstance(), aFPurchaseDetails, map, appsFlyerInAppPurchaseValidationCallback)));
        int i2 = AFInAppEventParameterName + 65;
        AFInAppEventType = i2 % 128;
        int i3 = i2 % 2;
    }

    private static void AFAdRevenueData(String str) {
        int i = 2 % 2;
        AFLogger.INSTANCE.w(AFg1cSDK.SDK_LIFECYCLE, new StringBuilder("ERROR: AppsFlyer SDK is not initialized! The API call '").append(str).append("()' must be called after the 'init(String, AppsFlyerConversionListener)' API method, which should be called on the Application's onCreate.").toString());
        int i2 = AFInAppEventType + 115;
        AFInAppEventParameterName = i2 % 128;
        if (i2 % 2 == 0) {
            return;
        }
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    private static void copy() {
        int i = 2 % 2;
        int i2 = AFInAppEventType + 55;
        AFInAppEventParameterName = i2 % 128;
        if (i2 % 2 == 0) {
            AFLogger.INSTANCE.w(AFg1cSDK.SDK_LIFECYCLE, "ERROR: AppsFlyer SDK is not initialized! You must provide AppsFlyer Dev-Key either in the 'init' API method (should be called on Application's onCreate),or in the start() API (should be called on Activity's onCreate).");
            return;
        }
        AFLogger.INSTANCE.w(AFg1cSDK.SDK_LIFECYCLE, "ERROR: AppsFlyer SDK is not initialized! You must provide AppsFlyer Dev-Key either in the 'init' API method (should be called on Application's onCreate),or in the start() API (should be called on Activity's onCreate).");
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setInstallId(String str) {
        int i = 2 % 2;
        AFAdRevenueData().copy().getMediationNetwork("setInstallId", new String[0]);
        if (!this.toString) {
            AFLogger.INSTANCE.d(AFg1cSDK.GENERAL, "AppsFlyerLib.init() method should be called first");
            return;
        }
        if (!AFAdRevenueData().getRevenue().getMonetizationNetwork("APPSFLYER_ALLOW_CUSTOM_INSTALL_ID", false)) {
            AFLogger.INSTANCE.d(AFg1cSDK.GENERAL, "APPSFLYER_ALLOW_CUSTOM_INSTALL_ID Manifest flag should be set to true first");
            return;
        }
        if (str == null) {
            AFLogger.INSTANCE.d(AFg1cSDK.GENERAL, "AppsFlyer installId can't be null");
            int i2 = AFInAppEventType + 95;
            AFInAppEventParameterName = i2 % 128;
            int i3 = i2 % 2;
            return;
        }
        AFb1iSDK.getCurrencyIso4217Code(str, AFAdRevenueData().component2());
        int i4 = AFInAppEventType + 25;
        AFInAppEventParameterName = i4 % 128;
        if (i4 % 2 != 0) {
            throw null;
        }
    }

    class AFa1vSDK implements AFe1qSDK {
        @Override // com.appsflyer.internal.AFe1qSDK
        public final void getMediationNetwork(AFe1sSDK<?> aFe1sSDK) {
        }

        AFa1vSDK() {
        }

        @Override // com.appsflyer.internal.AFe1qSDK
        public final void getMonetizationNetwork(AFe1sSDK<?> aFe1sSDK) {
            if (aFe1sSDK instanceof AFf1uSDK) {
                AFa1tSDK.this.AFAdRevenueData().areAllFieldsValid().getCurrencyIso4217Code(((AFf1rSDK) aFe1sSDK).component2.component2);
            }
        }

        @Override // com.appsflyer.internal.AFe1qSDK
        public final void getCurrencyIso4217Code(AFe1sSDK<?> aFe1sSDK, AFe1rSDK aFe1rSDK) {
            JSONObject revenue;
            AFf1aSDK revenue2;
            if (aFe1sSDK instanceof AFf1rSDK) {
                AFf1rSDK aFf1rSDK = (AFf1rSDK) aFe1sSDK;
                boolean z = aFe1sSDK instanceof AFf1uSDK;
                if (z && getCurrencyIso4217Code()) {
                    AFf1uSDK aFf1uSDK = (AFf1uSDK) aFe1sSDK;
                    if (aFf1uSDK.getMediationNetwork == AFe1rSDK.SUCCESS || aFf1uSDK.getRevenue == 1) {
                        AFg1rSDK aFg1rSDK = new AFg1rSDK(aFf1uSDK, AFa1tSDK.this.AFAdRevenueData().component2());
                        AFe1lSDK aFe1lSDKCopydefault = AFa1tSDK.this.AFAdRevenueData().copydefault();
                        aFe1lSDKCopydefault.getRevenue.execute(aFe1lSDKCopydefault.new AnonymousClass5(aFg1rSDK));
                    }
                }
                AFh1uSDK aFh1uSDKAfErrorLogForExcManagerOnly = AFa1tSDK.this.AFAdRevenueData().afErrorLogForExcManagerOnly();
                if (aFh1uSDKAfErrorLogForExcManagerOnly != null && z) {
                    aFh1uSDKAfErrorLogForExcManagerOnly.getRevenue((AFf1uSDK) aFe1sSDK, new Function0() { // from class: com.appsflyer.internal.AFa1tSDK$AFa1vSDK$$ExternalSyntheticLambda0
                        @Override // kotlin.jvm.functions.Function0
                        public final Object invoke() {
                            return this.f$0.getRevenue();
                        }
                    });
                }
                if (aFe1rSDK == AFe1rSDK.SUCCESS) {
                    AFa1tSDK aFa1tSDK = AFa1tSDK.this;
                    aFa1tSDK.getRevenue(aFa1tSDK.component1).getMediationNetwork("sentSuccessfully", "true");
                    if (!(aFe1sSDK instanceof AFf1tSDK) && (revenue2 = new AFg1ySDK(AFa1tSDK.this.component1).getRevenue()) != null && revenue2.getMediationNetwork) {
                        String str = revenue2.getRevenue;
                        AFLogger.INSTANCE.d(AFg1cSDK.UNINSTALL, "Resending Uninstall token to AF servers: ".concat(String.valueOf(str)));
                        AFc1dSDK aFc1dSDKAFAdRevenueData = ((AFa1tSDK) AFa1tSDK.getMonetizationNetwork(new Object[0], -631580017, 631580017, (int) System.currentTimeMillis())).AFAdRevenueData();
                        AFf1tSDK aFf1tSDK = new AFf1tSDK(str, aFc1dSDKAFAdRevenueData);
                        AFe1lSDK aFe1lSDKCopydefault2 = aFc1dSDKAFAdRevenueData.copydefault();
                        aFe1lSDKCopydefault2.getRevenue.execute(aFe1lSDKCopydefault2.new AnonymousClass5(aFf1tSDK));
                    }
                    ResponseNetwork responseNetwork = ((AFe1dSDK) aFf1rSDK).component1;
                    if (responseNetwork != null && (revenue = AFa1qSDK.getRevenue((String) responseNetwork.getBody())) != null) {
                        AFa1tSDK.this.component4 = revenue.optBoolean("send_background", false);
                    }
                    if (z) {
                        AFa1tSDK.this.getMediationNetwork = System.currentTimeMillis();
                        return;
                    }
                    return;
                }
                return;
            }
            if (!(aFe1sSDK instanceof AFg1rSDK) || aFe1rSDK == AFe1rSDK.SUCCESS) {
                return;
            }
            AFg1pSDK aFg1pSDK = new AFg1pSDK(AFa1tSDK.this.AFAdRevenueData());
            AFe1lSDK aFe1lSDKCopydefault3 = AFa1tSDK.this.AFAdRevenueData().copydefault();
            aFe1lSDKCopydefault3.getRevenue.execute(aFe1lSDKCopydefault3.new AnonymousClass5(aFg1pSDK));
        }

        /* JADX INFO: Access modifiers changed from: private */
        public /* synthetic */ Unit getRevenue() {
            AFa1tSDK aFa1tSDK = AFa1tSDK.this;
            AFa1tSDK.getMonetizationNetwork(new Object[]{aFa1tSDK, new AFh1kSDK()}, 974724333, -974724320, System.identityHashCode(aFa1tSDK));
            return Unit.INSTANCE;
        }

        private boolean getCurrencyIso4217Code() {
            return AFa1tSDK.this.getCurrencyIso4217Code != null;
        }
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void logEvent(Context context, String str, Map<String, Object> map, AppsFlyerRequestListener appsFlyerRequestListener) {
        HashMap map2 = map == null ? null : new HashMap(map);
        getMediationNetwork(context);
        AFh1fSDK aFh1fSDK = new AFh1fSDK();
        aFh1fSDK.areAllFieldsValid = str;
        aFh1fSDK.getCurrencyIso4217Code = appsFlyerRequestListener;
        if (map2 != null && map2.containsKey(AFInAppEventParameterName.TOUCH_OBJ)) {
            HashMap map3 = new HashMap();
            Object obj = map2.get(AFInAppEventParameterName.TOUCH_OBJ);
            if (obj instanceof MotionEvent) {
                MotionEvent motionEvent = (MotionEvent) obj;
                HashMap map4 = new HashMap();
                map4.put("x", Float.valueOf(motionEvent.getX()));
                map4.put("y", Float.valueOf(motionEvent.getY()));
                map3.put("loc", map4);
                map3.put("pf", Float.valueOf(motionEvent.getPressure()));
                map3.put("rad", Float.valueOf(motionEvent.getTouchMajor() / 2.0f));
            } else {
                map3.put("error", "Parsing failed due to invalid input in 'af_touch_obj'.");
                AFLogger.INSTANCE.w(AFg1cSDK.PREDICT, "Parsing failed due to invalid input in 'af_touch_obj'.", true);
            }
            Map<String, ?> mapSingletonMap = Collections.singletonMap("tch_data", map3);
            map2.remove(AFInAppEventParameterName.TOUCH_OBJ);
            aFh1fSDK.getMediationNetwork(mapSingletonMap);
        }
        aFh1fSDK.getMonetizationNetwork = map2;
        AFd1pSDK aFd1pSDKCopy = AFAdRevenueData().copy();
        String[] strArr = new String[2];
        strArr[0] = str;
        strArr[1] = new JSONObject(aFh1fSDK.getMonetizationNetwork == null ? new HashMap() : aFh1fSDK.getMonetizationNetwork).toString();
        aFd1pSDKCopy.getMediationNetwork("logEvent", strArr);
        if (str == null) {
            getCurrencyIso4217Code(context, AFh1xSDK.logEvent);
        }
        getMonetizationNetwork(aFh1fSDK, component1(context));
    }

    /* JADX WARN: Code duplicated, block: B:127:0x03fa  */
    /* JADX WARN: Code duplicated, block: B:132:0x0411  */
    public static /* synthetic */ Object getMonetizationNetwork(Object[] objArr, int i, int i2, int i3) {
        Uri data;
        boolean z;
        String strConcat;
        int i4 = (i * (-464)) + (i2 * (-929));
        int i5 = ~i;
        int i6 = i2 | i3;
        int i7 = i4 + (((~i6) | i5) * (-465)) + ((i2 | (~(i3 | i5))) * 930) + ((i5 | i6) * 465);
        int i8 = 0;
        switch (i7) {
            case 1:
                return getMonetizationNetwork(objArr);
            case 2:
                return AFAdRevenueData(objArr);
            case 3:
                return getRevenue(objArr);
            case 4:
                return getCurrencyIso4217Code(objArr);
            case 5:
                return getMediationNetwork(objArr);
            case 6:
                AFa1tSDK aFa1tSDK = (AFa1tSDK) objArr[0];
                Context context = (Context) objArr[1];
                Intent intent = (Intent) objArr[2];
                int i9 = 2 % 2;
                aFa1tSDK.getMediationNetwork(context);
                AFa1oSDK aFa1oSDKD = aFa1tSDK.AFAdRevenueData().d();
                AFc1qSDK aFc1qSDKComponent2 = aFa1tSDK.AFAdRevenueData().component2();
                if (intent != null) {
                    int i10 = AFInAppEventParameterName + 1;
                    AFInAppEventType = i10 % 128;
                    int i11 = i10 % 2;
                    if ("android.intent.action.VIEW".equals(intent.getAction())) {
                        data = intent.getData();
                    } else {
                        data = null;
                    }
                } else {
                    data = null;
                }
                if (data != null) {
                    int i12 = AFInAppEventType + 19;
                    AFInAppEventParameterName = i12 % 128;
                    int i13 = i12 % 2;
                    z = data.toString().isEmpty() ? false : true;
                }
                if (aFc1qSDKComponent2.getMediationNetwork("ddl_sent", false)) {
                    int i14 = AFInAppEventParameterName + 105;
                    AFInAppEventType = i14 % 128;
                    int i15 = i14 % 2;
                    if (!z) {
                        aFa1oSDKD.AFAdRevenueData("No direct deep link", null);
                        return null;
                    }
                }
                aFa1oSDKD.e_(AFa1jSDK.getCurrencyIso4217Code(aFa1oSDKD.areAllFieldsValid.afVerboseLog()), intent, context);
                return null;
            case 7:
                return component4(objArr);
            case 8:
                return component1(objArr);
            case 9:
                return areAllFieldsValid(objArr);
            case 10:
                return component2(objArr);
            case 11:
                AFa1tSDK aFa1tSDK2 = (AFa1tSDK) objArr[0];
                Context context2 = (Context) objArr[1];
                int i16 = 2 % 2;
                int i17 = AFInAppEventParameterName + 95;
                AFInAppEventType = i17 % 128;
                int i18 = i17 % 2;
                aFa1tSDK2.getMediationNetwork(context2);
                String currencyIso4217Code = aFa1tSDK2.AFAdRevenueData().getRevenue().getCurrencyIso4217Code(context2);
                int i19 = AFInAppEventParameterName + 123;
                AFInAppEventType = i19 % 128;
                int i20 = i19 % 2;
                return currencyIso4217Code;
            case 12:
                return component3(objArr);
            case 13:
                AFa1tSDK aFa1tSDK3 = (AFa1tSDK) objArr[0];
                AFh1rSDK aFh1rSDK = (AFh1rSDK) objArr[1];
                int i21 = 2 % 2;
                Context context3 = aFa1tSDK3.AFAdRevenueData().AFInAppEventType().getMonetizationNetwork;
                if (context3 == null) {
                    int i22 = AFInAppEventParameterName + 125;
                    AFInAppEventType = i22 % 128;
                    int i23 = i22 % 2;
                    AFLogger.INSTANCE.d(AFg1cSDK.ATTRIBUTION, "sendWithEvent - got null context. skipping event/launch.", true);
                    int i24 = AFInAppEventType + 67;
                    AFInAppEventParameterName = i24 % 128;
                    int i25 = i24 % 2;
                    return null;
                }
                String mediationNetwork = aFa1tSDK3.AFAdRevenueData().registerClient().getMediationNetwork();
                AppsFlyerRequestListener appsFlyerRequestListener = aFh1rSDK.getCurrencyIso4217Code;
                if (mediationNetwork != null) {
                    int i26 = AFInAppEventParameterName + 49;
                    AFInAppEventType = i26 % 128;
                    int i27 = i26 % 2;
                    if (mediationNetwork.length() != 0) {
                        AFc1qSDK revenue = aFa1tSDK3.getRevenue(context3);
                        AppsFlyerProperties.getInstance().saveProperties(revenue);
                        if (!aFa1tSDK3.AFAdRevenueData().registerClient().AFAdRevenueData()) {
                            AFLogger.INSTANCE.i(AFg1cSDK.GENERAL, new StringBuilder("sendWithEvent from activity: ").append(context3.getClass().getName()).toString(), true);
                        }
                        boolean mediationNetwork2 = aFh1rSDK.getMediationNetwork();
                        Map<String, Object> mediationNetwork3 = aFa1tSDK3.getMediationNetwork(aFh1rSDK);
                        if (aFa1tSDK3.AFAdRevenueData().registerClient().AFAdRevenueData()) {
                            int i28 = AFInAppEventParameterName + 7;
                            AFInAppEventType = i28 % 128;
                            int i29 = i28 % 2;
                            AFLogger.INSTANCE.i(AFg1cSDK.GENERAL, "AppsFlyerLib.sendWithEvent");
                        }
                        int iIntValue = ((Integer) getMonetizationNetwork(new Object[]{revenue, false}, -1175980247, 1175980268, (int) System.currentTimeMillis())).intValue();
                        aFa1tSDK3.getCurrencyIso4217Code(mediationNetwork3);
                        AFa1uSDK aFa1uSDK = new AFa1uSDK(aFa1tSDK3.AFAdRevenueData(), aFh1rSDK.getMediationNetwork(mediationNetwork3).AFAdRevenueData(iIntValue), aFa1tSDK3.AFAdRevenueData().e().getMonetizationNetwork());
                        if (mediationNetwork2) {
                            AFj1qSDK[] aFj1qSDKArrComponent3 = aFa1tSDK3.component3();
                            int length = aFj1qSDKArrComponent3.length;
                            int i30 = 0;
                            while (i8 < length) {
                                AFj1qSDK aFj1qSDK = aFj1qSDKArrComponent3[i8];
                                if (aFj1qSDK.component4 == AFj1qSDK.AFa1ySDK.STARTED) {
                                    AFLogger.INSTANCE.d(AFg1cSDK.REFERRER, new StringBuilder("Failed to get ").append(aFj1qSDK.component2).append(" referrer, wait ...").toString());
                                    i30 = 1;
                                }
                                i8++;
                                int i31 = AFInAppEventType + 45;
                                AFInAppEventParameterName = i31 % 128;
                                int i32 = i31 % 2;
                            }
                            if (aFa1tSDK3.AFAdRevenueData().e().getCurrencyIso4217Code()) {
                                AFLogger.INSTANCE.d(AFg1cSDK.REFERRER, "fetching Facebook deferred AppLink data, wait ...");
                                i8 = 1;
                            } else {
                                i8 = i30;
                            }
                            if (aFa1tSDK3.AFAdRevenueData().registerClient().getMonetizationNetwork()) {
                                i8 = 1;
                            }
                        }
                        AFj1dSDK.getMediationNetwork(aFa1tSDK3.AFAdRevenueData().AFAdRevenueData(), aFa1uSDK, i8 != 0 ? 500L : 0L, TimeUnit.MILLISECONDS);
                        return null;
                    }
                }
                AFLogger.INSTANCE.i(AFg1cSDK.GENERAL, "AppsFlyer dev key is missing!!! Please use  AppsFlyerLib.getInstance().setAppsFlyerKey(...) to set it. ", true);
                AFLogger.INSTANCE.i(AFg1cSDK.GENERAL, "AppsFlyer will not track this event.", true);
                if (appsFlyerRequestListener != null) {
                    appsFlyerRequestListener.onError(41, "No dev key");
                }
                return null;
            case 14:
                return copydefault(objArr);
            case 15:
                return equals(objArr);
            case 16:
                return toString(objArr);
            case 17:
                return hashCode(objArr);
            case 18:
                return copy(objArr);
            case 19:
                AFa1tSDK aFa1tSDK4 = (AFa1tSDK) objArr[0];
                int i33 = 2 % 2;
                int i34 = AFInAppEventType + 85;
                AFInAppEventParameterName = i34 % 128;
                if (i34 % 2 != 0) {
                    aFa1tSDK4.AFAdRevenueData().afInfoLog().component1 = false;
                } else {
                    aFa1tSDK4.AFAdRevenueData().afInfoLog().component1 = true;
                }
                return null;
            case 20:
                AFa1tSDK aFa1tSDK5 = (AFa1tSDK) objArr[0];
                String str = (String) objArr[1];
                Map map = (Map) objArr[2];
                int i35 = 2 % 2;
                AFc1kSDK aFc1kSDKAfInfoLog = aFa1tSDK5.AFAdRevenueData().afInfoLog();
                if (aFc1kSDKAfInfoLog.getMonetizationNetwork == null) {
                    aFc1kSDKAfInfoLog.getMonetizationNetwork = new AFb1qSDK();
                }
                AFb1qSDK aFb1qSDK = aFc1kSDKAfInfoLog.getMonetizationNetwork;
                if (str != null) {
                    int i36 = AFInAppEventParameterName + 7;
                    AFInAppEventType = i36 % 128;
                    int i37 = i36 % 2;
                    if (!str.isEmpty()) {
                        if (map == null || map.isEmpty()) {
                            if (aFb1qSDK.getCurrencyIso4217Code.remove(str) == null) {
                                strConcat = "Partner data is missing or `null`";
                            } else {
                                strConcat = "Cleared partner data for ".concat(String.valueOf(str));
                                int i38 = AFInAppEventParameterName + 101;
                                AFInAppEventType = i38 % 128;
                                int i39 = i38 % 2;
                            }
                            AFLogger.afWarnLog(strConcat);
                            return null;
                        }
                        AFLogger.afDebugLog(new StringBuilder("Setting partner data for ").append(str).append(": ").append(map).toString());
                        int length2 = new JSONObject(map).toString().length();
                        if (length2 <= 1000) {
                            aFb1qSDK.getCurrencyIso4217Code.put(str, map);
                            aFb1qSDK.AFAdRevenueData.remove(str);
                            return null;
                        }
                        AFLogger.afWarnLog("Partner data 1000 characters limit exceeded");
                        HashMap map2 = new HashMap();
                        map2.put("error", "limit exceeded: ".concat(String.valueOf(length2)));
                        aFb1qSDK.AFAdRevenueData.put(str, map2);
                        return null;
                    }
                }
                AFLogger.afWarnLog("Partner ID is missing or `null`");
                return null;
            case 21:
                AFc1qSDK aFc1qSDK = (AFc1qSDK) objArr[0];
                boolean zBooleanValue = ((Boolean) objArr[1]).booleanValue();
                int i40 = 2 % 2;
                int i41 = AFInAppEventType + 71;
                AFInAppEventParameterName = i41 % 128;
                int i42 = i41 % 2;
                int monetizationNetwork = getMonetizationNetwork(aFc1qSDK, "appsFlyerCount", zBooleanValue);
                int i43 = AFInAppEventType + 115;
                AFInAppEventParameterName = i43 % 128;
                int i44 = i43 % 2;
                return Integer.valueOf(monetizationNetwork);
            case 22:
                return AFLogger(objArr);
            case 23:
                AFa1tSDK aFa1tSDK6 = (AFa1tSDK) objArr[0];
                int i45 = 2 % 2;
                int i46 = AFInAppEventParameterName + 47;
                AFInAppEventType = i46 % 128;
                if (i46 % 2 != 0 ? aFa1tSDK6.component2 > 0 : aFa1tSDK6.component2 > 0) {
                    long jCurrentTimeMillis = System.currentTimeMillis() - aFa1tSDK6.component2;
                    SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy/MM/dd HH:mm:ss.SSS Z", Locale.US);
                    String revenue2 = getRevenue(simpleDateFormat, aFa1tSDK6.component2);
                    String revenue3 = getRevenue(simpleDateFormat, aFa1tSDK6.getMediationNetwork);
                    if (jCurrentTimeMillis < aFa1tSDK6.component3 && !aFa1tSDK6.isStopped()) {
                        AFLogger.afInfoLog(String.format(Locale.US, "Last Launch attempt: %s;\nLast successful Launch event: %s;\nThis launch is blocked: %s ms < %s ms", revenue2, revenue3, Long.valueOf(jCurrentTimeMillis), Long.valueOf(aFa1tSDK6.component3)));
                        return true;
                    }
                    if (!aFa1tSDK6.isStopped()) {
                        AFLogger.afInfoLog(String.format(Locale.US, "Last Launch attempt: %s;\nLast successful Launch event: %s;\nSending launch (+%s ms)", revenue2, revenue3, Long.valueOf(jCurrentTimeMillis)));
                    }
                } else if (!aFa1tSDK6.isStopped()) {
                    AFLogger.afInfoLog("Sending first launch for this session!");
                    int i47 = AFInAppEventType + 23;
                    AFInAppEventParameterName = i47 % 128;
                    int i48 = i47 % 2;
                }
                return false;
            default:
                int i49 = 2 % 2;
                int i50 = AFInAppEventParameterName + 69;
                int i51 = i50 % 128;
                AFInAppEventType = i51;
                int i52 = i50 % 2;
                AFa1tSDK aFa1tSDK7 = areAllFieldsValid;
                int i53 = i51 + AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR_OVERLAY;
                AFInAppEventParameterName = i53 % 128;
                int i54 = i53 % 2;
                return aFa1tSDK7;
        }
    }

    static void areAllFieldsValid() {
        AFKeystoreWrapper = new int[]{1173848566, -581264425, 1049631762, -184971919, -1510845523, 293648529, -317712227, 1299495101, -345507000, 2098071530, -62356939, -1430410937, 823748430, 809610160, -1818352164, -849605125, 1727658104, 1621127117};
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void d_(Context context, Intent intent) {
        getMonetizationNetwork(new Object[]{this, context, intent}, 507699176, -507699170, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void disableAppSetId() {
        getMonetizationNetwork(new Object[]{this}, -2040336732, 2040336751, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    @Deprecated
    public final boolean isStopped() {
        return ((Boolean) getMonetizationNetwork(new Object[]{this}, -1621727139, 1621727154, System.identityHashCode(this))).booleanValue();
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void validateAndLogInAppPurchase(Context context, String str, String str2, String str3, String str4, String str5, Map<String, String> map) {
        getMonetizationNetwork(new Object[]{this, context, str, str2, str3, str4, str5, map}, 203099708, -203099705, System.identityHashCode(this));
    }

    public static int getMonetizationNetwork(AFc1qSDK aFc1qSDK, boolean z) {
        return ((Integer) getMonetizationNetwork(new Object[]{aFc1qSDK, Boolean.valueOf(z)}, -1175980247, 1175980268, (int) System.currentTimeMillis())).intValue();
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final String getAttributionId(Context context) {
        return (String) getMonetizationNetwork(new Object[]{this, context}, -1689317276, 1689317287, System.identityHashCode(this));
    }

    private static void getRevenue(String str) {
        getMonetizationNetwork(new Object[]{str}, 998031041, -998031039, (int) System.currentTimeMillis());
    }

    public static boolean getCurrencyIso4217Code(Context context) {
        return ((Boolean) getMonetizationNetwork(new Object[]{context}, -1675611583, 1675611591, (int) System.currentTimeMillis())).booleanValue();
    }

    final void getRevenue(AFh1rSDK aFh1rSDK) {
        getMonetizationNetwork(new Object[]{this, aFh1rSDK}, 974724333, -974724320, System.identityHashCode(this));
    }

    private boolean component1() {
        return ((Boolean) getMonetizationNetwork(new Object[]{this}, -1610644480, 1610644503, System.identityHashCode(this))).booleanValue();
    }

    private void getCurrencyIso4217Code(Context context, String str) {
        getMonetizationNetwork(new Object[]{this, context, str}, 1659672083, -1659672066, System.identityHashCode(this));
    }

    private void getCurrencyIso4217Code(Context context, String str, Map<String, Object> map) {
        getMonetizationNetwork(new Object[]{this, context, str, map}, 1732368696, -1732368678, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void start(Context context, String str, AppsFlyerRequestListener appsFlyerRequestListener) {
        getMonetizationNetwork(new Object[]{this, context, str, appsFlyerRequestListener}, -1542206359, 1542206364, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void start(Context context, String str) {
        getMonetizationNetwork(new Object[]{this, context, str}, -1758296594, 1758296610, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final AppsFlyerLib init(String str, AppsFlyerConversionListener appsFlyerConversionListener, Context context) {
        return (AppsFlyerLib) getMonetizationNetwork(new Object[]{this, str, appsFlyerConversionListener, context}, -235242605, 235242617, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setUserEmails(AppsFlyerProperties.EmailsCryptType emailsCryptType, String... strArr) {
        getMonetizationNetwork(new Object[]{this, emailsCryptType, strArr}, -363126917, 363126927, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setUserEmails(String... strArr) {
        getMonetizationNetwork(new Object[]{this, strArr}, 1505056603, -1505056581, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setAdditionalData(Map<String, Object> map) {
        getMonetizationNetwork(new Object[]{this, map}, -2145945282, 2145945283, System.identityHashCode(this));
    }

    private static void getCurrencyIso4217Code(String str, String str2) {
        getMonetizationNetwork(new Object[]{str, str2}, -692563571, 692563575, (int) System.currentTimeMillis());
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void onPause(Context context) {
        getMonetizationNetwork(new Object[]{this, context}, -1480636038, 1480636052, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setDisableAdvertisingIdentifiers(boolean z) {
        getMonetizationNetwork(new Object[]{this, Boolean.valueOf(z)}, 2015599714, -2015599705, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void setPartnerData(String str, Map<String, Object> map) {
        getMonetizationNetwork(new Object[]{this, str, map}, 841587779, -841587759, System.identityHashCode(this));
    }

    @Override // com.appsflyer.AppsFlyerLib
    public final void appendParametersToDeepLinkingURL(String str, Map<String, String> map) {
        getMonetizationNetwork(new Object[]{this, str, map}, 1307261109, -1307261102, System.identityHashCode(this));
    }

    public static AFa1tSDK getCurrencyIso4217Code() {
        return (AFa1tSDK) getMonetizationNetwork(new Object[0], -631580017, 631580017, (int) System.currentTimeMillis());
    }
}
