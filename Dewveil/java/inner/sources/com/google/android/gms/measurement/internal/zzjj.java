package com.google.android.gms.measurement.internal;

import android.content.ComponentName;
import android.content.Context;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzjj implements Runnable {
    final /* synthetic */ zzjl zza;

    zzjj(zzjl zzjlVar) {
        this.zza = zzjlVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        zzjm zzjmVar = this.zza.zza;
        Context contextZzau = zzjmVar.zzs.zzau();
        this.zza.zza.zzs.zzaw();
        zzjm.zzo(zzjmVar, new ComponentName(contextZzau, "com.google.android.gms.measurement.AppMeasurementService"));
    }
}
