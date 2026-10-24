package com.google.android.gms.measurement.internal;

import android.content.Context;
import android.content.Intent;
import com.google.android.gms.common.internal.Preconditions;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzfc {
    private final zza zza;

    /* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
    public interface zza {
        void doStartService(Context context, Intent intent);
    }

    public zzfc(zza zzaVar) {
        Preconditions.checkNotNull(zzaVar);
        this.zza = zzaVar;
    }

    public final void zza(Context context, Intent intent) {
        zzft zzftVarZzp = zzft.zzp(context, null, null);
        zzej zzejVarZzay = zzftVarZzp.zzay();
        if (intent == null) {
            zzejVarZzay.zzk().zza("Receiver called with null intent");
            return;
        }
        zzftVarZzp.zzaw();
        String action = intent.getAction();
        zzejVarZzay.zzj().zzb("Local receiver got", action);
        if (!"com.google.android.gms.measurement.UPLOAD".equals(action)) {
            if ("com.android.vending.INSTALL_REFERRER".equals(action)) {
                zzejVarZzay.zzk().zza("Install Referrer Broadcasts are deprecated");
            }
        } else {
            Intent className = new Intent().setClassName(context, "com.google.android.gms.measurement.AppMeasurementService");
            className.setAction("com.google.android.gms.measurement.UPLOAD");
            zzejVarZzay.zzj().zza("Starting wakeful intent.");
            this.zza.doStartService(context, className);
        }
    }
}
