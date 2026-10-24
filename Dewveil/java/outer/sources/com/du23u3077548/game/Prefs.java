package com.du23u3077548.game;

import android.content.Context;
import android.content.SharedPreferences;

/* JADX INFO: loaded from: classes.dex */
public final class Prefs {
    private static final String NAME = "dewveil_relic";

    public static SharedPreferences sp(Context context) {
        return context.getSharedPreferences(NAME, 0);
    }

    public static int unlocked(Context context) {
        return sp(context).getInt("unlocked", 1);
    }

    public static void unlock(Context context, int i) {
        if (i > unlocked(context)) {
            sp(context).edit().putInt("unlocked", i).apply();
        }
    }

    public static int best(Context context, int i) {
        return sp(context).getInt("best_" + i, 0);
    }

    public static void best(Context context, int i, int i2) {
        if (i2 > best(context, i)) {
            sp(context).edit().putInt("best_" + i, i2).apply();
        }
    }

    public static int endlessBest(Context context) {
        return sp(context).getInt("endless_best", 0);
    }

    public static void endlessBest(Context context, int i) {
        if (i > endlessBest(context)) {
            sp(context).edit().putInt("endless_best", i).apply();
        }
    }
}
