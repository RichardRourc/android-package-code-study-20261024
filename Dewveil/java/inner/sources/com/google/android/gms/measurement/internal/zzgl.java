package com.google.android.gms.measurement.internal;

import android.content.ContentValues;
import android.database.sqlite.SQLiteException;
import android.os.Binder;
import android.os.Bundle;
import android.text.TextUtils;
import com.google.android.gms.common.GooglePlayServicesUtilLight;
import com.google.android.gms.common.GoogleSignatureVerifier;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.common.util.UidVerifier;
import com.google.firebase.messaging.Constants;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutionException;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzgl extends zzdy {
    private final zzkr zza;
    private Boolean zzb;
    private String zzc;

    public zzgl(zzkr zzkrVar, String str) {
        Preconditions.checkNotNull(zzkrVar);
        this.zza = zzkrVar;
        this.zzc = null;
    }

    private final void zzA(zzau zzauVar, zzp zzpVar) {
        this.zza.zzA();
        this.zza.zzD(zzauVar, zzpVar);
    }

    private final void zzy(zzp zzpVar, boolean z) {
        Preconditions.checkNotNull(zzpVar);
        Preconditions.checkNotEmpty(zzpVar.zza);
        zzz(zzpVar.zza, false);
        this.zza.zzv().zzW(zzpVar.zzb, zzpVar.zzq);
    }

    private final void zzz(String str, boolean z) {
        if (TextUtils.isEmpty(str)) {
            this.zza.zzay().zzd().zza("Measurement Service called without app package");
            throw new SecurityException("Measurement Service called without app package");
        }
        if (z) {
            try {
                if (this.zzb == null) {
                    boolean z2 = true;
                    if (!"com.google.android.gms".equals(this.zzc) && !UidVerifier.isGooglePlayServicesUid(this.zza.zzau(), Binder.getCallingUid()) && !GoogleSignatureVerifier.getInstance(this.zza.zzau()).isUidGoogleSigned(Binder.getCallingUid())) {
                        z2 = false;
                    }
                    this.zzb = Boolean.valueOf(z2);
                }
                if (this.zzb.booleanValue()) {
                    return;
                }
            } catch (SecurityException e) {
                this.zza.zzay().zzd().zzb("Measurement Service called with invalid calling package. appId", zzej.zzn(str));
                throw e;
            }
        }
        if (this.zzc == null && GooglePlayServicesUtilLight.uidHasPackageName(this.zza.zzau(), Binder.getCallingUid(), str)) {
            this.zzc = str;
        }
        if (str.equals(this.zzc)) {
        } else {
            throw new SecurityException(String.format("Unknown calling package name '%s'.", str));
        }
    }

    final zzau zzb(zzau zzauVar, zzp zzpVar) {
        zzas zzasVar;
        if (Constants.ScionAnalytics.EVENT_FIREBASE_CAMPAIGN.equals(zzauVar.zza) && (zzasVar = zzauVar.zzb) != null && zzasVar.zza() != 0) {
            String strZzg = zzauVar.zzb.zzg("_cis");
            if ("referrer broadcast".equals(strZzg) || "referrer API".equals(strZzg)) {
                this.zza.zzay().zzi().zzb("Event has been filtered ", zzauVar.toString());
                return new zzau("_cmpx", zzauVar.zzb, zzauVar.zzc, zzauVar.zzd);
            }
        }
        return zzauVar;
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final String zzd(zzp zzpVar) {
        zzy(zzpVar, false);
        return this.zza.zzx(zzpVar);
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final List zze(zzp zzpVar, boolean z) {
        zzy(zzpVar, false);
        String str = zzpVar.zza;
        Preconditions.checkNotNull(str);
        try {
            List<zzkw> list = (List) this.zza.zzaz().zzh(new zzgi(this, str)).get();
            ArrayList arrayList = new ArrayList(list.size());
            for (zzkw zzkwVar : list) {
                if (z || !zzky.zzag(zzkwVar.zzc)) {
                    arrayList.add(new zzku(zzkwVar));
                }
            }
            return arrayList;
        } catch (InterruptedException | ExecutionException e) {
            this.zza.zzay().zzd().zzc("Failed to get user properties. appId", zzej.zzn(zzpVar.zza), e);
            return null;
        }
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final List zzf(String str, String str2, zzp zzpVar) {
        zzy(zzpVar, false);
        String str3 = zzpVar.zza;
        Preconditions.checkNotNull(str3);
        try {
            return (List) this.zza.zzaz().zzh(new zzfz(this, str3, str, str2)).get();
        } catch (InterruptedException | ExecutionException e) {
            this.zza.zzay().zzd().zzb("Failed to get conditional user properties", e);
            return Collections.emptyList();
        }
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final List zzg(String str, String str2, String str3) {
        zzz(str, true);
        try {
            return (List) this.zza.zzaz().zzh(new zzga(this, str, str2, str3)).get();
        } catch (InterruptedException | ExecutionException e) {
            this.zza.zzay().zzd().zzb("Failed to get conditional user properties as", e);
            return Collections.emptyList();
        }
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final List zzh(String str, String str2, boolean z, zzp zzpVar) {
        zzy(zzpVar, false);
        String str3 = zzpVar.zza;
        Preconditions.checkNotNull(str3);
        try {
            List<zzkw> list = (List) this.zza.zzaz().zzh(new zzfx(this, str3, str, str2)).get();
            ArrayList arrayList = new ArrayList(list.size());
            for (zzkw zzkwVar : list) {
                if (z || !zzky.zzag(zzkwVar.zzc)) {
                    arrayList.add(new zzku(zzkwVar));
                }
            }
            return arrayList;
        } catch (InterruptedException | ExecutionException e) {
            this.zza.zzay().zzd().zzc("Failed to query user properties. appId", zzej.zzn(zzpVar.zza), e);
            return Collections.emptyList();
        }
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final List zzi(String str, String str2, String str3, boolean z) {
        zzz(str, true);
        try {
            List<zzkw> list = (List) this.zza.zzaz().zzh(new zzfy(this, str, str2, str3)).get();
            ArrayList arrayList = new ArrayList(list.size());
            for (zzkw zzkwVar : list) {
                if (z || !zzky.zzag(zzkwVar.zzc)) {
                    arrayList.add(new zzku(zzkwVar));
                }
            }
            return arrayList;
        } catch (InterruptedException | ExecutionException e) {
            this.zza.zzay().zzd().zzc("Failed to get user properties as. appId", zzej.zzn(str), e);
            return Collections.emptyList();
        }
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final void zzj(zzp zzpVar) {
        zzy(zzpVar, false);
        zzx(new zzgj(this, zzpVar));
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final void zzk(zzau zzauVar, zzp zzpVar) {
        Preconditions.checkNotNull(zzauVar);
        zzy(zzpVar, false);
        zzx(new zzge(this, zzauVar, zzpVar));
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final void zzl(zzau zzauVar, String str, String str2) {
        Preconditions.checkNotNull(zzauVar);
        Preconditions.checkNotEmpty(str);
        zzz(str, true);
        zzx(new zzgf(this, zzauVar, str));
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final void zzm(zzp zzpVar) {
        Preconditions.checkNotEmpty(zzpVar.zza);
        zzz(zzpVar.zza, false);
        zzx(new zzgb(this, zzpVar));
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final void zzn(zzab zzabVar, zzp zzpVar) {
        Preconditions.checkNotNull(zzabVar);
        Preconditions.checkNotNull(zzabVar.zzc);
        zzy(zzpVar, false);
        zzab zzabVar2 = new zzab(zzabVar);
        zzabVar2.zza = zzpVar.zza;
        zzx(new zzfv(this, zzabVar2, zzpVar));
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final void zzo(zzab zzabVar) {
        Preconditions.checkNotNull(zzabVar);
        Preconditions.checkNotNull(zzabVar.zzc);
        Preconditions.checkNotEmpty(zzabVar.zza);
        zzz(zzabVar.zza, true);
        zzx(new zzfw(this, new zzab(zzabVar)));
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final void zzp(zzp zzpVar) {
        Preconditions.checkNotEmpty(zzpVar.zza);
        Preconditions.checkNotNull(zzpVar.zzv);
        zzgd zzgdVar = new zzgd(this, zzpVar);
        Preconditions.checkNotNull(zzgdVar);
        if (this.zza.zzaz().zzs()) {
            zzgdVar.run();
        } else {
            this.zza.zzaz().zzq(zzgdVar);
        }
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final void zzq(long j, String str, String str2, String str3) {
        zzx(new zzgk(this, str2, str3, str, j));
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final void zzr(final Bundle bundle, zzp zzpVar) {
        zzy(zzpVar, false);
        final String str = zzpVar.zza;
        Preconditions.checkNotNull(str);
        zzx(new Runnable() { // from class: com.google.android.gms.measurement.internal.zzfu
            @Override // java.lang.Runnable
            public final void run() {
                this.zza.zzw(str, bundle);
            }
        });
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final void zzs(zzp zzpVar) {
        zzy(zzpVar, false);
        zzx(new zzgc(this, zzpVar));
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final void zzt(zzku zzkuVar, zzp zzpVar) {
        Preconditions.checkNotNull(zzkuVar);
        zzy(zzpVar, false);
        zzx(new zzgh(this, zzkuVar, zzpVar));
    }

    @Override // com.google.android.gms.measurement.internal.zzdz
    public final byte[] zzu(zzau zzauVar, String str) {
        Preconditions.checkNotEmpty(str);
        Preconditions.checkNotNull(zzauVar);
        zzz(str, true);
        this.zza.zzay().zzc().zzb("Log and bundle. event", this.zza.zzj().zzd(zzauVar.zza));
        long jNanoTime = this.zza.zzav().nanoTime() / 1000000;
        try {
            byte[] bArr = (byte[]) this.zza.zzaz().zzi(new zzgg(this, zzauVar, str)).get();
            if (bArr == null) {
                this.zza.zzay().zzd().zzb("Log and bundle returned null. appId", zzej.zzn(str));
                bArr = new byte[0];
            }
            this.zza.zzay().zzc().zzd("Log and bundle processed. event, size, time_ms", this.zza.zzj().zzd(zzauVar.zza), Integer.valueOf(bArr.length), Long.valueOf((this.zza.zzav().nanoTime() / 1000000) - jNanoTime));
            return bArr;
        } catch (InterruptedException | ExecutionException e) {
            this.zza.zzay().zzd().zzd("Failed to log and bundle. appId, event, error", zzej.zzn(str), this.zza.zzj().zzd(zzauVar.zza), e);
            return null;
        }
    }

    final void zzv(zzau zzauVar, zzp zzpVar) {
        if (!this.zza.zzo().zzl(zzpVar.zza)) {
            zzA(zzauVar, zzpVar);
            return;
        }
        this.zza.zzay().zzj().zzb("EES config found for", zzpVar.zza);
        zzfk zzfkVarZzo = this.zza.zzo();
        String str = zzpVar.zza;
        com.google.android.gms.internal.measurement.zzc zzcVar = TextUtils.isEmpty(str) ? null : (com.google.android.gms.internal.measurement.zzc) zzfkVarZzo.zzc.get(str);
        if (zzcVar == null) {
            this.zza.zzay().zzj().zzb("EES not loaded for", zzpVar.zza);
            zzA(zzauVar, zzpVar);
            return;
        }
        try {
            Map mapZzs = this.zza.zzu().zzs(zzauVar.zzb.zzc(), true);
            String strZza = zzgq.zza(zzauVar.zza);
            if (strZza == null) {
                strZza = zzauVar.zza;
            }
            if (zzcVar.zze(new com.google.android.gms.internal.measurement.zzaa(strZza, zzauVar.zzd, mapZzs))) {
                if (zzcVar.zzg()) {
                    this.zza.zzay().zzj().zzb("EES edited event", zzauVar.zza);
                    zzA(this.zza.zzu().zzi(zzcVar.zza().zzb()), zzpVar);
                } else {
                    zzA(zzauVar, zzpVar);
                }
                if (zzcVar.zzf()) {
                    for (com.google.android.gms.internal.measurement.zzaa zzaaVar : zzcVar.zza().zzc()) {
                        this.zza.zzay().zzj().zzb("EES logging created event", zzaaVar.zzd());
                        zzA(this.zza.zzu().zzi(zzaaVar), zzpVar);
                    }
                    return;
                }
                return;
            }
        } catch (com.google.android.gms.internal.measurement.zzd unused) {
            this.zza.zzay().zzd().zzc("EES error. appId, eventName", zzpVar.zzb, zzauVar.zza);
        }
        this.zza.zzay().zzj().zzb("EES was not applied to event", zzauVar.zza);
        zzA(zzauVar, zzpVar);
    }

    final /* synthetic */ void zzw(String str, Bundle bundle) {
        zzak zzakVarZzi = this.zza.zzi();
        zzakVarZzi.zzg();
        zzakVarZzi.zzW();
        byte[] bArrZzbq = zzakVarZzi.zzf.zzu().zzj(new zzap(zzakVarZzi.zzs, "", str, "dep", 0L, 0L, bundle)).zzbq();
        zzakVarZzi.zzs.zzay().zzj().zzc("Saving default event parameters, appId, data size", zzakVarZzi.zzs.zzj().zzd(str), Integer.valueOf(bArrZzbq.length));
        ContentValues contentValues = new ContentValues();
        contentValues.put("app_id", str);
        contentValues.put("parameters", bArrZzbq);
        try {
            if (zzakVarZzi.zzh().insertWithOnConflict("default_event_params", null, contentValues, 5) == -1) {
                zzakVarZzi.zzs.zzay().zzd().zzb("Failed to insert default event parameters (got -1). appId", zzej.zzn(str));
            }
        } catch (SQLiteException e) {
            zzakVarZzi.zzs.zzay().zzd().zzc("Error storing default event parameters. appId", zzej.zzn(str), e);
        }
    }

    final void zzx(Runnable runnable) {
        Preconditions.checkNotNull(runnable);
        if (this.zza.zzaz().zzs()) {
            runnable.run();
        } else {
            this.zza.zzaz().zzp(runnable);
        }
    }
}
