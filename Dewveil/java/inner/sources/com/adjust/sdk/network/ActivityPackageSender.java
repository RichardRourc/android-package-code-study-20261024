package com.adjust.sdk.network;

import android.net.Uri;
import com.adjust.sdk.ActivityKind;
import com.adjust.sdk.ActivityPackage;
import com.adjust.sdk.AdjustAttribution;
import com.adjust.sdk.AdjustFactory;
import com.adjust.sdk.Constants;
import com.adjust.sdk.ILogger;
import com.adjust.sdk.ResponseData;
import com.adjust.sdk.TrackingState;
import com.adjust.sdk.Util;
import com.adjust.sdk.scheduler.SingleThreadCachedScheduler;
import com.adjust.sdk.scheduler.ThreadExecutor;
import java.io.BufferedReader;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;
import java.net.MalformedURLException;
import java.net.ProtocolException;
import java.net.SocketTimeoutException;
import java.net.URL;
import java.net.URLEncoder;
import java.util.HashMap;
import java.util.Map;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLHandshakeException;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class ActivityPackageSender implements IActivityPackageSender {
    private String basePath;
    private String clientSdk;
    private String gdprPath;
    private String subscriptionPath;
    private UrlStrategy urlStrategy;
    private ILogger logger = AdjustFactory.getLogger();
    private ThreadExecutor executor = new SingleThreadCachedScheduler("ActivityPackageSender");
    private UtilNetworking.IHttpsURLConnectionProvider httpsURLConnectionProvider = AdjustFactory.getHttpsURLConnectionProvider();
    private UtilNetworking.IConnectionOptions connectionOptions = AdjustFactory.getConnectionOptions();

    public class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ IActivityPackageSender.ResponseDataCallbackSubscriber f87a;
        public final /* synthetic */ ActivityPackage b;
        public final /* synthetic */ Map c;

        public a(IActivityPackageSender.ResponseDataCallbackSubscriber responseDataCallbackSubscriber, ActivityPackage activityPackage, Map map) {
            this.f87a = responseDataCallbackSubscriber;
            this.b = activityPackage;
            this.c = map;
        }

        @Override // java.lang.Runnable
        public final void run() {
            this.f87a.onResponseDataCallback(ActivityPackageSender.this.sendActivityPackageSync(this.b, this.c));
        }
    }

    public ActivityPackageSender(String str, String str2, String str3, String str4, String str5) {
        this.basePath = str2;
        this.gdprPath = str3;
        this.subscriptionPath = str4;
        this.clientSdk = str5;
        this.urlStrategy = new UrlStrategy(AdjustFactory.getBaseUrl(), AdjustFactory.getGdprUrl(), AdjustFactory.getSubscriptionUrl(), str);
    }

    private String buildAndExtractAuthorizationHeader(Map<String, String> map, ActivityKind activityKind) {
        String string = activityKind.toString();
        String strExtractSecretId = extractSecretId(map);
        String strBuildAuthorizationHeaderV2 = buildAuthorizationHeaderV2(extractSignature(map), strExtractSecretId, extractHeadersId(map), extractAlgorithm(map), extractNativeVersion(map));
        return strBuildAuthorizationHeaderV2 != null ? strBuildAuthorizationHeaderV2 : buildAuthorizationHeaderV1(map, extractAppSecret(map), strExtractSecretId, string);
    }

    private String buildAuthorizationHeaderV1(Map<String, String> map, String str, String str2, String str3) {
        if (str == null || str.length() == 0) {
            return null;
        }
        Map<String, String> signature = getSignature(map, str3, str);
        String string = Util.formatString("Signature %s,%s,%s,%s", Util.formatString("secret_id=\"%s\"", str2), Util.formatString("signature=\"%s\"", Util.sha256(signature.get("clear_signature"))), Util.formatString("algorithm=\"%s\"", "sha256"), Util.formatString("headers=\"%s\"", signature.get("fields")));
        this.logger.verbose("authorizationHeader: %s", string);
        return string;
    }

    private String buildAuthorizationHeaderV2(String str, String str2, String str3, String str4, String str5) {
        if (str2 == null || str == null || str3 == null) {
            return null;
        }
        String string = Util.formatString("signature=\"%s\"", str);
        String string2 = Util.formatString("secret_id=\"%s\"", str2);
        String string3 = Util.formatString("headers_id=\"%s\"", str3);
        if (str4 == null) {
            str4 = "adj1";
        }
        String string4 = Util.formatString("algorithm=\"%s\"", str4);
        if (str5 == null) {
            str5 = "";
        }
        String string5 = Util.formatString("Signature %s,%s,%s,%s,%s", string, string2, string4, string3, Util.formatString("native_version=\"%s\"", str5));
        this.logger.verbose("authorizationHeader: %s", string5);
        return string5;
    }

    private DataOutputStream configConnectionForGET(HttpsURLConnection httpsURLConnection) throws ProtocolException {
        httpsURLConnection.setRequestMethod("GET");
        return null;
    }

    private DataOutputStream configConnectionForPOST(HttpsURLConnection httpsURLConnection, Map<String, String> map, Map<String, String> map2) throws IOException {
        httpsURLConnection.setRequestMethod("POST");
        httpsURLConnection.setUseCaches(false);
        httpsURLConnection.setDoInput(true);
        httpsURLConnection.setDoOutput(true);
        String strGeneratePOSTBodyString = generatePOSTBodyString(map, map2);
        if (strGeneratePOSTBodyString == null) {
            return null;
        }
        DataOutputStream dataOutputStream = new DataOutputStream(httpsURLConnection.getOutputStream());
        dataOutputStream.writeBytes(strGeneratePOSTBodyString);
        return dataOutputStream;
    }

    private String errorMessage(Throwable th, String str, ActivityPackage activityPackage) {
        return Util.formatString("%s. (%s)", activityPackage.getFailureMessage(), Util.getReasonString(str, th));
    }

    private static String extractAlgorithm(Map<String, String> map) {
        return map.remove("algorithm");
    }

    private static String extractAppSecret(Map<String, String> map) {
        return map.remove("app_secret");
    }

    private static void extractEventCallbackId(Map<String, String> map) {
        map.remove("event_callback_id");
    }

    private static String extractHeadersId(Map<String, String> map) {
        return map.remove("headers_id");
    }

    private static String extractNativeVersion(Map<String, String> map) {
        return map.remove("native_version");
    }

    private static String extractSecretId(Map<String, String> map) {
        return map.remove("secret_id");
    }

    private static String extractSignature(Map<String, String> map) {
        return map.remove("signature");
    }

    private String generatePOSTBodyString(Map<String, String> map, Map<String, String> map2) throws UnsupportedEncodingException {
        if (map.isEmpty()) {
            return null;
        }
        StringBuilder sb = new StringBuilder();
        injectParametersToPOSTStringBuilder(map, sb);
        injectParametersToPOSTStringBuilder(map2, sb);
        if (sb.length() > 0 && sb.charAt(sb.length() - 1) == '&') {
            sb.deleteCharAt(sb.length() - 1);
        }
        return sb.toString();
    }

    private String generateUrlStringForGET(ActivityKind activityKind, String str, Map<String, String> map, Map<String, String> map2) {
        URL url = new URL(urlWithExtraPathByActivityKind(activityKind, this.urlStrategy.targetUrlByActivityKind(activityKind)));
        Uri.Builder builder = new Uri.Builder();
        builder.scheme(url.getProtocol());
        builder.encodedAuthority(url.getAuthority());
        builder.path(url.getPath());
        builder.appendPath(str);
        this.logger.debug("Making request to url: %s", builder.toString());
        for (Map.Entry<String, String> entry : map.entrySet()) {
            builder.appendQueryParameter(entry.getKey(), entry.getValue());
        }
        if (map2 != null) {
            for (Map.Entry<String, String> entry2 : map2.entrySet()) {
                builder.appendQueryParameter(entry2.getKey(), entry2.getValue());
            }
        }
        return builder.build().toString();
    }

    private String generateUrlStringForPOST(ActivityKind activityKind, String str) {
        String string = Util.formatString("%s%s", urlWithExtraPathByActivityKind(activityKind, this.urlStrategy.targetUrlByActivityKind(activityKind)), str);
        this.logger.debug("Making request to url : %s", string);
        return string;
    }

    private Map<String, String> getSignature(Map<String, String> map, String str, String str2) {
        String str3 = map.get("created_at");
        String validIdentifier = getValidIdentifier(map);
        String str4 = map.get(validIdentifier);
        String str5 = map.get("source");
        String str6 = map.get("payload");
        HashMap map2 = new HashMap();
        map2.put("app_secret", str2);
        map2.put("created_at", str3);
        map2.put("activity_kind", str);
        map2.put(validIdentifier, str4);
        if (str5 != null) {
            map2.put("source", str5);
        }
        if (str6 != null) {
            map2.put("payload", str6);
        }
        String str7 = "";
        String str8 = "";
        for (Map.Entry entry : map2.entrySet()) {
            if (entry.getValue() != null) {
                str7 = str7 + ((String) entry.getKey()) + " ";
                str8 = str8 + ((String) entry.getValue());
            }
        }
        String strSubstring = str7.substring(0, str7.length() - 1);
        HashMap map3 = new HashMap();
        map3.put("clear_signature", str8);
        map3.put("fields", strSubstring);
        return map3;
    }

    private String getValidIdentifier(Map<String, String> map) {
        if (map.get("gps_adid") != null) {
            return "gps_adid";
        }
        if (map.get("fire_adid") != null) {
            return "fire_adid";
        }
        if (map.get("android_id") != null) {
            return "android_id";
        }
        if (map.get("android_uuid") != null) {
            return "android_uuid";
        }
        return null;
    }

    private void injectParametersToPOSTStringBuilder(Map<String, String> map, StringBuilder sb) throws UnsupportedEncodingException {
        if (map == null || map.isEmpty()) {
            return;
        }
        for (Map.Entry<String, String> entry : map.entrySet()) {
            String strEncode = URLEncoder.encode(entry.getKey(), Constants.ENCODING);
            String value = entry.getValue();
            String strEncode2 = value != null ? URLEncoder.encode(value, Constants.ENCODING) : "";
            sb.append(strEncode);
            sb.append("=");
            sb.append(strEncode2);
            sb.append("&");
        }
    }

    private void localError(Throwable th, String str, ResponseData responseData) {
        String strErrorMessage = errorMessage(th, str, responseData.activityPackage);
        this.logger.error(strErrorMessage, new Object[0]);
        responseData.message = strErrorMessage;
        responseData.willRetry = false;
    }

    private void parseResponse(ResponseData responseData, String str) {
        JSONObject jSONObject;
        if (str.length() == 0) {
            this.logger.error("Empty response string", new Object[0]);
            return;
        }
        try {
            jSONObject = new JSONObject(str);
        } catch (JSONException e) {
            this.logger.error(errorMessage(e, "Failed to parse JSON response", responseData.activityPackage), new Object[0]);
            jSONObject = null;
        }
        if (jSONObject == null) {
            return;
        }
        responseData.jsonResponse = jSONObject;
        responseData.message = UtilNetworking.extractJsonString(jSONObject, "message");
        responseData.adid = UtilNetworking.extractJsonString(jSONObject, "adid");
        responseData.timestamp = UtilNetworking.extractJsonString(jSONObject, "timestamp");
        String strExtractJsonString = UtilNetworking.extractJsonString(jSONObject, "tracking_state");
        if (strExtractJsonString != null && strExtractJsonString.equals("opted_out")) {
            responseData.trackingState = TrackingState.OPTED_OUT;
        }
        responseData.askIn = UtilNetworking.extractJsonLong(jSONObject, "ask_in");
        responseData.retryIn = UtilNetworking.extractJsonLong(jSONObject, "retry_in");
        responseData.continueIn = UtilNetworking.extractJsonLong(jSONObject, "continue_in");
        responseData.attribution = AdjustAttribution.fromJson(jSONObject.optJSONObject("attribution"), responseData.adid, Util.getSdkPrefixPlatform(this.clientSdk));
    }

    private void remoteError(Throwable th, String str, ResponseData responseData) {
        String str2 = errorMessage(th, str, responseData.activityPackage) + " Will retry later";
        this.logger.error(str2, new Object[0]);
        responseData.message = str2;
        responseData.willRetry = true;
    }

    private boolean shouldRetryToSend(ResponseData responseData) {
        if (!responseData.willRetry) {
            this.logger.debug("Will not retry with current url strategy", new Object[0]);
            this.urlStrategy.resetAfterSuccess();
            return false;
        }
        boolean zShouldRetryAfterFailure = this.urlStrategy.shouldRetryAfterFailure(responseData.activityKind);
        ILogger iLogger = this.logger;
        if (zShouldRetryAfterFailure) {
            iLogger.error("Failed with current url strategy, but it will retry with new", new Object[0]);
            return true;
        }
        iLogger.error("Failed with current url strategy and it will not retry", new Object[0]);
        return false;
    }

    private void tryToGetResponse(ResponseData responseData) {
        String strGenerateUrlStringForPOST;
        DataOutputStream dataOutputStreamConfigConnectionForPOST = null;
        try {
            ActivityPackage activityPackage = responseData.activityPackage;
            HashMap map = new HashMap(activityPackage.getParameters());
            Map<String, String> map2 = responseData.sendingParameters;
            String strBuildAndExtractAuthorizationHeader = buildAndExtractAuthorizationHeader(map, activityPackage.getActivityKind());
            boolean z = true;
            boolean z2 = responseData.activityPackage.getActivityKind() == ActivityKind.ATTRIBUTION;
            if (z2) {
                extractEventCallbackId(map);
                strGenerateUrlStringForPOST = generateUrlStringForGET(activityPackage.getActivityKind(), activityPackage.getPath(), map, map2);
            } else {
                strGenerateUrlStringForPOST = generateUrlStringForPOST(activityPackage.getActivityKind(), activityPackage.getPath());
            }
            HttpsURLConnection httpsURLConnectionGenerateHttpsURLConnection = this.httpsURLConnectionProvider.generateHttpsURLConnection(new URL(strGenerateUrlStringForPOST));
            this.connectionOptions.applyConnectionOptions(httpsURLConnectionGenerateHttpsURLConnection, activityPackage.getClientSdk());
            if (strBuildAndExtractAuthorizationHeader != null) {
                httpsURLConnectionGenerateHttpsURLConnection.setRequestProperty("Authorization", strBuildAndExtractAuthorizationHeader);
            }
            if (z2) {
                dataOutputStreamConfigConnectionForPOST = configConnectionForGET(httpsURLConnectionGenerateHttpsURLConnection);
            } else {
                extractEventCallbackId(map);
                dataOutputStreamConfigConnectionForPOST = configConnectionForPOST(httpsURLConnectionGenerateHttpsURLConnection, map, map2);
            }
            Integer connectionResponse = readConnectionResponse(httpsURLConnectionGenerateHttpsURLConnection, responseData);
            responseData.success = responseData.jsonResponse != null && responseData.retryIn == null && connectionResponse != null && connectionResponse.intValue() == 200;
            if (responseData.jsonResponse != null && responseData.retryIn == null) {
                z = false;
            }
            responseData.willRetry = z;
            if (dataOutputStreamConfigConnectionForPOST != null) {
                try {
                } catch (IOException e) {
                    this.logger.error(errorMessage(e, "Flushing and closing connection output stream", responseData.activityPackage), new Object[0]);
                }
            }
        } catch (UnsupportedEncodingException e2) {
            localError(e2, "Failed to encode parameters", responseData);
            if (dataOutputStreamConfigConnectionForPOST != null) {
                try {
                } catch (IOException e3) {
                    this.logger.error(errorMessage(e3, "Flushing and closing connection output stream", responseData.activityPackage), new Object[0]);
                }
            }
        } catch (SSLHandshakeException e4) {
            remoteError(e4, "Certificate failed", responseData);
            if (dataOutputStreamConfigConnectionForPOST != null) {
                try {
                } catch (IOException e5) {
                    this.logger.error(errorMessage(e5, "Flushing and closing connection output stream", responseData.activityPackage), new Object[0]);
                }
            }
        } catch (SocketTimeoutException e6) {
            remoteError(e6, "Request timed out", responseData);
            if (dataOutputStreamConfigConnectionForPOST != null) {
                try {
                } catch (IOException e7) {
                    this.logger.error(errorMessage(e7, "Flushing and closing connection output stream", responseData.activityPackage), new Object[0]);
                }
            }
        } catch (ProtocolException e8) {
            localError(e8, "Protocol Error", responseData);
            if (dataOutputStreamConfigConnectionForPOST != null) {
                try {
                } catch (IOException e9) {
                    this.logger.error(errorMessage(e9, "Flushing and closing connection output stream", responseData.activityPackage), new Object[0]);
                }
            }
        } catch (MalformedURLException e10) {
            localError(e10, "Malformed URL", responseData);
            if (dataOutputStreamConfigConnectionForPOST != null) {
                try {
                } catch (IOException e11) {
                    this.logger.error(errorMessage(e11, "Flushing and closing connection output stream", responseData.activityPackage), new Object[0]);
                }
            }
        } catch (IOException e12) {
            remoteError(e12, "Request failed", responseData);
            if (dataOutputStreamConfigConnectionForPOST != null) {
                try {
                } catch (IOException e13) {
                    this.logger.error(errorMessage(e13, "Flushing and closing connection output stream", responseData.activityPackage), new Object[0]);
                }
            }
        } catch (Throwable th) {
            localError(th, "Sending SDK package", responseData);
            if (dataOutputStreamConfigConnectionForPOST != null) {
                try {
                } catch (IOException e14) {
                    this.logger.error(errorMessage(e14, "Flushing and closing connection output stream", responseData.activityPackage), new Object[0]);
                }
            }
        } finally {
            if (dataOutputStreamConfigConnectionForPOST != null) {
                try {
                    dataOutputStreamConfigConnectionForPOST.flush();
                    dataOutputStreamConfigConnectionForPOST.close();
                } catch (IOException e15) {
                    this.logger.error(errorMessage(e15, "Flushing and closing connection output stream", responseData.activityPackage), new Object[0]);
                }
            }
        }
    }

    private String urlWithExtraPathByActivityKind(ActivityKind activityKind, String str) {
        if (activityKind == ActivityKind.GDPR) {
            return this.gdprPath != null ? str + this.gdprPath : str;
        }
        if (activityKind == ActivityKind.SUBSCRIPTION) {
            return this.subscriptionPath != null ? str + this.subscriptionPath : str;
        }
        return this.basePath != null ? str + this.basePath : str;
    }

    /* JADX WARN: Code duplicated, block: B:20:0x0054  */
    /* JADX WARN: Code duplicated, block: B:22:0x005e  */
    /* JADX WARN: Code duplicated, block: B:24:0x0066  */
    /* JADX WARN: Code duplicated, block: B:26:0x0070  */
    /* JADX WARN: Code duplicated, block: B:28:0x0086 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:29:0x0087  */
    /* JADX WARN: Code duplicated, block: B:31:0x0097  */
    /* JADX WARN: Code duplicated, block: B:32:0x009b  */
    public Integer readConnectionResponse(HttpsURLConnection httpsURLConnection, ResponseData responseData) {
        String str;
        int iIntValue;
        ILogger iLogger;
        Object[] objArr;
        StringBuilder sb = new StringBuilder();
        Integer numValueOf = null;
        try {
            try {
                httpsURLConnection.connect();
                numValueOf = Integer.valueOf(httpsURLConnection.getResponseCode());
                BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(numValueOf.intValue() >= 400 ? httpsURLConnection.getErrorStream() : httpsURLConnection.getInputStream()));
                while (true) {
                    String line = bufferedReader.readLine();
                    if (line == null) {
                        break;
                    }
                    sb.append(line);
                }
            } catch (IOException e) {
                this.logger.error(errorMessage(e, "Connecting and reading response", responseData.activityPackage), new Object[0]);
                if (httpsURLConnection != null) {
                    break;
                }
                if (sb.length() == 0) {
                    this.logger.error("Empty response string buffer", new Object[0]);
                    return numValueOf;
                }
                if (numValueOf.intValue() == 429) {
                    this.logger.error("Too frequent requests to the endpoint (429)", new Object[0]);
                    return numValueOf;
                }
                String string = sb.toString();
                this.logger.debug("Response string: %s", string);
                parseResponse(responseData, string);
                str = responseData.message;
                if (str == null) {
                    return numValueOf;
                }
                iIntValue = numValueOf.intValue();
                iLogger = this.logger;
                objArr = new Object[]{str};
                if (iIntValue == 200) {
                    iLogger.info("Response message: %s", objArr);
                } else {
                    iLogger.error("Response message: %s", objArr);
                }
                return numValueOf;
            }
            httpsURLConnection.disconnect();
            if (sb.length() == 0) {
                this.logger.error("Empty response string buffer", new Object[0]);
                return numValueOf;
            }
            if (numValueOf.intValue() == 429) {
                this.logger.error("Too frequent requests to the endpoint (429)", new Object[0]);
                return numValueOf;
            }
            String string2 = sb.toString();
            this.logger.debug("Response string: %s", string2);
            parseResponse(responseData, string2);
            str = responseData.message;
            if (str == null) {
                return numValueOf;
            }
            iIntValue = numValueOf.intValue();
            iLogger = this.logger;
            objArr = new Object[]{str};
            if (iIntValue == 200) {
                iLogger.info("Response message: %s", objArr);
            } else {
                iLogger.error("Response message: %s", objArr);
            }
            return numValueOf;
        } catch (Throwable th) {
            if (httpsURLConnection != null) {
                httpsURLConnection.disconnect();
            }
            throw th;
        }
    }

    @Override // com.adjust.sdk.network.IActivityPackageSender
    public void sendActivityPackage(ActivityPackage activityPackage, Map<String, String> map, IActivityPackageSender.ResponseDataCallbackSubscriber responseDataCallbackSubscriber) {
        this.executor.submit(new a(responseDataCallbackSubscriber, activityPackage, map));
    }

    @Override // com.adjust.sdk.network.IActivityPackageSender
    public ResponseData sendActivityPackageSync(ActivityPackage activityPackage, Map<String, String> map) {
        ResponseData responseDataBuildResponseData;
        do {
            responseDataBuildResponseData = ResponseData.buildResponseData(activityPackage, map);
            tryToGetResponse(responseDataBuildResponseData);
        } while (shouldRetryToSend(responseDataBuildResponseData));
        return responseDataBuildResponseData;
    }
}
