package com.google.android.gms.internal.measurement;

import android.content.Context;
import javax.annotation.Nullable;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzgx extends zzhs {
    private final Context zza;
    private final zzib zzb;

    zzgx(Context context, @Nullable zzib zzibVar) {
        if (context == null) {
            throw new NullPointerException("Null context");
        }
        this.zza = context;
        this.zzb = zzibVar;
    }

    public final boolean equals(Object obj) {
        zzib zzibVar;
        if (obj == this) {
            return true;
        }
        if (obj instanceof zzhs) {
            zzhs zzhsVar = (zzhs) obj;
            if (this.zza.equals(zzhsVar.zza()) && ((zzibVar = this.zzb) != null ? zzibVar.equals(zzhsVar.zzb()) : zzhsVar.zzb() == null)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int iHashCode = (this.zza.hashCode() ^ 1000003) * 1000003;
        zzib zzibVar = this.zzb;
        return (zzibVar == null ? 0 : zzibVar.hashCode()) ^ iHashCode;
    }

    public final String toString() {
        String string = this.zza.toString();
        String strValueOf = String.valueOf(this.zzb);
        StringBuilder sb = new StringBuilder(string.length() + 46 + String.valueOf(strValueOf).length());
        sb.append("FlagsContext{context=");
        sb.append(string);
        sb.append(", hermeticFileOverrides=");
        sb.append(strValueOf);
        sb.append("}");
        return sb.toString();
    }

    @Override // com.google.android.gms.internal.measurement.zzhs
    final Context zza() {
        return this.zza;
    }

    @Override // com.google.android.gms.internal.measurement.zzhs
    @Nullable
    final zzib zzb() {
        return this.zzb;
    }
}
