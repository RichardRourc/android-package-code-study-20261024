package com.gpk17.gbrowser.Utils.webview;

import android.content.Intent;
import android.graphics.Bitmap;
import android.net.Uri;
import android.net.http.SslError;
import android.os.Bundle;
import android.os.Handler;
import android.util.Log;
import android.webkit.ClientCertRequest;
import android.webkit.HttpAuthHandler;
import android.webkit.SslErrorHandler;
import android.webkit.ValueCallback;
import android.webkit.WebResourceError;
import android.webkit.WebResourceRequest;
import android.webkit.WebResourceResponse;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.FrameLayout;
import android.widget.Toast;
import com.du23u3077548.R;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.gpk17.gbrowser.BuildConfig;
import com.gpk17.gbrowser.Utils.Utils;
import com.gpk17.gbrowser.activities.GbrowserActivity;
import java.util.Arrays;
import java.util.Objects;
import java.util.function.Predicate;
import java.util.stream.Stream;

/* JADX INFO: loaded from: classes.dex */
public class AppWebViewClient extends WebViewClient {
    private static final String TAG = "AppWebViewClient";
    private GbrowserActivity appBrowserActivity;
    private boolean hasReceivedError = false;
    private boolean isLoginStatus = false;
    private String loginInfoTemp = "";
    private String currentUrl = "";

    public AppWebViewClient(GbrowserActivity gbrowserActivity) {
        this.appBrowserActivity = gbrowserActivity;
    }

    @Override // android.webkit.WebViewClient
    public boolean shouldOverrideUrlLoading(WebView webView, WebResourceRequest webResourceRequest) {
        return checkShouldOverrideUrlLoadingUrl(webResourceRequest.getUrl().toString(), webView);
    }

    @Override // android.webkit.WebViewClient
    public WebResourceResponse shouldInterceptRequest(WebView webView, WebResourceRequest webResourceRequest) {
        Log.i(TAG, "" + webResourceRequest.getRequestHeaders());
        return null;
    }

    @Override // android.webkit.WebViewClient
    public void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        super.onPageStarted(webView, str, bitmap);
        Log.d(TAG, "onPagedStarted: " + str);
        if (this.appBrowserActivity.isHasDoOnCreateStage()) {
            ((FrameLayout) this.appBrowserActivity.findViewById(R.id.loading_panel)).setVisibility(0);
        }
        this.hasReceivedError = false;
    }

    @Override // android.webkit.WebViewClient
    public void onPageFinished(WebView webView, String str) {
        super.onPageFinished(webView, str);
        String str2 = TAG;
        Log.d(str2, "onPageFinished: " + str);
        this.appBrowserActivity.getHandler().removeCallbacks(this.appBrowserActivity.getLoadUrlTimeoutR());
        if (!this.appBrowserActivity.isHasDoOnCreateStage() && !this.hasReceivedError) {
            this.appBrowserActivity.getHandler().postDelayed(this.appBrowserActivity.getInvisibleLoadingScreenR(), 500L);
        }
        if (!this.hasReceivedError) {
            if (this.appBrowserActivity.isHasDoOnCreateStage()) {
                if (this.appBrowserActivity.getViewHolder().getFlHolder().getChildCount() > 1 && this.appBrowserActivity.getRequestedOrientation() != -1) {
                    this.appBrowserActivity.setRequestedOrientation(-1);
                }
            } else {
                this.appBrowserActivity.getHandler().postDelayed(this.appBrowserActivity.getInvisibleLoadingScreenR(), 500L);
            }
        }
        try {
            Log.d(str2, "onPageFinished getUrl: " + webView.getUrl());
            Log.d(str2, "onPageFinished getOriginalUrl: " + webView.getOriginalUrl());
            if (webView.getUrl().endsWith("/Login") || webView.getUrl().endsWith("/login") || webView.getUrl().endsWith("/Switchbag?pageKind=login") || webView.getUrl().endsWith("/Account")) {
                this.isLoginStatus = true;
                String input = this.appBrowserActivity.getKeyStoreSpUtil().getInput();
                Log.d(str2, "onPageFinished encryptLoginInfoData: " + input);
                Log.d(str2, "onPageFinished isLoginStatus: " + this.isLoginStatus);
                if (!input.isEmpty()) {
                    String strDecrypt = this.appBrowserActivity.getKeyStoreUtil().decrypt(input);
                    Log.d(str2, "onPageFinished do evaluateJavascript with: " + strDecrypt);
                    final String[] strArrSplit = strDecrypt.split("\\|");
                    if (strArrSplit.length > 1) {
                        new Handler().postDelayed(new Runnable() { // from class: com.gpk17.gbrowser.Utils.webview.AppWebViewClient.1
                            @Override // java.lang.Runnable
                            public void run() {
                                AppWebViewClient.this.appBrowserActivity.getViewHolder().getWebView().evaluateJavascript("javascript:(function(){var account_input = angular.element(document.getElementById('login_account'));var account_model = account_input.controller('ngModel');account_model.$setViewValue('" + strArrSplit[0] + "');account_model.$render();var pw_input = angular.element(document.getElementById('login_password'));var pw_model = pw_input.controller('ngModel');pw_model.$setViewValue('" + strArrSplit[1] + "');pw_model.$render();return document.getElementById('login_account').value + '|' + document.getElementById('login_password').value})()", new ValueCallback<String>() { // from class: com.gpk17.gbrowser.Utils.webview.AppWebViewClient.1.1
                                    @Override // android.webkit.ValueCallback
                                    public void onReceiveValue(String str3) {
                                        Log.d(AppWebViewClient.TAG, "onPageFinished do evaluateJavascript onReceiveValue: " + str3);
                                    }
                                });
                            }
                        }, 300L);
                    }
                }
            } else if (str.contains(this.appBrowserActivity.getProjectInfo().getHomeUrl()) && this.isLoginStatus) {
                String input2 = this.appBrowserActivity.getKeyStoreSpUtil().getInput();
                String strDecrypt2 = this.appBrowserActivity.getKeyStoreUtil().decrypt(input2);
                if (!this.loginInfoTemp.isEmpty() && (input2.isEmpty() || !strDecrypt2.equals(this.loginInfoTemp))) {
                    this.appBrowserActivity.getViewHolder().showSaveLoginInfoDialog(this.loginInfoTemp);
                }
                this.isLoginStatus = false;
            }
        } catch (Exception e) {
            Log.d(TAG, "onPageFinished check url failed, Exception: " + Utils.printStackTrace(e));
        }
        this.currentUrl = str;
        Bundle bundle = new Bundle();
        bundle.putString(FirebaseAnalytics.Param.ITEM_ID, BuildConfig.APPLICATION_ID);
        bundle.putString(FirebaseAnalytics.Param.ITEM_NAME, BuildConfig.PROJECT_NAME);
        if (str.length() > 90) {
            str = str.substring(0, 90);
        }
        bundle.putString("URL", str);
        this.appBrowserActivity.getFireBaseAnalytics().logEvent(FirebaseAnalytics.Event.SELECT_CONTENT, bundle);
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedError(WebView webView, WebResourceRequest webResourceRequest, WebResourceError webResourceError) {
        onReceivedErrorResponse(webResourceError.getErrorCode(), webResourceError.getDescription().toString(), webResourceRequest.getUrl().toString());
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedHttpError(WebView webView, WebResourceRequest webResourceRequest, WebResourceResponse webResourceResponse) {
        onReceivedErrorResponse(webResourceResponse.getStatusCode(), webResourceResponse.getReasonPhrase(), webResourceRequest.getUrl().toString());
    }

    @Override // android.webkit.WebViewClient
    public void doUpdateVisitedHistory(WebView webView, String str, boolean z) {
        super.doUpdateVisitedHistory(webView, str, z);
        String str2 = TAG;
        Log.d(str2, "doUpdateVisitedHistory >>>Begin<<<");
        Log.d(str2, String.format("url:%s, isReload:%b interestedUrl:%b", str, Boolean.valueOf(z), Boolean.valueOf(Utils.matchInterestedUrl(str))));
        if (this.appBrowserActivity.isHasDoOnCreateStage()) {
            ((FrameLayout) this.appBrowserActivity.findViewById(R.id.loading_panel)).setVisibility(8);
        }
        Log.d(str2, "doUpdateVisitedHistory <<<End>>>");
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
        sslErrorHandler.proceed();
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedClientCertRequest(WebView webView, ClientCertRequest clientCertRequest) {
        super.onReceivedClientCertRequest(webView, clientCertRequest);
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedHttpAuthRequest(WebView webView, HttpAuthHandler httpAuthHandler, String str, String str2) {
        super.onReceivedHttpAuthRequest(webView, httpAuthHandler, str, str2);
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedLoginRequest(WebView webView, String str, String str2, String str3) {
        super.onReceivedLoginRequest(webView, str, str2, str3);
    }

    private boolean checkShouldOverrideUrlLoadingUrl(final String str, final WebView webView) {
        Log.d(TAG, "checkShouldOverrideUrlLoadingUrl: " + str);
        try {
            if (!str.startsWith("http")) {
                this.appBrowserActivity.startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str)));
                webView.post(new Runnable() { // from class: com.gpk17.gbrowser.Utils.webview.AppWebViewClient$$ExternalSyntheticLambda0
                    @Override // java.lang.Runnable
                    public final void run() {
                        webView.loadUrl("about:blank");
                    }
                });
                return true;
            }
            Stream stream = Arrays.stream(Utils.getMediaUrl());
            Objects.requireNonNull(str);
            if (stream.anyMatch(new Predicate() { // from class: com.gpk17.gbrowser.Utils.webview.AppWebViewClient$$ExternalSyntheticLambda1
                @Override // java.util.function.Predicate
                public final boolean test(Object obj) {
                    return str.contains((String) obj);
                }
            })) {
                this.appBrowserActivity.startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str)));
                return false;
            }
            if (str.contains(this.appBrowserActivity.getProjectInfo().getHomeUrl()) && this.isLoginStatus) {
                this.appBrowserActivity.getViewHolder().getWebView().evaluateJavascript("javascript:(function(){return document.getElementById('login_account').value + '|' + document.getElementById('login_password').value})()", new ValueCallback<String>() { // from class: com.gpk17.gbrowser.Utils.webview.AppWebViewClient.2
                    @Override // android.webkit.ValueCallback
                    public void onReceiveValue(String str2) {
                        AppWebViewClient.this.loginInfoTemp = str2.replace("\"", "");
                        Log.d(AppWebViewClient.TAG, "showSaveLoginInfoDialog do evaluateJavascript onReceiveValue: " + AppWebViewClient.this.loginInfoTemp);
                    }
                });
            }
            return false;
        } catch (Exception unused) {
            Toast.makeText(this.appBrowserActivity, "Not install App", 1).show();
            webView.post(new Runnable() { // from class: com.gpk17.gbrowser.Utils.webview.AppWebViewClient$$ExternalSyntheticLambda2
                @Override // java.lang.Runnable
                public final void run() {
                    webView.loadUrl("file:///android_asset/empty.html");
                }
            });
            return true;
        }
    }

    private void onReceivedErrorResponse(int i, String str, String str2) {
        Log.d(TAG, String.format("onReceivedErrorResponse(%d, %s, %s) ", Integer.valueOf(i), str, str2));
        if (Utils.matchInterestedUrl(str2)) {
            this.appBrowserActivity.getHandler().removeCallbacks(this.appBrowserActivity.getLoadUrlTimeoutR());
        }
    }

    public String getCurrentUrl() {
        return this.currentUrl;
    }
}
