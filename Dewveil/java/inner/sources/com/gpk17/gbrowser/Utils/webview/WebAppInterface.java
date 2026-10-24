package com.gpk17.gbrowser.Utils.webview;

import android.util.Log;
import android.webkit.JavascriptInterface;
import android.webkit.ValueCallback;
import com.google.gson.Gson;
import com.gpk17.gbrowser.GbrowserApplication;
import com.gpk17.gbrowser.activities.GbrowserActivity;

/* JADX INFO: loaded from: classes.dex */
public class WebAppInterface {
    private GbrowserActivity appBrowserActivity;

    public WebAppInterface(GbrowserActivity gbrowserActivity) {
        this.appBrowserActivity = gbrowserActivity;
    }

    @JavascriptInterface
    public void saveAccount(String str) {
        System.out.println("Received AccountObject - Account: " + str);
        AccountObject accountObject = (AccountObject) new Gson().fromJson(str, AccountObject.class);
        System.out.println(accountObject.account + "&&" + accountObject.password);
        if (accountObject.account.length() == 0 || accountObject.password.length() == 0) {
            return;
        }
        String str2 = accountObject.account + " " + accountObject.password;
        String input = this.appBrowserActivity.getKeyStoreSpUtil().getInput();
        String strDecrypt = this.appBrowserActivity.getKeyStoreUtil().decrypt(input);
        Log.d(GbrowserApplication.TAG, "onPageFinished do evaluateJavascript with: " + strDecrypt);
        if (input.isEmpty() || !strDecrypt.equals(str2)) {
            this.appBrowserActivity.getViewHolder().showSaveLoginInfoDialog(str2);
        }
    }

    @JavascriptInterface
    public void shareIntent(String str) {
        this.appBrowserActivity.shareIntent(str);
    }

    @JavascriptInterface
    public void getAccount(boolean z) {
        String input = this.appBrowserActivity.getKeyStoreSpUtil().getInput();
        Log.d(GbrowserApplication.TAG, "onPageFinished encryptLoginInfoData: " + input);
        if (input.isEmpty()) {
            return;
        }
        String strDecrypt = this.appBrowserActivity.getKeyStoreUtil().decrypt(input);
        Log.d(GbrowserApplication.TAG, "onPageFinished do evaluateJavascript with: " + strDecrypt);
        final String[] strArrSplit = strDecrypt.split(" ");
        if (strArrSplit.length != 2) {
            return;
        }
        this.appBrowserActivity.runOnUiThread(new Runnable() { // from class: com.gpk17.gbrowser.Utils.webview.WebAppInterface.1
            @Override // java.lang.Runnable
            public void run() {
                WebAppInterface.this.appBrowserActivity.getViewHolder().getWebView().evaluateJavascript("                setAccount('" + strArrSplit[0] + "','" + strArrSplit[1] + "')", new ValueCallback<String>() { // from class: com.gpk17.gbrowser.Utils.webview.WebAppInterface.1.1
                    @Override // android.webkit.ValueCallback
                    public void onReceiveValue(String str) {
                    }
                });
            }
        });
    }
}
