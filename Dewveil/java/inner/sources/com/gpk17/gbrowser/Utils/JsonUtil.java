package com.gpk17.gbrowser.Utils;

import android.util.Log;
import com.google.android.gms.common.internal.ImagesContract;
import com.gpk17.gbrowser.models.ProjectInfo;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class JsonUtil {
    private static final String TAG = "JsonUtil";

    private static JSONArray convertDestListToJson(List<String> list) {
        if (list == null) {
            return null;
        }
        JSONArray jSONArray = new JSONArray();
        for (String str : list) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("dest", str);
                jSONArray.put(jSONObject);
            } catch (JSONException e) {
                Log.d(TAG, "convertJsonNotificationContent Exception:" + Utils.printStackTrace(e));
            }
        }
        return jSONArray;
    }

    private static List<String> convertJsontoDestList(JSONArray jSONArray) {
        if (jSONArray == null) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < jSONArray.length(); i++) {
            JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i);
            String strOptString = jSONObjectOptJSONObject != null ? jSONObjectOptJSONObject.optString("dest") : null;
            if (strOptString != null) {
                arrayList.add(strOptString);
            }
        }
        return arrayList;
    }

    public static ProjectInfo convertProjectInfo(String str) {
        try {
            return convertProjectInfo(new JSONObject(Utils.removeUTFCharacters(str).toString()));
        } catch (Exception e) {
            Log.d(TAG, "convertProjectInfo.Exception:" + Utils.printStackTrace(e));
            return null;
        }
    }

    public static ProjectInfo convertProjectInfo(JSONObject jSONObject) {
        if (jSONObject == null) {
            return null;
        }
        return new ProjectInfo(jSONObject.optString("projectname").trim(), jSONObject.optString(ImagesContract.URL).trim(), jSONObject.optInt("timeout"), jSONObject.optInt("port"), jSONObject.optString("website").trim(), jSONObject.optString("type").trim(), jSONObject.optString("app_update").trim(), jSONObject.optString("app_pushmessage").trim(), jSONObject.optString("customer_service_url").trim(), jSONObject.optString("error_record").trim(), jSONObject.optString("appopenpage").trim(), jSONObject.optString("loading_url_sha1").trim(), jSONObject.optInt("ErrorCode"), jSONObject.optString("ErrorMessage").trim(), jSONObject.optString("adjust_token").trim(), jSONObject.optString("customizedapp_music").trim(), jSONObject.optString("appversion").trim(), jSONObject.optString("appupdate_url").trim(), jSONObject.optString("appupdate_message").trim(), jSONObject.optString("appdirection").trim(), jSONObject.optString("appbuild_date").trim());
    }
}
