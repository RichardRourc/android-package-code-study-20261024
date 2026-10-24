package com.appsflyer.internal;

import android.graphics.Color;
import android.graphics.ImageFormat;
import android.graphics.drawable.Drawable;
import android.media.AudioTrack;
import android.os.Build;
import android.os.Process;
import android.os.SystemClock;
import android.telephony.cdma.CdmaCellLocation;
import android.text.TextUtils;
import android.util.TypedValue;
import android.view.Gravity;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewConfiguration;
import android.widget.ExpandableListView;
import androidx.appcompat.app.AppCompatDelegate;
import com.adjust.sdk.Constants;
import com.appsflyer.AFLogger;
import com.appsflyer.AppsFlyerLib;
import com.appsflyer.AppsFlyerProperties;
import com.google.android.gms.common.ConnectionResult;
import java.lang.reflect.Method;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.UUID;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.text.Regex;

/* JADX INFO: loaded from: classes.dex */
public final class AFd1oSDK {
    private static int $10 = 0;
    private static int $11 = 1;
    public static String AFAdRevenueData = null;
    private static int areAllFieldsValid = 0;
    private static int component1 = 0;
    private static int component3 = 0;
    private static int copy = 0;
    private static byte[] copydefault = null;
    private static String getRevenue = null;
    private static int hashCode = 1;
    private static short[] toString;
    private final AFj1fSDK component2;
    private final AFe1zSDK component4;
    private final AFc1pSDK getCurrencyIso4217Code;
    private final AppsFlyerProperties getMediationNetwork;
    private final AFd1lSDK getMonetizationNetwork;

    public static /* synthetic */ Object getCurrencyIso4217Code(Object[] objArr, int i, int i2, int i3) {
        String str;
        String str2;
        String str3;
        int i4 = ~i;
        int i5 = (i * (-520)) + (i2 * 522) + ((~(i4 | i2 | i3)) * 521);
        int i6 = ~(i | (~i2));
        int i7 = i5 + (i6 * (-1042)) + ((i6 | (~(i2 | (~i3) | i4))) * 521);
        if (i7 == 1) {
            AFd1oSDK aFd1oSDK = (AFd1oSDK) objArr[0];
            AFh1mSDK aFh1mSDK = (AFh1mSDK) objArr[1];
            int i8 = 2 % 2;
            AFd1nSDK revenue = aFd1oSDK.getRevenue(new AFd1cSDK(aFh1mSDK.component1, aFh1mSDK.AFAdRevenueData(), "POST", Collections.emptyMap(), true), new AFd1eSDK());
            int i9 = copy + 67;
            hashCode = i9 % 128;
            int i10 = i9 % 2;
            return revenue;
        }
        if (i7 != 2) {
            AFd1oSDK aFd1oSDK2 = (AFd1oSDK) objArr[0];
            int i11 = 2 % 2;
            HashMap map = new HashMap();
            map.put("build_number", "6.17.0");
            map.put("counter", Integer.valueOf(aFd1oSDK2.getCurrencyIso4217Code.getMonetizationNetwork.AFAdRevenueData("appsFlyerCount", 0)));
            map.put("model", Build.MODEL);
            Object[] objArr2 = new Object[1];
            a((byte) (83 - MotionEvent.axisFromString("")), (short) (Gravity.getAbsoluteGravity(0, 0) + 43), (-88) - ((Process.getThreadPriority(0) + 20) >> 6), MotionEvent.axisFromString("") + 2017627781, KeyEvent.keyCodeFromString("") + 1432018452, objArr2);
            map.put(((String) objArr2[0]).intern(), Build.BRAND);
            map.put("sdk", Integer.toString(Build.VERSION.SDK_INT));
            AFc1pSDK aFc1pSDK = aFd1oSDK2.getCurrencyIso4217Code;
            map.put("app_version_name", AFj1iSDK.getMediationNetwork(aFc1pSDK.getRevenue.getMonetizationNetwork, aFc1pSDK.getRevenue.getMonetizationNetwork.getPackageName()));
            map.put("app_id", aFd1oSDK2.getCurrencyIso4217Code.getRevenue.getMonetizationNetwork.getPackageName());
            map.put("platformextension", new AFa1vSDK().getMonetizationNetwork());
            int i12 = copy + 93;
            hashCode = i12 % 128;
            int i13 = i12 % 2;
            return map;
        }
        AFd1oSDK aFd1oSDK3 = (AFd1oSDK) objArr[0];
        boolean zBooleanValue = ((Boolean) objArr[1]).booleanValue();
        boolean zBooleanValue2 = ((Boolean) objArr[2]).booleanValue();
        String str4 = (String) objArr[3];
        ((Number) objArr[4]).intValue();
        int i14 = 2 % 2;
        AFe1zSDK aFe1zSDK = aFd1oSDK3.component4;
        Intrinsics.checkNotNullParameter(str4, "");
        if (zBooleanValue) {
            str = AFe1zSDK.getRevenue;
        } else {
            str = AFe1zSDK.getMediationNetwork;
            int i15 = hashCode + 47;
            copy = i15 % 128;
            int i16 = i15 % 2;
        }
        if (zBooleanValue2) {
            int i17 = copy + 115;
            hashCode = i17 % 128;
            int i18 = i17 % 2;
            str2 = "stg";
        } else {
            str2 = "";
        }
        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
        if (AFe1zSDK.AFAdRevenueData()) {
            str3 = (String) aFe1zSDK.getMonetizationNetwork.getValue();
        } else {
            int i19 = hashCode + 33;
            copy = i19 % 128;
            if (i19 % 2 != 0) {
                int i20 = 4 % 5;
            }
            str3 = "";
        }
        String str5 = String.format(str, Arrays.copyOf(new Object[]{str3, str2, aFe1zSDK.getMediationNetwork(), str4}, 4));
        Intrinsics.checkNotNullExpressionValue(str5, "");
        AFd1cSDK aFd1cSDK = new AFd1cSDK(str5, "GET");
        aFd1cSDK.component4 = ConnectionResult.DRIVE_EXTERNAL_STORAGE_REQUIRED;
        return aFd1oSDK3.getRevenue(aFd1cSDK, new AFd1bSDK());
    }

    static {
        getMonetizationNetwork();
        AFAdRevenueData = "https://%sgcdsdk.%s/install_data/v5.0/";
        getRevenue = "https://%sonelink.%s/shortlink-sdk/v2";
        int i = hashCode + 37;
        copy = i % 128;
        if (i % 2 != 0) {
            throw null;
        }
    }

    public AFd1oSDK(AFd1lSDK aFd1lSDK, AFc1pSDK aFc1pSDK, AppsFlyerProperties appsFlyerProperties, AFe1zSDK aFe1zSDK, AFj1fSDK aFj1fSDK) {
        this.getMonetizationNetwork = aFd1lSDK;
        this.getCurrencyIso4217Code = aFc1pSDK;
        this.getMediationNetwork = appsFlyerProperties;
        this.component4 = aFe1zSDK;
        this.component2 = aFj1fSDK;
    }

    /* JADX WARN: Code duplicated, block: B:18:0x0088  */
    public final AFd1nSDK<String> AFAdRevenueData(Map<String, Object> map, String str, String str2) {
        String strAFAdRevenueData;
        int i = 2 % 2;
        Object obj = null;
        try {
            Object[] objArr = {map, str};
            Object method = AFa1kSDK.i.get(317123644);
            if (method == null) {
                method = ((Class) AFa1kSDK.getCurrencyIso4217Code((ViewConfiguration.getLongPressTimeout() >> 16) + 196, (char) (CdmaCellLocation.convertQuartSecToDecDegrees(0) > 0.0d ? 1 : (CdmaCellLocation.convertQuartSecToDecDegrees(0) == 0.0d ? 0 : -1)), 38 - (SystemClock.elapsedRealtime() > 0L ? 1 : (SystemClock.elapsedRealtime() == 0L ? 0 : -1)))).getMethod("getMediationNetwork", Map.class, String.class);
                AFa1kSDK.i.put(317123644, method);
            }
            byte[] bArr = (byte[]) ((Method) method).invoke(null, objArr);
            int i2 = hashCode;
            int i3 = i2 + 95;
            copy = i3 % 128;
            int i4 = i3 % 2;
            AFj1fSDK aFj1fSDK = this.component2;
            String str3 = str2;
            if (str3 != null) {
                int i5 = i2 + 119;
                copy = i5 % 128;
                if (i5 % 2 != 0) {
                    int i6 = 83 / 0;
                    if (str3.length() != 0) {
                        int i7 = copy + 75;
                        hashCode = i7 % 128;
                        int i8 = i7 % 2;
                        if (new Regex("4.?(\\d+)?.?(\\d+)").matches(str3) && !new Regex("3.?(\\d+)?.?(\\d+)").matches(str3)) {
                            strAFAdRevenueData = aFj1fSDK.getMonetizationNetwork.AFAdRevenueData("https://%sars.%s/api/v2/android/validate_subscription_v2?app_id=");
                        }
                    }
                } else if (str3.length() != 0) {
                    int i9 = copy + 75;
                    hashCode = i9 % 128;
                    int i10 = i9 % 2;
                    if (new Regex("4.?(\\d+)?.?(\\d+)").matches(str3)) {
                    }
                }
                strAFAdRevenueData = aFj1fSDK.getMonetizationNetwork.AFAdRevenueData("https://%sars.%s/api/v2/android/validate_subscription?app_id=");
            } else {
                strAFAdRevenueData = aFj1fSDK.getMonetizationNetwork.AFAdRevenueData("https://%sars.%s/api/v2/android/validate_subscription?app_id=");
            }
            AFd1nSDK<String> revenue = getRevenue(new AFd1cSDK(aFj1fSDK.getRevenue(aFj1fSDK.getCurrencyIso4217Code(strAFAdRevenueData), false), bArr, "POST", Collections.emptyMap(), true), new AFd1eSDK());
            int i11 = hashCode + 33;
            copy = i11 % 128;
            if (i11 % 2 == 0) {
                return revenue;
            }
            obj.hashCode();
            throw null;
        } catch (Throwable th) {
            try {
                Throwable cause = th.getCause();
                if (cause != null) {
                    throw cause;
                }
                throw th;
            } catch (Throwable th2) {
                AFLogger.INSTANCE.e(AFg1cSDK.PURCHASE_VALIDATION, "AFFinalizer: reflection init failed.", th2, false, false);
                return null;
            }
        }
    }

    /* JADX WARN: Code duplicated, block: B:19:0x009a  */
    public final AFd1nSDK<String> getCurrencyIso4217Code(Map<String, Object> map, String str, String str2) {
        String strAFAdRevenueData;
        int i = 2 % 2;
        try {
            Object[] objArr = {map, str};
            Object method = AFa1kSDK.i.get(317123644);
            if (method == null) {
                method = ((Class) AFa1kSDK.getCurrencyIso4217Code(196 - View.combineMeasuredStates(0, 0), (char) View.resolveSize(0, 0), 36 - (ExpandableListView.getPackedPositionForChild(0, 0) > 0L ? 1 : (ExpandableListView.getPackedPositionForChild(0, 0) == 0L ? 0 : -1)))).getMethod("getMediationNetwork", Map.class, String.class);
                AFa1kSDK.i.put(317123644, method);
            }
            byte[] bArr = (byte[]) ((Method) method).invoke(null, objArr);
            int i2 = hashCode;
            int i3 = i2 + 103;
            copy = i3 % 128;
            int i4 = i3 % 2;
            AFj1fSDK aFj1fSDK = this.component2;
            String str3 = str2;
            if (str3 != null) {
                int i5 = i2 + 3;
                copy = i5 % 128;
                int i6 = i5 % 2;
                if (str3.length() == 0 || new Regex("4.?(\\d+)?.?(\\d+)").matches(str3) || new Regex("3.?(\\d+)?.?(\\d+)").matches(str3)) {
                    int i7 = hashCode + 75;
                    copy = i7 % 128;
                    int i8 = i7 % 2;
                    strAFAdRevenueData = aFj1fSDK.getMonetizationNetwork.AFAdRevenueData("https://%sviap.%s/api/v1/android/validate_purchase?app_id=");
                } else {
                    strAFAdRevenueData = aFj1fSDK.getMonetizationNetwork.AFAdRevenueData("https://%sviap.%s/api/v1/android/validate_purchase_v2?app_id=");
                }
            } else {
                int i9 = hashCode + 75;
                copy = i9 % 128;
                int i10 = i9 % 2;
                strAFAdRevenueData = aFj1fSDK.getMonetizationNetwork.AFAdRevenueData("https://%sviap.%s/api/v1/android/validate_purchase?app_id=");
            }
            AFd1nSDK<String> revenue = getRevenue(new AFd1cSDK(aFj1fSDK.getRevenue(aFj1fSDK.getCurrencyIso4217Code(strAFAdRevenueData), false), bArr, "POST", Collections.emptyMap(), true), new AFd1eSDK());
            int i11 = hashCode + 67;
            copy = i11 % 128;
            if (i11 % 2 != 0) {
                int i12 = 46 / 0;
            }
            return revenue;
        } catch (Throwable th) {
            try {
                Throwable cause = th.getCause();
                if (cause != null) {
                    throw cause;
                }
                throw th;
            } catch (Throwable th2) {
                AFLogger.INSTANCE.e(AFg1cSDK.ENGAGEMENT, "AFFinalizer: reflection init failed.", th2, false, false);
                return null;
            }
        }
    }

    public final AFd1nSDK<String> getMonetizationNetwork(Map<String, Object> map, String str) {
        int i = 2 % 2;
        int i2 = copy + 117;
        hashCode = i2 % 128;
        int i3 = i2 % 2;
        try {
            Object[] objArr = {map, str};
            Object method = AFa1kSDK.i.get(317123644);
            if (method == null) {
                method = ((Class) AFa1kSDK.getCurrencyIso4217Code(Gravity.getAbsoluteGravity(0, 0) + 196, (char) (1 - (ViewConfiguration.getZoomControlsTimeout() > 0L ? 1 : (ViewConfiguration.getZoomControlsTimeout() == 0L ? 0 : -1))), 37 - TextUtils.getOffsetAfter("", 0))).getMethod("getMediationNetwork", Map.class, String.class);
                AFa1kSDK.i.put(317123644, method);
            }
            byte[] bArr = (byte[]) ((Method) method).invoke(null, objArr);
            int i4 = copy + 69;
            hashCode = i4 % 128;
            int i5 = i4 % 2;
            AFj1fSDK aFj1fSDK = this.component2;
            return getRevenue(new AFd1cSDK(aFj1fSDK.getCurrencyIso4217Code(aFj1fSDK.getMonetizationNetwork.AFAdRevenueData("https://%svalidate-and-log.%s/api/v1.0/android/validateAndLog?app_id=")), bArr, "POST", Collections.emptyMap(), true), new AFd1eSDK());
        } catch (Throwable th) {
            try {
                Throwable cause = th.getCause();
                if (cause != null) {
                    throw cause;
                }
                throw th;
            } catch (Throwable th2) {
                AFLogger.INSTANCE.e(AFg1cSDK.PURCHASE_VALIDATION, "AFFinalizer: reflection init failed.", th2, false, false);
                return null;
            }
        }
    }

    /* JADX WARN: Code duplicated, block: B:41:0x011b  */
    public final AFd1nSDK<String> getCurrencyIso4217Code(AFh1rSDK aFh1rSDK, String str, AFc1iSDK aFc1iSDK) {
        String strAFAdRevenueData;
        String strAFAdRevenueData2;
        int i = 2 % 2;
        Object obj = null;
        try {
            Object[] objArr = {aFh1rSDK, str, aFc1iSDK};
            Object method = AFa1kSDK.i.get(-1609157430);
            if (method == null) {
                method = ((Class) AFa1kSDK.getCurrencyIso4217Code(TextUtils.indexOf("", "", 0, 0) + 196, (char) KeyEvent.normalizeMetaState(0), 37 - TextUtils.indexOf("", "", 0, 0))).getMethod("getMonetizationNetwork", AFh1rSDK.class, String.class, AFc1iSDK.class);
                AFa1kSDK.i.put(-1609157430, method);
            }
            byte[] bArr = (byte[]) ((Method) method).invoke(null, objArr);
            int i2 = copy + 13;
            hashCode = i2 % 128;
            int i3 = i2 % 2;
            AFj1fSDK aFj1fSDK = this.component2;
            Intrinsics.checkNotNullParameter(aFh1rSDK, "");
            boolean mediationNetwork = aFh1rSDK.getMediationNetwork();
            boolean z = aFh1rSDK instanceof AFh1lSDK;
            boolean z2 = aFh1rSDK instanceof AFh1jSDK;
            boolean z3 = aFh1rSDK instanceof AFh1kSDK;
            boolean z4 = aFh1rSDK instanceof AFi1zSDK;
            boolean z5 = aFh1rSDK instanceof AFh1gSDK;
            boolean z6 = aFh1rSDK instanceof AFg1wSDK;
            if (!(aFh1rSDK instanceof AFh1eSDK)) {
                if (z3) {
                    strAFAdRevenueData = aFj1fSDK.getMonetizationNetwork.AFAdRevenueData(AFj1fSDK.getRevenue);
                } else {
                    int i4 = hashCode + 19;
                    int i5 = i4 % 128;
                    copy = i5;
                    if (i4 % 2 != 0) {
                        obj.hashCode();
                        throw null;
                    }
                    if (z2) {
                        strAFAdRevenueData = aFj1fSDK.getMonetizationNetwork.AFAdRevenueData(AFj1fSDK.getRevenue);
                    } else if (z) {
                        int i6 = i5 + 13;
                        hashCode = i6 % 128;
                        if (i6 % 2 == 0) {
                            aFj1fSDK.getMonetizationNetwork.AFAdRevenueData(AFj1fSDK.getCurrencyIso4217Code);
                            throw null;
                        }
                        strAFAdRevenueData = aFj1fSDK.getMonetizationNetwork.AFAdRevenueData(AFj1fSDK.getCurrencyIso4217Code);
                    } else if (z4) {
                        int i7 = i5 + 7;
                        hashCode = i7 % 128;
                        if (i7 % 2 == 0) {
                            aFj1fSDK.getMonetizationNetwork.AFAdRevenueData(AFj1fSDK.component3);
                            throw null;
                        }
                        strAFAdRevenueData = aFj1fSDK.getMonetizationNetwork.AFAdRevenueData(AFj1fSDK.component3);
                    } else if (z5) {
                        strAFAdRevenueData2 = aFj1fSDK.getMonetizationNetwork.AFAdRevenueData("https://%ssdk-services.%s/validate-android-signature");
                    } else if (z6) {
                        strAFAdRevenueData = aFj1fSDK.getMonetizationNetwork.AFAdRevenueData(AFj1fSDK.areAllFieldsValid);
                    } else if (mediationNetwork) {
                        strAFAdRevenueData = aFh1rSDK.component2 < 2 ? aFj1fSDK.getMonetizationNetwork.AFAdRevenueData(AFj1fSDK.getMediationNetwork) : aFj1fSDK.getMonetizationNetwork.AFAdRevenueData(AFj1fSDK.component1);
                    } else {
                        strAFAdRevenueData = aFj1fSDK.getMonetizationNetwork.AFAdRevenueData(AFj1fSDK.component2);
                    }
                }
                return getRevenue(new AFd1cSDK(strAFAdRevenueData2, bArr, "POST", Collections.emptyMap(), aFh1rSDK.getMonetizationNetwork()), new AFd1eSDK());
            }
            strAFAdRevenueData = aFj1fSDK.getMonetizationNetwork.AFAdRevenueData("https://%spia.%s/api/v1.0/pia-android-event?app_id=");
            int i8 = hashCode + 21;
            copy = i8 % 128;
            int i9 = i8 % 2;
            strAFAdRevenueData2 = aFj1fSDK.getRevenue(AFj1fSDK.AFAdRevenueData(aFj1fSDK.getCurrencyIso4217Code(strAFAdRevenueData), z), z6);
            return getRevenue(new AFd1cSDK(strAFAdRevenueData2, bArr, "POST", Collections.emptyMap(), aFh1rSDK.getMonetizationNetwork()), new AFd1eSDK());
        } catch (Throwable th) {
            try {
                Throwable cause = th.getCause();
                if (cause != null) {
                    throw cause;
                }
                throw th;
            } catch (Throwable th2) {
                AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "AFFinalizer: reflection init failed.", th2, false, false);
                return null;
            }
        }
    }

    public final AFd1nSDK<AFa1mSDK> AFAdRevenueData(AFa1pSDK aFa1pSDK) {
        int i = 2 % 2;
        AFd1nSDK<AFa1mSDK> revenue = getRevenue(new AFd1cSDK(aFa1pSDK.component1, AFg1lSDK.getCurrencyIso4217Code(aFa1pSDK.AFAdRevenueData).toString().getBytes(Charset.defaultCharset()), "POST", Collections.emptyMap(), aFa1pSDK.getMonetizationNetwork()), new AFa1rSDK());
        int i2 = hashCode + 91;
        copy = i2 % 128;
        if (i2 % 2 != 0) {
            int i3 = 24 / 0;
        }
        return revenue;
    }

    public final AFd1nSDK<Map<String, Object>> getRevenue(String str, String str2) {
        int i = 2 % 2;
        AFd1nSDK<Map<String, Object>> revenue = getRevenue(AFd1fSDK.getMonetizationNetwork(this.getCurrencyIso4217Code.getRevenue.getMonetizationNetwork.getPackageName(), AFb1iSDK.getRevenue(this.getCurrencyIso4217Code.getMonetizationNetwork), str, str2), new AFd1iSDK());
        int i2 = hashCode + 79;
        copy = i2 % 128;
        int i3 = i2 % 2;
        return revenue;
    }

    /* JADX WARN: Code duplicated, block: B:27:0x00a4 A[PHI: r9
  0x00a4: PHI (r9v6 int) = (r9v5 int), (r9v52 int) binds: [B:26:0x00a2, B:23:0x0096] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:28:0x00a6 A[PHI: r9
  0x00a6: PHI (r9v49 int) = (r9v5 int), (r9v52 int) binds: [B:26:0x00a2, B:23:0x0096] A[DONT_GENERATE, DONT_INLINE]] */
    private static void a(byte b, short s, int i, int i2, int i3, Object[] objArr) {
        int i4;
        int i5;
        int i6;
        int length;
        byte[] bArr;
        int i7;
        int i8 = 2 % 2;
        AFk1lSDK aFk1lSDK = new AFk1lSDK();
        StringBuilder sb = new StringBuilder();
        int i9 = i + ((int) (((long) areAllFieldsValid) ^ (-612162971269904352L)));
        boolean z = i9 == -1;
        if (z) {
            int i10 = $11 + 17;
            int i11 = i10 % 128;
            $10 = i11;
            int i12 = i10 % 2;
            byte[] bArr2 = copydefault;
            if (bArr2 != null) {
                int i13 = i11 + 95;
                $11 = i13 % 128;
                if (i13 % 2 == 0) {
                    length = bArr2.length;
                    bArr = new byte[length];
                    i7 = 1;
                } else {
                    length = bArr2.length;
                    bArr = new byte[length];
                    i7 = 0;
                }
                while (i7 < length) {
                    bArr[i7] = (byte) (((long) bArr2[i7]) ^ (-612162971269904352L));
                    i7++;
                }
                bArr2 = bArr;
            }
            i9 = bArr2 != null ? (byte) (((byte) (((long) copydefault[i2 + ((int) (((long) component1) ^ (-612162971269904352L)))]) ^ (-612162971269904352L))) + ((int) (((long) areAllFieldsValid) ^ (-612162971269904352L)))) : (short) (((short) (((long) toString[i2 + ((int) (((long) component1) ^ (-612162971269904352L)))]) ^ (-612162971269904352L))) + ((int) (((long) areAllFieldsValid) ^ (-612162971269904352L))));
        }
        if (i9 > 0) {
            int i14 = $11 + 55;
            $10 = i14 % 128;
            if (i14 % 2 != 0) {
                i4 = ((i2 - i9) >> 5) << ((int) (((long) component1) & (-612162971269904352L)));
                if (z) {
                    i5 = 1;
                } else {
                    i5 = 0;
                }
            } else {
                i4 = ((i2 + i9) - 2) + ((int) (((long) component1) ^ (-612162971269904352L)));
                if (z) {
                    i5 = 1;
                } else {
                    i5 = 0;
                }
            }
            aFk1lSDK.getCurrencyIso4217Code = i4 + i5;
            aFk1lSDK.getMediationNetwork = (char) (i3 + ((int) (((long) component3) ^ (-612162971269904352L))));
            sb.append(aFk1lSDK.getMediationNetwork);
            aFk1lSDK.AFAdRevenueData = aFk1lSDK.getMediationNetwork;
            byte[] bArr3 = copydefault;
            if (bArr3 != null) {
                int length2 = bArr3.length;
                byte[] bArr4 = new byte[length2];
                for (int i15 = 0; i15 < length2; i15++) {
                    bArr4[i15] = (byte) (((long) bArr3[i15]) ^ (-612162971269904352L));
                }
                bArr3 = bArr4;
            }
            boolean z2 = bArr3 != null;
            aFk1lSDK.getRevenue = 1;
            while (aFk1lSDK.getRevenue < i9) {
                if (z2) {
                    int i16 = $11 + 125;
                    $10 = i16 % 128;
                    if (i16 % 2 != 0) {
                        byte[] bArr5 = copydefault;
                        int i17 = aFk1lSDK.getCurrencyIso4217Code;
                        aFk1lSDK.getCurrencyIso4217Code = i17;
                        i6 = aFk1lSDK.AFAdRevenueData % (((byte) (((byte) (((long) bArr5[i17]) - (-612162971269904352L))) % s)) ^ b);
                    } else {
                        byte[] bArr6 = copydefault;
                        int i18 = aFk1lSDK.getCurrencyIso4217Code;
                        aFk1lSDK.getCurrencyIso4217Code = i18 - 1;
                        i6 = aFk1lSDK.AFAdRevenueData + (((byte) (((byte) (((long) bArr6[i18]) ^ (-612162971269904352L))) + s)) ^ b);
                    }
                    aFk1lSDK.getMediationNetwork = (char) i6;
                } else {
                    short[] sArr = toString;
                    int i19 = aFk1lSDK.getCurrencyIso4217Code;
                    aFk1lSDK.getCurrencyIso4217Code = i19 - 1;
                    aFk1lSDK.getMediationNetwork = (char) (aFk1lSDK.AFAdRevenueData + (((short) (((short) (((long) sArr[i19]) ^ (-612162971269904352L))) + s)) ^ b));
                }
                sb.append(aFk1lSDK.getMediationNetwork);
                aFk1lSDK.AFAdRevenueData = aFk1lSDK.getMediationNetwork;
                aFk1lSDK.getRevenue++;
            }
        }
        objArr[0] = sb.toString();
    }

    public final AFd1nSDK<String> getMonetizationNetwork(String str, Map<String, String> map, String str2, UUID uuid, String str3) {
        int i = 2 % 2;
        String string = uuid.toString();
        HashMap map2 = new HashMap();
        map2.put("ttl", "-1");
        map2.put("uuid", string);
        map2.put("data", map);
        map2.put(Constants.REFERRER_API_META, (Map) getCurrencyIso4217Code(new Object[]{this}, -1717475171, 1717475171, System.identityHashCode(this)));
        if (str2 != null) {
            int i2 = hashCode + 81;
            copy = i2 % 128;
            if (i2 % 2 != 0) {
                map2.put("brand_domain", str2);
                int i3 = 19 / 0;
            } else {
                map2.put("brand_domain", str2);
            }
            int i4 = copy + 1;
            hashCode = i4 % 128;
            int i5 = i4 % 2;
        }
        String string2 = AFg1lSDK.getCurrencyIso4217Code(map2).toString();
        HashMap map3 = new HashMap();
        Object[] objArr = new Object[1];
        a((byte) (88 - TextUtils.indexOf("", "", 0)), (short) (((Process.getThreadPriority(0) + 20) >> 6) + 22), (AudioTrack.getMinVolume() > 0.0f ? 1 : (AudioTrack.getMinVolume() == 0.0f ? 0 : -1)) - 88, Color.rgb(0, 0, 0) + 2034404984, 1432018419 - (ViewConfiguration.getScrollBarSize() >> 8), objArr);
        map3.put(((String) objArr[0]).intern(), getMonetizationNetwork(str3, string, "POST", string2));
        AFd1nSDK<String> revenue = getRevenue(new AFd1cSDK(new StringBuilder().append(String.format(getRevenue, AppsFlyerLib.getInstance().getHostPrefix(), AFa1tSDK.getCurrencyIso4217Code().getHostName())).append("/").append(str).toString(), string2.getBytes(Charset.defaultCharset()), "POST", map3, false), new AFd1eSDK(), true);
        int i6 = hashCode + 67;
        copy = i6 % 128;
        if (i6 % 2 != 0) {
            int i7 = 99 / 0;
        }
        return revenue;
    }

    public final AFd1nSDK<Map<String, String>> getRevenue(String str, String str2, UUID uuid, String str3) {
        int i = 2 % 2;
        String string = uuid.toString();
        String string2 = new StringBuilder().append(String.format(getRevenue, AppsFlyerLib.getInstance().getHostPrefix(), ((AFa1tSDK) AFa1tSDK.getMonetizationNetwork(new Object[0], -631580017, 631580017, (int) System.currentTimeMillis())).getHostName())).append("/").append(str).append("?id=").append(str2).toString();
        Map map = (Map) getCurrencyIso4217Code(new Object[]{this}, -1717475171, 1717475171, System.identityHashCode(this));
        String strValueOf = String.valueOf(map.get("build_number"));
        HashMap map2 = new HashMap();
        map2.put("Af-UUID", uuid.toString());
        map2.put("Af-Meta-Sdk-Ver", strValueOf);
        map2.put("Af-Meta-Counter", String.valueOf(map.get("counter")));
        map2.put("Af-Meta-Model", String.valueOf(map.get("model")));
        map2.put("Af-Meta-Platform", String.valueOf(map.get("platformextension")));
        map2.put("Af-Meta-System-Version", String.valueOf(map.get("sdk")));
        Object[] objArr = new Object[1];
        a((byte) (88 - Color.green(0)), (short) (22 - (TypedValue.complexToFloat(0) > 0.0f ? 1 : (TypedValue.complexToFloat(0) == 0.0f ? 0 : -1))), (-88) - Gravity.getAbsoluteGravity(0, 0), Drawable.resolveOpacity(0, 0) + 2017627768, 1432018418 - ImageFormat.getBitsPerPixel(0), objArr);
        map2.put(((String) objArr[0]).intern(), getMonetizationNetwork(str3, string, "GET", string, str, str2, strValueOf));
        AFd1nSDK<Map<String, String>> revenue = getRevenue(new AFd1cSDK(string2, null, "GET", map2, false), new AFd1dSDK());
        int i2 = copy + 5;
        hashCode = i2 % 128;
        int i3 = i2 % 2;
        return revenue;
    }

    public final AFd1nSDK<String> getRevenue(String str) {
        int i = 2 % 2;
        AFd1cSDK aFd1cSDK = new AFd1cSDK(str, null, "GET", Collections.emptyMap(), false);
        aFd1cSDK.component4 = 10000;
        aFd1cSDK.getCurrencyIso4217Code = false;
        AFd1nSDK<String> revenue = getRevenue(aFd1cSDK, new AFd1eSDK());
        int i2 = hashCode + 19;
        copy = i2 % 128;
        if (i2 % 2 == 0) {
            return revenue;
        }
        throw null;
    }

    public final AFd1mSDK getRevenue(Map<String, Object> map, String str) {
        int i = 2 % 2;
        int i2 = hashCode + 65;
        copy = i2 % 128;
        int i3 = i2 % 2;
        try {
            try {
                Object[] objArr = {map, str};
                Object method = AFa1kSDK.i.get(317123644);
                if (method == null) {
                    method = ((Class) AFa1kSDK.getCurrencyIso4217Code(197 - (SystemClock.uptimeMillis() > 0L ? 1 : (SystemClock.uptimeMillis() == 0L ? 0 : -1)), (char) ((-1) - TextUtils.indexOf((CharSequence) "", '0', 0)), TextUtils.lastIndexOf("", '0', 0, 0) + 38)).getMethod("getMediationNetwork", Map.class, String.class);
                    AFa1kSDK.i.put(317123644, method);
                }
                byte[] bArr = (byte[]) ((Method) method).invoke(null, objArr);
                if (bArr == null) {
                    AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "AFFinalizer: failed to create bytes.", new IllegalArgumentException("Failed to create bytes from proxyData, bytes are null"), false, false);
                    return null;
                }
                int i4 = hashCode + 19;
                copy = i4 % 128;
                int i5 = i4 % 2;
                return new AFd1mSDK(this.getCurrencyIso4217Code, bArr);
            } catch (Throwable th) {
                Throwable cause = th.getCause();
                if (cause != null) {
                    throw cause;
                }
                throw th;
            }
        } catch (Throwable th2) {
            AFLogger.INSTANCE.e(AFg1cSDK.GENERAL, "AFFinalizer: reflection init failed.", th2, false, false);
            return null;
        }
    }

    private <T> AFd1nSDK<T> getRevenue(AFd1cSDK aFd1cSDK, AFe1ySDK<T> aFe1ySDK) {
        AFd1nSDK<T> revenue;
        int i = 2 % 2;
        int i2 = hashCode + 69;
        copy = i2 % 128;
        if (i2 % 2 != 0) {
            revenue = getRevenue(aFd1cSDK, aFe1ySDK, getRevenue());
            int i3 = 32 / 0;
        } else {
            revenue = getRevenue(aFd1cSDK, aFe1ySDK, getRevenue());
        }
        int i4 = hashCode + 71;
        copy = i4 % 128;
        if (i4 % 2 == 0) {
            return revenue;
        }
        throw null;
    }

    private <T> AFd1nSDK<T> getRevenue(AFd1cSDK aFd1cSDK, AFe1ySDK<T> aFe1ySDK, boolean z) {
        int i = 2 % 2;
        aFd1cSDK.getMediationNetwork = z;
        AFd1lSDK aFd1lSDK = this.getMonetizationNetwork;
        AFd1nSDK<T> aFd1nSDK = new AFd1nSDK<>(aFd1cSDK, aFd1lSDK.getRevenue, aFd1lSDK.getMonetizationNetwork, aFe1ySDK);
        int i2 = hashCode + AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR_OVERLAY;
        copy = i2 % 128;
        int i3 = i2 % 2;
        return aFd1nSDK;
    }

    private static String getMonetizationNetwork(String str, String str2, String... strArr) {
        int i = 2 % 2;
        ArrayList arrayList = new ArrayList(Arrays.asList(strArr));
        arrayList.add(1, "v2");
        String revenue = AFj1cSDK.getRevenue(TextUtils.join("\u2063", (String[]) arrayList.toArray(new String[0])), new StringBuilder().append(str).append(str2).append("v2").toString());
        int i2 = hashCode + 41;
        copy = i2 % 128;
        if (i2 % 2 == 0) {
            return revenue;
        }
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    private boolean getRevenue() {
        int i = 2 % 2;
        if (this.getMediationNetwork.getBoolean(AppsFlyerProperties.HTTP_CACHE, true)) {
            return false;
        }
        int i2 = copy;
        int i3 = i2 + 107;
        hashCode = i3 % 128;
        boolean z = i3 % 2 != 0;
        int i4 = i2 + 79;
        hashCode = i4 % 128;
        int i5 = i4 % 2;
        return z;
    }

    static void getMonetizationNetwork() {
        component1 = -411944536;
        areAllFieldsValid = 1624197239;
        component3 = -898995602;
        copydefault = new byte[]{-107, -75, -81, 99, 21, -75, 105, -80, 24, 72, -87, 71, -114, 87, 14, -80, 57};
    }

    private Map<String, Object> getMediationNetwork() {
        return (Map) getCurrencyIso4217Code(new Object[]{this}, -1717475171, 1717475171, System.identityHashCode(this));
    }

    public final AFd1nSDK<String> getMediationNetwork(AFh1mSDK aFh1mSDK) {
        return (AFd1nSDK) getCurrencyIso4217Code(new Object[]{this, aFh1mSDK}, -44698683, 44698684, System.identityHashCode(this));
    }

    public final AFd1nSDK<AFi1wSDK> getRevenue(boolean z, boolean z2, String str, int i) {
        return (AFd1nSDK) getCurrencyIso4217Code(new Object[]{this, Boolean.valueOf(z), Boolean.valueOf(z2), str, Integer.valueOf(i)}, 662152322, -662152320, i);
    }
}
