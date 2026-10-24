package com.gpk17.gbrowser.Utils.cryptor;

import android.content.Context;
import android.content.SharedPreferences;
import android.preference.PreferenceManager;

/* JADX INFO: loaded from: classes.dex */
public class KeyStoreSpUtil {
    private static final String PREF_KEY_AES = "PREF_KEY_AES";
    private static final String PREF_KEY_INPUT = "PREF_KEY_INPUT";
    private static final String PREF_KEY_IV = "PREF_KEY_IV";
    private static final String SHARED_PREF_NAME = "KEYSTORE_SETTING";
    private static final String TAG = "KeyStoreSpUtil";
    private SharedPreferences sharedPreferences;

    public KeyStoreSpUtil(Context context) {
        this.sharedPreferences = PreferenceManager.getDefaultSharedPreferences(context);
    }

    private String getString(String str) {
        return this.sharedPreferences.getString(str, "");
    }

    private void putString(String str, String str2) {
        this.sharedPreferences.edit().putString(str, str2).apply();
    }

    private boolean getBoolean(String str) {
        return this.sharedPreferences.getBoolean(str, false);
    }

    private void putBoolean(String str, boolean z) {
        this.sharedPreferences.edit().putBoolean(str, z).apply();
    }

    public void setIV(String str) {
        putString(PREF_KEY_IV, str);
    }

    public String getIV() {
        return getString(PREF_KEY_IV);
    }

    public void setAESKey(String str) {
        putString(PREF_KEY_AES, str);
    }

    public String getAESKey() {
        return getString(PREF_KEY_AES);
    }

    public void setInput(String str) {
        putString(PREF_KEY_INPUT, str);
    }

    public String getInput() {
        return getString(PREF_KEY_INPUT);
    }
}
