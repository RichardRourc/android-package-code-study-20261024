package com.appsflyer.internal;

import android.content.pm.PackageManager;
import android.os.Build;
import android.text.TextUtils;
import androidx.appcompat.app.AppCompatDelegate;
import androidx.core.internal.view.SupportMenu;
import com.appsflyer.AFLogger;
import com.appsflyer.AppsFlyerProperties;
import java.security.SecureRandom;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Objects;
import java.util.concurrent.ExecutorService;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public final class AFd1kSDK implements AFd1pSDK {
    private static int $10 = 0;
    private static int $11 = 1;
    private static long areAllFieldsValid = 0;
    private static char copy = 0;
    private static int equals = 1;
    private static final int getRevenue;
    private static int hashCode;
    private static int toString;
    private final AFc1dSDK component1;
    private List<String> getCurrencyIso4217Code = new ArrayList();
    private boolean getMonetizationNetwork = true;
    private final Map<String, Object> AFAdRevenueData = new HashMap();
    private SecureRandom component3 = new SecureRandom();
    private boolean component2 = true ^ AppsFlyerProperties.getInstance().getBoolean(AppsFlyerProperties.DPM, false);
    private int getMediationNetwork = 0;
    private boolean component4 = false;

    public static /* synthetic */ Object getMediationNetwork(Object[] objArr, int i, int i2, int i3) {
        int i4 = ~i;
        int i5 = ~i2;
        int i6 = ~(i4 | i5);
        int i7 = ~i3;
        int i8 = (~(i4 | i7)) | i6 | (~(i5 | i7));
        int i9 = i | i2;
        int i10 = (i * 85) + (i2 * 85) + ((i8 | (~(i9 | i3))) * (-84));
        int i11 = i | (~(i3 | i5));
        int i12 = ~(i2 | i7);
        int i13 = i10 + ((i11 | i12) * (-84)) + (((~i9) | i12) * 84);
        if (i13 == 1) {
            AFd1kSDK aFd1kSDK = (AFd1kSDK) objArr[0];
            String str = (String) objArr[1];
            String[] strArr = (String[]) objArr[2];
            int i14 = 2 % 2;
            int i15 = toString + 69;
            equals = i15 % 128;
            int i16 = i15 % 2;
            aFd1kSDK.getCurrencyIso4217Code("public_api_call", str, strArr);
            int i17 = equals + 1;
            toString = i17 % 128;
            int i18 = i17 % 2;
            return null;
        }
        if (i13 == 2) {
            return getCurrencyIso4217Code(objArr);
        }
        if (i13 == 3) {
            return getMonetizationNetwork(objArr);
        }
        AFd1kSDK aFd1kSDK2 = (AFd1kSDK) objArr[0];
        int i19 = 2 % 2;
        boolean zAFAdRevenueData = aFd1kSDK2.AFAdRevenueData(getCurrencyIso4217Code(aFd1kSDK2.component1.component1().getMediationNetwork.getCurrencyIso4217Code), getCurrencyIso4217Code(aFd1kSDK2.component1.component1().getMediationNetwork.AFAdRevenueData));
        if (zAFAdRevenueData) {
            int i20 = toString + 57;
            equals = i20 % 128;
            int i21 = i20 % 2;
            aFd1kSDK2.areAllFieldsValid();
        } else {
            aFd1kSDK2.getRevenue();
            aFd1kSDK2.getMediationNetwork();
        }
        int i22 = toString + 31;
        equals = i22 % 128;
        int i23 = i22 % 2;
        return Boolean.valueOf(zAFAdRevenueData);
    }

    static {
        component3();
        getRevenue = 98166;
        int i = equals + 117;
        toString = i % 128;
        if (i % 2 != 0) {
            int i2 = 69 / 0;
        }
    }

    public AFd1kSDK(AFc1dSDK aFc1dSDK) {
        this.component1 = aFc1dSDK;
    }

    private synchronized void areAllFieldsValid() {
        int i = 2 % 2;
        int i2 = toString + 63;
        equals = i2 % 128;
        if (i2 % 2 == 0) {
            throw null;
        }
        if (this.component4) {
            return;
        }
        this.component4 = true;
        try {
            getCurrencyIso4217Code("r_debugging_on", new SimpleDateFormat("yyyy-MM-dd HH:mm:ssZ", Locale.ENGLISH).format(Long.valueOf(System.currentTimeMillis())), new String[0]);
            int i3 = toString + 3;
            equals = i3 % 128;
            int i4 = i3 % 2;
            return;
        } catch (Throwable th) {
            AFLogger.INSTANCE.e(AFg1cSDK.PROXY, "Error while starting remote debugger", th, true, true, true);
            return;
        }
        throw th;
    }

    private static void a(int i, char c, String str, String str2, String str3, Object[] objArr) {
        char[] charArray;
        char[] charArray2;
        int i2 = 2 % 2;
        if (str3 != null) {
            int i3 = $11 + 31;
            $10 = i3 % 128;
            if (i3 % 2 != 0) {
                str3.toCharArray();
                throw null;
            }
            charArray = str3.toCharArray();
        } else {
            charArray = str3;
        }
        char[] cArr = charArray;
        if (str2 != null) {
            charArray2 = str2.toCharArray();
            int i4 = $11 + 29;
            $10 = i4 % 128;
            int i5 = i4 % 2;
        } else {
            charArray2 = str2;
        }
        char[] cArr2 = charArray2;
        char[] charArray3 = str != null ? str.toCharArray() : str;
        AFk1jSDK aFk1jSDK = new AFk1jSDK();
        int length = charArray3.length;
        char[] cArr3 = new char[length];
        int length2 = cArr.length;
        char[] cArr4 = new char[length2];
        System.arraycopy(charArray3, 0, cArr3, 0, length);
        System.arraycopy(cArr, 0, cArr4, 0, length2);
        cArr3[0] = (char) (cArr3[0] ^ c);
        cArr4[2] = (char) (cArr4[2] + ((char) i));
        int length3 = cArr2.length;
        char[] cArr5 = new char[length3];
        aFk1jSDK.getMediationNetwork = 0;
        while (aFk1jSDK.getMediationNetwork < length3) {
            int i6 = (aFk1jSDK.getMediationNetwork + 2) % 4;
            int i7 = (aFk1jSDK.getMediationNetwork + 3) % 4;
            aFk1jSDK.AFAdRevenueData = (char) (((cArr3[aFk1jSDK.getMediationNetwork % 4] * 32718) + cArr4[i6]) % SupportMenu.USER_MASK);
            cArr4[i7] = (char) (((cArr3[i7] * 32718) + cArr4[i6]) / SupportMenu.USER_MASK);
            cArr3[i7] = aFk1jSDK.AFAdRevenueData;
            cArr5[aFk1jSDK.getMediationNetwork] = (char) (((((long) (cArr3[i7] ^ cArr2[aFk1jSDK.getMediationNetwork])) ^ (areAllFieldsValid ^ (-866183138771165766L))) ^ ((long) ((int) (((long) hashCode) ^ (-866183138771165766L))))) ^ ((long) ((char) (((long) copy) ^ (-866183138771165766L)))));
            aFk1jSDK.getMediationNetwork++;
        }
        objArr[0] = new String(cArr5);
    }

    @Override // com.appsflyer.internal.AFd1pSDK
    public final synchronized void getMediationNetwork() {
        int i = 2 % 2;
        int i2 = toString + 35;
        int i3 = i2 % 128;
        equals = i3;
        int i4 = i2 % 2;
        if (this.component4) {
            this.component4 = false;
            this.getMonetizationNetwork = false;
            getCurrencyIso4217Code("r_debugging_off", new SimpleDateFormat("yyyy-MM-dd HH:mm:ssZ", Locale.ENGLISH).format(Long.valueOf(System.currentTimeMillis())), new String[0]);
            return;
        }
        int i5 = i3 + 23;
        toString = i5 % 128;
        if (i5 % 2 != 0) {
            Object obj = null;
            obj.hashCode();
            throw null;
        }
        if (!this.getMonetizationNetwork) {
            return;
        }
        this.component4 = false;
        this.getMonetizationNetwork = false;
        try {
            getCurrencyIso4217Code("r_debugging_off", new SimpleDateFormat("yyyy-MM-dd HH:mm:ssZ", Locale.ENGLISH).format(Long.valueOf(System.currentTimeMillis())), new String[0]);
            return;
        } catch (Throwable th) {
            AFLogger.INSTANCE.e(AFg1cSDK.PROXY, "Error while stopping remote debugger", th, true, true, true);
            return;
        }
        throw th;
    }

    @Override // com.appsflyer.internal.AFd1pSDK
    public final synchronized void AFAdRevenueData() {
        int i = 2 % 2;
        int i2 = equals + 31;
        toString = i2 % 128;
        int i3 = i2 % 2;
        this.AFAdRevenueData.clear();
        this.getCurrencyIso4217Code.clear();
        this.getMediationNetwork = 0;
        int i4 = toString + 105;
        equals = i4 % 128;
        if (i4 % 2 == 0) {
            int i5 = 83 / 0;
        }
    }

    @Override // com.appsflyer.internal.AFd1pSDK
    public final void o_(String str, PackageManager packageManager) {
        int i = 2 % 2;
        int i2 = equals + 117;
        toString = i2 % 128;
        Object obj = null;
        try {
            if (i2 % 2 == 0) {
                final AFd1mSDK revenue = this.component1.getCurrencyIso4217Code().getRevenue(p_(str, packageManager), this.component1.registerClient().getMediationNetwork());
                if (revenue == null) {
                    AFLogger.afErrorLogForExcManagerOnly("could not send null proxy data", new NullPointerException("request was null"));
                    return;
                }
                ExecutorService monetizationNetwork = this.component1.getMonetizationNetwork();
                Objects.requireNonNull(revenue);
                monetizationNetwork.execute(new Runnable() { // from class: com.appsflyer.internal.AFd1kSDK$$ExternalSyntheticLambda0
                    @Override // java.lang.Runnable
                    public final void run() {
                        revenue.getMonetizationNetwork();
                    }
                });
                int i3 = toString + 19;
                equals = i3 % 128;
                if (i3 % 2 == 0) {
                    throw null;
                }
                return;
            }
            this.component1.getCurrencyIso4217Code().getRevenue(p_(str, packageManager), this.component1.registerClient().getMediationNetwork());
            obj.hashCode();
            throw null;
        } catch (Throwable th) {
            AFLogger.afErrorLogForExcManagerOnly("could not send proxy data", th);
        }
    }

    @Override // com.appsflyer.internal.AFd1pSDK
    public final void getMonetizationNetwork(Throwable th) {
        StackTraceElement[] stackTrace;
        int i = 2 % 2;
        int i2 = toString + 45;
        equals = i2 % 128;
        int i3 = i2 % 2;
        Throwable cause = th.getCause();
        String simpleName = th.getClass().getSimpleName();
        String message = cause == null ? th.getMessage() : cause.getMessage();
        if (cause == null) {
            int i4 = equals + 73;
            toString = i4 % 128;
            if (i4 % 2 != 0) {
                th.getStackTrace();
                Object obj = null;
                obj.hashCode();
                throw null;
            }
            stackTrace = th.getStackTrace();
        } else {
            stackTrace = cause.getStackTrace();
            int i5 = toString + 3;
            equals = i5 % 128;
            int i6 = i5 % 2;
        }
        getCurrencyIso4217Code("exception", simpleName, getRevenue(message, stackTrace));
    }

    @Override // com.appsflyer.internal.AFd1pSDK
    public final void getCurrencyIso4217Code(String str, String str2) {
        int i = 2 % 2;
        int i2 = toString + 17;
        equals = i2 % 128;
        if (i2 % 2 == 0) {
            String[] strArr = new String[0];
            strArr[0] = str2;
            getCurrencyIso4217Code("server_request", str, strArr);
        } else {
            getCurrencyIso4217Code("server_request", str, str2);
        }
        int i3 = toString + 101;
        equals = i3 % 128;
        if (i3 % 2 == 0) {
            throw null;
        }
    }

    @Override // com.appsflyer.internal.AFd1pSDK
    public final void getRevenue(String str, int i, String str2) {
        int i2 = 2 % 2;
        int i3 = toString + 29;
        equals = i3 % 128;
        int i4 = i3 % 2;
        getCurrencyIso4217Code("server_response", str, String.valueOf(i), str2);
        int i5 = equals + 121;
        toString = i5 % 128;
        if (i5 % 2 != 0) {
            throw null;
        }
    }

    @Override // com.appsflyer.internal.AFd1pSDK
    public final void getMonetizationNetwork(String str, String str2) {
        int i = 2 % 2;
        int i2 = toString + 53;
        equals = i2 % 128;
        if (i2 % 2 == 0) {
            String[] strArr = new String[1];
            strArr[1] = str2;
            getCurrencyIso4217Code(null, str, strArr);
        } else {
            getCurrencyIso4217Code(null, str, str2);
        }
        int i3 = equals + 45;
        toString = i3 % 128;
        if (i3 % 2 != 0) {
            throw null;
        }
    }

    @Override // com.appsflyer.internal.AFd1pSDK
    public final synchronized void getRevenue() {
        int i = 2 % 2;
        int i2 = toString + 125;
        equals = i2 % 128;
        int i3 = i2 % 2;
        this.getMonetizationNetwork = false;
        AFAdRevenueData();
        equals();
        int i4 = equals + 121;
        toString = i4 % 128;
        int i5 = i4 % 2;
    }

    @Override // com.appsflyer.internal.AFd1pSDK
    public final void getCurrencyIso4217Code() {
        int i = 2 % 2;
        int i2 = toString + 23;
        int i3 = i2 % 128;
        equals = i3;
        this.component2 = i2 % 2 == 0;
        int i4 = i3 + 63;
        toString = i4 % 128;
        if (i4 % 2 != 0) {
            throw null;
        }
    }

    @Override // com.appsflyer.internal.AFd1pSDK
    public final boolean component4() {
        int i = 2 % 2;
        int i2 = equals;
        int i3 = i2 + 103;
        toString = i3 % 128;
        if (i3 % 2 != 0) {
            throw null;
        }
        boolean z = this.component4;
        int i4 = i2 + 119;
        toString = i4 % 128;
        int i5 = i4 % 2;
        return z;
    }

    private float component2() {
        int i = 2 % 2;
        int i2 = toString + 65;
        equals = i2 % 128;
        int i3 = i2 % 2;
        float fNextFloat = this.component3.nextFloat();
        int i4 = equals + 119;
        toString = i4 % 128;
        if (i4 % 2 != 0) {
            int i5 = 16 / 0;
        }
        return fNextFloat;
    }

    private Map<String, Object> p_(String str, PackageManager packageManager) {
        int i = 2 % 2;
        int i2 = equals + 95;
        toString = i2 % 128;
        Object obj = null;
        if (i2 % 2 == 0) {
            q_(str, packageManager, this.component1.registerClient(), this.component1.afInfoLog());
            Map<String, Object> mapCopy = copy();
            int i3 = equals + 29;
            toString = i3 % 128;
            if (i3 % 2 == 0) {
                return mapCopy;
            }
            obj.hashCode();
            throw null;
        }
        q_(str, packageManager, this.component1.registerClient(), this.component1.afInfoLog());
        copy();
        throw null;
    }

    private static String component1() {
        int i = 2 % 2;
        int i2 = toString;
        int i3 = i2 + 77;
        equals = i3 % 128;
        if (i3 % 2 == 0) {
            throw null;
        }
        int i4 = i2 + 33;
        equals = i4 % 128;
        int i5 = i4 % 2;
        return "6.17.0";
    }

    private static /* synthetic */ Object getCurrencyIso4217Code(Object[] objArr) {
        AFd1kSDK aFd1kSDK = (AFd1kSDK) objArr[0];
        int i = 2 % 2;
        if (aFd1kSDK.component2) {
            int i2 = equals;
            int i3 = i2 + 49;
            toString = i3 % 128;
            int i4 = i3 % 2;
            if (aFd1kSDK.getMonetizationNetwork || aFd1kSDK.component4) {
                int i5 = i2 + 57;
                toString = i5 % 128;
                if (i5 % 2 == 0) {
                    return true;
                }
                Object obj = null;
                obj.hashCode();
                throw null;
            }
        }
        return false;
    }

    private synchronized void getMediationNetwork(String str, String str2, String str3) {
        int i = 2 % 2;
        try {
            Map<String, Object> map = this.AFAdRevenueData;
            Object[] objArr = new Object[1];
            a(428417108 - TextUtils.indexOf((CharSequence) "", '0', 0, 0), (char) (45453 - TextUtils.indexOf((CharSequence) "", '0', 0)), "嗊褠踙\ue7b1", "ᒸي醼뇗ൎ", "\u0000\u0000\u0000\u0000", objArr);
            map.put(((String) objArr[0]).intern(), Build.BRAND);
            this.AFAdRevenueData.put("model", Build.MODEL);
            this.AFAdRevenueData.put("platform", "Android");
            this.AFAdRevenueData.put("platform_version", Build.VERSION.RELEASE);
            if (str != null) {
                int i2 = toString + 111;
                equals = i2 % 128;
                int i3 = i2 % 2;
                if (str.length() > 0) {
                    this.AFAdRevenueData.put("advertiserId", str);
                }
            }
            if (str2 != null) {
                int i4 = toString + 27;
                equals = i4 % 128;
                if (i4 % 2 == 0) {
                    str2.length();
                    throw null;
                }
                if (str2.length() > 0) {
                    this.AFAdRevenueData.put("imei", str2);
                }
            }
            if (str3 != null && str3.length() > 0) {
                this.AFAdRevenueData.put("android_id", str3);
                int i5 = 2 % 2;
            }
        } catch (Throwable unused) {
        }
    }

    private synchronized void getCurrencyIso4217Code(String str, String str2, String str3, String str4) {
        int i = 2 % 2;
        try {
            this.AFAdRevenueData.put("sdk_version", str);
            if (str2 != null) {
                int i2 = toString + 61;
                equals = i2 % 128;
                if (i2 % 2 == 0) {
                    int i3 = 47 / 0;
                    if (str2.length() > 0) {
                        this.AFAdRevenueData.put("devkey", str2);
                    }
                } else if (str2.length() > 0) {
                    this.AFAdRevenueData.put("devkey", str2);
                }
            }
            if (str3 != null) {
                int i4 = toString + 19;
                equals = i4 % 128;
                if (i4 % 2 == 0) {
                    int i5 = 74 / 0;
                    if (str3.length() > 0) {
                        this.AFAdRevenueData.put("originalAppsFlyerId", str3);
                        int i6 = 2 % 2;
                    }
                } else if (str3.length() > 0) {
                    this.AFAdRevenueData.put("originalAppsFlyerId", str3);
                    int i7 = 2 % 2;
                }
            }
            if (str4 != null) {
                int i8 = toString + 61;
                equals = i8 % 128;
                if (i8 % 2 == 0) {
                    int i9 = 79 / 0;
                    if (str4.length() > 0) {
                        this.AFAdRevenueData.put("uid", str4);
                    }
                } else if (str4.length() > 0) {
                    this.AFAdRevenueData.put("uid", str4);
                }
            }
        } catch (Throwable unused) {
        }
    }

    private synchronized void getMonetizationNetwork(String str, String str2, String str3, String str4) {
        int i = 2 % 2;
        int i2 = toString;
        int i3 = i2 + 71;
        equals = i3 % 128;
        try {
            if (i3 % 2 == 0) {
                throw null;
            }
            if (str != null) {
                int i4 = i2 + 35;
                equals = i4 % 128;
                int i5 = i4 % 2;
                if (str.length() > 0) {
                    int i6 = toString + AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR_OVERLAY;
                    equals = i6 % 128;
                    if (i6 % 2 == 0) {
                        this.AFAdRevenueData.put("app_id", str);
                        int i7 = 52 / 0;
                    } else {
                        this.AFAdRevenueData.put("app_id", str);
                    }
                    int i8 = 2 % 2;
                }
            }
            if (str2 != null && str2.length() > 0) {
                this.AFAdRevenueData.put("app_version", str2);
            }
            if (str3 != null && str3.length() > 0) {
                this.AFAdRevenueData.put(AppsFlyerProperties.CHANNEL, str3);
                int i9 = equals + 55;
                toString = i9 % 128;
                if (i9 % 2 == 0) {
                    int i10 = 2 % 2;
                }
            }
            if (str4 != null && str4.length() > 0) {
                this.AFAdRevenueData.put("preInstall", str4);
            }
        } catch (Throwable unused) {
        }
    }

    private synchronized void getCurrencyIso4217Code(String str, String str2, String... strArr) {
        String string;
        int i = 2 % 2;
        if (copydefault()) {
            int i2 = toString + 75;
            equals = i2 % 128;
            int i3 = i2 % 2;
            if (this.getMediationNetwork < 98304) {
                try {
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    String strJoin = TextUtils.join(", ", strArr);
                    if (str != null) {
                        string = new StringBuilder().append(jCurrentTimeMillis).append(" ").append(Thread.currentThread().getId()).append(" _/AppsFlyer_6.17.0 [").append(str).append("] ").append(str2).append(" ").append(strJoin).toString();
                    } else {
                        string = new StringBuilder().append(jCurrentTimeMillis).append(" ").append(Thread.currentThread().getId()).append(" ").append(str2).append("/AppsFlyer_6.17.0 ").append(strJoin).toString();
                        int i4 = equals + 73;
                        toString = i4 % 128;
                        int i5 = i4 % 2;
                        int i6 = 2 % 2;
                    }
                    int length = this.getMediationNetwork + (string.length() << 1);
                    int i7 = getRevenue;
                    boolean z = false;
                    if (length > i7) {
                        string = string.substring(0, (i7 - this.getMediationNetwork) / 2);
                        z = true;
                    }
                    this.getCurrencyIso4217Code.add(string);
                    this.getMediationNetwork += string.length() << 1;
                    if (z) {
                        int i8 = toString + 47;
                        equals = i8 % 128;
                        if (i8 % 2 == 0) {
                            this.getCurrencyIso4217Code.add("+~+~ The limit has been exceeded, and no more data is available. +~+~");
                            this.getMediationNetwork += 7164;
                        } else {
                            this.getCurrencyIso4217Code.add("+~+~ The limit has been exceeded, and no more data is available. +~+~");
                            this.getMediationNetwork += 138;
                        }
                    }
                } catch (Throwable unused) {
                }
            }
        }
    }

    private synchronized Map<String, Object> copy() {
        Map<String, Object> map;
        int i = 2 % 2;
        int i2 = toString + 47;
        equals = i2 % 128;
        int i3 = i2 % 2;
        this.AFAdRevenueData.put("data", this.getCurrencyIso4217Code);
        equals();
        map = this.AFAdRevenueData;
        int i4 = equals + 111;
        toString = i4 % 128;
        int i5 = i4 % 2;
        return map;
    }

    /* JADX WARN: Code duplicated, block: B:17:0x0047 A[Catch: all -> 0x00d9, PHI: r1 r3
  0x0047: PHI (r1v5 com.appsflyer.AppsFlyerProperties) = (r1v4 com.appsflyer.AppsFlyerProperties), (r1v6 com.appsflyer.AppsFlyerProperties) binds: [B:14:0x0036, B:9:0x0022] A[DONT_GENERATE, DONT_INLINE]
  0x0047: PHI (r3v1 java.lang.String) = (r3v0 java.lang.String), (r3v2 java.lang.String) binds: [B:14:0x0036, B:9:0x0022] A[DONT_GENERATE, DONT_INLINE], TRY_ENTER, TRY_LEAVE, TryCatch #2 {, blocks: (B:4:0x0002, B:6:0x0010, B:17:0x0047, B:19:0x00a3, B:23:0x00be, B:22:0x00bd, B:12:0x0026, B:13:0x0027, B:8:0x0021), top: B:35:0x0002, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:21:0x00bc  */
    /* JADX WARN: Code duplicated, block: B:22:0x00bd A[Catch: all -> 0x00d9, TryCatch #2 {, blocks: (B:4:0x0002, B:6:0x0010, B:17:0x0047, B:19:0x00a3, B:23:0x00be, B:22:0x00bd, B:12:0x0026, B:13:0x0027, B:8:0x0021), top: B:35:0x0002, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:36:0x0038 A[EXC_TOP_SPLITTER, PHI: r4
  0x0038: PHI (r4v1 java.lang.String) = (r4v0 java.lang.String), (r4v7 java.lang.String) binds: [B:14:0x0036, B:9:0x0022] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    private synchronized void q_(String str, PackageManager packageManager, AFf1gSDK aFf1gSDK, AFc1kSDK aFc1kSDK) {
        AppsFlyerProperties appsFlyerProperties;
        String str2;
        String string;
        int i;
        int i2 = 2 % 2;
        int i3 = toString + 43;
        equals = i3 % 128;
        if (i3 % 2 == 0) {
            appsFlyerProperties = AppsFlyerProperties.getInstance();
            str2 = "remote_debug_static_data";
            string = appsFlyerProperties.getString("remote_debug_static_data");
            this.AFAdRevenueData.clear();
            int i4 = 38 / 0;
            if (string != null) {
                try {
                    this.AFAdRevenueData.putAll(AFg1lSDK.getMonetizationNetwork(new JSONObject(string)));
                } catch (Throwable unused) {
                }
            } else {
                getMediationNetwork(this.component1.getRevenue().AFAdRevenueData(), aFf1gSDK.getRevenue(), aFc1kSDK.AFAdRevenueData);
                getCurrencyIso4217Code(new StringBuilder("6.17.0.").append(AFa1tSDK.getMonetizationNetwork).toString(), this.component1.registerClient().getMediationNetwork(), appsFlyerProperties.getString("KSAppsFlyerId"), AFb1iSDK.getRevenue(this.component1.getRevenue().getMonetizationNetwork));
                try {
                    int i5 = packageManager.getPackageInfo(str, 0).versionCode;
                    getMonetizationNetwork(str, String.valueOf(i5), appsFlyerProperties.getString(AppsFlyerProperties.CHANNEL), appsFlyerProperties.getString("preInstallName"));
                } catch (Throwable unused2) {
                }
                appsFlyerProperties.set(str2, new JSONObject(this.AFAdRevenueData).toString());
                i = toString + 43;
                equals = i % 128;
                if (i % 2 == 0) {
                    int i6 = 2 % 2;
                }
            }
        } else {
            appsFlyerProperties = AppsFlyerProperties.getInstance();
            str2 = "remote_debug_static_data";
            string = appsFlyerProperties.getString("remote_debug_static_data");
            this.AFAdRevenueData.clear();
            if (string != null) {
                this.AFAdRevenueData.putAll(AFg1lSDK.getMonetizationNetwork(new JSONObject(string)));
            } else {
                getMediationNetwork(this.component1.getRevenue().AFAdRevenueData(), aFf1gSDK.getRevenue(), aFc1kSDK.AFAdRevenueData);
                getCurrencyIso4217Code(new StringBuilder("6.17.0.").append(AFa1tSDK.getMonetizationNetwork).toString(), this.component1.registerClient().getMediationNetwork(), appsFlyerProperties.getString("KSAppsFlyerId"), AFb1iSDK.getRevenue(this.component1.getRevenue().getMonetizationNetwork));
                int i7 = packageManager.getPackageInfo(str, 0).versionCode;
                getMonetizationNetwork(str, String.valueOf(i7), appsFlyerProperties.getString(AppsFlyerProperties.CHANNEL), appsFlyerProperties.getString("preInstallName"));
                appsFlyerProperties.set(str2, new JSONObject(this.AFAdRevenueData).toString());
                i = toString + 43;
                equals = i % 128;
                if (i % 2 == 0) {
                    int i8 = 2 % 2;
                }
            }
        }
        this.AFAdRevenueData.put("launch_counter", String.valueOf(this.component1.getRevenue().getMonetizationNetwork.AFAdRevenueData("appsFlyerCount", 0)));
    }

    private static String[] getRevenue(String str, StackTraceElement[] stackTraceElementArr) {
        int i = 2 % 2;
        int i2 = toString;
        int i3 = i2 + 55;
        equals = i3 % 128;
        int i4 = i3 % 2;
        if (stackTraceElementArr != null) {
            String[] strArr = new String[stackTraceElementArr.length + 1];
            strArr[0] = str;
            for (int i5 = 1; i5 < stackTraceElementArr.length; i5++) {
                strArr[i5] = stackTraceElementArr[i5].toString();
            }
            return strArr;
        }
        int i6 = i2 + 91;
        equals = i6 % 128;
        if (i6 % 2 != 0) {
            return new String[]{str};
        }
        String[] strArr2 = new String[0];
        strArr2[1] = str;
        return strArr2;
    }

    private synchronized void equals() {
        int i = 2 % 2;
        this.getCurrencyIso4217Code = new ArrayList();
        this.getMediationNetwork = 0;
        int i2 = equals + 115;
        toString = i2 % 128;
        int i3 = i2 % 2;
    }

    private synchronized boolean AFAdRevenueData(AFi1xSDK aFi1xSDK, AFi1xSDK aFi1xSDK2) {
        int i = 2 % 2;
        if (aFi1xSDK == null) {
            AFInAppEventParameterName();
            return false;
        }
        if (!aFi1xSDK.getCurrencyIso4217Code()) {
            int i2 = toString;
            int i3 = i2 + 13;
            equals = i3 % 128;
            int i4 = i3 % 2;
            int i5 = i2 + 77;
            equals = i5 % 128;
            if (i5 % 2 != 0) {
                return false;
            }
            throw null;
        }
        if (this.component1.getRevenue().getMonetizationNetwork.AFAdRevenueData("appsFlyerCount", 0) > aFi1xSDK.getMonetizationNetwork) {
            int i6 = 2 % 2;
            int i7 = equals + 3;
            toString = i7 % 128;
            int i8 = i7 % 2;
            return false;
        }
        if (!getRevenue(aFi1xSDK, aFi1xSDK2)) {
            return false;
        }
        if (AFAdRevenueData(aFi1xSDK.getRevenue)) {
            if (getCurrencyIso4217Code(aFi1xSDK.AFAdRevenueData)) {
                return true;
            }
            int i9 = toString + 113;
            equals = i9 % 128;
            return i9 % 2 == 0;
        }
        int i10 = equals;
        int i11 = i10 + 113;
        toString = i11 % 128;
        boolean z = i11 % 2 != 0;
        int i12 = i10 + 21;
        toString = i12 % 128;
        int i13 = i12 % 2;
        return z;
    }

    private boolean getRevenue(AFi1xSDK aFi1xSDK, AFi1xSDK aFi1xSDK2) {
        int i = 2 % 2;
        int i2 = toString + 87;
        equals = i2 % 128;
        int i3 = i2 % 2;
        if (!aFi1xSDK.equals(aFi1xSDK2)) {
            boolean monetizationNetwork = getMonetizationNetwork(aFi1xSDK.getMediationNetwork);
            getMediationNetwork(new Object[]{this, Boolean.valueOf(monetizationNetwork)}, 124011145, -124011142, System.identityHashCode(this));
            return monetizationNetwork;
        }
        int i4 = toString + 63;
        equals = i4 % 128;
        int i5 = i4 % 2;
        return registerClient();
    }

    private static boolean getCurrencyIso4217Code(String str) {
        int i = 2 % 2;
        int i2 = equals + 65;
        toString = i2 % 128;
        int i3 = i2 % 2;
        if (!AFk1ySDK.getCurrencyIso4217Code(str)) {
            new AFd1sSDK();
            return AFd1sSDK.getMediationNetwork(component1(), str);
        }
        int i4 = toString + 97;
        equals = i4 % 128;
        return i4 % 2 != 0;
    }

    private boolean AFAdRevenueData(String str) {
        int i = 2 % 2;
        int i2 = equals + 125;
        toString = i2 % 128;
        if (i2 % 2 != 0) {
            int i3 = 31 / 0;
            if (AFk1ySDK.getCurrencyIso4217Code(str)) {
                return true;
            }
        } else if (AFk1ySDK.getCurrencyIso4217Code(str)) {
            return true;
        }
        AFc1pSDK revenue = this.component1.getRevenue();
        boolean zEquals = str.equals(AFj1iSDK.getMediationNetwork(revenue.getRevenue.getMonetizationNetwork, revenue.getRevenue.getMonetizationNetwork.getPackageName()));
        int i4 = toString + 93;
        equals = i4 % 128;
        if (i4 % 2 == 0) {
            int i5 = 13 / 0;
        }
        return zEquals;
    }

    private boolean getMonetizationNetwork(float f) {
        int i = 2 % 2;
        double d = f;
        if (d >= 1.0d) {
            return true;
        }
        if (d <= 0.0d) {
            int i2 = toString + 39;
            equals = i2 % 128;
            int i3 = i2 % 2;
            return false;
        }
        if (component2() > f) {
            return false;
        }
        int i4 = equals + 67;
        toString = i4 % 128;
        int i5 = i4 % 2;
        return true;
    }

    private static AFi1xSDK getCurrencyIso4217Code(AFi1wSDK aFi1wSDK) {
        int i = 2 % 2;
        if (aFi1wSDK != null) {
            int i2 = equals + 49;
            toString = i2 % 128;
            if (i2 % 2 == 0) {
                AFh1cSDK aFh1cSDK = aFi1wSDK.getMonetizationNetwork;
                if (aFh1cSDK != null) {
                    AFi1xSDK aFi1xSDK = aFh1cSDK.AFAdRevenueData;
                    int i3 = toString + 51;
                    equals = i3 % 128;
                    int i4 = i3 % 2;
                    return aFi1xSDK;
                }
            } else {
                AFh1cSDK aFh1cSDK2 = aFi1wSDK.getMonetizationNetwork;
                throw null;
            }
        }
        return null;
    }

    private void AFInAppEventParameterName() {
        int i = 2 % 2;
        int i2 = equals + 89;
        toString = i2 % 128;
        int i3 = i2 % 2;
        this.component1.component2().getMonetizationNetwork("participantInProxy");
        int i4 = toString + 121;
        equals = i4 % 128;
        int i5 = i4 % 2;
    }

    private static /* synthetic */ Object getMonetizationNetwork(Object[] objArr) {
        AFd1kSDK aFd1kSDK = (AFd1kSDK) objArr[0];
        boolean zBooleanValue = ((Boolean) objArr[1]).booleanValue();
        int i = 2 % 2;
        int i2 = toString + 41;
        equals = i2 % 128;
        if (i2 % 2 == 0) {
            aFd1kSDK.component1.component2().getCurrencyIso4217Code("participantInProxy", zBooleanValue);
            int i3 = 89 / 0;
        } else {
            aFd1kSDK.component1.component2().getCurrencyIso4217Code("participantInProxy", zBooleanValue);
        }
        int i4 = equals + 31;
        toString = i4 % 128;
        int i5 = i4 % 2;
        return null;
    }

    private boolean registerClient() {
        int i = 2 % 2;
        int i2 = toString + 9;
        equals = i2 % 128;
        int i3 = i2 % 2;
        return this.component1.component2().getMediationNetwork("participantInProxy", false);
    }

    static void component3() {
        areAllFieldsValid = -866183138771165766L;
        hashCode = 1193057722;
        copy = (char) 29794;
    }

    private void getMonetizationNetwork(boolean z) {
        getMediationNetwork(new Object[]{this, Boolean.valueOf(z)}, 124011145, -124011142, System.identityHashCode(this));
    }

    private boolean copydefault() {
        return ((Boolean) getMediationNetwork(new Object[]{this}, -1999031441, 1999031443, System.identityHashCode(this))).booleanValue();
    }

    @Override // com.appsflyer.internal.AFd1pSDK
    public final void getMediationNetwork(String str, String... strArr) {
        getMediationNetwork(new Object[]{this, str, strArr}, 595413115, -595413114, System.identityHashCode(this));
    }

    @Override // com.appsflyer.internal.AFd1pSDK
    public final boolean getMonetizationNetwork() {
        return ((Boolean) getMediationNetwork(new Object[]{this}, -1790300573, 1790300573, System.identityHashCode(this))).booleanValue();
    }
}
