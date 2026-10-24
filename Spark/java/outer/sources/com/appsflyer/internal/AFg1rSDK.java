package com.appsflyer.internal;

import com.appsflyer.AFLogger;
import java.util.Map;
import org.json.JSONException;

/* JADX INFO: loaded from: classes.dex */
public final class AFg1rSDK extends AFe1sSDK<Void> {
    private final Throwable component1;
    private final AFc1qSDK component3;
    private final AFd1aSDK<String> component4;

    @Override // com.appsflyer.internal.AFe1sSDK
    public final boolean getMediationNetwork() {
        return false;
    }

    @Override // com.appsflyer.internal.AFe1sSDK
    public final long getMonetizationNetwork() {
        return 1000L;
    }

    public AFg1rSDK(AFf1uSDK aFf1uSDK, AFc1qSDK aFc1qSDK) {
        super(AFe1mSDK.GCDSDK, new AFe1mSDK[]{AFe1mSDK.RC_CDN}, "GCD-CHECK");
        this.component1 = aFf1uSDK.component4();
        this.component4 = ((AFe1dSDK) aFf1uSDK).component1;
        this.component3 = aFc1qSDK;
    }

    @Override // com.appsflyer.internal.AFe1sSDK
    public final AFe1rSDK getCurrencyIso4217Code() throws Exception {
        AFLogger.afDebugLog("[GCD-A01] Loading conversion data. Counter: ".concat(String.valueOf(this.component3.AFAdRevenueData("appsFlyerCount", 0))));
        long currencyIso4217Code = this.component3.getCurrencyIso4217Code("appsflyerConversionDataCacheExpiration", 0L);
        if (currencyIso4217Code != 0 && System.currentTimeMillis() - currencyIso4217Code > 5184000000L) {
            AFLogger.afDebugLog("[GCD-E02] Cached conversion data expired");
            this.component3.getCurrencyIso4217Code("sixtyDayConversionData", true);
            this.component3.getMediationNetwork("attributionId", (String) null);
            this.component3.getMonetizationNetwork("appsflyerConversionDataCacheExpiration", 0L);
        }
        Map<String, Object> mapComponent3 = component3();
        if (mapComponent3 != null) {
            try {
                if (!mapComponent3.containsKey("is_first_launch")) {
                    mapComponent3.put("is_first_launch", Boolean.FALSE);
                }
                AFg1nSDK.getMonetizationNetwork(mapComponent3);
            } catch (Exception e) {
                AFLogger.afErrorLog(new StringBuilder("[GCD] Error executing conversion data callback: ").append(e.getLocalizedMessage()).toString(), e);
            }
            return AFe1rSDK.SUCCESS;
        }
        try {
            if (this.component1 != null) {
                AFg1nSDK.getMediationNetwork(new StringBuilder("Launch exception: ").append(this.component1.getMessage()).toString());
                return AFe1rSDK.SUCCESS;
            }
            AFd1aSDK<String> aFd1aSDK = this.component4;
            if (aFd1aSDK != null && !aFd1aSDK.isSuccessful()) {
                AFg1nSDK.getMediationNetwork(new StringBuilder("Launch status code: ").append(this.component4.getStatusCode()).toString());
                return AFe1rSDK.SUCCESS;
            }
            return AFe1rSDK.FAILURE;
        } catch (Exception e2) {
            AFLogger.afErrorLog(new StringBuilder("[GCD] Error executing conversion data callback: ").append(e2.getLocalizedMessage()).toString(), e2);
        }
    }

    private Map<String, Object> component3() {
        String strAFAdRevenueData = this.component3.AFAdRevenueData("attributionId", (String) null);
        if (strAFAdRevenueData == null) {
            return null;
        }
        try {
            new AFd1iSDK();
            return AFd1iSDK.getMediationNetwork(strAFAdRevenueData);
        } catch (JSONException e) {
            AFLogger.afErrorLog(new StringBuilder("[GCD] Failed to parse GCD response: ").append(e.getMessage()).toString(), e);
            return null;
        }
    }
}
