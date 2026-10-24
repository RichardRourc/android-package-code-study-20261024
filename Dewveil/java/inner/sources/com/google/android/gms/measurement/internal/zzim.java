package com.google.android.gms.measurement.internal;

import android.app.Activity;
import android.os.Bundle;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.measurement.api.AppMeasurementSdk;
import com.google.firebase.analytics.FirebaseAnalytics;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzim extends zzf {
    protected zzif zza;
    private volatile zzif zzb;
    private volatile zzif zzc;
    private final Map zzd;
    private Activity zze;
    private volatile boolean zzf;
    private volatile zzif zzg;
    private zzif zzh;
    private boolean zzi;
    private final Object zzj;
    private zzif zzk;
    private String zzl;

    public zzim(zzft zzftVar) {
        super(zzftVar);
        this.zzj = new Object();
        this.zzd = new ConcurrentHashMap();
    }

    private final void zzA(Activity activity, zzif zzifVar, boolean z) {
        zzif zzifVar2;
        zzif zzifVar3 = this.zzb == null ? this.zzc : this.zzb;
        if (zzifVar.zzb == null) {
            zzifVar2 = new zzif(zzifVar.zza, activity != null ? zzl(activity.getClass(), "Activity") : null, zzifVar.zzc, zzifVar.zze, zzifVar.zzf);
        } else {
            zzifVar2 = zzifVar;
        }
        this.zzc = this.zzb;
        this.zzb = zzifVar2;
        this.zzs.zzaz().zzp(new zzih(this, zzifVar2, zzifVar3, this.zzs.zzav().elapsedRealtime(), z));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void zzB(zzif zzifVar, zzif zzifVar2, long j, boolean z, Bundle bundle) {
        long j2;
        zzg();
        boolean z2 = false;
        boolean z3 = (zzifVar2 != null && zzifVar2.zzc == zzifVar.zzc && zzky.zzak(zzifVar2.zzb, zzifVar.zzb) && zzky.zzak(zzifVar2.zza, zzifVar.zza)) ? false : true;
        if (z && this.zza != null) {
            z2 = true;
        }
        if (z3) {
            Bundle bundle2 = bundle != null ? new Bundle(bundle) : new Bundle();
            zzky.zzJ(zzifVar, bundle2, true);
            if (zzifVar2 != null) {
                String str = zzifVar2.zza;
                if (str != null) {
                    bundle2.putString("_pn", str);
                }
                String str2 = zzifVar2.zzb;
                if (str2 != null) {
                    bundle2.putString("_pc", str2);
                }
                bundle2.putLong("_pi", zzifVar2.zzc);
            }
            if (z2) {
                zzka zzkaVar = this.zzs.zzu().zzb;
                long j3 = j - zzkaVar.zzb;
                zzkaVar.zzb = j;
                if (j3 > 0) {
                    this.zzs.zzv().zzH(bundle2, j3);
                }
            }
            if (!this.zzs.zzf().zzu()) {
                bundle2.putLong("_mst", 1L);
            }
            String str3 = true != zzifVar.zze ? "auto" : "app";
            long jCurrentTimeMillis = this.zzs.zzav().currentTimeMillis();
            if (zzifVar.zze) {
                long j4 = zzifVar.zzf;
                if (j4 != 0) {
                    j2 = j4;
                }
                this.zzs.zzq().zzH(str3, "_vs", j2, bundle2);
            }
            j2 = jCurrentTimeMillis;
            this.zzs.zzq().zzH(str3, "_vs", j2, bundle2);
        }
        if (z2) {
            zzC(this.zza, true, j);
        }
        this.zza = zzifVar;
        if (zzifVar.zze) {
            this.zzh = zzifVar;
        }
        this.zzs.zzt().zzG(zzifVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void zzC(zzif zzifVar, boolean z, long j) {
        this.zzs.zzd().zzf(this.zzs.zzav().elapsedRealtime());
        if (!this.zzs.zzu().zzb.zzd(zzifVar != null && zzifVar.zzd, z, j) || zzifVar == null) {
            return;
        }
        zzifVar.zzd = false;
    }

    static /* bridge */ /* synthetic */ void zzp(zzim zzimVar, Bundle bundle, zzif zzifVar, zzif zzifVar2, long j) {
        bundle.remove(FirebaseAnalytics.Param.SCREEN_NAME);
        bundle.remove(FirebaseAnalytics.Param.SCREEN_CLASS);
        zzimVar.zzB(zzifVar, zzifVar2, j, true, zzimVar.zzs.zzv().zzy(null, FirebaseAnalytics.Event.SCREEN_VIEW, bundle, null, false));
    }

    private final zzif zzz(Activity activity) {
        Preconditions.checkNotNull(activity);
        zzif zzifVar = (zzif) this.zzd.get(activity);
        if (zzifVar == null) {
            zzif zzifVar2 = new zzif(null, zzl(activity.getClass(), "Activity"), this.zzs.zzv().zzq());
            this.zzd.put(activity, zzifVar2);
            zzifVar = zzifVar2;
        }
        return this.zzg != null ? this.zzg : zzifVar;
    }

    @Override // com.google.android.gms.measurement.internal.zzf
    protected final boolean zzf() {
        return false;
    }

    public final zzif zzi() {
        return this.zzb;
    }

    public final zzif zzj(boolean z) {
        zza();
        zzg();
        if (!z) {
            return this.zza;
        }
        zzif zzifVar = this.zza;
        return zzifVar != null ? zzifVar : this.zzh;
    }

    final String zzl(Class cls, String str) {
        String canonicalName = cls.getCanonicalName();
        if (canonicalName == null) {
            return "Activity";
        }
        String[] strArrSplit = canonicalName.split("\\.");
        int length = strArrSplit.length;
        String str2 = length > 0 ? strArrSplit[length - 1] : "";
        int length2 = str2.length();
        this.zzs.zzf();
        if (length2 <= 100) {
            return str2;
        }
        this.zzs.zzf();
        return str2.substring(0, 100);
    }

    public final void zzr(Activity activity, Bundle bundle) {
        Bundle bundle2;
        if (!this.zzs.zzf().zzu() || bundle == null || (bundle2 = bundle.getBundle("com.google.app_measurement.screen_service")) == null) {
            return;
        }
        this.zzd.put(activity, new zzif(bundle2.getString(AppMeasurementSdk.ConditionalUserProperty.NAME), bundle2.getString("referrer_name"), bundle2.getLong("id")));
    }

    public final void zzs(Activity activity) {
        synchronized (this.zzj) {
            if (activity == this.zze) {
                this.zze = null;
            }
        }
        if (this.zzs.zzf().zzu()) {
            this.zzd.remove(activity);
        }
    }

    public final void zzt(Activity activity) {
        synchronized (this.zzj) {
            this.zzi = false;
            this.zzf = true;
        }
        long jElapsedRealtime = this.zzs.zzav().elapsedRealtime();
        if (!this.zzs.zzf().zzu()) {
            this.zzb = null;
            this.zzs.zzaz().zzp(new zzij(this, jElapsedRealtime));
        } else {
            zzif zzifVarZzz = zzz(activity);
            this.zzc = this.zzb;
            this.zzb = null;
            this.zzs.zzaz().zzp(new zzik(this, zzifVarZzz, jElapsedRealtime));
        }
    }

    public final void zzu(Activity activity) {
        synchronized (this.zzj) {
            this.zzi = true;
            if (activity != this.zze) {
                synchronized (this.zzj) {
                    this.zze = activity;
                    this.zzf = false;
                }
                if (this.zzs.zzf().zzu()) {
                    this.zzg = null;
                    this.zzs.zzaz().zzp(new zzil(this));
                }
            }
        }
        if (!this.zzs.zzf().zzu()) {
            this.zzb = this.zzg;
            this.zzs.zzaz().zzp(new zzii(this));
        } else {
            zzA(activity, zzz(activity), false);
            zzd zzdVarZzd = this.zzs.zzd();
            zzdVarZzd.zzs.zzaz().zzp(new zzc(zzdVarZzd, zzdVarZzd.zzs.zzav().elapsedRealtime()));
        }
    }

    public final void zzv(Activity activity, Bundle bundle) {
        zzif zzifVar;
        if (!this.zzs.zzf().zzu() || bundle == null || (zzifVar = (zzif) this.zzd.get(activity)) == null) {
            return;
        }
        Bundle bundle2 = new Bundle();
        bundle2.putLong("id", zzifVar.zzc);
        bundle2.putString(AppMeasurementSdk.ConditionalUserProperty.NAME, zzifVar.zza);
        bundle2.putString("referrer_name", zzifVar.zzb);
        bundle.putBundle("com.google.app_measurement.screen_service", bundle2);
    }

    /* JADX WARN: Code restructure failed: missing block: B:27:0x0088, code lost:
    
        if (r5.length() <= 100) goto L31;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x00b4, code lost:
    
        if (r6.length() <= 100) goto L39;
     */
    @java.lang.Deprecated
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void zzw(android.app.Activity r4, java.lang.String r5, java.lang.String r6) {
        /*
            Method dump skipped, instruction units count: 253
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.zzim.zzw(android.app.Activity, java.lang.String, java.lang.String):void");
    }

    /* JADX WARN: Code restructure failed: missing block: B:14:0x0031, code lost:
    
        if (r2 > 100) goto L15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:23:0x0063, code lost:
    
        if (r4 > 100) goto L24;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void zzx(android.os.Bundle r13, long r14) {
        /*
            Method dump skipped, instruction units count: 286
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.measurement.internal.zzim.zzx(android.os.Bundle, long):void");
    }

    public final void zzy(String str, zzif zzifVar) {
        zzg();
        synchronized (this) {
            String str2 = this.zzl;
            if (str2 == null || str2.equals(str) || zzifVar != null) {
                this.zzl = str;
                this.zzk = zzifVar;
            }
        }
    }
}
