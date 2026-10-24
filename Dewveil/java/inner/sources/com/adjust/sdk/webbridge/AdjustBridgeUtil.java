package com.adjust.sdk.webbridge;

import android.net.Uri;
import android.util.Log;
import android.webkit.WebView;
import com.adjust.sdk.AdjustAttribution;
import com.adjust.sdk.AdjustEventFailure;
import com.adjust.sdk.AdjustEventSuccess;
import com.adjust.sdk.AdjustFactory;
import com.adjust.sdk.AdjustSessionFailure;
import com.adjust.sdk.AdjustSessionSuccess;
import com.adjust.sdk.ILogger;
import com.adjust.sdk.network.UtilNetworking;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.security.SecureRandom;
import java.security.cert.CertificateEncodingException;
import java.security.cert.CertificateException;
import java.security.cert.X509Certificate;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLSession;
import javax.net.ssl.TrustManager;
import javax.net.ssl.X509TrustManager;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class AdjustBridgeUtil {
    public static void sendDeeplinkToWebView(final WebView webView, final Uri uri) {
        if (webView != null) {
            webView.post(new Runnable() { // from class: com.adjust.sdk.webbridge.AdjustBridgeUtil.1
                @Override // java.lang.Runnable
                public void run() {
                    webView.loadUrl("javascript:adjust_deeplink('" + uri.toString() + "');");
                }
            });
        }
    }

    public static String fieldToString(Object obj) {
        if (obj == null) {
            return null;
        }
        String string = obj.toString();
        if (string.equals("null")) {
            return null;
        }
        return string;
    }

    public static Boolean fieldToBoolean(Object obj) {
        if (obj == null) {
            return null;
        }
        String string = obj.toString();
        if (string.equalsIgnoreCase("true")) {
            return true;
        }
        return string.equalsIgnoreCase("false") ? false : null;
    }

    public static Double fieldToDouble(Object obj) {
        if (obj == null) {
            return null;
        }
        try {
            return Double.valueOf(Double.parseDouble(obj.toString()));
        } catch (Exception unused) {
            return null;
        }
    }

    public static Long fieldToLong(Object obj) {
        if (obj == null) {
            return null;
        }
        try {
            return Long.valueOf(Long.parseLong(obj.toString()));
        } catch (Exception unused) {
            return null;
        }
    }

    public static void execAttributionCallbackCommand(final WebView webView, final String str, final AdjustAttribution adjustAttribution) {
        if (webView == null) {
            return;
        }
        webView.post(new Runnable() { // from class: com.adjust.sdk.webbridge.AdjustBridgeUtil.2
            @Override // java.lang.Runnable
            public void run() {
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put("trackerName", adjustAttribution.trackerName == null ? JSONObject.NULL : adjustAttribution.trackerName);
                    jSONObject.put("trackerToken", adjustAttribution.trackerToken == null ? JSONObject.NULL : adjustAttribution.trackerToken);
                    jSONObject.put("campaign", adjustAttribution.campaign == null ? JSONObject.NULL : adjustAttribution.campaign);
                    jSONObject.put("network", adjustAttribution.network == null ? JSONObject.NULL : adjustAttribution.network);
                    jSONObject.put("creative", adjustAttribution.creative == null ? JSONObject.NULL : adjustAttribution.creative);
                    jSONObject.put("adgroup", adjustAttribution.adgroup == null ? JSONObject.NULL : adjustAttribution.adgroup);
                    jSONObject.put("clickLabel", adjustAttribution.clickLabel == null ? JSONObject.NULL : adjustAttribution.clickLabel);
                    jSONObject.put("adid", adjustAttribution.adid == null ? JSONObject.NULL : adjustAttribution.adid);
                    jSONObject.put("costType", adjustAttribution.costType == null ? JSONObject.NULL : adjustAttribution.costType);
                    jSONObject.put("costAmount", (adjustAttribution.costAmount == null || adjustAttribution.costAmount.isNaN()) ? 0.0d : adjustAttribution.costAmount.doubleValue());
                    jSONObject.put("costCurrency", adjustAttribution.costCurrency == null ? JSONObject.NULL : adjustAttribution.costCurrency);
                    jSONObject.put("fbInstallReferrer", adjustAttribution.fbInstallReferrer == null ? JSONObject.NULL : adjustAttribution.fbInstallReferrer);
                    webView.loadUrl("javascript:" + str + "(" + jSONObject.toString() + ");");
                } catch (JSONException e) {
                    e.printStackTrace();
                }
            }
        });
    }

    public static void execSessionSuccessCallbackCommand(final WebView webView, final String str, final AdjustSessionSuccess adjustSessionSuccess) {
        if (webView == null) {
            return;
        }
        webView.post(new Runnable() { // from class: com.adjust.sdk.webbridge.AdjustBridgeUtil.3
            @Override // java.lang.Runnable
            public void run() {
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put("message", adjustSessionSuccess.message == null ? JSONObject.NULL : adjustSessionSuccess.message);
                    jSONObject.put("adid", adjustSessionSuccess.adid == null ? JSONObject.NULL : adjustSessionSuccess.adid);
                    jSONObject.put("timestamp", adjustSessionSuccess.timestamp == null ? JSONObject.NULL : adjustSessionSuccess.timestamp);
                    jSONObject.put("jsonResponse", adjustSessionSuccess.jsonResponse == null ? JSONObject.NULL : adjustSessionSuccess.jsonResponse);
                    webView.loadUrl("javascript:" + str + "(" + jSONObject.toString() + ");");
                } catch (JSONException e) {
                    e.printStackTrace();
                }
            }
        });
    }

    public static void execSessionFailureCallbackCommand(final WebView webView, final String str, final AdjustSessionFailure adjustSessionFailure) {
        if (webView == null) {
            return;
        }
        webView.post(new Runnable() { // from class: com.adjust.sdk.webbridge.AdjustBridgeUtil.4
            @Override // java.lang.Runnable
            public void run() {
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put("message", adjustSessionFailure.message == null ? JSONObject.NULL : adjustSessionFailure.message);
                    jSONObject.put("adid", adjustSessionFailure.adid == null ? JSONObject.NULL : adjustSessionFailure.adid);
                    jSONObject.put("timestamp", adjustSessionFailure.timestamp == null ? JSONObject.NULL : adjustSessionFailure.timestamp);
                    jSONObject.put("willRetry", adjustSessionFailure.willRetry ? String.valueOf(true) : String.valueOf(false));
                    jSONObject.put("jsonResponse", adjustSessionFailure.jsonResponse == null ? JSONObject.NULL : adjustSessionFailure.jsonResponse);
                    webView.loadUrl("javascript:" + str + "(" + jSONObject.toString() + ");");
                } catch (JSONException e) {
                    e.printStackTrace();
                }
            }
        });
    }

    public static void execEventSuccessCallbackCommand(final WebView webView, final String str, final AdjustEventSuccess adjustEventSuccess) {
        if (webView == null) {
            return;
        }
        webView.post(new Runnable() { // from class: com.adjust.sdk.webbridge.AdjustBridgeUtil.5
            @Override // java.lang.Runnable
            public void run() {
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put("eventToken", adjustEventSuccess.eventToken == null ? JSONObject.NULL : adjustEventSuccess.eventToken);
                    jSONObject.put("message", adjustEventSuccess.message == null ? JSONObject.NULL : adjustEventSuccess.message);
                    jSONObject.put("adid", adjustEventSuccess.adid == null ? JSONObject.NULL : adjustEventSuccess.adid);
                    jSONObject.put("timestamp", adjustEventSuccess.timestamp == null ? JSONObject.NULL : adjustEventSuccess.timestamp);
                    jSONObject.put("callbackId", adjustEventSuccess.callbackId == null ? JSONObject.NULL : adjustEventSuccess.callbackId);
                    jSONObject.put("jsonResponse", adjustEventSuccess.jsonResponse == null ? JSONObject.NULL : adjustEventSuccess.jsonResponse);
                    webView.loadUrl("javascript:" + str + "(" + jSONObject.toString() + ");");
                } catch (JSONException e) {
                    e.printStackTrace();
                }
            }
        });
    }

    public static void execEventFailureCallbackCommand(final WebView webView, final String str, final AdjustEventFailure adjustEventFailure) {
        if (webView == null) {
            return;
        }
        webView.post(new Runnable() { // from class: com.adjust.sdk.webbridge.AdjustBridgeUtil.6
            @Override // java.lang.Runnable
            public void run() {
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put("eventToken", adjustEventFailure.eventToken == null ? JSONObject.NULL : adjustEventFailure.eventToken);
                    jSONObject.put("message", adjustEventFailure.message == null ? JSONObject.NULL : adjustEventFailure.message);
                    jSONObject.put("adid", adjustEventFailure.adid == null ? JSONObject.NULL : adjustEventFailure.adid);
                    jSONObject.put("timestamp", adjustEventFailure.timestamp == null ? JSONObject.NULL : adjustEventFailure.timestamp);
                    jSONObject.put("willRetry", adjustEventFailure.willRetry ? String.valueOf(true) : String.valueOf(false));
                    jSONObject.put("callbackId", adjustEventFailure.callbackId == null ? JSONObject.NULL : adjustEventFailure.callbackId);
                    jSONObject.put("jsonResponse", adjustEventFailure.jsonResponse == null ? JSONObject.NULL : adjustEventFailure.jsonResponse);
                    webView.loadUrl("javascript:" + str + "(" + jSONObject.toString() + ");");
                } catch (JSONException e) {
                    e.printStackTrace();
                }
            }
        });
    }

    public static void execSingleValueCallback(final WebView webView, final String str, final String str2) {
        if (webView == null) {
            return;
        }
        webView.post(new Runnable() { // from class: com.adjust.sdk.webbridge.AdjustBridgeUtil.7
            @Override // java.lang.Runnable
            public void run() {
                webView.loadUrl("javascript:" + str + "('" + str2 + "');");
            }
        });
    }

    public static String[] jsonArrayToArray(JSONArray jSONArray) throws JSONException {
        if (jSONArray == null) {
            return null;
        }
        String[] strArr = new String[jSONArray.length()];
        for (int i = 0; i < jSONArray.length(); i++) {
            strArr[i] = jSONArray.get(i).toString();
        }
        return strArr;
    }

    public static ILogger getLogger() {
        return AdjustFactory.getLogger();
    }

    static UtilNetworking.IConnectionOptions testConnectionOptions() {
        return new UtilNetworking.IConnectionOptions() { // from class: com.adjust.sdk.webbridge.AdjustBridgeUtil.8
            @Override // com.adjust.sdk.network.UtilNetworking.IConnectionOptions
            public void applyConnectionOptions(HttpsURLConnection httpsURLConnection, String str) {
                UtilNetworking.createDefaultConnectionOptions().applyConnectionOptions(httpsURLConnection, str);
                try {
                    SSLContext sSLContext = SSLContext.getInstance("TLS");
                    sSLContext.init(null, new TrustManager[]{new X509TrustManager() { // from class: com.adjust.sdk.webbridge.AdjustBridgeUtil.8.1
                        @Override // javax.net.ssl.X509TrustManager
                        public X509Certificate[] getAcceptedIssuers() {
                            Log.d("TestApp", "getAcceptedIssuers");
                            return null;
                        }

                        @Override // javax.net.ssl.X509TrustManager
                        public void checkClientTrusted(X509Certificate[] x509CertificateArr, String str2) {
                            Log.d("TestApp", "checkClientTrusted ");
                        }

                        @Override // javax.net.ssl.X509TrustManager
                        public void checkServerTrusted(X509Certificate[] x509CertificateArr, String str2) throws CertificateException {
                            Log.d("TestApp", "checkServerTrusted ");
                            try {
                                if (AdjustBridgeUtil.byte2HexFormatted(MessageDigest.getInstance("SHA1").digest(x509CertificateArr[0].getEncoded())).equalsIgnoreCase("7BCFF44099A35BC093BB48C5A6B9A516CDFDA0D1")) {
                                } else {
                                    throw new CertificateException();
                                }
                            } catch (NoSuchAlgorithmException e) {
                                Log.e("TestApp", "testingMode error " + e.getMessage());
                            } catch (CertificateEncodingException e2) {
                                Log.e("TestApp", "testingMode error " + e2.getMessage());
                            }
                        }
                    }}, new SecureRandom());
                    httpsURLConnection.setSSLSocketFactory(sSLContext.getSocketFactory());
                    httpsURLConnection.setHostnameVerifier(new HostnameVerifier() { // from class: com.adjust.sdk.webbridge.AdjustBridgeUtil.8.2
                        @Override // javax.net.ssl.HostnameVerifier
                        public boolean verify(String str2, SSLSession sSLSession) {
                            Log.d("TestApp", "verify hostname ");
                            return true;
                        }
                    });
                } catch (Exception e) {
                    Log.e("TestApp", "testingMode error " + e.getMessage());
                }
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static String byte2HexFormatted(byte[] bArr) {
        StringBuilder sb = new StringBuilder(bArr.length * 2);
        for (byte b : bArr) {
            String hexString = Integer.toHexString(b);
            int length = hexString.length();
            if (length == 1) {
                hexString = "0" + hexString;
            }
            if (length > 2) {
                hexString = hexString.substring(length - 2, length);
            }
            sb.append(hexString.toUpperCase());
        }
        return sb.toString();
    }
}
