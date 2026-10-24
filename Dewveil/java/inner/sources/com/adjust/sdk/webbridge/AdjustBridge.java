package com.adjust.sdk.webbridge;

import android.app.Application;
import android.webkit.WebView;

/* JADX INFO: loaded from: classes.dex */
public class AdjustBridge {
    private static AdjustBridgeInstance defaultInstance;

    public static synchronized AdjustBridgeInstance registerAndGetInstance(Application application, WebView webView) {
        if (defaultInstance == null) {
            defaultInstance = new AdjustBridgeInstance(application, webView);
        }
        return defaultInstance;
    }

    public static synchronized AdjustBridgeInstance getDefaultInstance() {
        if (defaultInstance == null) {
            defaultInstance = new AdjustBridgeInstance();
        }
        return defaultInstance;
    }

    public static void setWebView(WebView webView) {
        getDefaultInstance().setWebView(webView);
    }

    public static void setApplicationContext(Application application) {
        getDefaultInstance().setApplicationContext(application);
    }

    public static synchronized void unregister() {
        AdjustBridgeInstance adjustBridgeInstance = defaultInstance;
        if (adjustBridgeInstance != null) {
            adjustBridgeInstance.unregister();
        }
        defaultInstance = null;
    }
}
