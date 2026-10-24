package com.appsflyer.internal;

import android.os.Build;
import android.widget.ExpandableListView;
import com.appsflyer.AFLogger;
import java.io.UnsupportedEncodingException;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.TimeUnit;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Pair;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import kotlin.text.MatchGroup;
import kotlin.text.MatchResult;
import kotlin.text.Regex;
import kotlin.text.StringsKt;
import kotlin.time.DurationKt;
import kotlinx.coroutines.scheduling.WorkQueueKt;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public final class AFd1uSDK implements AFd1vSDK {
    private static int $10 = 0;
    private static int $11 = 1;
    private static int AFLogger = 1;
    private static int copydefault;
    private final Lazy AFAdRevenueData;
    private final Lazy areAllFieldsValid;
    private final String component1;
    private AFd1vSDK.AFa1ySDK component2;
    private final Lazy component3;
    private final Lazy component4;
    private final Lazy getCurrencyIso4217Code;
    private AFc1dSDK getMediationNetwork;
    private final Lazy getMonetizationNetwork;
    private final Lazy getRevenue;
    private static char[] hashCode = {8636, 8652, 8639, 8648, 8626};
    private static int equals = -771284898;
    private static boolean toString = true;
    private static boolean copy = true;

    public static /* synthetic */ Object getMediationNetwork(Object[] objArr, int i, int i2, int i3) {
        int i4 = (i * (-344)) + (i2 * (-344));
        int i5 = ~i;
        int i6 = ~i2;
        int i7 = i5 | i6;
        int i8 = i4 + (((~i7) | (~(i5 | i3))) * 345) + (((~(i | i6)) | (~(i5 | (~i3)))) * 345) + ((~(i7 | i3)) * 345);
        if (i8 == 1) {
            return getCurrencyIso4217Code(objArr);
        }
        if (i8 == 2) {
            return AFAdRevenueData(objArr);
        }
        if (i8 == 3) {
            return getRevenue(objArr);
        }
        if (i8 == 4) {
            AFd1uSDK aFd1uSDK = (AFd1uSDK) objArr[0];
            int i9 = 2 % 2;
            int i10 = AFLogger + 59;
            copydefault = i10 % 128;
            int i11 = i10 % 2;
            AFd1xSDK aFd1xSDK = (AFd1xSDK) aFd1uSDK.component3.getValue();
            int i12 = copydefault + 5;
            AFLogger = i12 % 128;
            int i13 = i12 % 2;
            return aFd1xSDK;
        }
        Map map = (Map) objArr[0];
        List list = (List) objArr[1];
        int i14 = 2 % 2;
        int i15 = AFLogger + 43;
        copydefault = i15 % 128;
        if (i15 % 2 == 0) {
            return MapsKt.mapOf(TuplesKt.to("deviceInfo", map), TuplesKt.to("excs", AFd1tSDK.getCurrencyIso4217Code(list)));
        }
        Pair[] pairArr = new Pair[2];
        pairArr[0] = TuplesKt.to("deviceInfo", map);
        pairArr[0] = TuplesKt.to("excs", AFd1tSDK.getCurrencyIso4217Code(list));
        return MapsKt.mapOf(pairArr);
    }

    public AFd1uSDK(AFc1dSDK aFc1dSDK) {
        Intrinsics.checkNotNullParameter(aFc1dSDK, "");
        this.getMediationNetwork = aFc1dSDK;
        this.AFAdRevenueData = LazyKt.lazy(new Function0<AFf1oSDK>() { // from class: com.appsflyer.internal.AFd1uSDK.5
            @Override // kotlin.jvm.functions.Function0
            /* JADX INFO: renamed from: getCurrencyIso4217Code, reason: merged with bridge method [inline-methods] */
            public final AFf1oSDK invoke() {
                AFf1oSDK aFf1oSDKComponent1 = AFd1uSDK.getCurrencyIso4217Code(AFd1uSDK.this).component1();
                Intrinsics.checkNotNullExpressionValue(aFf1oSDKComponent1, "");
                return aFf1oSDKComponent1;
            }

            {
                super(0);
            }
        });
        this.getMonetizationNetwork = LazyKt.lazy(new Function0<AFc1pSDK>() { // from class: com.appsflyer.internal.AFd1uSDK.2
            @Override // kotlin.jvm.functions.Function0
            /* JADX INFO: renamed from: getCurrencyIso4217Code, reason: merged with bridge method [inline-methods] */
            public final AFc1pSDK invoke() {
                AFc1pSDK revenue = AFd1uSDK.getCurrencyIso4217Code(AFd1uSDK.this).getRevenue();
                Intrinsics.checkNotNullExpressionValue(revenue, "");
                return revenue;
            }

            {
                super(0);
            }
        });
        this.getRevenue = LazyKt.lazy(new Function0<AFc1qSDK>() { // from class: com.appsflyer.internal.AFd1uSDK.4
            @Override // kotlin.jvm.functions.Function0
            /* JADX INFO: renamed from: AFAdRevenueData, reason: merged with bridge method [inline-methods] */
            public final AFc1qSDK invoke() {
                AFc1qSDK aFc1qSDKComponent2 = AFd1uSDK.getCurrencyIso4217Code(AFd1uSDK.this).component2();
                Intrinsics.checkNotNullExpressionValue(aFc1qSDKComponent2, "");
                return aFc1qSDKComponent2;
            }

            {
                super(0);
            }
        });
        this.getCurrencyIso4217Code = LazyKt.lazy(new Function0<AFf1gSDK>() { // from class: com.appsflyer.internal.AFd1uSDK.10
            @Override // kotlin.jvm.functions.Function0
            /* JADX INFO: renamed from: getRevenue, reason: merged with bridge method [inline-methods] */
            public final AFf1gSDK invoke() {
                AFf1gSDK aFf1gSDKRegisterClient = AFd1uSDK.getCurrencyIso4217Code(AFd1uSDK.this).registerClient();
                Intrinsics.checkNotNullExpressionValue(aFf1gSDKRegisterClient, "");
                return aFf1gSDKRegisterClient;
            }

            {
                super(0);
            }
        });
        this.areAllFieldsValid = LazyKt.lazy(new Function0<ExecutorService>() { // from class: com.appsflyer.internal.AFd1uSDK.3
            @Override // kotlin.jvm.functions.Function0
            /* JADX INFO: renamed from: AFAdRevenueData, reason: merged with bridge method [inline-methods] */
            public final ExecutorService invoke() {
                ExecutorService monetizationNetwork = AFd1uSDK.getCurrencyIso4217Code(AFd1uSDK.this).getMonetizationNetwork();
                Intrinsics.checkNotNullExpressionValue(monetizationNetwork, "");
                return monetizationNetwork;
            }

            {
                super(0);
            }
        });
        this.component1 = "6.17.0";
        this.component4 = LazyKt.lazy(new Function0<AFc1bSDK>() { // from class: com.appsflyer.internal.AFd1uSDK.1
            @Override // kotlin.jvm.functions.Function0
            /* JADX INFO: renamed from: getRevenue, reason: merged with bridge method [inline-methods] */
            public final AFc1bSDK invoke() {
                AFc1iSDK aFc1iSDKAFInAppEventType = AFd1uSDK.getCurrencyIso4217Code(AFd1uSDK.this).AFInAppEventType();
                Intrinsics.checkNotNullExpressionValue(aFc1iSDKAFInAppEventType, "");
                return new AFc1bSDK(aFc1iSDKAFInAppEventType);
            }

            {
                super(0);
            }
        });
        this.component3 = LazyKt.lazy(new Function0<AFd1ySDK>() { // from class: com.appsflyer.internal.AFd1uSDK.6
            @Override // kotlin.jvm.functions.Function0
            /* JADX INFO: renamed from: AFAdRevenueData, reason: merged with bridge method [inline-methods] */
            public final AFd1ySDK invoke() {
                return new AFd1ySDK(AFd1uSDK.this.getRevenue());
            }

            {
                super(0);
            }
        });
    }

    public static final /* synthetic */ AFc1dSDK getCurrencyIso4217Code(AFd1uSDK aFd1uSDK) {
        int i = 2 % 2;
        int i2 = AFLogger + 117;
        int i3 = i2 % 128;
        copydefault = i3;
        int i4 = i2 % 2;
        AFc1dSDK aFc1dSDK = aFd1uSDK.getMediationNetwork;
        if (i4 != 0) {
            Object obj = null;
            obj.hashCode();
            throw null;
        }
        int i5 = i3 + 47;
        AFLogger = i5 % 128;
        int i6 = i5 % 2;
        return aFc1dSDK;
    }

    private final AFf1oSDK getMonetizationNetwork() {
        int i = 2 % 2;
        int i2 = copydefault + 99;
        AFLogger = i2 % 128;
        int i3 = i2 % 2;
        AFf1oSDK aFf1oSDK = (AFf1oSDK) this.AFAdRevenueData.getValue();
        int i4 = AFLogger + 11;
        copydefault = i4 % 128;
        int i5 = i4 % 2;
        return aFf1oSDK;
    }

    private final AFc1pSDK getMediationNetwork() {
        int i = 2 % 2;
        int i2 = AFLogger + 87;
        copydefault = i2 % 128;
        int i3 = i2 % 2;
        AFc1pSDK aFc1pSDK = (AFc1pSDK) this.getMonetizationNetwork.getValue();
        int i4 = copydefault + 59;
        AFLogger = i4 % 128;
        int i5 = i4 % 2;
        return aFc1pSDK;
    }

    private final AFc1qSDK component2() {
        int i = 2 % 2;
        int i2 = copydefault + 19;
        AFLogger = i2 % 128;
        int i3 = i2 % 2;
        AFc1qSDK aFc1qSDK = (AFc1qSDK) this.getRevenue.getValue();
        if (i3 != 0) {
            return aFc1qSDK;
        }
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    private final AFf1gSDK component4() {
        int i = 2 % 2;
        int i2 = AFLogger + 17;
        copydefault = i2 % 128;
        if (i2 % 2 != 0) {
            throw null;
        }
        AFf1gSDK aFf1gSDK = (AFf1gSDK) this.getCurrencyIso4217Code.getValue();
        int i3 = copydefault + 117;
        AFLogger = i3 % 128;
        int i4 = i3 % 2;
        return aFf1gSDK;
    }

    private final ExecutorService areAllFieldsValid() {
        int i = 2 % 2;
        int i2 = copydefault + 47;
        AFLogger = i2 % 128;
        int i3 = i2 % 2;
        ExecutorService executorService = (ExecutorService) this.areAllFieldsValid.getValue();
        int i4 = copydefault + 37;
        AFLogger = i4 % 128;
        int i5 = i4 % 2;
        return executorService;
    }

    private static /* synthetic */ Object getRevenue(Object[] objArr) {
        AFd1uSDK aFd1uSDK = (AFd1uSDK) objArr[0];
        int i = 2 % 2;
        int i2 = copydefault + 29;
        AFLogger = i2 % 128;
        int i3 = i2 % 2;
        AFi1wSDK aFi1wSDK = aFd1uSDK.getMonetizationNetwork().getMediationNetwork.getCurrencyIso4217Code;
        if (aFi1wSDK != null) {
            int i4 = AFLogger + 37;
            copydefault = i4 % 128;
            if (i4 % 2 == 0) {
                AFh1cSDK aFh1cSDK = aFi1wSDK.getMonetizationNetwork;
                if (aFh1cSDK != null) {
                    return aFh1cSDK.getRevenue;
                }
            } else {
                AFh1cSDK aFh1cSDK2 = aFi1wSDK.getMonetizationNetwork;
                throw null;
            }
        }
        return null;
    }

    public final AFc1aSDK getRevenue() {
        int i = 2 % 2;
        int i2 = copydefault + 41;
        AFLogger = i2 % 128;
        int i3 = i2 % 2;
        AFc1aSDK aFc1aSDK = (AFc1aSDK) this.component4.getValue();
        if (i3 != 0) {
            return aFc1aSDK;
        }
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getMediationNetwork(AFd1uSDK aFd1uSDK, Throwable th, String str) {
        AFh1dSDK aFh1dSDK;
        int i = 2 % 2;
        int i2 = copydefault + 101;
        AFLogger = i2 % 128;
        if (i2 % 2 == 0) {
            Intrinsics.checkNotNullParameter(aFd1uSDK, "");
            Intrinsics.checkNotNullParameter(th, "");
            Intrinsics.checkNotNullParameter(str, "");
            aFh1dSDK = (AFh1dSDK) getMediationNetwork(new Object[]{aFd1uSDK}, 855295870, -855295867, System.identityHashCode(aFd1uSDK));
            int i3 = 90 / 0;
            if (aFh1dSDK == null) {
                return;
            }
        } else {
            Intrinsics.checkNotNullParameter(aFd1uSDK, "");
            Intrinsics.checkNotNullParameter(th, "");
            Intrinsics.checkNotNullParameter(str, "");
            aFh1dSDK = (AFh1dSDK) getMediationNetwork(new Object[]{aFd1uSDK}, 855295870, -855295867, System.identityHashCode(aFd1uSDK));
            if (aFh1dSDK == null) {
                return;
            }
        }
        if (aFd1uSDK.getMonetizationNetwork(aFh1dSDK)) {
            aFd1uSDK.getRevenue().AFAdRevenueData(th, str);
            int i4 = copydefault + 91;
            AFLogger = i4 % 128;
            int i5 = i4 % 2;
        }
    }

    @Override // com.appsflyer.internal.AFd1vSDK
    public final void getMediationNetwork(final Throwable th, final String str) {
        int i = 2 % 2;
        int i2 = AFLogger + 75;
        copydefault = i2 % 128;
        int i3 = i2 % 2;
        Intrinsics.checkNotNullParameter(th, "");
        Intrinsics.checkNotNullParameter(str, "");
        areAllFieldsValid().execute(new Runnable() { // from class: com.appsflyer.internal.AFd1uSDK$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                AFd1uSDK.getMediationNetwork(this.f$0, th, str);
            }
        });
        int i4 = copydefault + 53;
        AFLogger = i4 % 128;
        int i5 = i4 % 2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getMediationNetwork(AFd1uSDK aFd1uSDK) {
        int i = 2 % 2;
        int i2 = AFLogger + 83;
        copydefault = i2 % 128;
        int i3 = i2 % 2;
        Intrinsics.checkNotNullParameter(aFd1uSDK, "");
        aFd1uSDK.copydefault();
        int i4 = copydefault + 105;
        AFLogger = i4 % 128;
        int i5 = i4 % 2;
    }

    @Override // com.appsflyer.internal.AFd1vSDK
    public final void AFAdRevenueData(AFd1vSDK.AFa1ySDK aFa1ySDK) {
        int i = 2 % 2;
        int i2 = AFLogger + 21;
        copydefault = i2 % 128;
        if (i2 % 2 == 0) {
            this.component2 = aFa1ySDK;
            areAllFieldsValid().execute(new Runnable() { // from class: com.appsflyer.internal.AFd1uSDK$$ExternalSyntheticLambda2
                @Override // java.lang.Runnable
                public final void run() {
                    AFd1uSDK.getMediationNetwork(this.f$0);
                }
            });
        } else {
            this.component2 = aFa1ySDK;
            areAllFieldsValid().execute(new Runnable() { // from class: com.appsflyer.internal.AFd1uSDK$$ExternalSyntheticLambda2
                @Override // java.lang.Runnable
                public final void run() {
                    AFd1uSDK.getMediationNetwork(this.f$0);
                }
            });
            throw null;
        }
    }

    private static /* synthetic */ Object getCurrencyIso4217Code(Object[] objArr) {
        AFd1uSDK aFd1uSDK = (AFd1uSDK) objArr[0];
        int i = 2 % 2;
        int i2 = AFLogger + 43;
        copydefault = i2 % 128;
        int i3 = i2 % 2;
        Intrinsics.checkNotNullParameter(aFd1uSDK, "");
        aFd1uSDK.equals();
        int i4 = copydefault + 69;
        AFLogger = i4 % 128;
        if (i4 % 2 == 0) {
            int i5 = 22 / 0;
        }
        return null;
    }

    @Override // com.appsflyer.internal.AFd1vSDK
    public final void AFAdRevenueData() {
        int i = 2 % 2;
        int i2 = copydefault + 61;
        AFLogger = i2 % 128;
        if (i2 % 2 != 0) {
            areAllFieldsValid().execute(new Runnable() { // from class: com.appsflyer.internal.AFd1uSDK$$ExternalSyntheticLambda1
                @Override // java.lang.Runnable
                public final void run() {
                    AFd1uSDK.AFAdRevenueData(this.f$0);
                }
            });
            int i3 = AFLogger + 81;
            copydefault = i3 % 128;
            int i4 = i3 % 2;
            return;
        }
        areAllFieldsValid().execute(new Runnable() { // from class: com.appsflyer.internal.AFd1uSDK$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                AFd1uSDK.AFAdRevenueData(this.f$0);
            }
        });
        throw null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getMonetizationNetwork(AFd1uSDK aFd1uSDK) {
        int i = 2 % 2;
        int i2 = copydefault + 9;
        AFLogger = i2 % 128;
        int i3 = i2 % 2;
        Intrinsics.checkNotNullParameter(aFd1uSDK, "");
        aFd1uSDK.copy();
        int i4 = copydefault + 51;
        AFLogger = i4 % 128;
        int i5 = i4 % 2;
    }

    private static /* synthetic */ Object AFAdRevenueData(Object[] objArr) {
        final AFd1uSDK aFd1uSDK = (AFd1uSDK) objArr[0];
        int i = 2 % 2;
        int i2 = AFLogger + 79;
        copydefault = i2 % 128;
        if (i2 % 2 != 0) {
            aFd1uSDK.areAllFieldsValid().execute(new Runnable() { // from class: com.appsflyer.internal.AFd1uSDK$$ExternalSyntheticLambda3
                @Override // java.lang.Runnable
                public final void run() {
                    AFd1uSDK.getMonetizationNetwork(this.f$0);
                }
            });
            int i3 = 76 / 0;
        } else {
            aFd1uSDK.areAllFieldsValid().execute(new Runnable() { // from class: com.appsflyer.internal.AFd1uSDK$$ExternalSyntheticLambda3
                @Override // java.lang.Runnable
                public final void run() {
                    AFd1uSDK.getMonetizationNetwork(this.f$0);
                }
            });
        }
        int i4 = copydefault + 21;
        AFLogger = i4 % 128;
        if (i4 % 2 == 0) {
            int i5 = 93 / 0;
        }
        return null;
    }

    /* JADX WARN: Code duplicated, block: B:35:0x00bd A[Catch: all -> 0x0244, PHI: r1
  0x00bd: PHI (r1v27 java.lang.String) = (r1v26 java.lang.String), (r1v42 java.lang.String) binds: [B:34:0x00bb, B:29:0x00b4] A[DONT_GENERATE, DONT_INLINE], TryCatch #0 {, blocks: (B:4:0x0002, B:6:0x001a, B:8:0x001f, B:10:0x002d, B:12:0x0038, B:15:0x0059, B:18:0x007a, B:20:0x008b, B:22:0x0092, B:24:0x00a4, B:26:0x00af, B:35:0x00bd, B:37:0x00d1, B:39:0x00db, B:41:0x00e1, B:43:0x00f0, B:45:0x00f6, B:47:0x0104, B:49:0x0113, B:51:0x0122, B:53:0x0135, B:55:0x0143, B:57:0x0149, B:59:0x014f, B:61:0x0169, B:63:0x016c, B:65:0x0172, B:67:0x0182, B:69:0x0186, B:71:0x018c, B:73:0x019c, B:75:0x01a0, B:81:0x01af, B:88:0x021c, B:90:0x0220, B:92:0x0230, B:93:0x023d, B:83:0x01bf, B:85:0x01dd, B:86:0x01f9, B:78:0x01a7, B:60:0x015d, B:52:0x0132, B:32:0x00b8, B:33:0x00b9, B:87:0x020c, B:28:0x00b3), top: B:101:0x0002, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:37:0x00d1 A[Catch: all -> 0x0244, TryCatch #0 {, blocks: (B:4:0x0002, B:6:0x001a, B:8:0x001f, B:10:0x002d, B:12:0x0038, B:15:0x0059, B:18:0x007a, B:20:0x008b, B:22:0x0092, B:24:0x00a4, B:26:0x00af, B:35:0x00bd, B:37:0x00d1, B:39:0x00db, B:41:0x00e1, B:43:0x00f0, B:45:0x00f6, B:47:0x0104, B:49:0x0113, B:51:0x0122, B:53:0x0135, B:55:0x0143, B:57:0x0149, B:59:0x014f, B:61:0x0169, B:63:0x016c, B:65:0x0172, B:67:0x0182, B:69:0x0186, B:71:0x018c, B:73:0x019c, B:75:0x01a0, B:81:0x01af, B:88:0x021c, B:90:0x0220, B:92:0x0230, B:93:0x023d, B:83:0x01bf, B:85:0x01dd, B:86:0x01f9, B:78:0x01a7, B:60:0x015d, B:52:0x0132, B:32:0x00b8, B:33:0x00b9, B:87:0x020c, B:28:0x00b3), top: B:101:0x0002, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:44:0x00f5  */
    /* JADX WARN: Code duplicated, block: B:47:0x0104 A[Catch: all -> 0x0244, TryCatch #0 {, blocks: (B:4:0x0002, B:6:0x001a, B:8:0x001f, B:10:0x002d, B:12:0x0038, B:15:0x0059, B:18:0x007a, B:20:0x008b, B:22:0x0092, B:24:0x00a4, B:26:0x00af, B:35:0x00bd, B:37:0x00d1, B:39:0x00db, B:41:0x00e1, B:43:0x00f0, B:45:0x00f6, B:47:0x0104, B:49:0x0113, B:51:0x0122, B:53:0x0135, B:55:0x0143, B:57:0x0149, B:59:0x014f, B:61:0x0169, B:63:0x016c, B:65:0x0172, B:67:0x0182, B:69:0x0186, B:71:0x018c, B:73:0x019c, B:75:0x01a0, B:81:0x01af, B:88:0x021c, B:90:0x0220, B:92:0x0230, B:93:0x023d, B:83:0x01bf, B:85:0x01dd, B:86:0x01f9, B:78:0x01a7, B:60:0x015d, B:52:0x0132, B:32:0x00b8, B:33:0x00b9, B:87:0x020c, B:28:0x00b3), top: B:101:0x0002, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:49:0x0113 A[Catch: all -> 0x0244, TryCatch #0 {, blocks: (B:4:0x0002, B:6:0x001a, B:8:0x001f, B:10:0x002d, B:12:0x0038, B:15:0x0059, B:18:0x007a, B:20:0x008b, B:22:0x0092, B:24:0x00a4, B:26:0x00af, B:35:0x00bd, B:37:0x00d1, B:39:0x00db, B:41:0x00e1, B:43:0x00f0, B:45:0x00f6, B:47:0x0104, B:49:0x0113, B:51:0x0122, B:53:0x0135, B:55:0x0143, B:57:0x0149, B:59:0x014f, B:61:0x0169, B:63:0x016c, B:65:0x0172, B:67:0x0182, B:69:0x0186, B:71:0x018c, B:73:0x019c, B:75:0x01a0, B:81:0x01af, B:88:0x021c, B:90:0x0220, B:92:0x0230, B:93:0x023d, B:83:0x01bf, B:85:0x01dd, B:86:0x01f9, B:78:0x01a7, B:60:0x015d, B:52:0x0132, B:32:0x00b8, B:33:0x00b9, B:87:0x020c, B:28:0x00b3), top: B:101:0x0002, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:51:0x0122 A[Catch: all -> 0x0244, TryCatch #0 {, blocks: (B:4:0x0002, B:6:0x001a, B:8:0x001f, B:10:0x002d, B:12:0x0038, B:15:0x0059, B:18:0x007a, B:20:0x008b, B:22:0x0092, B:24:0x00a4, B:26:0x00af, B:35:0x00bd, B:37:0x00d1, B:39:0x00db, B:41:0x00e1, B:43:0x00f0, B:45:0x00f6, B:47:0x0104, B:49:0x0113, B:51:0x0122, B:53:0x0135, B:55:0x0143, B:57:0x0149, B:59:0x014f, B:61:0x0169, B:63:0x016c, B:65:0x0172, B:67:0x0182, B:69:0x0186, B:71:0x018c, B:73:0x019c, B:75:0x01a0, B:81:0x01af, B:88:0x021c, B:90:0x0220, B:92:0x0230, B:93:0x023d, B:83:0x01bf, B:85:0x01dd, B:86:0x01f9, B:78:0x01a7, B:60:0x015d, B:52:0x0132, B:32:0x00b8, B:33:0x00b9, B:87:0x020c, B:28:0x00b3), top: B:101:0x0002, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:52:0x0132 A[Catch: all -> 0x0244, TryCatch #0 {, blocks: (B:4:0x0002, B:6:0x001a, B:8:0x001f, B:10:0x002d, B:12:0x0038, B:15:0x0059, B:18:0x007a, B:20:0x008b, B:22:0x0092, B:24:0x00a4, B:26:0x00af, B:35:0x00bd, B:37:0x00d1, B:39:0x00db, B:41:0x00e1, B:43:0x00f0, B:45:0x00f6, B:47:0x0104, B:49:0x0113, B:51:0x0122, B:53:0x0135, B:55:0x0143, B:57:0x0149, B:59:0x014f, B:61:0x0169, B:63:0x016c, B:65:0x0172, B:67:0x0182, B:69:0x0186, B:71:0x018c, B:73:0x019c, B:75:0x01a0, B:81:0x01af, B:88:0x021c, B:90:0x0220, B:92:0x0230, B:93:0x023d, B:83:0x01bf, B:85:0x01dd, B:86:0x01f9, B:78:0x01a7, B:60:0x015d, B:52:0x0132, B:32:0x00b8, B:33:0x00b9, B:87:0x020c, B:28:0x00b3), top: B:101:0x0002, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:60:0x015d A[Catch: all -> 0x0244, TryCatch #0 {, blocks: (B:4:0x0002, B:6:0x001a, B:8:0x001f, B:10:0x002d, B:12:0x0038, B:15:0x0059, B:18:0x007a, B:20:0x008b, B:22:0x0092, B:24:0x00a4, B:26:0x00af, B:35:0x00bd, B:37:0x00d1, B:39:0x00db, B:41:0x00e1, B:43:0x00f0, B:45:0x00f6, B:47:0x0104, B:49:0x0113, B:51:0x0122, B:53:0x0135, B:55:0x0143, B:57:0x0149, B:59:0x014f, B:61:0x0169, B:63:0x016c, B:65:0x0172, B:67:0x0182, B:69:0x0186, B:71:0x018c, B:73:0x019c, B:75:0x01a0, B:81:0x01af, B:88:0x021c, B:90:0x0220, B:92:0x0230, B:93:0x023d, B:83:0x01bf, B:85:0x01dd, B:86:0x01f9, B:78:0x01a7, B:60:0x015d, B:52:0x0132, B:32:0x00b8, B:33:0x00b9, B:87:0x020c, B:28:0x00b3), top: B:101:0x0002, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:62:0x016b  */
    /* JADX WARN: Code duplicated, block: B:64:0x0171  */
    /* JADX WARN: Code duplicated, block: B:82:0x01bd A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:83:0x01bf A[Catch: all -> 0x0244, TryCatch #0 {, blocks: (B:4:0x0002, B:6:0x001a, B:8:0x001f, B:10:0x002d, B:12:0x0038, B:15:0x0059, B:18:0x007a, B:20:0x008b, B:22:0x0092, B:24:0x00a4, B:26:0x00af, B:35:0x00bd, B:37:0x00d1, B:39:0x00db, B:41:0x00e1, B:43:0x00f0, B:45:0x00f6, B:47:0x0104, B:49:0x0113, B:51:0x0122, B:53:0x0135, B:55:0x0143, B:57:0x0149, B:59:0x014f, B:61:0x0169, B:63:0x016c, B:65:0x0172, B:67:0x0182, B:69:0x0186, B:71:0x018c, B:73:0x019c, B:75:0x01a0, B:81:0x01af, B:88:0x021c, B:90:0x0220, B:92:0x0230, B:93:0x023d, B:83:0x01bf, B:85:0x01dd, B:86:0x01f9, B:78:0x01a7, B:60:0x015d, B:52:0x0132, B:32:0x00b8, B:33:0x00b9, B:87:0x020c, B:28:0x00b3), top: B:101:0x0002, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:84:0x01db A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:85:0x01dd A[Catch: all -> 0x0244, TryCatch #0 {, blocks: (B:4:0x0002, B:6:0x001a, B:8:0x001f, B:10:0x002d, B:12:0x0038, B:15:0x0059, B:18:0x007a, B:20:0x008b, B:22:0x0092, B:24:0x00a4, B:26:0x00af, B:35:0x00bd, B:37:0x00d1, B:39:0x00db, B:41:0x00e1, B:43:0x00f0, B:45:0x00f6, B:47:0x0104, B:49:0x0113, B:51:0x0122, B:53:0x0135, B:55:0x0143, B:57:0x0149, B:59:0x014f, B:61:0x0169, B:63:0x016c, B:65:0x0172, B:67:0x0182, B:69:0x0186, B:71:0x018c, B:73:0x019c, B:75:0x01a0, B:81:0x01af, B:88:0x021c, B:90:0x0220, B:92:0x0230, B:93:0x023d, B:83:0x01bf, B:85:0x01dd, B:86:0x01f9, B:78:0x01a7, B:60:0x015d, B:52:0x0132, B:32:0x00b8, B:33:0x00b9, B:87:0x020c, B:28:0x00b3), top: B:101:0x0002, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:86:0x01f9 A[Catch: all -> 0x0244, TryCatch #0 {, blocks: (B:4:0x0002, B:6:0x001a, B:8:0x001f, B:10:0x002d, B:12:0x0038, B:15:0x0059, B:18:0x007a, B:20:0x008b, B:22:0x0092, B:24:0x00a4, B:26:0x00af, B:35:0x00bd, B:37:0x00d1, B:39:0x00db, B:41:0x00e1, B:43:0x00f0, B:45:0x00f6, B:47:0x0104, B:49:0x0113, B:51:0x0122, B:53:0x0135, B:55:0x0143, B:57:0x0149, B:59:0x014f, B:61:0x0169, B:63:0x016c, B:65:0x0172, B:67:0x0182, B:69:0x0186, B:71:0x018c, B:73:0x019c, B:75:0x01a0, B:81:0x01af, B:88:0x021c, B:90:0x0220, B:92:0x0230, B:93:0x023d, B:83:0x01bf, B:85:0x01dd, B:86:0x01f9, B:78:0x01a7, B:60:0x015d, B:52:0x0132, B:32:0x00b8, B:33:0x00b9, B:87:0x020c, B:28:0x00b3), top: B:101:0x0002, inners: #1 }] */
    private final synchronized void copydefault() {
        Integer numValueOf;
        String str;
        String str2;
        String str3;
        MatchResult matchResultMatchEntire;
        int i;
        MatchGroup matchGroup;
        int iIntValue;
        MatchGroup matchGroup2;
        int iIntValue2;
        MatchGroup matchGroup3;
        int iIntValue3;
        String value;
        Integer intOrNull;
        String value2;
        Integer intOrNull2;
        String value3;
        int i2 = 2 % 2;
        AFh1dSDK aFh1dSDK = (AFh1dSDK) getMediationNetwork(new Object[]{this}, 855295870, -855295867, System.identityHashCode(this));
        if ((aFh1dSDK != null ? aFh1dSDK.getMediationNetwork : -1L) < TimeUnit.MILLISECONDS.toSeconds(System.currentTimeMillis())) {
            int i3 = AFLogger + 47;
            copydefault = i3 % 128;
            if (i3 % 2 != 0) {
                AFg1gSDK.v$default(AFLogger.INSTANCE, AFg1cSDK.EXCEPTION_MANAGER, "TTL is already passed", false, 4, null);
                component2().getMonetizationNetwork("af_send_exc_to_server_window");
                getRevenue().getMonetizationNetwork();
                return;
            } else {
                AFg1gSDK.v$default(AFLogger.INSTANCE, AFg1cSDK.EXCEPTION_MANAGER, "TTL is already passed", false, 4, null);
                component2().getMonetizationNetwork("af_send_exc_to_server_window");
                getRevenue().getMonetizationNetwork();
                return;
            }
        }
        AFh1dSDK aFh1dSDK2 = (AFh1dSDK) getMediationNetwork(new Object[]{this}, 855295870, -855295867, System.identityHashCode(this));
        boolean monetizationNetwork = false;
        if (aFh1dSDK2 == null || !getMediationNetwork(aFh1dSDK2)) {
            component2().getMonetizationNetwork("af_send_exc_to_server_window");
            getRevenue().getMonetizationNetwork();
        } else {
            AFh1dSDK aFh1dSDK3 = (AFh1dSDK) getMediationNetwork(new Object[]{this}, 855295870, -855295867, System.identityHashCode(this));
            Pair<Integer, Integer> mediationNetwork = null;
            if (aFh1dSDK3 != null) {
                int i4 = AFLogger + 111;
                copydefault = i4 % 128;
                if (i4 % 2 != 0) {
                    str3 = aFh1dSDK3.getRevenue;
                    int i5 = 76 / 0;
                    if (str3 != null) {
                        Intrinsics.checkNotNullParameter(str3, "");
                        matchResultMatchEntire = new Regex("(\\d+).(\\d+).(\\d+).*").matchEntire(str3);
                        if (matchResultMatchEntire != null) {
                            matchGroup = matchResultMatchEntire.getGroups().get(1);
                            if (matchGroup != null || (value3 = matchGroup.getValue()) == null) {
                                iIntValue = 0;
                            } else {
                                int i6 = copydefault + 119;
                                AFLogger = i6 % 128;
                                int i7 = i6 % 2;
                                Integer intOrNull3 = StringsKt.toIntOrNull(value3);
                                if (intOrNull3 != null) {
                                    iIntValue = intOrNull3.intValue();
                                } else {
                                    iIntValue = 0;
                                }
                            }
                            int i8 = iIntValue * DurationKt.NANOS_IN_MILLIS;
                            matchGroup2 = matchResultMatchEntire.getGroups().get(2);
                            if (matchGroup2 != null) {
                                int i9 = copydefault + 95;
                                AFLogger = i9 % 128;
                                int i10 = i9 % 2;
                                value2 = matchGroup2.getValue();
                                if (value2 != null) {
                                    int i11 = copydefault + 113;
                                    AFLogger = i11 % 128;
                                    int i12 = i11 % 2;
                                    intOrNull2 = StringsKt.toIntOrNull(value2);
                                    if (intOrNull2 != null) {
                                        iIntValue2 = intOrNull2.intValue();
                                        int i13 = AFLogger + 87;
                                        copydefault = i13 % 128;
                                        int i14 = i13 % 2;
                                        int i15 = 2 % 2;
                                    } else {
                                        int i16 = 2 % 2;
                                        iIntValue2 = 0;
                                    }
                                } else {
                                    int i17 = 2 % 2;
                                    iIntValue2 = 0;
                                }
                            } else {
                                int i18 = 2 % 2;
                                iIntValue2 = 0;
                            }
                            int i19 = i8 + (iIntValue2 * 1000);
                            matchGroup3 = matchResultMatchEntire.getGroups().get(3);
                            if (matchGroup3 != null || (value = matchGroup3.getValue()) == null || (intOrNull = StringsKt.toIntOrNull(value)) == null) {
                                int i20 = copydefault + 85;
                                AFLogger = i20 % 128;
                                int i21 = i20 % 2;
                                int i22 = 2 % 2;
                                iIntValue3 = 0;
                            } else {
                                int i23 = copydefault + 123;
                                AFLogger = i23 % 128;
                                int i24 = i23 % 2;
                                iIntValue3 = intOrNull.intValue();
                            }
                            i = i19 + iIntValue3;
                        } else {
                            i = -1;
                        }
                        numValueOf = Integer.valueOf(i);
                    } else {
                        numValueOf = null;
                    }
                } else {
                    str3 = aFh1dSDK3.getRevenue;
                    if (str3 != null) {
                        Intrinsics.checkNotNullParameter(str3, "");
                        matchResultMatchEntire = new Regex("(\\d+).(\\d+).(\\d+).*").matchEntire(str3);
                        if (matchResultMatchEntire != null) {
                            matchGroup = matchResultMatchEntire.getGroups().get(1);
                            if (matchGroup != null) {
                                iIntValue = 0;
                            } else {
                                iIntValue = 0;
                            }
                            int i25 = iIntValue * DurationKt.NANOS_IN_MILLIS;
                            matchGroup2 = matchResultMatchEntire.getGroups().get(2);
                            if (matchGroup2 != null) {
                                int i26 = copydefault + 95;
                                AFLogger = i26 % 128;
                                int i110 = i26 % 2;
                                value2 = matchGroup2.getValue();
                                if (value2 != null) {
                                    int i111 = copydefault + 113;
                                    AFLogger = i111 % 128;
                                    int i112 = i111 % 2;
                                    intOrNull2 = StringsKt.toIntOrNull(value2);
                                    if (intOrNull2 != null) {
                                        iIntValue2 = intOrNull2.intValue();
                                        int i113 = AFLogger + 87;
                                        copydefault = i113 % 128;
                                        int i114 = i113 % 2;
                                        int i115 = 2 % 2;
                                    } else {
                                        int i116 = 2 % 2;
                                        iIntValue2 = 0;
                                    }
                                } else {
                                    int i117 = 2 % 2;
                                    iIntValue2 = 0;
                                }
                            } else {
                                int i118 = 2 % 2;
                                iIntValue2 = 0;
                            }
                            int i119 = i25 + (iIntValue2 * 1000);
                            matchGroup3 = matchResultMatchEntire.getGroups().get(3);
                            if (matchGroup3 != null) {
                                int i27 = copydefault + 85;
                                AFLogger = i27 % 128;
                                int i28 = i27 % 2;
                                int i29 = 2 % 2;
                                iIntValue3 = 0;
                            } else {
                                int i210 = copydefault + 85;
                                AFLogger = i210 % 128;
                                int i211 = i210 % 2;
                                int i212 = 2 % 2;
                                iIntValue3 = 0;
                            }
                            i = i119 + iIntValue3;
                        } else {
                            i = -1;
                        }
                        numValueOf = Integer.valueOf(i);
                    } else {
                        numValueOf = null;
                    }
                }
            } else {
                numValueOf = null;
            }
            AFh1dSDK aFh1dSDK4 = (AFh1dSDK) getMediationNetwork(new Object[]{this}, 855295870, -855295867, System.identityHashCode(this));
            Pair<Integer, Integer> revenue = (aFh1dSDK4 == null || (str2 = aFh1dSDK4.getRevenue) == null) ? null : AFd1rSDK.getRevenue(str2);
            AFh1dSDK aFh1dSDK5 = (AFh1dSDK) getMediationNetwork(new Object[]{this}, 855295870, -855295867, System.identityHashCode(this));
            if (aFh1dSDK5 != null && (str = aFh1dSDK5.getRevenue) != null) {
                mediationNetwork = AFd1rSDK.getMediationNetwork(str);
            }
            if (numValueOf != null && numValueOf.intValue() == -1) {
                if (revenue != null) {
                    getRevenue().AFAdRevenueData(revenue.getFirst().intValue(), revenue.getSecond().intValue());
                } else if (mediationNetwork != null) {
                    getRevenue().AFAdRevenueData(mediationNetwork.getFirst().intValue(), mediationNetwork.getSecond().intValue());
                } else {
                    component2().getMonetizationNetwork("af_send_exc_to_server_window");
                    getRevenue().getMonetizationNetwork();
                    int i30 = 2 % 2;
                }
            } else if (revenue == null) {
                getRevenue().getRevenue(this.component1);
            } else if (revenue != null) {
                getRevenue().AFAdRevenueData(revenue.getFirst().intValue(), revenue.getSecond().intValue());
            } else if (mediationNetwork != null) {
                getRevenue().AFAdRevenueData(mediationNetwork.getFirst().intValue(), mediationNetwork.getSecond().intValue());
            } else {
                component2().getMonetizationNetwork("af_send_exc_to_server_window");
                getRevenue().getMonetizationNetwork();
                int i31 = 2 % 2;
            }
        }
        AFd1vSDK.AFa1ySDK aFa1ySDK = this.component2;
        if (aFa1ySDK != null) {
            AFh1dSDK aFh1dSDK6 = (AFh1dSDK) getMediationNetwork(new Object[]{this}, 855295870, -855295867, System.identityHashCode(this));
            if (aFh1dSDK6 != null) {
                int i32 = AFLogger + 71;
                copydefault = i32 % 128;
                int i33 = i32 % 2;
                monetizationNetwork = getMonetizationNetwork(aFh1dSDK6);
            }
            aFa1ySDK.onConfigurationChanged(monetizationNetwork);
        }
    }

    private final void equals() {
        AFh1dSDK aFh1dSDK;
        int i = 2 % 2;
        int i2 = copydefault + 119;
        AFLogger = i2 % 128;
        if (i2 % 2 == 0) {
            aFh1dSDK = (AFh1dSDK) getMediationNetwork(new Object[]{this}, 855295870, -855295867, System.identityHashCode(this));
            int i3 = 59 / 0;
            if (aFh1dSDK == null) {
                return;
            }
        } else {
            aFh1dSDK = (AFh1dSDK) getMediationNetwork(new Object[]{this}, 855295870, -855295867, System.identityHashCode(this));
            if (aFh1dSDK == null) {
                return;
            }
        }
        if (!getCurrencyIso4217Code(aFh1dSDK)) {
            AFg1gSDK.v$default(AFLogger.INSTANCE, AFg1cSDK.EXCEPTION_MANAGER, "skipping", false, 4, null);
            return;
        }
        int i4 = AFLogger + 33;
        copydefault = i4 % 128;
        if (i4 % 2 == 0) {
            String mediationNetwork = component4().getMediationNetwork();
            if (mediationNetwork != null) {
                String string = new JSONObject((Map) getMediationNetwork(new Object[]{AFAdRevenueData(aFh1dSDK), getRevenue().getMediationNetwork()}, -1072478634, 1072478634, (int) System.currentTimeMillis())).toString();
                Intrinsics.checkNotNullExpressionValue(string, "");
                Intrinsics.checkNotNullExpressionValue(mediationNetwork, "");
                getCurrencyIso4217Code(string, mediationNetwork);
                return;
            }
            return;
        }
        component4().getMediationNetwork();
        throw null;
    }

    private static void a(String str, int[] iArr, String str2, int i, Object[] objArr) throws UnsupportedEncodingException {
        char[] charArray;
        int length;
        char[] cArr;
        int i2;
        int i3 = 2 % 2;
        if (str2 != null) {
            int i4 = $11 + 39;
            $10 = i4 % 128;
            int i5 = i4 % 2;
            charArray = str2.toCharArray();
        } else {
            charArray = str2;
        }
        char[] cArr2 = charArray;
        Object bytes = str;
        if (str != null) {
            bytes = str.getBytes("ISO-8859-1");
        }
        byte[] bArr = (byte[]) bytes;
        AFk1nSDK aFk1nSDK = new AFk1nSDK();
        char[] cArr3 = hashCode;
        if (cArr3 != null) {
            int i6 = $11 + 61;
            $10 = i6 % 128;
            if (i6 % 2 != 0) {
                length = cArr3.length;
                cArr = new char[length];
                i2 = 1;
            } else {
                length = cArr3.length;
                cArr = new char[length];
                i2 = 0;
            }
            while (i2 < length) {
                int i7 = $11 + 97;
                $10 = i7 % 128;
                int i8 = i7 % 2;
                cArr[i2] = (char) (((long) cArr3[i2]) ^ (-5879130172463570806L));
                i2++;
            }
            cArr3 = cArr;
        }
        int i9 = (int) ((-5879130172463570806L) ^ ((long) equals));
        if (copy) {
            aFk1nSDK.getMonetizationNetwork = bArr.length;
            char[] cArr4 = new char[aFk1nSDK.getMonetizationNetwork];
            aFk1nSDK.AFAdRevenueData = 0;
            while (aFk1nSDK.AFAdRevenueData < aFk1nSDK.getMonetizationNetwork) {
                int i10 = $10 + 19;
                $11 = i10 % 128;
                int i11 = i10 % 2;
                cArr4[aFk1nSDK.AFAdRevenueData] = (char) (cArr3[bArr[(aFk1nSDK.getMonetizationNetwork - 1) - aFk1nSDK.AFAdRevenueData] + i] - i9);
                aFk1nSDK.AFAdRevenueData++;
            }
            objArr[0] = new String(cArr4);
            return;
        }
        if (!toString) {
            aFk1nSDK.getMonetizationNetwork = iArr.length;
            char[] cArr5 = new char[aFk1nSDK.getMonetizationNetwork];
            aFk1nSDK.AFAdRevenueData = 0;
            while (aFk1nSDK.AFAdRevenueData < aFk1nSDK.getMonetizationNetwork) {
                cArr5[aFk1nSDK.AFAdRevenueData] = (char) (cArr3[iArr[(aFk1nSDK.getMonetizationNetwork - 1) - aFk1nSDK.AFAdRevenueData] - i] - i9);
                aFk1nSDK.AFAdRevenueData++;
            }
            objArr[0] = new String(cArr5);
            return;
        }
        aFk1nSDK.getMonetizationNetwork = cArr2.length;
        char[] cArr6 = new char[aFk1nSDK.getMonetizationNetwork];
        aFk1nSDK.AFAdRevenueData = 0;
        while (aFk1nSDK.AFAdRevenueData < aFk1nSDK.getMonetizationNetwork) {
            cArr6[aFk1nSDK.AFAdRevenueData] = (char) (cArr3[cArr2[(aFk1nSDK.getMonetizationNetwork - 1) - aFk1nSDK.AFAdRevenueData] - i] - i9);
            aFk1nSDK.AFAdRevenueData++;
        }
        String str3 = new String(cArr6);
        int i12 = $11 + 27;
        $10 = i12 % 128;
        if (i12 % 2 == 0) {
            objArr[0] = str3;
        } else {
            int i13 = 15 / 0;
            objArr[0] = str3;
        }
    }

    private final synchronized void copy() {
        boolean monetizationNetwork;
        int i = 2 % 2;
        AFh1dSDK aFh1dSDK = (AFh1dSDK) getMediationNetwork(new Object[]{this}, 855295870, -855295867, System.identityHashCode(this));
        if (aFh1dSDK != null) {
            int i2 = copydefault + 57;
            AFLogger = i2 % 128;
            if (i2 % 2 == 0) {
                int i3 = aFh1dSDK.AFAdRevenueData;
                Object obj = null;
                obj.hashCode();
                throw null;
            }
            if (aFh1dSDK.AFAdRevenueData == -1) {
                component2().getMonetizationNetwork("af_send_exc_to_server_window");
            } else if (component2().getCurrencyIso4217Code("af_send_exc_to_server_window", -1L) == -1) {
                int i4 = copydefault + 119;
                AFLogger = i4 % 128;
                int i5 = i4 % 2;
                getRevenue(aFh1dSDK);
            }
            monetizationNetwork = getMonetizationNetwork(aFh1dSDK);
            int i6 = 2 % 2;
        } else {
            monetizationNetwork = false;
        }
        AFd1vSDK.AFa1ySDK aFa1ySDK = this.component2;
        if (aFa1ySDK == null) {
            int i7 = AFLogger + 107;
            copydefault = i7 % 128;
            int i8 = i7 % 2;
        } else {
            int i9 = AFLogger + 73;
            copydefault = i9 % 128;
            int i10 = i9 % 2;
            aFa1ySDK.onConfigurationChanged(monetizationNetwork);
        }
    }

    private final void getRevenue(AFh1dSDK aFh1dSDK) {
        int i;
        long jCurrentTimeMillis;
        int i2 = 2 % 2;
        int i3 = copydefault + 115;
        AFLogger = i3 % 128;
        if (i3 % 2 == 0) {
            i = aFh1dSDK.getCurrencyIso4217Code;
            jCurrentTimeMillis = System.currentTimeMillis() ^ TimeUnit.DAYS.toMillis(aFh1dSDK.AFAdRevenueData);
        } else {
            i = aFh1dSDK.getCurrencyIso4217Code;
            jCurrentTimeMillis = System.currentTimeMillis() + TimeUnit.DAYS.toMillis(aFh1dSDK.AFAdRevenueData);
        }
        AFc1qSDK aFc1qSDKComponent2 = component2();
        aFc1qSDKComponent2.getMonetizationNetwork("af_send_exc_to_server_window", jCurrentTimeMillis);
        aFc1qSDKComponent2.getMediationNetwork("af_send_exc_min", i);
    }

    private final Map<String, String> AFAdRevenueData(AFh1dSDK aFh1dSDK) throws UnsupportedEncodingException {
        int i = 2 % 2;
        Object[] objArr = new Object[1];
        Object obj = null;
        a("\u0085\u0084\u0083\u0082\u0081", null, null, ExpandableListView.getPackedPositionType(0L) + WorkQueueKt.MASK, objArr);
        Map<String, String> mapMapOf = MapsKt.mapOf(TuplesKt.to(((String) objArr[0]).intern(), Build.BRAND), TuplesKt.to("model", Build.MODEL), TuplesKt.to("app_id", getMediationNetwork().getRevenue.getMonetizationNetwork.getPackageName()), TuplesKt.to("p_ex", new AFa1vSDK().getMonetizationNetwork()), TuplesKt.to("api", String.valueOf(Build.VERSION.SDK_INT)), TuplesKt.to("sdk", this.component1), TuplesKt.to("uid", AFb1iSDK.getRevenue(getMediationNetwork().getMonetizationNetwork)), TuplesKt.to("exc_config", aFh1dSDK.getMonetizationNetwork()));
        int i2 = copydefault + 125;
        AFLogger = i2 % 128;
        if (i2 % 2 != 0) {
            return mapMapOf;
        }
        obj.hashCode();
        throw null;
    }

    private final void getCurrencyIso4217Code(String str, String str2) {
        int i = 2 % 2;
        int i2 = copydefault + 53;
        AFLogger = i2 % 128;
        int i3 = i2 % 2;
        byte[] bytes = str.getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "");
        ((AFd1xSDK) getMediationNetwork(new Object[]{this}, -704520981, 704520985, System.identityHashCode(this))).getMediationNetwork(bytes, MapsKt.mapOf(TuplesKt.to("Authorization", AFj1cSDK.getRevenue(str, str2))), 2000);
        int i4 = copydefault + 95;
        AFLogger = i4 % 128;
        if (i4 % 2 == 0) {
            int i5 = 81 / 0;
        }
    }

    private final boolean getCurrencyIso4217Code(AFh1dSDK aFh1dSDK) {
        int i = 2 % 2;
        long jCurrentTimeMillis = System.currentTimeMillis();
        long currencyIso4217Code = component2().getCurrencyIso4217Code("af_send_exc_to_server_window", -1L);
        if (aFh1dSDK.getMediationNetwork < TimeUnit.MILLISECONDS.toSeconds(jCurrentTimeMillis)) {
            return false;
        }
        if (currencyIso4217Code != -1) {
            int i2 = AFLogger + 27;
            copydefault = i2 % 128;
            int i3 = i2 % 2;
            if (currencyIso4217Code >= jCurrentTimeMillis) {
                int iAFAdRevenueData = component2().AFAdRevenueData("af_send_exc_min", -1);
                if (iAFAdRevenueData == -1 || getRevenue().getCurrencyIso4217Code() < iAFAdRevenueData) {
                    return false;
                }
                return getMediationNetwork(aFh1dSDK);
            }
        }
        int i4 = AFLogger + 13;
        copydefault = i4 % 128;
        int i5 = i4 % 2;
        return false;
    }

    private final boolean getMonetizationNetwork(AFh1dSDK aFh1dSDK) {
        int i = 2 % 2;
        int i2 = AFLogger + 67;
        copydefault = i2 % 128;
        int i3 = i2 % 2;
        long jCurrentTimeMillis = System.currentTimeMillis();
        long currencyIso4217Code = component2().getCurrencyIso4217Code("af_send_exc_to_server_window", -1L);
        if (aFh1dSDK.getMediationNetwork < TimeUnit.MILLISECONDS.toSeconds(jCurrentTimeMillis)) {
            int i4 = AFLogger + 25;
            copydefault = i4 % 128;
            int i5 = i4 % 2;
            return false;
        }
        if (currencyIso4217Code == -1 || currencyIso4217Code < jCurrentTimeMillis) {
            return false;
        }
        return getMediationNetwork(aFh1dSDK);
    }

    private final boolean getMediationNetwork(AFh1dSDK aFh1dSDK) {
        int i = 2 % 2;
        new AFd1sSDK();
        String str = this.component1;
        String str2 = aFh1dSDK.getRevenue;
        Intrinsics.checkNotNullExpressionValue(str2, "");
        boolean mediationNetwork = AFd1sSDK.getMediationNetwork(str, str2);
        int i2 = copydefault + 79;
        AFLogger = i2 % 128;
        int i3 = i2 % 2;
        return mediationNetwork;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void AFAdRevenueData(AFd1uSDK aFd1uSDK) {
        getMediationNetwork(new Object[]{aFd1uSDK}, 801406437, -801406436, (int) System.currentTimeMillis());
    }

    private static Map<String, Object> getMediationNetwork(Map<String, ? extends Object> map, List<AFc1cSDK> list) {
        return (Map) getMediationNetwork(new Object[]{map, list}, -1072478634, 1072478634, (int) System.currentTimeMillis());
    }

    @Override // com.appsflyer.internal.AFd1vSDK
    public final void getCurrencyIso4217Code() {
        getMediationNetwork(new Object[]{this}, 58037992, -58037990, System.identityHashCode(this));
    }

    private AFd1xSDK component3() {
        return (AFd1xSDK) getMediationNetwork(new Object[]{this}, -704520981, 704520985, System.identityHashCode(this));
    }

    private final AFh1dSDK component1() {
        return (AFh1dSDK) getMediationNetwork(new Object[]{this}, 855295870, -855295867, System.identityHashCode(this));
    }
}
