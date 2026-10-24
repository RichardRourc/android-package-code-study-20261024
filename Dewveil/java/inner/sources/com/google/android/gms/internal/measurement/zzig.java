package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.zzig;
import com.google.android.gms.internal.measurement.zzih;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public abstract class zzig<MessageType extends zzih<MessageType, BuilderType>, BuilderType extends zzig<MessageType, BuilderType>> implements zzlf {
    @Override // 
    public abstract zzig zzao();

    protected abstract zzig zzap(zzih zzihVar);

    public zzig zzaq(byte[] bArr, int i, int i2) throws zzkj {
        throw null;
    }

    public zzig zzar(byte[] bArr, int i, int i2, zzjl zzjlVar) throws zzkj {
        throw null;
    }

    @Override // com.google.android.gms.internal.measurement.zzlf
    public final /* bridge */ /* synthetic */ zzlf zzas(zzlg zzlgVar) {
        if (zzbJ().getClass().isInstance(zzlgVar)) {
            return zzap((zzih) zzlgVar);
        }
        throw new IllegalArgumentException("mergeFrom(MessageLite) can only merge messages of the same type.");
    }

    @Override // com.google.android.gms.internal.measurement.zzlf
    public final /* synthetic */ zzlf zzat(byte[] bArr) throws zzkj {
        return zzaq(bArr, 0, bArr.length);
    }

    @Override // com.google.android.gms.internal.measurement.zzlf
    public final /* synthetic */ zzlf zzau(byte[] bArr, zzjl zzjlVar) throws zzkj {
        return zzar(bArr, 0, bArr.length, zzjlVar);
    }
}
