package com.appsflyer.internal;

import android.content.Context;
import com.appsflyer.AFLogger;
import com.appsflyer.AppsFlyerProperties;
import com.google.android.gms.ads.identifier.AdvertisingIdClient;
import com.google.android.gms.common.GoogleApiAvailability;
import com.samsung.android.game.cloudgame.dev.sdk.CloudDevCallback;
import com.samsung.android.game.cloudgame.dev.sdk.CloudDevSdk;
import java.util.Map;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: loaded from: classes.dex */
@Metadata(d1 = {"\u0000b\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0007\u0018\u0000 *2\b\u0012\u0004\u0012\u00020\u00020\u0001:\u0002*+B\u000f\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\u000f\u0010\b\u001a\u00020\u0007H\u0002¢\u0006\u0004\b\b\u0010\tJ\u0017\u0010\u000b\u001a\u00020\u00072\u0006\u0010\u0004\u001a\u00020\nH\u0002¢\u0006\u0004\b\u000b\u0010\fJ\u0017\u0010\r\u001a\u00020\u00072\u0006\u0010\u0004\u001a\u00020\nH\u0003¢\u0006\u0004\b\r\u0010\fJ\u0017\u0010\u000e\u001a\u00020\u00072\u0006\u0010\u0004\u001a\u00020\nH\u0002¢\u0006\u0004\b\u000e\u0010\fJ\u001f\u0010\u000b\u001a\u00020\u00072\u0006\u0010\u0004\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\u0010H\u0002¢\u0006\u0004\b\u000b\u0010\u0012J\u001f\u0010\u0013\u001a\u00020\u00072\u0006\u0010\u0004\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\u0010H\u0002¢\u0006\u0004\b\u0013\u0010\u0012J\u000f\u0010\r\u001a\u00020\u0014H\u0017¢\u0006\u0004\b\r\u0010\u0015J\u000f\u0010\u0013\u001a\u00020\u0016H\u0017¢\u0006\u0004\b\u0013\u0010\u0017J\u0017\u0010\u0013\u001a\u00020\n2\u0006\u0010\u0004\u001a\u00020\u000fH\u0002¢\u0006\u0004\b\u0013\u0010\u0018J\u000f\u0010\u000e\u001a\u00020\u0007H\u0014¢\u0006\u0004\b\u000e\u0010\tJ\u001d\u0010\u000b\u001a\u00020\u001a*\u00020\u00022\b\u0010\u0004\u001a\u0004\u0018\u00010\u0019H\u0002¢\u0006\u0004\b\u000b\u0010\u001bR\u0014\u0010\r\u001a\u00020\u00028\u0002X\u0083\u0004¢\u0006\u0006\n\u0004\b\u001c\u0010\u001dR\u0014\u0010\u000e\u001a\u00020\u001e8\u0002X\u0083\u0004¢\u0006\u0006\n\u0004\b\u001f\u0010 R\u0014\u0010\u000b\u001a\u00020!8\u0002X\u0083\u0004¢\u0006\u0006\n\u0004\b\"\u0010#R\u0014\u0010\u0013\u001a\u00020\u00078CX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\"\u0010\tR\u001b\u0010%\u001a\u00020\u00078CX\u0083\u0084\u0002¢\u0006\f\n\u0004\b\b\u0010$\u001a\u0004\b\u001c\u0010\tR\u0014\u0010\u001c\u001a\u00020&8\u0002X\u0083\u0004¢\u0006\u0006\n\u0004\b'\u0010(R\u0015\u0010\"\u001a\u00020\u00148BX\u0083\u0084\u0002¢\u0006\u0006\n\u0004\b)\u0010$"}, d2 = {"Lcom/appsflyer/internal/AFe1eSDK;", "Lcom/appsflyer/internal/AFe1sSDK;", "Lcom/appsflyer/internal/AFh1oSDK;", "Lcom/appsflyer/internal/AFc1dSDK;", "p0", "<init>", "(Lcom/appsflyer/internal/AFc1dSDK;)V", "", "equals", "()Z", "", "AFAdRevenueData", "(I)Z", "getMonetizationNetwork", "getMediationNetwork", "Landroid/content/Context;", "Lcom/appsflyer/internal/AFe1eSDK$AFa1ySDK;", "p1", "(Landroid/content/Context;Lcom/appsflyer/internal/AFe1eSDK$AFa1ySDK;)Z", "getCurrencyIso4217Code", "", "()J", "Lcom/appsflyer/internal/AFe1rSDK;", "()Lcom/appsflyer/internal/AFe1rSDK;", "(Landroid/content/Context;)I", "", "", "(Lcom/appsflyer/internal/AFh1oSDK;Ljava/lang/String;)V", "component1", "Lcom/appsflyer/internal/AFh1oSDK;", "Lcom/appsflyer/internal/AFc1iSDK;", "areAllFieldsValid", "Lcom/appsflyer/internal/AFc1iSDK;", "Lcom/appsflyer/internal/AFc1pSDK;", "component3", "Lcom/appsflyer/internal/AFc1pSDK;", "Lkotlin/Lazy;", "getRevenue", "Lcom/appsflyer/internal/AFc1kSDK;", "component2", "Lcom/appsflyer/internal/AFc1kSDK;", "component4", "AFa1tSDK", "AFa1ySDK"}, k = 1, mv = {1, 8, 0}, xi = 48)
public final class AFe1eSDK extends AFe1sSDK<AFh1oSDK> {

    /* JADX INFO: renamed from: areAllFieldsValid, reason: from kotlin metadata */
    private final AFc1iSDK getMediationNetwork;

    /* JADX INFO: renamed from: component1, reason: from kotlin metadata */
    private final AFh1oSDK getMonetizationNetwork;

    /* JADX INFO: renamed from: component2, reason: from kotlin metadata */
    private final AFc1kSDK component1;

    /* JADX INFO: renamed from: component3, reason: from kotlin metadata */
    private final AFc1pSDK AFAdRevenueData;

    /* JADX INFO: renamed from: component4, reason: from kotlin metadata */
    private final Lazy component3;

    /* JADX INFO: renamed from: equals, reason: from kotlin metadata */
    private final Lazy getRevenue;

    @Override // com.appsflyer.internal.AFe1sSDK
    public final boolean getMediationNetwork() {
        return false;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public AFe1eSDK(AFc1dSDK aFc1dSDK) {
        super(AFe1mSDK.FETCH_ADVERTISING_ID, new AFe1mSDK[0], "FetchAdvertisingIdTask");
        Intrinsics.checkNotNullParameter(aFc1dSDK, "");
        AFc1iSDK aFc1iSDKAFInAppEventType = aFc1dSDK.AFInAppEventType();
        Intrinsics.checkNotNullExpressionValue(aFc1iSDKAFInAppEventType, "");
        this.getMediationNetwork = aFc1iSDKAFInAppEventType;
        AFc1pSDK revenue = aFc1dSDK.getRevenue();
        Intrinsics.checkNotNullExpressionValue(revenue, "");
        this.AFAdRevenueData = revenue;
        AFc1kSDK aFc1kSDKAfInfoLog = aFc1dSDK.afInfoLog();
        Intrinsics.checkNotNullExpressionValue(aFc1kSDKAfInfoLog, "");
        this.component1 = aFc1kSDKAfInfoLog;
        this.getMonetizationNetwork = new AFh1oSDK(null, null, null, null, null, null, null, null, 255, null);
        this.component3 = LazyKt.lazy(new Function0<Long>() { // from class: com.appsflyer.internal.AFe1eSDK.4
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final Long invoke() {
                Long longOrNull;
                String currencyIso4217Code = AFe1eSDK.this.AFAdRevenueData.getCurrencyIso4217Code("com.appsflyer.fetch_ids.timeout");
                return Long.valueOf((currencyIso4217Code == null || (longOrNull = StringsKt.toLongOrNull(currencyIso4217Code)) == null) ? 1000L : longOrNull.longValue());
            }
        });
        this.getRevenue = LazyKt.lazy(new Function0<Boolean>() { // from class: com.appsflyer.internal.AFe1eSDK.3
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final Boolean invoke() {
                return Boolean.valueOf(Boolean.parseBoolean(AFe1eSDK.this.AFAdRevenueData.getCurrencyIso4217Code("com.appsflyer.enable_instant_plays")));
            }
        });
    }

    private final boolean component1() {
        return ((Boolean) this.getRevenue.getValue()).booleanValue();
    }

    private static boolean component3() {
        String str;
        try {
            Class.forName("com.samsung.android.game.cloudgame.dev.sdk.CloudDevSdk");
            return true;
        } catch (Throwable th) {
            if (th instanceof ClassNotFoundException) {
                str = "CloudDevSdk not found";
            } else {
                str = "Unexpected exception while checking if running in cloud environment: " + th.getMessage();
            }
            AFg1gSDK.e$default(AFLogger.INSTANCE, AFg1cSDK.ADVERTISING_ID, str, th, true, false, false, false, 112, null);
            return false;
        }
    }

    @Override // com.appsflyer.internal.AFe1sSDK
    public final AFe1rSDK getCurrencyIso4217Code() {
        AFe1rSDK aFe1rSDK;
        if (this.component1.getMonetizationNetwork()) {
            AFg1gSDK.v$default(AFLogger.INSTANCE, AFg1cSDK.ADVERTISING_ID, "QUEUE: Advertising ID collection is disabled. Skipping fetching... ", false, 4, null);
            return AFe1rSDK.FAILURE;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (CollectionsKt.listOf((Object[]) new Boolean[]{Boolean.valueOf(equals()), Boolean.FALSE, Boolean.FALSE}).contains(Boolean.TRUE)) {
            aFe1rSDK = AFe1rSDK.SUCCESS;
        } else {
            aFe1rSDK = AFe1rSDK.FAILURE;
        }
        AFc1kSDK aFc1kSDK = this.component1;
        AFd1hSDK aFd1hSDK = new AFd1hSDK(System.currentTimeMillis() - jCurrentTimeMillis);
        AFg1gSDK.v$default(AFLogger.INSTANCE, AFg1cSDK.ADVERTISING_ID, "QUEUE: FetchAdvertisingIdTask: took " + aFd1hSDK.getRevenue + "ms", false, 4, null);
        aFc1kSDK.getRevenue(aFd1hSDK);
        return aFe1rSDK;
    }

    /* JADX WARN: Code duplicated, block: B:15:0x004b A[LOOP:0: B:3:0x0003->B:15:0x004b, LOOP_END] */
    /* JADX WARN: Code duplicated, block: B:19:0x004e A[EDGE_INSN: B:19:0x004e->B:16:0x004e BREAK  A[LOOP:0: B:3:0x0003->B:15:0x004b], SYNTHETIC] */
    private final boolean equals() {
        boolean z = false;
        for (int i = 2; i > 0; i--) {
            if (component1() && getMediationNetwork(i)) {
                AFg1gSDK.v$default(AFLogger.INSTANCE, AFg1cSDK.ADVERTISING_ID, "GAID fetched using Samsung Cloud dev SDK", false, 4, null);
            } else {
                if (AFAdRevenueData(i)) {
                    AFg1gSDK.v$default(AFLogger.INSTANCE, AFg1cSDK.ADVERTISING_ID, "GAID fetched using GMS", false, 4, null);
                } else {
                    AFg1gSDK.v$default(AFLogger.INSTANCE, AFg1cSDK.ADVERTISING_ID, "Failed to fetch GAID", false, 4, null);
                    z = false;
                }
                if (!z) {
                    break;
                }
            }
            z = true;
            if (!z) {
                break;
                break;
            }
        }
        this.component1.component3 = this.getMonetizationNetwork;
        return z;
    }

    /* JADX WARN: Code duplicated, block: B:9:0x0050  */
    private final boolean AFAdRevenueData(int p0) {
        boolean z;
        AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.ADVERTISING_ID, "Trying to fetch GAID...", false, 4, null);
        AFa1ySDK aFa1ySDK = new AFa1ySDK(null, null, false, null, 15, null);
        Context context = this.getMediationNetwork.getMonetizationNetwork;
        Intrinsics.checkNotNull(context);
        int currencyIso4217Code = getCurrencyIso4217Code(context);
        Context context2 = this.getMediationNetwork.getMonetizationNetwork;
        Intrinsics.checkNotNull(context2);
        if (!getCurrencyIso4217Code(context2, aFa1ySDK)) {
            if (AppsFlyerProperties.getInstance().getBoolean(AppsFlyerProperties.ENABLE_GPS_FALLBACK, true)) {
                Context context3 = this.getMediationNetwork.getMonetizationNetwork;
                Intrinsics.checkNotNull(context3);
                if (AFAdRevenueData(context3, aFa1ySDK)) {
                    z = true;
                } else {
                    z = false;
                }
            } else {
                z = false;
            }
            String string = aFa1ySDK.getGaidError().toString();
            String str = string;
            if (str != null && !StringsKt.isBlank(str)) {
                string = currencyIso4217Code + ": " + StringsKt.trim((CharSequence) str).toString();
            }
            AFAdRevenueData(this.getMonetizationNetwork, string);
            if (!z) {
                return false;
            }
        }
        AFh1oSDK aFh1oSDK = this.getMonetizationNetwork;
        aFh1oSDK.getRevenue = aFa1ySDK.getAdvertisingId();
        aFh1oSDK.component3 = aFa1ySDK.isLimitAdTrackingEnabled();
        Boolean boolIsLimitAdTrackingEnabled = aFa1ySDK.isLimitAdTrackingEnabled();
        aFh1oSDK.getMonetizationNetwork = boolIsLimitAdTrackingEnabled != null ? Boolean.valueOf(!boolIsLimitAdTrackingEnabled.booleanValue()) : null;
        aFh1oSDK.getCurrencyIso4217Code = Boolean.valueOf(aFa1ySDK.getAdvertisingIdWithGps());
        aFh1oSDK.AFAdRevenueData = Boolean.FALSE;
        aFh1oSDK.component4 = Boolean.valueOf(p0 != 2);
        return true;
    }

    private static int getCurrencyIso4217Code(Context p0) {
        try {
            return GoogleApiAvailability.getInstance().isGooglePlayServicesAvailable(p0);
        } catch (Throwable th) {
            AFg1gSDK.e$default(AFLogger.INSTANCE, AFg1cSDK.ADVERTISING_ID, "isGooglePlayServicesAvailable error", th, false, false, false, false, 96, null);
            return -1;
        }
    }

    private final boolean AFAdRevenueData(Context p0, AFa1ySDK p1) throws IllegalStateException {
        try {
            AFb1vSDK.AFa1vSDK aFa1vSDKAFAdRevenueData = AFb1vSDK.AFAdRevenueData(p0);
            p1.setAdvertisingId(aFa1vSDKAFAdRevenueData.AFAdRevenueData);
            p1.setLimitAdTrackingEnabled(Boolean.valueOf(aFa1vSDKAFAdRevenueData.getCurrencyIso4217Code()));
            String advertisingId = p1.getAdvertisingId();
            if (advertisingId == null || advertisingId.length() == 0) {
                p1.getGaidError().append("emptyOrNull (bypass) |");
            }
            if (Unit.INSTANCE != null) {
                return true;
            }
            AFe1eSDK aFe1eSDK = this;
            p1.getGaidError().append("gpsAdInfo-null (bypass) |");
            throw new IllegalStateException("GpsAdInfo is null (bypass)".toString());
        } catch (Throwable th) {
            AFg1gSDK.e$default(AFLogger.INSTANCE, AFg1cSDK.ADVERTISING_ID, "Failed to fetch GAID: " + th.getMessage(), th, true, false, false, false, 64, null);
            p1.getGaidError().append(th.getClass().getSimpleName()).append(" |");
            String localizedMessage = th.getLocalizedMessage();
            if (localizedMessage == null) {
                localizedMessage = th.toString();
            }
            AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.ADVERTISING_ID, localizedMessage, false, 4, null);
            return false;
        }
    }

    private final boolean getCurrencyIso4217Code(Context p0, AFa1ySDK p1) throws IllegalStateException {
        Unit unit;
        try {
            Class.forName("com.google.android.gms.ads.identifier.AdvertisingIdClient");
            AdvertisingIdClient.Info advertisingIdInfo = AdvertisingIdClient.getAdvertisingIdInfo(p0);
            if (advertisingIdInfo != null) {
                p1.setAdvertisingId(advertisingIdInfo.getId());
                p1.setLimitAdTrackingEnabled(Boolean.valueOf(advertisingIdInfo.isLimitAdTrackingEnabled()));
                p1.setAdvertisingIdWithGps(true);
                String advertisingId = p1.getAdvertisingId();
                if (advertisingId == null || advertisingId.length() == 0) {
                    p1.getGaidError().append("emptyOrNull |");
                }
                unit = Unit.INSTANCE;
            } else {
                unit = null;
            }
            if (unit != null) {
                return true;
            }
            AFe1eSDK aFe1eSDK = this;
            p1.getGaidError().append("gpsAdInfo-null |");
            throw new IllegalStateException("GpsAdIndo is null".toString());
        } catch (Throwable th) {
            AFg1gSDK.e$default(AFLogger.INSTANCE, AFg1cSDK.ADVERTISING_ID, "Google Play Services is missing " + th.getMessage(), th, false, false, false, false, 88, null);
            p1.getGaidError().append(th.getClass().getSimpleName()).append(" |");
            AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.ADVERTISING_ID, "WARNING: Google Play Services is missing.", false, 4, null);
            return false;
        }
    }

    private final boolean getMediationNetwork(int p0) {
        return getMonetizationNetwork(p0);
    }

    private final boolean getMonetizationNetwork(int p0) {
        String str;
        AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.ADVERTISING_ID, "Trying to fetch GAID using Samsung Cloud Dev...", false, 4, null);
        if (component3()) {
            CloudDevSdk cloudDevSdk = CloudDevSdk.INSTANCE;
            Context context = this.getMediationNetwork.getMonetizationNetwork;
            Intrinsics.checkNotNull(context);
            if (cloudDevSdk.isCloudEnvironment(context)) {
                AFa1ySDK aFa1ySDK = new AFa1ySDK(null, null, false, null, 15, null);
                CountDownLatch countDownLatch = new CountDownLatch(1);
                try {
                    CloudDevSdk cloudDevSdk2 = CloudDevSdk.INSTANCE;
                    Context context2 = this.getMediationNetwork.getMonetizationNetwork;
                    Intrinsics.checkNotNull(context2);
                    cloudDevSdk2.request(context2, CollectionsKt.listOf("gaid"), new AFa1zSDK(aFa1ySDK, countDownLatch));
                    countDownLatch.await(((Number) this.component3.getValue()).longValue(), TimeUnit.MILLISECONDS);
                    if (aFa1ySDK.getGaidError().length() > 0) {
                        AFAdRevenueData(this.getMonetizationNetwork, aFa1ySDK.getGaidError().toString());
                    }
                } catch (Throwable th) {
                    try {
                        if (th instanceof InterruptedException) {
                            str = "Fetch GAID using Samsung Cloud Dev interrupted or reached to timeout";
                        } else if (th instanceof ClassNotFoundException) {
                            str = "CloudDevSdk not found";
                        } else {
                            str = "Unexpected exception while fetching GAID using Samsung Cloud Dev " + th.getMessage();
                        }
                        AFg1gSDK.e$default(AFLogger.INSTANCE, AFg1cSDK.ADVERTISING_ID, str, th, true, false, false, false, 112, null);
                        aFa1ySDK.getGaidError().append(th.getClass().getSimpleName()).append(" |");
                        if (aFa1ySDK.getGaidError().length() > 0) {
                        }
                    } catch (Throwable th2) {
                        if (aFa1ySDK.getGaidError().length() > 0) {
                            AFAdRevenueData(this.getMonetizationNetwork, aFa1ySDK.getGaidError().toString());
                        }
                        throw th2;
                    }
                }
                String advertisingId = aFa1ySDK.getAdvertisingId();
                if (advertisingId == null || advertisingId.length() == 0) {
                    return false;
                }
                AFh1oSDK aFh1oSDK = this.getMonetizationNetwork;
                aFh1oSDK.getRevenue = aFa1ySDK.getAdvertisingId();
                aFh1oSDK.component3 = Boolean.FALSE;
                aFh1oSDK.getMonetizationNetwork = Boolean.TRUE;
                aFh1oSDK.getCurrencyIso4217Code = Boolean.FALSE;
                aFh1oSDK.AFAdRevenueData = Boolean.TRUE;
                aFh1oSDK.component4 = Boolean.valueOf(p0 != 2);
                return true;
            }
        }
        AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.ADVERTISING_ID, "Not running in Samsung Cloud Environment. Try using GMS...", false, 4, null);
        return false;
    }

    @Metadata(d1 = {"\u0000\u001f\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010$\n\u0000*\u0001\u0000\b\n\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H\u0016J\u001c\u0010\u0006\u001a\u00020\u00032\u0012\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00050\bH\u0016¨\u0006\t"}, d2 = {"com/appsflyer/internal/components/queue/tasks/FetchAdvertisingIdTask$fetchGaidUsingSamsungSdk$1", "Lcom/samsung/android/game/cloudgame/dev/sdk/CloudDevCallback;", "onError", "", "reason", "", "onSuccess", "kinds", "", "SDK_prodRelease"}, k = 1, mv = {1, 8, 0}, xi = 48)
    public static final class AFa1zSDK implements CloudDevCallback {
        final /* synthetic */ AFa1ySDK $fetchGaidData;
        final /* synthetic */ CountDownLatch $latch;

        AFa1zSDK(AFa1ySDK aFa1ySDK, CountDownLatch countDownLatch) {
            this.$fetchGaidData = aFa1ySDK;
            this.$latch = countDownLatch;
        }

        public final void onError(String reason) {
            Intrinsics.checkNotNullParameter(reason, "reason");
            AFg1gSDK.w$default(AFLogger.INSTANCE, AFg1cSDK.ADVERTISING_ID, "Could not fetch GAID using CloudDevSdk: " + reason, false, 4, null);
            this.$fetchGaidData.getGaidError().append(reason).append(" |");
            this.$latch.countDown();
        }

        public final void onSuccess(Map<String, String> kinds) {
            Intrinsics.checkNotNullParameter(kinds, "kinds");
            AFg1gSDK.v$default(AFLogger.INSTANCE, AFg1cSDK.ADVERTISING_ID, "CloudDevCallback received onSuccess", false, 4, null);
            this.$fetchGaidData.setAdvertisingId(kinds.get("gaid"));
            this.$latch.countDown();
        }
    }

    @Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0010\n\u0002\u0010\b\n\u0002\b\u0010\b\u0082\b\u0018\u00002\u00020\u0001B7\u0012\n\b\u0002\u0010\u0003\u001a\u0004\u0018\u00010\u0002\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0004\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0004\u0012\f\b\u0002\u0010\t\u001a\u00060\u0007j\u0002`\b¢\u0006\u0004\b\n\u0010\u000bJ\u0012\u0010\f\u001a\u0004\u0018\u00010\u0002HÇ\u0003¢\u0006\u0004\b\f\u0010\rJ\u0012\u0010\u000e\u001a\u0004\u0018\u00010\u0004HÇ\u0003¢\u0006\u0004\b\u000e\u0010\u000fJ\u0010\u0010\u0010\u001a\u00020\u0004HÆ\u0003¢\u0006\u0004\b\u0010\u0010\u0011J\u0014\u0010\u0012\u001a\u00060\u0007j\u0002`\bHÇ\u0003¢\u0006\u0004\b\u0012\u0010\u0013J@\u0010\u0014\u001a\u00020\u00002\n\b\u0002\u0010\u0003\u001a\u0004\u0018\u00010\u00022\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00042\b\b\u0002\u0010\u0006\u001a\u00020\u00042\f\b\u0002\u0010\t\u001a\u00060\u0007j\u0002`\bHÇ\u0001¢\u0006\u0004\b\u0014\u0010\u0015J\u001a\u0010\u0017\u001a\u00020\u00042\b\u0010\u0016\u001a\u0004\u0018\u00010\u0001HÖ\u0003¢\u0006\u0004\b\u0017\u0010\u0018J\u0010\u0010\u001a\u001a\u00020\u0019HÖ\u0001¢\u0006\u0004\b\u001a\u0010\u001bJ\u0010\u0010\u001c\u001a\u00020\u0002H×\u0001¢\u0006\u0004\b\u001c\u0010\rR$\u0010\u0003\u001a\u0004\u0018\u00010\u00028\u0007@\u0007X\u0087\u000e¢\u0006\u0012\n\u0004\b\u0003\u0010\u001d\u001a\u0004\b\u001e\u0010\r\"\u0004\b\u001f\u0010 R\"\u0010\u0006\u001a\u00020\u00048\u0007@\u0007X\u0087\u000e¢\u0006\u0012\n\u0004\b\u0006\u0010!\u001a\u0004\b\"\u0010\u0011\"\u0004\b#\u0010$R\u001e\u0010\t\u001a\u00060\u0007j\u0002`\b8\u0007X\u0087\u0004¢\u0006\f\n\u0004\b\t\u0010%\u001a\u0004\b&\u0010\u0013R$\u0010\u0005\u001a\u0004\u0018\u00010\u00048\u0007@\u0007X\u0087\u000e¢\u0006\u0012\n\u0004\b\u0005\u0010'\u001a\u0004\b\u0005\u0010\u000f\"\u0004\b(\u0010)"}, d2 = {"Lcom/appsflyer/internal/AFe1eSDK$AFa1ySDK;", "", "", "advertisingId", "", "isLimitAdTrackingEnabled", "advertisingIdWithGps", "Ljava/lang/StringBuilder;", "Lkotlin/text/StringBuilder;", "gaidError", "<init>", "(Ljava/lang/String;Ljava/lang/Boolean;ZLjava/lang/StringBuilder;)V", "component1", "()Ljava/lang/String;", "component2", "()Ljava/lang/Boolean;", "component3", "()Z", "component4", "()Ljava/lang/StringBuilder;", "copy", "(Ljava/lang/String;Ljava/lang/Boolean;ZLjava/lang/StringBuilder;)Lcom/appsflyer/internal/AFe1eSDK$AFa1ySDK;", "other", "equals", "(Ljava/lang/Object;)Z", "", "hashCode", "()I", "toString", "Ljava/lang/String;", "getAdvertisingId", "setAdvertisingId", "(Ljava/lang/String;)V", "Z", "getAdvertisingIdWithGps", "setAdvertisingIdWithGps", "(Z)V", "Ljava/lang/StringBuilder;", "getGaidError", "Ljava/lang/Boolean;", "setLimitAdTrackingEnabled", "(Ljava/lang/Boolean;)V"}, k = 1, mv = {1, 8, 0}, xi = 48)
    static final /* data */ class AFa1ySDK {
        private String advertisingId;
        private boolean advertisingIdWithGps;
        private final StringBuilder gaidError;
        private Boolean isLimitAdTrackingEnabled;

        public AFa1ySDK() {
            this(null, null, false, null, 15, null);
        }

        public static /* synthetic */ AFa1ySDK copy$default(AFa1ySDK aFa1ySDK, String str, Boolean bool, boolean z, StringBuilder sb, int i, Object obj) {
            if ((i & 1) != 0) {
                str = aFa1ySDK.advertisingId;
            }
            if ((i & 2) != 0) {
                bool = aFa1ySDK.isLimitAdTrackingEnabled;
            }
            if ((i & 4) != 0) {
                z = aFa1ySDK.advertisingIdWithGps;
            }
            if ((i & 8) != 0) {
                sb = aFa1ySDK.gaidError;
            }
            return aFa1ySDK.copy(str, bool, z, sb);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final String getAdvertisingId() {
            return this.advertisingId;
        }

        /* JADX INFO: renamed from: component2, reason: from getter */
        public final Boolean getIsLimitAdTrackingEnabled() {
            return this.isLimitAdTrackingEnabled;
        }

        /* JADX INFO: renamed from: component3, reason: from getter */
        public final boolean getAdvertisingIdWithGps() {
            return this.advertisingIdWithGps;
        }

        /* JADX INFO: renamed from: component4, reason: from getter */
        public final StringBuilder getGaidError() {
            return this.gaidError;
        }

        public final AFa1ySDK copy(String advertisingId, Boolean isLimitAdTrackingEnabled, boolean advertisingIdWithGps, StringBuilder gaidError) {
            Intrinsics.checkNotNullParameter(gaidError, "gaidError");
            return new AFa1ySDK(advertisingId, isLimitAdTrackingEnabled, advertisingIdWithGps, gaidError);
        }

        public final boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof AFa1ySDK)) {
                return false;
            }
            AFa1ySDK aFa1ySDK = (AFa1ySDK) other;
            return Intrinsics.areEqual(this.advertisingId, aFa1ySDK.advertisingId) && Intrinsics.areEqual(this.isLimitAdTrackingEnabled, aFa1ySDK.isLimitAdTrackingEnabled) && this.advertisingIdWithGps == aFa1ySDK.advertisingIdWithGps && Intrinsics.areEqual(this.gaidError, aFa1ySDK.gaidError);
        }

        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Type inference failed for: r0v6, types: [int] */
        /* JADX WARN: Type inference failed for: r1v3, types: [int] */
        /* JADX WARN: Type inference failed for: r1v6 */
        /* JADX WARN: Type inference failed for: r1v8 */
        public final int hashCode() {
            String str = this.advertisingId;
            int iHashCode = (str == null ? 0 : str.hashCode()) * 31;
            Boolean bool = this.isLimitAdTrackingEnabled;
            int iHashCode2 = (iHashCode + (bool != null ? bool.hashCode() : 0)) * 31;
            boolean z = this.advertisingIdWithGps;
            ?? r1 = z;
            if (z) {
                r1 = 1;
            }
            return ((iHashCode2 + r1) * 31) + this.gaidError.hashCode();
        }

        public final String toString() {
            return "FetchGaidData(advertisingId=" + this.advertisingId + ", isLimitAdTrackingEnabled=" + this.isLimitAdTrackingEnabled + ", advertisingIdWithGps=" + this.advertisingIdWithGps + ", gaidError=" + ((Object) this.gaidError) + ")";
        }

        public AFa1ySDK(String str, Boolean bool, boolean z, StringBuilder gaidError) {
            Intrinsics.checkNotNullParameter(gaidError, "gaidError");
            this.advertisingId = str;
            this.isLimitAdTrackingEnabled = bool;
            this.advertisingIdWithGps = z;
            this.gaidError = gaidError;
        }

        public final String getAdvertisingId() {
            return this.advertisingId;
        }

        public final void setAdvertisingId(String str) {
            this.advertisingId = str;
        }

        public final Boolean isLimitAdTrackingEnabled() {
            return this.isLimitAdTrackingEnabled;
        }

        public final void setLimitAdTrackingEnabled(Boolean bool) {
            this.isLimitAdTrackingEnabled = bool;
        }

        public final boolean getAdvertisingIdWithGps() {
            return this.advertisingIdWithGps;
        }

        public final void setAdvertisingIdWithGps(boolean z) {
            this.advertisingIdWithGps = z;
        }

        public /* synthetic */ AFa1ySDK(String str, Boolean bool, boolean z, StringBuilder sb, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this((i & 1) != 0 ? null : str, (i & 2) != 0 ? null : bool, (i & 4) != 0 ? false : z, (i & 8) != 0 ? new StringBuilder() : sb);
        }

        public final StringBuilder getGaidError() {
            return this.gaidError;
        }
    }

    @Override // com.appsflyer.internal.AFe1sSDK
    public final long getMonetizationNetwork() {
        return ((Number) this.component3.getValue()).longValue();
    }

    private static void AFAdRevenueData(AFh1oSDK aFh1oSDK, String str) {
        String str2;
        if (str == null) {
            return;
        }
        String str3 = aFh1oSDK.getMediationNetwork;
        if (str3 != null && (str2 = str3 + " | " + str) != null) {
            str = str2;
        }
        aFh1oSDK.getMediationNetwork = str;
    }
}
