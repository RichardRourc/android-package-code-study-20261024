package com.appsflyer.internal;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import android.text.TextUtils;
import com.appsflyer.AFLogger;
import com.appsflyer.AppsFlyerProperties;
import com.appsflyer.internal.components.network.http.ResponseNetwork;
import java.text.SimpleDateFormat;
import java.util.Locale;

/* JADX INFO: loaded from: classes.dex */
public final class AFf1tSDK extends AFf1rSDK {
    private static int $10 = 0;
    private static int $11 = 1;
    private static int AFKeystoreWrapper = 1;
    private static int AFLogger;
    private final AFg1qSDK AFInAppEventType;
    private final AFc1pSDK copydefault;
    private final String equals;
    private final AFc1iSDK hashCode;
    private static char[] AFInAppEventParameterName = {10790, 10789, 10800, 10806, 10786, 10791, 10805, 10788, 10810};
    private static char registerClient = 8141;

    public static /* synthetic */ Object AFAdRevenueData(Object[] objArr, int i, int i2, int i3) {
        return getRevenue(objArr);
    }

    public AFf1tSDK(String str, AFc1dSDK aFc1dSDK) {
        super(new AFg1wSDK(), aFc1dSDK, str);
        this.copydefault = aFc1dSDK.getRevenue();
        this.hashCode = aFc1dSDK.AFInAppEventType();
        this.equals = str;
        this.AFInAppEventType = aFc1dSDK.component3();
    }

    @Override // com.appsflyer.internal.AFe1dSDK, com.appsflyer.internal.AFe1sSDK
    public final void getRevenue() {
        int i = 2 % 2;
        super.getRevenue();
        ResponseNetwork responseNetwork = ((AFe1dSDK) this).component1;
        if (responseNetwork != null) {
            int i2 = AFLogger + 11;
            AFKeystoreWrapper = i2 % 128;
            int i3 = i2 % 2;
            if (responseNetwork.isSuccessful()) {
                int i4 = AFLogger + 117;
                AFKeystoreWrapper = i4 % 128;
                if (i4 % 2 != 0) {
                    copy();
                    return;
                }
                copy();
                Object obj = null;
                obj.hashCode();
                throw null;
            }
        }
    }

    @Override // com.appsflyer.internal.AFf1rSDK
    protected final void AFAdRevenueData(AFh1rSDK aFh1rSDK) {
        int i = 2 % 2;
        int i2 = AFKeystoreWrapper + 57;
        AFLogger = i2 % 128;
        Object obj = null;
        if (i2 % 2 == 0) {
            super.AFAdRevenueData(aFh1rSDK);
            Context context = this.hashCode.getMonetizationNetwork;
            AFa1tSDK aFa1tSDK = (AFa1tSDK) AFa1tSDK.getMonetizationNetwork(new Object[0], -631580017, 631580017, (int) System.currentTimeMillis());
            if (context == null) {
                throw new IllegalStateException("Context is not provided, can't send register request");
            }
            if (aFa1tSDK.getMediationNetwork()) {
                AFLogger.afInfoLog("CustomerUserId not set, Tracking is disabled", true);
                throw new IllegalStateException("CustomerUserId not set, register is not sent");
            }
            PackageManager packageManager = context.getPackageManager();
            try {
                PackageInfo packageInfo = packageManager.getPackageInfo(context.getPackageName(), 0);
                aFh1rSDK.getMediationNetwork("app_version_code", Integer.toString(packageInfo.versionCode));
                aFh1rSDK.getMediationNetwork("app_version_name", packageInfo.versionName);
                aFh1rSDK.getMediationNetwork("app_name", packageManager.getApplicationLabel(packageInfo.applicationInfo).toString());
                aFh1rSDK.getMediationNetwork("installDate", AFa1tSDK.getRevenue(new SimpleDateFormat("yyyy-MM-dd_HHmmssZ", Locale.US), packageInfo.firstInstallTime));
                int i3 = AFLogger + 37;
                AFKeystoreWrapper = i3 % 128;
                int i4 = i3 % 2;
            } catch (Throwable th) {
                AFLogger.afErrorLog("Exception while collecting application version info.", th);
            }
            this.AFInAppEventType.AFAdRevenueData(aFh1rSDK.AFAdRevenueData);
            aFh1rSDK.AFAdRevenueData.remove("ivc");
            String revenue = AFa1tSDK.getRevenue();
            if (revenue != null) {
                aFh1rSDK.getMediationNetwork("appUserId", revenue);
            }
            try {
                aFh1rSDK.getMediationNetwork("model", Build.MODEL);
                Object[] objArr = new Object[1];
                a((byte) (124 - TextUtils.lastIndexOf("", '0', 0)), "\u0006\u0003\u0007\u0006㙻", 5 - TextUtils.indexOf("", "", 0), objArr);
                aFh1rSDK.getMediationNetwork(((String) objArr[0]).intern(), Build.BRAND);
            } catch (Throwable th2) {
                AFLogger.afErrorLog("Exception while collecting device brand and model.", th2);
            }
            if (AppsFlyerProperties.getInstance().getBoolean(AppsFlyerProperties.DEVICE_TRACKING_DISABLED, false)) {
                int i5 = AFKeystoreWrapper + 75;
                AFLogger = i5 % 128;
                if (i5 % 2 != 0) {
                    aFh1rSDK.getMediationNetwork(AppsFlyerProperties.DEVICE_TRACKING_DISABLED, "true");
                    int i6 = 86 / 0;
                } else {
                    aFh1rSDK.getMediationNetwork(AppsFlyerProperties.DEVICE_TRACKING_DISABLED, "true");
                }
            }
            AFb1mSDK aFb1mSDKK_ = AFb1jSDK.k_(context.getContentResolver());
            if (aFb1mSDKK_ != null) {
                int i7 = AFLogger + 113;
                AFKeystoreWrapper = i7 % 128;
                if (i7 % 2 != 0) {
                    aFh1rSDK.getMediationNetwork("amazon_aid", aFb1mSDKK_.getMonetizationNetwork);
                    aFh1rSDK.getMediationNetwork("amazon_aid_limit", String.valueOf(aFb1mSDKK_.getMediationNetwork));
                } else {
                    aFh1rSDK.getMediationNetwork("amazon_aid", aFb1mSDKK_.getMonetizationNetwork);
                    aFh1rSDK.getMediationNetwork("amazon_aid_limit", String.valueOf(aFb1mSDKK_.getMediationNetwork));
                    obj.hashCode();
                    throw null;
                }
            }
            aFh1rSDK.getMediationNetwork("devkey", ((AFe1dSDK) this).component3.getMediationNetwork());
            aFh1rSDK.getMediationNetwork("uid", AFb1iSDK.getRevenue(this.copydefault.getMonetizationNetwork));
            aFh1rSDK.getMediationNetwork("af_gcm_token", this.equals);
            aFh1rSDK.getMediationNetwork("launch_counter", Integer.toString(this.copy.AFAdRevenueData("appsFlyerCount", 0)));
            aFh1rSDK.getMediationNetwork("sdk", Integer.toString(Build.VERSION.SDK_INT));
            String strComponent2 = this.copydefault.component2();
            if (strComponent2 != null) {
                int i8 = AFLogger + 19;
                AFKeystoreWrapper = i8 % 128;
                int i9 = i8 % 2;
                aFh1rSDK.getMediationNetwork(AppsFlyerProperties.CHANNEL, strComponent2);
                return;
            }
            return;
        }
        super.AFAdRevenueData(aFh1rSDK);
        Context context2 = this.hashCode.getMonetizationNetwork;
        obj.hashCode();
        throw null;
    }

    @Override // com.appsflyer.internal.AFf1rSDK
    protected final void component3(AFh1rSDK aFh1rSDK) {
        int i = 2 % 2;
        int i2 = AFKeystoreWrapper + 111;
        AFLogger = i2 % 128;
        if (i2 % 2 == 0) {
            String strAFAdRevenueData = this.copydefault.AFAdRevenueData();
            if (strAFAdRevenueData != null) {
                int i3 = AFKeystoreWrapper + 103;
                AFLogger = i3 % 128;
                int i4 = i3 % 2;
                aFh1rSDK.getMediationNetwork("advertiserId", strAFAdRevenueData);
                return;
            }
            return;
        }
        this.copydefault.AFAdRevenueData();
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    @Override // com.appsflyer.internal.AFf1rSDK, com.appsflyer.internal.AFe1dSDK
    protected final boolean copydefault() {
        int i = 2 % 2;
        int i2 = AFKeystoreWrapper + 95;
        int i3 = i2 % 128;
        AFLogger = i3;
        boolean z = i2 % 2 != 0;
        int i4 = i3 + 73;
        AFKeystoreWrapper = i4 % 128;
        if (i4 % 2 != 0) {
            return z;
        }
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    private void copy() {
        AFc1qSDK aFc1qSDK;
        boolean z;
        int i = 2 % 2;
        int i2 = AFLogger + 101;
        AFKeystoreWrapper = i2 % 128;
        if (i2 % 2 == 0) {
            aFc1qSDK = this.copy;
            z = false;
        } else {
            aFc1qSDK = this.copy;
            z = true;
        }
        aFc1qSDK.getCurrencyIso4217Code("sentRegisterRequestToAF", z);
        AFLogger.afDebugLog("[register] Successfully registered for Uninstall Tracking");
        int i3 = AFKeystoreWrapper + 81;
        AFLogger = i3 % 128;
        int i4 = i3 % 2;
    }

    private static /* synthetic */ Object getRevenue(Object[] objArr) {
        int i = 2 % 2;
        int i2 = AFLogger + 53;
        AFKeystoreWrapper = i2 % 128;
        Object obj = null;
        if (i2 % 2 != 0) {
            return null;
        }
        obj.hashCode();
        throw null;
    }

    @Override // com.appsflyer.internal.AFf1rSDK
    protected final void getMonetizationNetwork(AFh1rSDK aFh1rSDK) {
        int i = 2 % 2;
        int i2 = AFLogger + 21;
        AFKeystoreWrapper = i2 % 128;
        if (i2 % 2 != 0) {
            return;
        }
        Object obj = null;
        obj.hashCode();
        throw null;
    }

    @Override // com.appsflyer.internal.AFf1rSDK
    protected final void getMediationNetwork(AFh1rSDK aFh1rSDK) {
        int i = 2 % 2;
        int i2 = AFLogger + 103;
        AFKeystoreWrapper = i2 % 128;
        int i3 = i2 % 2;
    }

    @Override // com.appsflyer.internal.AFf1rSDK
    protected final void getCurrencyIso4217Code(AFh1rSDK aFh1rSDK) {
        int i = 2 % 2;
        int i2 = AFKeystoreWrapper + 1;
        AFLogger = i2 % 128;
        int i3 = i2 % 2;
    }

    private static void a(byte b, String str, int i, Object[] objArr) {
        int i2;
        int i3 = 2 % 2;
        Object charArray = str;
        if (str != null) {
            charArray = str.toCharArray();
        }
        char[] cArr = (char[]) charArray;
        AFk1mSDK aFk1mSDK = new AFk1mSDK();
        char[] cArr2 = AFInAppEventParameterName;
        if (cArr2 != null) {
            int length = cArr2.length;
            char[] cArr3 = new char[length];
            for (int i4 = 0; i4 < length; i4++) {
                cArr3[i4] = (char) (((long) cArr2[i4]) ^ (-374623853307093042L));
            }
            cArr2 = cArr3;
        }
        char c = (char) ((-374623853307093042L) ^ ((long) registerClient));
        char[] cArr4 = new char[i];
        if (i % 2 != 0) {
            int i5 = $10 + 67;
            $11 = i5 % 128;
            if (i5 % 2 == 0) {
                i2 = i + 123;
                cArr4[i2] = (char) (cArr[i2] - b);
            } else {
                i2 = i - 1;
                cArr4[i2] = (char) (cArr[i2] - b);
            }
        } else {
            i2 = i;
        }
        if (i2 > 1) {
            aFk1mSDK.AFAdRevenueData = 0;
            int i6 = $10 + 113;
            $11 = i6 % 128;
            int i7 = i6 % 2;
            while (aFk1mSDK.AFAdRevenueData < i2) {
                aFk1mSDK.getMonetizationNetwork = cArr[aFk1mSDK.AFAdRevenueData];
                aFk1mSDK.getCurrencyIso4217Code = cArr[aFk1mSDK.AFAdRevenueData + 1];
                if (aFk1mSDK.getMonetizationNetwork == aFk1mSDK.getCurrencyIso4217Code) {
                    cArr4[aFk1mSDK.AFAdRevenueData] = (char) (aFk1mSDK.getMonetizationNetwork - b);
                    cArr4[aFk1mSDK.AFAdRevenueData + 1] = (char) (aFk1mSDK.getCurrencyIso4217Code - b);
                } else {
                    aFk1mSDK.getMediationNetwork = aFk1mSDK.getMonetizationNetwork / c;
                    aFk1mSDK.component1 = aFk1mSDK.getMonetizationNetwork % c;
                    aFk1mSDK.getRevenue = aFk1mSDK.getCurrencyIso4217Code / c;
                    aFk1mSDK.component2 = aFk1mSDK.getCurrencyIso4217Code % c;
                    if (aFk1mSDK.component1 == aFk1mSDK.component2) {
                        int i8 = $10 + 83;
                        $11 = i8 % 128;
                        int i9 = i8 % 2;
                        aFk1mSDK.getMediationNetwork = ((aFk1mSDK.getMediationNetwork + c) - 1) % c;
                        aFk1mSDK.getRevenue = ((aFk1mSDK.getRevenue + c) - 1) % c;
                        int i10 = (aFk1mSDK.getMediationNetwork * c) + aFk1mSDK.component1;
                        int i11 = (aFk1mSDK.getRevenue * c) + aFk1mSDK.component2;
                        cArr4[aFk1mSDK.AFAdRevenueData] = cArr2[i10];
                        cArr4[aFk1mSDK.AFAdRevenueData + 1] = cArr2[i11];
                    } else if (aFk1mSDK.getMediationNetwork == aFk1mSDK.getRevenue) {
                        aFk1mSDK.component1 = ((aFk1mSDK.component1 + c) - 1) % c;
                        aFk1mSDK.component2 = ((aFk1mSDK.component2 + c) - 1) % c;
                        int i12 = (aFk1mSDK.getMediationNetwork * c) + aFk1mSDK.component1;
                        int i13 = (aFk1mSDK.getRevenue * c) + aFk1mSDK.component2;
                        cArr4[aFk1mSDK.AFAdRevenueData] = cArr2[i12];
                        cArr4[aFk1mSDK.AFAdRevenueData + 1] = cArr2[i13];
                        int i14 = $10 + 69;
                        $11 = i14 % 128;
                        int i15 = i14 % 2;
                    } else {
                        int i16 = (aFk1mSDK.getMediationNetwork * c) + aFk1mSDK.component2;
                        int i17 = (aFk1mSDK.getRevenue * c) + aFk1mSDK.component1;
                        cArr4[aFk1mSDK.AFAdRevenueData] = cArr2[i16];
                        cArr4[aFk1mSDK.AFAdRevenueData + 1] = cArr2[i17];
                    }
                }
                aFk1mSDK.AFAdRevenueData += 2;
            }
        }
        int i18 = $11 + 33;
        $10 = i18 % 128;
        int i19 = i18 % 2;
        int i20 = 0;
        while (i20 < i) {
            int i21 = $11 + 67;
            $10 = i21 % 128;
            if (i21 % 2 != 0) {
                cArr4[i20] = (char) (cArr4[i20] ^ 31812);
                i20 += 84;
            } else {
                cArr4[i20] = (char) (cArr4[i20] ^ 13722);
                i20++;
            }
        }
        objArr[0] = new String(cArr4);
    }

    @Override // com.appsflyer.internal.AFf1rSDK
    protected final void getRevenue(AFh1rSDK aFh1rSDK) {
        AFAdRevenueData(new Object[]{this, aFh1rSDK}, 2011239149, -2011239149, System.identityHashCode(this));
    }
}
