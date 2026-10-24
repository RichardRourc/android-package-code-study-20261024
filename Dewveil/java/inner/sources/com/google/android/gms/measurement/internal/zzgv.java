package com.google.android.gms.measurement.internal;

import android.util.Log;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzgv implements zzed {
    final /* synthetic */ zzft zza;

    zzgv(zzgw zzgwVar, zzft zzftVar) {
        this.zza = zzftVar;
    }

    @Override // com.google.android.gms.measurement.internal.zzed
    public final boolean zza() {
        return this.zza.zzL() && Log.isLoggable(this.zza.zzay().zzq(), 3);
    }
}
