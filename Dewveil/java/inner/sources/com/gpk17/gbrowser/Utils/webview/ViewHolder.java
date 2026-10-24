package com.gpk17.gbrowser.Utils.webview;

import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.CookieManager;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.widget.Button;
import android.widget.FrameLayout;
import android.widget.ProgressBar;
import android.widget.TextView;
import androidx.appcompat.app.AlertDialog;
import com.adjust.sdk.webbridge.AdjustBridge;
import com.du23u3077548.R;
import com.google.android.gms.common.internal.ImagesContract;
import com.gpk17.gbrowser.BuildConfig;
import com.gpk17.gbrowser.Utils.Utils;
import com.gpk17.gbrowser.activities.GbrowserActivity;
import com.gpk17.gbrowser.misc.MovableFloatingActionButton;
import com.gpk17.gbrowser.misc.MovableFloatingActionSubButton;
import java.util.HashMap;
import java.util.Locale;
import kotlin.time.DurationKt;

/* JADX INFO: loaded from: classes.dex */
public class ViewHolder {
    private static final String TAG = "ViewHolder";
    private GbrowserActivity appBrowserActivity;
    private MovableFloatingActionButton fab;
    private MovableFloatingActionSubButton fabClearUser;
    private MovableFloatingActionSubButton fabHome;
    private MovableFloatingActionSubButton fabInfo;
    private MovableFloatingActionSubButton fabService;
    private MovableFloatingActionSubButton fabVolume;
    private FrameLayout flHolder;
    private HashMap<String, String> headers;
    private ProgressBar loadingProgressBar;
    private AppWebViewClient myWebViewClient;
    private int reloadTime = 0;
    private WebView wv;

    public ViewHolder(GbrowserActivity gbrowserActivity) {
        Log.d(TAG, "Create ViewHolder.");
        this.appBrowserActivity = gbrowserActivity;
        bindViews();
        bindEvents();
        setAttrs();
        initHeaders();
        initWebView(this.wv, true);
    }

    private void bindViews() {
        if (this.appBrowserActivity.getCtx().getResources().getBoolean(R.bool.is_loading_gif)) {
            this.loadingProgressBar = (ProgressBar) this.appBrowserActivity.findViewById(R.id.loading_progress_bar_gif);
        } else {
            this.loadingProgressBar = (ProgressBar) this.appBrowserActivity.findViewById(R.id.loading_progress_bar);
        }
        MovableFloatingActionButton movableFloatingActionButton = (MovableFloatingActionButton) this.appBrowserActivity.findViewById(R.id.moveable_fab);
        this.fab = movableFloatingActionButton;
        movableFloatingActionButton.setImageResource(R.mipmap.fab_main);
        MovableFloatingActionSubButton movableFloatingActionSubButton = (MovableFloatingActionSubButton) this.appBrowserActivity.findViewById(R.id.fab_home);
        this.fabHome = movableFloatingActionSubButton;
        movableFloatingActionSubButton.setImageResource(R.drawable.home_24px);
        this.fabHome.setSize(1);
        MovableFloatingActionSubButton movableFloatingActionSubButton2 = (MovableFloatingActionSubButton) this.appBrowserActivity.findViewById(R.id.fab_info);
        this.fabInfo = movableFloatingActionSubButton2;
        movableFloatingActionSubButton2.setImageResource(R.drawable.info_24px);
        this.fabInfo.setSize(1);
        MovableFloatingActionSubButton movableFloatingActionSubButton3 = (MovableFloatingActionSubButton) this.appBrowserActivity.findViewById(R.id.fab_volume);
        this.fabVolume = movableFloatingActionSubButton3;
        movableFloatingActionSubButton3.setImageResource(R.drawable.volume_up_24px);
        this.fabVolume.setSize(1);
        MovableFloatingActionSubButton movableFloatingActionSubButton4 = (MovableFloatingActionSubButton) this.appBrowserActivity.findViewById(R.id.fab_service);
        this.fabService = movableFloatingActionSubButton4;
        movableFloatingActionSubButton4.setImageResource(R.mipmap.service);
        this.fabService.setSize(1);
        this.flHolder = (FrameLayout) this.appBrowserActivity.findViewById(R.id.fl_holder);
        this.wv = (WebView) this.appBrowserActivity.findViewById(R.id.webview);
    }

    public void resetFabXY() {
        boolean z;
        View view = (View) this.fab.getParent();
        int width = view.getWidth();
        int height = view.getHeight();
        float x = this.fab.getX();
        float y = this.fab.getY();
        float width2 = width - this.fab.getWidth();
        float height2 = height - this.fab.getHeight();
        boolean z2 = true;
        if (x > width2 || x < 0.0f) {
            x = width2;
            z = true;
        } else {
            z = false;
        }
        if (y > height2 || y < 0.0f) {
            y = height2;
        } else {
            z2 = z;
        }
        if (z2) {
            this.fab.animate().x(x).y(y).setDuration(0L).start();
            this.fab.setSubItemsXY(x, y);
        }
    }

    private void bindEvents() {
        View.OnClickListener onClickListener = new View.OnClickListener() { // from class: com.gpk17.gbrowser.Utils.webview.ViewHolder.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                switch (view.getId()) {
                    case R.id.fab_home /* 2131296403 */:
                        ViewHolder.this.goHome();
                        break;
                    case R.id.fab_info /* 2131296404 */:
                        ViewHolder.this.showAboutUsDialog();
                        break;
                    case R.id.fab_service /* 2131296405 */:
                        Log.e(ImagesContract.URL, ViewHolder.this.appBrowserActivity.getProjectInfo().getCustomerServiceUrl());
                        ViewHolder.this.getLastWebView().loadUrl(ViewHolder.this.appBrowserActivity.getProjectInfo().getCustomerServiceUrl());
                        break;
                    case R.id.fab_volume /* 2131296406 */:
                        if (ViewHolder.this.appBrowserActivity.getAppMediaPlayer() != null) {
                            if (!ViewHolder.this.appBrowserActivity.getAppMediaPlayer().isPlaying()) {
                                ViewHolder.this.appBrowserActivity.setMuteVolume(false);
                                ViewHolder.this.appBrowserActivity.getAppMediaPlayer().start();
                                ViewHolder.this.fabVolume.setImageResource(R.drawable.volume_up_24px);
                            } else {
                                ViewHolder.this.appBrowserActivity.setMuteVolume(true);
                                ViewHolder.this.appBrowserActivity.getAppMediaPlayer().pause();
                                ViewHolder.this.fabVolume.setImageResource(R.drawable.volume_off_24px);
                            }
                        }
                        break;
                }
                ViewHolder.this.fab.closeFabSubItems();
            }
        };
        this.fabHome.setOnClickListener(onClickListener);
        this.fabInfo.setOnClickListener(onClickListener);
        this.fabVolume.setOnClickListener(onClickListener);
        this.fabService.setOnClickListener(onClickListener);
        this.wv.setOnTouchListener(new View.OnTouchListener() { // from class: com.gpk17.gbrowser.Utils.webview.ViewHolder.2
            @Override // android.view.View.OnTouchListener
            public boolean onTouch(View view, MotionEvent motionEvent) {
                return false;
            }
        });
    }

    private void initHeaders() {
        HashMap<String, String> map = new HashMap<>();
        this.headers = map;
        map.put("Accept", "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8");
        this.headers.put("Accept-Encoding", "gzip, deflate, br");
        this.headers.put("Cache-Control", "max-age=0");
        this.headers.put("Connection", "keep-alive");
        this.headers.put("Upgrade-Insecure-Requests", "1");
        this.headers.put("Cookie", "resolution=1024x768;");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void clearCache() {
        this.appBrowserActivity.runOnUiThread(new Runnable() { // from class: com.gpk17.gbrowser.Utils.webview.ViewHolder.3
            @Override // java.lang.Runnable
            public void run() {
                ViewHolder.this.wv.clearCache(true);
            }
        });
        this.appBrowserActivity.queryProjectInfo(true);
        if (this.appBrowserActivity.getAppMediaPlayer() != null) {
            this.appBrowserActivity.getAppMediaPlayer().stop();
            this.appBrowserActivity.setAppMediaPlayer(null);
        }
    }

    private void setAttrs() {
        this.fab.addSubItem(this.fabHome);
        this.fab.addSubItem(this.fabInfo);
        this.fab.addSubItem(this.fabVolume);
        this.fab.addSubItem(this.fabService);
    }

    void initWebView(WebView webView, boolean z) {
        if (webView == null) {
            return;
        }
        WebSettings settings = webView.getSettings();
        settings.setJavaScriptEnabled(true);
        settings.setAllowFileAccess(true);
        settings.setCacheMode(-1);
        settings.setDomStorageEnabled(true);
        settings.setDatabaseEnabled(true);
        settings.setDefaultTextEncodingName("utf-8");
        settings.setLoadsImagesAutomatically(true);
        settings.setMixedContentMode(0);
        settings.setJavaScriptCanOpenWindowsAutomatically(true);
        settings.setSupportMultipleWindows(true);
        settings.setNeedInitialFocus(true);
        settings.setUseWideViewPort(true);
        settings.setMediaPlaybackRequiresUserGesture(false);
        settings.setLoadWithOverviewMode(true);
        settings.setBuiltInZoomControls(true);
        settings.setSupportZoom(true);
        settings.setDisplayZoomControls(true);
        settings.setDefaultFontSize(12);
        settings.setDefaultFixedFontSize(12);
        webView.setScrollBarStyle(33554432);
        webView.setVerticalScrollBarEnabled(true);
        webView.setHorizontalScrollBarEnabled(true);
        setCookieManager(webView, z);
        webView.requestFocusFromTouch();
        this.myWebViewClient = new AppWebViewClient(this.appBrowserActivity);
        webView.addJavascriptInterface(new WebAppInterface(this.appBrowserActivity), "AndroidInterface");
        webView.setWebChromeClient(new AppWebChromeClient(this.appBrowserActivity));
        webView.setWebViewClient(this.myWebViewClient);
    }

    private void setCookieManager(WebView webView, boolean z) {
        Log.d(TAG, String.format("setCookieManager(%b)", Boolean.valueOf(z)));
        CookieManager cookieManager = CookieManager.getInstance();
        cookieManager.setAcceptCookie(true);
        cookieManager.setAcceptThirdPartyCookies(webView, true);
    }

    public void goHome() {
        Log.d(TAG, "goHome flHolder.getChildCount(): " + this.flHolder.getChildCount());
        boolean z = this.flHolder.getChildCount() == 1;
        while (this.flHolder.getChildCount() != 1) {
            if (this.flHolder.getChildCount() > 1) {
                WebView lastWebView = getLastWebView();
                this.flHolder.removeView(lastWebView);
                lastWebView.destroy();
                Log.d(TAG, String.format("flHolder.childCount=%d", Integer.valueOf(this.flHolder.getChildCount())));
            }
            if (this.flHolder.getChildCount() <= 0) {
                break;
            }
        }
        if (z) {
            this.appBrowserActivity.setAppOrientation();
            if (this.appBrowserActivity.getProjectInfo() != null && this.appBrowserActivity.getProjectInfo().getHomeUrl() != null) {
                this.appBrowserActivity.getViewHolder().loadPage(this.appBrowserActivity.getProjectInfo().getHomeUrl());
                Log.e("aim", this.appBrowserActivity.getProjectInfo().getHomeUrl());
            }
        }
        if (this.appBrowserActivity.getAppMediaPlayer() != null) {
            this.fab.setSubItemsShow(this.fabVolume, true);
            if (!this.appBrowserActivity.isNotAppMuteVolume() || this.appBrowserActivity.getAppMediaPlayer().isPlaying()) {
                return;
            }
            this.appBrowserActivity.getAppMediaPlayer().start();
        }
    }

    public void loadPage(String str) {
        String str2 = TAG;
        Log.d(str2, String.format("loadPage: %s", str));
        Utils.hideKeyboard(this.appBrowserActivity, str2 + ".loadPage()");
        WebView lastWebView = getLastWebView();
        WebSettings settings = lastWebView.getSettings();
        String str3 = WebSettings.getDefaultUserAgent(this.appBrowserActivity.getCtx()) + " agwv " + this.appBrowserActivity.getProjectInfo().getAdjust();
        Log.d(str2, "userAgent:" + str3);
        settings.setUserAgentString(str3);
        showUpdateVersionDialog();
        AdjustBridge.registerAndGetInstance(this.appBrowserActivity.getApplication(), lastWebView);
        try {
            lastWebView.loadUrl(str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public WebView getLastWebView() {
        View childAt = this.flHolder.getChildAt(this.flHolder.getChildCount() - 1);
        if (childAt instanceof WebView) {
            return (WebView) childAt;
        }
        return null;
    }

    public boolean canGoBack() {
        boolean z;
        Log.d(TAG, "canGoBack >>>Begin<<<");
        do {
            WebView lastWebView = getLastWebView();
            z = true;
            if (lastWebView == null || !lastWebView.canGoBack()) {
                if (this.flHolder.getChildCount() == 1) {
                    break;
                }
                if (this.flHolder.getChildCount() > 1) {
                    WebView lastWebView2 = getLastWebView();
                    this.flHolder.removeView(lastWebView2);
                    lastWebView2.destroy();
                    Log.d(TAG, String.format("flHolder.childCount=%d", Integer.valueOf(this.flHolder.getChildCount())));
                }
            }
            Log.d(TAG, "canGoBack <<<End>>>");
            return z;
        } while (this.flHolder.getChildCount() > 0);
        z = false;
        Log.d(TAG, "canGoBack <<<End>>>");
        return z;
    }

    public void goBack(WebView webView) {
        if (webView == null || !webView.canGoBack()) {
            return;
        }
        this.appBrowserActivity.setAppOrientation();
        goHome();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showAboutUsDialog() {
        if (this.appBrowserActivity.isDestroyed() || this.appBrowserActivity.isFinishing()) {
            return;
        }
        View viewInflate = LayoutInflater.from(this.appBrowserActivity.getCtx()).inflate(R.layout.about_us, (ViewGroup) null);
        String appVersionName = Utils.getAppVersionName(this.appBrowserActivity.getCtx());
        int appVersionCode = Utils.getAppVersionCode(this.appBrowserActivity.getCtx());
        TextView textView = (TextView) viewInflate.findViewById(R.id.tv_version);
        TextView textView2 = (TextView) viewInflate.findViewById(R.id.iiv_hosturl);
        textView.setText(String.format(Locale.getDefault(), "%s(%d)", appVersionName, Integer.valueOf(appVersionCode)));
        textView2.setText(BuildConfig.PROJECT_NAME);
        AlertDialog.Builder builder = new AlertDialog.Builder(this.appBrowserActivity.getCtx(), R.style.MyDialogTheme);
        builder.setView(viewInflate);
        final AlertDialog alertDialogCreate = builder.create();
        alertDialogCreate.show();
        ((Button) viewInflate.findViewById(R.id.clear_bt)).setOnClickListener(new View.OnClickListener() { // from class: com.gpk17.gbrowser.Utils.webview.ViewHolder.4
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                alertDialogCreate.dismiss();
                ViewHolder.this.clearCache();
                ViewHolder.this.goHome();
            }
        });
    }

    public void showUpdateVersionDialog() {
        String versionName = getVersionName(this.appBrowserActivity.getCtx());
        long versionCode = getVersionCode(this.appBrowserActivity.getCtx());
        String str = TAG;
        Log.d(str, "get projectAppVersionCode: " + versionCode);
        if (this.appBrowserActivity.getProjectInfo() == null) {
            return;
        }
        Log.d(str, "SSR");
        String appUpdateUrl = this.appBrowserActivity.getProjectInfo().getAppUpdateUrl();
        String appBuildDate = this.appBrowserActivity.getProjectInfo().getAppBuildDate();
        Boolean bool = false;
        if (appUpdateUrl == "") {
            return;
        }
        Log.d(str, "get projectAppUpdateInfo: " + appUpdateUrl);
        if (appUpdateUrl == null || appUpdateUrl.equals("") || appUpdateUrl.equals("null")) {
            computeVersionCode(versionName, 0);
        }
        String appVersion = this.appBrowserActivity.getProjectInfo().getAppVersion();
        final String appUpdateUrl2 = this.appBrowserActivity.getProjectInfo().getAppUpdateUrl();
        String appUpdateMessage = this.appBrowserActivity.getProjectInfo().getAppUpdateMessage();
        Log.d(str, "get projectAppUpdate andVersion: " + appVersion);
        long jComputeVersionCode = computeVersionCode(appVersion, 0);
        long jComputeVersionCode2 = computeVersionCode(String.valueOf(getVersionName(this.appBrowserActivity.getCtx())), 0);
        Log.d(str, "get projectAppUpdate updateVersionCode: " + jComputeVersionCode);
        if (!appVersion.equals("") && !appUpdateUrl2.equals("") && jComputeVersionCode > jComputeVersionCode2) {
            bool = true;
        }
        if (!appVersion.equals("") && !appUpdateUrl2.equals("") && !appBuildDate.equals("") && jComputeVersionCode == jComputeVersionCode2 && Integer.parseInt(appBuildDate) > Integer.parseInt(BuildConfig.BUILD_DATE)) {
            bool = true;
        }
        if (bool.booleanValue()) {
            View viewInflate = LayoutInflater.from(this.appBrowserActivity.getCtx()).inflate(R.layout.version_update, (ViewGroup) null);
            ((TextView) viewInflate.findViewById(R.id.update_version_msg)).setText(appUpdateMessage);
            AlertDialog.Builder builder = new AlertDialog.Builder(this.appBrowserActivity.getCtx(), R.style.MyDialogTheme);
            builder.setView(viewInflate);
            final AlertDialog alertDialogCreate = builder.create();
            alertDialogCreate.show();
            viewInflate.findViewById(R.id.update_later_bt).setOnClickListener(new View.OnClickListener() { // from class: com.gpk17.gbrowser.Utils.webview.ViewHolder.5
                @Override // android.view.View.OnClickListener
                public void onClick(View view) {
                    alertDialogCreate.dismiss();
                }
            });
            viewInflate.findViewById(R.id.update_now_bt).setOnClickListener(new View.OnClickListener() { // from class: com.gpk17.gbrowser.Utils.webview.ViewHolder.6
                @Override // android.view.View.OnClickListener
                public void onClick(View view) {
                    ViewHolder.this.appBrowserActivity.startActivity(new Intent("android.intent.action.VIEW", Uri.parse(appUpdateUrl2)));
                }
            });
        }
    }

    public void showSaveLoginInfoDialog(final String str) {
        View viewInflate = LayoutInflater.from(this.appBrowserActivity.getCtx()).inflate(R.layout.save_user_login_info, (ViewGroup) null);
        AlertDialog.Builder builder = new AlertDialog.Builder(this.appBrowserActivity.getCtx(), R.style.MyDialogTheme);
        builder.setView(viewInflate);
        final AlertDialog alertDialogCreate = builder.create();
        alertDialogCreate.show();
        viewInflate.findViewById(R.id.save_user_login_info_cancel_bt).setOnClickListener(new View.OnClickListener() { // from class: com.gpk17.gbrowser.Utils.webview.ViewHolder.7
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                alertDialogCreate.dismiss();
            }
        });
        viewInflate.findViewById(R.id.save_user_login_info_confirm_bt).setOnClickListener(new View.OnClickListener() { // from class: com.gpk17.gbrowser.Utils.webview.ViewHolder.8
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                Log.d(ViewHolder.TAG, "showSaveLoginInfoDialog do save: " + str);
                ViewHolder.this.appBrowserActivity.getKeyStoreSpUtil().setInput(ViewHolder.this.appBrowserActivity.getKeyStoreUtil().encrypt(str));
                alertDialogCreate.dismiss();
            }
        });
    }

    public void showDeleteLoginInfoDialog() {
        View viewInflate = LayoutInflater.from(this.appBrowserActivity.getCtx()).inflate(R.layout.delete_user_login_info, (ViewGroup) null);
        AlertDialog.Builder builder = new AlertDialog.Builder(this.appBrowserActivity.getCtx(), R.style.MyDialogTheme);
        builder.setView(viewInflate);
        final AlertDialog alertDialogCreate = builder.create();
        alertDialogCreate.show();
        viewInflate.findViewById(R.id.delete_user_login_info_cancel_bt).setOnClickListener(new View.OnClickListener() { // from class: com.gpk17.gbrowser.Utils.webview.ViewHolder.9
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                alertDialogCreate.dismiss();
            }
        });
        viewInflate.findViewById(R.id.delete_user_login_info_confirm_bt).setOnClickListener(new View.OnClickListener() { // from class: com.gpk17.gbrowser.Utils.webview.ViewHolder.10
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                ViewHolder.this.appBrowserActivity.getKeyStoreSpUtil().setInput("");
                alertDialogCreate.dismiss();
            }
        });
    }

    public void showConnectFailedDialog() {
        View viewInflate = LayoutInflater.from(this.appBrowserActivity.getCtx()).inflate(R.layout.connect_failed, (ViewGroup) null);
        AlertDialog.Builder builder = new AlertDialog.Builder(this.appBrowserActivity.getCtx(), R.style.MyDialogTheme);
        builder.setView(viewInflate);
        builder.setCancelable(false);
        final AlertDialog alertDialogCreate = builder.create();
        alertDialogCreate.show();
        ((Button) viewInflate.findViewById(R.id.try_reload_bt)).setOnClickListener(new View.OnClickListener() { // from class: com.gpk17.gbrowser.Utils.webview.ViewHolder.11
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                alertDialogCreate.dismiss();
                ViewHolder.this.clearCache();
                ViewHolder.this.goHome();
            }
        });
    }

    public String getVersionName(Context context) {
        try {
            return context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionName;
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            return "";
        }
    }

    public long getVersionCode(Context context) {
        try {
            return context.getPackageManager().getPackageInfo(context.getPackageName(), 0).getLongVersionCode();
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            return 0L;
        }
    }

    private long computeVersionCode(String str, int i) {
        String[] strArrSplit = str.split("\\.");
        return (Integer.parseInt(strArrSplit[0]) * DurationKt.NANOS_IN_MILLIS) + (Integer.parseInt(strArrSplit[1]) * 10000) + (Integer.parseInt(strArrSplit[2]) * 100) + i;
    }

    public WebView getWebView() {
        return this.wv;
    }

    public ProgressBar getLoadingProgressBar() {
        return this.loadingProgressBar;
    }

    public FrameLayout getFlHolder() {
        return this.flHolder;
    }

    public MovableFloatingActionButton getFab() {
        return this.fab;
    }

    public MovableFloatingActionSubButton getFabVolume() {
        return this.fabVolume;
    }

    public String getCurrentUrl() {
        return this.myWebViewClient.getCurrentUrl();
    }
}
