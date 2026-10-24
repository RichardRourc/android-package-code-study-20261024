package com.google.android.gms.measurement.internal;

import android.content.SharedPreferences;
import android.util.Pair;
import com.google.android.gms.common.internal.Preconditions;
import kotlin.jvm.internal.LongCompanionObject;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzew {
    final String zza;
    final /* synthetic */ zzey zzb;
    private final String zzc;
    private final String zzd;
    private final long zze;

    /* synthetic */ zzew(zzey zzeyVar, String str, long j, zzev zzevVar) {
        this.zzb = zzeyVar;
        Preconditions.checkNotEmpty("health_monitor");
        Preconditions.checkArgument(j > 0);
        this.zza = "health_monitor:start";
        this.zzc = "health_monitor:count";
        this.zzd = "health_monitor:value";
        this.zze = j;
    }

    private final long zzc() {
        return this.zzb.zza().getLong(this.zza, 0L);
    }

    private final void zzd() {
        this.zzb.zzg();
        long jCurrentTimeMillis = this.zzb.zzs.zzav().currentTimeMillis();
        SharedPreferences.Editor editorEdit = this.zzb.zza().edit();
        editorEdit.remove(this.zzc);
        editorEdit.remove(this.zzd);
        editorEdit.putLong(this.zza, jCurrentTimeMillis);
        editorEdit.apply();
    }

    public final Pair zza() {
        long jAbs;
        this.zzb.zzg();
        this.zzb.zzg();
        long jZzc = zzc();
        if (jZzc == 0) {
            zzd();
            jAbs = 0;
        } else {
            jAbs = Math.abs(jZzc - this.zzb.zzs.zzav().currentTimeMillis());
        }
        long j = this.zze;
        if (jAbs < j) {
            return null;
        }
        if (jAbs > j + j) {
            zzd();
            return null;
        }
        String string = this.zzb.zza().getString(this.zzd, null);
        long j2 = this.zzb.zza().getLong(this.zzc, 0L);
        zzd();
        return (string == null || j2 <= 0) ? zzey.zza : new Pair(string, Long.valueOf(j2));
    }

    public final void zzb(String str, long j) {
        this.zzb.zzg();
        if (zzc() == 0) {
            zzd();
        }
        if (str == null) {
            str = "";
        }
        long j2 = this.zzb.zza().getLong(this.zzc, 0L);
        if (j2 <= 0) {
            SharedPreferences.Editor editorEdit = this.zzb.zza().edit();
            editorEdit.putString(this.zzd, str);
            editorEdit.putLong(this.zzc, 1L);
            editorEdit.apply();
            return;
        }
        long jNextLong = this.zzb.zzs.zzv().zzF().nextLong();
        long j3 = j2 + 1;
        long j4 = LongCompanionObject.MAX_VALUE / j3;
        SharedPreferences.Editor editorEdit2 = this.zzb.zza().edit();
        if ((LongCompanionObject.MAX_VALUE & jNextLong) < j4) {
            editorEdit2.putString(this.zzd, str);
        }
        editorEdit2.putLong(this.zzc, j3);
        editorEdit2.apply();
    }
}
