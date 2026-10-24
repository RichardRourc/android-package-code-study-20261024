package com.google.android.gms.measurement.internal;

import android.os.Handler;
import android.os.Looper;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzkc extends zzf {
    protected final zzkb zza;
    protected final zzka zzb;
    protected final zzjy zzc;
    private Handler zzd;

    zzkc(zzft zzftVar) {
        super(zzftVar);
        this.zza = new zzkb(this);
        this.zzb = new zzka(this);
        this.zzc = new zzjy(this);
    }

    static /* bridge */ /* synthetic */ void zzj(zzkc zzkcVar, long j) {
        zzkcVar.zzg();
        zzkcVar.zzm();
        zzkcVar.zzs.zzay().zzj().zzb("Activity paused, time", Long.valueOf(j));
        zzkcVar.zzc.zza(j);
        if (zzkcVar.zzs.zzf().zzu()) {
            zzkcVar.zzb.zzb(j);
        }
    }

    static /* bridge */ /* synthetic */ void zzl(zzkc zzkcVar, long j) {
        zzkcVar.zzg();
        zzkcVar.zzm();
        zzkcVar.zzs.zzay().zzj().zzb("Activity resumed, time", Long.valueOf(j));
        if (zzkcVar.zzs.zzf().zzu() || zzkcVar.zzs.zzm().zzl.zzb()) {
            zzkcVar.zzb.zzc(j);
        }
        zzkcVar.zzc.zzb();
        zzkb zzkbVar = zzkcVar.zza;
        zzkbVar.zza.zzg();
        if (zzkbVar.zza.zzs.zzJ()) {
            zzkbVar.zzb(zzkbVar.zza.zzs.zzav().currentTimeMillis(), false);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void zzm() {
        zzg();
        if (this.zzd == null) {
            this.zzd = new com.google.android.gms.internal.measurement.zzby(Looper.getMainLooper());
        }
    }

    @Override // com.google.android.gms.measurement.internal.zzf
    protected final boolean zzf() {
        return false;
    }
}
