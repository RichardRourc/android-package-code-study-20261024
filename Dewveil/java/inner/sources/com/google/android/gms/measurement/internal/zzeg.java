package com.google.android.gms.measurement.internal;

import android.util.Log;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzeg implements Runnable {
    final /* synthetic */ int zza;
    final /* synthetic */ String zzb;
    final /* synthetic */ Object zzc;
    final /* synthetic */ Object zzd;
    final /* synthetic */ Object zze;
    final /* synthetic */ zzej zzf;

    zzeg(zzej zzejVar, int i, String str, Object obj, Object obj2, Object obj3) {
        this.zzf = zzejVar;
        this.zza = i;
        this.zzb = str;
        this.zzc = obj;
        this.zzd = obj2;
        this.zze = obj3;
    }

    @Override // java.lang.Runnable
    public final void run() {
        zzey zzeyVarZzm = this.zzf.zzs.zzm();
        if (!zzeyVarZzm.zzx()) {
            Log.println(6, this.zzf.zzq(), "Persisted config not initialized. Not logging error/warn");
            return;
        }
        zzej zzejVar = this.zzf;
        if (zzejVar.zza == 0) {
            if (zzejVar.zzs.zzf().zzy()) {
                zzej zzejVar2 = this.zzf;
                zzejVar2.zzs.zzaw();
                zzejVar2.zza = 'C';
            } else {
                zzej zzejVar3 = this.zzf;
                zzejVar3.zzs.zzaw();
                zzejVar3.zza = 'c';
            }
        }
        zzej zzejVar4 = this.zzf;
        if (zzejVar4.zzb < 0) {
            zzejVar4.zzs.zzf().zzh();
            zzejVar4.zzb = 60000L;
        }
        char cCharAt = "01VDIWEA?".charAt(this.zza);
        zzej zzejVar5 = this.zzf;
        char c = zzejVar5.zza;
        long j = zzejVar5.zzb;
        String strZzo = zzej.zzo(true, this.zzb, this.zzc, this.zzd, this.zze);
        StringBuilder sb = new StringBuilder(strZzo.length() + 24);
        sb.append("2");
        sb.append(cCharAt);
        sb.append(c);
        sb.append(j);
        sb.append(":");
        sb.append(strZzo);
        String string = sb.toString();
        if (string.length() > 1024) {
            string = this.zzb.substring(0, 1024);
        }
        zzew zzewVar = zzeyVarZzm.zzb;
        if (zzewVar != null) {
            zzewVar.zzb(string, 1L);
        }
    }
}
