package com.google.android.gms.measurement.internal;

import android.content.Context;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.common.util.Clock;
import org.checkerframework.dataflow.qual.Pure;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
class zzgm implements zzgo {
    protected final zzft zzs;

    zzgm(zzft zzftVar) {
        Preconditions.checkNotNull(zzftVar);
        this.zzs = zzftVar;
    }

    @Override // com.google.android.gms.measurement.internal.zzgo
    @Pure
    public final Context zzau() {
        throw null;
    }

    @Override // com.google.android.gms.measurement.internal.zzgo
    @Pure
    public final Clock zzav() {
        throw null;
    }

    @Override // com.google.android.gms.measurement.internal.zzgo
    @Pure
    public final zzaa zzaw() {
        throw null;
    }

    public void zzax() {
        this.zzs.zzaz().zzax();
    }

    @Override // com.google.android.gms.measurement.internal.zzgo
    @Pure
    public final zzej zzay() {
        throw null;
    }

    @Override // com.google.android.gms.measurement.internal.zzgo
    @Pure
    public final zzfq zzaz() {
        throw null;
    }

    public void zzg() {
        this.zzs.zzaz().zzg();
    }
}
