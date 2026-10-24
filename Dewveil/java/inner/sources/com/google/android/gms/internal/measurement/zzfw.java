package com.google.android.gms.internal.measurement;

import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzfw extends zzjz implements zzlh {
    private static final zzfw zza;
    private zzkg zze = zzby();

    static {
        zzfw zzfwVar = new zzfw();
        zza = zzfwVar;
        zzjz.zzbE(zzfw.class, zzfwVar);
    }

    private zzfw() {
    }

    public static zzfv zza() {
        return (zzfv) zza.zzbs();
    }

    static /* synthetic */ void zze(zzfw zzfwVar, zzfy zzfyVar) {
        zzfyVar.getClass();
        zzkg zzkgVar = zzfwVar.zze;
        if (!zzkgVar.zzc()) {
            zzfwVar.zze = zzjz.zzbz(zzkgVar);
        }
        zzfwVar.zze.add(zzfyVar);
    }

    public final zzfy zzc(int i) {
        return (zzfy) this.zze.get(0);
    }

    public final List zzd() {
        return this.zze;
    }

    @Override // com.google.android.gms.internal.measurement.zzjz
    protected final Object zzl(int i, Object obj, Object obj2) {
        int i2 = i - 1;
        if (i2 == 0) {
            return (byte) 1;
        }
        if (i2 == 2) {
            return zzbD(zza, "\u0001\u0001\u0000\u0000\u0001\u0001\u0001\u0000\u0001\u0000\u0001\u001b", new Object[]{"zze", zzfy.class});
        }
        if (i2 == 3) {
            return new zzfw();
        }
        zzff zzffVar = null;
        if (i2 == 4) {
            return new zzfv(zzffVar);
        }
        if (i2 != 5) {
            return null;
        }
        return zza;
    }
}
