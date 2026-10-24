package androidx.core.smain.utils;

import android.content.Context;
import android.content.pm.PackageManager;
import android.hardware.Sensor;
import android.hardware.SensorManager;
import android.os.Build;
import android.telephony.TelephonyManager;
import java.io.File;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class EmulatorDetector {
    private static EmulatorDetector m_instance;

    public static EmulatorDetector getInstance() {
        if (m_instance == null) {
            m_instance = new EmulatorDetector();
        }
        return m_instance;
    }

    public boolean isEmulator(Context context) {
        return getScore(context) >= 5;
    }

    private int getScore(Context context) {
        int i = checkBuild() ? 3 : 0;
        if (checkQemu()) {
            i += 3;
        }
        if (checkCpu()) {
            i += 2;
        }
        if (checkSensors(context)) {
            i += 2;
        }
        if (checkFiles()) {
            i += 5;
        }
        if (checkPackages(context)) {
            i += 5;
        }
        return checkOperator(context) ? i + 2 : i;
    }

    private boolean checkBuild() {
        return Build.FINGERPRINT.startsWith("generic") || Build.FINGERPRINT.contains("vbox") || Build.FINGERPRINT.contains("test-keys") || Build.MODEL.contains("google_sdk") || Build.MODEL.contains("Emulator") || Build.MODEL.contains("Android SDK built for x86") || Build.MODEL.contains("sdk_gphone") || Build.MANUFACTURER.contains("Genymotion") || Build.MANUFACTURER.contains("netease") || Build.BRAND.startsWith("generic") || Build.DEVICE.startsWith("generic") || Build.PRODUCT.contains("sdk") || Build.PRODUCT.contains("emulator") || Build.HARDWARE.contains("goldfish") || Build.HARDWARE.contains("ranchu");
    }

    private boolean checkQemu() {
        return "1".equals(getSystemProperty("ro.kernel.qemu"));
    }

    private boolean checkCpu() {
        try {
            for (String str : Build.SUPPORTED_ABIS) {
                if (str.contains("x86")) {
                    return true;
                }
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    private boolean checkSensors(Context context) {
        try {
            List<Sensor> sensorList = ((SensorManager) context.getSystemService("sensor")).getSensorList(-1);
            return sensorList == null || sensorList.size() < 5;
        } catch (Throwable unused) {
            return false;
        }
    }

    private boolean checkOperator(Context context) {
        String networkOperatorName;
        try {
            TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
            return (telephonyManager == null || (networkOperatorName = telephonyManager.getNetworkOperatorName()) == null || !networkOperatorName.equalsIgnoreCase("android")) ? false : true;
        } catch (Throwable unused) {
            return false;
        }
    }

    private boolean checkFiles() {
        String[] strArr = {"/system/bin/qemu-props", "/system/bin/androVM-prop", "/system/bin/microvirt-prop", "/system/bin/nox-prop", "/system/lib/libc_malloc_debug_qemu.so", "/sys/qemu_trace", "/system/etc/init.goldfish.rc", "/system/etc/init.ranchu.rc", "/dev/socket/qemud", "/dev/qemu_pipe"};
        for (int i = 0; i < 10; i++) {
            try {
                if (new File(strArr[i]).exists()) {
                    return true;
                }
            } catch (Throwable unused) {
            }
        }
        return false;
    }

    private boolean checkPackages(Context context) {
        String[] strArr = {"com.microvirt.launcher", "com.bignox.app", "com.netease.mumu.cloner", "com.bluestacks.home", "com.bluestacks.settings", "com.genymotion.superuser"};
        PackageManager packageManager = context.getPackageManager();
        for (int i = 0; i < 6; i++) {
            try {
                packageManager.getPackageInfo(strArr[i], 0);
                return true;
            } catch (Throwable unused) {
            }
        }
        return false;
    }

    private String getSystemProperty(String str) {
        try {
            return (String) Class.forName("android.os.SystemProperties").getMethod("get", String.class).invoke(null, str);
        } catch (Throwable unused) {
            return "";
        }
    }
}
