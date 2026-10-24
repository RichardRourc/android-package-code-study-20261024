package com.google.android.gms.measurement.internal;

import androidx.collection.LruCache;
import com.google.android.gms.common.internal.Preconditions;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzfh extends LruCache {
    final /* synthetic */ zzfk zza;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    zzfh(zzfk zzfkVar, int i) {
        super(20);
        this.zza = zzfkVar;
    }

    @Override // androidx.collection.LruCache
    protected final /* bridge */ /* synthetic */ Object create(Object obj) {
        String str = (String) obj;
        Preconditions.checkNotEmpty(str);
        return zzfk.zzd(this.zza, str);
    }
}
