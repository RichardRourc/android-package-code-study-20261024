package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.zzjv;
import com.google.android.gms.internal.measurement.zzjz;
import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public abstract class zzjz<MessageType extends zzjz<MessageType, BuilderType>, BuilderType extends zzjv<MessageType, BuilderType>> extends zzih<MessageType, BuilderType> {
    private static final Map zza = new ConcurrentHashMap();
    protected zzmj zzc = zzmj.zzc();
    protected int zzd = -1;

    static Object zzbC(Method method, Object obj, Object... objArr) {
        try {
            return method.invoke(obj, objArr);
        } catch (IllegalAccessException e) {
            throw new RuntimeException("Couldn't use Java reflection to implement protocol message reflection.", e);
        } catch (InvocationTargetException e2) {
            Throwable cause = e2.getCause();
            if (cause instanceof RuntimeException) {
                throw ((RuntimeException) cause);
            }
            if (cause instanceof Error) {
                throw ((Error) cause);
            }
            throw new RuntimeException("Unexpected exception thrown by generated accessor method.", cause);
        }
    }

    protected static Object zzbD(zzlg zzlgVar, String str, Object[] objArr) {
        return new zzlq(zzlgVar, str, objArr);
    }

    protected static void zzbE(Class cls, zzjz zzjzVar) {
        zza.put(cls, zzjzVar);
    }

    static zzjz zzbu(Class cls) {
        Map map = zza;
        zzjz zzjzVar = (zzjz) map.get(cls);
        if (zzjzVar == null) {
            try {
                Class.forName(cls.getName(), true, cls.getClassLoader());
                zzjzVar = (zzjz) map.get(cls);
            } catch (ClassNotFoundException e) {
                throw new IllegalStateException("Class initialization cannot fail.", e);
            }
        }
        if (zzjzVar == null) {
            zzjzVar = (zzjz) ((zzjz) zzms.zze(cls)).zzl(6, null, null);
            if (zzjzVar == null) {
                throw new IllegalStateException();
            }
            map.put(cls, zzjzVar);
        }
        return zzjzVar;
    }

    protected static zzke zzbv() {
        return zzka.zzf();
    }

    protected static zzkf zzbw() {
        return zzkv.zzf();
    }

    protected static zzkf zzbx(zzkf zzkfVar) {
        int size = zzkfVar.size();
        return zzkfVar.zzd(size == 0 ? 10 : size + size);
    }

    protected static zzkg zzby() {
        return zzlp.zze();
    }

    protected static zzkg zzbz(zzkg zzkgVar) {
        int size = zzkgVar.size();
        return zzkgVar.zzd(size == 0 ? 10 : size + size);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            return zzlo.zza().zzb(getClass()).zzi(this, (zzjz) obj);
        }
        return false;
    }

    public final int hashCode() {
        int i = this.zzb;
        if (i != 0) {
            return i;
        }
        int iZzb = zzlo.zza().zzb(getClass()).zzb(this);
        this.zzb = iZzb;
        return iZzb;
    }

    public final String toString() {
        return zzli.zza(this, super.toString());
    }

    @Override // com.google.android.gms.internal.measurement.zzlg
    public final /* synthetic */ zzlf zzbA() {
        return (zzjv) zzl(5, null, null);
    }

    @Override // com.google.android.gms.internal.measurement.zzlg
    public final /* synthetic */ zzlf zzbB() {
        zzjv zzjvVar = (zzjv) zzl(5, null, null);
        zzjvVar.zzaw(this);
        return zzjvVar;
    }

    @Override // com.google.android.gms.internal.measurement.zzlg
    public final void zzbF(zzjg zzjgVar) throws IOException {
        zzlo.zza().zzb(getClass()).zzm(this, zzjh.zza(zzjgVar));
    }

    @Override // com.google.android.gms.internal.measurement.zzlh
    public final /* synthetic */ zzlg zzbJ() {
        return (zzjz) zzl(6, null, null);
    }

    @Override // com.google.android.gms.internal.measurement.zzih
    final int zzbm() {
        return this.zzd;
    }

    @Override // com.google.android.gms.internal.measurement.zzih
    final void zzbp(int i) {
        this.zzd = i;
    }

    @Override // com.google.android.gms.internal.measurement.zzlg
    public final int zzbr() {
        int i = this.zzd;
        if (i != -1) {
            return i;
        }
        int iZza = zzlo.zza().zzb(getClass()).zza(this);
        this.zzd = iZza;
        return iZza;
    }

    protected final zzjv zzbs() {
        return (zzjv) zzl(5, null, null);
    }

    public final zzjv zzbt() {
        zzjv zzjvVar = (zzjv) zzl(5, null, null);
        zzjvVar.zzaw(this);
        return zzjvVar;
    }

    protected abstract Object zzl(int i, Object obj, Object obj2);
}
