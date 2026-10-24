package com.tjwqxmzplk.sparkslidenest;

import android.content.Context;
import android.content.SharedPreferences;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: ScoreVault.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\nJ\u0016\u0010\u000b\u001a\u00020\f2\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\bR\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"Lcom/tjwqxmzplk/sparkslidenest/ScoreVault;", "", "<init>", "()V", "BIN", "", "KEY", "readPeak", "", "ctx", "Landroid/content/Context;", "writePeak", "", "marks", "app_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class ScoreVault {
    private static final String BIN = "ssl_peak_bin";
    public static final ScoreVault INSTANCE = new ScoreVault();
    private static final String KEY = "peak_marks";

    private ScoreVault() {
    }

    public final int readPeak(Context ctx) {
        Intrinsics.checkNotNullParameter(ctx, "ctx");
        return ctx.getSharedPreferences(BIN, 0).getInt(KEY, 0);
    }

    public final void writePeak(Context ctx, int marks) {
        Intrinsics.checkNotNullParameter(ctx, "ctx");
        SharedPreferences sharedPreferences = ctx.getSharedPreferences(BIN, 0);
        if (marks > sharedPreferences.getInt(KEY, 0)) {
            sharedPreferences.edit().putInt(KEY, marks).apply();
        }
    }
}
