package com.appsflyer.internal;

import android.util.Base64;
import com.appsflyer.AFLogger;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Arrays;
import java.util.List;
import java.util.Locale;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.text.Charsets;
import kotlin.text.Regex;
import kotlin.text.StringsKt;

/* JADX INFO: loaded from: classes.dex */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\t\n\u0002\u0010\u000b\n\u0002\b\u0005\u0018\u0000 \u00172\u00020\u0001:\u0001\u0017B\u0017\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0006\u0010\u0005\u001a\u00020\u0004¢\u0006\u0004\b\u0006\u0010\u0007R\u0015\u0010\u000b\u001a\u00020\b8BX\u0083\u0084\u0002¢\u0006\u0006\n\u0004\b\t\u0010\nR\u0015\u0010\r\u001a\u00020\b8BX\u0083\u0084\u0002¢\u0006\u0006\n\u0004\b\f\u0010\nR\u0011\u0010\u000e\u001a\u00020\b8G¢\u0006\u0006\u001a\u0004\b\u000e\u0010\u000fR\u0014\u0010\f\u001a\u00020\u00028\u0002X\u0083\u0004¢\u0006\u0006\n\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0010\u001a\u00020\u00128G¢\u0006\u0006\u001a\u0004\b\f\u0010\u0013R\u0014\u0010\u0015\u001a\u00020\u00048\u0002X\u0083\u0004¢\u0006\u0006\n\u0004\b\r\u0010\u0014R\u0011\u0010\u0016\u001a\u00020\b8G¢\u0006\u0006\u001a\u0004\b\u0010\u0010\u000f"}, d2 = {"Lcom/appsflyer/internal/AFe1zSDK;", "", "Lcom/appsflyer/internal/AFc1pSDK;", "p0", "Lcom/appsflyer/internal/AFc1qSDK;", "p1", "<init>", "(Lcom/appsflyer/internal/AFc1pSDK;Lcom/appsflyer/internal/AFc1qSDK;)V", "", "areAllFieldsValid", "Lkotlin/Lazy;", "getRevenue", "AFAdRevenueData", "getMonetizationNetwork", "getMediationNetwork", "()Ljava/lang/String;", "getCurrencyIso4217Code", "Lcom/appsflyer/internal/AFc1pSDK;", "", "()Z", "Lcom/appsflyer/internal/AFc1qSDK;", "component4", "component3", "AFa1ySDK"}, k = 1, mv = {1, 8, 0}, xi = 48)
public final class AFe1zSDK {
    private static AFe1vSDK component3;

    /* JADX INFO: renamed from: AFAdRevenueData, reason: from kotlin metadata */
    public final Lazy getMonetizationNetwork;

    /* JADX INFO: renamed from: areAllFieldsValid, reason: from kotlin metadata */
    private final Lazy getRevenue;

    /* JADX INFO: renamed from: getCurrencyIso4217Code, reason: from kotlin metadata */
    private final AFc1pSDK AFAdRevenueData;

    /* JADX INFO: renamed from: getMonetizationNetwork, reason: from kotlin metadata */
    private final AFc1qSDK component4;

    /* JADX INFO: renamed from: AFa1ySDK, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    public static String getMediationNetwork = "https://%scdn-%ssettings.%s/android/v1/%s/settings";
    public static String getRevenue = "https://%scdn-%stestsettings.%s/android/v1/%s/settings";
    private static final List<String> component1 = CollectionsKt.listOf((Object[]) new String[]{"googleplay", "playstore", "googleplaystore"});

    public AFe1zSDK(AFc1pSDK aFc1pSDK, AFc1qSDK aFc1qSDK) {
        Intrinsics.checkNotNullParameter(aFc1pSDK, "");
        Intrinsics.checkNotNullParameter(aFc1qSDK, "");
        this.AFAdRevenueData = aFc1pSDK;
        this.component4 = aFc1qSDK;
        this.getRevenue = LazyKt.lazy(new Function0<String>() { // from class: com.appsflyer.internal.AFe1zSDK.5
            @Override // kotlin.jvm.functions.Function0
            /* JADX INFO: renamed from: AFAdRevenueData, reason: merged with bridge method [inline-methods] */
            public final String invoke() {
                String monetizationNetwork = AFa1tSDK.getMonetizationNetwork(AFe1zSDK.this.component4, AFe1zSDK.this.AFAdRevenueData.component2());
                String str = monetizationNetwork;
                if (str != null && !StringsKt.isBlank(str)) {
                    String string = StringsKt.trim((CharSequence) str).toString();
                    Companion companion = AFe1zSDK.INSTANCE;
                    List<String> revenue = Companion.getRevenue();
                    Locale locale = Locale.getDefault();
                    Intrinsics.checkNotNullExpressionValue(locale, "");
                    String lowerCase = string.toLowerCase(locale);
                    Intrinsics.checkNotNullExpressionValue(lowerCase, "");
                    if (!revenue.contains(lowerCase)) {
                        monetizationNetwork = "-" + string;
                    } else {
                        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
                        String str2 = String.format("AF detected using redundant Google-Play channel for attribution - %s. Using without channel postfix.", Arrays.copyOf(new Object[]{string}, 1));
                        Intrinsics.checkNotNullExpressionValue(str2, "");
                        AFLogger.afWarnLog(str2);
                        monetizationNetwork = "";
                    }
                }
                return StringsKt.trim((CharSequence) (monetizationNetwork != null ? monetizationNetwork : "")).toString();
            }

            {
                super(0);
            }
        });
        this.getMonetizationNetwork = LazyKt.lazy(new Function0<String>() { // from class: com.appsflyer.internal.AFe1zSDK.4
            @Override // kotlin.jvm.functions.Function0
            /* JADX INFO: renamed from: getMediationNetwork, reason: merged with bridge method [inline-methods] */
            public final String invoke() {
                String packageName = AFe1zSDK.this.AFAdRevenueData.getRevenue.getMonetizationNetwork.getPackageName();
                Intrinsics.checkNotNullExpressionValue(packageName, "");
                return AFe1zSDK.getMonetizationNetwork(packageName, AFe1zSDK.getCurrencyIso4217Code(AFe1zSDK.this));
            }

            {
                super(0);
            }
        });
    }

    /* JADX INFO: renamed from: com.appsflyer.internal.AFe1zSDK$AFa1ySDK, reason: from kotlin metadata */
    @Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0010\u000e\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R \u0010\n\u001a\b\u0012\u0004\u0012\u00020\u00050\u00048\u0007X\u0087\u0004¢\u0006\f\n\u0004\b\u0006\u0010\u0007\u001a\u0004\b\b\u0010\tR\u0016\u0010\r\u001a\u00020\u00058\u0006@\u0006X\u0087\f¢\u0006\u0006\n\u0004\b\u000b\u0010\fR\u0016\u0010\b\u001a\u00020\u00058\u0006@\u0006X\u0087\f¢\u0006\u0006\n\u0004\b\b\u0010\fR\u001e\u0010\u0012\u001a\u0004\u0018\u00010\u000e8\u0006@\u0007X\u0087\u000e¢\u0006\f\n\u0004\b\u000f\u0010\u0010\"\u0004\b\u000b\u0010\u0011"}, d2 = {"Lcom/appsflyer/internal/AFe1zSDK$AFa1ySDK;", "", "<init>", "()V", "", "", "component1", "Ljava/util/List;", "getRevenue", "()Ljava/util/List;", "AFAdRevenueData", "getMediationNetwork", "Ljava/lang/String;", "getCurrencyIso4217Code", "Lcom/appsflyer/internal/AFe1vSDK;", "component3", "Lcom/appsflyer/internal/AFe1vSDK;", "(Lcom/appsflyer/internal/AFe1vSDK;)V", "getMonetizationNetwork"}, k = 1, mv = {1, 8, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        public static List<String> getRevenue() {
            return AFe1zSDK.component1;
        }

        public static void getMediationNetwork(AFe1vSDK aFe1vSDK) {
            AFe1zSDK.component3 = aFe1vSDK;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public static boolean AFAdRevenueData() {
        return component3 == null;
    }

    public final String getCurrencyIso4217Code() {
        AFe1wSDK aFe1wSDK;
        if (AFAdRevenueData()) {
            aFe1wSDK = AFe1wSDK.DEFAULT;
        } else {
            aFe1wSDK = AFe1wSDK.API;
        }
        int i = AFa1uSDK.getCurrencyIso4217Code[aFe1wSDK.ordinal()];
        if (i == 1) {
            return (String) this.getMonetizationNetwork.getValue();
        }
        if (i != 2) {
            if (i == 3) {
                return "";
            }
            throw new NoWhenBranchMatchedException();
        }
        AFe1vSDK aFe1vSDK = component3;
        String str = aFe1vSDK != null ? aFe1vSDK.AFAdRevenueData : null;
        return str == null ? "" : str;
    }

    public final String getMediationNetwork() {
        AFe1wSDK aFe1wSDK;
        if (AFAdRevenueData()) {
            aFe1wSDK = AFe1wSDK.DEFAULT;
        } else {
            aFe1wSDK = AFe1wSDK.API;
        }
        int i = AFa1uSDK.getCurrencyIso4217Code[aFe1wSDK.ordinal()];
        if (i == 1) {
            return "appsflyersdk.com";
        }
        if (i != 2) {
            if (i == 3) {
                return "";
            }
            throw new NoWhenBranchMatchedException();
        }
        AFe1vSDK aFe1vSDK = component3;
        String str = aFe1vSDK != null ? aFe1vSDK.getMediationNetwork : null;
        return str == null ? "" : str;
    }

    public static final /* synthetic */ String getMonetizationNetwork(String str, String str2) throws NoSuchAlgorithmException {
        String str3 = str + str2;
        Intrinsics.checkNotNullParameter(str3, "");
        MessageDigest messageDigest = MessageDigest.getInstance("SHA-256");
        byte[] bytes = str3.getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "");
        byte[] bArrDigest = messageDigest.digest(bytes);
        Intrinsics.checkNotNullExpressionValue(bArrDigest, "");
        String strEncodeToString = Base64.encodeToString(bArrDigest, 2);
        Intrinsics.checkNotNullExpressionValue(strEncodeToString, "");
        String lowerCase = strEncodeToString.toLowerCase(Locale.ROOT);
        Intrinsics.checkNotNullExpressionValue(lowerCase, "");
        String strSubstring = new Regex("[^\\w]+").replace(lowerCase, "").substring(0, 6);
        Intrinsics.checkNotNullExpressionValue(strSubstring, "");
        return strSubstring + ".";
    }

    public static final /* synthetic */ String getCurrencyIso4217Code(AFe1zSDK aFe1zSDK) {
        return (String) aFe1zSDK.getRevenue.getValue();
    }

    public /* synthetic */ class AFa1uSDK {
        public static final /* synthetic */ int[] getCurrencyIso4217Code;

        static {
            int[] iArr = new int[AFe1wSDK.values().length];
            try {
                iArr[AFe1wSDK.DEFAULT.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[AFe1wSDK.API.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[AFe1wSDK.RC.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            getCurrencyIso4217Code = iArr;
        }
    }

    public static final void getMediationNetwork(AFe1vSDK aFe1vSDK) {
        Companion.getMediationNetwork(aFe1vSDK);
    }
}
