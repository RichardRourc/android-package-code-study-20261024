package com.appsflyer.internal;

import com.appsflyer.AFLogger;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes.dex */
public final class AFg1aSDK implements AFg1bSDK {
    private AFh1zSDK AFAdRevenueData;
    private AFh1wSDK getCurrencyIso4217Code;
    private AFg1fSDK getMediationNetwork;
    private final AFc1dSDK getRevenue;

    public AFg1aSDK(AFc1dSDK aFc1dSDK) {
        Intrinsics.checkNotNullParameter(aFc1dSDK, "");
        this.getRevenue = aFc1dSDK;
    }

    @Override // com.appsflyer.internal.AFg1bSDK
    public final void getCurrencyIso4217Code() {
        AFh1zSDK aFh1zSDK = this.AFAdRevenueData;
        if (aFh1zSDK != null) {
            AFLogger aFLogger = AFLogger.INSTANCE;
            AFg1gSDK.v$default(aFLogger, AFg1cSDK.EXCEPTION_MANAGER, "Releasing Exception Manager Client", false, 4, null);
            aFLogger.unregisterClient(aFh1zSDK);
            this.AFAdRevenueData = null;
        }
    }

    @Override // com.appsflyer.internal.AFg1bSDK
    public final void getMediationNetwork() {
        AFh1wSDK aFh1wSDK = this.getCurrencyIso4217Code;
        if (aFh1wSDK != null) {
            AFLogger aFLogger = AFLogger.INSTANCE;
            AFg1gSDK.v$default(aFLogger, AFg1cSDK.RD, "Releasing Proxy Manager Client", false, 4, null);
            aFLogger.unregisterClient(aFh1wSDK);
            this.getCurrencyIso4217Code = null;
        }
    }

    @Override // com.appsflyer.internal.AFg1bSDK
    public final void getMonetizationNetwork() {
        AFg1fSDK aFg1fSDK = this.getMediationNetwork;
        if (aFg1fSDK != null) {
            AFLogger aFLogger = AFLogger.INSTANCE;
            AFg1gSDK.v$default(aFLogger, AFg1cSDK.RD, "Releasing Proxy Manager Client", false, 4, null);
            aFLogger.unregisterClient(aFg1fSDK);
            this.getMediationNetwork = null;
        }
    }

    @Override // com.appsflyer.internal.AFg1bSDK
    public final void component4() {
        AFLogger aFLogger = AFLogger.INSTANCE;
        AFg1gSDK[] aFg1gSDKArr = new AFg1gSDK[1];
        if (this.getMediationNetwork == null) {
            this.getMediationNetwork = new AFg1fSDK();
        }
        AFg1fSDK aFg1fSDK = this.getMediationNetwork;
        Intrinsics.checkNotNull(aFg1fSDK);
        aFg1gSDKArr[0] = aFg1fSDK;
        aFLogger.registerClient(aFg1gSDKArr);
    }

    @Override // com.appsflyer.internal.AFg1bSDK
    public final void AFAdRevenueData() {
        AFLogger aFLogger = AFLogger.INSTANCE;
        AFg1gSDK[] aFg1gSDKArr = new AFg1gSDK[1];
        if (this.getCurrencyIso4217Code == null) {
            this.getCurrencyIso4217Code = new AFh1wSDK(this.getRevenue);
        }
        AFh1wSDK aFh1wSDK = this.getCurrencyIso4217Code;
        Intrinsics.checkNotNull(aFh1wSDK);
        aFg1gSDKArr[0] = aFh1wSDK;
        aFLogger.registerClient(aFg1gSDKArr);
    }

    @Override // com.appsflyer.internal.AFg1bSDK
    public final void getRevenue() {
        AFLogger aFLogger = AFLogger.INSTANCE;
        AFg1gSDK[] aFg1gSDKArr = new AFg1gSDK[1];
        if (this.AFAdRevenueData == null) {
            this.AFAdRevenueData = new AFh1zSDK(this.getRevenue);
        }
        AFh1zSDK aFh1zSDK = this.AFAdRevenueData;
        Intrinsics.checkNotNull(aFh1zSDK);
        aFg1gSDKArr[0] = aFh1zSDK;
        aFLogger.registerClient(aFg1gSDKArr);
    }
}
