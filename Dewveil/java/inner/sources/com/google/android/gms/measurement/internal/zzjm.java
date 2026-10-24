package com.google.android.gms.measurement.internal;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.pm.ResolveInfo;
import android.os.Bundle;
import android.os.RemoteException;
import android.util.Pair;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import com.google.android.gms.common.stats.ConnectionTracker;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzjm extends zzf {
    private final zzjl zza;
    private zzdz zzb;
    private volatile Boolean zzc;
    private final zzan zzd;
    private final zzkd zze;
    private final List zzf;
    private final zzan zzg;

    protected zzjm(zzft zzftVar) {
        super(zzftVar);
        this.zzf = new ArrayList();
        this.zze = new zzkd(zzftVar.zzav());
        this.zza = new zzjl(this);
        this.zzd = new zziw(this, zzftVar);
        this.zzg = new zziy(this, zzftVar);
    }

    private final zzp zzO(boolean z) {
        Pair pairZza;
        this.zzs.zzaw();
        zzea zzeaVarZzh = this.zzs.zzh();
        String string = null;
        if (z) {
            zzej zzejVarZzay = this.zzs.zzay();
            if (zzejVarZzay.zzs.zzm().zzb != null && (pairZza = zzejVarZzay.zzs.zzm().zzb.zza()) != null && pairZza != zzey.zza) {
                String strValueOf = String.valueOf(pairZza.second);
                String str = (String) pairZza.first;
                StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 1 + String.valueOf(str).length());
                sb.append(strValueOf);
                sb.append(":");
                sb.append(str);
                string = sb.toString();
            }
        }
        return zzeaVarZzh.zzj(string);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void zzP() {
        zzg();
        this.zzs.zzay().zzj().zzb("Processing queued up service tasks", Integer.valueOf(this.zzf.size()));
        Iterator it = this.zzf.iterator();
        while (it.hasNext()) {
            try {
                ((Runnable) it.next()).run();
            } catch (RuntimeException e) {
                this.zzs.zzay().zzd().zzb("Task exception while flushing queue", e);
            }
        }
        this.zzf.clear();
        this.zzg.zzb();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void zzQ() {
        zzg();
        this.zze.zzb();
        zzan zzanVar = this.zzd;
        this.zzs.zzf();
        zzanVar.zzd(((Long) zzdw.zzI.zza(null)).longValue());
    }

    private final void zzR(Runnable runnable) throws IllegalStateException {
        zzg();
        if (zzL()) {
            runnable.run();
            return;
        }
        int size = this.zzf.size();
        this.zzs.zzf();
        if (size >= 1000) {
            this.zzs.zzay().zzd().zza("Discarding data. Max runnable queue size reached");
            return;
        }
        this.zzf.add(runnable);
        this.zzg.zzd(60000L);
        zzr();
    }

    private final boolean zzS() {
        this.zzs.zzaw();
        return true;
    }

    static /* bridge */ /* synthetic */ void zzo(zzjm zzjmVar, ComponentName componentName) {
        zzjmVar.zzg();
        if (zzjmVar.zzb != null) {
            zzjmVar.zzb = null;
            zzjmVar.zzs.zzay().zzj().zzb("Disconnected from device MeasurementService", componentName);
            zzjmVar.zzg();
            zzjmVar.zzr();
        }
    }

    protected final void zzA(zzau zzauVar, String str) {
        Preconditions.checkNotNull(zzauVar);
        zzg();
        zza();
        zzS();
        zzR(new zzjb(this, true, zzO(true), this.zzs.zzi().zzo(zzauVar), zzauVar, str));
    }

    public final void zzB(com.google.android.gms.internal.measurement.zzcf zzcfVar, zzau zzauVar, String str) {
        zzg();
        zza();
        if (this.zzs.zzv().zzo(12451000) == 0) {
            zzR(new zzix(this, zzauVar, str, zzcfVar));
        } else {
            this.zzs.zzay().zzk().zza("Not bundling data. Service unavailable or out of date");
            this.zzs.zzv().zzR(zzcfVar, new byte[0]);
        }
    }

    protected final void zzC() {
        zzg();
        zza();
        zzp zzpVarZzO = zzO(false);
        zzS();
        this.zzs.zzi().zzj();
        zzR(new zziq(this, zzpVarZzO));
    }

    final void zzD(zzdz zzdzVar, AbstractSafeParcelable abstractSafeParcelable, zzp zzpVar) {
        int size;
        zzg();
        zza();
        zzS();
        this.zzs.zzf();
        int i = 100;
        int i2 = 0;
        while (i2 < 1001 && i == 100) {
            ArrayList arrayList = new ArrayList();
            List listZzi = this.zzs.zzi().zzi(100);
            if (listZzi != null) {
                arrayList.addAll(listZzi);
                size = listZzi.size();
            } else {
                size = 0;
            }
            if (abstractSafeParcelable != null && size < 100) {
                arrayList.add(abstractSafeParcelable);
            }
            int size2 = arrayList.size();
            for (int i3 = 0; i3 < size2; i3++) {
                AbstractSafeParcelable abstractSafeParcelable2 = (AbstractSafeParcelable) arrayList.get(i3);
                if (abstractSafeParcelable2 instanceof zzau) {
                    try {
                        zzdzVar.zzk((zzau) abstractSafeParcelable2, zzpVar);
                    } catch (RemoteException e) {
                        this.zzs.zzay().zzd().zzb("Failed to send event to the service", e);
                    }
                } else if (abstractSafeParcelable2 instanceof zzku) {
                    try {
                        zzdzVar.zzt((zzku) abstractSafeParcelable2, zzpVar);
                    } catch (RemoteException e2) {
                        this.zzs.zzay().zzd().zzb("Failed to send user property to the service", e2);
                    }
                } else if (abstractSafeParcelable2 instanceof zzab) {
                    try {
                        zzdzVar.zzn((zzab) abstractSafeParcelable2, zzpVar);
                    } catch (RemoteException e3) {
                        this.zzs.zzay().zzd().zzb("Failed to send conditional user property to the service", e3);
                    }
                } else {
                    this.zzs.zzay().zzd().zza("Discarding data. Unrecognized parcel type.");
                }
            }
            i2++;
            i = size;
        }
    }

    protected final void zzE(zzab zzabVar) {
        Preconditions.checkNotNull(zzabVar);
        zzg();
        zza();
        this.zzs.zzaw();
        zzR(new zzjc(this, true, zzO(true), this.zzs.zzi().zzn(zzabVar), new zzab(zzabVar), zzabVar));
    }

    protected final void zzF(boolean z) {
        zzg();
        zza();
        if (z) {
            zzS();
            this.zzs.zzi().zzj();
        }
        if (zzM()) {
            zzR(new zzja(this, zzO(false)));
        }
    }

    protected final void zzG(zzif zzifVar) {
        zzg();
        zza();
        zzR(new zziu(this, zzifVar));
    }

    public final void zzH(Bundle bundle) {
        zzg();
        zza();
        zzR(new zziv(this, zzO(false), bundle));
    }

    protected final void zzI() {
        zzg();
        zza();
        zzR(new zziz(this, zzO(true)));
    }

    protected final void zzJ(zzdz zzdzVar) {
        zzg();
        Preconditions.checkNotNull(zzdzVar);
        this.zzb = zzdzVar;
        zzQ();
        zzP();
    }

    protected final void zzK(zzku zzkuVar) {
        zzg();
        zza();
        zzS();
        zzR(new zzio(this, zzO(true), this.zzs.zzi().zzp(zzkuVar), zzkuVar));
    }

    public final boolean zzL() {
        zzg();
        zza();
        return this.zzb != null;
    }

    final boolean zzM() {
        zzg();
        zza();
        return !zzN() || this.zzs.zzv().zzm() >= ((Integer) zzdw.zzai.zza(null)).intValue();
    }

    final boolean zzN() {
        zzg();
        zza();
        if (this.zzc == null) {
            zzg();
            zza();
            zzey zzeyVarZzm = this.zzs.zzm();
            zzeyVarZzm.zzg();
            boolean z = false;
            Boolean boolValueOf = !zzeyVarZzm.zza().contains("use_service") ? null : Boolean.valueOf(zzeyVarZzm.zza().getBoolean("use_service", false));
            boolean z2 = true;
            if (boolValueOf == null || !boolValueOf.booleanValue()) {
                this.zzs.zzaw();
                if (this.zzs.zzh().zzh() == 1) {
                    z = true;
                } else {
                    this.zzs.zzay().zzj().zza("Checking service availability");
                    int iZzo = this.zzs.zzv().zzo(12451000);
                    if (iZzo == 0) {
                        this.zzs.zzay().zzj().zza("Service available");
                    } else if (iZzo == 1) {
                        this.zzs.zzay().zzj().zza("Service missing");
                    } else if (iZzo != 2) {
                        if (iZzo == 3) {
                            this.zzs.zzay().zzk().zza("Service disabled");
                        } else if (iZzo == 9) {
                            this.zzs.zzay().zzk().zza("Service invalid");
                        } else if (iZzo != 18) {
                            this.zzs.zzay().zzk().zzb("Unexpected service status", Integer.valueOf(iZzo));
                        } else {
                            this.zzs.zzay().zzk().zza("Service updating");
                        }
                        z2 = false;
                    } else {
                        this.zzs.zzay().zzc().zza("Service container out of date");
                        if (this.zzs.zzv().zzm() >= 17443) {
                            z = boolValueOf == null;
                            z2 = false;
                        }
                    }
                    z = true;
                }
                if (!z && this.zzs.zzf().zzx()) {
                    this.zzs.zzay().zzd().zza("No way to upload. Consider using the full version of Analytics");
                } else if (z2) {
                    zzey zzeyVarZzm2 = this.zzs.zzm();
                    zzeyVarZzm2.zzg();
                    SharedPreferences.Editor editorEdit = zzeyVarZzm2.zza().edit();
                    editorEdit.putBoolean("use_service", z);
                    editorEdit.apply();
                }
                z2 = z;
            }
            this.zzc = Boolean.valueOf(z2);
        }
        return this.zzc.booleanValue();
    }

    @Override // com.google.android.gms.measurement.internal.zzf
    protected final boolean zzf() {
        return false;
    }

    final Boolean zzj() {
        return this.zzc;
    }

    protected final void zzq() {
        zzg();
        zza();
        zzp zzpVarZzO = zzO(true);
        this.zzs.zzi().zzk();
        zzR(new zzit(this, zzpVarZzO));
    }

    final void zzr() {
        zzg();
        zza();
        if (zzL()) {
            return;
        }
        if (zzN()) {
            this.zza.zzc();
            return;
        }
        if (this.zzs.zzf().zzx()) {
            return;
        }
        this.zzs.zzaw();
        List<ResolveInfo> listQueryIntentServices = this.zzs.zzau().getPackageManager().queryIntentServices(new Intent().setClassName(this.zzs.zzau(), "com.google.android.gms.measurement.AppMeasurementService"), 65536);
        if (listQueryIntentServices == null || listQueryIntentServices.size() <= 0) {
            this.zzs.zzay().zzd().zza("Unable to use remote or local measurement implementation. Please register the AppMeasurementService service in the app manifest");
            return;
        }
        Intent intent = new Intent("com.google.android.gms.measurement.START");
        Context contextZzau = this.zzs.zzau();
        this.zzs.zzaw();
        intent.setComponent(new ComponentName(contextZzau, "com.google.android.gms.measurement.AppMeasurementService"));
        this.zza.zzb(intent);
    }

    public final void zzs() {
        zzg();
        zza();
        this.zza.zzd();
        try {
            ConnectionTracker.getInstance().unbindService(this.zzs.zzau(), this.zza);
        } catch (IllegalArgumentException | IllegalStateException unused) {
        }
        this.zzb = null;
    }

    public final void zzt(com.google.android.gms.internal.measurement.zzcf zzcfVar) {
        zzg();
        zza();
        zzR(new zzis(this, zzO(false), zzcfVar));
    }

    public final void zzu(AtomicReference atomicReference) {
        zzg();
        zza();
        zzR(new zzir(this, atomicReference, zzO(false)));
    }

    protected final void zzv(com.google.android.gms.internal.measurement.zzcf zzcfVar, String str, String str2) {
        zzg();
        zza();
        zzR(new zzje(this, str, str2, zzO(false), zzcfVar));
    }

    protected final void zzw(AtomicReference atomicReference, String str, String str2, String str3) {
        zzg();
        zza();
        zzR(new zzjd(this, atomicReference, null, str2, str3, zzO(false)));
    }

    protected final void zzx(AtomicReference atomicReference, boolean z) {
        zzg();
        zza();
        zzR(new zzip(this, atomicReference, zzO(false), z));
    }

    protected final void zzy(com.google.android.gms.internal.measurement.zzcf zzcfVar, String str, String str2, boolean z) {
        zzg();
        zza();
        zzR(new zzin(this, str, str2, zzO(false), z, zzcfVar));
    }

    protected final void zzz(AtomicReference atomicReference, String str, String str2, String str3, boolean z) {
        zzg();
        zza();
        zzR(new zzjf(this, atomicReference, null, str2, str3, zzO(false), z));
    }
}
