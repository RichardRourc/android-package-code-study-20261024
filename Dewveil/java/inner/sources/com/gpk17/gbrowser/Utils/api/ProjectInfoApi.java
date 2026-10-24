package com.gpk17.gbrowser.Utils.api;

import android.content.Context;
import android.os.Build;
import android.util.Base64;
import android.util.Log;
import androidx.core.app.NotificationCompat;
import com.android.volley.AuthFailureError;
import com.android.volley.DefaultRetryPolicy;
import com.android.volley.RequestQueue;
import com.android.volley.Response;
import com.android.volley.VolleyError;
import com.android.volley.toolbox.BaseHttpStack;
import com.android.volley.toolbox.JsonObjectRequest;
import com.android.volley.toolbox.Volley;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.google.gson.Gson;
import com.gpk17.gbrowser.BuildConfig;
import com.gpk17.gbrowser.Utils.AppHttpSingleton;
import com.gpk17.gbrowser.Utils.webview.UnsafeHurlStack;
import com.gpk17.gbrowser.interfaces.OnApiResponseListener;
import java.math.BigInteger;
import java.security.MessageDigest;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.TreeMap;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class ProjectInfoApi {
    private static final String ALPHABETS = "abcdefghijklmnopqrstuvxyz";
    private static final String DIGITS = "0123456789";
    private static final String TAG = "ProjectInfoApi";
    private static String[] apiUrls = {"https://apisrv.toppomelo.net", "https://apisrv.toppear.net"};
    private static int index;

    public static String getMD5LowerCase(String str) {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("MD5");
            messageDigest.update(str.getBytes());
            return new BigInteger(1, messageDigest.digest()).toString(16);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String base64url(byte[] bArr) {
        return Base64.encodeToString(bArr, 3).replaceAll("=+$", "").replaceAll("\"", "-").replaceAll("\\+", "-").replaceAll("/", "_");
    }

    public static String getCurrentTime() {
        return String.valueOf(Math.round(System.currentTimeMillis() / 1000000.0d));
    }

    public static byte[] parseUtf8(String str) {
        return new Gson().toJson(str).getBytes();
    }

    public static void newGetProjectInfo(final Context context, final int i, final OnApiResponseListener onApiResponseListener) {
        Log.d(TAG, "getProjectInfo >>> projectName: du23u-3077548");
        RequestQueue requestQueueNewRequestQueue = Volley.newRequestQueue(context, (BaseHttpStack) new UnsafeHurlStack());
        JsonObjectRequest jsonObjectRequest = new JsonObjectRequest(0, apiUrls[i] + "/index.php", null, new Response.Listener<JSONObject>() { // from class: com.gpk17.gbrowser.Utils.api.ProjectInfoApi.1
            @Override // com.android.volley.Response.Listener
            public void onResponse(JSONObject jSONObject) {
                try {
                    if (new JSONObject(jSONObject.getString(NotificationCompat.CATEGORY_STATUS)).getInt("code") == 2000) {
                        ProjectInfoApi.getInfo(context, onApiResponseListener);
                        return;
                    }
                    int i2 = i + 1;
                    if (i2 < ProjectInfoApi.apiUrls.length) {
                        ProjectInfoApi.newGetProjectInfo(context, i2, onApiResponseListener);
                    } else {
                        onApiResponseListener.onResponse(null);
                    }
                } catch (JSONException e) {
                    onApiResponseListener.onResponse(null);
                    throw new RuntimeException(e);
                }
            }
        }, new Response.ErrorListener() { // from class: com.gpk17.gbrowser.Utils.api.ProjectInfoApi.2
            @Override // com.android.volley.Response.ErrorListener
            public void onErrorResponse(VolleyError volleyError) {
                int i2 = i + 1;
                if (i2 < ProjectInfoApi.apiUrls.length) {
                    ProjectInfoApi.newGetProjectInfo(context, i2, onApiResponseListener);
                } else {
                    onApiResponseListener.onResponse(null);
                }
            }
        });
        jsonObjectRequest.setRetryPolicy(new DefaultRetryPolicy(10000, 1, 1.0f));
        requestQueueNewRequestQueue.add(jsonObjectRequest);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void getInfo(Context context, final OnApiResponseListener onApiResponseListener) {
        Log.d(TAG, "getInfo");
        long jCurrentTimeMillis = System.currentTimeMillis() / 1000;
        TreeMap treeMap = new TreeMap();
        treeMap.put("mechanism", BuildConfig.MECHANISM);
        treeMap.put("projectname", BuildConfig.PROJECT_NAME);
        treeMap.put("timestamp", String.valueOf(jCurrentTimeMillis));
        String[] strArr = (String[]) treeMap.keySet().toArray(new String[0]);
        Arrays.sort(strArr);
        StringBuilder sb = new StringBuilder();
        for (String str : strArr) {
            sb.append(str).append("=").append((String) treeMap.get(str)).append("&");
        }
        if (sb.length() > 0) {
            sb.deleteCharAt(sb.length() - 1);
        }
        String str2 = base64url(parseUtf8(BuildConfig.MECHANISM)) + '.' + base64url(parseUtf8(BuildConfig.PROJECT_NAME)) + '.' + base64url(parseUtf8(String.valueOf(jCurrentTimeMillis))) + '.' + getMD5LowerCase(sb.toString() + BuildConfig.TOKEN);
        final String mD5LowerCase = getMD5LowerCase(getCurrentTime() + "5566");
        final String str3 = "35" + (Build.BOARD.length() % 10) + (Build.BRAND.length() % 10) + (Build.DISPLAY.length() % 10) + (Build.HOST.length() % 10) + (Build.ID.length() % 10) + (Build.USER.length() % 10) + (Build.TYPE.length() % 10) + (Build.DEVICE.length() % 10) + (Build.MANUFACTURER.length() % 10) + (Build.MODEL.length() % 10) + (Build.PRODUCT.length() % 10);
        JsonObjectRequest jsonObjectRequest = new JsonObjectRequest(0, apiUrls[index] + "/v2/app.php?b=" + str2, null, new Response.Listener<JSONObject>() { // from class: com.gpk17.gbrowser.Utils.api.ProjectInfoApi.3
            @Override // com.android.volley.Response.Listener
            public void onResponse(JSONObject jSONObject) {
                Log.d(ProjectInfoApi.TAG, FirebaseAnalytics.Param.SUCCESS);
                onApiResponseListener.onResponse(jSONObject);
            }
        }, new Response.ErrorListener() { // from class: com.gpk17.gbrowser.Utils.api.ProjectInfoApi.4
            @Override // com.android.volley.Response.ErrorListener
            public void onErrorResponse(VolleyError volleyError) {
                Log.e(ProjectInfoApi.TAG, volleyError.toString());
                onApiResponseListener.onResponse(null);
            }
        }) { // from class: com.gpk17.gbrowser.Utils.api.ProjectInfoApi.5
            @Override // com.android.volley.Request
            public Map<String, String> getHeaders() throws AuthFailureError {
                HashMap map = new HashMap();
                map.put("appcsrf", mD5LowerCase);
                map.put("UUID", str3);
                return map;
            }
        };
        jsonObjectRequest.setRetryPolicy(new DefaultRetryPolicy(10000, 1, 1.0f));
        AppHttpSingleton.getInstance(context.getApplicationContext()).addToRequestQueue(jsonObjectRequest);
    }
}
