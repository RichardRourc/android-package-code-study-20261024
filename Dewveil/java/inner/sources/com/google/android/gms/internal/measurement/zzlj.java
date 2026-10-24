package com.google.android.gms.internal.measurement;

import java.io.IOException;
import java.lang.reflect.Field;
import java.util.Arrays;
import java.util.List;
import sun.misc.Unsafe;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzlj<T> implements zzlr<T> {
    private static final int[] zza = new int[0];
    private static final Unsafe zzb = zzms.zzg();
    private final int[] zzc;
    private final Object[] zzd;
    private final int zze;
    private final int zzf;
    private final zzlg zzg;
    private final boolean zzh;
    private final boolean zzi;
    private final int[] zzj;
    private final int zzk;
    private final int zzl;
    private final zzku zzm;
    private final zzmi zzn;
    private final zzjm zzo;
    private final zzll zzp;
    private final zzlb zzq;

    private zzlj(int[] iArr, Object[] objArr, int i, int i2, zzlg zzlgVar, boolean z, boolean z2, int[] iArr2, int i3, int i4, zzll zzllVar, zzku zzkuVar, zzmi zzmiVar, zzjm zzjmVar, zzlb zzlbVar, byte[] bArr) {
        this.zzc = iArr;
        this.zzd = objArr;
        this.zze = i;
        this.zzf = i2;
        this.zzi = z;
        boolean z3 = false;
        if (zzjmVar != null && zzjmVar.zzc(zzlgVar)) {
            z3 = true;
        }
        this.zzh = z3;
        this.zzj = iArr2;
        this.zzk = i3;
        this.zzl = i4;
        this.zzp = zzllVar;
        this.zzm = zzkuVar;
        this.zzn = zzmiVar;
        this.zzo = zzjmVar;
        this.zzg = zzlgVar;
        this.zzq = zzlbVar;
    }

    private static int zzA(int i) {
        return (i >>> 20) & 255;
    }

    private final int zzB(int i) {
        return this.zzc[i + 1];
    }

    private static long zzC(Object obj, long j) {
        return ((Long) zzms.zzf(obj, j)).longValue();
    }

    private final zzkd zzD(int i) {
        int i2 = i / 3;
        return (zzkd) this.zzd[i2 + i2 + 1];
    }

    private final zzlr zzE(int i) {
        int i2 = i / 3;
        int i3 = i2 + i2;
        zzlr zzlrVar = (zzlr) this.zzd[i3];
        if (zzlrVar != null) {
            return zzlrVar;
        }
        zzlr zzlrVarZzb = zzlo.zza().zzb((Class) this.zzd[i3 + 1]);
        this.zzd[i3] = zzlrVarZzb;
        return zzlrVarZzb;
    }

    private final Object zzF(int i) {
        int i2 = i / 3;
        return this.zzd[i2 + i2];
    }

    private static Field zzG(Class cls, String str) {
        try {
            return cls.getDeclaredField(str);
        } catch (NoSuchFieldException unused) {
            Field[] declaredFields = cls.getDeclaredFields();
            for (Field field : declaredFields) {
                if (str.equals(field.getName())) {
                    return field;
                }
            }
            String name = cls.getName();
            String string = Arrays.toString(declaredFields);
            StringBuilder sb = new StringBuilder(String.valueOf(str).length() + 40 + String.valueOf(name).length() + String.valueOf(string).length());
            sb.append("Field ");
            sb.append(str);
            sb.append(" for ");
            sb.append(name);
            sb.append(" not found. Known fields are ");
            sb.append(string);
            throw new RuntimeException(sb.toString());
        }
    }

    private final void zzH(Object obj, Object obj2, int i) {
        long jZzB = zzB(i) & 1048575;
        if (zzM(obj2, i)) {
            Object objZzf = zzms.zzf(obj, jZzB);
            Object objZzf2 = zzms.zzf(obj2, jZzB);
            if (objZzf != null && objZzf2 != null) {
                zzms.zzs(obj, jZzB, zzkh.zzg(objZzf, objZzf2));
                zzJ(obj, i);
            } else if (objZzf2 != null) {
                zzms.zzs(obj, jZzB, objZzf2);
                zzJ(obj, i);
            }
        }
    }

    private final void zzI(Object obj, Object obj2, int i) {
        int iZzB = zzB(i);
        int i2 = this.zzc[i];
        long j = iZzB & 1048575;
        if (zzP(obj2, i2, i)) {
            Object objZzf = zzP(obj, i2, i) ? zzms.zzf(obj, j) : null;
            Object objZzf2 = zzms.zzf(obj2, j);
            if (objZzf != null && objZzf2 != null) {
                zzms.zzs(obj, j, zzkh.zzg(objZzf, objZzf2));
                zzK(obj, i2, i);
            } else if (objZzf2 != null) {
                zzms.zzs(obj, j, objZzf2);
                zzK(obj, i2, i);
            }
        }
    }

    private final void zzJ(Object obj, int i) {
        int iZzy = zzy(i);
        long j = 1048575 & iZzy;
        if (j == 1048575) {
            return;
        }
        zzms.zzq(obj, j, (1 << (iZzy >>> 20)) | zzms.zzc(obj, j));
    }

    private final void zzK(Object obj, int i, int i2) {
        zzms.zzq(obj, zzy(i2) & 1048575, i);
    }

    private final boolean zzL(Object obj, Object obj2, int i) {
        return zzM(obj, i) == zzM(obj2, i);
    }

    private final boolean zzM(Object obj, int i) {
        int iZzy = zzy(i);
        long j = iZzy & 1048575;
        if (j != 1048575) {
            return (zzms.zzc(obj, j) & (1 << (iZzy >>> 20))) != 0;
        }
        int iZzB = zzB(i);
        long j2 = iZzB & 1048575;
        switch (zzA(iZzB)) {
            case 0:
                return Double.doubleToRawLongBits(zzms.zza(obj, j2)) != 0;
            case 1:
                return Float.floatToRawIntBits(zzms.zzb(obj, j2)) != 0;
            case 2:
                return zzms.zzd(obj, j2) != 0;
            case 3:
                return zzms.zzd(obj, j2) != 0;
            case 4:
                return zzms.zzc(obj, j2) != 0;
            case 5:
                return zzms.zzd(obj, j2) != 0;
            case 6:
                return zzms.zzc(obj, j2) != 0;
            case 7:
                return zzms.zzw(obj, j2);
            case 8:
                Object objZzf = zzms.zzf(obj, j2);
                if (objZzf instanceof String) {
                    return !((String) objZzf).isEmpty();
                }
                if (objZzf instanceof zziy) {
                    return !zziy.zzb.equals(objZzf);
                }
                throw new IllegalArgumentException();
            case 9:
                return zzms.zzf(obj, j2) != null;
            case 10:
                return !zziy.zzb.equals(zzms.zzf(obj, j2));
            case 11:
                return zzms.zzc(obj, j2) != 0;
            case 12:
                return zzms.zzc(obj, j2) != 0;
            case 13:
                return zzms.zzc(obj, j2) != 0;
            case 14:
                return zzms.zzd(obj, j2) != 0;
            case 15:
                return zzms.zzc(obj, j2) != 0;
            case 16:
                return zzms.zzd(obj, j2) != 0;
            case 17:
                return zzms.zzf(obj, j2) != null;
            default:
                throw new IllegalArgumentException();
        }
    }

    private final boolean zzN(Object obj, int i, int i2, int i3, int i4) {
        if (i2 == 1048575) {
            return zzM(obj, i);
        }
        return (i3 & i4) != 0;
    }

    private static boolean zzO(Object obj, int i, zzlr zzlrVar) {
        return zzlrVar.zzj(zzms.zzf(obj, i & 1048575));
    }

    private final boolean zzP(Object obj, int i, int i2) {
        return zzms.zzc(obj, (long) (zzy(i2) & 1048575)) == i;
    }

    private static boolean zzQ(Object obj, long j) {
        return ((Boolean) zzms.zzf(obj, j)).booleanValue();
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    private final void zzR(Object obj, zzjh zzjhVar) throws IOException {
        int i;
        boolean z;
        if (this.zzh) {
            this.zzo.zza(obj);
            throw null;
        }
        int length = this.zzc.length;
        Unsafe unsafe = zzb;
        int i2 = 1048575;
        int i3 = 1048575;
        int i4 = 0;
        int i5 = 0;
        while (i4 < length) {
            int iZzB = zzB(i4);
            int[] iArr = this.zzc;
            int i6 = iArr[i4];
            int iZzA = zzA(iZzB);
            if (iZzA <= 17) {
                int i7 = iArr[i4 + 2];
                int i8 = i7 & i2;
                if (i8 != i3) {
                    i5 = unsafe.getInt(obj, i8);
                    i3 = i8;
                }
                i = 1 << (i7 >>> 20);
            } else {
                i = 0;
            }
            long j = iZzB & i2;
            switch (iZzA) {
                case 0:
                    if ((i5 & i) != 0) {
                        zzjhVar.zzf(i6, zzms.zza(obj, j));
                    }
                    break;
                case 1:
                    if ((i5 & i) != 0) {
                        zzjhVar.zzo(i6, zzms.zzb(obj, j));
                    }
                    break;
                case 2:
                    if ((i5 & i) != 0) {
                        zzjhVar.zzt(i6, unsafe.getLong(obj, j));
                    }
                    break;
                case 3:
                    if ((i5 & i) != 0) {
                        zzjhVar.zzJ(i6, unsafe.getLong(obj, j));
                    }
                    break;
                case 4:
                    if ((i5 & i) != 0) {
                        zzjhVar.zzr(i6, unsafe.getInt(obj, j));
                    }
                    break;
                case 5:
                    if ((i5 & i) != 0) {
                        zzjhVar.zzm(i6, unsafe.getLong(obj, j));
                    }
                    break;
                case 6:
                    if ((i5 & i) != 0) {
                        zzjhVar.zzk(i6, unsafe.getInt(obj, j));
                    }
                    break;
                case 7:
                    if ((i5 & i) != 0) {
                        zzjhVar.zzb(i6, zzms.zzw(obj, j));
                    }
                    break;
                case 8:
                    if ((i5 & i) != 0) {
                        zzT(i6, unsafe.getObject(obj, j), zzjhVar);
                    }
                    break;
                case 9:
                    if ((i5 & i) != 0) {
                        zzjhVar.zzv(i6, unsafe.getObject(obj, j), zzE(i4));
                    }
                    break;
                case 10:
                    if ((i5 & i) != 0) {
                        zzjhVar.zzd(i6, (zziy) unsafe.getObject(obj, j));
                    }
                    break;
                case 11:
                    if ((i5 & i) != 0) {
                        zzjhVar.zzH(i6, unsafe.getInt(obj, j));
                    }
                    break;
                case 12:
                    if ((i5 & i) != 0) {
                        zzjhVar.zzi(i6, unsafe.getInt(obj, j));
                    }
                    break;
                case 13:
                    if ((i5 & i) != 0) {
                        zzjhVar.zzw(i6, unsafe.getInt(obj, j));
                    }
                    break;
                case 14:
                    if ((i5 & i) != 0) {
                        zzjhVar.zzy(i6, unsafe.getLong(obj, j));
                    }
                    break;
                case 15:
                    if ((i5 & i) != 0) {
                        zzjhVar.zzA(i6, unsafe.getInt(obj, j));
                    }
                    break;
                case 16:
                    if ((i5 & i) != 0) {
                        zzjhVar.zzC(i6, unsafe.getLong(obj, j));
                    }
                    break;
                case 17:
                    if ((i5 & i) != 0) {
                        zzjhVar.zzq(i6, unsafe.getObject(obj, j), zzE(i4));
                    }
                    break;
                case 18:
                    zzlt.zzL(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, false);
                    break;
                case 19:
                    zzlt.zzP(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, false);
                    break;
                case 20:
                    zzlt.zzS(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, false);
                    break;
                case 21:
                    zzlt.zzaa(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, false);
                    break;
                case 22:
                    zzlt.zzR(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, false);
                    break;
                case 23:
                    zzlt.zzO(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, false);
                    break;
                case 24:
                    zzlt.zzN(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, false);
                    break;
                case 25:
                    zzlt.zzJ(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, false);
                    break;
                case 26:
                    zzlt.zzY(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar);
                    break;
                case 27:
                    zzlt.zzT(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, zzE(i4));
                    break;
                case 28:
                    zzlt.zzK(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar);
                    break;
                case 29:
                    z = false;
                    zzlt.zzZ(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, false);
                    break;
                case 30:
                    z = false;
                    zzlt.zzM(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, false);
                    break;
                case 31:
                    z = false;
                    zzlt.zzU(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, false);
                    break;
                case 32:
                    z = false;
                    zzlt.zzV(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, false);
                    break;
                case 33:
                    z = false;
                    zzlt.zzW(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, false);
                    break;
                case 34:
                    z = false;
                    zzlt.zzX(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, false);
                    break;
                case 35:
                    zzlt.zzL(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, true);
                    break;
                case 36:
                    zzlt.zzP(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, true);
                    break;
                case 37:
                    zzlt.zzS(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, true);
                    break;
                case 38:
                    zzlt.zzaa(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, true);
                    break;
                case 39:
                    zzlt.zzR(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, true);
                    break;
                case 40:
                    zzlt.zzO(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, true);
                    break;
                case 41:
                    zzlt.zzN(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, true);
                    break;
                case 42:
                    zzlt.zzJ(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, true);
                    break;
                case 43:
                    zzlt.zzZ(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, true);
                    break;
                case 44:
                    zzlt.zzM(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, true);
                    break;
                case 45:
                    zzlt.zzU(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, true);
                    break;
                case 46:
                    zzlt.zzV(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, true);
                    break;
                case 47:
                    zzlt.zzW(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, true);
                    break;
                case 48:
                    zzlt.zzX(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, true);
                    break;
                case 49:
                    zzlt.zzQ(this.zzc[i4], (List) unsafe.getObject(obj, j), zzjhVar, zzE(i4));
                    break;
                case 50:
                    zzS(zzjhVar, i6, unsafe.getObject(obj, j), i4);
                    break;
                case 51:
                    if (zzP(obj, i6, i4)) {
                        zzjhVar.zzf(i6, zzn(obj, j));
                    }
                    break;
                case 52:
                    if (zzP(obj, i6, i4)) {
                        zzjhVar.zzo(i6, zzo(obj, j));
                    }
                    break;
                case 53:
                    if (zzP(obj, i6, i4)) {
                        zzjhVar.zzt(i6, zzC(obj, j));
                    }
                    break;
                case 54:
                    if (zzP(obj, i6, i4)) {
                        zzjhVar.zzJ(i6, zzC(obj, j));
                    }
                    break;
                case 55:
                    if (zzP(obj, i6, i4)) {
                        zzjhVar.zzr(i6, zzr(obj, j));
                    }
                    break;
                case 56:
                    if (zzP(obj, i6, i4)) {
                        zzjhVar.zzm(i6, zzC(obj, j));
                    }
                    break;
                case 57:
                    if (zzP(obj, i6, i4)) {
                        zzjhVar.zzk(i6, zzr(obj, j));
                    }
                    break;
                case 58:
                    if (zzP(obj, i6, i4)) {
                        zzjhVar.zzb(i6, zzQ(obj, j));
                    }
                    break;
                case 59:
                    if (zzP(obj, i6, i4)) {
                        zzT(i6, unsafe.getObject(obj, j), zzjhVar);
                    }
                    break;
                case 60:
                    if (zzP(obj, i6, i4)) {
                        zzjhVar.zzv(i6, unsafe.getObject(obj, j), zzE(i4));
                    }
                    break;
                case 61:
                    if (zzP(obj, i6, i4)) {
                        zzjhVar.zzd(i6, (zziy) unsafe.getObject(obj, j));
                    }
                    break;
                case 62:
                    if (zzP(obj, i6, i4)) {
                        zzjhVar.zzH(i6, zzr(obj, j));
                    }
                    break;
                case 63:
                    if (zzP(obj, i6, i4)) {
                        zzjhVar.zzi(i6, zzr(obj, j));
                    }
                    break;
                case 64:
                    if (zzP(obj, i6, i4)) {
                        zzjhVar.zzw(i6, zzr(obj, j));
                    }
                    break;
                case 65:
                    if (zzP(obj, i6, i4)) {
                        zzjhVar.zzy(i6, zzC(obj, j));
                    }
                    break;
                case 66:
                    if (zzP(obj, i6, i4)) {
                        zzjhVar.zzA(i6, zzr(obj, j));
                    }
                    break;
                case 67:
                    if (zzP(obj, i6, i4)) {
                        zzjhVar.zzC(i6, zzC(obj, j));
                    }
                    break;
                case 68:
                    if (zzP(obj, i6, i4)) {
                        zzjhVar.zzq(i6, unsafe.getObject(obj, j), zzE(i4));
                    }
                    break;
                default:
                    break;
            }
            i4 += 3;
            i2 = 1048575;
        }
        zzmi zzmiVar = this.zzn;
        zzmiVar.zzi(zzmiVar.zzc(obj), zzjhVar);
    }

    private final void zzS(zzjh zzjhVar, int i, Object obj, int i2) throws IOException {
        if (obj == null) {
            return;
        }
        throw null;
    }

    private static final void zzT(int i, Object obj, zzjh zzjhVar) throws IOException {
        if (obj instanceof String) {
            zzjhVar.zzF(i, (String) obj);
        } else {
            zzjhVar.zzd(i, (zziy) obj);
        }
    }

    static zzmj zzd(Object obj) {
        zzjz zzjzVar = (zzjz) obj;
        zzmj zzmjVar = zzjzVar.zzc;
        if (zzmjVar != zzmj.zzc()) {
            return zzmjVar;
        }
        zzmj zzmjVarZze = zzmj.zze();
        zzjzVar.zzc = zzmjVarZze;
        return zzmjVarZze;
    }

    static zzlj zzk(Class cls, zzld zzldVar, zzll zzllVar, zzku zzkuVar, zzmi zzmiVar, zzjm zzjmVar, zzlb zzlbVar) {
        if (zzldVar instanceof zzlq) {
            return zzl((zzlq) zzldVar, zzllVar, zzkuVar, zzmiVar, zzjmVar, zzlbVar);
        }
        throw null;
    }

    /* JADX WARN: Code duplicated, block: B:123:0x025e  */
    /* JADX WARN: Code duplicated, block: B:124:0x0261  */
    /* JADX WARN: Code duplicated, block: B:127:0x0279  */
    /* JADX WARN: Code duplicated, block: B:128:0x027c  */
    /* JADX WARN: Code duplicated, block: B:162:0x0330  */
    /* JADX WARN: Code duplicated, block: B:177:0x037f  */
    /* JADX WARN: Code duplicated, block: B:180:0x0389  */
    static zzlj zzl(zzlq zzlqVar, zzll zzllVar, zzku zzkuVar, zzmi zzmiVar, zzjm zzjmVar, zzlb zzlbVar) {
        int i;
        int iCharAt;
        int iCharAt2;
        int iCharAt3;
        int[] iArr;
        int i2;
        int i3;
        int i4;
        int i5;
        int i6;
        char cCharAt;
        int i7;
        char cCharAt2;
        int i8;
        char cCharAt3;
        int i9;
        char cCharAt4;
        int i10;
        char cCharAt5;
        int i11;
        char cCharAt6;
        int i12;
        char cCharAt7;
        int i13;
        char cCharAt8;
        int i14;
        int i15;
        int i16;
        int[] iArr2;
        int i17;
        int i18;
        int i19;
        int iObjectFieldOffset;
        int iObjectFieldOffset2;
        Object[] objArr;
        int i20;
        int i21;
        Field fieldZzG;
        char cCharAt9;
        int i22;
        int i23;
        int i24;
        int i25;
        Object obj;
        Field fieldZzG2;
        int i26;
        Object obj2;
        Field fieldZzG3;
        int i27;
        char cCharAt10;
        int i28;
        char cCharAt11;
        int i29;
        char cCharAt12;
        int i30;
        char cCharAt13;
        boolean z = zzlqVar.zzc() == 2;
        String strZzd = zzlqVar.zzd();
        int length = strZzd.length();
        char c = 55296;
        if (strZzd.charAt(0) >= 55296) {
            int i31 = 1;
            while (true) {
                i = i31 + 1;
                if (strZzd.charAt(i31) < 55296) {
                    break;
                }
                i31 = i;
            }
        } else {
            i = 1;
        }
        int i32 = i + 1;
        int iCharAt4 = strZzd.charAt(i);
        if (iCharAt4 >= 55296) {
            int i33 = iCharAt4 & 8191;
            int i34 = 13;
            while (true) {
                i30 = i32 + 1;
                cCharAt13 = strZzd.charAt(i32);
                if (cCharAt13 < 55296) {
                    break;
                }
                i33 |= (cCharAt13 & 8191) << i34;
                i34 += 13;
                i32 = i30;
            }
            iCharAt4 = i33 | (cCharAt13 << i34);
            i32 = i30;
        }
        if (iCharAt4 == 0) {
            iCharAt = 0;
            i5 = 0;
            iCharAt2 = 0;
            i4 = 0;
            iCharAt3 = 0;
            i2 = 0;
            iArr = zza;
            i3 = 0;
        } else {
            int i35 = i32 + 1;
            int iCharAt5 = strZzd.charAt(i32);
            if (iCharAt5 >= 55296) {
                int i36 = iCharAt5 & 8191;
                int i37 = 13;
                while (true) {
                    i13 = i35 + 1;
                    cCharAt8 = strZzd.charAt(i35);
                    if (cCharAt8 < 55296) {
                        break;
                    }
                    i36 |= (cCharAt8 & 8191) << i37;
                    i37 += 13;
                    i35 = i13;
                }
                iCharAt5 = i36 | (cCharAt8 << i37);
                i35 = i13;
            }
            int i38 = i35 + 1;
            int iCharAt6 = strZzd.charAt(i35);
            if (iCharAt6 >= 55296) {
                int i39 = iCharAt6 & 8191;
                int i40 = 13;
                while (true) {
                    i12 = i38 + 1;
                    cCharAt7 = strZzd.charAt(i38);
                    if (cCharAt7 < 55296) {
                        break;
                    }
                    i39 |= (cCharAt7 & 8191) << i40;
                    i40 += 13;
                    i38 = i12;
                }
                iCharAt6 = i39 | (cCharAt7 << i40);
                i38 = i12;
            }
            int i41 = i38 + 1;
            iCharAt = strZzd.charAt(i38);
            if (iCharAt >= 55296) {
                int i42 = iCharAt & 8191;
                int i43 = 13;
                while (true) {
                    i11 = i41 + 1;
                    cCharAt6 = strZzd.charAt(i41);
                    if (cCharAt6 < 55296) {
                        break;
                    }
                    i42 |= (cCharAt6 & 8191) << i43;
                    i43 += 13;
                    i41 = i11;
                }
                iCharAt = i42 | (cCharAt6 << i43);
                i41 = i11;
            }
            int i44 = i41 + 1;
            int iCharAt7 = strZzd.charAt(i41);
            if (iCharAt7 >= 55296) {
                int i45 = iCharAt7 & 8191;
                int i46 = 13;
                while (true) {
                    i10 = i44 + 1;
                    cCharAt5 = strZzd.charAt(i44);
                    if (cCharAt5 < 55296) {
                        break;
                    }
                    i45 |= (cCharAt5 & 8191) << i46;
                    i46 += 13;
                    i44 = i10;
                }
                iCharAt7 = i45 | (cCharAt5 << i46);
                i44 = i10;
            }
            int i47 = i44 + 1;
            iCharAt2 = strZzd.charAt(i44);
            if (iCharAt2 >= 55296) {
                int i48 = iCharAt2 & 8191;
                int i49 = 13;
                while (true) {
                    i9 = i47 + 1;
                    cCharAt4 = strZzd.charAt(i47);
                    if (cCharAt4 < 55296) {
                        break;
                    }
                    i48 |= (cCharAt4 & 8191) << i49;
                    i49 += 13;
                    i47 = i9;
                }
                iCharAt2 = i48 | (cCharAt4 << i49);
                i47 = i9;
            }
            int i50 = i47 + 1;
            int iCharAt8 = strZzd.charAt(i47);
            if (iCharAt8 >= 55296) {
                int i51 = iCharAt8 & 8191;
                int i52 = 13;
                while (true) {
                    i8 = i50 + 1;
                    cCharAt3 = strZzd.charAt(i50);
                    if (cCharAt3 < 55296) {
                        break;
                    }
                    i51 |= (cCharAt3 & 8191) << i52;
                    i52 += 13;
                    i50 = i8;
                }
                iCharAt8 = i51 | (cCharAt3 << i52);
                i50 = i8;
            }
            int i53 = i50 + 1;
            int iCharAt9 = strZzd.charAt(i50);
            if (iCharAt9 >= 55296) {
                int i54 = iCharAt9 & 8191;
                int i55 = 13;
                while (true) {
                    i7 = i53 + 1;
                    cCharAt2 = strZzd.charAt(i53);
                    if (cCharAt2 < 55296) {
                        break;
                    }
                    i54 |= (cCharAt2 & 8191) << i55;
                    i55 += 13;
                    i53 = i7;
                }
                iCharAt9 = i54 | (cCharAt2 << i55);
                i53 = i7;
            }
            int i56 = i53 + 1;
            iCharAt3 = strZzd.charAt(i53);
            if (iCharAt3 >= 55296) {
                int i57 = iCharAt3 & 8191;
                int i58 = 13;
                while (true) {
                    i6 = i56 + 1;
                    cCharAt = strZzd.charAt(i56);
                    if (cCharAt < 55296) {
                        break;
                    }
                    i57 |= (cCharAt & 8191) << i58;
                    i58 += 13;
                    i56 = i6;
                }
                iCharAt3 = i57 | (cCharAt << i58);
                i56 = i6;
            }
            iArr = new int[iCharAt3 + iCharAt8 + iCharAt9];
            i2 = iCharAt5 + iCharAt5 + iCharAt6;
            i3 = iCharAt5;
            i32 = i56;
            int i59 = iCharAt8;
            i4 = iCharAt7;
            i5 = i59;
        }
        Unsafe unsafe = zzb;
        Object[] objArrZze = zzlqVar.zze();
        Class<?> cls = zzlqVar.zza().getClass();
        int[] iArr3 = new int[iCharAt2 * 3];
        Object[] objArr2 = new Object[iCharAt2 + iCharAt2];
        int i60 = iCharAt3 + i5;
        int i61 = iCharAt3;
        int i62 = i60;
        int i63 = 0;
        int i64 = 0;
        while (i32 < length) {
            int i65 = i32 + 1;
            int iCharAt10 = strZzd.charAt(i32);
            if (iCharAt10 >= c) {
                int i66 = iCharAt10 & 8191;
                int i67 = i65;
                int i68 = 13;
                while (true) {
                    i29 = i67 + 1;
                    cCharAt12 = strZzd.charAt(i67);
                    if (cCharAt12 < c) {
                        break;
                    }
                    i66 |= (cCharAt12 & 8191) << i68;
                    i68 += 13;
                    i67 = i29;
                }
                iCharAt10 = i66 | (cCharAt12 << i68);
                i14 = i29;
            } else {
                i14 = i65;
            }
            int i69 = i14 + 1;
            int iCharAt11 = strZzd.charAt(i14);
            if (iCharAt11 >= c) {
                int i70 = iCharAt11 & 8191;
                int i71 = i69;
                int i72 = 13;
                while (true) {
                    i28 = i71 + 1;
                    cCharAt11 = strZzd.charAt(i71);
                    i15 = length;
                    if (cCharAt11 < 55296) {
                        break;
                    }
                    i70 |= (cCharAt11 & 8191) << i72;
                    i72 += 13;
                    i71 = i28;
                    length = i15;
                }
                iCharAt11 = i70 | (cCharAt11 << i72);
                i16 = i28;
            } else {
                i15 = length;
                i16 = i69;
            }
            int i73 = iCharAt11 & 255;
            int i74 = iCharAt3;
            if ((iCharAt11 & 1024) != 0) {
                iArr[i64] = i63;
                i64++;
            }
            if (i73 >= 51) {
                int i75 = i16 + 1;
                int iCharAt12 = strZzd.charAt(i16);
                if (iCharAt12 >= 55296) {
                    int i76 = iCharAt12 & 8191;
                    int i77 = i75;
                    int i78 = 13;
                    while (true) {
                        i27 = i77 + 1;
                        cCharAt10 = strZzd.charAt(i77);
                        i18 = i4;
                        if (cCharAt10 < 55296) {
                            break;
                        }
                        i76 |= (cCharAt10 & 8191) << i78;
                        i78 += 13;
                        i77 = i27;
                        i4 = i18;
                    }
                    iCharAt12 = i76 | (cCharAt10 << i78);
                    i23 = i27;
                } else {
                    i18 = i4;
                    i23 = i75;
                }
                int i79 = i73 - 51;
                int i80 = i23;
                if (i79 == 9 || i79 == 17) {
                    int i81 = i63 / 3;
                    i24 = i2 + 1;
                    objArr2[i81 + i81 + 1] = objArrZze[i2];
                } else {
                    if (i79 == 12 && !z) {
                        int i82 = i63 / 3;
                        i24 = i2 + 1;
                        objArr2[i82 + i82 + 1] = objArrZze[i2];
                    }
                    i25 = iCharAt12 + iCharAt12;
                    obj = objArrZze[i25];
                    if (obj instanceof Field) {
                        fieldZzG2 = (Field) obj;
                    } else {
                        fieldZzG2 = zzG(cls, (String) obj);
                        objArrZze[i25] = fieldZzG2;
                    }
                    iArr2 = iArr3;
                    i17 = iCharAt;
                    int iObjectFieldOffset3 = (int) unsafe.objectFieldOffset(fieldZzG2);
                    i26 = i25 + 1;
                    obj2 = objArrZze[i26];
                    if (obj2 instanceof Field) {
                        fieldZzG3 = (Field) obj2;
                    } else {
                        fieldZzG3 = zzG(cls, (String) obj2);
                        objArrZze[i26] = fieldZzG3;
                    }
                    strZzd = strZzd;
                    objArr = objArr2;
                    i19 = i2;
                    i20 = i80;
                    iObjectFieldOffset2 = (int) unsafe.objectFieldOffset(fieldZzG3);
                    iObjectFieldOffset = iObjectFieldOffset3;
                    i21 = 0;
                }
                i2 = i24;
                i25 = iCharAt12 + iCharAt12;
                obj = objArrZze[i25];
                if (obj instanceof Field) {
                    fieldZzG2 = (Field) obj;
                } else {
                    fieldZzG2 = zzG(cls, (String) obj);
                    objArrZze[i25] = fieldZzG2;
                }
                iArr2 = iArr3;
                i17 = iCharAt;
                int iObjectFieldOffset4 = (int) unsafe.objectFieldOffset(fieldZzG2);
                i26 = i25 + 1;
                obj2 = objArrZze[i26];
                if (obj2 instanceof Field) {
                    fieldZzG3 = (Field) obj2;
                } else {
                    fieldZzG3 = zzG(cls, (String) obj2);
                    objArrZze[i26] = fieldZzG3;
                }
                strZzd = strZzd;
                objArr = objArr2;
                i19 = i2;
                i20 = i80;
                iObjectFieldOffset2 = (int) unsafe.objectFieldOffset(fieldZzG3);
                iObjectFieldOffset = iObjectFieldOffset4;
                i21 = 0;
            } else {
                iArr2 = iArr3;
                i17 = iCharAt;
                i18 = i4;
                int i83 = i2 + 1;
                Field fieldZzG4 = zzG(cls, (String) objArrZze[i2]);
                if (i73 == 9 || i73 == 17) {
                    int i84 = i63 / 3;
                    objArr2[i84 + i84 + 1] = fieldZzG4.getType();
                } else {
                    if (i73 == 27 || i73 == 49) {
                        int i85 = i63 / 3;
                        i22 = i2 + 2;
                        objArr2[i85 + i85 + 1] = objArrZze[i83];
                    } else if (i73 == 12 || i73 == 30 || i73 == 44) {
                        if (!z) {
                            int i86 = i63 / 3;
                            i22 = i2 + 2;
                            objArr2[i86 + i86 + 1] = objArrZze[i83];
                        }
                    } else if (i73 == 50) {
                        int i87 = i61 + 1;
                        iArr[i61] = i63;
                        int i88 = i63 / 3;
                        int i89 = i88 + i88;
                        int i90 = i2 + 2;
                        objArr2[i89] = objArrZze[i83];
                        if ((iCharAt11 & 2048) != 0) {
                            i83 = i2 + 3;
                            objArr2[i89 + 1] = objArrZze[i90];
                            i61 = i87;
                        } else {
                            i61 = i87;
                            i19 = i90;
                        }
                        iObjectFieldOffset = (int) unsafe.objectFieldOffset(fieldZzG4);
                        iObjectFieldOffset2 = 1048575;
                        objArr = objArr2;
                        if ((iCharAt11 & 4096) == 4096 || i73 > 17) {
                            i20 = i16;
                            i21 = 0;
                        } else {
                            int i91 = i16 + 1;
                            int iCharAt13 = strZzd.charAt(i16);
                            if (iCharAt13 >= 55296) {
                                int i92 = iCharAt13 & 8191;
                                int i93 = 13;
                                while (true) {
                                    i20 = i91 + 1;
                                    cCharAt9 = strZzd.charAt(i91);
                                    if (cCharAt9 < 55296) {
                                        break;
                                    }
                                    i92 |= (cCharAt9 & 8191) << i93;
                                    i93 += 13;
                                    i91 = i20;
                                }
                                iCharAt13 = i92 | (cCharAt9 << i93);
                            } else {
                                i20 = i91;
                            }
                            int i94 = i3 + i3 + (iCharAt13 / 32);
                            Object obj3 = objArrZze[i94];
                            if (obj3 instanceof Field) {
                                fieldZzG = (Field) obj3;
                            } else {
                                fieldZzG = zzG(cls, (String) obj3);
                                objArrZze[i94] = fieldZzG;
                            }
                            i21 = iCharAt13 % 32;
                            iObjectFieldOffset2 = (int) unsafe.objectFieldOffset(fieldZzG);
                        }
                        if (i73 >= 18 && i73 <= 49) {
                            iArr[i62] = iObjectFieldOffset;
                            i62++;
                        }
                    }
                    i19 = i22;
                    iObjectFieldOffset = (int) unsafe.objectFieldOffset(fieldZzG4);
                    iObjectFieldOffset2 = 1048575;
                    objArr = objArr2;
                    if ((iCharAt11 & 4096) == 4096) {
                        i20 = i16;
                        i21 = 0;
                    } else {
                        i20 = i16;
                        i21 = 0;
                    }
                    if (i73 >= 18) {
                        iArr[i62] = iObjectFieldOffset;
                        i62++;
                    }
                }
                i19 = i83;
                iObjectFieldOffset = (int) unsafe.objectFieldOffset(fieldZzG4);
                iObjectFieldOffset2 = 1048575;
                objArr = objArr2;
                if ((iCharAt11 & 4096) == 4096) {
                    i20 = i16;
                    i21 = 0;
                } else {
                    i20 = i16;
                    i21 = 0;
                }
                if (i73 >= 18) {
                    iArr[i62] = iObjectFieldOffset;
                    i62++;
                }
            }
            int i95 = i63 + 1;
            iArr2[i63] = iCharAt10;
            int i96 = i63 + 2;
            iArr2[i95] = ((iCharAt11 & 256) != 0 ? 268435456 : 0) | ((iCharAt11 & 512) != 0 ? 536870912 : 0) | (i73 << 20) | iObjectFieldOffset;
            i63 += 3;
            iArr2[i96] = (i21 << 20) | iObjectFieldOffset2;
            i2 = i19;
            iCharAt = i17;
            iCharAt3 = i74;
            i32 = i20;
            length = i15;
            objArr2 = objArr;
            strZzd = strZzd;
            iArr3 = iArr2;
            i4 = i18;
            c = 55296;
        }
        return new zzlj(iArr3, objArr2, iCharAt, i4, zzlqVar.zza(), z, false, iArr, iCharAt3, i60, zzllVar, zzkuVar, zzmiVar, zzjmVar, zzlbVar, null);
    }

    private static double zzn(Object obj, long j) {
        return ((Double) zzms.zzf(obj, j)).doubleValue();
    }

    private static float zzo(Object obj, long j) {
        return ((Float) zzms.zzf(obj, j)).floatValue();
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    private final int zzp(Object obj) {
        int i;
        int iZzA;
        int iZzA2;
        int iZzA3;
        int iZzB;
        int iZzA4;
        int iZzv;
        int iZzA5;
        int iZzA6;
        int iZzd;
        int iZzA7;
        int i2;
        int iZzu;
        boolean z;
        int iZzd2;
        int iZzi;
        int iZzz;
        int iZzA8;
        int iZzA9;
        int iZzA10;
        int iZzA11;
        int iZzA12;
        int iZzB2;
        int iZzA13;
        int iZzd3;
        int iZzA14;
        int i3;
        Unsafe unsafe = zzb;
        int i4 = 1048575;
        int i5 = 1048575;
        int i6 = 0;
        int iZzA15 = 0;
        int i7 = 0;
        while (i6 < this.zzc.length) {
            int iZzB3 = zzB(i6);
            int[] iArr = this.zzc;
            int i8 = iArr[i6];
            int iZzA16 = zzA(iZzB3);
            if (iZzA16 <= 17) {
                int i9 = iArr[i6 + 2];
                int i10 = i9 & i4;
                i = 1 << (i9 >>> 20);
                if (i10 != i5) {
                    i7 = unsafe.getInt(obj, i10);
                    i5 = i10;
                }
            } else {
                i = 0;
            }
            long j = iZzB3 & i4;
            switch (iZzA16) {
                case 0:
                    if ((i7 & i) != 0) {
                        iZzA = zzjg.zzA(i8 << 3);
                        iZzA5 = iZzA + 8;
                        iZzA15 += iZzA5;
                    }
                    break;
                case 1:
                    if ((i7 & i) != 0) {
                        iZzA2 = zzjg.zzA(i8 << 3);
                        iZzA5 = iZzA2 + 4;
                        iZzA15 += iZzA5;
                    }
                    break;
                case 2:
                    if ((i7 & i) != 0) {
                        long j2 = unsafe.getLong(obj, j);
                        iZzA3 = zzjg.zzA(i8 << 3);
                        iZzB = zzjg.zzB(j2);
                        iZzA15 += iZzA3 + iZzB;
                    }
                    break;
                case 3:
                    if ((i7 & i) != 0) {
                        long j3 = unsafe.getLong(obj, j);
                        iZzA3 = zzjg.zzA(i8 << 3);
                        iZzB = zzjg.zzB(j3);
                        iZzA15 += iZzA3 + iZzB;
                    }
                    break;
                case 4:
                    if ((i7 & i) != 0) {
                        int i11 = unsafe.getInt(obj, j);
                        iZzA4 = zzjg.zzA(i8 << 3);
                        iZzv = zzjg.zzv(i11);
                        i2 = iZzA4 + iZzv;
                        iZzA15 += i2;
                    }
                    break;
                case 5:
                    if ((i7 & i) != 0) {
                        iZzA = zzjg.zzA(i8 << 3);
                        iZzA5 = iZzA + 8;
                        iZzA15 += iZzA5;
                    }
                    break;
                case 6:
                    if ((i7 & i) != 0) {
                        iZzA2 = zzjg.zzA(i8 << 3);
                        iZzA5 = iZzA2 + 4;
                        iZzA15 += iZzA5;
                    }
                    break;
                case 7:
                    if ((i7 & i) != 0) {
                        iZzA5 = zzjg.zzA(i8 << 3) + 1;
                        iZzA15 += iZzA5;
                    }
                    break;
                case 8:
                    if ((i7 & i) != 0) {
                        Object object = unsafe.getObject(obj, j);
                        if (!(object instanceof zziy)) {
                            iZzA4 = zzjg.zzA(i8 << 3);
                            iZzv = zzjg.zzy((String) object);
                            i2 = iZzA4 + iZzv;
                            iZzA15 += i2;
                        } else {
                            iZzA6 = zzjg.zzA(i8 << 3);
                            iZzd = ((zziy) object).zzd();
                            iZzA7 = zzjg.zzA(iZzd);
                            i2 = iZzA6 + iZzA7 + iZzd;
                            iZzA15 += i2;
                        }
                    }
                    break;
                case 9:
                    if ((i7 & i) != 0) {
                        iZzA5 = zzlt.zzo(i8, unsafe.getObject(obj, j), zzE(i6));
                        iZzA15 += iZzA5;
                    }
                    break;
                case 10:
                    if ((i7 & i) != 0) {
                        zziy zziyVar = (zziy) unsafe.getObject(obj, j);
                        iZzA6 = zzjg.zzA(i8 << 3);
                        iZzd = zziyVar.zzd();
                        iZzA7 = zzjg.zzA(iZzd);
                        i2 = iZzA6 + iZzA7 + iZzd;
                        iZzA15 += i2;
                    }
                    break;
                case 11:
                    if ((i7 & i) != 0) {
                        int i12 = unsafe.getInt(obj, j);
                        iZzA4 = zzjg.zzA(i8 << 3);
                        iZzv = zzjg.zzA(i12);
                        i2 = iZzA4 + iZzv;
                        iZzA15 += i2;
                    }
                    break;
                case 12:
                    if ((i7 & i) != 0) {
                        int i13 = unsafe.getInt(obj, j);
                        iZzA4 = zzjg.zzA(i8 << 3);
                        iZzv = zzjg.zzv(i13);
                        i2 = iZzA4 + iZzv;
                        iZzA15 += i2;
                    }
                    break;
                case 13:
                    if ((i7 & i) != 0) {
                        iZzA2 = zzjg.zzA(i8 << 3);
                        iZzA5 = iZzA2 + 4;
                        iZzA15 += iZzA5;
                    }
                    break;
                case 14:
                    if ((i7 & i) != 0) {
                        iZzA = zzjg.zzA(i8 << 3);
                        iZzA5 = iZzA + 8;
                        iZzA15 += iZzA5;
                    }
                    break;
                case 15:
                    if ((i7 & i) != 0) {
                        int i14 = unsafe.getInt(obj, j);
                        iZzA4 = zzjg.zzA(i8 << 3);
                        iZzv = zzjg.zzA((i14 >> 31) ^ (i14 + i14));
                        i2 = iZzA4 + iZzv;
                        iZzA15 += i2;
                    }
                    break;
                case 16:
                    if ((i & i7) != 0) {
                        long j4 = unsafe.getLong(obj, j);
                        iZzA15 += zzjg.zzA(i8 << 3) + zzjg.zzB((j4 >> 63) ^ (j4 + j4));
                    }
                    break;
                case 17:
                    if ((i7 & i) != 0) {
                        iZzA5 = zzjg.zzu(i8, (zzlg) unsafe.getObject(obj, j), zzE(i6));
                        iZzA15 += iZzA5;
                    }
                    break;
                case 18:
                    iZzA5 = zzlt.zzh(i8, (List) unsafe.getObject(obj, j), false);
                    iZzA15 += iZzA5;
                    break;
                case 19:
                    iZzA5 = zzlt.zzf(i8, (List) unsafe.getObject(obj, j), false);
                    iZzA15 += iZzA5;
                    break;
                case 20:
                    iZzA5 = zzlt.zzm(i8, (List) unsafe.getObject(obj, j), false);
                    iZzA15 += iZzA5;
                    break;
                case 21:
                    iZzA5 = zzlt.zzx(i8, (List) unsafe.getObject(obj, j), false);
                    iZzA15 += iZzA5;
                    break;
                case 22:
                    iZzA5 = zzlt.zzk(i8, (List) unsafe.getObject(obj, j), false);
                    iZzA15 += iZzA5;
                    break;
                case 23:
                    iZzA5 = zzlt.zzh(i8, (List) unsafe.getObject(obj, j), false);
                    iZzA15 += iZzA5;
                    break;
                case 24:
                    iZzA5 = zzlt.zzf(i8, (List) unsafe.getObject(obj, j), false);
                    iZzA15 += iZzA5;
                    break;
                case 25:
                    iZzA5 = zzlt.zza(i8, (List) unsafe.getObject(obj, j), false);
                    iZzA15 += iZzA5;
                    break;
                case 26:
                    iZzu = zzlt.zzu(i8, (List) unsafe.getObject(obj, j));
                    iZzA15 += iZzu;
                    break;
                case 27:
                    iZzu = zzlt.zzp(i8, (List) unsafe.getObject(obj, j), zzE(i6));
                    iZzA15 += iZzu;
                    break;
                case 28:
                    iZzu = zzlt.zzc(i8, (List) unsafe.getObject(obj, j));
                    iZzA15 += iZzu;
                    break;
                case 29:
                    iZzu = zzlt.zzv(i8, (List) unsafe.getObject(obj, j), false);
                    iZzA15 += iZzu;
                    break;
                case 30:
                    z = false;
                    iZzd2 = zzlt.zzd(i8, (List) unsafe.getObject(obj, j), false);
                    iZzA15 += iZzd2;
                    break;
                case 31:
                    z = false;
                    iZzd2 = zzlt.zzf(i8, (List) unsafe.getObject(obj, j), false);
                    iZzA15 += iZzd2;
                    break;
                case 32:
                    z = false;
                    iZzd2 = zzlt.zzh(i8, (List) unsafe.getObject(obj, j), false);
                    iZzA15 += iZzd2;
                    break;
                case 33:
                    z = false;
                    iZzd2 = zzlt.zzq(i8, (List) unsafe.getObject(obj, j), false);
                    iZzA15 += iZzd2;
                    break;
                case 34:
                    z = false;
                    iZzd2 = zzlt.zzs(i8, (List) unsafe.getObject(obj, j), false);
                    iZzA15 += iZzd2;
                    break;
                case 35:
                    iZzi = zzlt.zzi((List) unsafe.getObject(obj, j));
                    if (iZzi > 0) {
                        iZzz = zzjg.zzz(i8);
                        iZzA8 = zzjg.zzA(iZzi);
                        iZzA9 = iZzz + iZzA8;
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 36:
                    iZzi = zzlt.zzg((List) unsafe.getObject(obj, j));
                    if (iZzi > 0) {
                        iZzz = zzjg.zzz(i8);
                        iZzA8 = zzjg.zzA(iZzi);
                        iZzA9 = iZzz + iZzA8;
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 37:
                    iZzi = zzlt.zzn((List) unsafe.getObject(obj, j));
                    if (iZzi > 0) {
                        iZzz = zzjg.zzz(i8);
                        iZzA8 = zzjg.zzA(iZzi);
                        iZzA9 = iZzz + iZzA8;
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 38:
                    iZzi = zzlt.zzy((List) unsafe.getObject(obj, j));
                    if (iZzi > 0) {
                        iZzz = zzjg.zzz(i8);
                        iZzA8 = zzjg.zzA(iZzi);
                        iZzA9 = iZzz + iZzA8;
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 39:
                    iZzi = zzlt.zzl((List) unsafe.getObject(obj, j));
                    if (iZzi > 0) {
                        iZzz = zzjg.zzz(i8);
                        iZzA8 = zzjg.zzA(iZzi);
                        iZzA9 = iZzz + iZzA8;
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 40:
                    iZzi = zzlt.zzi((List) unsafe.getObject(obj, j));
                    if (iZzi > 0) {
                        iZzz = zzjg.zzz(i8);
                        iZzA8 = zzjg.zzA(iZzi);
                        iZzA9 = iZzz + iZzA8;
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 41:
                    iZzi = zzlt.zzg((List) unsafe.getObject(obj, j));
                    if (iZzi > 0) {
                        iZzz = zzjg.zzz(i8);
                        iZzA8 = zzjg.zzA(iZzi);
                        iZzA9 = iZzz + iZzA8;
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 42:
                    iZzi = zzlt.zzb((List) unsafe.getObject(obj, j));
                    if (iZzi > 0) {
                        iZzz = zzjg.zzz(i8);
                        iZzA8 = zzjg.zzA(iZzi);
                        iZzA9 = iZzz + iZzA8;
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 43:
                    iZzi = zzlt.zzw((List) unsafe.getObject(obj, j));
                    if (iZzi > 0) {
                        iZzz = zzjg.zzz(i8);
                        iZzA8 = zzjg.zzA(iZzi);
                        iZzA9 = iZzz + iZzA8;
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 44:
                    iZzi = zzlt.zze((List) unsafe.getObject(obj, j));
                    if (iZzi > 0) {
                        iZzz = zzjg.zzz(i8);
                        iZzA8 = zzjg.zzA(iZzi);
                        iZzA9 = iZzz + iZzA8;
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 45:
                    iZzi = zzlt.zzg((List) unsafe.getObject(obj, j));
                    if (iZzi > 0) {
                        iZzz = zzjg.zzz(i8);
                        iZzA8 = zzjg.zzA(iZzi);
                        iZzA9 = iZzz + iZzA8;
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 46:
                    iZzi = zzlt.zzi((List) unsafe.getObject(obj, j));
                    if (iZzi > 0) {
                        iZzz = zzjg.zzz(i8);
                        iZzA8 = zzjg.zzA(iZzi);
                        iZzA9 = iZzz + iZzA8;
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 47:
                    iZzi = zzlt.zzr((List) unsafe.getObject(obj, j));
                    if (iZzi > 0) {
                        iZzz = zzjg.zzz(i8);
                        iZzA8 = zzjg.zzA(iZzi);
                        iZzA9 = iZzz + iZzA8;
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 48:
                    iZzi = zzlt.zzt((List) unsafe.getObject(obj, j));
                    if (iZzi > 0) {
                        iZzz = zzjg.zzz(i8);
                        iZzA8 = zzjg.zzA(iZzi);
                        iZzA9 = iZzz + iZzA8;
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 49:
                    iZzu = zzlt.zzj(i8, (List) unsafe.getObject(obj, j), zzE(i6));
                    iZzA15 += iZzu;
                    break;
                case 50:
                    zzlb.zza(i8, unsafe.getObject(obj, j), zzF(i6));
                    break;
                case 51:
                    if (zzP(obj, i8, i6)) {
                        iZzA10 = zzjg.zzA(i8 << 3);
                        iZzu = iZzA10 + 8;
                        iZzA15 += iZzu;
                    }
                    break;
                case 52:
                    if (zzP(obj, i8, i6)) {
                        iZzA11 = zzjg.zzA(i8 << 3);
                        iZzu = iZzA11 + 4;
                        iZzA15 += iZzu;
                    }
                    break;
                case 53:
                    if (zzP(obj, i8, i6)) {
                        long jZzC = zzC(obj, j);
                        iZzA12 = zzjg.zzA(i8 << 3);
                        iZzB2 = zzjg.zzB(jZzC);
                        iZzA15 += iZzA12 + iZzB2;
                    }
                    break;
                case 54:
                    if (zzP(obj, i8, i6)) {
                        long jZzC2 = zzC(obj, j);
                        iZzA12 = zzjg.zzA(i8 << 3);
                        iZzB2 = zzjg.zzB(jZzC2);
                        iZzA15 += iZzA12 + iZzB2;
                    }
                    break;
                case 55:
                    if (zzP(obj, i8, i6)) {
                        int iZzr = zzr(obj, j);
                        iZzA9 = zzjg.zzA(i8 << 3);
                        iZzi = zzjg.zzv(iZzr);
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 56:
                    if (zzP(obj, i8, i6)) {
                        iZzA10 = zzjg.zzA(i8 << 3);
                        iZzu = iZzA10 + 8;
                        iZzA15 += iZzu;
                    }
                    break;
                case 57:
                    if (zzP(obj, i8, i6)) {
                        iZzA11 = zzjg.zzA(i8 << 3);
                        iZzu = iZzA11 + 4;
                        iZzA15 += iZzu;
                    }
                    break;
                case 58:
                    if (zzP(obj, i8, i6)) {
                        iZzu = zzjg.zzA(i8 << 3) + 1;
                        iZzA15 += iZzu;
                    }
                    break;
                case 59:
                    if (zzP(obj, i8, i6)) {
                        Object object2 = unsafe.getObject(obj, j);
                        if (object2 instanceof zziy) {
                            iZzA13 = zzjg.zzA(i8 << 3);
                            iZzd3 = ((zziy) object2).zzd();
                            iZzA14 = zzjg.zzA(iZzd3);
                            i3 = iZzA13 + iZzA14 + iZzd3;
                            iZzA15 += i3;
                        } else {
                            iZzA9 = zzjg.zzA(i8 << 3);
                            iZzi = zzjg.zzy((String) object2);
                            i3 = iZzA9 + iZzi;
                            iZzA15 += i3;
                        }
                    }
                    break;
                case 60:
                    if (zzP(obj, i8, i6)) {
                        iZzu = zzlt.zzo(i8, unsafe.getObject(obj, j), zzE(i6));
                        iZzA15 += iZzu;
                    }
                    break;
                case 61:
                    if (zzP(obj, i8, i6)) {
                        zziy zziyVar2 = (zziy) unsafe.getObject(obj, j);
                        iZzA13 = zzjg.zzA(i8 << 3);
                        iZzd3 = zziyVar2.zzd();
                        iZzA14 = zzjg.zzA(iZzd3);
                        i3 = iZzA13 + iZzA14 + iZzd3;
                        iZzA15 += i3;
                    }
                    break;
                case 62:
                    if (zzP(obj, i8, i6)) {
                        int iZzr2 = zzr(obj, j);
                        iZzA9 = zzjg.zzA(i8 << 3);
                        iZzi = zzjg.zzA(iZzr2);
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 63:
                    if (zzP(obj, i8, i6)) {
                        int iZzr3 = zzr(obj, j);
                        iZzA9 = zzjg.zzA(i8 << 3);
                        iZzi = zzjg.zzv(iZzr3);
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 64:
                    if (zzP(obj, i8, i6)) {
                        iZzA11 = zzjg.zzA(i8 << 3);
                        iZzu = iZzA11 + 4;
                        iZzA15 += iZzu;
                    }
                    break;
                case 65:
                    if (zzP(obj, i8, i6)) {
                        iZzA10 = zzjg.zzA(i8 << 3);
                        iZzu = iZzA10 + 8;
                        iZzA15 += iZzu;
                    }
                    break;
                case 66:
                    if (zzP(obj, i8, i6)) {
                        int iZzr4 = zzr(obj, j);
                        iZzA9 = zzjg.zzA(i8 << 3);
                        iZzi = zzjg.zzA((iZzr4 >> 31) ^ (iZzr4 + iZzr4));
                        i3 = iZzA9 + iZzi;
                        iZzA15 += i3;
                    }
                    break;
                case 67:
                    if (zzP(obj, i8, i6)) {
                        long jZzC3 = zzC(obj, j);
                        iZzA15 += zzjg.zzA(i8 << 3) + zzjg.zzB((jZzC3 >> 63) ^ (jZzC3 + jZzC3));
                    }
                    break;
                case 68:
                    if (zzP(obj, i8, i6)) {
                        iZzu = zzjg.zzu(i8, (zzlg) unsafe.getObject(obj, j), zzE(i6));
                        iZzA15 += iZzu;
                    }
                    break;
                default:
                    break;
            }
            i6 += 3;
            i4 = 1048575;
        }
        zzmi zzmiVar = this.zzn;
        int iZza = iZzA15 + zzmiVar.zza(zzmiVar.zzc(obj));
        if (!this.zzh) {
            return iZza;
        }
        this.zzo.zza(obj);
        throw null;
    }

    private final int zzq(Object obj) {
        int iZzA;
        int iZzA2;
        int iZzA3;
        int iZzB;
        int iZzA4;
        int iZzv;
        int iZzA5;
        int iZzA6;
        int iZzd;
        int iZzA7;
        int iZzo;
        int iZzz;
        int iZzA8;
        int i;
        Unsafe unsafe = zzb;
        int i2 = 0;
        for (int i3 = 0; i3 < this.zzc.length; i3 += 3) {
            int iZzB2 = zzB(i3);
            int iZzA9 = zzA(iZzB2);
            int i4 = this.zzc[i3];
            long j = iZzB2 & 1048575;
            if (iZzA9 >= zzjr.DOUBLE_LIST_PACKED.zza() && iZzA9 <= zzjr.SINT64_LIST_PACKED.zza()) {
                int i5 = this.zzc[i3 + 2];
            }
            switch (iZzA9) {
                case 0:
                    if (zzM(obj, i3)) {
                        iZzA = zzjg.zzA(i4 << 3);
                        iZzo = iZzA + 8;
                        i2 += iZzo;
                    }
                    break;
                case 1:
                    if (zzM(obj, i3)) {
                        iZzA2 = zzjg.zzA(i4 << 3);
                        iZzo = iZzA2 + 4;
                        i2 += iZzo;
                    }
                    break;
                case 2:
                    if (zzM(obj, i3)) {
                        long jZzd = zzms.zzd(obj, j);
                        iZzA3 = zzjg.zzA(i4 << 3);
                        iZzB = zzjg.zzB(jZzd);
                        i2 += iZzA3 + iZzB;
                    }
                    break;
                case 3:
                    if (zzM(obj, i3)) {
                        long jZzd2 = zzms.zzd(obj, j);
                        iZzA3 = zzjg.zzA(i4 << 3);
                        iZzB = zzjg.zzB(jZzd2);
                        i2 += iZzA3 + iZzB;
                    }
                    break;
                case 4:
                    if (zzM(obj, i3)) {
                        int iZzc = zzms.zzc(obj, j);
                        iZzA4 = zzjg.zzA(i4 << 3);
                        iZzv = zzjg.zzv(iZzc);
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 5:
                    if (zzM(obj, i3)) {
                        iZzA = zzjg.zzA(i4 << 3);
                        iZzo = iZzA + 8;
                        i2 += iZzo;
                    }
                    break;
                case 6:
                    if (zzM(obj, i3)) {
                        iZzA2 = zzjg.zzA(i4 << 3);
                        iZzo = iZzA2 + 4;
                        i2 += iZzo;
                    }
                    break;
                case 7:
                    if (zzM(obj, i3)) {
                        iZzA5 = zzjg.zzA(i4 << 3);
                        iZzo = iZzA5 + 1;
                        i2 += iZzo;
                    }
                    break;
                case 8:
                    if (zzM(obj, i3)) {
                        Object objZzf = zzms.zzf(obj, j);
                        if (objZzf instanceof zziy) {
                            iZzA6 = zzjg.zzA(i4 << 3);
                            iZzd = ((zziy) objZzf).zzd();
                            iZzA7 = zzjg.zzA(iZzd);
                            i = iZzA6 + iZzA7 + iZzd;
                            i2 += i;
                        } else {
                            iZzA4 = zzjg.zzA(i4 << 3);
                            iZzv = zzjg.zzy((String) objZzf);
                            i = iZzA4 + iZzv;
                            i2 += i;
                        }
                    }
                    break;
                case 9:
                    if (zzM(obj, i3)) {
                        iZzo = zzlt.zzo(i4, zzms.zzf(obj, j), zzE(i3));
                        i2 += iZzo;
                    }
                    break;
                case 10:
                    if (zzM(obj, i3)) {
                        zziy zziyVar = (zziy) zzms.zzf(obj, j);
                        iZzA6 = zzjg.zzA(i4 << 3);
                        iZzd = zziyVar.zzd();
                        iZzA7 = zzjg.zzA(iZzd);
                        i = iZzA6 + iZzA7 + iZzd;
                        i2 += i;
                    }
                    break;
                case 11:
                    if (zzM(obj, i3)) {
                        int iZzc2 = zzms.zzc(obj, j);
                        iZzA4 = zzjg.zzA(i4 << 3);
                        iZzv = zzjg.zzA(iZzc2);
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 12:
                    if (zzM(obj, i3)) {
                        int iZzc3 = zzms.zzc(obj, j);
                        iZzA4 = zzjg.zzA(i4 << 3);
                        iZzv = zzjg.zzv(iZzc3);
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 13:
                    if (zzM(obj, i3)) {
                        iZzA2 = zzjg.zzA(i4 << 3);
                        iZzo = iZzA2 + 4;
                        i2 += iZzo;
                    }
                    break;
                case 14:
                    if (zzM(obj, i3)) {
                        iZzA = zzjg.zzA(i4 << 3);
                        iZzo = iZzA + 8;
                        i2 += iZzo;
                    }
                    break;
                case 15:
                    if (zzM(obj, i3)) {
                        int iZzc4 = zzms.zzc(obj, j);
                        iZzA4 = zzjg.zzA(i4 << 3);
                        iZzv = zzjg.zzA((iZzc4 >> 31) ^ (iZzc4 + iZzc4));
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 16:
                    if (zzM(obj, i3)) {
                        long jZzd3 = zzms.zzd(obj, j);
                        iZzA4 = zzjg.zzA(i4 << 3);
                        iZzv = zzjg.zzB((jZzd3 >> 63) ^ (jZzd3 + jZzd3));
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 17:
                    if (zzM(obj, i3)) {
                        iZzo = zzjg.zzu(i4, (zzlg) zzms.zzf(obj, j), zzE(i3));
                        i2 += iZzo;
                    }
                    break;
                case 18:
                    iZzo = zzlt.zzh(i4, (List) zzms.zzf(obj, j), false);
                    i2 += iZzo;
                    break;
                case 19:
                    iZzo = zzlt.zzf(i4, (List) zzms.zzf(obj, j), false);
                    i2 += iZzo;
                    break;
                case 20:
                    iZzo = zzlt.zzm(i4, (List) zzms.zzf(obj, j), false);
                    i2 += iZzo;
                    break;
                case 21:
                    iZzo = zzlt.zzx(i4, (List) zzms.zzf(obj, j), false);
                    i2 += iZzo;
                    break;
                case 22:
                    iZzo = zzlt.zzk(i4, (List) zzms.zzf(obj, j), false);
                    i2 += iZzo;
                    break;
                case 23:
                    iZzo = zzlt.zzh(i4, (List) zzms.zzf(obj, j), false);
                    i2 += iZzo;
                    break;
                case 24:
                    iZzo = zzlt.zzf(i4, (List) zzms.zzf(obj, j), false);
                    i2 += iZzo;
                    break;
                case 25:
                    iZzo = zzlt.zza(i4, (List) zzms.zzf(obj, j), false);
                    i2 += iZzo;
                    break;
                case 26:
                    iZzo = zzlt.zzu(i4, (List) zzms.zzf(obj, j));
                    i2 += iZzo;
                    break;
                case 27:
                    iZzo = zzlt.zzp(i4, (List) zzms.zzf(obj, j), zzE(i3));
                    i2 += iZzo;
                    break;
                case 28:
                    iZzo = zzlt.zzc(i4, (List) zzms.zzf(obj, j));
                    i2 += iZzo;
                    break;
                case 29:
                    iZzo = zzlt.zzv(i4, (List) zzms.zzf(obj, j), false);
                    i2 += iZzo;
                    break;
                case 30:
                    iZzo = zzlt.zzd(i4, (List) zzms.zzf(obj, j), false);
                    i2 += iZzo;
                    break;
                case 31:
                    iZzo = zzlt.zzf(i4, (List) zzms.zzf(obj, j), false);
                    i2 += iZzo;
                    break;
                case 32:
                    iZzo = zzlt.zzh(i4, (List) zzms.zzf(obj, j), false);
                    i2 += iZzo;
                    break;
                case 33:
                    iZzo = zzlt.zzq(i4, (List) zzms.zzf(obj, j), false);
                    i2 += iZzo;
                    break;
                case 34:
                    iZzo = zzlt.zzs(i4, (List) zzms.zzf(obj, j), false);
                    i2 += iZzo;
                    break;
                case 35:
                    iZzv = zzlt.zzi((List) unsafe.getObject(obj, j));
                    if (iZzv > 0) {
                        iZzz = zzjg.zzz(i4);
                        iZzA8 = zzjg.zzA(iZzv);
                        iZzA4 = iZzz + iZzA8;
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 36:
                    iZzv = zzlt.zzg((List) unsafe.getObject(obj, j));
                    if (iZzv > 0) {
                        iZzz = zzjg.zzz(i4);
                        iZzA8 = zzjg.zzA(iZzv);
                        iZzA4 = iZzz + iZzA8;
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 37:
                    iZzv = zzlt.zzn((List) unsafe.getObject(obj, j));
                    if (iZzv > 0) {
                        iZzz = zzjg.zzz(i4);
                        iZzA8 = zzjg.zzA(iZzv);
                        iZzA4 = iZzz + iZzA8;
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 38:
                    iZzv = zzlt.zzy((List) unsafe.getObject(obj, j));
                    if (iZzv > 0) {
                        iZzz = zzjg.zzz(i4);
                        iZzA8 = zzjg.zzA(iZzv);
                        iZzA4 = iZzz + iZzA8;
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 39:
                    iZzv = zzlt.zzl((List) unsafe.getObject(obj, j));
                    if (iZzv > 0) {
                        iZzz = zzjg.zzz(i4);
                        iZzA8 = zzjg.zzA(iZzv);
                        iZzA4 = iZzz + iZzA8;
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 40:
                    iZzv = zzlt.zzi((List) unsafe.getObject(obj, j));
                    if (iZzv > 0) {
                        iZzz = zzjg.zzz(i4);
                        iZzA8 = zzjg.zzA(iZzv);
                        iZzA4 = iZzz + iZzA8;
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 41:
                    iZzv = zzlt.zzg((List) unsafe.getObject(obj, j));
                    if (iZzv > 0) {
                        iZzz = zzjg.zzz(i4);
                        iZzA8 = zzjg.zzA(iZzv);
                        iZzA4 = iZzz + iZzA8;
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 42:
                    iZzv = zzlt.zzb((List) unsafe.getObject(obj, j));
                    if (iZzv > 0) {
                        iZzz = zzjg.zzz(i4);
                        iZzA8 = zzjg.zzA(iZzv);
                        iZzA4 = iZzz + iZzA8;
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 43:
                    iZzv = zzlt.zzw((List) unsafe.getObject(obj, j));
                    if (iZzv > 0) {
                        iZzz = zzjg.zzz(i4);
                        iZzA8 = zzjg.zzA(iZzv);
                        iZzA4 = iZzz + iZzA8;
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 44:
                    iZzv = zzlt.zze((List) unsafe.getObject(obj, j));
                    if (iZzv > 0) {
                        iZzz = zzjg.zzz(i4);
                        iZzA8 = zzjg.zzA(iZzv);
                        iZzA4 = iZzz + iZzA8;
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 45:
                    iZzv = zzlt.zzg((List) unsafe.getObject(obj, j));
                    if (iZzv > 0) {
                        iZzz = zzjg.zzz(i4);
                        iZzA8 = zzjg.zzA(iZzv);
                        iZzA4 = iZzz + iZzA8;
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 46:
                    iZzv = zzlt.zzi((List) unsafe.getObject(obj, j));
                    if (iZzv > 0) {
                        iZzz = zzjg.zzz(i4);
                        iZzA8 = zzjg.zzA(iZzv);
                        iZzA4 = iZzz + iZzA8;
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 47:
                    iZzv = zzlt.zzr((List) unsafe.getObject(obj, j));
                    if (iZzv > 0) {
                        iZzz = zzjg.zzz(i4);
                        iZzA8 = zzjg.zzA(iZzv);
                        iZzA4 = iZzz + iZzA8;
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 48:
                    iZzv = zzlt.zzt((List) unsafe.getObject(obj, j));
                    if (iZzv > 0) {
                        iZzz = zzjg.zzz(i4);
                        iZzA8 = zzjg.zzA(iZzv);
                        iZzA4 = iZzz + iZzA8;
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 49:
                    iZzo = zzlt.zzj(i4, (List) zzms.zzf(obj, j), zzE(i3));
                    i2 += iZzo;
                    break;
                case 50:
                    zzlb.zza(i4, zzms.zzf(obj, j), zzF(i3));
                    break;
                case 51:
                    if (zzP(obj, i4, i3)) {
                        iZzA = zzjg.zzA(i4 << 3);
                        iZzo = iZzA + 8;
                        i2 += iZzo;
                    }
                    break;
                case 52:
                    if (zzP(obj, i4, i3)) {
                        iZzA2 = zzjg.zzA(i4 << 3);
                        iZzo = iZzA2 + 4;
                        i2 += iZzo;
                    }
                    break;
                case 53:
                    if (zzP(obj, i4, i3)) {
                        long jZzC = zzC(obj, j);
                        iZzA3 = zzjg.zzA(i4 << 3);
                        iZzB = zzjg.zzB(jZzC);
                        i2 += iZzA3 + iZzB;
                    }
                    break;
                case 54:
                    if (zzP(obj, i4, i3)) {
                        long jZzC2 = zzC(obj, j);
                        iZzA3 = zzjg.zzA(i4 << 3);
                        iZzB = zzjg.zzB(jZzC2);
                        i2 += iZzA3 + iZzB;
                    }
                    break;
                case 55:
                    if (zzP(obj, i4, i3)) {
                        int iZzr = zzr(obj, j);
                        iZzA4 = zzjg.zzA(i4 << 3);
                        iZzv = zzjg.zzv(iZzr);
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 56:
                    if (zzP(obj, i4, i3)) {
                        iZzA = zzjg.zzA(i4 << 3);
                        iZzo = iZzA + 8;
                        i2 += iZzo;
                    }
                    break;
                case 57:
                    if (zzP(obj, i4, i3)) {
                        iZzA2 = zzjg.zzA(i4 << 3);
                        iZzo = iZzA2 + 4;
                        i2 += iZzo;
                    }
                    break;
                case 58:
                    if (zzP(obj, i4, i3)) {
                        iZzA5 = zzjg.zzA(i4 << 3);
                        iZzo = iZzA5 + 1;
                        i2 += iZzo;
                    }
                    break;
                case 59:
                    if (zzP(obj, i4, i3)) {
                        Object objZzf2 = zzms.zzf(obj, j);
                        if (objZzf2 instanceof zziy) {
                            iZzA6 = zzjg.zzA(i4 << 3);
                            iZzd = ((zziy) objZzf2).zzd();
                            iZzA7 = zzjg.zzA(iZzd);
                            i = iZzA6 + iZzA7 + iZzd;
                            i2 += i;
                        } else {
                            iZzA4 = zzjg.zzA(i4 << 3);
                            iZzv = zzjg.zzy((String) objZzf2);
                            i = iZzA4 + iZzv;
                            i2 += i;
                        }
                    }
                    break;
                case 60:
                    if (zzP(obj, i4, i3)) {
                        iZzo = zzlt.zzo(i4, zzms.zzf(obj, j), zzE(i3));
                        i2 += iZzo;
                    }
                    break;
                case 61:
                    if (zzP(obj, i4, i3)) {
                        zziy zziyVar2 = (zziy) zzms.zzf(obj, j);
                        iZzA6 = zzjg.zzA(i4 << 3);
                        iZzd = zziyVar2.zzd();
                        iZzA7 = zzjg.zzA(iZzd);
                        i = iZzA6 + iZzA7 + iZzd;
                        i2 += i;
                    }
                    break;
                case 62:
                    if (zzP(obj, i4, i3)) {
                        int iZzr2 = zzr(obj, j);
                        iZzA4 = zzjg.zzA(i4 << 3);
                        iZzv = zzjg.zzA(iZzr2);
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 63:
                    if (zzP(obj, i4, i3)) {
                        int iZzr3 = zzr(obj, j);
                        iZzA4 = zzjg.zzA(i4 << 3);
                        iZzv = zzjg.zzv(iZzr3);
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 64:
                    if (zzP(obj, i4, i3)) {
                        iZzA2 = zzjg.zzA(i4 << 3);
                        iZzo = iZzA2 + 4;
                        i2 += iZzo;
                    }
                    break;
                case 65:
                    if (zzP(obj, i4, i3)) {
                        iZzA = zzjg.zzA(i4 << 3);
                        iZzo = iZzA + 8;
                        i2 += iZzo;
                    }
                    break;
                case 66:
                    if (zzP(obj, i4, i3)) {
                        int iZzr4 = zzr(obj, j);
                        iZzA4 = zzjg.zzA(i4 << 3);
                        iZzv = zzjg.zzA((iZzr4 >> 31) ^ (iZzr4 + iZzr4));
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 67:
                    if (zzP(obj, i4, i3)) {
                        long jZzC3 = zzC(obj, j);
                        iZzA4 = zzjg.zzA(i4 << 3);
                        iZzv = zzjg.zzB((jZzC3 >> 63) ^ (jZzC3 + jZzC3));
                        i = iZzA4 + iZzv;
                        i2 += i;
                    }
                    break;
                case 68:
                    if (zzP(obj, i4, i3)) {
                        iZzo = zzjg.zzu(i4, (zzlg) zzms.zzf(obj, j), zzE(i3));
                        i2 += iZzo;
                    }
                    break;
            }
        }
        zzmi zzmiVar = this.zzn;
        return i2 + zzmiVar.zza(zzmiVar.zzc(obj));
    }

    private static int zzr(Object obj, long j) {
        return ((Integer) zzms.zzf(obj, j)).intValue();
    }

    private final int zzs(Object obj, byte[] bArr, int i, int i2, int i3, long j, zzik zzikVar) throws IOException {
        Unsafe unsafe = zzb;
        Object objZzF = zzF(i3);
        Object object = unsafe.getObject(obj, j);
        if (!((zzla) object).zze()) {
            zzla zzlaVarZzb = zzla.zza().zzb();
            zzlb.zzb(zzlaVarZzb, object);
            unsafe.putObject(obj, j, zzlaVarZzb);
        }
        throw null;
    }

    private final int zzt(Object obj, byte[] bArr, int i, int i2, int i3, int i4, int i5, int i6, int i7, long j, int i8, zzik zzikVar) throws IOException {
        Unsafe unsafe = zzb;
        long j2 = this.zzc[i8 + 2] & 1048575;
        switch (i7) {
            case 51:
                if (i5 != 1) {
                    return i;
                }
                unsafe.putObject(obj, j, Double.valueOf(Double.longBitsToDouble(zzil.zzn(bArr, i))));
                unsafe.putInt(obj, j2, i4);
                return i + 8;
            case 52:
                if (i5 != 5) {
                    return i;
                }
                unsafe.putObject(obj, j, Float.valueOf(Float.intBitsToFloat(zzil.zzb(bArr, i))));
                unsafe.putInt(obj, j2, i4);
                return i + 4;
            case 53:
            case 54:
                if (i5 != 0) {
                    return i;
                }
                int iZzm = zzil.zzm(bArr, i, zzikVar);
                unsafe.putObject(obj, j, Long.valueOf(zzikVar.zzb));
                unsafe.putInt(obj, j2, i4);
                return iZzm;
            case 55:
            case 62:
                if (i5 != 0) {
                    return i;
                }
                int iZzj = zzil.zzj(bArr, i, zzikVar);
                unsafe.putObject(obj, j, Integer.valueOf(zzikVar.zza));
                unsafe.putInt(obj, j2, i4);
                return iZzj;
            case 56:
            case 65:
                if (i5 != 1) {
                    return i;
                }
                unsafe.putObject(obj, j, Long.valueOf(zzil.zzn(bArr, i)));
                unsafe.putInt(obj, j2, i4);
                return i + 8;
            case 57:
            case 64:
                if (i5 != 5) {
                    return i;
                }
                unsafe.putObject(obj, j, Integer.valueOf(zzil.zzb(bArr, i)));
                unsafe.putInt(obj, j2, i4);
                return i + 4;
            case 58:
                if (i5 != 0) {
                    return i;
                }
                int iZzm2 = zzil.zzm(bArr, i, zzikVar);
                unsafe.putObject(obj, j, Boolean.valueOf(zzikVar.zzb != 0));
                unsafe.putInt(obj, j2, i4);
                return iZzm2;
            case 59:
                if (i5 != 2) {
                    return i;
                }
                int iZzj2 = zzil.zzj(bArr, i, zzikVar);
                int i9 = zzikVar.zza;
                if (i9 == 0) {
                    unsafe.putObject(obj, j, "");
                } else {
                    if ((i6 & 536870912) != 0 && !zzmx.zzf(bArr, iZzj2, iZzj2 + i9)) {
                        throw zzkj.zzc();
                    }
                    unsafe.putObject(obj, j, new String(bArr, iZzj2, i9, zzkh.zzb));
                    iZzj2 += i9;
                }
                unsafe.putInt(obj, j2, i4);
                return iZzj2;
            case 60:
                if (i5 != 2) {
                    return i;
                }
                int iZzd = zzil.zzd(zzE(i8), bArr, i, i2, zzikVar);
                Object object = unsafe.getInt(obj, j2) == i4 ? unsafe.getObject(obj, j) : null;
                if (object == null) {
                    unsafe.putObject(obj, j, zzikVar.zzc);
                } else {
                    unsafe.putObject(obj, j, zzkh.zzg(object, zzikVar.zzc));
                }
                unsafe.putInt(obj, j2, i4);
                return iZzd;
            case 61:
                if (i5 != 2) {
                    return i;
                }
                int iZza = zzil.zza(bArr, i, zzikVar);
                unsafe.putObject(obj, j, zzikVar.zzc);
                unsafe.putInt(obj, j2, i4);
                return iZza;
            case 63:
                if (i5 != 0) {
                    return i;
                }
                int iZzj3 = zzil.zzj(bArr, i, zzikVar);
                int i10 = zzikVar.zza;
                zzkd zzkdVarZzD = zzD(i8);
                if (zzkdVarZzD == null || zzkdVarZzD.zza(i10)) {
                    unsafe.putObject(obj, j, Integer.valueOf(i10));
                    unsafe.putInt(obj, j2, i4);
                } else {
                    zzd(obj).zzh(i3, Long.valueOf(i10));
                }
                return iZzj3;
            case 66:
                if (i5 != 0) {
                    return i;
                }
                int iZzj4 = zzil.zzj(bArr, i, zzikVar);
                unsafe.putObject(obj, j, Integer.valueOf(zzjc.zzb(zzikVar.zza)));
                unsafe.putInt(obj, j2, i4);
                return iZzj4;
            case 67:
                if (i5 != 0) {
                    return i;
                }
                int iZzm3 = zzil.zzm(bArr, i, zzikVar);
                unsafe.putObject(obj, j, Long.valueOf(zzjc.zzc(zzikVar.zzb)));
                unsafe.putInt(obj, j2, i4);
                return iZzm3;
            case 68:
                if (i5 != 3) {
                    return i;
                }
                int iZzc = zzil.zzc(zzE(i8), bArr, i, i2, (i3 & (-8)) | 4, zzikVar);
                Object object2 = unsafe.getInt(obj, j2) == i4 ? unsafe.getObject(obj, j) : null;
                if (object2 == null) {
                    unsafe.putObject(obj, j, zzikVar.zzc);
                } else {
                    unsafe.putObject(obj, j, zzkh.zzg(object2, zzikVar.zzc));
                }
                unsafe.putInt(obj, j2, i4);
                return iZzc;
            default:
                return i;
        }
    }

    /* JADX WARN: Failed to find 'out' block for switch in B:25:0x0080. Please report as an issue. */
    private final int zzu(Object obj, byte[] bArr, int i, int i2, zzik zzikVar) throws IOException {
        int i3;
        int iZzk;
        int i4;
        int i5;
        int i6;
        Unsafe unsafe;
        int i7;
        int i8;
        int i9;
        int i10;
        int iZzm;
        int iZzd;
        int i11;
        int i12;
        int i13;
        zzlj<T> zzljVar = this;
        Object obj2 = obj;
        byte[] bArr2 = bArr;
        int i14 = i2;
        zzikVar = zzikVar;
        Unsafe unsafe2 = zzb;
        int i15 = 1048575;
        int i16 = -1;
        int iZzi = i;
        int i17 = -1;
        int i18 = 1048575;
        int i19 = 0;
        int i20 = 0;
        while (iZzi < i14) {
            int i21 = iZzi + 1;
            byte b = bArr2[iZzi];
            if (b < 0) {
                iZzk = zzil.zzk(b, bArr2, i21, zzikVar);
                i3 = zzikVar.zza;
            } else {
                i3 = b;
                iZzk = i21;
            }
            int i22 = i3 >>> 3;
            int i23 = i3 & 7;
            int iZzx = i22 > i17 ? zzljVar.zzx(i22, i19 / 3) : zzljVar.zzw(i22);
            if (iZzx == i16) {
                i4 = iZzk;
                i5 = i22;
                i6 = i16;
                unsafe = unsafe2;
                i7 = 0;
            } else {
                int[] iArr = zzljVar.zzc;
                int i24 = iArr[iZzx + 1];
                int iZzA = zzA(i24);
                long j = i24 & i15;
                if (iZzA <= 17) {
                    int i25 = iArr[iZzx + 2];
                    int i26 = 1 << (i25 >>> 20);
                    i8 = 1048575;
                    int i27 = i25 & 1048575;
                    if (i27 != i18) {
                        if (i18 != 1048575) {
                            unsafe2.putInt(obj2, i18, i20);
                        }
                        if (i27 != 1048575) {
                            i20 = unsafe2.getInt(obj2, i27);
                        }
                        i18 = i27;
                    }
                    switch (iZzA) {
                        case 0:
                            i9 = iZzx;
                            i10 = iZzk;
                            i5 = i22;
                            if (i23 != 1) {
                                i4 = i10;
                                unsafe = unsafe2;
                                i7 = i9;
                                i6 = -1;
                            } else {
                                zzms.zzo(obj2, j, Double.longBitsToDouble(zzil.zzn(bArr2, i10)));
                                iZzi = i10 + 8;
                                i20 |= i26;
                                i19 = i9;
                                i17 = i5;
                                i15 = i8;
                                i16 = -1;
                            }
                            break;
                        case 1:
                            zzikVar = zzikVar;
                            i9 = iZzx;
                            i10 = iZzk;
                            i8 = 1048575;
                            i5 = i22;
                            if (i23 != 5) {
                                i4 = i10;
                                unsafe = unsafe2;
                                i7 = i9;
                                i6 = -1;
                            } else {
                                zzms.zzp(obj2, j, Float.intBitsToFloat(zzil.zzb(bArr2, i10)));
                                iZzi = i10 + 4;
                                i20 |= i26;
                                i19 = i9;
                                i17 = i5;
                                i15 = i8;
                                i16 = -1;
                            }
                            break;
                        case 2:
                        case 3:
                            zzikVar = zzikVar;
                            i9 = iZzx;
                            i10 = iZzk;
                            i5 = i22;
                            if (i23 != 0) {
                                i4 = i10;
                                unsafe = unsafe2;
                                i7 = i9;
                                i6 = -1;
                            } else {
                                iZzm = zzil.zzm(bArr2, i10, zzikVar);
                                unsafe2.putLong(obj, j, zzikVar.zzb);
                                i20 |= i26;
                                iZzi = iZzm;
                                i19 = i9;
                                i17 = i5;
                                i15 = i8;
                                i16 = -1;
                            }
                            break;
                        case 4:
                        case 11:
                            zzikVar = zzikVar;
                            i9 = iZzx;
                            i10 = iZzk;
                            i8 = 1048575;
                            i5 = i22;
                            if (i23 != 0) {
                                i4 = i10;
                                unsafe = unsafe2;
                                i7 = i9;
                                i6 = -1;
                            } else {
                                iZzi = zzil.zzj(bArr2, i10, zzikVar);
                                unsafe2.putInt(obj2, j, zzikVar.zza);
                                i20 |= i26;
                                i19 = i9;
                                i17 = i5;
                                i15 = i8;
                                i16 = -1;
                            }
                            break;
                        case 5:
                        case 14:
                            i9 = iZzx;
                            i5 = i22;
                            if (i23 != 1) {
                                i10 = iZzk;
                                i4 = i10;
                                unsafe = unsafe2;
                                i7 = i9;
                                i6 = -1;
                            } else {
                                i10 = iZzk;
                                unsafe2.putLong(obj, j, zzil.zzn(bArr2, iZzk));
                                iZzi = i10 + 8;
                                i20 |= i26;
                                i19 = i9;
                                i17 = i5;
                                i15 = i8;
                                i16 = -1;
                            }
                            break;
                        case 6:
                        case 13:
                            zzikVar = zzikVar;
                            i9 = iZzx;
                            i8 = 1048575;
                            i5 = i22;
                            if (i23 != 5) {
                                i10 = iZzk;
                                i4 = i10;
                                unsafe = unsafe2;
                                i7 = i9;
                                i6 = -1;
                            } else {
                                unsafe2.putInt(obj2, j, zzil.zzb(bArr2, iZzk));
                                iZzi = iZzk + 4;
                                i20 |= i26;
                                i19 = i9;
                                i17 = i5;
                                i15 = i8;
                                i16 = -1;
                            }
                            break;
                        case 7:
                            zzikVar = zzikVar;
                            i9 = iZzx;
                            i8 = 1048575;
                            i5 = i22;
                            if (i23 != 0) {
                                i10 = iZzk;
                                i4 = i10;
                                unsafe = unsafe2;
                                i7 = i9;
                                i6 = -1;
                            } else {
                                iZzi = zzil.zzm(bArr2, iZzk, zzikVar);
                                zzms.zzm(obj2, j, zzikVar.zzb != 0);
                                i20 |= i26;
                                i19 = i9;
                                i17 = i5;
                                i15 = i8;
                                i16 = -1;
                            }
                            break;
                        case 8:
                            zzikVar = zzikVar;
                            i9 = iZzx;
                            i8 = 1048575;
                            i5 = i22;
                            if (i23 != 2) {
                                i10 = iZzk;
                                i4 = i10;
                                unsafe = unsafe2;
                                i7 = i9;
                                i6 = -1;
                            } else {
                                iZzi = (536870912 & i24) == 0 ? zzil.zzg(bArr2, iZzk, zzikVar) : zzil.zzh(bArr2, iZzk, zzikVar);
                                unsafe2.putObject(obj2, j, zzikVar.zzc);
                                i20 |= i26;
                                i19 = i9;
                                i17 = i5;
                                i15 = i8;
                                i16 = -1;
                            }
                            break;
                        case 9:
                            zzikVar = zzikVar;
                            i9 = iZzx;
                            i8 = 1048575;
                            i5 = i22;
                            if (i23 != 2) {
                                i10 = iZzk;
                                i4 = i10;
                                unsafe = unsafe2;
                                i7 = i9;
                                i6 = -1;
                            } else {
                                iZzd = zzil.zzd(zzljVar.zzE(i9), bArr2, iZzk, i14, zzikVar);
                                Object object = unsafe2.getObject(obj2, j);
                                if (object == null) {
                                    unsafe2.putObject(obj2, j, zzikVar.zzc);
                                } else {
                                    unsafe2.putObject(obj2, j, zzkh.zzg(object, zzikVar.zzc));
                                }
                                i20 |= i26;
                                iZzi = iZzd;
                                i19 = i9;
                                i17 = i5;
                                i15 = i8;
                                i16 = -1;
                            }
                            break;
                        case 10:
                            zzikVar = zzikVar;
                            i9 = iZzx;
                            i8 = 1048575;
                            i5 = i22;
                            if (i23 != 2) {
                                i10 = iZzk;
                                i4 = i10;
                                unsafe = unsafe2;
                                i7 = i9;
                                i6 = -1;
                            } else {
                                iZzd = zzil.zza(bArr2, iZzk, zzikVar);
                                unsafe2.putObject(obj2, j, zzikVar.zzc);
                                i20 |= i26;
                                iZzi = iZzd;
                                i19 = i9;
                                i17 = i5;
                                i15 = i8;
                                i16 = -1;
                            }
                            break;
                        case 12:
                            zzikVar = zzikVar;
                            i9 = iZzx;
                            i8 = 1048575;
                            i5 = i22;
                            if (i23 != 0) {
                                i10 = iZzk;
                                i4 = i10;
                                unsafe = unsafe2;
                                i7 = i9;
                                i6 = -1;
                            } else {
                                iZzd = zzil.zzj(bArr2, iZzk, zzikVar);
                                unsafe2.putInt(obj2, j, zzikVar.zza);
                                i20 |= i26;
                                iZzi = iZzd;
                                i19 = i9;
                                i17 = i5;
                                i15 = i8;
                                i16 = -1;
                            }
                            break;
                        case 15:
                            zzikVar = zzikVar;
                            i9 = iZzx;
                            i8 = 1048575;
                            i5 = i22;
                            if (i23 != 0) {
                                i10 = iZzk;
                                i4 = i10;
                                unsafe = unsafe2;
                                i7 = i9;
                                i6 = -1;
                            } else {
                                iZzd = zzil.zzj(bArr2, iZzk, zzikVar);
                                unsafe2.putInt(obj2, j, zzjc.zzb(zzikVar.zza));
                                i20 |= i26;
                                iZzi = iZzd;
                                i19 = i9;
                                i17 = i5;
                                i15 = i8;
                                i16 = -1;
                            }
                            break;
                        case 16:
                            if (i23 != 0) {
                                i5 = i22;
                                i9 = iZzx;
                                i10 = iZzk;
                                i4 = i10;
                                unsafe = unsafe2;
                                i7 = i9;
                                i6 = -1;
                            } else {
                                zzikVar = zzikVar;
                                iZzm = zzil.zzm(bArr2, iZzk, zzikVar);
                                i9 = iZzx;
                                i5 = i22;
                                unsafe2.putLong(obj, j, zzjc.zzc(zzikVar.zzb));
                                i20 |= i26;
                                iZzi = iZzm;
                                i19 = i9;
                                i17 = i5;
                                i15 = i8;
                                i16 = -1;
                            }
                            break;
                        default:
                            i5 = i22;
                            i9 = iZzx;
                            i10 = iZzk;
                            i4 = i10;
                            unsafe = unsafe2;
                            i7 = i9;
                            i6 = -1;
                            break;
                    }
                } else {
                    zzikVar = zzikVar;
                    i9 = iZzx;
                    int i28 = iZzk;
                    i8 = 1048575;
                    i5 = i22;
                    if (iZzA == 27) {
                        if (i23 == 2) {
                            zzkg zzkgVarZzd = (zzkg) unsafe2.getObject(obj2, j);
                            if (!zzkgVarZzd.zzc()) {
                                int size = zzkgVarZzd.size();
                                zzkgVarZzd = zzkgVarZzd.zzd(size == 0 ? 10 : size + size);
                                unsafe2.putObject(obj2, j, zzkgVarZzd);
                            }
                            iZzi = zzil.zze(zzljVar.zzE(i9), i3, bArr, i28, i2, zzkgVarZzd, zzikVar);
                            i20 = i20;
                            i19 = i9;
                            i17 = i5;
                            i15 = i8;
                            i16 = -1;
                        } else {
                            i11 = i28;
                            i12 = i20;
                            i13 = i18;
                            unsafe = unsafe2;
                            i7 = i9;
                            i6 = -1;
                        }
                    } else if (iZzA <= 49) {
                        i12 = i20;
                        i13 = i18;
                        i6 = -1;
                        unsafe = unsafe2;
                        i7 = i9;
                        iZzi = zzv(obj, bArr, i28, i2, i3, i5, i23, i9, i24, iZzA, j, zzikVar);
                        if (iZzi != i28) {
                            obj2 = obj;
                            bArr2 = bArr;
                            i14 = i2;
                            zzikVar = zzikVar;
                            i18 = i13;
                            i16 = i6;
                            i17 = i5;
                            i20 = i12;
                            i19 = i7;
                            unsafe2 = unsafe;
                            i15 = 1048575;
                            zzljVar = this;
                        } else {
                            i4 = iZzi;
                            i18 = i13;
                            i20 = i12;
                        }
                    } else {
                        i11 = i28;
                        i12 = i20;
                        i13 = i18;
                        unsafe = unsafe2;
                        i7 = i9;
                        i6 = -1;
                        if (iZzA != 50) {
                            iZzi = zzt(obj, bArr, i11, i2, i3, i5, i23, i24, iZzA, j, i7, zzikVar);
                            if (iZzi != i11) {
                                obj2 = obj;
                                bArr2 = bArr;
                                i14 = i2;
                                zzikVar = zzikVar;
                                i18 = i13;
                                i16 = i6;
                                i17 = i5;
                                i20 = i12;
                                i19 = i7;
                                unsafe2 = unsafe;
                                i15 = 1048575;
                                zzljVar = this;
                            } else {
                                i4 = iZzi;
                                i18 = i13;
                                i20 = i12;
                            }
                        } else if (i23 == 2) {
                            iZzi = zzs(obj, bArr, i11, i2, i7, j, zzikVar);
                            if (iZzi != i11) {
                                obj2 = obj;
                                bArr2 = bArr;
                                i14 = i2;
                                zzikVar = zzikVar;
                                i18 = i13;
                                i16 = i6;
                                i17 = i5;
                                i20 = i12;
                                i19 = i7;
                                unsafe2 = unsafe;
                                i15 = 1048575;
                                zzljVar = this;
                            } else {
                                i4 = iZzi;
                                i18 = i13;
                                i20 = i12;
                            }
                        }
                    }
                    i4 = i11;
                    i18 = i13;
                    i20 = i12;
                }
            }
            iZzi = zzil.zzi(i3, bArr, i4, i2, zzd(obj), zzikVar);
            zzljVar = this;
            obj2 = obj;
            bArr2 = bArr;
            i14 = i2;
            zzikVar = zzikVar;
            i16 = i6;
            i17 = i5;
            i19 = i7;
            unsafe2 = unsafe;
            i15 = 1048575;
        }
        int i29 = i20;
        int i30 = i18;
        Unsafe unsafe3 = unsafe2;
        if (i30 != i15) {
            unsafe3.putInt(obj, i30, i29);
        }
        if (iZzi == i2) {
            return iZzi;
        }
        throw zzkj.zze();
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$PrimitiveArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:596)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    private final int zzv(Object obj, byte[] bArr, int i, int i2, int i3, int i4, int i5, int i6, long j, int i7, long j2, zzik zzikVar) throws IOException {
        int iZzj;
        int iZzl;
        Unsafe unsafe = zzb;
        zzkg zzkgVarZzd = (zzkg) unsafe.getObject(obj, j2);
        if (!zzkgVarZzd.zzc()) {
            int size = zzkgVarZzd.size();
            zzkgVarZzd = zzkgVarZzd.zzd(size == 0 ? 10 : size + size);
            unsafe.putObject(obj, j2, zzkgVarZzd);
        }
        switch (i7) {
            case 18:
            case 35:
                if (i5 == 2) {
                    zzji zzjiVar = (zzji) zzkgVarZzd;
                    int iZzj2 = zzil.zzj(bArr, i, zzikVar);
                    int i8 = zzikVar.zza + iZzj2;
                    while (iZzj2 < i8) {
                        zzjiVar.zze(Double.longBitsToDouble(zzil.zzn(bArr, iZzj2)));
                        iZzj2 += 8;
                    }
                    if (iZzj2 == i8) {
                        return iZzj2;
                    }
                    throw zzkj.zzf();
                }
                if (i5 == 1) {
                    zzji zzjiVar2 = (zzji) zzkgVarZzd;
                    zzjiVar2.zze(Double.longBitsToDouble(zzil.zzn(bArr, i)));
                    int i9 = i + 8;
                    while (i9 < i2) {
                        int iZzj3 = zzil.zzj(bArr, i9, zzikVar);
                        if (i3 != zzikVar.zza) {
                            return i9;
                        }
                        zzjiVar2.zze(Double.longBitsToDouble(zzil.zzn(bArr, iZzj3)));
                        i9 = iZzj3 + 8;
                    }
                    return i9;
                }
                break;
            case 19:
            case 36:
                if (i5 == 2) {
                    zzjs zzjsVar = (zzjs) zzkgVarZzd;
                    int iZzj4 = zzil.zzj(bArr, i, zzikVar);
                    int i10 = zzikVar.zza + iZzj4;
                    while (iZzj4 < i10) {
                        zzjsVar.zze(Float.intBitsToFloat(zzil.zzb(bArr, iZzj4)));
                        iZzj4 += 4;
                    }
                    if (iZzj4 == i10) {
                        return iZzj4;
                    }
                    throw zzkj.zzf();
                }
                if (i5 == 5) {
                    zzjs zzjsVar2 = (zzjs) zzkgVarZzd;
                    zzjsVar2.zze(Float.intBitsToFloat(zzil.zzb(bArr, i)));
                    int i11 = i + 4;
                    while (i11 < i2) {
                        int iZzj5 = zzil.zzj(bArr, i11, zzikVar);
                        if (i3 != zzikVar.zza) {
                            return i11;
                        }
                        zzjsVar2.zze(Float.intBitsToFloat(zzil.zzb(bArr, iZzj5)));
                        i11 = iZzj5 + 4;
                    }
                    return i11;
                }
                break;
            case 20:
            case 21:
            case 37:
            case 38:
                if (i5 == 2) {
                    zzkv zzkvVar = (zzkv) zzkgVarZzd;
                    int iZzj6 = zzil.zzj(bArr, i, zzikVar);
                    int i12 = zzikVar.zza + iZzj6;
                    while (iZzj6 < i12) {
                        iZzj6 = zzil.zzm(bArr, iZzj6, zzikVar);
                        zzkvVar.zzg(zzikVar.zzb);
                    }
                    if (iZzj6 == i12) {
                        return iZzj6;
                    }
                    throw zzkj.zzf();
                }
                if (i5 == 0) {
                    zzkv zzkvVar2 = (zzkv) zzkgVarZzd;
                    int iZzm = zzil.zzm(bArr, i, zzikVar);
                    zzkvVar2.zzg(zzikVar.zzb);
                    while (iZzm < i2) {
                        int iZzj7 = zzil.zzj(bArr, iZzm, zzikVar);
                        if (i3 != zzikVar.zza) {
                            return iZzm;
                        }
                        iZzm = zzil.zzm(bArr, iZzj7, zzikVar);
                        zzkvVar2.zzg(zzikVar.zzb);
                    }
                    return iZzm;
                }
                break;
            case 22:
            case 29:
            case 39:
            case 43:
                if (i5 == 2) {
                    return zzil.zzf(bArr, i, zzkgVarZzd, zzikVar);
                }
                if (i5 == 0) {
                    return zzil.zzl(i3, bArr, i, i2, zzkgVarZzd, zzikVar);
                }
                break;
            case 23:
            case 32:
            case 40:
            case 46:
                if (i5 == 2) {
                    zzkv zzkvVar3 = (zzkv) zzkgVarZzd;
                    int iZzj8 = zzil.zzj(bArr, i, zzikVar);
                    int i13 = zzikVar.zza + iZzj8;
                    while (iZzj8 < i13) {
                        zzkvVar3.zzg(zzil.zzn(bArr, iZzj8));
                        iZzj8 += 8;
                    }
                    if (iZzj8 == i13) {
                        return iZzj8;
                    }
                    throw zzkj.zzf();
                }
                if (i5 == 1) {
                    zzkv zzkvVar4 = (zzkv) zzkgVarZzd;
                    zzkvVar4.zzg(zzil.zzn(bArr, i));
                    int i14 = i + 8;
                    while (i14 < i2) {
                        int iZzj9 = zzil.zzj(bArr, i14, zzikVar);
                        if (i3 != zzikVar.zza) {
                            return i14;
                        }
                        zzkvVar4.zzg(zzil.zzn(bArr, iZzj9));
                        i14 = iZzj9 + 8;
                    }
                    return i14;
                }
                break;
            case 24:
            case 31:
            case 41:
            case 45:
                if (i5 == 2) {
                    zzka zzkaVar = (zzka) zzkgVarZzd;
                    int iZzj10 = zzil.zzj(bArr, i, zzikVar);
                    int i15 = zzikVar.zza + iZzj10;
                    while (iZzj10 < i15) {
                        zzkaVar.zzh(zzil.zzb(bArr, iZzj10));
                        iZzj10 += 4;
                    }
                    if (iZzj10 == i15) {
                        return iZzj10;
                    }
                    throw zzkj.zzf();
                }
                if (i5 == 5) {
                    zzka zzkaVar2 = (zzka) zzkgVarZzd;
                    zzkaVar2.zzh(zzil.zzb(bArr, i));
                    int i16 = i + 4;
                    while (i16 < i2) {
                        int iZzj11 = zzil.zzj(bArr, i16, zzikVar);
                        if (i3 != zzikVar.zza) {
                            return i16;
                        }
                        zzkaVar2.zzh(zzil.zzb(bArr, iZzj11));
                        i16 = iZzj11 + 4;
                    }
                    return i16;
                }
                break;
            case 25:
            case 42:
                if (i5 == 2) {
                    zzim zzimVar = (zzim) zzkgVarZzd;
                    int iZzj12 = zzil.zzj(bArr, i, zzikVar);
                    int i17 = zzikVar.zza + iZzj12;
                    while (iZzj12 < i17) {
                        iZzj12 = zzil.zzm(bArr, iZzj12, zzikVar);
                        zzimVar.zze(zzikVar.zzb != 0);
                    }
                    if (iZzj12 == i17) {
                        return iZzj12;
                    }
                    throw zzkj.zzf();
                }
                if (i5 == 0) {
                    zzim zzimVar2 = (zzim) zzkgVarZzd;
                    int iZzm2 = zzil.zzm(bArr, i, zzikVar);
                    zzimVar2.zze(zzikVar.zzb != 0);
                    while (iZzm2 < i2) {
                        int iZzj13 = zzil.zzj(bArr, iZzm2, zzikVar);
                        if (i3 != zzikVar.zza) {
                            return iZzm2;
                        }
                        iZzm2 = zzil.zzm(bArr, iZzj13, zzikVar);
                        zzimVar2.zze(zzikVar.zzb != 0);
                    }
                    return iZzm2;
                }
                break;
            case 26:
                if (i5 == 2) {
                    if ((j & 536870912) == 0) {
                        int iZzj14 = zzil.zzj(bArr, i, zzikVar);
                        int i18 = zzikVar.zza;
                        if (i18 < 0) {
                            throw zzkj.zzd();
                        }
                        if (i18 == 0) {
                            zzkgVarZzd.add("");
                        } else {
                            zzkgVarZzd.add(new String(bArr, iZzj14, i18, zzkh.zzb));
                            iZzj14 += i18;
                        }
                        while (iZzj14 < i2) {
                            int iZzj15 = zzil.zzj(bArr, iZzj14, zzikVar);
                            if (i3 != zzikVar.zza) {
                                return iZzj14;
                            }
                            iZzj14 = zzil.zzj(bArr, iZzj15, zzikVar);
                            int i19 = zzikVar.zza;
                            if (i19 < 0) {
                                throw zzkj.zzd();
                            }
                            if (i19 == 0) {
                                zzkgVarZzd.add("");
                            } else {
                                zzkgVarZzd.add(new String(bArr, iZzj14, i19, zzkh.zzb));
                                iZzj14 += i19;
                            }
                        }
                        return iZzj14;
                    }
                    int iZzj16 = zzil.zzj(bArr, i, zzikVar);
                    int i20 = zzikVar.zza;
                    if (i20 < 0) {
                        throw zzkj.zzd();
                    }
                    if (i20 == 0) {
                        zzkgVarZzd.add("");
                        iZzj = iZzj16;
                    } else {
                        iZzj = iZzj16 + i20;
                        if (!zzmx.zzf(bArr, iZzj16, iZzj)) {
                            throw zzkj.zzc();
                        }
                        zzkgVarZzd.add(new String(bArr, iZzj16, i20, zzkh.zzb));
                    }
                    while (iZzj < i2) {
                        int iZzj17 = zzil.zzj(bArr, iZzj, zzikVar);
                        if (i3 != zzikVar.zza) {
                            return iZzj;
                        }
                        iZzj = zzil.zzj(bArr, iZzj17, zzikVar);
                        int i21 = zzikVar.zza;
                        if (i21 < 0) {
                            throw zzkj.zzd();
                        }
                        if (i21 == 0) {
                            zzkgVarZzd.add("");
                        } else {
                            int i22 = iZzj + i21;
                            if (!zzmx.zzf(bArr, iZzj, i22)) {
                                throw zzkj.zzc();
                            }
                            zzkgVarZzd.add(new String(bArr, iZzj, i21, zzkh.zzb));
                            iZzj = i22;
                        }
                    }
                    return iZzj;
                }
                break;
            case 27:
                if (i5 == 2) {
                    return zzil.zze(zzE(i6), i3, bArr, i, i2, zzkgVarZzd, zzikVar);
                }
                break;
            case 28:
                if (i5 == 2) {
                    int iZzj18 = zzil.zzj(bArr, i, zzikVar);
                    int i23 = zzikVar.zza;
                    if (i23 < 0) {
                        throw zzkj.zzd();
                    }
                    if (i23 > bArr.length - iZzj18) {
                        throw zzkj.zzf();
                    }
                    if (i23 == 0) {
                        zzkgVarZzd.add(zziy.zzb);
                    } else {
                        zzkgVarZzd.add(zziy.zzl(bArr, iZzj18, i23));
                        iZzj18 += i23;
                    }
                    while (iZzj18 < i2) {
                        int iZzj19 = zzil.zzj(bArr, iZzj18, zzikVar);
                        if (i3 != zzikVar.zza) {
                            return iZzj18;
                        }
                        iZzj18 = zzil.zzj(bArr, iZzj19, zzikVar);
                        int i24 = zzikVar.zza;
                        if (i24 < 0) {
                            throw zzkj.zzd();
                        }
                        if (i24 > bArr.length - iZzj18) {
                            throw zzkj.zzf();
                        }
                        if (i24 == 0) {
                            zzkgVarZzd.add(zziy.zzb);
                        } else {
                            zzkgVarZzd.add(zziy.zzl(bArr, iZzj18, i24));
                            iZzj18 += i24;
                        }
                    }
                    return iZzj18;
                }
                break;
            case 30:
            case 44:
                if (i5 == 2) {
                    iZzl = zzil.zzf(bArr, i, zzkgVarZzd, zzikVar);
                } else if (i5 == 0) {
                    iZzl = zzil.zzl(i3, bArr, i, i2, zzkgVarZzd, zzikVar);
                }
                zzjz zzjzVar = (zzjz) obj;
                zzmj zzmjVar = zzjzVar.zzc;
                if (zzmjVar == zzmj.zzc()) {
                    zzmjVar = null;
                }
                Object objZzC = zzlt.zzC(i4, zzkgVarZzd, zzD(i6), zzmjVar, this.zzn);
                if (objZzC == null) {
                    return iZzl;
                }
                zzjzVar.zzc = (zzmj) objZzC;
                return iZzl;
            case 33:
            case 47:
                if (i5 == 2) {
                    zzka zzkaVar3 = (zzka) zzkgVarZzd;
                    int iZzj20 = zzil.zzj(bArr, i, zzikVar);
                    int i25 = zzikVar.zza + iZzj20;
                    while (iZzj20 < i25) {
                        iZzj20 = zzil.zzj(bArr, iZzj20, zzikVar);
                        zzkaVar3.zzh(zzjc.zzb(zzikVar.zza));
                    }
                    if (iZzj20 == i25) {
                        return iZzj20;
                    }
                    throw zzkj.zzf();
                }
                if (i5 == 0) {
                    zzka zzkaVar4 = (zzka) zzkgVarZzd;
                    int iZzj21 = zzil.zzj(bArr, i, zzikVar);
                    zzkaVar4.zzh(zzjc.zzb(zzikVar.zza));
                    while (iZzj21 < i2) {
                        int iZzj22 = zzil.zzj(bArr, iZzj21, zzikVar);
                        if (i3 != zzikVar.zza) {
                            return iZzj21;
                        }
                        iZzj21 = zzil.zzj(bArr, iZzj22, zzikVar);
                        zzkaVar4.zzh(zzjc.zzb(zzikVar.zza));
                    }
                    return iZzj21;
                }
                break;
            case 34:
            case 48:
                if (i5 == 2) {
                    zzkv zzkvVar5 = (zzkv) zzkgVarZzd;
                    int iZzj23 = zzil.zzj(bArr, i, zzikVar);
                    int i26 = zzikVar.zza + iZzj23;
                    while (iZzj23 < i26) {
                        iZzj23 = zzil.zzm(bArr, iZzj23, zzikVar);
                        zzkvVar5.zzg(zzjc.zzc(zzikVar.zzb));
                    }
                    if (iZzj23 == i26) {
                        return iZzj23;
                    }
                    throw zzkj.zzf();
                }
                if (i5 == 0) {
                    zzkv zzkvVar6 = (zzkv) zzkgVarZzd;
                    int iZzm3 = zzil.zzm(bArr, i, zzikVar);
                    zzkvVar6.zzg(zzjc.zzc(zzikVar.zzb));
                    while (iZzm3 < i2) {
                        int iZzj24 = zzil.zzj(bArr, iZzm3, zzikVar);
                        if (i3 != zzikVar.zza) {
                            return iZzm3;
                        }
                        iZzm3 = zzil.zzm(bArr, iZzj24, zzikVar);
                        zzkvVar6.zzg(zzjc.zzc(zzikVar.zzb));
                    }
                    return iZzm3;
                }
                break;
            default:
                if (i5 == 3) {
                    zzlr zzlrVarZzE = zzE(i6);
                    int i27 = (i3 & (-8)) | 4;
                    int iZzc = zzil.zzc(zzlrVarZzE, bArr, i, i2, i27, zzikVar);
                    zzkgVarZzd.add(zzikVar.zzc);
                    while (iZzc < i2) {
                        int iZzj25 = zzil.zzj(bArr, iZzc, zzikVar);
                        if (i3 != zzikVar.zza) {
                            return iZzc;
                        }
                        iZzc = zzil.zzc(zzlrVarZzE, bArr, iZzj25, i2, i27, zzikVar);
                        zzkgVarZzd.add(zzikVar.zzc);
                    }
                    return iZzc;
                }
                break;
        }
        return i;
    }

    private final int zzw(int i) {
        if (i < this.zze || i > this.zzf) {
            return -1;
        }
        return zzz(i, 0);
    }

    private final int zzx(int i, int i2) {
        if (i < this.zze || i > this.zzf) {
            return -1;
        }
        return zzz(i, i2);
    }

    private final int zzy(int i) {
        return this.zzc[i + 2];
    }

    private final int zzz(int i, int i2) {
        int length = (this.zzc.length / 3) - 1;
        while (i2 <= length) {
            int i3 = (length + i2) >>> 1;
            int i4 = i3 * 3;
            int i5 = this.zzc[i4];
            if (i == i5) {
                return i4;
            }
            if (i < i5) {
                length = i3 - 1;
            } else {
                i2 = i3 + 1;
            }
        }
        return -1;
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final int zza(Object obj) {
        return this.zzi ? zzq(obj) : zzp(obj);
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final int zzb(Object obj) {
        int i;
        int iZzc;
        int length = this.zzc.length;
        int i2 = 0;
        for (int i3 = 0; i3 < length; i3 += 3) {
            int iZzB = zzB(i3);
            int i4 = this.zzc[i3];
            long j = 1048575 & iZzB;
            int iHashCode = 37;
            switch (zzA(iZzB)) {
                case 0:
                    i = i2 * 53;
                    iZzc = zzkh.zzc(Double.doubleToLongBits(zzms.zza(obj, j)));
                    i2 = i + iZzc;
                    break;
                case 1:
                    i = i2 * 53;
                    iZzc = Float.floatToIntBits(zzms.zzb(obj, j));
                    i2 = i + iZzc;
                    break;
                case 2:
                    i = i2 * 53;
                    iZzc = zzkh.zzc(zzms.zzd(obj, j));
                    i2 = i + iZzc;
                    break;
                case 3:
                    i = i2 * 53;
                    iZzc = zzkh.zzc(zzms.zzd(obj, j));
                    i2 = i + iZzc;
                    break;
                case 4:
                    i = i2 * 53;
                    iZzc = zzms.zzc(obj, j);
                    i2 = i + iZzc;
                    break;
                case 5:
                    i = i2 * 53;
                    iZzc = zzkh.zzc(zzms.zzd(obj, j));
                    i2 = i + iZzc;
                    break;
                case 6:
                    i = i2 * 53;
                    iZzc = zzms.zzc(obj, j);
                    i2 = i + iZzc;
                    break;
                case 7:
                    i = i2 * 53;
                    iZzc = zzkh.zza(zzms.zzw(obj, j));
                    i2 = i + iZzc;
                    break;
                case 8:
                    i = i2 * 53;
                    iZzc = ((String) zzms.zzf(obj, j)).hashCode();
                    i2 = i + iZzc;
                    break;
                case 9:
                    Object objZzf = zzms.zzf(obj, j);
                    if (objZzf != null) {
                        iHashCode = objZzf.hashCode();
                    }
                    i2 = (i2 * 53) + iHashCode;
                    break;
                case 10:
                    i = i2 * 53;
                    iZzc = zzms.zzf(obj, j).hashCode();
                    i2 = i + iZzc;
                    break;
                case 11:
                    i = i2 * 53;
                    iZzc = zzms.zzc(obj, j);
                    i2 = i + iZzc;
                    break;
                case 12:
                    i = i2 * 53;
                    iZzc = zzms.zzc(obj, j);
                    i2 = i + iZzc;
                    break;
                case 13:
                    i = i2 * 53;
                    iZzc = zzms.zzc(obj, j);
                    i2 = i + iZzc;
                    break;
                case 14:
                    i = i2 * 53;
                    iZzc = zzkh.zzc(zzms.zzd(obj, j));
                    i2 = i + iZzc;
                    break;
                case 15:
                    i = i2 * 53;
                    iZzc = zzms.zzc(obj, j);
                    i2 = i + iZzc;
                    break;
                case 16:
                    i = i2 * 53;
                    iZzc = zzkh.zzc(zzms.zzd(obj, j));
                    i2 = i + iZzc;
                    break;
                case 17:
                    Object objZzf2 = zzms.zzf(obj, j);
                    if (objZzf2 != null) {
                        iHashCode = objZzf2.hashCode();
                    }
                    i2 = (i2 * 53) + iHashCode;
                    break;
                case 18:
                case 19:
                case 20:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 26:
                case 27:
                case 28:
                case 29:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 35:
                case 36:
                case 37:
                case 38:
                case 39:
                case 40:
                case 41:
                case 42:
                case 43:
                case 44:
                case 45:
                case 46:
                case 47:
                case 48:
                case 49:
                    i = i2 * 53;
                    iZzc = zzms.zzf(obj, j).hashCode();
                    i2 = i + iZzc;
                    break;
                case 50:
                    i = i2 * 53;
                    iZzc = zzms.zzf(obj, j).hashCode();
                    i2 = i + iZzc;
                    break;
                case 51:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = zzkh.zzc(Double.doubleToLongBits(zzn(obj, j)));
                        i2 = i + iZzc;
                    }
                    break;
                case 52:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = Float.floatToIntBits(zzo(obj, j));
                        i2 = i + iZzc;
                    }
                    break;
                case 53:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = zzkh.zzc(zzC(obj, j));
                        i2 = i + iZzc;
                    }
                    break;
                case 54:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = zzkh.zzc(zzC(obj, j));
                        i2 = i + iZzc;
                    }
                    break;
                case 55:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = zzr(obj, j);
                        i2 = i + iZzc;
                    }
                    break;
                case 56:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = zzkh.zzc(zzC(obj, j));
                        i2 = i + iZzc;
                    }
                    break;
                case 57:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = zzr(obj, j);
                        i2 = i + iZzc;
                    }
                    break;
                case 58:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = zzkh.zza(zzQ(obj, j));
                        i2 = i + iZzc;
                    }
                    break;
                case 59:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = ((String) zzms.zzf(obj, j)).hashCode();
                        i2 = i + iZzc;
                    }
                    break;
                case 60:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = zzms.zzf(obj, j).hashCode();
                        i2 = i + iZzc;
                    }
                    break;
                case 61:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = zzms.zzf(obj, j).hashCode();
                        i2 = i + iZzc;
                    }
                    break;
                case 62:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = zzr(obj, j);
                        i2 = i + iZzc;
                    }
                    break;
                case 63:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = zzr(obj, j);
                        i2 = i + iZzc;
                    }
                    break;
                case 64:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = zzr(obj, j);
                        i2 = i + iZzc;
                    }
                    break;
                case 65:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = zzkh.zzc(zzC(obj, j));
                        i2 = i + iZzc;
                    }
                    break;
                case 66:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = zzr(obj, j);
                        i2 = i + iZzc;
                    }
                    break;
                case 67:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = zzkh.zzc(zzC(obj, j));
                        i2 = i + iZzc;
                    }
                    break;
                case 68:
                    if (zzP(obj, i4, i3)) {
                        i = i2 * 53;
                        iZzc = zzms.zzf(obj, j).hashCode();
                        i2 = i + iZzc;
                    }
                    break;
            }
        }
        int iHashCode2 = (i2 * 53) + this.zzn.zzc(obj).hashCode();
        if (!this.zzh) {
            return iHashCode2;
        }
        this.zzo.zza(obj);
        throw null;
    }

    /* JADX WARN: Code duplicated, block: B:117:0x036c A[PHI: r0 r19 r24 r28
  0x036c: PHI (r0v38 int) = (r0v32 int), (r0v35 int), (r0v40 int) binds: [B:130:0x03db, B:125:0x03b6, B:116:0x036a] A[DONT_GENERATE, DONT_INLINE]
  0x036c: PHI (r19v5 int) = (r19v3 int), (r19v3 int), (r19v6 int) binds: [B:130:0x03db, B:125:0x03b6, B:116:0x036a] A[DONT_GENERATE, DONT_INLINE]
  0x036c: PHI (r24v4 int) = (r24v2 int), (r24v2 int), (r24v5 int) binds: [B:130:0x03db, B:125:0x03b6, B:116:0x036a] A[DONT_GENERATE, DONT_INLINE]
  0x036c: PHI (r28v7 sun.misc.Unsafe) = (r28v5 sun.misc.Unsafe), (r28v5 sun.misc.Unsafe), (r28v8 sun.misc.Unsafe) binds: [B:130:0x03db, B:125:0x03b6, B:116:0x036a] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:119:0x0386 A[PHI: r0 r19 r24 r28
  0x0386: PHI (r0v36 int) = (r0v32 int), (r0v35 int), (r0v40 int) binds: [B:130:0x03db, B:125:0x03b6, B:116:0x036a] A[DONT_GENERATE, DONT_INLINE]
  0x0386: PHI (r19v4 int) = (r19v3 int), (r19v3 int), (r19v6 int) binds: [B:130:0x03db, B:125:0x03b6, B:116:0x036a] A[DONT_GENERATE, DONT_INLINE]
  0x0386: PHI (r24v3 int) = (r24v2 int), (r24v2 int), (r24v5 int) binds: [B:130:0x03db, B:125:0x03b6, B:116:0x036a] A[DONT_GENERATE, DONT_INLINE]
  0x0386: PHI (r28v6 sun.misc.Unsafe) = (r28v5 sun.misc.Unsafe), (r28v5 sun.misc.Unsafe), (r28v8 sun.misc.Unsafe) binds: [B:130:0x03db, B:125:0x03b6, B:116:0x036a] A[DONT_GENERATE, DONT_INLINE]] */
    final int zzc(Object obj, byte[] bArr, int i, int i2, int i3, zzik zzikVar) throws IOException {
        Unsafe unsafe;
        int i4;
        Object obj2;
        zzlj<T> zzljVar;
        int i5;
        int i6;
        int i7;
        int i8;
        int i9;
        int i10;
        zzik zzikVar2;
        int i11;
        int i12;
        int i13;
        int i14;
        int i15;
        int i16;
        int i17;
        int i18;
        int iZzg;
        zzlj<T> zzljVar2 = this;
        Object obj3 = obj;
        bArr = bArr;
        i2 = i2;
        i3 = i3;
        zzik zzikVar3 = zzikVar;
        Unsafe unsafe2 = zzb;
        int iZzi = i;
        int i19 = 0;
        int i20 = 0;
        int i21 = 0;
        int i22 = -1;
        int i23 = 1048575;
        while (true) {
            if (iZzi < i2) {
                int i24 = iZzi + 1;
                byte b = bArr[iZzi];
                if (b < 0) {
                    int iZzk = zzil.zzk(b, bArr, i24, zzikVar3);
                    i5 = zzikVar3.zza;
                    i24 = iZzk;
                } else {
                    i5 = b;
                }
                int i25 = i5 >>> 3;
                int i26 = i5 & 7;
                int iZzx = i25 > i22 ? zzljVar2.zzx(i25, i20 / 3) : zzljVar2.zzw(i25);
                if (iZzx == -1) {
                    i6 = i25;
                    i7 = i24;
                    i8 = i5;
                    i9 = i21;
                    unsafe = unsafe2;
                    i3 = i3;
                    i10 = 0;
                } else {
                    int[] iArr = zzljVar2.zzc;
                    int i27 = iArr[iZzx + 1];
                    int iZzA = zzA(i27);
                    int i28 = i24;
                    long j = i27 & 1048575;
                    if (iZzA <= 17) {
                        int i29 = iArr[iZzx + 2];
                        int i30 = 1 << (i29 >>> 20);
                        int i31 = i29 & 1048575;
                        if (i31 != i23) {
                            if (i23 != 1048575) {
                                unsafe2.putInt(obj3, i23, i21);
                            }
                            i21 = unsafe2.getInt(obj3, i31);
                            i23 = i31;
                        } else {
                            i23 = i23;
                        }
                        int i32 = i21;
                        switch (iZzA) {
                            case 0:
                                i13 = iZzx;
                                i14 = i25;
                                i15 = i28;
                                if (i26 == 1) {
                                    zzms.zzo(obj3, j, Double.longBitsToDouble(zzil.zzn(bArr, i15)));
                                    iZzi = i15 + 8;
                                    i21 = i32 | i30;
                                    i22 = i14;
                                    i20 = i13;
                                    i19 = i5;
                                    i23 = i23;
                                    i2 = i2;
                                } else {
                                    i6 = i14;
                                    i9 = i32;
                                    unsafe = unsafe2;
                                    i7 = i15;
                                    i10 = i13;
                                    i8 = i5;
                                    i23 = i23;
                                }
                                break;
                            case 1:
                                i13 = iZzx;
                                i14 = i25;
                                i15 = i28;
                                if (i26 == 5) {
                                    zzms.zzp(obj3, j, Float.intBitsToFloat(zzil.zzb(bArr, i15)));
                                    iZzi = i15 + 4;
                                    i21 = i32 | i30;
                                    i22 = i14;
                                    i20 = i13;
                                    i19 = i5;
                                    i23 = i23;
                                    i2 = i2;
                                } else {
                                    i6 = i14;
                                    i9 = i32;
                                    unsafe = unsafe2;
                                    i7 = i15;
                                    i10 = i13;
                                    i8 = i5;
                                    i23 = i23;
                                }
                                break;
                            case 2:
                            case 3:
                                i13 = iZzx;
                                i14 = i25;
                                i15 = i28;
                                if (i26 == 0) {
                                    int iZzm = zzil.zzm(bArr, i15, zzikVar3);
                                    unsafe2.putLong(obj, j, zzikVar3.zzb);
                                    i21 = i32 | i30;
                                    i22 = i14;
                                    iZzi = iZzm;
                                    i20 = i13;
                                    i19 = i5;
                                    i23 = i23;
                                    i2 = i2;
                                } else {
                                    i6 = i14;
                                    i9 = i32;
                                    unsafe = unsafe2;
                                    i7 = i15;
                                    i10 = i13;
                                    i8 = i5;
                                    i23 = i23;
                                }
                                break;
                            case 4:
                            case 11:
                                i13 = iZzx;
                                i14 = i25;
                                i15 = i28;
                                if (i26 == 0) {
                                    iZzi = zzil.zzj(bArr, i15, zzikVar3);
                                    unsafe2.putInt(obj3, j, zzikVar3.zza);
                                    i21 = i32 | i30;
                                    i22 = i14;
                                    i20 = i13;
                                    i19 = i5;
                                    i23 = i23;
                                    i2 = i2;
                                } else {
                                    i6 = i14;
                                    i9 = i32;
                                    unsafe = unsafe2;
                                    i7 = i15;
                                    i10 = i13;
                                    i8 = i5;
                                    i23 = i23;
                                }
                                break;
                            case 5:
                            case 14:
                                i16 = iZzx;
                                i17 = i5;
                                i14 = i25;
                                i18 = i28;
                                if (i26 == 1) {
                                    i13 = i16;
                                    i5 = i17;
                                    i15 = i18;
                                    unsafe2.putLong(obj, j, zzil.zzn(bArr, i18));
                                    iZzi = i15 + 8;
                                    i21 = i32 | i30;
                                    i22 = i14;
                                    i20 = i13;
                                    i19 = i5;
                                    i23 = i23;
                                    i2 = i2;
                                } else {
                                    i13 = i16;
                                    i5 = i17;
                                    i15 = i18;
                                    i6 = i14;
                                    i9 = i32;
                                    unsafe = unsafe2;
                                    i7 = i15;
                                    i10 = i13;
                                    i8 = i5;
                                    i23 = i23;
                                }
                                break;
                            case 6:
                            case 13:
                                i16 = iZzx;
                                i17 = i5;
                                i14 = i25;
                                i18 = i28;
                                if (i26 == 5) {
                                    unsafe2.putInt(obj3, j, zzil.zzb(bArr, i18));
                                    iZzi = i18 + 4;
                                    i21 = i32 | i30;
                                    i22 = i14;
                                    i20 = i16;
                                    i19 = i17;
                                    i3 = i3;
                                } else {
                                    i13 = i16;
                                    i5 = i17;
                                    i15 = i18;
                                    i6 = i14;
                                    i9 = i32;
                                    unsafe = unsafe2;
                                    i7 = i15;
                                    i10 = i13;
                                    i8 = i5;
                                    i23 = i23;
                                }
                                break;
                            case 7:
                                i16 = iZzx;
                                i17 = i5;
                                i14 = i25;
                                i18 = i28;
                                if (i26 == 0) {
                                    iZzi = zzil.zzm(bArr, i18, zzikVar3);
                                    zzms.zzm(obj3, j, zzikVar3.zzb != 0);
                                    i21 = i32 | i30;
                                    i22 = i14;
                                    i20 = i16;
                                    i19 = i17;
                                    i3 = i3;
                                } else {
                                    i13 = i16;
                                    i5 = i17;
                                    i15 = i18;
                                    i6 = i14;
                                    i9 = i32;
                                    unsafe = unsafe2;
                                    i7 = i15;
                                    i10 = i13;
                                    i8 = i5;
                                    i23 = i23;
                                }
                                break;
                            case 8:
                                i16 = iZzx;
                                i17 = i5;
                                i14 = i25;
                                i18 = i28;
                                if (i26 == 2) {
                                    iZzg = (536870912 & i27) == 0 ? zzil.zzg(bArr, i18, zzikVar3) : zzil.zzh(bArr, i18, zzikVar3);
                                    unsafe2.putObject(obj3, j, zzikVar3.zzc);
                                    i21 = i32 | i30;
                                    iZzi = iZzg;
                                    i20 = i16;
                                    i19 = i17;
                                    i22 = i14;
                                    i3 = i3;
                                } else {
                                    i13 = i16;
                                    i5 = i17;
                                    i15 = i18;
                                    i6 = i14;
                                    i9 = i32;
                                    unsafe = unsafe2;
                                    i7 = i15;
                                    i10 = i13;
                                    i8 = i5;
                                    i23 = i23;
                                }
                                break;
                            case 9:
                                i16 = iZzx;
                                i17 = i5;
                                i14 = i25;
                                i18 = i28;
                                if (i26 == 2) {
                                    iZzg = zzil.zzd(zzljVar2.zzE(i16), bArr, i18, i2, zzikVar3);
                                    if ((i32 & i30) == 0) {
                                        unsafe2.putObject(obj3, j, zzikVar3.zzc);
                                    } else {
                                        unsafe2.putObject(obj3, j, zzkh.zzg(unsafe2.getObject(obj3, j), zzikVar3.zzc));
                                    }
                                    i21 = i32 | i30;
                                    iZzi = iZzg;
                                    i20 = i16;
                                    i19 = i17;
                                    i22 = i14;
                                    i3 = i3;
                                } else {
                                    i13 = i16;
                                    i5 = i17;
                                    i15 = i18;
                                    i6 = i14;
                                    i9 = i32;
                                    unsafe = unsafe2;
                                    i7 = i15;
                                    i10 = i13;
                                    i8 = i5;
                                    i23 = i23;
                                }
                                break;
                            case 10:
                                i16 = iZzx;
                                i17 = i5;
                                i14 = i25;
                                i18 = i28;
                                if (i26 == 2) {
                                    iZzg = zzil.zza(bArr, i18, zzikVar3);
                                    unsafe2.putObject(obj3, j, zzikVar3.zzc);
                                    i21 = i32 | i30;
                                    iZzi = iZzg;
                                    i20 = i16;
                                    i19 = i17;
                                    i22 = i14;
                                    i3 = i3;
                                } else {
                                    i13 = i16;
                                    i5 = i17;
                                    i15 = i18;
                                    i6 = i14;
                                    i9 = i32;
                                    unsafe = unsafe2;
                                    i7 = i15;
                                    i10 = i13;
                                    i8 = i5;
                                    i23 = i23;
                                }
                                break;
                            case 12:
                                i16 = iZzx;
                                i17 = i5;
                                i14 = i25;
                                i18 = i28;
                                if (i26 == 0) {
                                    iZzg = zzil.zzj(bArr, i18, zzikVar3);
                                    int i33 = zzikVar3.zza;
                                    zzkd zzkdVarZzD = zzljVar2.zzD(i16);
                                    if (zzkdVarZzD == null || zzkdVarZzD.zza(i33)) {
                                        unsafe2.putInt(obj3, j, i33);
                                        i21 = i32 | i30;
                                        iZzi = iZzg;
                                        i20 = i16;
                                    } else {
                                        zzd(obj).zzh(i17, Long.valueOf(i33));
                                        iZzi = iZzg;
                                        i20 = i16;
                                        i21 = i32;
                                    }
                                    i19 = i17;
                                    i22 = i14;
                                    i3 = i3;
                                } else {
                                    i13 = i16;
                                    i5 = i17;
                                    i15 = i18;
                                    i6 = i14;
                                    i9 = i32;
                                    unsafe = unsafe2;
                                    i7 = i15;
                                    i10 = i13;
                                    i8 = i5;
                                    i23 = i23;
                                }
                                break;
                            case 15:
                                i16 = iZzx;
                                i17 = i5;
                                i14 = i25;
                                i18 = i28;
                                if (i26 == 0) {
                                    iZzi = zzil.zzj(bArr, i18, zzikVar3);
                                    unsafe2.putInt(obj3, j, zzjc.zzb(zzikVar3.zza));
                                    i21 = i32 | i30;
                                    i22 = i14;
                                    i20 = i16;
                                    i19 = i17;
                                    i3 = i3;
                                } else {
                                    i13 = i16;
                                    i5 = i17;
                                    i15 = i18;
                                    i6 = i14;
                                    i9 = i32;
                                    unsafe = unsafe2;
                                    i7 = i15;
                                    i10 = i13;
                                    i8 = i5;
                                    i23 = i23;
                                }
                                break;
                            case 16:
                                if (i26 == 0) {
                                    int iZzm2 = zzil.zzm(bArr, i28, zzikVar3);
                                    int i34 = iZzx;
                                    i17 = i5;
                                    unsafe2.putLong(obj, j, zzjc.zzc(zzikVar3.zzb));
                                    i21 = i32 | i30;
                                    i22 = i25;
                                    iZzi = iZzm2;
                                    i20 = i34;
                                    i19 = i17;
                                    i3 = i3;
                                } else {
                                    i14 = i25;
                                    i13 = iZzx;
                                    i15 = i28;
                                    i6 = i14;
                                    i9 = i32;
                                    unsafe = unsafe2;
                                    i7 = i15;
                                    i10 = i13;
                                    i8 = i5;
                                    i23 = i23;
                                }
                                break;
                            default:
                                i13 = iZzx;
                                i14 = i25;
                                i15 = i28;
                                if (i26 == 3) {
                                    iZzi = zzil.zzc(zzljVar2.zzE(i13), bArr, i15, i2, (i14 << 3) | 4, zzikVar);
                                    if ((i32 & i30) == 0) {
                                        unsafe2.putObject(obj3, j, zzikVar3.zzc);
                                    } else {
                                        unsafe2.putObject(obj3, j, zzkh.zzg(unsafe2.getObject(obj3, j), zzikVar3.zzc));
                                    }
                                    i21 = i32 | i30;
                                    i22 = i14;
                                    i20 = i13;
                                    i19 = i5;
                                    i23 = i23;
                                    i2 = i2;
                                } else {
                                    i6 = i14;
                                    i9 = i32;
                                    unsafe = unsafe2;
                                    i7 = i15;
                                    i10 = i13;
                                    i8 = i5;
                                    i23 = i23;
                                }
                                break;
                        }
                    } else {
                        int i35 = iZzx;
                        i5 = i5;
                        if (iZzA != 27) {
                            i9 = i21;
                            i23 = i23;
                            if (iZzA <= 49) {
                                i6 = i25;
                                unsafe = unsafe2;
                                i10 = i35;
                                iZzi = zzv(obj, bArr, i28, i2, i5, i6, i26, i35, i27, iZzA, j, zzikVar);
                                if (iZzi != i28) {
                                    zzljVar2 = this;
                                    obj3 = obj;
                                    i3 = i3;
                                    zzikVar3 = zzikVar;
                                    i19 = i5;
                                    i20 = i10;
                                    i21 = i9;
                                    i22 = i6;
                                    i23 = i23;
                                } else {
                                    i7 = iZzi;
                                    i8 = i5;
                                    i23 = i23;
                                    i3 = i3;
                                }
                                unsafe2 = unsafe;
                            } else {
                                i6 = i25;
                                unsafe = unsafe2;
                                i12 = i28;
                                i10 = i35;
                                if (iZzA != 50) {
                                    iZzi = zzt(obj, bArr, i12, i2, i5, i6, i26, i27, iZzA, j, i10, zzikVar);
                                    if (iZzi != i12) {
                                        zzljVar2 = this;
                                        obj3 = obj;
                                        i3 = i3;
                                        zzikVar3 = zzikVar;
                                        i19 = i5;
                                        i20 = i10;
                                        i21 = i9;
                                        i22 = i6;
                                        i23 = i23;
                                    } else {
                                        i7 = iZzi;
                                        i8 = i5;
                                        i23 = i23;
                                        i3 = i3;
                                    }
                                    unsafe2 = unsafe;
                                } else if (i26 == 2) {
                                    iZzi = zzs(obj, bArr, i12, i2, i10, j, zzikVar);
                                    if (iZzi != i12) {
                                        zzljVar2 = this;
                                        obj3 = obj;
                                        i3 = i3;
                                        zzikVar3 = zzikVar;
                                        i19 = i5;
                                        i20 = i10;
                                        i21 = i9;
                                        i22 = i6;
                                        i23 = i23;
                                    } else {
                                        i7 = iZzi;
                                        i8 = i5;
                                        i23 = i23;
                                        i3 = i3;
                                    }
                                    unsafe2 = unsafe;
                                }
                            }
                        } else if (i26 == 2) {
                            zzkg zzkgVarZzd = (zzkg) unsafe2.getObject(obj3, j);
                            if (!zzkgVarZzd.zzc()) {
                                int size = zzkgVarZzd.size();
                                zzkgVarZzd = zzkgVarZzd.zzd(size == 0 ? 10 : size + size);
                                unsafe2.putObject(obj3, j, zzkgVarZzd);
                            }
                            i19 = i5;
                            i23 = i23;
                            iZzi = zzil.zze(zzljVar2.zzE(i35), i19, bArr, i28, i2, zzkgVarZzd, zzikVar);
                            i3 = i3;
                            i22 = i25;
                            i20 = i35;
                            i21 = i21;
                            i23 = i23;
                            i2 = i2;
                        } else {
                            i9 = i21;
                            i23 = i23;
                            i6 = i25;
                            unsafe = unsafe2;
                            i12 = i28;
                            i10 = i35;
                        }
                        i7 = i12;
                        i8 = i5;
                        i23 = i23;
                    }
                }
                if (i8 != i3 || i3 == 0) {
                    int i36 = i3;
                    if (this.zzh) {
                        zzikVar2 = zzikVar;
                        if (zzikVar2.zzd != zzjl.zza()) {
                            i11 = i6;
                            if (zzikVar2.zzd.zzc(this.zzg, i11) != null) {
                                throw null;
                            }
                            iZzi = zzil.zzi(i8, bArr, i7, i2, zzd(obj), zzikVar);
                            obj = obj;
                        }
                        i19 = i8;
                        zzljVar2 = this;
                        i22 = i11;
                        obj3 = obj;
                        i20 = i10;
                        i21 = i9;
                        i3 = i36;
                        zzikVar3 = zzikVar2;
                        unsafe2 = unsafe;
                    } else {
                        zzikVar2 = zzikVar;
                    }
                    i11 = i6;
                    iZzi = zzil.zzi(i8, bArr, i7, i2, zzd(obj), zzikVar);
                    i19 = i8;
                    zzljVar2 = this;
                    i22 = i11;
                    obj3 = obj;
                    i20 = i10;
                    i21 = i9;
                    i3 = i36;
                    zzikVar3 = zzikVar2;
                    unsafe2 = unsafe;
                } else {
                    zzljVar = this;
                    obj2 = obj;
                    i4 = i3;
                    iZzi = i7;
                    i19 = i8;
                    i21 = i9;
                }
            } else {
                unsafe = unsafe2;
                i4 = i3;
                obj2 = obj3;
                zzljVar = zzljVar2;
            }
        }
        if (i23 != 1048575) {
            unsafe.putInt(obj2, i23, i21);
        }
        for (int i37 = zzljVar.zzk; i37 < zzljVar.zzl; i37++) {
            int i38 = zzljVar.zzj[i37];
            int i39 = zzljVar.zzc[i38];
            Object objZzf = zzms.zzf(obj2, zzljVar.zzB(i38) & 1048575);
            if (objZzf != null && zzljVar.zzD(i38) != null) {
                throw null;
            }
        }
        if (i4 == 0) {
            if (iZzi != i2) {
                throw zzkj.zze();
            }
        } else if (iZzi > i2 || i19 != i4) {
            throw zzkj.zze();
        }
        return iZzi;
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final Object zze() {
        return ((zzjz) this.zzg).zzl(4, null, null);
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzf(Object obj) {
        int i;
        int i2 = this.zzk;
        while (true) {
            i = this.zzl;
            if (i2 >= i) {
                break;
            }
            long jZzB = zzB(this.zzj[i2]) & 1048575;
            Object objZzf = zzms.zzf(obj, jZzB);
            if (objZzf != null) {
                ((zzla) objZzf).zzc();
                zzms.zzs(obj, jZzB, objZzf);
            }
            i2++;
        }
        int length = this.zzj.length;
        while (i < length) {
            this.zzm.zza(obj, this.zzj[i]);
            i++;
        }
        this.zzn.zzg(obj);
        if (this.zzh) {
            this.zzo.zzb(obj);
        }
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzh(Object obj, byte[] bArr, int i, int i2, zzik zzikVar) throws IOException {
        if (this.zzi) {
            zzu(obj, bArr, i, i2, zzikVar);
        } else {
            zzc(obj, bArr, i, i2, 0, zzikVar);
        }
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final boolean zzi(Object obj, Object obj2) {
        boolean zZzH;
        int length = this.zzc.length;
        for (int i = 0; i < length; i += 3) {
            int iZzB = zzB(i);
            long j = iZzB & 1048575;
            switch (zzA(iZzB)) {
                case 0:
                    if (!zzL(obj, obj2, i) || Double.doubleToLongBits(zzms.zza(obj, j)) != Double.doubleToLongBits(zzms.zza(obj2, j))) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 1:
                    if (!zzL(obj, obj2, i) || Float.floatToIntBits(zzms.zzb(obj, j)) != Float.floatToIntBits(zzms.zzb(obj2, j))) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 2:
                    if (!zzL(obj, obj2, i) || zzms.zzd(obj, j) != zzms.zzd(obj2, j)) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 3:
                    if (!zzL(obj, obj2, i) || zzms.zzd(obj, j) != zzms.zzd(obj2, j)) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 4:
                    if (!zzL(obj, obj2, i) || zzms.zzc(obj, j) != zzms.zzc(obj2, j)) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 5:
                    if (!zzL(obj, obj2, i) || zzms.zzd(obj, j) != zzms.zzd(obj2, j)) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 6:
                    if (!zzL(obj, obj2, i) || zzms.zzc(obj, j) != zzms.zzc(obj2, j)) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 7:
                    if (!zzL(obj, obj2, i) || zzms.zzw(obj, j) != zzms.zzw(obj2, j)) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 8:
                    if (!zzL(obj, obj2, i) || !zzlt.zzH(zzms.zzf(obj, j), zzms.zzf(obj2, j))) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 9:
                    if (!zzL(obj, obj2, i) || !zzlt.zzH(zzms.zzf(obj, j), zzms.zzf(obj2, j))) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 10:
                    if (!zzL(obj, obj2, i) || !zzlt.zzH(zzms.zzf(obj, j), zzms.zzf(obj2, j))) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 11:
                    if (!zzL(obj, obj2, i) || zzms.zzc(obj, j) != zzms.zzc(obj2, j)) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 12:
                    if (!zzL(obj, obj2, i) || zzms.zzc(obj, j) != zzms.zzc(obj2, j)) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 13:
                    if (!zzL(obj, obj2, i) || zzms.zzc(obj, j) != zzms.zzc(obj2, j)) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 14:
                    if (!zzL(obj, obj2, i) || zzms.zzd(obj, j) != zzms.zzd(obj2, j)) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 15:
                    if (!zzL(obj, obj2, i) || zzms.zzc(obj, j) != zzms.zzc(obj2, j)) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 16:
                    if (!zzL(obj, obj2, i) || zzms.zzd(obj, j) != zzms.zzd(obj2, j)) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 17:
                    if (!zzL(obj, obj2, i) || !zzlt.zzH(zzms.zzf(obj, j), zzms.zzf(obj2, j))) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                case 18:
                case 19:
                case 20:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 26:
                case 27:
                case 28:
                case 29:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 35:
                case 36:
                case 37:
                case 38:
                case 39:
                case 40:
                case 41:
                case 42:
                case 43:
                case 44:
                case 45:
                case 46:
                case 47:
                case 48:
                case 49:
                    zZzH = zzlt.zzH(zzms.zzf(obj, j), zzms.zzf(obj2, j));
                    break;
                case 50:
                    zZzH = zzlt.zzH(zzms.zzf(obj, j), zzms.zzf(obj2, j));
                    break;
                case 51:
                case 52:
                case 53:
                case 54:
                case 55:
                case 56:
                case 57:
                case 58:
                case 59:
                case 60:
                case 61:
                case 62:
                case 63:
                case 64:
                case 65:
                case 66:
                case 67:
                case 68:
                    long jZzy = zzy(i) & 1048575;
                    if (zzms.zzc(obj, jZzy) != zzms.zzc(obj2, jZzy) || !zzlt.zzH(zzms.zzf(obj, j), zzms.zzf(obj2, j))) {
                        return false;
                    }
                    continue;
                    break;
                    break;
                default:
                    continue;
                    break;
            }
            if (!zZzH) {
                return false;
            }
        }
        if (!this.zzn.zzc(obj).equals(this.zzn.zzc(obj2))) {
            return false;
        }
        if (!this.zzh) {
            return true;
        }
        this.zzo.zza(obj);
        this.zzo.zza(obj2);
        throw null;
    }

    /* JADX WARN: Code duplicated, block: B:42:0x009e  */
    /* JADX WARN: Code duplicated, block: B:44:0x00ad  */
    /* JADX WARN: Code duplicated, block: B:47:0x00b8  */
    /* JADX WARN: Code duplicated, block: B:50:0x00c3 A[LOOP:1: B:45:0x00b2->B:50:0x00c3, LOOP_END] */
    /* JADX WARN: Code duplicated, block: B:66:0x00c2 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:70:0x00e1 A[SYNTHETIC] */
    @Override // com.google.android.gms.internal.measurement.zzlr
    public final boolean zzj(Object obj) {
        int i;
        int i2;
        List list;
        zzlr zzlrVarZzE;
        int i3;
        int i4 = 1048575;
        int i5 = 0;
        int i6 = 0;
        while (i6 < this.zzk) {
            int i7 = this.zzj[i6];
            int i8 = this.zzc[i7];
            int iZzB = zzB(i7);
            int i9 = this.zzc[i7 + 2];
            int i10 = i9 & 1048575;
            int i11 = 1 << (i9 >>> 20);
            if (i10 != i4) {
                if (i10 != 1048575) {
                    i5 = zzb.getInt(obj, i10);
                }
                i2 = i5;
                i = i10;
            } else {
                i = i4;
                i2 = i5;
            }
            if ((268435456 & iZzB) != 0 && !zzN(obj, i7, i, i2, i11)) {
                return false;
            }
            int iZzA = zzA(iZzB);
            if (iZzA == 9 || iZzA == 17) {
                if (zzN(obj, i7, i, i2, i11) && !zzO(obj, iZzB, zzE(i7))) {
                    return false;
                }
            } else if (iZzA == 27) {
                list = (List) zzms.zzf(obj, iZzB & 1048575);
                if (list.isEmpty()) {
                    continue;
                } else {
                    zzlrVarZzE = zzE(i7);
                    for (i3 = 0; i3 < list.size(); i3++) {
                        if (!zzlrVarZzE.zzj(list.get(i3))) {
                            return false;
                        }
                    }
                }
            } else if (iZzA == 60 || iZzA == 68) {
                if (zzP(obj, i8, i7) && !zzO(obj, iZzB, zzE(i7))) {
                    return false;
                }
            } else if (iZzA == 49) {
                list = (List) zzms.zzf(obj, iZzB & 1048575);
                if (list.isEmpty()) {
                    zzlrVarZzE = zzE(i7);
                    while (i3 < list.size()) {
                        if (!zzlrVarZzE.zzj(list.get(i3))) {
                            return false;
                        }
                    }
                } else {
                    continue;
                }
            } else if (iZzA == 50 && !((zzla) zzms.zzf(obj, iZzB & 1048575)).isEmpty()) {
                throw null;
            }
            i6++;
            i4 = i;
            i5 = i2;
        }
        if (!this.zzh) {
            return true;
        }
        this.zzo.zza(obj);
        throw null;
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzm(Object obj, zzjh zzjhVar) throws IOException {
        if (!this.zzi) {
            zzR(obj, zzjhVar);
            return;
        }
        if (this.zzh) {
            this.zzo.zza(obj);
            throw null;
        }
        int length = this.zzc.length;
        for (int i = 0; i < length; i += 3) {
            int iZzB = zzB(i);
            int i2 = this.zzc[i];
            switch (zzA(iZzB)) {
                case 0:
                    if (zzM(obj, i)) {
                        zzjhVar.zzf(i2, zzms.zza(obj, iZzB & 1048575));
                    }
                    break;
                case 1:
                    if (zzM(obj, i)) {
                        zzjhVar.zzo(i2, zzms.zzb(obj, iZzB & 1048575));
                    }
                    break;
                case 2:
                    if (zzM(obj, i)) {
                        zzjhVar.zzt(i2, zzms.zzd(obj, iZzB & 1048575));
                    }
                    break;
                case 3:
                    if (zzM(obj, i)) {
                        zzjhVar.zzJ(i2, zzms.zzd(obj, iZzB & 1048575));
                    }
                    break;
                case 4:
                    if (zzM(obj, i)) {
                        zzjhVar.zzr(i2, zzms.zzc(obj, iZzB & 1048575));
                    }
                    break;
                case 5:
                    if (zzM(obj, i)) {
                        zzjhVar.zzm(i2, zzms.zzd(obj, iZzB & 1048575));
                    }
                    break;
                case 6:
                    if (zzM(obj, i)) {
                        zzjhVar.zzk(i2, zzms.zzc(obj, iZzB & 1048575));
                    }
                    break;
                case 7:
                    if (zzM(obj, i)) {
                        zzjhVar.zzb(i2, zzms.zzw(obj, iZzB & 1048575));
                    }
                    break;
                case 8:
                    if (zzM(obj, i)) {
                        zzT(i2, zzms.zzf(obj, iZzB & 1048575), zzjhVar);
                    }
                    break;
                case 9:
                    if (zzM(obj, i)) {
                        zzjhVar.zzv(i2, zzms.zzf(obj, iZzB & 1048575), zzE(i));
                    }
                    break;
                case 10:
                    if (zzM(obj, i)) {
                        zzjhVar.zzd(i2, (zziy) zzms.zzf(obj, iZzB & 1048575));
                    }
                    break;
                case 11:
                    if (zzM(obj, i)) {
                        zzjhVar.zzH(i2, zzms.zzc(obj, iZzB & 1048575));
                    }
                    break;
                case 12:
                    if (zzM(obj, i)) {
                        zzjhVar.zzi(i2, zzms.zzc(obj, iZzB & 1048575));
                    }
                    break;
                case 13:
                    if (zzM(obj, i)) {
                        zzjhVar.zzw(i2, zzms.zzc(obj, iZzB & 1048575));
                    }
                    break;
                case 14:
                    if (zzM(obj, i)) {
                        zzjhVar.zzy(i2, zzms.zzd(obj, iZzB & 1048575));
                    }
                    break;
                case 15:
                    if (zzM(obj, i)) {
                        zzjhVar.zzA(i2, zzms.zzc(obj, iZzB & 1048575));
                    }
                    break;
                case 16:
                    if (zzM(obj, i)) {
                        zzjhVar.zzC(i2, zzms.zzd(obj, iZzB & 1048575));
                    }
                    break;
                case 17:
                    if (zzM(obj, i)) {
                        zzjhVar.zzq(i2, zzms.zzf(obj, iZzB & 1048575), zzE(i));
                    }
                    break;
                case 18:
                    zzlt.zzL(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, false);
                    break;
                case 19:
                    zzlt.zzP(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, false);
                    break;
                case 20:
                    zzlt.zzS(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, false);
                    break;
                case 21:
                    zzlt.zzaa(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, false);
                    break;
                case 22:
                    zzlt.zzR(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, false);
                    break;
                case 23:
                    zzlt.zzO(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, false);
                    break;
                case 24:
                    zzlt.zzN(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, false);
                    break;
                case 25:
                    zzlt.zzJ(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, false);
                    break;
                case 26:
                    zzlt.zzY(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar);
                    break;
                case 27:
                    zzlt.zzT(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, zzE(i));
                    break;
                case 28:
                    zzlt.zzK(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar);
                    break;
                case 29:
                    zzlt.zzZ(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, false);
                    break;
                case 30:
                    zzlt.zzM(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, false);
                    break;
                case 31:
                    zzlt.zzU(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, false);
                    break;
                case 32:
                    zzlt.zzV(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, false);
                    break;
                case 33:
                    zzlt.zzW(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, false);
                    break;
                case 34:
                    zzlt.zzX(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, false);
                    break;
                case 35:
                    zzlt.zzL(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, true);
                    break;
                case 36:
                    zzlt.zzP(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, true);
                    break;
                case 37:
                    zzlt.zzS(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, true);
                    break;
                case 38:
                    zzlt.zzaa(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, true);
                    break;
                case 39:
                    zzlt.zzR(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, true);
                    break;
                case 40:
                    zzlt.zzO(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, true);
                    break;
                case 41:
                    zzlt.zzN(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, true);
                    break;
                case 42:
                    zzlt.zzJ(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, true);
                    break;
                case 43:
                    zzlt.zzZ(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, true);
                    break;
                case 44:
                    zzlt.zzM(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, true);
                    break;
                case 45:
                    zzlt.zzU(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, true);
                    break;
                case 46:
                    zzlt.zzV(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, true);
                    break;
                case 47:
                    zzlt.zzW(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, true);
                    break;
                case 48:
                    zzlt.zzX(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, true);
                    break;
                case 49:
                    zzlt.zzQ(i2, (List) zzms.zzf(obj, iZzB & 1048575), zzjhVar, zzE(i));
                    break;
                case 50:
                    zzS(zzjhVar, i2, zzms.zzf(obj, iZzB & 1048575), i);
                    break;
                case 51:
                    if (zzP(obj, i2, i)) {
                        zzjhVar.zzf(i2, zzn(obj, iZzB & 1048575));
                    }
                    break;
                case 52:
                    if (zzP(obj, i2, i)) {
                        zzjhVar.zzo(i2, zzo(obj, iZzB & 1048575));
                    }
                    break;
                case 53:
                    if (zzP(obj, i2, i)) {
                        zzjhVar.zzt(i2, zzC(obj, iZzB & 1048575));
                    }
                    break;
                case 54:
                    if (zzP(obj, i2, i)) {
                        zzjhVar.zzJ(i2, zzC(obj, iZzB & 1048575));
                    }
                    break;
                case 55:
                    if (zzP(obj, i2, i)) {
                        zzjhVar.zzr(i2, zzr(obj, iZzB & 1048575));
                    }
                    break;
                case 56:
                    if (zzP(obj, i2, i)) {
                        zzjhVar.zzm(i2, zzC(obj, iZzB & 1048575));
                    }
                    break;
                case 57:
                    if (zzP(obj, i2, i)) {
                        zzjhVar.zzk(i2, zzr(obj, iZzB & 1048575));
                    }
                    break;
                case 58:
                    if (zzP(obj, i2, i)) {
                        zzjhVar.zzb(i2, zzQ(obj, iZzB & 1048575));
                    }
                    break;
                case 59:
                    if (zzP(obj, i2, i)) {
                        zzT(i2, zzms.zzf(obj, iZzB & 1048575), zzjhVar);
                    }
                    break;
                case 60:
                    if (zzP(obj, i2, i)) {
                        zzjhVar.zzv(i2, zzms.zzf(obj, iZzB & 1048575), zzE(i));
                    }
                    break;
                case 61:
                    if (zzP(obj, i2, i)) {
                        zzjhVar.zzd(i2, (zziy) zzms.zzf(obj, iZzB & 1048575));
                    }
                    break;
                case 62:
                    if (zzP(obj, i2, i)) {
                        zzjhVar.zzH(i2, zzr(obj, iZzB & 1048575));
                    }
                    break;
                case 63:
                    if (zzP(obj, i2, i)) {
                        zzjhVar.zzi(i2, zzr(obj, iZzB & 1048575));
                    }
                    break;
                case 64:
                    if (zzP(obj, i2, i)) {
                        zzjhVar.zzw(i2, zzr(obj, iZzB & 1048575));
                    }
                    break;
                case 65:
                    if (zzP(obj, i2, i)) {
                        zzjhVar.zzy(i2, zzC(obj, iZzB & 1048575));
                    }
                    break;
                case 66:
                    if (zzP(obj, i2, i)) {
                        zzjhVar.zzA(i2, zzr(obj, iZzB & 1048575));
                    }
                    break;
                case 67:
                    if (zzP(obj, i2, i)) {
                        zzjhVar.zzC(i2, zzC(obj, iZzB & 1048575));
                    }
                    break;
                case 68:
                    if (zzP(obj, i2, i)) {
                        zzjhVar.zzq(i2, zzms.zzf(obj, iZzB & 1048575), zzE(i));
                    }
                    break;
            }
        }
        zzmi zzmiVar = this.zzn;
        zzmiVar.zzi(zzmiVar.zzc(obj), zzjhVar);
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzg(Object obj, Object obj2) {
        obj2.getClass();
        for (int i = 0; i < this.zzc.length; i += 3) {
            int iZzB = zzB(i);
            long j = 1048575 & iZzB;
            int i2 = this.zzc[i];
            switch (zzA(iZzB)) {
                case 0:
                    if (zzM(obj2, i)) {
                        zzms.zzo(obj, j, zzms.zza(obj2, j));
                        zzJ(obj, i);
                    }
                    break;
                case 1:
                    if (zzM(obj2, i)) {
                        zzms.zzp(obj, j, zzms.zzb(obj2, j));
                        zzJ(obj, i);
                    }
                    break;
                case 2:
                    if (zzM(obj2, i)) {
                        zzms.zzr(obj, j, zzms.zzd(obj2, j));
                        zzJ(obj, i);
                    }
                    break;
                case 3:
                    if (zzM(obj2, i)) {
                        zzms.zzr(obj, j, zzms.zzd(obj2, j));
                        zzJ(obj, i);
                    }
                    break;
                case 4:
                    if (zzM(obj2, i)) {
                        zzms.zzq(obj, j, zzms.zzc(obj2, j));
                        zzJ(obj, i);
                    }
                    break;
                case 5:
                    if (zzM(obj2, i)) {
                        zzms.zzr(obj, j, zzms.zzd(obj2, j));
                        zzJ(obj, i);
                    }
                    break;
                case 6:
                    if (zzM(obj2, i)) {
                        zzms.zzq(obj, j, zzms.zzc(obj2, j));
                        zzJ(obj, i);
                    }
                    break;
                case 7:
                    if (zzM(obj2, i)) {
                        zzms.zzm(obj, j, zzms.zzw(obj2, j));
                        zzJ(obj, i);
                    }
                    break;
                case 8:
                    if (zzM(obj2, i)) {
                        zzms.zzs(obj, j, zzms.zzf(obj2, j));
                        zzJ(obj, i);
                    }
                    break;
                case 9:
                    zzH(obj, obj2, i);
                    break;
                case 10:
                    if (zzM(obj2, i)) {
                        zzms.zzs(obj, j, zzms.zzf(obj2, j));
                        zzJ(obj, i);
                    }
                    break;
                case 11:
                    if (zzM(obj2, i)) {
                        zzms.zzq(obj, j, zzms.zzc(obj2, j));
                        zzJ(obj, i);
                    }
                    break;
                case 12:
                    if (zzM(obj2, i)) {
                        zzms.zzq(obj, j, zzms.zzc(obj2, j));
                        zzJ(obj, i);
                    }
                    break;
                case 13:
                    if (zzM(obj2, i)) {
                        zzms.zzq(obj, j, zzms.zzc(obj2, j));
                        zzJ(obj, i);
                    }
                    break;
                case 14:
                    if (zzM(obj2, i)) {
                        zzms.zzr(obj, j, zzms.zzd(obj2, j));
                        zzJ(obj, i);
                    }
                    break;
                case 15:
                    if (zzM(obj2, i)) {
                        zzms.zzq(obj, j, zzms.zzc(obj2, j));
                        zzJ(obj, i);
                    }
                    break;
                case 16:
                    if (zzM(obj2, i)) {
                        zzms.zzr(obj, j, zzms.zzd(obj2, j));
                        zzJ(obj, i);
                    }
                    break;
                case 17:
                    zzH(obj, obj2, i);
                    break;
                case 18:
                case 19:
                case 20:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 26:
                case 27:
                case 28:
                case 29:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 35:
                case 36:
                case 37:
                case 38:
                case 39:
                case 40:
                case 41:
                case 42:
                case 43:
                case 44:
                case 45:
                case 46:
                case 47:
                case 48:
                case 49:
                    this.zzm.zzb(obj, obj2, j);
                    break;
                case 50:
                    zzlt.zzI(this.zzq, obj, obj2, j);
                    break;
                case 51:
                case 52:
                case 53:
                case 54:
                case 55:
                case 56:
                case 57:
                case 58:
                case 59:
                    if (zzP(obj2, i2, i)) {
                        zzms.zzs(obj, j, zzms.zzf(obj2, j));
                        zzK(obj, i2, i);
                    }
                    break;
                case 60:
                    zzI(obj, obj2, i);
                    break;
                case 61:
                case 62:
                case 63:
                case 64:
                case 65:
                case 66:
                case 67:
                    if (zzP(obj2, i2, i)) {
                        zzms.zzs(obj, j, zzms.zzf(obj2, j));
                        zzK(obj, i2, i);
                    }
                    break;
                case 68:
                    zzI(obj, obj2, i);
                    break;
            }
        }
        zzlt.zzF(this.zzn, obj, obj2);
        if (this.zzh) {
            zzlt.zzE(this.zzo, obj, obj2);
        }
    }
}
