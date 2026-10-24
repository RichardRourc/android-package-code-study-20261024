package com.google.android.gms.internal.measurement;

import java.io.IOException;
import java.util.Iterator;
import java.util.List;
import java.util.RandomAccess;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzlt {
    private static final Class zza;
    private static final zzmi zzb;
    private static final zzmi zzc;
    private static final zzmi zzd;

    static {
        Class<?> cls;
        try {
            cls = Class.forName("com.google.protobuf.GeneratedMessage");
        } catch (Throwable unused) {
            cls = null;
        }
        zza = cls;
        zzb = zzab(false);
        zzc = zzab(true);
        zzd = new zzmk();
    }

    public static zzmi zzA() {
        return zzc;
    }

    public static zzmi zzB() {
        return zzd;
    }

    static Object zzC(int i, List list, zzkd zzkdVar, Object obj, zzmi zzmiVar) {
        if (zzkdVar == null) {
            return obj;
        }
        if (list instanceof RandomAccess) {
            int size = list.size();
            int i2 = 0;
            for (int i3 = 0; i3 < size; i3++) {
                int iIntValue = ((Integer) list.get(i3)).intValue();
                if (zzkdVar.zza(iIntValue)) {
                    if (i3 != i2) {
                        list.set(i2, Integer.valueOf(iIntValue));
                    }
                    i2++;
                } else {
                    obj = zzD(i, iIntValue, obj, zzmiVar);
                }
            }
            if (i2 != size) {
                list.subList(i2, size).clear();
                return obj;
            }
        } else {
            Iterator it = list.iterator();
            while (it.hasNext()) {
                int iIntValue2 = ((Integer) it.next()).intValue();
                if (!zzkdVar.zza(iIntValue2)) {
                    obj = zzD(i, iIntValue2, obj, zzmiVar);
                    it.remove();
                }
            }
        }
        return obj;
    }

    static Object zzD(int i, int i2, Object obj, zzmi zzmiVar) {
        if (obj == null) {
            obj = zzmiVar.zze();
        }
        zzmiVar.zzf(obj, i, i2);
        return obj;
    }

    static void zzE(zzjm zzjmVar, Object obj, Object obj2) {
        zzjmVar.zza(obj2);
        throw null;
    }

    static void zzF(zzmi zzmiVar, Object obj, Object obj2) {
        zzmiVar.zzh(obj, zzmiVar.zzd(zzmiVar.zzc(obj), zzmiVar.zzc(obj2)));
    }

    public static void zzG(Class cls) {
        Class cls2;
        if (!zzjz.class.isAssignableFrom(cls) && (cls2 = zza) != null && !cls2.isAssignableFrom(cls)) {
            throw new IllegalArgumentException("Message classes must extend GeneratedMessage or GeneratedMessageLite");
        }
    }

    static boolean zzH(Object obj, Object obj2) {
        if (obj != obj2) {
            return obj != null && obj.equals(obj2);
        }
        return true;
    }

    static void zzI(zzlb zzlbVar, Object obj, Object obj2, long j) {
        zzms.zzs(obj, j, zzlb.zzb(zzms.zzf(obj, j), zzms.zzf(obj2, j)));
    }

    public static void zzJ(int i, List list, zzjh zzjhVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zzjhVar.zzc(i, list, z);
    }

    public static void zzK(int i, List list, zzjh zzjhVar) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zzjhVar.zze(i, list);
    }

    public static void zzL(int i, List list, zzjh zzjhVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zzjhVar.zzg(i, list, z);
    }

    public static void zzM(int i, List list, zzjh zzjhVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zzjhVar.zzj(i, list, z);
    }

    public static void zzN(int i, List list, zzjh zzjhVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zzjhVar.zzl(i, list, z);
    }

    public static void zzO(int i, List list, zzjh zzjhVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zzjhVar.zzn(i, list, z);
    }

    public static void zzP(int i, List list, zzjh zzjhVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zzjhVar.zzp(i, list, z);
    }

    public static void zzQ(int i, List list, zzjh zzjhVar, zzlr zzlrVar) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        for (int i2 = 0; i2 < list.size(); i2++) {
            zzjhVar.zzq(i, list.get(i2), zzlrVar);
        }
    }

    public static void zzR(int i, List list, zzjh zzjhVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zzjhVar.zzs(i, list, z);
    }

    public static void zzS(int i, List list, zzjh zzjhVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zzjhVar.zzu(i, list, z);
    }

    public static void zzT(int i, List list, zzjh zzjhVar, zzlr zzlrVar) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        for (int i2 = 0; i2 < list.size(); i2++) {
            zzjhVar.zzv(i, list.get(i2), zzlrVar);
        }
    }

    public static void zzU(int i, List list, zzjh zzjhVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zzjhVar.zzx(i, list, z);
    }

    public static void zzV(int i, List list, zzjh zzjhVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zzjhVar.zzz(i, list, z);
    }

    public static void zzW(int i, List list, zzjh zzjhVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zzjhVar.zzB(i, list, z);
    }

    public static void zzX(int i, List list, zzjh zzjhVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zzjhVar.zzD(i, list, z);
    }

    public static void zzY(int i, List list, zzjh zzjhVar) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zzjhVar.zzG(i, list);
    }

    public static void zzZ(int i, List list, zzjh zzjhVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zzjhVar.zzI(i, list, z);
    }

    static int zza(int i, List list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return size * (zzjg.zzA(i << 3) + 1);
    }

    public static void zzaa(int i, List list, zzjh zzjhVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zzjhVar.zzK(i, list, z);
    }

    private static zzmi zzab(boolean z) {
        Class<?> cls;
        try {
            cls = Class.forName("com.google.protobuf.UnknownFieldSetSchema");
        } catch (Throwable unused) {
            cls = null;
        }
        if (cls == null) {
            return null;
        }
        try {
            return (zzmi) cls.getConstructor(Boolean.TYPE).newInstance(Boolean.valueOf(z));
        } catch (Throwable unused2) {
            return null;
        }
    }

    static int zzb(List list) {
        return list.size();
    }

    static int zzc(int i, List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int iZzz = size * zzjg.zzz(i);
        for (int i2 = 0; i2 < list.size(); i2++) {
            iZzz += zzjg.zzt((zziy) list.get(i2));
        }
        return iZzz;
    }

    static int zzd(int i, List list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return zze(list) + (size * zzjg.zzz(i));
    }

    static int zze(List list) {
        int iZzv;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof zzka) {
            zzka zzkaVar = (zzka) list;
            iZzv = 0;
            while (i < size) {
                iZzv += zzjg.zzv(zzkaVar.zze(i));
                i++;
            }
        } else {
            iZzv = 0;
            while (i < size) {
                iZzv += zzjg.zzv(((Integer) list.get(i)).intValue());
                i++;
            }
        }
        return iZzv;
    }

    static int zzf(int i, List list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return size * (zzjg.zzA(i << 3) + 4);
    }

    static int zzg(List list) {
        return list.size() * 4;
    }

    static int zzh(int i, List list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return size * (zzjg.zzA(i << 3) + 8);
    }

    static int zzi(List list) {
        return list.size() * 8;
    }

    static int zzj(int i, List list, zzlr zzlrVar) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int iZzu = 0;
        for (int i2 = 0; i2 < size; i2++) {
            iZzu += zzjg.zzu(i, (zzlg) list.get(i2), zzlrVar);
        }
        return iZzu;
    }

    static int zzk(int i, List list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return zzl(list) + (size * zzjg.zzz(i));
    }

    static int zzl(List list) {
        int iZzv;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof zzka) {
            zzka zzkaVar = (zzka) list;
            iZzv = 0;
            while (i < size) {
                iZzv += zzjg.zzv(zzkaVar.zze(i));
                i++;
            }
        } else {
            iZzv = 0;
            while (i < size) {
                iZzv += zzjg.zzv(((Integer) list.get(i)).intValue());
                i++;
            }
        }
        return iZzv;
    }

    static int zzm(int i, List list, boolean z) {
        if (list.size() == 0) {
            return 0;
        }
        return zzn(list) + (list.size() * zzjg.zzz(i));
    }

    static int zzn(List list) {
        int iZzB;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof zzkv) {
            zzkv zzkvVar = (zzkv) list;
            iZzB = 0;
            while (i < size) {
                iZzB += zzjg.zzB(zzkvVar.zza(i));
                i++;
            }
        } else {
            iZzB = 0;
            while (i < size) {
                iZzB += zzjg.zzB(((Long) list.get(i)).longValue());
                i++;
            }
        }
        return iZzB;
    }

    static int zzo(int i, Object obj, zzlr zzlrVar) {
        if (!(obj instanceof zzkm)) {
            return zzjg.zzA(i << 3) + zzjg.zzx((zzlg) obj, zzlrVar);
        }
        int iZzA = zzjg.zzA(i << 3);
        int iZza = ((zzkm) obj).zza();
        return iZzA + zzjg.zzA(iZza) + iZza;
    }

    static int zzp(int i, List list, zzlr zzlrVar) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int iZzz = zzjg.zzz(i) * size;
        for (int i2 = 0; i2 < size; i2++) {
            Object obj = list.get(i2);
            iZzz += obj instanceof zzkm ? zzjg.zzw((zzkm) obj) : zzjg.zzx((zzlg) obj, zzlrVar);
        }
        return iZzz;
    }

    static int zzq(int i, List list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return zzr(list) + (size * zzjg.zzz(i));
    }

    static int zzr(List list) {
        int iZzA;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof zzka) {
            zzka zzkaVar = (zzka) list;
            iZzA = 0;
            while (i < size) {
                int iZze = zzkaVar.zze(i);
                iZzA += zzjg.zzA((iZze >> 31) ^ (iZze + iZze));
                i++;
            }
        } else {
            iZzA = 0;
            while (i < size) {
                int iIntValue = ((Integer) list.get(i)).intValue();
                iZzA += zzjg.zzA((iIntValue >> 31) ^ (iIntValue + iIntValue));
                i++;
            }
        }
        return iZzA;
    }

    static int zzs(int i, List list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return zzt(list) + (size * zzjg.zzz(i));
    }

    static int zzt(List list) {
        int iZzB;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof zzkv) {
            zzkv zzkvVar = (zzkv) list;
            iZzB = 0;
            while (i < size) {
                long jZza = zzkvVar.zza(i);
                iZzB += zzjg.zzB((jZza >> 63) ^ (jZza + jZza));
                i++;
            }
        } else {
            iZzB = 0;
            while (i < size) {
                long jLongValue = ((Long) list.get(i)).longValue();
                iZzB += zzjg.zzB((jLongValue >> 63) ^ (jLongValue + jLongValue));
                i++;
            }
        }
        return iZzB;
    }

    static int zzu(int i, List list) {
        int size = list.size();
        int i2 = 0;
        if (size == 0) {
            return 0;
        }
        int iZzz = zzjg.zzz(i) * size;
        if (list instanceof zzko) {
            zzko zzkoVar = (zzko) list;
            while (i2 < size) {
                Object objZzf = zzkoVar.zzf(i2);
                iZzz += objZzf instanceof zziy ? zzjg.zzt((zziy) objZzf) : zzjg.zzy((String) objZzf);
                i2++;
            }
        } else {
            while (i2 < size) {
                Object obj = list.get(i2);
                iZzz += obj instanceof zziy ? zzjg.zzt((zziy) obj) : zzjg.zzy((String) obj);
                i2++;
            }
        }
        return iZzz;
    }

    static int zzv(int i, List list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return zzw(list) + (size * zzjg.zzz(i));
    }

    static int zzw(List list) {
        int iZzA;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof zzka) {
            zzka zzkaVar = (zzka) list;
            iZzA = 0;
            while (i < size) {
                iZzA += zzjg.zzA(zzkaVar.zze(i));
                i++;
            }
        } else {
            iZzA = 0;
            while (i < size) {
                iZzA += zzjg.zzA(((Integer) list.get(i)).intValue());
                i++;
            }
        }
        return iZzA;
    }

    static int zzx(int i, List list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return zzy(list) + (size * zzjg.zzz(i));
    }

    static int zzy(List list) {
        int iZzB;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof zzkv) {
            zzkv zzkvVar = (zzkv) list;
            iZzB = 0;
            while (i < size) {
                iZzB += zzjg.zzB(zzkvVar.zza(i));
                i++;
            }
        } else {
            iZzB = 0;
            while (i < size) {
                iZzB += zzjg.zzB(((Long) list.get(i)).longValue());
                i++;
            }
        }
        return iZzB;
    }

    public static zzmi zzz() {
        return zzb;
    }
}
