package com.gpk17.gbrowser.Utils.webview;

import android.content.ActivityNotFoundException;
import android.content.Intent;
import android.net.Uri;
import android.os.Message;
import android.util.Log;
import android.view.ViewGroup;
import android.webkit.JsResult;
import android.webkit.ValueCallback;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import android.widget.FrameLayout;
import android.widget.Toast;
import com.du23u3077548.R;
import com.gpk17.gbrowser.activities.GbrowserActivity;

/* JADX INFO: loaded from: classes.dex */
public class AppWebChromeClient extends WebChromeClient {
    private static final int FILE_CHOOSER_RESULT_CODE = 5173;
    private static final int FILE_CHOOSER_RESULT_CODE_FOR_ANDROID_5 = 5174;
    private static final String TAG = "AppWebChromeClient";
    private GbrowserActivity appBrowserActivity;

    public AppWebChromeClient(GbrowserActivity gbrowserActivity) {
        this.appBrowserActivity = gbrowserActivity;
    }

    @Override // android.webkit.WebChromeClient
    public void onProgressChanged(WebView webView, int i) {
        if (this.appBrowserActivity.getViewHolder() != null) {
            this.appBrowserActivity.getViewHolder().getLoadingProgressBar().setProgress(i);
        }
    }

    @Override // android.webkit.WebChromeClient
    public boolean onCreateWindow(WebView webView, boolean z, boolean z2, Message message) {
        String str = TAG;
        Log.d(str, String.format("onCreateWindow(%b, %b, %s)  >>>begin<<<", Boolean.valueOf(z), Boolean.valueOf(z2), message.toString()));
        boolean z3 = false;
        if (this.appBrowserActivity.getViewHolder() != null) {
            this.appBrowserActivity.getViewHolder().getFab().closeFabSubItems();
            if (this.appBrowserActivity.getAppMediaPlayer() != null) {
                this.appBrowserActivity.getAppMediaPlayer().pause();
                this.appBrowserActivity.getViewHolder().getFab().setSubItemsShow(this.appBrowserActivity.getViewHolder().getFabVolume(), false);
            }
            WebView webView2 = new WebView(this.appBrowserActivity.getCtx());
            this.appBrowserActivity.getViewHolder().initWebView(webView2, false);
            webView2.setLayoutParams(new ViewGroup.LayoutParams(-1, -1));
            this.appBrowserActivity.getViewHolder().getFlHolder().addView(webView2);
            Log.d(str, String.format("after addView flHolder.childCount=%d", Integer.valueOf(this.appBrowserActivity.getViewHolder().getFlHolder().getChildCount())));
            ((WebView.WebViewTransport) message.obj).setWebView(webView2);
            message.sendToTarget();
            ((FrameLayout) this.appBrowserActivity.findViewById(R.id.loading_panel)).setVisibility(0);
            z3 = true;
        }
        Log.d(str, "onCreateWindow <<<End>>>");
        return z3;
    }

    @Override // android.webkit.WebChromeClient
    public void onCloseWindow(WebView webView) {
        String str = TAG;
        Log.d(str, "onCloseWindow >>>Begin<<<");
        if (this.appBrowserActivity.getViewHolder() != null) {
            Log.d(str, String.format("before remove flHolder.childCount=%d", Integer.valueOf(this.appBrowserActivity.getViewHolder().getFlHolder().getChildCount())));
            this.appBrowserActivity.getViewHolder().getFlHolder().removeView(webView);
            this.appBrowserActivity.setAppOrientation();
            if (this.appBrowserActivity.getAppMediaPlayer() != null) {
                this.appBrowserActivity.getViewHolder().getFab().setSubItemsShow(this.appBrowserActivity.getViewHolder().getFabVolume(), true);
                if (this.appBrowserActivity.isNotAppMuteVolume() && !this.appBrowserActivity.getAppMediaPlayer().isPlaying()) {
                    this.appBrowserActivity.getAppMediaPlayer().start();
                }
            }
        }
        Log.d(str, "onCloseWindow <<<End>>>");
    }

    public void openFileChooser(ValueCallback<Uri> valueCallback, String str, String str2) {
        this.appBrowserActivity.setmUploadMessage(valueCallback);
        Intent intent = new Intent("android.intent.action.GET_CONTENT");
        intent.addCategory("android.intent.category.OPENABLE");
        intent.setType("*/*");
        this.appBrowserActivity.startActivityForResult(Intent.createChooser(intent, "File Browser"), FILE_CHOOSER_RESULT_CODE);
    }

    @Override // android.webkit.WebChromeClient
    public boolean onShowFileChooser(WebView webView, ValueCallback<Uri[]> valueCallback, WebChromeClient.FileChooserParams fileChooserParams) {
        if (this.appBrowserActivity.getmUploadMessage5() != null) {
            this.appBrowserActivity.getmUploadMessage5().onReceiveValue(null);
            this.appBrowserActivity.setmUploadMessage5(null);
        }
        this.appBrowserActivity.setmUploadMessage5(valueCallback);
        try {
            this.appBrowserActivity.startActivityForResult(fileChooserParams.createIntent(), FILE_CHOOSER_RESULT_CODE_FOR_ANDROID_5);
            return true;
        } catch (ActivityNotFoundException unused) {
            this.appBrowserActivity.setmUploadMessage5(null);
            return false;
        }
    }

    @Override // android.webkit.WebChromeClient
    public boolean onJsAlert(WebView webView, String str, String str2, JsResult jsResult) {
        Log.i("MainActivity", "onJsAlert url=" + str + ";message=" + str2);
        Toast.makeText(this.appBrowserActivity, str2, 1).show();
        jsResult.confirm();
        return true;
    }
}
