package com.appsflyer.internal;

import com.adjust.sdk.Constants;
import com.appsflyer.AFLogger;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public final class AFh1ySDK {
    private static String getMediationNetwork(String str) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < str.length(); i++) {
            if (i == 0 || i == str.length() - 1) {
                sb.append(str.charAt(i));
            } else {
                sb.append("*");
            }
        }
        return sb.toString();
    }

    public static void getCurrencyIso4217Code(String str, JSONObject jSONObject) {
        String strSubstring;
        if (jSONObject != null) {
            try {
                if (jSONObject.has("appsflyerKey")) {
                    jSONObject.put("appsflyerKey", getMediationNetwork(jSONObject.getString("appsflyerKey")));
                }
                if (jSONObject.has("tcstring")) {
                    jSONObject.put("tcstring", "tcstring".length() > 20 ? "tcstring".substring(0, 10) : "tcstring");
                }
                if (jSONObject.has(Constants.REFERRER)) {
                    jSONObject.put(Constants.REFERRER, Constants.REFERRER.length() > 20 ? Constants.REFERRER.substring(0, 10) : Constants.REFERRER);
                }
                if (jSONObject.has("pia_token")) {
                    if ("pia_token".length() <= 20) {
                        strSubstring = "pia_token";
                    } else {
                        strSubstring = "pia_token".substring(0, 10);
                    }
                    jSONObject.put("pia_token", strSubstring);
                }
                AFLogger.INSTANCE.i(AFg1cSDK.OTHER, new StringBuilder().append(str).append(jSONObject).toString());
            } catch (JSONException e) {
                AFLogger.INSTANCE.e(AFg1cSDK.OTHER, "Not able to log the payload", e);
            }
        }
    }
}
