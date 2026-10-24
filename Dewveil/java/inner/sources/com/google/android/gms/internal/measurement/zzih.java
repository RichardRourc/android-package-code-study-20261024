package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.zzig;
import com.google.android.gms.internal.measurement.zzih;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public abstract class zzih<MessageType extends zzih<MessageType, BuilderType>, BuilderType extends zzig<MessageType, BuilderType>> implements zzlg {
    protected int zzb = 0;

    /* JADX WARN: Multi-variable type inference failed */
    protected static void zzbo(Iterable iterable, List list) {
        zzkh.zze(iterable);
        if (iterable instanceof zzko) {
            List listZzh = ((zzko) iterable).zzh();
            zzko zzkoVar = (zzko) list;
            int size = list.size();
            for (Object obj : listZzh) {
                if (obj == null) {
                    int size2 = zzkoVar.size();
                    StringBuilder sb = new StringBuilder(37);
                    sb.append("Element at index ");
                    sb.append(size2 - size);
                    sb.append(" is null.");
                    String string = sb.toString();
                    int size3 = zzkoVar.size();
                    while (true) {
                        size3--;
                        if (size3 < size) {
                            throw new NullPointerException(string);
                        }
                        zzkoVar.remove(size3);
                    }
                } else if (obj instanceof zziy) {
                    zzkoVar.zzi((zziy) obj);
                } else {
                    zzkoVar.add((String) obj);
                }
            }
            return;
        }
        if (iterable instanceof zzln) {
            list.addAll(iterable);
            return;
        }
        if ((list instanceof ArrayList) && (iterable instanceof Collection)) {
            ((ArrayList) list).ensureCapacity(list.size() + iterable.size());
        }
        int size4 = list.size();
        for (Object obj2 : iterable) {
            if (obj2 == null) {
                int size5 = list.size();
                StringBuilder sb2 = new StringBuilder(37);
                sb2.append("Element at index ");
                sb2.append(size5 - size4);
                sb2.append(" is null.");
                String string2 = sb2.toString();
                int size6 = list.size();
                while (true) {
                    size6--;
                    if (size6 < size4) {
                        throw new NullPointerException(string2);
                    }
                    list.remove(size6);
                }
            } else {
                list.add(obj2);
            }
        }
    }

    int zzbm() {
        throw null;
    }

    @Override // com.google.android.gms.internal.measurement.zzlg
    public final zziy zzbn() {
        try {
            int iZzbr = zzbr();
            zziy zziyVar = zziy.zzb;
            byte[] bArr = new byte[iZzbr];
            zzjg zzjgVarZzC = zzjg.zzC(bArr);
            zzbF(zzjgVarZzC);
            zzjgVarZzC.zzD();
            return new zziv(bArr);
        } catch (IOException e) {
            String name = getClass().getName();
            StringBuilder sb = new StringBuilder(String.valueOf(name).length() + 72);
            sb.append("Serializing ");
            sb.append(name);
            sb.append(" to a ByteString threw an IOException (should never happen).");
            throw new RuntimeException(sb.toString(), e);
        }
    }

    void zzbp(int i) {
        throw null;
    }

    public final byte[] zzbq() {
        try {
            byte[] bArr = new byte[zzbr()];
            zzjg zzjgVarZzC = zzjg.zzC(bArr);
            zzbF(zzjgVarZzC);
            zzjgVarZzC.zzD();
            return bArr;
        } catch (IOException e) {
            String name = getClass().getName();
            StringBuilder sb = new StringBuilder(String.valueOf(name).length() + 72);
            sb.append("Serializing ");
            sb.append(name);
            sb.append(" to a byte array threw an IOException (should never happen).");
            throw new RuntimeException(sb.toString(), e);
        }
    }
}
