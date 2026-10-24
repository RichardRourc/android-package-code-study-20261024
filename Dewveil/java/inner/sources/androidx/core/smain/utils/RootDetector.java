package androidx.core.smain.utils;

import android.os.Build;
import java.io.File;

/* JADX INFO: loaded from: classes2.dex */
public class RootDetector {
    private static RootDetector m_instance;

    public static RootDetector getInstance() {
        if (m_instance == null) {
            m_instance = new RootDetector();
        }
        return m_instance;
    }

    public boolean isRooted() {
        return getScore() >= 5;
    }

    private boolean hasMagisk() {
        String[] strArr = {"/data/adb/magisk", "/data/adb/modules", "/sbin/.magisk", "/debug_ramdisk", "/data/adb/service.d"};
        for (int i = 0; i < 5; i++) {
            if (new File(strArr[i]).exists()) {
                return true;
            }
        }
        return false;
    }

    private boolean hasZygisk() {
        return new File("/data/adb/modules").exists();
    }

    private boolean hasLsposed() {
        String[] strArr = {"/data/adb/lspd", "/data/adb/modules/lsposed"};
        for (int i = 0; i < 2; i++) {
            if (new File(strArr[i]).exists()) {
                return true;
            }
        }
        return false;
    }

    private int getScore() {
        int i = hasLsposed() ? 10 : 0;
        if (hasMagisk()) {
            i += 10;
        }
        if (checkSuFile()) {
            i += 5;
        }
        if (checkRootApps()) {
            i += 3;
        }
        if (checkDangerousProps()) {
            i += 3;
        }
        if (checkRWSystem()) {
            i += 3;
        }
        return checkTestKeys() ? i + 2 : i;
    }

    private boolean checkSuFile() {
        String[] strArr = {"/system/bin/su", "/system/xbin/su", "/sbin/su", "/vendor/bin/su", "/system/app/Superuser.apk", "/data/local/xbin/su", "/data/local/bin/su", "/data/local/su", "/su/bin/su", "/system/bin/.ext/.su", "/system/usr/we-need-root/su"};
        for (int i = 0; i < 11; i++) {
            try {
                if (new File(strArr[i]).exists()) {
                    return true;
                }
            } catch (Exception unused) {
            }
        }
        return false;
    }

    private boolean checkRootApps() {
        String[] strArr = {"/data/app/com.topjohnwu.magisk", "/data/app/eu.chainfire.supersu", "/data/app/com.koushikdutta.superuser", "/data/app/me.weishu.kernelsu", "/data/app/me.bmax.apatch"};
        for (int i = 0; i < 5; i++) {
            try {
                if (new File(strArr[i]).exists()) {
                    return true;
                }
            } catch (Exception unused) {
            }
        }
        return false;
    }

    private boolean checkDangerousProps() {
        return "0".equals(getSystemProperty("ro.secure")) || "1".equals(getSystemProperty("ro.debuggable"));
    }

    private boolean checkRWSystem() {
        try {
            return new File("/system").canWrite();
        } catch (Exception unused) {
            return false;
        }
    }

    private boolean checkTestKeys() {
        String str = Build.TAGS;
        return str != null && str.contains("test-keys");
    }

    private String getSystemProperty(String str) {
        try {
            return (String) Class.forName("android.os.SystemProperties").getMethod("get", String.class).invoke(null, str);
        } catch (Exception unused) {
            return "";
        }
    }
}
