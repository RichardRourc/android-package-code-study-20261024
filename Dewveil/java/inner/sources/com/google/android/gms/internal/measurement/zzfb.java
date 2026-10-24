package com.google.android.gms.internal.measurement;

import java.util.Collections;
import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzfb extends zzjv implements zzlh {
    private zzfb() {
        super(zzfc.zza);
    }

    public final int zza() {
        return ((zzfc) this.zza).zzb();
    }

    public final zzfa zzb(int i) {
        return ((zzfc) this.zza).zzd(i);
    }

    public final zzfb zzc() {
        if (this.zzb) {
            zzaC();
            this.zzb = false;
        }
        ((zzfc) this.zza).zzk = zzfc.zzby();
        return this;
    }

    public final zzfb zzd(int i, zzez zzezVar) {
        if (this.zzb) {
            zzaC();
            this.zzb = false;
        }
        zzfc.zzm((zzfc) this.zza, i, (zzfa) zzezVar.zzay());
        return this;
    }

    public final List zze() {
        return Collections.unmodifiableList(((zzfc) this.zza).zzi());
    }

    /* synthetic */ zzfb(zzey zzeyVar) {
        super(zzfc.zza);
    }
}
