package com.gpk17.gbrowser.interfaces;

import com.android.volley.VolleyError;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public interface OnApiResponseListener {
    void onErrorResponse(VolleyError volleyError);

    void onResponse(JSONObject jSONObject);
}
