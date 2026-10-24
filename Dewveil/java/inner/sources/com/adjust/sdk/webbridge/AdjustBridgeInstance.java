package com.adjust.sdk.webbridge;

import android.app.Activity;
import android.app.Application;
import android.net.Uri;
import android.os.Bundle;
import android.webkit.JavascriptInterface;
import android.webkit.WebView;
import com.adjust.sdk.Adjust;
import com.adjust.sdk.AdjustAttribution;
import com.adjust.sdk.AdjustConfig;
import com.adjust.sdk.AdjustEvent;
import com.adjust.sdk.AdjustEventFailure;
import com.adjust.sdk.AdjustEventSuccess;
import com.adjust.sdk.AdjustFactory;
import com.adjust.sdk.AdjustSessionFailure;
import com.adjust.sdk.AdjustSessionSuccess;
import com.adjust.sdk.AdjustThirdPartySharing;
import com.adjust.sdk.Constants;
import com.adjust.sdk.LogLevel;
import com.adjust.sdk.OnAttributionChangedListener;
import com.adjust.sdk.OnDeeplinkResponseListener;
import com.adjust.sdk.OnDeviceIdsRead;
import com.adjust.sdk.OnEventTrackingFailedListener;
import com.adjust.sdk.OnEventTrackingSucceededListener;
import com.adjust.sdk.OnSessionTrackingFailedListener;
import com.adjust.sdk.OnSessionTrackingSucceededListener;
import com.google.firebase.analytics.FirebaseAnalytics;
import java.io.UnsupportedEncodingException;
import java.net.URLDecoder;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class AdjustBridgeInstance {
    private static final String FB_JAVASCRIPT_INTERFACE_NAME_PREFIX = "fbmq_";
    private static final String JAVASCRIPT_INTERFACE_NAME = "AdjustBridge";
    private static final String LOG_LEVEL_ASSERT = "ASSERT";
    private static final String LOG_LEVEL_DEBUG = "DEBUG";
    private static final String LOG_LEVEL_ERROR = "ERROR";
    private static final String LOG_LEVEL_INFO = "INFO";
    private static final String LOG_LEVEL_SUPPRESS = "SUPPRESS";
    private static final String LOG_LEVEL_VERBOSE = "VERBOSE";
    private static final String LOG_LEVEL_WARN = "WARN";
    private Application application;
    private WebView webView;
    private boolean isInitialized = false;
    private boolean shouldDeferredDeeplinkBeLaunched = true;
    private FacebookSDKJSInterface facebookSDKJSInterface = null;

    AdjustBridgeInstance() {
    }

    AdjustBridgeInstance(Application application, WebView webView) {
        this.application = application;
        setWebView(webView);
    }

    private static final class AdjustLifecycleCallbacks implements Application.ActivityLifecycleCallbacks {
        @Override // android.app.Application.ActivityLifecycleCallbacks
        public void onActivityCreated(Activity activity, Bundle bundle) {
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public void onActivityDestroyed(Activity activity) {
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public void onActivityStarted(Activity activity) {
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public void onActivityStopped(Activity activity) {
        }

        private AdjustLifecycleCallbacks() {
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public void onActivityResumed(Activity activity) {
            Adjust.onResume();
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public void onActivityPaused(Activity activity) {
            Adjust.onPause();
        }
    }

    private boolean isInitialized() {
        if (this.webView == null) {
            AdjustBridgeUtil.getLogger().error("Webview missing. Call AdjustBridge.setWebView before", new Object[0]);
            return false;
        }
        if (this.application != null) {
            return true;
        }
        AdjustBridgeUtil.getLogger().error("Application context missing. Call AdjustBridge.setApplicationContext before", new Object[0]);
        return false;
    }

    public void registerFacebookSDKJSInterface() {
        String applicationId = FacebookSDKJSInterface.getApplicationId(this.application.getApplicationContext());
        AdjustFactory.getLogger().info("AdjustBridgeInstance fbApplicationId: %s", applicationId);
        if (applicationId == null) {
            return;
        }
        this.facebookSDKJSInterface = new FacebookSDKJSInterface();
        this.webView.addJavascriptInterface(this.facebookSDKJSInterface, FB_JAVASCRIPT_INTERFACE_NAME_PREFIX + applicationId);
    }

    @JavascriptInterface
    public void onCreate(String str) {
        AdjustConfig adjustConfig;
        FacebookSDKJSInterface facebookSDKJSInterface;
        if (this.isInitialized) {
            AdjustBridgeUtil.getLogger().warn("Adjust bridge is already initialized. Ignoring further attempts", new Object[0]);
            return;
        }
        if (isInitialized()) {
            try {
                AdjustBridgeUtil.getLogger().verbose("Web bridge onCreate adjustConfigString: " + str, new Object[0]);
                JSONObject jSONObject = new JSONObject(str);
                Object obj = jSONObject.get("appToken");
                Object obj2 = jSONObject.get("environment");
                Object obj3 = jSONObject.get("allowSuppressLogLevel");
                Object obj4 = jSONObject.get("eventBufferingEnabled");
                Object obj5 = jSONObject.get("sendInBackground");
                Object obj6 = jSONObject.get("logLevel");
                Object obj7 = jSONObject.get("sdkPrefix");
                Object obj8 = jSONObject.get("processName");
                Object obj9 = jSONObject.get("defaultTracker");
                Object obj10 = jSONObject.get("externalDeviceId");
                Object obj11 = jSONObject.get("attributionCallbackName");
                Object obj12 = jSONObject.get("deviceKnown");
                Object obj13 = jSONObject.get("needsCost");
                Object obj14 = jSONObject.get("eventSuccessCallbackName");
                Object obj15 = jSONObject.get("eventFailureCallbackName");
                Object obj16 = jSONObject.get("sessionSuccessCallbackName");
                Object obj17 = jSONObject.get("sessionFailureCallbackName");
                Object obj18 = jSONObject.get("openDeferredDeeplink");
                Object obj19 = jSONObject.get("deferredDeeplinkCallbackName");
                Object obj20 = jSONObject.get("delayStart");
                Object obj21 = jSONObject.get("userAgent");
                Object obj22 = jSONObject.get("secretId");
                Object obj23 = jSONObject.get("info1");
                Object obj24 = jSONObject.get("info2");
                Object obj25 = jSONObject.get("info3");
                Object obj26 = jSONObject.get("info4");
                Object obj27 = jSONObject.get("fbPixelDefaultEventToken");
                Object obj28 = jSONObject.get("fbPixelMapping");
                Object obj29 = jSONObject.get("urlStrategy");
                Object obj30 = jSONObject.get("preinstallTrackingEnabled");
                Object obj31 = jSONObject.get("preinstallFilePath");
                Object obj32 = jSONObject.get("playStoreKidsAppEnabled");
                Object obj33 = jSONObject.get("coppaCompliantEnabled");
                String strFieldToString = AdjustBridgeUtil.fieldToString(obj);
                String strFieldToString2 = AdjustBridgeUtil.fieldToString(obj2);
                Boolean boolFieldToBoolean = AdjustBridgeUtil.fieldToBoolean(obj3);
                if (boolFieldToBoolean == null) {
                    adjustConfig = new AdjustConfig(this.application.getApplicationContext(), strFieldToString, strFieldToString2);
                } else {
                    adjustConfig = new AdjustConfig(this.application.getApplicationContext(), strFieldToString, strFieldToString2, boolFieldToBoolean.booleanValue());
                }
                if (adjustConfig.isValid()) {
                    Boolean boolFieldToBoolean2 = AdjustBridgeUtil.fieldToBoolean(obj4);
                    if (boolFieldToBoolean2 != null) {
                        adjustConfig.setEventBufferingEnabled(boolFieldToBoolean2);
                    }
                    Boolean boolFieldToBoolean3 = AdjustBridgeUtil.fieldToBoolean(obj5);
                    if (boolFieldToBoolean3 != null) {
                        adjustConfig.setSendInBackground(boolFieldToBoolean3.booleanValue());
                    }
                    String strFieldToString3 = AdjustBridgeUtil.fieldToString(obj6);
                    if (strFieldToString3 != null) {
                        if (strFieldToString3.equalsIgnoreCase(LOG_LEVEL_VERBOSE)) {
                            adjustConfig.setLogLevel(LogLevel.VERBOSE);
                        } else if (strFieldToString3.equalsIgnoreCase(LOG_LEVEL_DEBUG)) {
                            adjustConfig.setLogLevel(LogLevel.DEBUG);
                        } else if (strFieldToString3.equalsIgnoreCase(LOG_LEVEL_INFO)) {
                            adjustConfig.setLogLevel(LogLevel.INFO);
                        } else if (strFieldToString3.equalsIgnoreCase(LOG_LEVEL_WARN)) {
                            adjustConfig.setLogLevel(LogLevel.WARN);
                        } else if (strFieldToString3.equalsIgnoreCase(LOG_LEVEL_ERROR)) {
                            adjustConfig.setLogLevel(LogLevel.ERROR);
                        } else if (strFieldToString3.equalsIgnoreCase(LOG_LEVEL_ASSERT)) {
                            adjustConfig.setLogLevel(LogLevel.ASSERT);
                        } else if (strFieldToString3.equalsIgnoreCase(LOG_LEVEL_SUPPRESS)) {
                            adjustConfig.setLogLevel(LogLevel.SUPRESS);
                        }
                    }
                    String strFieldToString4 = AdjustBridgeUtil.fieldToString(obj7);
                    if (strFieldToString4 != null) {
                        adjustConfig.setSdkPrefix(strFieldToString4);
                    }
                    String strFieldToString5 = AdjustBridgeUtil.fieldToString(obj8);
                    if (strFieldToString5 != null) {
                        adjustConfig.setProcessName(strFieldToString5);
                    }
                    String strFieldToString6 = AdjustBridgeUtil.fieldToString(obj9);
                    if (strFieldToString6 != null) {
                        adjustConfig.setDefaultTracker(strFieldToString6);
                    }
                    String strFieldToString7 = AdjustBridgeUtil.fieldToString(obj10);
                    if (strFieldToString7 != null) {
                        adjustConfig.setExternalDeviceId(strFieldToString7);
                    }
                    final String strFieldToString8 = AdjustBridgeUtil.fieldToString(obj11);
                    if (strFieldToString8 != null) {
                        adjustConfig.setOnAttributionChangedListener(new OnAttributionChangedListener() { // from class: com.adjust.sdk.webbridge.AdjustBridgeInstance.1
                            @Override // com.adjust.sdk.OnAttributionChangedListener
                            public void onAttributionChanged(AdjustAttribution adjustAttribution) {
                                AdjustBridgeUtil.execAttributionCallbackCommand(AdjustBridgeInstance.this.webView, strFieldToString8, adjustAttribution);
                            }
                        });
                    }
                    Boolean boolFieldToBoolean4 = AdjustBridgeUtil.fieldToBoolean(obj12);
                    if (boolFieldToBoolean4 != null) {
                        adjustConfig.setDeviceKnown(boolFieldToBoolean4.booleanValue());
                    }
                    Boolean boolFieldToBoolean5 = AdjustBridgeUtil.fieldToBoolean(obj13);
                    if (boolFieldToBoolean5 != null) {
                        adjustConfig.setNeedsCost(boolFieldToBoolean5.booleanValue());
                    }
                    final String strFieldToString9 = AdjustBridgeUtil.fieldToString(obj14);
                    if (strFieldToString9 != null) {
                        adjustConfig.setOnEventTrackingSucceededListener(new OnEventTrackingSucceededListener() { // from class: com.adjust.sdk.webbridge.AdjustBridgeInstance.2
                            @Override // com.adjust.sdk.OnEventTrackingSucceededListener
                            public void onFinishedEventTrackingSucceeded(AdjustEventSuccess adjustEventSuccess) {
                                AdjustBridgeUtil.execEventSuccessCallbackCommand(AdjustBridgeInstance.this.webView, strFieldToString9, adjustEventSuccess);
                            }
                        });
                    }
                    final String strFieldToString10 = AdjustBridgeUtil.fieldToString(obj15);
                    if (strFieldToString10 != null) {
                        adjustConfig.setOnEventTrackingFailedListener(new OnEventTrackingFailedListener() { // from class: com.adjust.sdk.webbridge.AdjustBridgeInstance.3
                            @Override // com.adjust.sdk.OnEventTrackingFailedListener
                            public void onFinishedEventTrackingFailed(AdjustEventFailure adjustEventFailure) {
                                AdjustBridgeUtil.execEventFailureCallbackCommand(AdjustBridgeInstance.this.webView, strFieldToString10, adjustEventFailure);
                            }
                        });
                    }
                    final String strFieldToString11 = AdjustBridgeUtil.fieldToString(obj16);
                    if (strFieldToString11 != null) {
                        adjustConfig.setOnSessionTrackingSucceededListener(new OnSessionTrackingSucceededListener() { // from class: com.adjust.sdk.webbridge.AdjustBridgeInstance.4
                            @Override // com.adjust.sdk.OnSessionTrackingSucceededListener
                            public void onFinishedSessionTrackingSucceeded(AdjustSessionSuccess adjustSessionSuccess) {
                                AdjustBridgeUtil.execSessionSuccessCallbackCommand(AdjustBridgeInstance.this.webView, strFieldToString11, adjustSessionSuccess);
                            }
                        });
                    }
                    final String strFieldToString12 = AdjustBridgeUtil.fieldToString(obj17);
                    if (strFieldToString12 != null) {
                        adjustConfig.setOnSessionTrackingFailedListener(new OnSessionTrackingFailedListener() { // from class: com.adjust.sdk.webbridge.AdjustBridgeInstance.5
                            @Override // com.adjust.sdk.OnSessionTrackingFailedListener
                            public void onFinishedSessionTrackingFailed(AdjustSessionFailure adjustSessionFailure) {
                                AdjustBridgeUtil.execSessionFailureCallbackCommand(AdjustBridgeInstance.this.webView, strFieldToString12, adjustSessionFailure);
                            }
                        });
                    }
                    Boolean boolFieldToBoolean6 = AdjustBridgeUtil.fieldToBoolean(obj18);
                    if (boolFieldToBoolean6 != null) {
                        this.shouldDeferredDeeplinkBeLaunched = boolFieldToBoolean6.booleanValue();
                    }
                    final String strFieldToString13 = AdjustBridgeUtil.fieldToString(obj19);
                    if (strFieldToString13 != null) {
                        adjustConfig.setOnDeeplinkResponseListener(new OnDeeplinkResponseListener() { // from class: com.adjust.sdk.webbridge.AdjustBridgeInstance.6
                            @Override // com.adjust.sdk.OnDeeplinkResponseListener
                            public boolean launchReceivedDeeplink(Uri uri) {
                                AdjustBridgeUtil.execSingleValueCallback(AdjustBridgeInstance.this.webView, strFieldToString13, uri.toString());
                                return AdjustBridgeInstance.this.shouldDeferredDeeplinkBeLaunched;
                            }
                        });
                    }
                    Double dFieldToDouble = AdjustBridgeUtil.fieldToDouble(obj20);
                    if (dFieldToDouble != null) {
                        adjustConfig.setDelayStart(dFieldToDouble.doubleValue());
                    }
                    String strFieldToString14 = AdjustBridgeUtil.fieldToString(obj21);
                    if (strFieldToString14 != null) {
                        adjustConfig.setUserAgent(strFieldToString14);
                    }
                    Long lFieldToLong = AdjustBridgeUtil.fieldToLong(obj22);
                    Long lFieldToLong2 = AdjustBridgeUtil.fieldToLong(obj23);
                    Long lFieldToLong3 = AdjustBridgeUtil.fieldToLong(obj24);
                    Long lFieldToLong4 = AdjustBridgeUtil.fieldToLong(obj25);
                    Long lFieldToLong5 = AdjustBridgeUtil.fieldToLong(obj26);
                    if (lFieldToLong != null && lFieldToLong2 != null && lFieldToLong3 != null && lFieldToLong4 != null && lFieldToLong5 != null) {
                        adjustConfig.setAppSecret(lFieldToLong.longValue(), lFieldToLong2.longValue(), lFieldToLong3.longValue(), lFieldToLong4.longValue(), lFieldToLong5.longValue());
                    }
                    String strFieldToString15 = AdjustBridgeUtil.fieldToString(obj27);
                    if (strFieldToString15 != null && (facebookSDKJSInterface = this.facebookSDKJSInterface) != null) {
                        facebookSDKJSInterface.setDefaultEventToken(strFieldToString15);
                    }
                    try {
                        String[] strArrJsonArrayToArray = AdjustBridgeUtil.jsonArrayToArray((JSONArray) obj28);
                        if (strArrJsonArrayToArray != null && this.facebookSDKJSInterface != null) {
                            for (int i = 0; i < strArrJsonArrayToArray.length; i += 2) {
                                this.facebookSDKJSInterface.addFbPixelEventTokenMapping(strArrJsonArrayToArray[i], strArrJsonArrayToArray[i + 1]);
                            }
                        }
                    } catch (Exception e) {
                        AdjustFactory.getLogger().error("AdjustBridgeInstance.configureFbPixel: %s", e.getMessage());
                    }
                    String strFieldToString16 = AdjustBridgeUtil.fieldToString(obj29);
                    if (strFieldToString16 != null) {
                        adjustConfig.setUrlStrategy(strFieldToString16);
                    }
                    Boolean boolFieldToBoolean7 = AdjustBridgeUtil.fieldToBoolean(obj30);
                    if (boolFieldToBoolean7 != null) {
                        adjustConfig.setPreinstallTrackingEnabled(boolFieldToBoolean7.booleanValue());
                    }
                    String strFieldToString17 = AdjustBridgeUtil.fieldToString(obj31);
                    if (strFieldToString17 != null) {
                        adjustConfig.setPreinstallFilePath(strFieldToString17);
                    }
                    Boolean boolFieldToBoolean8 = AdjustBridgeUtil.fieldToBoolean(obj32);
                    if (boolFieldToBoolean8 != null) {
                        adjustConfig.setPlayStoreKidsAppEnabled(boolFieldToBoolean8.booleanValue());
                    }
                    Boolean boolFieldToBoolean9 = AdjustBridgeUtil.fieldToBoolean(obj33);
                    if (boolFieldToBoolean9 != null) {
                        adjustConfig.setCoppaCompliantEnabled(boolFieldToBoolean9.booleanValue());
                    }
                    Adjust.onCreate(adjustConfig);
                    Adjust.onResume();
                    this.isInitialized = true;
                    this.application.registerActivityLifecycleCallbacks(new AdjustLifecycleCallbacks());
                }
            } catch (Exception e2) {
                AdjustFactory.getLogger().error("AdjustBridgeInstance onCreate: %s", e2.getMessage());
            }
        }
    }

    @JavascriptInterface
    public void trackEvent(String str) {
        if (isInitialized()) {
            try {
                JSONObject jSONObject = new JSONObject(str);
                Object obj = jSONObject.get("eventToken");
                Object obj2 = jSONObject.get("revenue");
                Object obj3 = jSONObject.get(FirebaseAnalytics.Param.CURRENCY);
                Object obj4 = jSONObject.get("callbackParameters");
                Object obj5 = jSONObject.get("partnerParameters");
                Object obj6 = jSONObject.get("orderId");
                Object obj7 = jSONObject.get("callbackId");
                AdjustEvent adjustEvent = new AdjustEvent(AdjustBridgeUtil.fieldToString(obj));
                if (adjustEvent.isValid()) {
                    Double dFieldToDouble = AdjustBridgeUtil.fieldToDouble(obj2);
                    String strFieldToString = AdjustBridgeUtil.fieldToString(obj3);
                    if (dFieldToDouble != null && strFieldToString != null) {
                        adjustEvent.setRevenue(dFieldToDouble.doubleValue(), strFieldToString);
                    }
                    String[] strArrJsonArrayToArray = AdjustBridgeUtil.jsonArrayToArray((JSONArray) obj4);
                    if (strArrJsonArrayToArray != null) {
                        for (int i = 0; i < strArrJsonArrayToArray.length; i += 2) {
                            adjustEvent.addCallbackParameter(strArrJsonArrayToArray[i], strArrJsonArrayToArray[i + 1]);
                        }
                    }
                    String[] strArrJsonArrayToArray2 = AdjustBridgeUtil.jsonArrayToArray((JSONArray) obj5);
                    if (strArrJsonArrayToArray2 != null) {
                        for (int i2 = 0; i2 < strArrJsonArrayToArray2.length; i2 += 2) {
                            adjustEvent.addPartnerParameter(strArrJsonArrayToArray2[i2], strArrJsonArrayToArray2[i2 + 1]);
                        }
                    }
                    String strFieldToString2 = AdjustBridgeUtil.fieldToString(obj6);
                    if (strFieldToString2 != null) {
                        adjustEvent.setOrderId(strFieldToString2);
                    }
                    String strFieldToString3 = AdjustBridgeUtil.fieldToString(obj7);
                    if (strFieldToString3 != null) {
                        adjustEvent.setCallbackId(strFieldToString3);
                    }
                    Adjust.trackEvent(adjustEvent);
                }
            } catch (Exception e) {
                AdjustFactory.getLogger().error("AdjustBridgeInstance trackEvent: %s", e.getMessage());
            }
        }
    }

    @JavascriptInterface
    public void trackAdRevenue(String str, String str2) {
        try {
            Adjust.trackAdRevenue(str, new JSONObject(URLDecoder.decode(str2, Constants.ENCODING)));
        } catch (UnsupportedEncodingException unused) {
            AdjustFactory.getLogger().debug("Unable to URL decode given JSON string", new Object[0]);
        } catch (JSONException unused2) {
            AdjustFactory.getLogger().debug("Ad revenue payload does not seem to be a valid JSON string", new Object[0]);
        }
    }

    @JavascriptInterface
    public void onResume() {
        if (isInitialized()) {
            Adjust.onResume();
        }
    }

    @JavascriptInterface
    public void onPause() {
        if (isInitialized()) {
            Adjust.onPause();
        }
    }

    @JavascriptInterface
    public void setEnabled(String str) {
        Boolean boolFieldToBoolean;
        if (isInitialized() && (boolFieldToBoolean = AdjustBridgeUtil.fieldToBoolean(str)) != null) {
            Adjust.setEnabled(boolFieldToBoolean.booleanValue());
        }
    }

    @JavascriptInterface
    public void isEnabled(String str) {
        if (isInitialized()) {
            AdjustBridgeUtil.execSingleValueCallback(this.webView, str, String.valueOf(Adjust.isEnabled()));
        }
    }

    @JavascriptInterface
    public boolean isEnabled() {
        if (isInitialized()) {
            return Adjust.isEnabled();
        }
        return false;
    }

    @JavascriptInterface
    public void appWillOpenUrl(String str) {
        if (isInitialized()) {
            Adjust.appWillOpenUrl(str != null ? Uri.parse(str) : null, this.application.getApplicationContext());
        }
    }

    @JavascriptInterface
    public void setReferrer(String str) {
        if (isInitialized()) {
            Adjust.setReferrer(str, this.application.getApplicationContext());
        }
    }

    @JavascriptInterface
    public void setOfflineMode(String str) {
        Boolean boolFieldToBoolean;
        if (isInitialized() && (boolFieldToBoolean = AdjustBridgeUtil.fieldToBoolean(str)) != null) {
            Adjust.setOfflineMode(boolFieldToBoolean.booleanValue());
        }
    }

    @JavascriptInterface
    public void sendFirstPackages() {
        if (isInitialized()) {
            Adjust.sendFirstPackages();
        }
    }

    @JavascriptInterface
    public void addSessionCallbackParameter(String str, String str2) {
        if (isInitialized()) {
            Adjust.addSessionCallbackParameter(str, str2);
        }
    }

    @JavascriptInterface
    public void addSessionPartnerParameter(String str, String str2) {
        if (isInitialized()) {
            Adjust.addSessionPartnerParameter(str, str2);
        }
    }

    @JavascriptInterface
    public void removeSessionCallbackParameter(String str) {
        if (isInitialized()) {
            Adjust.removeSessionCallbackParameter(str);
        }
    }

    @JavascriptInterface
    public void removeSessionPartnerParameter(String str) {
        if (isInitialized()) {
            Adjust.removeSessionPartnerParameter(str);
        }
    }

    @JavascriptInterface
    public void resetSessionCallbackParameters() {
        if (isInitialized()) {
            Adjust.resetSessionCallbackParameters();
        }
    }

    @JavascriptInterface
    public void resetSessionPartnerParameters() {
        if (isInitialized()) {
            Adjust.resetSessionPartnerParameters();
        }
    }

    @JavascriptInterface
    public void setPushToken(String str) {
        if (isInitialized()) {
            Adjust.setPushToken(str, this.application.getApplicationContext());
        }
    }

    @JavascriptInterface
    public void gdprForgetMe() {
        if (isInitialized()) {
            Adjust.gdprForgetMe(this.application.getApplicationContext());
        }
    }

    @JavascriptInterface
    public void disableThirdPartySharing() {
        if (isInitialized()) {
            Adjust.disableThirdPartySharing(this.application.getApplicationContext());
        }
    }

    @JavascriptInterface
    public void trackThirdPartySharing(String str) {
        if (isInitialized()) {
            try {
                JSONObject jSONObject = new JSONObject(str);
                Object obj = jSONObject.get("isEnabled");
                Object obj2 = jSONObject.get("granularOptions");
                Object obj3 = jSONObject.get("partnerSharingSettings");
                AdjustThirdPartySharing adjustThirdPartySharing = new AdjustThirdPartySharing(AdjustBridgeUtil.fieldToBoolean(obj));
                String[] strArrJsonArrayToArray = AdjustBridgeUtil.jsonArrayToArray((JSONArray) obj2);
                if (strArrJsonArrayToArray != null) {
                    for (int i = 0; i < strArrJsonArrayToArray.length; i += 3) {
                        adjustThirdPartySharing.addGranularOption(strArrJsonArrayToArray[i], strArrJsonArrayToArray[i + 1], strArrJsonArrayToArray[i + 2]);
                    }
                }
                String[] strArrJsonArrayToArray2 = AdjustBridgeUtil.jsonArrayToArray((JSONArray) obj3);
                if (strArrJsonArrayToArray2 != null) {
                    for (int i2 = 0; i2 < strArrJsonArrayToArray2.length; i2 += 3) {
                        String str2 = strArrJsonArrayToArray2[i2];
                        String str3 = strArrJsonArrayToArray2[i2 + 1];
                        Boolean boolFieldToBoolean = AdjustBridgeUtil.fieldToBoolean(strArrJsonArrayToArray2[i2 + 2]);
                        if (boolFieldToBoolean != null) {
                            adjustThirdPartySharing.addPartnerSharingSetting(str2, str3, boolFieldToBoolean.booleanValue());
                        } else {
                            AdjustFactory.getLogger().error("Cannot add partner sharing setting with non boolean value", new Object[0]);
                        }
                    }
                }
                Adjust.trackThirdPartySharing(adjustThirdPartySharing);
            } catch (Exception e) {
                AdjustFactory.getLogger().error("AdjustBridgeInstance trackThirdPartySharing: %s", e.getMessage());
            }
        }
    }

    @JavascriptInterface
    public void trackMeasurementConsent(String str) {
        Boolean boolFieldToBoolean;
        if (isInitialized() && (boolFieldToBoolean = AdjustBridgeUtil.fieldToBoolean(str)) != null) {
            Adjust.trackMeasurementConsent(boolFieldToBoolean.booleanValue());
        }
    }

    @JavascriptInterface
    public void getGoogleAdId(final String str) {
        if (isInitialized()) {
            Adjust.getGoogleAdId(this.application.getApplicationContext(), new OnDeviceIdsRead() { // from class: com.adjust.sdk.webbridge.AdjustBridgeInstance.7
                @Override // com.adjust.sdk.OnDeviceIdsRead
                public void onGoogleAdIdRead(String str2) {
                    AdjustBridgeUtil.execSingleValueCallback(AdjustBridgeInstance.this.webView, str, str2);
                }
            });
        }
    }

    @JavascriptInterface
    public String getAmazonAdId() {
        if (isInitialized()) {
            return Adjust.getAmazonAdId(this.application.getApplicationContext());
        }
        return null;
    }

    @JavascriptInterface
    public String getAdid() {
        if (isInitialized()) {
            return Adjust.getAdid();
        }
        return null;
    }

    @JavascriptInterface
    public void getAttribution(String str) {
        if (isInitialized()) {
            AdjustBridgeUtil.execAttributionCallbackCommand(this.webView, str, Adjust.getAttribution());
        }
    }

    @JavascriptInterface
    public String getSdkVersion() {
        return Adjust.getSdkVersion();
    }

    @JavascriptInterface
    public void fbPixelEvent(String str, String str2, String str3) {
        this.facebookSDKJSInterface.sendEvent(str, str2, str3);
    }

    @JavascriptInterface
    public void teardown() {
        this.isInitialized = false;
        this.shouldDeferredDeeplinkBeLaunched = true;
    }

    public void setWebView(WebView webView) {
        this.webView = webView;
        webView.addJavascriptInterface(this, JAVASCRIPT_INTERFACE_NAME);
    }

    public void setApplicationContext(Application application) {
        this.application = application;
    }

    public void unregister() {
        if (isInitialized()) {
            this.webView.removeJavascriptInterface(JAVASCRIPT_INTERFACE_NAME);
            unregisterFacebookSDKJSInterface();
            this.application = null;
            this.webView = null;
            this.isInitialized = false;
        }
    }

    public void unregisterFacebookSDKJSInterface() {
        String applicationId;
        if (!isInitialized() || this.facebookSDKJSInterface == null || (applicationId = FacebookSDKJSInterface.getApplicationId(this.application.getApplicationContext())) == null) {
            return;
        }
        this.webView.removeJavascriptInterface(FB_JAVASCRIPT_INTERFACE_NAME_PREFIX + applicationId);
        this.facebookSDKJSInterface = null;
    }
}
