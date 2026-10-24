package com.google.android.gms.internal.measurement;

import java.util.Comparator;
import kotlin.UByte;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zziq implements Comparator {
    zziq() {
    }

    @Override // java.util.Comparator
    public final /* synthetic */ int compare(Object obj, Object obj2) {
        zziy zziyVar = (zziy) obj;
        zziy zziyVar2 = (zziy) obj2;
        zzio zzioVar = new zzio(zziyVar);
        zzio zzioVar2 = new zzio(zziyVar2);
        while (zzioVar.hasNext() && zzioVar2.hasNext()) {
            int iZza = zzip.zza(zzioVar.zza() & UByte.MAX_VALUE, zzioVar2.zza() & UByte.MAX_VALUE);
            if (iZza != 0) {
                return iZza;
            }
        }
        return zzip.zza(zziyVar.zzd(), zziyVar2.zzd());
    }
}
