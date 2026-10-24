package com.gpk17.gbrowser;

import android.content.Context;
import android.util.Log;
import androidx.multidex.MultiDex;
import androidx.multidex.MultiDexApplication;
import com.gpk17.gbrowser.models.ProjectInfo;

/* JADX INFO: loaded from: classes.dex */
public class GbrowserApplication extends MultiDexApplication {
    public static final String TAG = "GbrowserApplication";
    private static Context ctx;
    private ProjectInfo projectInfo;

    @Override // android.app.Application
    public void onCreate() {
        Log.d(TAG, "onCreate()");
        ctx = getApplicationContext();
        super.onCreate();
    }

    @Override // androidx.multidex.MultiDexApplication, android.content.ContextWrapper
    protected void attachBaseContext(Context context) {
        super.attachBaseContext(context);
        Log.d(TAG, "attachBaseContext");
        MultiDex.install(this);
    }
}
