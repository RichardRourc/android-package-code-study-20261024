package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.zzjv;
import com.google.android.gms.internal.measurement.zzjz;
import java.io.IOException;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public class zzjv<MessageType extends zzjz<MessageType, BuilderType>, BuilderType extends zzjv<MessageType, BuilderType>> extends zzig<MessageType, BuilderType> {
    protected zzjz zza;
    protected boolean zzb = false;
    private final zzjz zzc;

    protected zzjv(MessageType messagetype) {
        this.zzc = messagetype;
        this.zza = (zzjz) messagetype.zzl(4, null, null);
    }

    private static final void zza(zzjz zzjzVar, zzjz zzjzVar2) {
        zzlo.zza().zzb(zzjzVar.getClass()).zzg(zzjzVar, zzjzVar2);
    }

    protected void zzaC() {
        zzjz zzjzVar = (zzjz) this.zza.zzl(4, null, null);
        zza(zzjzVar, this.zza);
        this.zza = zzjzVar;
    }

    @Override // com.google.android.gms.internal.measurement.zzig
    protected final /* synthetic */ zzig zzap(zzih zzihVar) {
        zzaw((zzjz) zzihVar);
        return this;
    }

    @Override // com.google.android.gms.internal.measurement.zzig
    public final /* bridge */ /* synthetic */ zzig zzaq(byte[] bArr, int i, int i2) throws zzkj {
        zzax(bArr, 0, i2, zzjl.zza());
        return this;
    }

    @Override // com.google.android.gms.internal.measurement.zzig
    public final /* bridge */ /* synthetic */ zzig zzar(byte[] bArr, int i, int i2, zzjl zzjlVar) throws zzkj {
        zzax(bArr, 0, i2, zzjlVar);
        return this;
    }

    @Override // com.google.android.gms.internal.measurement.zzig
    /* JADX INFO: renamed from: zzav, reason: merged with bridge method [inline-methods] and merged with bridge method [inline-methods] */
    public final zzjv zzao() {
        zzjv zzjvVar = (zzjv) this.zzc.zzl(5, null, null);
        zzjvVar.zzaw(zzaA());
        return zzjvVar;
    }

    public final zzjv zzaw(zzjz zzjzVar) {
        if (this.zzb) {
            zzaC();
            this.zzb = false;
        }
        zza(this.zza, zzjzVar);
        return this;
    }

    public final zzjv zzax(byte[] bArr, int i, int i2, zzjl zzjlVar) throws zzkj {
        if (this.zzb) {
            zzaC();
            this.zzb = false;
        }
        try {
            zzlo.zza().zzb(this.zza.getClass()).zzh(this.zza, bArr, 0, i2, new zzik(zzjlVar));
            return this;
        } catch (zzkj e) {
            throw e;
        } catch (IOException e2) {
            throw new RuntimeException("Reading from byte array should not throw IOException.", e2);
        } catch (IndexOutOfBoundsException unused) {
            throw zzkj.zzf();
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x0036, code lost:
    
        if (r3 != false) goto L13;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final MessageType zzay() {
        /*
            r5 = this;
            com.google.android.gms.internal.measurement.zzjz r5 = r5.zzaA()
            java.lang.Boolean r0 = java.lang.Boolean.TRUE
            boolean r0 = r0.booleanValue()
            r1 = 1
            r2 = 0
            java.lang.Object r3 = r5.zzl(r1, r2, r2)
            java.lang.Byte r3 = (java.lang.Byte) r3
            byte r3 = r3.byteValue()
            if (r3 != r1) goto L19
            goto L38
        L19:
            if (r3 == 0) goto L39
            com.google.android.gms.internal.measurement.zzlo r3 = com.google.android.gms.internal.measurement.zzlo.zza()
            java.lang.Class r4 = r5.getClass()
            com.google.android.gms.internal.measurement.zzlr r3 = r3.zzb(r4)
            boolean r3 = r3.zzj(r5)
            if (r0 == 0) goto L36
            if (r1 == r3) goto L31
            r0 = r2
            goto L32
        L31:
            r0 = r5
        L32:
            r1 = 2
            r5.zzl(r1, r0, r2)
        L36:
            if (r3 == 0) goto L39
        L38:
            return r5
        L39:
            com.google.android.gms.internal.measurement.zzmh r0 = new com.google.android.gms.internal.measurement.zzmh
            r0.<init>(r5)
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.internal.measurement.zzjv.zzay():com.google.android.gms.internal.measurement.zzjz");
    }

    @Override // com.google.android.gms.internal.measurement.zzlf
    /* JADX INFO: renamed from: zzaz, reason: merged with bridge method [inline-methods] */
    public MessageType zzaA() {
        if (this.zzb) {
            return (MessageType) this.zza;
        }
        zzjz zzjzVar = this.zza;
        zzlo.zza().zzb(zzjzVar.getClass()).zzf(zzjzVar);
        this.zzb = true;
        return (MessageType) this.zza;
    }

    @Override // com.google.android.gms.internal.measurement.zzlh
    public final /* synthetic */ zzlg zzbJ() {
        return this.zzc;
    }
}
