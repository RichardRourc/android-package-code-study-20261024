package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzge extends zzjv implements zzlh {
    private zzge() {
        super(zzgf.zza);
    }

    public final zzge zza(Iterable iterable) {
        if (this.zzb) {
            zzaC();
            this.zzb = false;
        }
        zzgf.zzh((zzgf) this.zza, iterable);
        return this;
    }

    public final zzge zzb(int i) {
        if (this.zzb) {
            zzaC();
            this.zzb = false;
        }
        zzgf.zzg((zzgf) this.zza, i);
        return this;
    }

    /* synthetic */ zzge(zzff zzffVar) {
        super(zzgf.zza);
    }
}
