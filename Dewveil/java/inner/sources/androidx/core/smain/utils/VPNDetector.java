package androidx.core.smain.utils;

import android.content.Context;
import android.content.pm.PackageManager;
import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkCapabilities;
import java.net.NetworkInterface;
import java.util.Collections;
import java.util.Iterator;

/* JADX INFO: loaded from: classes2.dex */
public class VPNDetector {
    private static VPNDetector m_isntance;

    public static VPNDetector getInstance() {
        if (m_isntance == null) {
            m_isntance = new VPNDetector();
        }
        return m_isntance;
    }

    public boolean isVpnActive(Context context) {
        return getScore(context) >= 3;
    }

    private int getScore(Context context) {
        int i = checkVpnTransport(context) ? 5 : 0;
        if (checkTunInterface()) {
            i += 3;
        }
        return checkVpnApps(context) ? i + 2 : i;
    }

    private boolean checkVpnTransport(Context context) {
        Network activeNetwork;
        NetworkCapabilities networkCapabilities;
        try {
            ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
            if (connectivityManager == null || (activeNetwork = connectivityManager.getActiveNetwork()) == null || (networkCapabilities = connectivityManager.getNetworkCapabilities(activeNetwork)) == null) {
                return false;
            }
            return networkCapabilities.hasTransport(4);
        } catch (Throwable unused) {
            return false;
        }
    }

    private boolean checkTunInterface() {
        try {
            Iterator it = Collections.list(NetworkInterface.getNetworkInterfaces()).iterator();
            while (it.hasNext()) {
                String name = ((NetworkInterface) it.next()).getName();
                if (name != null) {
                    String lowerCase = name.toLowerCase();
                    if (lowerCase.startsWith("tun") || lowerCase.startsWith("ppp") || lowerCase.startsWith("wg") || lowerCase.contains("vpn")) {
                        return true;
                    }
                }
            }
            return false;
        } catch (Throwable unused) {
            return false;
        }
    }

    private boolean checkVpnApps(Context context) {
        PackageManager packageManager = context.getPackageManager();
        String[] strArr = {"com.github.kr328.clash", "com.github.metacubex.clash.meta", "com.v2ray.ang", "com.wireguard.android", "de.blinkt.openvpn", "com.surfshark.vpnclient.android", "com.nordvpn.android", "com.expressvpn.vpn", "ch.protonvpn.android", "com.psiphon3", "com.jrzheng.supervpnfree"};
        for (int i = 0; i < 11; i++) {
            try {
                packageManager.getPackageInfo(strArr[i], 0);
                return true;
            } catch (Throwable unused) {
            }
        }
        return false;
    }
}
