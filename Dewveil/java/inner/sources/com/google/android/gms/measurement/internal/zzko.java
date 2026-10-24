package com.google.android.gms.measurement.internal;

import android.os.Bundle;
import android.text.TextUtils;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzko implements zzkx {
    final /* synthetic */ zzkr zza;

    zzko(zzkr zzkrVar) {
        this.zza = zzkrVar;
    }

    @Override // com.google.android.gms.measurement.internal.zzkx
    public final void zza(String str, String str2, Bundle bundle) {
        if (!TextUtils.isEmpty(str)) {
            this.zza.zzaz().zzp(new zzkn(this, str, "_err", bundle));
            return;
        }
        zzkr zzkrVar = this.zza;
        if (zzkrVar.zzn != null) {
            zzkrVar.zzn.zzay().zzd().zzb("AppId not known when logging event", "_err");
        }
    }
}
