package com.appsflyer.internal;

import android.os.Build;
import com.appsflyer.AppsFlyerProperties;
import com.appsflyer.attribution.AppsFlyerRequestListener;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.collections.MapsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public abstract class AFe1gSDK extends AFe1dSDK<String> {
    private final AFe1mSDK component2;
    private final AFc1pSDK copy;
    private final AFc1qSDK copydefault;
    private final Map<String, Object> equals;
    private final AFg1qSDK hashCode;
    private final AFf1dSDK toString;

    public abstract AFd1nSDK<String> AFAdRevenueData(Map<String, Object> map, String str, String str2);

    protected String AFAdRevenueData(Map<String, Object> map) {
        Intrinsics.checkNotNullParameter(map, "");
        return null;
    }

    protected boolean component1() {
        return false;
    }

    @Override // com.appsflyer.internal.AFe1dSDK
    protected final AppsFlyerRequestListener component3() {
        return null;
    }

    @Override // com.appsflyer.internal.AFe1dSDK
    protected final boolean copydefault() {
        return true;
    }

    protected String getMonetizationNetwork(Map<String, Object> map) {
        Intrinsics.checkNotNullParameter(map, "");
        return null;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public AFe1gSDK(AFe1mSDK aFe1mSDK, AFe1mSDK[] aFe1mSDKArr, AFc1dSDK aFc1dSDK, String str, Map<String, ? extends Object> map) {
        super(aFe1mSDK, aFe1mSDKArr, aFc1dSDK, null);
        Intrinsics.checkNotNullParameter(aFe1mSDK, "");
        Intrinsics.checkNotNullParameter(aFe1mSDKArr, "");
        Intrinsics.checkNotNullParameter(aFc1dSDK, "");
        Intrinsics.checkNotNullParameter(map, "");
        this.component2 = aFe1mSDK;
        this.equals = map;
        AFc1pSDK revenue = aFc1dSDK.getRevenue();
        Intrinsics.checkNotNullExpressionValue(revenue, "");
        this.copy = revenue;
        AFc1qSDK aFc1qSDKComponent2 = aFc1dSDK.component2();
        Intrinsics.checkNotNullExpressionValue(aFc1qSDKComponent2, "");
        this.copydefault = aFc1qSDKComponent2;
        AFg1qSDK aFg1qSDKComponent3 = aFc1dSDK.component3();
        Intrinsics.checkNotNullExpressionValue(aFg1qSDKComponent3, "");
        this.hashCode = aFg1qSDKComponent3;
        AFf1dSDK aFf1dSDKAfErrorLog = aFc1dSDK.afErrorLog();
        Intrinsics.checkNotNullExpressionValue(aFf1dSDKAfErrorLog, "");
        this.toString = aFf1dSDKAfErrorLog;
    }

    protected void getMediationNetwork(Map<String, Object> map, String str) {
        Intrinsics.checkNotNullParameter(map, "");
        map.put("app_id", this.copy.getRevenue.getMonetizationNetwork.getPackageName());
        String currencyIso4217Code = AFc1pSDK.getCurrencyIso4217Code();
        if (currencyIso4217Code != null) {
            map.put("cuid", currencyIso4217Code);
        }
        AFc1pSDK aFc1pSDK = this.copy;
        map.put("app_version_name", AFj1iSDK.getMediationNetwork(aFc1pSDK.getRevenue.getMonetizationNetwork, aFc1pSDK.getRevenue.getMonetizationNetwork.getPackageName()));
        if (component1()) {
            map.put("event_timestamp", Long.valueOf(this.hashCode.AFAdRevenueData()));
        }
        if (str != null) {
            map.put("billing_lib_version", str);
        }
    }

    @Override // com.appsflyer.internal.AFe1dSDK
    protected final AFd1nSDK<String> getRevenue(String str) {
        AFd1cSDK aFd1cSDK;
        Intrinsics.checkNotNullParameter(str, "");
        Map<String, Object> mutableMap = MapsKt.toMutableMap(this.equals);
        String strAFAdRevenueData = AFAdRevenueData(mutableMap);
        String monetizationNetwork = getMonetizationNetwork(mutableMap);
        Map<String, Object> mutableMap2 = MapsKt.toMutableMap(mutableMap);
        getMediationNetwork(mutableMap2, strAFAdRevenueData);
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        String strAFAdRevenueData2 = this.copy.AFAdRevenueData();
        String str2 = strAFAdRevenueData2;
        if (str2 != null && !StringsKt.isBlank(str2)) {
            linkedHashMap.put("advertising_id", strAFAdRevenueData2);
        }
        AFb1mSDK mediationNetwork = AFb1jSDK.getMediationNetwork(this.copy.getRevenue.getMonetizationNetwork);
        String str3 = null;
        String str4 = mediationNetwork != null ? mediationNetwork.getMonetizationNetwork : null;
        String str5 = str4;
        if (str5 != null && !StringsKt.isBlank(str5)) {
            linkedHashMap.put("oaid", str4);
        }
        AFb1mSDK aFb1mSDKK_ = AFb1jSDK.k_(this.copy.getRevenue.getMonetizationNetwork.getContentResolver());
        String str6 = aFb1mSDKK_ != null ? aFb1mSDKK_.getMonetizationNetwork : null;
        String str7 = str6;
        if (str7 != null && !StringsKt.isBlank(str7)) {
            linkedHashMap.put("amazon_aid", str6);
        }
        if (AppsFlyerProperties.getInstance().getBoolean(AppsFlyerProperties.DEVICE_TRACKING_DISABLED, false)) {
            mutableMap2.put(AppsFlyerProperties.DEVICE_TRACKING_DISABLED, "true");
        } else {
            AFf1gSDK aFf1gSDK = ((AFe1dSDK) this).component3;
            String str8 = (String) AFf1gSDK.getCurrencyIso4217Code(new Object[]{aFf1gSDK, this.copydefault}, -1198101809, 1198101809, System.identityHashCode(aFf1gSDK));
            String str9 = str8;
            if (str9 != null && !StringsKt.isBlank(str9)) {
                linkedHashMap.put("imei", str8);
            }
        }
        String revenue = AFb1iSDK.getRevenue(this.copy.getMonetizationNetwork);
        if (revenue == null) {
            revenue = "";
        }
        linkedHashMap.put("appsflyer_id", revenue);
        linkedHashMap.put("os_version", String.valueOf(Build.VERSION.SDK_INT));
        linkedHashMap.put("sdk_version", "6.17.0");
        String str10 = monetizationNetwork;
        if (str10 != null && !StringsKt.isBlank(str10)) {
            linkedHashMap.put("sdk_connector_version", monetizationNetwork);
        }
        mutableMap2.put("device_data", linkedHashMap);
        this.toString.AFAdRevenueData(mutableMap2, this.component2);
        AFd1nSDK<String> aFd1nSDKAFAdRevenueData = AFAdRevenueData(mutableMap2, str, strAFAdRevenueData);
        if (aFd1nSDKAFAdRevenueData != null && (aFd1cSDK = aFd1nSDKAFAdRevenueData.getRevenue) != null) {
            str3 = aFd1cSDK.getMonetizationNetwork;
        }
        if (str3 != null) {
            JSONObject jSONObject = new JSONObject(mutableMap2);
            AFh1ySDK.getCurrencyIso4217Code(toString() + ": preparing data: ", jSONObject);
            AFd1pSDK aFd1pSDK = ((AFe1dSDK) this).areAllFieldsValid;
            String string = jSONObject.toString();
            Intrinsics.checkNotNullExpressionValue(string, "");
            aFd1pSDK.getCurrencyIso4217Code(str3, string);
        }
        return aFd1nSDKAFAdRevenueData;
    }
}
