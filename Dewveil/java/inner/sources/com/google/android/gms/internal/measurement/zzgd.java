package com.google.android.gms.internal.measurement;

import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzgd extends zzjz implements zzlh {
    private static final zzgd zza;
    private zzkf zze = zzbw();
    private zzkf zzf = zzbw();
    private zzkg zzg = zzby();
    private zzkg zzh = zzby();

    static {
        zzgd zzgdVar = new zzgd();
        zza = zzgdVar;
        zzjz.zzbE(zzgd.class, zzgdVar);
    }

    private zzgd() {
    }

    public static zzgc zzf() {
        return (zzgc) zza.zzbs();
    }

    public static zzgd zzh() {
        return zza;
    }

    static /* synthetic */ void zzo(zzgd zzgdVar, Iterable iterable) {
        zzkf zzkfVar = zzgdVar.zze;
        if (!zzkfVar.zzc()) {
            zzgdVar.zze = zzjz.zzbx(zzkfVar);
        }
        zzih.zzbo(iterable, zzgdVar.zze);
    }

    static /* synthetic */ void zzq(zzgd zzgdVar, Iterable iterable) {
        zzkf zzkfVar = zzgdVar.zzf;
        if (!zzkfVar.zzc()) {
            zzgdVar.zzf = zzjz.zzbx(zzkfVar);
        }
        zzih.zzbo(iterable, zzgdVar.zzf);
    }

    static /* synthetic */ void zzs(zzgd zzgdVar, Iterable iterable) {
        zzgdVar.zzw();
        zzih.zzbo(iterable, zzgdVar.zzg);
    }

    static /* synthetic */ void zzt(zzgd zzgdVar, int i) {
        zzgdVar.zzw();
        zzgdVar.zzg.remove(i);
    }

    static /* synthetic */ void zzu(zzgd zzgdVar, Iterable iterable) {
        zzgdVar.zzx();
        zzih.zzbo(iterable, zzgdVar.zzh);
    }

    static /* synthetic */ void zzv(zzgd zzgdVar, int i) {
        zzgdVar.zzx();
        zzgdVar.zzh.remove(i);
    }

    private final void zzw() {
        zzkg zzkgVar = this.zzg;
        if (zzkgVar.zzc()) {
            return;
        }
        this.zzg = zzjz.zzbz(zzkgVar);
    }

    private final void zzx() {
        zzkg zzkgVar = this.zzh;
        if (zzkgVar.zzc()) {
            return;
        }
        this.zzh = zzjz.zzbz(zzkgVar);
    }

    public final int zza() {
        return this.zzg.size();
    }

    public final int zzb() {
        return this.zzf.size();
    }

    public final int zzc() {
        return this.zzh.size();
    }

    public final int zzd() {
        return this.zze.size();
    }

    public final zzfm zze(int i) {
        return (zzfm) this.zzg.get(i);
    }

    public final zzgf zzi(int i) {
        return (zzgf) this.zzh.get(i);
    }

    public final List zzj() {
        return this.zzg;
    }

    public final List zzk() {
        return this.zzf;
    }

    @Override // com.google.android.gms.internal.measurement.zzjz
    protected final Object zzl(int i, Object obj, Object obj2) {
        int i2 = i - 1;
        if (i2 == 0) {
            return (byte) 1;
        }
        if (i2 == 2) {
            return zzbD(zza, "\u0001\u0004\u0000\u0000\u0001\u0004\u0004\u0000\u0004\u0000\u0001\u0015\u0002\u0015\u0003\u001b\u0004\u001b", new Object[]{"zze", "zzf", "zzg", zzfm.class, "zzh", zzgf.class});
        }
        if (i2 == 3) {
            return new zzgd();
        }
        zzff zzffVar = null;
        if (i2 == 4) {
            return new zzgc(zzffVar);
        }
        if (i2 != 5) {
            return null;
        }
        return zza;
    }

    public final List zzm() {
        return this.zzh;
    }

    public final List zzn() {
        return this.zze;
    }
}
