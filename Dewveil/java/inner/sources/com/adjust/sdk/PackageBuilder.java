package com.adjust.sdk;

import android.text.TextUtils;
import com.google.firebase.analytics.FirebaseAnalytics;
import java.util.Date;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class PackageBuilder {
    private static ILogger logger = AdjustFactory.getLogger();
    private a activityStateCopy;
    private AdjustConfig adjustConfig;
    public AdjustAttribution attribution;
    private long createdAt;
    public String deeplink;
    private com.adjust.sdk.a deviceInfo;
    public Map<String, String> extraParameters;
    public Boolean googlePlayInstant;
    public String installVersion;
    public String preinstallLocation;
    public String preinstallPayload;
    public String rawReferrer;
    public String referrer;
    public String referrerApi;
    public String reftag;
    private SessionParameters sessionParameters;
    public long clickTimeInSeconds = -1;
    public long clickTimeInMilliseconds = -1;
    public long installBeginTimeInSeconds = -1;
    public long clickTimeServerInSeconds = -1;
    public long installBeginTimeServerInSeconds = -1;

    public class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public int f68a;
        public int b;
        public int c;
        public long d;
        public long e;
        public long f;
        public String g;
        public String h;

        public a(ActivityState activityState) {
            this.f68a = -1;
            this.b = -1;
            this.c = -1;
            this.d = -1L;
            this.e = -1L;
            this.f = -1L;
            this.g = null;
            this.h = null;
            if (activityState == null) {
                return;
            }
            this.f68a = activityState.eventCount;
            this.b = activityState.sessionCount;
            this.c = activityState.subsessionCount;
            this.d = activityState.timeSpent;
            this.e = activityState.lastInterval;
            this.f = activityState.sessionLength;
            this.g = activityState.uuid;
            this.h = activityState.pushToken;
        }
    }

    public PackageBuilder(AdjustConfig adjustConfig, com.adjust.sdk.a aVar, ActivityState activityState, SessionParameters sessionParameters, long j) {
        this.createdAt = j;
        this.deviceInfo = aVar;
        this.adjustConfig = adjustConfig;
        this.activityStateCopy = new a(activityState);
        this.sessionParameters = sessionParameters;
    }

    public static void addBoolean(Map<String, String> map, String str, Boolean bool) {
        if (bool == null) {
            return;
        }
        addLong(map, str, bool.booleanValue() ? 1L : 0L);
    }

    private static void addDate(Map<String, String> map, String str, Date date) {
        if (date == null) {
            return;
        }
        addString(map, str, Util.dateFormatter.format(date));
    }

    private static void addDateInMilliseconds(Map<String, String> map, String str, long j) {
        if (j <= 0) {
            return;
        }
        addDate(map, str, new Date(j));
    }

    private static void addDateInSeconds(Map<String, String> map, String str, long j) {
        if (j <= 0) {
            return;
        }
        addDate(map, str, new Date(j * 1000));
    }

    private static void addDouble(Map<String, String> map, String str, Double d) {
        if (d == null) {
            return;
        }
        addString(map, str, Util.formatString("%.5f", d));
    }

    private static void addDoubleWithoutRounding(Map<String, String> map, String str, Double d) {
        if (d == null) {
            return;
        }
        addString(map, str, Double.toString(d.doubleValue()));
    }

    private static void addDuration(Map<String, String> map, String str, long j) {
        if (j < 0) {
            return;
        }
        addLong(map, str, (j + 500) / 1000);
    }

    private static void addInteger(Map<String, String> map, String str, Integer num) {
        if (num == null) {
            return;
        }
        addString(map, str, Integer.toString(num.intValue()));
    }

    public static void addJsonObject(Map<String, String> map, String str, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        addString(map, str, jSONObject.toString());
    }

    public static void addLong(Map<String, String> map, String str, long j) {
        if (j < 0) {
            return;
        }
        addString(map, str, Long.toString(j));
    }

    public static void addMapJson(Map<String, String> map, String str, Map map2) {
        if (map2 == null || map2.size() == 0) {
            return;
        }
        addString(map, str, new JSONObject(map2).toString());
    }

    public static void addString(Map<String, String> map, String str, String str2) {
        if (TextUtils.isEmpty(str2)) {
            return;
        }
        map.put(str, str2);
    }

    private void checkDeviceIds(Map<String, String> map) {
        if (map == null || map.containsKey("android_id") || map.containsKey("gps_adid") || map.containsKey("fire_adid") || map.containsKey("oaid") || map.containsKey("imei") || map.containsKey("meid") || map.containsKey("device_id") || map.containsKey("imeis") || map.containsKey("meids") || map.containsKey("device_ids")) {
            return;
        }
        if (this.adjustConfig.coppaCompliantEnabled) {
            logger.info("Missing Device IDs. COPPA enabled.", new Object[0]);
        } else {
            logger.error("Missing Device IDs. Please check if Proguard is correctly set with Adjust SDK", new Object[0]);
        }
    }

    private boolean containsFireIds(Map<String, String> map) {
        if (map == null) {
            return false;
        }
        return map.containsKey("fire_adid");
    }

    private boolean containsPlayIds(Map<String, String> map) {
        if (map == null) {
            return false;
        }
        return map.containsKey("gps_adid");
    }

    private Map<String, String> getAdRevenueParameters(AdjustAdRevenue adjustAdRevenue, boolean z) {
        HashMap map = new HashMap();
        Map<String, String> imeiParameters = Util.getImeiParameters(this.adjustConfig, logger);
        if (imeiParameters != null) {
            map.putAll(imeiParameters);
        }
        Map<String, String> oaidParameters = Util.getOaidParameters(this.adjustConfig, logger);
        if (oaidParameters != null) {
            map.putAll(oaidParameters);
        }
        if (!z) {
            addMapJson(map, Constants.CALLBACK_PARAMETERS, Util.mergeParameters(this.sessionParameters.callbackParameters, adjustAdRevenue.callbackParameters, "Callback"));
            addMapJson(map, Constants.PARTNER_PARAMETERS, Util.mergeParameters(this.sessionParameters.partnerParameters, adjustAdRevenue.partnerParameters, "Partner"));
        }
        this.deviceInfo.b(this.adjustConfig);
        addString(map, "android_uuid", this.activityStateCopy.g);
        addString(map, "gps_adid", this.deviceInfo.f86a);
        addLong(map, "gps_adid_attempt", this.deviceInfo.c);
        addString(map, "gps_adid_src", this.deviceInfo.b);
        addBoolean(map, "tracking_enabled", this.deviceInfo.d);
        addString(map, "fire_adid", Util.getFireAdvertisingId(this.adjustConfig));
        addBoolean(map, "fire_tracking_enabled", Util.getFireTrackingEnabled(this.adjustConfig));
        if (!containsPlayIds(map) && !containsFireIds(map)) {
            logger.warn("Google Advertising ID or Fire Advertising ID not detected, fallback to non Google Play and Fire identifiers will take place", new Object[0]);
            this.deviceInfo.a(this.adjustConfig);
            addString(map, "android_id", this.deviceInfo.f);
        }
        addString(map, "api_level", this.deviceInfo.p);
        addString(map, "app_secret", this.adjustConfig.appSecret);
        addString(map, "app_token", this.adjustConfig.appToken);
        addString(map, "app_version", this.deviceInfo.j);
        Boolean bool = Boolean.TRUE;
        addBoolean(map, "attribution_deeplink", bool);
        addLong(map, "connectivity_type", Util.getConnectivityType(this.adjustConfig.context));
        addString(map, "country", this.deviceInfo.r);
        addString(map, "cpu_type", this.deviceInfo.y);
        addDateInMilliseconds(map, "created_at", this.createdAt);
        addString(map, "default_tracker", this.adjustConfig.defaultTracker);
        addBoolean(map, "device_known", this.adjustConfig.deviceKnown);
        addBoolean(map, "needs_cost", this.adjustConfig.needsCost);
        addString(map, "device_manufacturer", this.deviceInfo.m);
        addString(map, "device_name", this.deviceInfo.l);
        addString(map, "device_type", this.deviceInfo.k);
        addLong(map, "ui_mode", this.deviceInfo.C);
        addString(map, "display_height", this.deviceInfo.w);
        addString(map, "display_width", this.deviceInfo.v);
        addString(map, "environment", this.adjustConfig.environment);
        addBoolean(map, "event_buffering_enabled", Boolean.valueOf(this.adjustConfig.eventBufferingEnabled));
        addString(map, "external_device_id", this.adjustConfig.externalDeviceId);
        addString(map, "fb_id", this.deviceInfo.g);
        addString(map, "hardware_name", this.deviceInfo.x);
        addString(map, "installed_at", this.deviceInfo.A);
        addString(map, "language", this.deviceInfo.q);
        addDuration(map, "last_interval", this.activityStateCopy.e);
        addString(map, "mcc", Util.getMcc(this.adjustConfig.context));
        addString(map, "mnc", Util.getMnc(this.adjustConfig.context));
        addBoolean(map, "needs_response_details", bool);
        addString(map, "os_build", this.deviceInfo.z);
        addString(map, "os_name", this.deviceInfo.n);
        addString(map, "os_version", this.deviceInfo.o);
        addString(map, "package_name", this.deviceInfo.i);
        addString(map, "push_token", this.activityStateCopy.h);
        addString(map, "screen_density", this.deviceInfo.u);
        addString(map, "screen_format", this.deviceInfo.t);
        addString(map, "screen_size", this.deviceInfo.s);
        addString(map, "secret_id", this.adjustConfig.secretId);
        addString(map, "source", adjustAdRevenue.source);
        addDoubleWithoutRounding(map, "revenue", adjustAdRevenue.revenue);
        addString(map, FirebaseAnalytics.Param.CURRENCY, adjustAdRevenue.currency);
        addInteger(map, "ad_impressions_count", adjustAdRevenue.adImpressionsCount);
        addString(map, "ad_revenue_network", adjustAdRevenue.adRevenueNetwork);
        addString(map, "ad_revenue_unit", adjustAdRevenue.adRevenueUnit);
        addString(map, "ad_revenue_placement", adjustAdRevenue.adRevenuePlacement);
        addLong(map, "session_count", this.activityStateCopy.b);
        addDuration(map, "session_length", this.activityStateCopy.f);
        addLong(map, "subsession_count", this.activityStateCopy.c);
        addDuration(map, "time_spent", this.activityStateCopy.d);
        addString(map, "updated_at", this.deviceInfo.B);
        injectFeatureFlagsWithParameters(map);
        checkDeviceIds(map);
        return map;
    }

    private Map<String, String> getAdRevenueParameters(String str, JSONObject jSONObject) {
        HashMap map = new HashMap();
        Map<String, String> imeiParameters = Util.getImeiParameters(this.adjustConfig, logger);
        if (imeiParameters != null) {
            map.putAll(imeiParameters);
        }
        Map<String, String> oaidParameters = Util.getOaidParameters(this.adjustConfig, logger);
        if (oaidParameters != null) {
            map.putAll(oaidParameters);
        }
        this.deviceInfo.b(this.adjustConfig);
        addString(map, "android_uuid", this.activityStateCopy.g);
        addString(map, "gps_adid", this.deviceInfo.f86a);
        addLong(map, "gps_adid_attempt", this.deviceInfo.c);
        addString(map, "gps_adid_src", this.deviceInfo.b);
        addBoolean(map, "tracking_enabled", this.deviceInfo.d);
        addString(map, "fire_adid", Util.getFireAdvertisingId(this.adjustConfig));
        addBoolean(map, "fire_tracking_enabled", Util.getFireTrackingEnabled(this.adjustConfig));
        if (!containsPlayIds(map) && !containsFireIds(map)) {
            logger.warn("Google Advertising ID or Fire Advertising ID not detected, fallback to non Google Play and Fire identifiers will take place", new Object[0]);
            this.deviceInfo.a(this.adjustConfig);
            addString(map, "android_id", this.deviceInfo.f);
        }
        addString(map, "api_level", this.deviceInfo.p);
        addString(map, "app_secret", this.adjustConfig.appSecret);
        addString(map, "app_token", this.adjustConfig.appToken);
        addString(map, "app_version", this.deviceInfo.j);
        Boolean bool = Boolean.TRUE;
        addBoolean(map, "attribution_deeplink", bool);
        addLong(map, "connectivity_type", Util.getConnectivityType(this.adjustConfig.context));
        addString(map, "country", this.deviceInfo.r);
        addString(map, "cpu_type", this.deviceInfo.y);
        addDateInMilliseconds(map, "created_at", this.createdAt);
        addString(map, "default_tracker", this.adjustConfig.defaultTracker);
        addBoolean(map, "device_known", this.adjustConfig.deviceKnown);
        addBoolean(map, "needs_cost", this.adjustConfig.needsCost);
        addString(map, "device_manufacturer", this.deviceInfo.m);
        addString(map, "device_name", this.deviceInfo.l);
        addString(map, "device_type", this.deviceInfo.k);
        addLong(map, "ui_mode", this.deviceInfo.C);
        addString(map, "display_height", this.deviceInfo.w);
        addString(map, "display_width", this.deviceInfo.v);
        addString(map, "environment", this.adjustConfig.environment);
        addBoolean(map, "event_buffering_enabled", Boolean.valueOf(this.adjustConfig.eventBufferingEnabled));
        addString(map, "external_device_id", this.adjustConfig.externalDeviceId);
        addString(map, "fb_id", this.deviceInfo.g);
        addString(map, "hardware_name", this.deviceInfo.x);
        addString(map, "installed_at", this.deviceInfo.A);
        addString(map, "language", this.deviceInfo.q);
        addDuration(map, "last_interval", this.activityStateCopy.e);
        addString(map, "mcc", Util.getMcc(this.adjustConfig.context));
        addString(map, "mnc", Util.getMnc(this.adjustConfig.context));
        addBoolean(map, "needs_response_details", bool);
        addString(map, "os_build", this.deviceInfo.z);
        addString(map, "os_name", this.deviceInfo.n);
        addString(map, "os_version", this.deviceInfo.o);
        addString(map, "package_name", this.deviceInfo.i);
        addString(map, "push_token", this.activityStateCopy.h);
        addString(map, "screen_density", this.deviceInfo.u);
        addString(map, "screen_format", this.deviceInfo.t);
        addString(map, "screen_size", this.deviceInfo.s);
        addString(map, "secret_id", this.adjustConfig.secretId);
        addString(map, "source", str);
        addJsonObject(map, "payload", jSONObject);
        addLong(map, "session_count", this.activityStateCopy.b);
        addDuration(map, "session_length", this.activityStateCopy.f);
        addLong(map, "subsession_count", this.activityStateCopy.c);
        addDuration(map, "time_spent", this.activityStateCopy.d);
        addString(map, "updated_at", this.deviceInfo.B);
        injectFeatureFlagsWithParameters(map);
        checkDeviceIds(map);
        return map;
    }

    private Map<String, String> getAttributionParameters(String str) {
        HashMap map = new HashMap();
        Map<String, String> imeiParameters = Util.getImeiParameters(this.adjustConfig, logger);
        if (imeiParameters != null) {
            map.putAll(imeiParameters);
        }
        Map<String, String> oaidParameters = Util.getOaidParameters(this.adjustConfig, logger);
        if (oaidParameters != null) {
            map.putAll(oaidParameters);
        }
        this.deviceInfo.b(this.adjustConfig);
        addString(map, "android_uuid", this.activityStateCopy.g);
        addString(map, "gps_adid", this.deviceInfo.f86a);
        addLong(map, "gps_adid_attempt", this.deviceInfo.c);
        addString(map, "gps_adid_src", this.deviceInfo.b);
        addBoolean(map, "tracking_enabled", this.deviceInfo.d);
        addString(map, "fire_adid", Util.getFireAdvertisingId(this.adjustConfig));
        addBoolean(map, "fire_tracking_enabled", Util.getFireTrackingEnabled(this.adjustConfig));
        if (!containsPlayIds(map) && !containsFireIds(map)) {
            logger.warn("Google Advertising ID or Fire Advertising ID not detected, fallback to non Google Play and Fire identifiers will take place", new Object[0]);
            this.deviceInfo.a(this.adjustConfig);
            addString(map, "android_id", this.deviceInfo.f);
        }
        addString(map, "api_level", this.deviceInfo.p);
        addString(map, "app_secret", this.adjustConfig.appSecret);
        addString(map, "app_token", this.adjustConfig.appToken);
        addString(map, "app_version", this.deviceInfo.j);
        Boolean bool = Boolean.TRUE;
        addBoolean(map, "attribution_deeplink", bool);
        addDateInMilliseconds(map, "created_at", this.createdAt);
        addBoolean(map, "device_known", this.adjustConfig.deviceKnown);
        addBoolean(map, "needs_cost", this.adjustConfig.needsCost);
        addString(map, "device_name", this.deviceInfo.l);
        addString(map, "device_type", this.deviceInfo.k);
        addLong(map, "ui_mode", this.deviceInfo.C);
        addString(map, "environment", this.adjustConfig.environment);
        addBoolean(map, "event_buffering_enabled", Boolean.valueOf(this.adjustConfig.eventBufferingEnabled));
        addString(map, "external_device_id", this.adjustConfig.externalDeviceId);
        addString(map, "initiated_by", str);
        addBoolean(map, "needs_response_details", bool);
        addString(map, "os_name", this.deviceInfo.n);
        addString(map, "os_version", this.deviceInfo.o);
        addString(map, "package_name", this.deviceInfo.i);
        addString(map, "push_token", this.activityStateCopy.h);
        addString(map, "secret_id", this.adjustConfig.secretId);
        injectFeatureFlagsWithParameters(map);
        checkDeviceIds(map);
        return map;
    }

    private Map<String, String> getClickParameters(String str) {
        HashMap map = new HashMap();
        Map<String, String> imeiParameters = Util.getImeiParameters(this.adjustConfig, logger);
        if (imeiParameters != null) {
            map.putAll(imeiParameters);
        }
        Map<String, String> oaidParameters = Util.getOaidParameters(this.adjustConfig, logger);
        if (oaidParameters != null) {
            map.putAll(oaidParameters);
        }
        this.deviceInfo.b(this.adjustConfig);
        addString(map, "android_uuid", this.activityStateCopy.g);
        addString(map, "gps_adid", this.deviceInfo.f86a);
        addLong(map, "gps_adid_attempt", this.deviceInfo.c);
        addString(map, "gps_adid_src", this.deviceInfo.b);
        addBoolean(map, "tracking_enabled", this.deviceInfo.d);
        addString(map, "fire_adid", Util.getFireAdvertisingId(this.adjustConfig));
        addBoolean(map, "fire_tracking_enabled", Util.getFireTrackingEnabled(this.adjustConfig));
        if (!containsPlayIds(map) && !containsFireIds(map)) {
            logger.warn("Google Advertising ID or Fire Advertising ID not detected, fallback to non Google Play and Fire identifiers will take place", new Object[0]);
            this.deviceInfo.a(this.adjustConfig);
            addString(map, "android_id", this.deviceInfo.f);
        }
        AdjustAttribution adjustAttribution = this.attribution;
        if (adjustAttribution != null) {
            addString(map, "tracker", adjustAttribution.trackerName);
            addString(map, "campaign", this.attribution.campaign);
            addString(map, "adgroup", this.attribution.adgroup);
            addString(map, "creative", this.attribution.creative);
        }
        addString(map, "api_level", this.deviceInfo.p);
        addString(map, "app_secret", this.adjustConfig.appSecret);
        addString(map, "app_token", this.adjustConfig.appToken);
        addString(map, "app_version", this.deviceInfo.j);
        Boolean bool = Boolean.TRUE;
        addBoolean(map, "attribution_deeplink", bool);
        addMapJson(map, Constants.CALLBACK_PARAMETERS, this.sessionParameters.callbackParameters);
        addDateInMilliseconds(map, "click_time", this.clickTimeInMilliseconds);
        addDateInSeconds(map, "click_time", this.clickTimeInSeconds);
        addDateInSeconds(map, "click_time_server", this.clickTimeServerInSeconds);
        addLong(map, "connectivity_type", Util.getConnectivityType(this.adjustConfig.context));
        addString(map, "country", this.deviceInfo.r);
        addString(map, "cpu_type", this.deviceInfo.y);
        addDateInMilliseconds(map, "created_at", this.createdAt);
        addString(map, Constants.DEEPLINK, this.deeplink);
        addBoolean(map, "device_known", this.adjustConfig.deviceKnown);
        addBoolean(map, "needs_cost", this.adjustConfig.needsCost);
        addString(map, "device_manufacturer", this.deviceInfo.m);
        addString(map, "device_name", this.deviceInfo.l);
        addString(map, "device_type", this.deviceInfo.k);
        addLong(map, "ui_mode", this.deviceInfo.C);
        addString(map, "display_height", this.deviceInfo.w);
        addString(map, "display_width", this.deviceInfo.v);
        addString(map, "environment", this.adjustConfig.environment);
        addBoolean(map, "event_buffering_enabled", Boolean.valueOf(this.adjustConfig.eventBufferingEnabled));
        addString(map, "external_device_id", this.adjustConfig.externalDeviceId);
        addString(map, "fb_id", this.deviceInfo.g);
        addBoolean(map, "google_play_instant", this.googlePlayInstant);
        addString(map, "hardware_name", this.deviceInfo.x);
        addDateInSeconds(map, "install_begin_time", this.installBeginTimeInSeconds);
        addDateInSeconds(map, "install_begin_time_server", this.installBeginTimeServerInSeconds);
        addString(map, "install_version", this.installVersion);
        addString(map, "installed_at", this.deviceInfo.A);
        addString(map, "language", this.deviceInfo.q);
        addDuration(map, "last_interval", this.activityStateCopy.e);
        addString(map, "mcc", Util.getMcc(this.adjustConfig.context));
        addString(map, "mnc", Util.getMnc(this.adjustConfig.context));
        addBoolean(map, "needs_response_details", bool);
        addString(map, "os_build", this.deviceInfo.z);
        addString(map, "os_name", this.deviceInfo.n);
        addString(map, "os_version", this.deviceInfo.o);
        addString(map, "package_name", this.deviceInfo.i);
        addMapJson(map, "params", this.extraParameters);
        addMapJson(map, Constants.PARTNER_PARAMETERS, this.sessionParameters.partnerParameters);
        addString(map, "push_token", this.activityStateCopy.h);
        addString(map, "raw_referrer", this.rawReferrer);
        addString(map, Constants.REFERRER, this.referrer);
        addString(map, "referrer_api", this.referrerApi);
        addString(map, Constants.REFTAG, this.reftag);
        addString(map, "screen_density", this.deviceInfo.u);
        addString(map, "screen_format", this.deviceInfo.t);
        addString(map, "screen_size", this.deviceInfo.s);
        addString(map, "secret_id", this.adjustConfig.secretId);
        addLong(map, "session_count", this.activityStateCopy.b);
        addDuration(map, "session_length", this.activityStateCopy.f);
        addString(map, "source", str);
        addLong(map, "subsession_count", this.activityStateCopy.c);
        addDuration(map, "time_spent", this.activityStateCopy.d);
        addString(map, "updated_at", this.deviceInfo.B);
        addString(map, "payload", this.preinstallPayload);
        addString(map, "found_location", this.preinstallLocation);
        injectFeatureFlagsWithParameters(map);
        checkDeviceIds(map);
        return map;
    }

    private ActivityPackage getDefaultActivityPackage(ActivityKind activityKind) {
        ActivityPackage activityPackage = new ActivityPackage(activityKind);
        activityPackage.setClientSdk(this.deviceInfo.h);
        return activityPackage;
    }

    private Map<String, String> getDisableThirdPartySharingParameters() {
        HashMap map = new HashMap();
        Map<String, String> imeiParameters = Util.getImeiParameters(this.adjustConfig, logger);
        if (imeiParameters != null) {
            map.putAll(imeiParameters);
        }
        Map<String, String> oaidParameters = Util.getOaidParameters(this.adjustConfig, logger);
        if (oaidParameters != null) {
            map.putAll(oaidParameters);
        }
        this.deviceInfo.b(this.adjustConfig);
        addString(map, "android_uuid", this.activityStateCopy.g);
        addString(map, "gps_adid", this.deviceInfo.f86a);
        addLong(map, "gps_adid_attempt", this.deviceInfo.c);
        addString(map, "gps_adid_src", this.deviceInfo.b);
        addBoolean(map, "tracking_enabled", this.deviceInfo.d);
        addString(map, "fire_adid", Util.getFireAdvertisingId(this.adjustConfig));
        addBoolean(map, "fire_tracking_enabled", Util.getFireTrackingEnabled(this.adjustConfig));
        if (!containsPlayIds(map) && !containsFireIds(map)) {
            logger.warn("Google Advertising ID or Fire Advertising ID not detected, fallback to non Google Play and Fire identifiers will take place", new Object[0]);
            this.deviceInfo.a(this.adjustConfig);
            addString(map, "android_id", this.deviceInfo.f);
        }
        addString(map, "api_level", this.deviceInfo.p);
        addString(map, "app_secret", this.adjustConfig.appSecret);
        addString(map, "app_token", this.adjustConfig.appToken);
        addString(map, "app_version", this.deviceInfo.j);
        Boolean bool = Boolean.TRUE;
        addBoolean(map, "attribution_deeplink", bool);
        addDateInMilliseconds(map, "created_at", this.createdAt);
        addBoolean(map, "device_known", this.adjustConfig.deviceKnown);
        addBoolean(map, "needs_cost", this.adjustConfig.needsCost);
        addString(map, "device_name", this.deviceInfo.l);
        addString(map, "device_type", this.deviceInfo.k);
        addLong(map, "ui_mode", this.deviceInfo.C);
        addString(map, "environment", this.adjustConfig.environment);
        addBoolean(map, "event_buffering_enabled", Boolean.valueOf(this.adjustConfig.eventBufferingEnabled));
        addString(map, "external_device_id", this.adjustConfig.externalDeviceId);
        addBoolean(map, "needs_response_details", bool);
        addString(map, "os_name", this.deviceInfo.n);
        addString(map, "os_version", this.deviceInfo.o);
        addString(map, "package_name", this.deviceInfo.i);
        addString(map, "push_token", this.activityStateCopy.h);
        addString(map, "secret_id", this.adjustConfig.secretId);
        injectFeatureFlagsWithParameters(map);
        checkDeviceIds(map);
        return map;
    }

    private String getEventSuffix(AdjustEvent adjustEvent) {
        Double d = adjustEvent.revenue;
        return d == null ? Util.formatString("'%s'", adjustEvent.eventToken) : Util.formatString("(%.5f %s, '%s')", d, adjustEvent.currency, adjustEvent.eventToken);
    }

    private Map<String, String> getGdprParameters() {
        HashMap map = new HashMap();
        Map<String, String> imeiParameters = Util.getImeiParameters(this.adjustConfig, logger);
        if (imeiParameters != null) {
            map.putAll(imeiParameters);
        }
        Map<String, String> oaidParameters = Util.getOaidParameters(this.adjustConfig, logger);
        if (oaidParameters != null) {
            map.putAll(oaidParameters);
        }
        this.deviceInfo.b(this.adjustConfig);
        addString(map, "android_uuid", this.activityStateCopy.g);
        addString(map, "gps_adid", this.deviceInfo.f86a);
        addLong(map, "gps_adid_attempt", this.deviceInfo.c);
        addString(map, "gps_adid_src", this.deviceInfo.b);
        addBoolean(map, "tracking_enabled", this.deviceInfo.d);
        addString(map, "fire_adid", Util.getFireAdvertisingId(this.adjustConfig));
        addBoolean(map, "fire_tracking_enabled", Util.getFireTrackingEnabled(this.adjustConfig));
        if (!containsPlayIds(map) && !containsFireIds(map)) {
            logger.warn("Google Advertising ID or Fire Advertising ID not detected, fallback to non Google Play and Fire identifiers will take place", new Object[0]);
            this.deviceInfo.a(this.adjustConfig);
            addString(map, "android_id", this.deviceInfo.f);
        }
        addString(map, "api_level", this.deviceInfo.p);
        addString(map, "app_secret", this.adjustConfig.appSecret);
        addString(map, "app_token", this.adjustConfig.appToken);
        addString(map, "app_version", this.deviceInfo.j);
        Boolean bool = Boolean.TRUE;
        addBoolean(map, "attribution_deeplink", bool);
        addDateInMilliseconds(map, "created_at", this.createdAt);
        addBoolean(map, "device_known", this.adjustConfig.deviceKnown);
        addBoolean(map, "needs_cost", this.adjustConfig.needsCost);
        addString(map, "device_name", this.deviceInfo.l);
        addString(map, "device_type", this.deviceInfo.k);
        addLong(map, "ui_mode", this.deviceInfo.C);
        addString(map, "environment", this.adjustConfig.environment);
        addBoolean(map, "event_buffering_enabled", Boolean.valueOf(this.adjustConfig.eventBufferingEnabled));
        addString(map, "external_device_id", this.adjustConfig.externalDeviceId);
        addBoolean(map, "needs_response_details", bool);
        addString(map, "os_name", this.deviceInfo.n);
        addString(map, "os_version", this.deviceInfo.o);
        addString(map, "package_name", this.deviceInfo.i);
        addString(map, "push_token", this.activityStateCopy.h);
        addString(map, "secret_id", this.adjustConfig.secretId);
        injectFeatureFlagsWithParameters(map);
        checkDeviceIds(map);
        return map;
    }

    private Map<String, String> getInfoParameters(String str) {
        HashMap map = new HashMap();
        Map<String, String> imeiParameters = Util.getImeiParameters(this.adjustConfig, logger);
        if (imeiParameters != null) {
            map.putAll(imeiParameters);
        }
        Map<String, String> oaidParameters = Util.getOaidParameters(this.adjustConfig, logger);
        if (oaidParameters != null) {
            map.putAll(oaidParameters);
        }
        this.deviceInfo.b(this.adjustConfig);
        addString(map, "android_uuid", this.activityStateCopy.g);
        addString(map, "gps_adid", this.deviceInfo.f86a);
        addLong(map, "gps_adid_attempt", this.deviceInfo.c);
        addString(map, "gps_adid_src", this.deviceInfo.b);
        addBoolean(map, "tracking_enabled", this.deviceInfo.d);
        addString(map, "fire_adid", Util.getFireAdvertisingId(this.adjustConfig));
        addBoolean(map, "fire_tracking_enabled", Util.getFireTrackingEnabled(this.adjustConfig));
        if (!containsPlayIds(map) && !containsFireIds(map)) {
            logger.warn("Google Advertising ID or Fire Advertising ID not detected, fallback to non Google Play and Fire identifiers will take place", new Object[0]);
            this.deviceInfo.a(this.adjustConfig);
            addString(map, "android_id", this.deviceInfo.f);
        }
        addString(map, "app_secret", this.adjustConfig.appSecret);
        addString(map, "app_token", this.adjustConfig.appToken);
        Boolean bool = Boolean.TRUE;
        addBoolean(map, "attribution_deeplink", bool);
        addDateInMilliseconds(map, "created_at", this.createdAt);
        addBoolean(map, "device_known", this.adjustConfig.deviceKnown);
        addBoolean(map, "needs_cost", this.adjustConfig.needsCost);
        addString(map, "environment", this.adjustConfig.environment);
        addBoolean(map, "event_buffering_enabled", Boolean.valueOf(this.adjustConfig.eventBufferingEnabled));
        addString(map, "external_device_id", this.adjustConfig.externalDeviceId);
        addBoolean(map, "needs_response_details", bool);
        addString(map, "push_token", this.activityStateCopy.h);
        addString(map, "secret_id", this.adjustConfig.secretId);
        addString(map, "source", str);
        injectFeatureFlagsWithParameters(map);
        checkDeviceIds(map);
        return map;
    }

    private Map<String, String> getMeasurementConsentParameters(boolean z) {
        HashMap map = new HashMap();
        Map<String, String> imeiParameters = Util.getImeiParameters(this.adjustConfig, logger);
        if (imeiParameters != null) {
            map.putAll(imeiParameters);
        }
        Map<String, String> oaidParameters = Util.getOaidParameters(this.adjustConfig, logger);
        if (oaidParameters != null) {
            map.putAll(oaidParameters);
        }
        addString(map, "measurement", z ? "enable" : "disable");
        this.deviceInfo.b(this.adjustConfig);
        addString(map, "android_uuid", this.activityStateCopy.g);
        addString(map, "gps_adid", this.deviceInfo.f86a);
        addLong(map, "gps_adid_attempt", this.deviceInfo.c);
        addString(map, "gps_adid_src", this.deviceInfo.b);
        addBoolean(map, "tracking_enabled", this.deviceInfo.d);
        addString(map, "fire_adid", Util.getFireAdvertisingId(this.adjustConfig));
        addBoolean(map, "fire_tracking_enabled", Util.getFireTrackingEnabled(this.adjustConfig));
        if (!containsPlayIds(map) && !containsFireIds(map)) {
            logger.warn("Google Advertising ID or Fire Advertising ID not detected, fallback to non Google Play and Fire identifiers will take place", new Object[0]);
            this.deviceInfo.a(this.adjustConfig);
            addString(map, "android_id", this.deviceInfo.f);
        }
        addString(map, "api_level", this.deviceInfo.p);
        addString(map, "app_secret", this.adjustConfig.appSecret);
        addString(map, "app_token", this.adjustConfig.appToken);
        addString(map, "app_version", this.deviceInfo.j);
        Boolean bool = Boolean.TRUE;
        addBoolean(map, "attribution_deeplink", bool);
        addDateInMilliseconds(map, "created_at", this.createdAt);
        addBoolean(map, "device_known", this.adjustConfig.deviceKnown);
        addString(map, "device_name", this.deviceInfo.l);
        addString(map, "device_type", this.deviceInfo.k);
        addLong(map, "ui_mode", this.deviceInfo.C);
        addString(map, "environment", this.adjustConfig.environment);
        addBoolean(map, "event_buffering_enabled", Boolean.valueOf(this.adjustConfig.eventBufferingEnabled));
        addString(map, "external_device_id", this.adjustConfig.externalDeviceId);
        addBoolean(map, "needs_response_details", bool);
        addString(map, "os_name", this.deviceInfo.n);
        addString(map, "os_version", this.deviceInfo.o);
        addString(map, "package_name", this.deviceInfo.i);
        addString(map, "push_token", this.activityStateCopy.h);
        addString(map, "secret_id", this.adjustConfig.secretId);
        injectFeatureFlagsWithParameters(map);
        checkDeviceIds(map);
        return map;
    }

    private Map<String, String> getSessionParameters(boolean z) {
        HashMap map = new HashMap();
        Map<String, String> imeiParameters = Util.getImeiParameters(this.adjustConfig, logger);
        if (imeiParameters != null) {
            map.putAll(imeiParameters);
        }
        Map<String, String> oaidParameters = Util.getOaidParameters(this.adjustConfig, logger);
        if (oaidParameters != null) {
            map.putAll(oaidParameters);
        }
        if (!z) {
            addMapJson(map, Constants.CALLBACK_PARAMETERS, this.sessionParameters.callbackParameters);
            addMapJson(map, Constants.PARTNER_PARAMETERS, this.sessionParameters.partnerParameters);
        }
        this.deviceInfo.b(this.adjustConfig);
        addString(map, "android_uuid", this.activityStateCopy.g);
        addString(map, "gps_adid", this.deviceInfo.f86a);
        addLong(map, "gps_adid_attempt", this.deviceInfo.c);
        addString(map, "gps_adid_src", this.deviceInfo.b);
        addBoolean(map, "tracking_enabled", this.deviceInfo.d);
        addString(map, "fire_adid", Util.getFireAdvertisingId(this.adjustConfig));
        addBoolean(map, "fire_tracking_enabled", Util.getFireTrackingEnabled(this.adjustConfig));
        if (!containsPlayIds(map) && !containsFireIds(map)) {
            logger.warn("Google Advertising ID or Fire Advertising ID not detected, fallback to non Google Play and Fire identifiers will take place", new Object[0]);
            this.deviceInfo.a(this.adjustConfig);
            addString(map, "android_id", this.deviceInfo.f);
        }
        addString(map, "api_level", this.deviceInfo.p);
        addString(map, "app_secret", this.adjustConfig.appSecret);
        addString(map, "app_token", this.adjustConfig.appToken);
        addString(map, "app_version", this.deviceInfo.j);
        Boolean bool = Boolean.TRUE;
        addBoolean(map, "attribution_deeplink", bool);
        addLong(map, "connectivity_type", Util.getConnectivityType(this.adjustConfig.context));
        addString(map, "country", this.deviceInfo.r);
        addString(map, "cpu_type", this.deviceInfo.y);
        addDateInMilliseconds(map, "created_at", this.createdAt);
        addString(map, "default_tracker", this.adjustConfig.defaultTracker);
        addBoolean(map, "device_known", this.adjustConfig.deviceKnown);
        addBoolean(map, "needs_cost", this.adjustConfig.needsCost);
        addString(map, "device_manufacturer", this.deviceInfo.m);
        addString(map, "device_name", this.deviceInfo.l);
        addString(map, "device_type", this.deviceInfo.k);
        addLong(map, "ui_mode", this.deviceInfo.C);
        addString(map, "display_height", this.deviceInfo.w);
        addString(map, "display_width", this.deviceInfo.v);
        addString(map, "environment", this.adjustConfig.environment);
        addBoolean(map, "event_buffering_enabled", Boolean.valueOf(this.adjustConfig.eventBufferingEnabled));
        addString(map, "external_device_id", this.adjustConfig.externalDeviceId);
        addString(map, "fb_id", this.deviceInfo.g);
        addString(map, "hardware_name", this.deviceInfo.x);
        addString(map, "installed_at", this.deviceInfo.A);
        addString(map, "language", this.deviceInfo.q);
        addDuration(map, "last_interval", this.activityStateCopy.e);
        addString(map, "mcc", Util.getMcc(this.adjustConfig.context));
        addString(map, "mnc", Util.getMnc(this.adjustConfig.context));
        addBoolean(map, "needs_response_details", bool);
        addString(map, "os_build", this.deviceInfo.z);
        addString(map, "os_name", this.deviceInfo.n);
        addString(map, "os_version", this.deviceInfo.o);
        addString(map, "package_name", this.deviceInfo.i);
        addString(map, "push_token", this.activityStateCopy.h);
        addString(map, "screen_density", this.deviceInfo.u);
        addString(map, "screen_format", this.deviceInfo.t);
        addString(map, "screen_size", this.deviceInfo.s);
        addString(map, "secret_id", this.adjustConfig.secretId);
        addLong(map, "session_count", this.activityStateCopy.b);
        addDuration(map, "session_length", this.activityStateCopy.f);
        addLong(map, "subsession_count", this.activityStateCopy.c);
        addDuration(map, "time_spent", this.activityStateCopy.d);
        addString(map, "updated_at", this.deviceInfo.B);
        injectFeatureFlagsWithParameters(map);
        checkDeviceIds(map);
        return map;
    }

    private Map<String, String> getSubscriptionParameters(AdjustPlayStoreSubscription adjustPlayStoreSubscription, boolean z) {
        HashMap map = new HashMap();
        Map<String, String> imeiParameters = Util.getImeiParameters(this.adjustConfig, logger);
        if (imeiParameters != null) {
            map.putAll(imeiParameters);
        }
        Map<String, String> oaidParameters = Util.getOaidParameters(this.adjustConfig, logger);
        if (oaidParameters != null) {
            map.putAll(oaidParameters);
        }
        this.deviceInfo.b(this.adjustConfig);
        addString(map, "android_uuid", this.activityStateCopy.g);
        addString(map, "gps_adid", this.deviceInfo.f86a);
        addLong(map, "gps_adid_attempt", this.deviceInfo.c);
        addString(map, "gps_adid_src", this.deviceInfo.b);
        addBoolean(map, "tracking_enabled", this.deviceInfo.d);
        addString(map, "fire_adid", Util.getFireAdvertisingId(this.adjustConfig));
        addBoolean(map, "fire_tracking_enabled", Util.getFireTrackingEnabled(this.adjustConfig));
        if (!containsPlayIds(map) && !containsFireIds(map)) {
            logger.warn("Google Advertising ID or Fire Advertising ID not detected, fallback to non Google Play and Fire identifiers will take place", new Object[0]);
            this.deviceInfo.a(this.adjustConfig);
            addString(map, "android_id", this.deviceInfo.f);
        }
        if (!z) {
            addMapJson(map, Constants.CALLBACK_PARAMETERS, Util.mergeParameters(this.sessionParameters.callbackParameters, adjustPlayStoreSubscription.getCallbackParameters(), "Callback"));
            addMapJson(map, Constants.PARTNER_PARAMETERS, Util.mergeParameters(this.sessionParameters.partnerParameters, adjustPlayStoreSubscription.getPartnerParameters(), "Partner"));
        }
        addString(map, "api_level", this.deviceInfo.p);
        addString(map, "app_secret", this.adjustConfig.appSecret);
        addString(map, "app_token", this.adjustConfig.appToken);
        addString(map, "app_version", this.deviceInfo.j);
        Boolean bool = Boolean.TRUE;
        addBoolean(map, "attribution_deeplink", bool);
        addLong(map, "connectivity_type", Util.getConnectivityType(this.adjustConfig.context));
        addString(map, "country", this.deviceInfo.r);
        addString(map, "cpu_type", this.deviceInfo.y);
        addDateInMilliseconds(map, "created_at", this.createdAt);
        addString(map, "default_tracker", this.adjustConfig.defaultTracker);
        addBoolean(map, "device_known", this.adjustConfig.deviceKnown);
        addBoolean(map, "needs_cost", this.adjustConfig.needsCost);
        addString(map, "device_manufacturer", this.deviceInfo.m);
        addString(map, "device_name", this.deviceInfo.l);
        addString(map, "device_type", this.deviceInfo.k);
        addLong(map, "ui_mode", this.deviceInfo.C);
        addString(map, "display_height", this.deviceInfo.w);
        addString(map, "display_width", this.deviceInfo.v);
        addString(map, "environment", this.adjustConfig.environment);
        addBoolean(map, "event_buffering_enabled", Boolean.valueOf(this.adjustConfig.eventBufferingEnabled));
        addString(map, "external_device_id", this.adjustConfig.externalDeviceId);
        addString(map, "fb_id", this.deviceInfo.g);
        addString(map, "hardware_name", this.deviceInfo.x);
        addString(map, "installed_at", this.deviceInfo.A);
        addString(map, "language", this.deviceInfo.q);
        addDuration(map, "last_interval", this.activityStateCopy.e);
        addString(map, "mcc", Util.getMcc(this.adjustConfig.context));
        addString(map, "mnc", Util.getMnc(this.adjustConfig.context));
        addBoolean(map, "needs_response_details", bool);
        addString(map, "os_build", this.deviceInfo.z);
        addString(map, "os_name", this.deviceInfo.n);
        addString(map, "os_version", this.deviceInfo.o);
        addString(map, "package_name", this.deviceInfo.i);
        addString(map, "push_token", this.activityStateCopy.h);
        addString(map, "screen_density", this.deviceInfo.u);
        addString(map, "screen_format", this.deviceInfo.t);
        addString(map, "screen_size", this.deviceInfo.s);
        addString(map, "secret_id", this.adjustConfig.secretId);
        addLong(map, "session_count", this.activityStateCopy.b);
        addDuration(map, "session_length", this.activityStateCopy.f);
        addLong(map, "subsession_count", this.activityStateCopy.c);
        addDuration(map, "time_spent", this.activityStateCopy.d);
        addString(map, "updated_at", this.deviceInfo.B);
        addString(map, "billing_store", adjustPlayStoreSubscription.getBillingStore());
        addString(map, FirebaseAnalytics.Param.CURRENCY, adjustPlayStoreSubscription.getCurrency());
        addString(map, "product_id", adjustPlayStoreSubscription.getSku());
        addString(map, "purchase_token", adjustPlayStoreSubscription.getPurchaseToken());
        addString(map, "receipt", adjustPlayStoreSubscription.getSignature());
        addLong(map, "revenue", adjustPlayStoreSubscription.getPrice());
        addDateInMilliseconds(map, "transaction_date", adjustPlayStoreSubscription.getPurchaseTime());
        addString(map, FirebaseAnalytics.Param.TRANSACTION_ID, adjustPlayStoreSubscription.getOrderId());
        injectFeatureFlagsWithParameters(map);
        checkDeviceIds(map);
        return map;
    }

    private Map<String, String> getThirdPartySharingParameters(AdjustThirdPartySharing adjustThirdPartySharing) {
        HashMap map = new HashMap();
        Map<String, String> imeiParameters = Util.getImeiParameters(this.adjustConfig, logger);
        if (imeiParameters != null) {
            map.putAll(imeiParameters);
        }
        Map<String, String> oaidParameters = Util.getOaidParameters(this.adjustConfig, logger);
        if (oaidParameters != null) {
            map.putAll(oaidParameters);
        }
        Boolean bool = adjustThirdPartySharing.isEnabled;
        if (bool != null) {
            addString(map, "sharing", bool.booleanValue() ? "enable" : "disable");
        }
        addMapJson(map, "granular_third_party_sharing_options", adjustThirdPartySharing.granularOptions);
        addMapJson(map, "partner_sharing_settings", adjustThirdPartySharing.partnerSharingSettings);
        this.deviceInfo.b(this.adjustConfig);
        addString(map, "android_uuid", this.activityStateCopy.g);
        addString(map, "gps_adid", this.deviceInfo.f86a);
        addLong(map, "gps_adid_attempt", this.deviceInfo.c);
        addString(map, "gps_adid_src", this.deviceInfo.b);
        addBoolean(map, "tracking_enabled", this.deviceInfo.d);
        addString(map, "fire_adid", Util.getFireAdvertisingId(this.adjustConfig));
        addBoolean(map, "fire_tracking_enabled", Util.getFireTrackingEnabled(this.adjustConfig));
        if (!containsPlayIds(map) && !containsFireIds(map)) {
            logger.warn("Google Advertising ID or Fire Advertising ID not detected, fallback to non Google Play and Fire identifiers will take place", new Object[0]);
            this.deviceInfo.a(this.adjustConfig);
            addString(map, "android_id", this.deviceInfo.f);
        }
        addString(map, "api_level", this.deviceInfo.p);
        addString(map, "app_secret", this.adjustConfig.appSecret);
        addString(map, "app_token", this.adjustConfig.appToken);
        addString(map, "app_version", this.deviceInfo.j);
        Boolean bool2 = Boolean.TRUE;
        addBoolean(map, "attribution_deeplink", bool2);
        addDateInMilliseconds(map, "created_at", this.createdAt);
        addBoolean(map, "device_known", this.adjustConfig.deviceKnown);
        addString(map, "device_name", this.deviceInfo.l);
        addString(map, "device_type", this.deviceInfo.k);
        addLong(map, "ui_mode", this.deviceInfo.C);
        addString(map, "environment", this.adjustConfig.environment);
        addBoolean(map, "event_buffering_enabled", Boolean.valueOf(this.adjustConfig.eventBufferingEnabled));
        addString(map, "external_device_id", this.adjustConfig.externalDeviceId);
        addBoolean(map, "needs_response_details", bool2);
        addString(map, "os_name", this.deviceInfo.n);
        addString(map, "os_version", this.deviceInfo.o);
        addString(map, "package_name", this.deviceInfo.i);
        addString(map, "push_token", this.activityStateCopy.h);
        addString(map, "secret_id", this.adjustConfig.secretId);
        injectFeatureFlagsWithParameters(map);
        checkDeviceIds(map);
        return map;
    }

    private void injectFeatureFlagsWithParameters(Map<String, String> map) {
        if (this.adjustConfig.coppaCompliantEnabled) {
            addLong(map, "ff_coppa", 1L);
        }
        if (this.adjustConfig.playStoreKidsAppEnabled) {
            addLong(map, "ff_play_store_kids_app", 1L);
        }
    }

    public ActivityPackage buildAdRevenuePackage(AdjustAdRevenue adjustAdRevenue, boolean z) {
        Map<String, String> adRevenueParameters = getAdRevenueParameters(adjustAdRevenue, z);
        ActivityKind activityKind = ActivityKind.AD_REVENUE;
        ActivityPackage defaultActivityPackage = getDefaultActivityPackage(activityKind);
        defaultActivityPackage.setPath("/ad_revenue");
        defaultActivityPackage.setSuffix("");
        String string = activityKind.toString();
        String clientSdk = defaultActivityPackage.getClientSdk();
        AdjustConfig adjustConfig = this.adjustConfig;
        AdjustSigner.sign(adRevenueParameters, string, clientSdk, adjustConfig.context, adjustConfig.logger);
        defaultActivityPackage.setParameters(adRevenueParameters);
        if (z) {
            defaultActivityPackage.setCallbackParameters(adjustAdRevenue.callbackParameters);
            defaultActivityPackage.setPartnerParameters(adjustAdRevenue.partnerParameters);
        }
        return defaultActivityPackage;
    }

    public ActivityPackage buildAdRevenuePackage(String str, JSONObject jSONObject) {
        Map<String, String> adRevenueParameters = getAdRevenueParameters(str, jSONObject);
        ActivityKind activityKind = ActivityKind.AD_REVENUE;
        ActivityPackage defaultActivityPackage = getDefaultActivityPackage(activityKind);
        defaultActivityPackage.setPath("/ad_revenue");
        defaultActivityPackage.setSuffix("");
        String string = activityKind.toString();
        String clientSdk = defaultActivityPackage.getClientSdk();
        AdjustConfig adjustConfig = this.adjustConfig;
        AdjustSigner.sign(adRevenueParameters, string, clientSdk, adjustConfig.context, adjustConfig.logger);
        defaultActivityPackage.setParameters(adRevenueParameters);
        return defaultActivityPackage;
    }

    public ActivityPackage buildAttributionPackage(String str) {
        Map<String, String> attributionParameters = getAttributionParameters(str);
        ActivityKind activityKind = ActivityKind.ATTRIBUTION;
        ActivityPackage defaultActivityPackage = getDefaultActivityPackage(activityKind);
        defaultActivityPackage.setPath("attribution");
        defaultActivityPackage.setSuffix("");
        String string = activityKind.toString();
        String clientSdk = defaultActivityPackage.getClientSdk();
        AdjustConfig adjustConfig = this.adjustConfig;
        AdjustSigner.sign(attributionParameters, string, clientSdk, adjustConfig.context, adjustConfig.logger);
        defaultActivityPackage.setParameters(attributionParameters);
        return defaultActivityPackage;
    }

    public ActivityPackage buildClickPackage(String str) {
        Map<String, String> clickParameters = getClickParameters(str);
        ActivityKind activityKind = ActivityKind.CLICK;
        ActivityPackage defaultActivityPackage = getDefaultActivityPackage(activityKind);
        defaultActivityPackage.setPath("/sdk_click");
        defaultActivityPackage.setSuffix("");
        defaultActivityPackage.setClickTimeInMilliseconds(this.clickTimeInMilliseconds);
        defaultActivityPackage.setClickTimeInSeconds(this.clickTimeInSeconds);
        defaultActivityPackage.setInstallBeginTimeInSeconds(this.installBeginTimeInSeconds);
        defaultActivityPackage.setClickTimeServerInSeconds(this.clickTimeServerInSeconds);
        defaultActivityPackage.setInstallBeginTimeServerInSeconds(this.installBeginTimeServerInSeconds);
        defaultActivityPackage.setInstallVersion(this.installVersion);
        defaultActivityPackage.setGooglePlayInstant(this.googlePlayInstant);
        String string = activityKind.toString();
        String clientSdk = defaultActivityPackage.getClientSdk();
        AdjustConfig adjustConfig = this.adjustConfig;
        AdjustSigner.sign(clickParameters, string, clientSdk, adjustConfig.context, adjustConfig.logger);
        defaultActivityPackage.setParameters(clickParameters);
        return defaultActivityPackage;
    }

    public ActivityPackage buildDisableThirdPartySharingPackage() {
        Map<String, String> disableThirdPartySharingParameters = getDisableThirdPartySharingParameters();
        ActivityKind activityKind = ActivityKind.DISABLE_THIRD_PARTY_SHARING;
        ActivityPackage defaultActivityPackage = getDefaultActivityPackage(activityKind);
        defaultActivityPackage.setPath("/disable_third_party_sharing");
        defaultActivityPackage.setSuffix("");
        String string = activityKind.toString();
        String clientSdk = defaultActivityPackage.getClientSdk();
        AdjustConfig adjustConfig = this.adjustConfig;
        AdjustSigner.sign(disableThirdPartySharingParameters, string, clientSdk, adjustConfig.context, adjustConfig.logger);
        defaultActivityPackage.setParameters(disableThirdPartySharingParameters);
        return defaultActivityPackage;
    }

    public ActivityPackage buildEventPackage(AdjustEvent adjustEvent, boolean z) {
        Map<String, String> eventParameters = getEventParameters(adjustEvent, z);
        ActivityKind activityKind = ActivityKind.EVENT;
        ActivityPackage defaultActivityPackage = getDefaultActivityPackage(activityKind);
        defaultActivityPackage.setPath("/event");
        defaultActivityPackage.setSuffix(getEventSuffix(adjustEvent));
        String string = activityKind.toString();
        String clientSdk = defaultActivityPackage.getClientSdk();
        AdjustConfig adjustConfig = this.adjustConfig;
        AdjustSigner.sign(eventParameters, string, clientSdk, adjustConfig.context, adjustConfig.logger);
        defaultActivityPackage.setParameters(eventParameters);
        if (z) {
            defaultActivityPackage.setCallbackParameters(adjustEvent.callbackParameters);
            defaultActivityPackage.setPartnerParameters(adjustEvent.partnerParameters);
        }
        return defaultActivityPackage;
    }

    public ActivityPackage buildGdprPackage() {
        Map<String, String> gdprParameters = getGdprParameters();
        ActivityKind activityKind = ActivityKind.GDPR;
        ActivityPackage defaultActivityPackage = getDefaultActivityPackage(activityKind);
        defaultActivityPackage.setPath("/gdpr_forget_device");
        defaultActivityPackage.setSuffix("");
        String string = activityKind.toString();
        String clientSdk = defaultActivityPackage.getClientSdk();
        AdjustConfig adjustConfig = this.adjustConfig;
        AdjustSigner.sign(gdprParameters, string, clientSdk, adjustConfig.context, adjustConfig.logger);
        defaultActivityPackage.setParameters(gdprParameters);
        return defaultActivityPackage;
    }

    public ActivityPackage buildInfoPackage(String str) {
        Map<String, String> infoParameters = getInfoParameters(str);
        ActivityKind activityKind = ActivityKind.INFO;
        ActivityPackage defaultActivityPackage = getDefaultActivityPackage(activityKind);
        defaultActivityPackage.setPath("/sdk_info");
        defaultActivityPackage.setSuffix("");
        String string = activityKind.toString();
        String clientSdk = defaultActivityPackage.getClientSdk();
        AdjustConfig adjustConfig = this.adjustConfig;
        AdjustSigner.sign(infoParameters, string, clientSdk, adjustConfig.context, adjustConfig.logger);
        defaultActivityPackage.setParameters(infoParameters);
        return defaultActivityPackage;
    }

    public ActivityPackage buildMeasurementConsentPackage(boolean z) {
        Map<String, String> measurementConsentParameters = getMeasurementConsentParameters(z);
        ActivityKind activityKind = ActivityKind.MEASUREMENT_CONSENT;
        ActivityPackage defaultActivityPackage = getDefaultActivityPackage(activityKind);
        defaultActivityPackage.setPath("/measurement_consent");
        defaultActivityPackage.setSuffix("");
        String string = activityKind.toString();
        String clientSdk = defaultActivityPackage.getClientSdk();
        AdjustConfig adjustConfig = this.adjustConfig;
        AdjustSigner.sign(measurementConsentParameters, string, clientSdk, adjustConfig.context, adjustConfig.logger);
        defaultActivityPackage.setParameters(measurementConsentParameters);
        return defaultActivityPackage;
    }

    public ActivityPackage buildSessionPackage(boolean z) {
        Map<String, String> sessionParameters = getSessionParameters(z);
        ActivityKind activityKind = ActivityKind.SESSION;
        ActivityPackage defaultActivityPackage = getDefaultActivityPackage(activityKind);
        defaultActivityPackage.setPath("/session");
        defaultActivityPackage.setSuffix("");
        String string = activityKind.toString();
        String clientSdk = defaultActivityPackage.getClientSdk();
        AdjustConfig adjustConfig = this.adjustConfig;
        AdjustSigner.sign(sessionParameters, string, clientSdk, adjustConfig.context, adjustConfig.logger);
        defaultActivityPackage.setParameters(sessionParameters);
        return defaultActivityPackage;
    }

    public ActivityPackage buildSubscriptionPackage(AdjustPlayStoreSubscription adjustPlayStoreSubscription, boolean z) {
        Map<String, String> subscriptionParameters = getSubscriptionParameters(adjustPlayStoreSubscription, z);
        ActivityKind activityKind = ActivityKind.SUBSCRIPTION;
        ActivityPackage defaultActivityPackage = getDefaultActivityPackage(activityKind);
        defaultActivityPackage.setPath("/v2/purchase");
        defaultActivityPackage.setSuffix("");
        String string = activityKind.toString();
        String clientSdk = defaultActivityPackage.getClientSdk();
        AdjustConfig adjustConfig = this.adjustConfig;
        AdjustSigner.sign(subscriptionParameters, string, clientSdk, adjustConfig.context, adjustConfig.logger);
        defaultActivityPackage.setParameters(subscriptionParameters);
        return defaultActivityPackage;
    }

    public ActivityPackage buildThirdPartySharingPackage(AdjustThirdPartySharing adjustThirdPartySharing) {
        Map<String, String> thirdPartySharingParameters = getThirdPartySharingParameters(adjustThirdPartySharing);
        ActivityKind activityKind = ActivityKind.THIRD_PARTY_SHARING;
        ActivityPackage defaultActivityPackage = getDefaultActivityPackage(activityKind);
        defaultActivityPackage.setPath("/third_party_sharing");
        defaultActivityPackage.setSuffix("");
        String string = activityKind.toString();
        String clientSdk = defaultActivityPackage.getClientSdk();
        AdjustConfig adjustConfig = this.adjustConfig;
        AdjustSigner.sign(thirdPartySharingParameters, string, clientSdk, adjustConfig.context, adjustConfig.logger);
        defaultActivityPackage.setParameters(thirdPartySharingParameters);
        return defaultActivityPackage;
    }

    public Map<String, String> getEventParameters(AdjustEvent adjustEvent, boolean z) {
        HashMap map = new HashMap();
        Map<String, String> imeiParameters = Util.getImeiParameters(this.adjustConfig, logger);
        if (imeiParameters != null) {
            map.putAll(imeiParameters);
        }
        Map<String, String> oaidParameters = Util.getOaidParameters(this.adjustConfig, logger);
        if (oaidParameters != null) {
            map.putAll(oaidParameters);
        }
        if (!z) {
            addMapJson(map, Constants.CALLBACK_PARAMETERS, Util.mergeParameters(this.sessionParameters.callbackParameters, adjustEvent.callbackParameters, "Callback"));
            addMapJson(map, Constants.PARTNER_PARAMETERS, Util.mergeParameters(this.sessionParameters.partnerParameters, adjustEvent.partnerParameters, "Partner"));
        }
        this.deviceInfo.b(this.adjustConfig);
        addString(map, "android_uuid", this.activityStateCopy.g);
        addString(map, "gps_adid", this.deviceInfo.f86a);
        addLong(map, "gps_adid_attempt", this.deviceInfo.c);
        addString(map, "gps_adid_src", this.deviceInfo.b);
        addBoolean(map, "tracking_enabled", this.deviceInfo.d);
        addString(map, "fire_adid", Util.getFireAdvertisingId(this.adjustConfig));
        addBoolean(map, "fire_tracking_enabled", Util.getFireTrackingEnabled(this.adjustConfig));
        if (!containsPlayIds(map) && !containsFireIds(map)) {
            logger.warn("Google Advertising ID or Fire Advertising ID not detected, fallback to non Google Play and Fire identifiers will take place", new Object[0]);
            this.deviceInfo.a(this.adjustConfig);
            addString(map, "android_id", this.deviceInfo.f);
        }
        addString(map, "api_level", this.deviceInfo.p);
        addString(map, "app_secret", this.adjustConfig.appSecret);
        addString(map, "app_token", this.adjustConfig.appToken);
        addString(map, "app_version", this.deviceInfo.j);
        Boolean bool = Boolean.TRUE;
        addBoolean(map, "attribution_deeplink", bool);
        addLong(map, "connectivity_type", Util.getConnectivityType(this.adjustConfig.context));
        addString(map, "country", this.deviceInfo.r);
        addString(map, "cpu_type", this.deviceInfo.y);
        addDateInMilliseconds(map, "created_at", this.createdAt);
        addString(map, FirebaseAnalytics.Param.CURRENCY, adjustEvent.currency);
        addBoolean(map, "device_known", this.adjustConfig.deviceKnown);
        addBoolean(map, "needs_cost", this.adjustConfig.needsCost);
        addString(map, "device_manufacturer", this.deviceInfo.m);
        addString(map, "device_name", this.deviceInfo.l);
        addString(map, "device_type", this.deviceInfo.k);
        addLong(map, "ui_mode", this.deviceInfo.C);
        addString(map, "display_height", this.deviceInfo.w);
        addString(map, "display_width", this.deviceInfo.v);
        addString(map, "environment", this.adjustConfig.environment);
        addString(map, "event_callback_id", adjustEvent.callbackId);
        addLong(map, "event_count", this.activityStateCopy.f68a);
        addBoolean(map, "event_buffering_enabled", Boolean.valueOf(this.adjustConfig.eventBufferingEnabled));
        addString(map, "event_token", adjustEvent.eventToken);
        addString(map, "external_device_id", this.adjustConfig.externalDeviceId);
        addString(map, "fb_id", this.deviceInfo.g);
        addString(map, "hardware_name", this.deviceInfo.x);
        addString(map, "language", this.deviceInfo.q);
        addString(map, "mcc", Util.getMcc(this.adjustConfig.context));
        addString(map, "mnc", Util.getMnc(this.adjustConfig.context));
        addBoolean(map, "needs_response_details", bool);
        addString(map, "os_build", this.deviceInfo.z);
        addString(map, "os_name", this.deviceInfo.n);
        addString(map, "os_version", this.deviceInfo.o);
        addString(map, "package_name", this.deviceInfo.i);
        addString(map, "push_token", this.activityStateCopy.h);
        addDouble(map, "revenue", adjustEvent.revenue);
        addString(map, "deduplication_id", adjustEvent.orderId);
        addString(map, "screen_density", this.deviceInfo.u);
        addString(map, "screen_format", this.deviceInfo.t);
        addString(map, "screen_size", this.deviceInfo.s);
        addString(map, "secret_id", this.adjustConfig.secretId);
        addLong(map, "session_count", this.activityStateCopy.b);
        addDuration(map, "session_length", this.activityStateCopy.f);
        addLong(map, "subsession_count", this.activityStateCopy.c);
        addDuration(map, "time_spent", this.activityStateCopy.d);
        injectFeatureFlagsWithParameters(map);
        checkDeviceIds(map);
        return map;
    }
}
