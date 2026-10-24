package com.google.android.gms.measurement.internal;

import android.os.Bundle;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzig implements Runnable {
    final /* synthetic */ Bundle zza;
    final /* synthetic */ zzif zzb;
    final /* synthetic */ zzif zzc;
    final /* synthetic */ long zzd;
    final /* synthetic */ zzim zze;

    zzig(zzim zzimVar, Bundle bundle, zzif zzifVar, zzif zzifVar2, long j) {
        this.zze = zzimVar;
        this.zza = bundle;
        this.zzb = zzifVar;
        this.zzc = zzifVar2;
        this.zzd = j;
    }

    @Override // java.lang.Runnable
    public final void run() {
        zzim.zzp(this.zze, this.zza, this.zzb, this.zzc, this.zzd);
    }
}
