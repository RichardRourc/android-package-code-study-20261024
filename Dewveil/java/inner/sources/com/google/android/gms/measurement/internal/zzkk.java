package com.google.android.gms.measurement.internal;

import java.util.Map;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzkk implements zzel {
    final /* synthetic */ String zza;
    final /* synthetic */ zzkr zzb;

    zzkk(zzkr zzkrVar, String str) {
        this.zzb = zzkrVar;
        this.zza = str;
    }

    @Override // com.google.android.gms.measurement.internal.zzel
    public final void zza(String str, int i, Throwable th, byte[] bArr, Map map) {
        this.zzb.zzJ(i, th, bArr, this.zza);
    }
}
