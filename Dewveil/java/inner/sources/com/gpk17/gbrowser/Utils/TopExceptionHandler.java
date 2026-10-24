package com.gpk17.gbrowser.Utils;

import android.os.Build;
import android.util.Log;
import com.gpk17.gbrowser.activities.GbrowserActivity;
import java.io.FileOutputStream;
import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;

/* JADX INFO: loaded from: classes.dex */
public class TopExceptionHandler implements Thread.UncaughtExceptionHandler {
    private static final String TAG = "TopExceptionHandler";
    private GbrowserActivity app;
    private Thread.UncaughtExceptionHandler defaultUEH = Thread.getDefaultUncaughtExceptionHandler();

    public TopExceptionHandler(GbrowserActivity gbrowserActivity) {
        this.app = gbrowserActivity;
    }

    @Override // java.lang.Thread.UncaughtExceptionHandler
    public void uncaughtException(Thread thread, Throwable th) {
        StackTraceElement[] stackTrace = th.getStackTrace();
        StringBuilder sb = new StringBuilder("--------- ");
        String str = Build.BRAND;
        String str2 = Build.MODEL;
        String str3 = Build.VERSION.SDK_INT + " (" + Build.VERSION.RELEASE + ")";
        String str4 = this.app.getViewHolder().getVersionName(this.app.getCtx()) + "(" + this.app.getViewHolder().getVersionCode(this.app.getCtx()) + ")";
        sb.append(new SimpleDateFormat("yyyy_MM_dd_hh_mm_ss", Locale.getDefault()).format(new Date())).append(" ---------\n\n--------- Mobile and APP Information ---------\n\n    Mobile Brand: ");
        sb.append(str).append("\n    Mobile Model: ");
        sb.append(str2).append("\n    Android Sdk: ");
        sb.append(str3).append("\n    Apk Project Name: du23u-3077548\n    Apk Version: ");
        sb.append(str4).append("\n\n-------------------------------\n\n--------- Exception Information ---------\n\n    ");
        sb.append(th.toString()).append("\n\n-------------------------------\n\n--------- Stack trace ---------\n\n");
        for (StackTraceElement stackTraceElement : stackTrace) {
            sb.append("    ").append(stackTraceElement.toString()).append("\n");
        }
        sb.append("-------------------------------\n\n--------- Cause ---------\n\n");
        Throwable cause = th.getCause();
        if (cause != null) {
            sb.append(cause.toString()).append("\n\n");
            for (StackTraceElement stackTraceElement2 : cause.getStackTrace()) {
                sb.append("    ").append(stackTraceElement2.toString()).append("\n");
            }
        }
        sb.append("-------------------------------\n\n");
        Log.d(TAG, "uncaughtException report: \n" + ((Object) sb));
        try {
            FileOutputStream fileOutputStreamOpenFileOutput = this.app.openFileOutput(new SimpleDateFormat("yyyy_MM_dd", Locale.getDefault()).format(new Date()) + "_error.trace", 0);
            fileOutputStreamOpenFileOutput.write(sb.toString().getBytes());
            fileOutputStreamOpenFileOutput.close();
        } catch (IOException unused) {
            Log.d(TAG, "Create or update error trace failed!!");
        }
        this.defaultUEH.uncaughtException(thread, th);
    }
}
