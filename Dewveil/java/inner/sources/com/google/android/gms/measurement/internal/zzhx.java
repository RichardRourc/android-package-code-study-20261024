package com.google.android.gms.measurement.internal;

import android.app.Activity;
import android.app.Application;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import com.adjust.sdk.Constants;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzhx implements Application.ActivityLifecycleCallbacks {
    final /* synthetic */ zzhy zza;

    /* synthetic */ zzhx(zzhy zzhyVar, zzhw zzhwVar) {
        this.zza = zzhyVar;
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
        zzft zzftVar;
        Uri data;
        try {
            try {
                this.zza.zzs.zzay().zzj().zza("onActivityCreated");
                Intent intent = activity.getIntent();
                if (intent == null || (data = intent.getData()) == null || !data.isHierarchical()) {
                    zzftVar = this.zza.zzs;
                } else {
                    this.zza.zzs.zzv();
                    String stringExtra = intent.getStringExtra("android.intent.extra.REFERRER_NAME");
                    this.zza.zzs.zzaz().zzp(new zzhv(this, bundle == null, data, ("android-app://com.google.android.googlequicksearchbox/https/www.google.com".equals(stringExtra) || "https://www.google.com".equals(stringExtra) || "android-app://com.google.appcrawler".equals(stringExtra)) ? "gs" : "auto", data.getQueryParameter(Constants.REFERRER)));
                    zzftVar = this.zza.zzs;
                }
            } catch (RuntimeException e) {
                this.zza.zzs.zzay().zzd().zzb("Throwable caught in onActivityCreated", e);
                zzftVar = this.zza.zzs;
            }
            zzim zzimVarZzs = zzftVar.zzs();
        } finally {
            this.zza.zzs.zzs().zzr(activity, bundle);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
        this.zza.zzs.zzs().zzs(activity);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
        this.zza.zzs.zzs().zzt(activity);
        zzkc zzkcVarZzu = this.zza.zzs.zzu();
        zzkcVarZzu.zzs.zzaz().zzp(new zzjv(zzkcVarZzu, zzkcVarZzu.zzs.zzav().elapsedRealtime()));
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        zzkc zzkcVarZzu = this.zza.zzs.zzu();
        zzkcVarZzu.zzs.zzaz().zzp(new zzju(zzkcVarZzu, zzkcVarZzu.zzs.zzav().elapsedRealtime()));
        this.zza.zzs.zzs().zzu(activity);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
        this.zza.zzs.zzs().zzv(activity, bundle);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
    }
}
