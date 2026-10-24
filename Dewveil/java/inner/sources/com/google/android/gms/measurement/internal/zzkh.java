package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
abstract class zzkh extends zzkg {
    private boolean zza;

    zzkh(zzkr zzkrVar) {
        super(zzkrVar);
        this.zzf.zzL();
    }

    protected final void zzW() {
        if (!zzY()) {
            throw new IllegalStateException("Not initialized");
        }
    }

    public final void zzX() {
        if (this.zza) {
            throw new IllegalStateException("Can't initialize twice");
        }
        zzb();
        this.zzf.zzG();
        this.zza = true;
    }

    final boolean zzY() {
        return this.zza;
    }

    protected abstract boolean zzb();
}
