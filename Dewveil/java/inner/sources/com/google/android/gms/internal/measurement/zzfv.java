package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzfv extends zzjv implements zzlh {
    private zzfv() {
        super(zzfw.zza);
    }

    public final zzfv zza(zzfx zzfxVar) {
        if (this.zzb) {
            zzaC();
            this.zzb = false;
        }
        zzfw.zze((zzfw) this.zza, (zzfy) zzfxVar.zzay());
        return this;
    }

    public final zzfy zzb(int i) {
        return ((zzfw) this.zza).zzc(0);
    }

    /* synthetic */ zzfv(zzff zzffVar) {
        super(zzfw.zza);
    }
}
