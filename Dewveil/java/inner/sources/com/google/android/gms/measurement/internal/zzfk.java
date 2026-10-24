package com.google.android.gms.measurement.internal;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.sqlite.SQLiteException;
import android.text.TextUtils;
import android.util.Pair;
import androidx.collection.ArrayMap;
import androidx.collection.LruCache;
import com.google.android.gms.common.internal.Preconditions;
import com.google.firebase.analytics.FirebaseAnalytics;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.Callable;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzfk extends zzkh implements zzae {
    final Map zza;
    final Map zzb;
    final LruCache zzc;
    final com.google.android.gms.internal.measurement.zzr zzd;
    private final Map zze;
    private final Map zzg;
    private final Map zzh;
    private final Map zzi;

    zzfk(zzkr zzkrVar) {
        super(zzkrVar);
        this.zze = new ArrayMap();
        this.zza = new ArrayMap();
        this.zzb = new ArrayMap();
        this.zzg = new ArrayMap();
        this.zzi = new ArrayMap();
        this.zzh = new ArrayMap();
        this.zzc = new zzfh(this, 20);
        this.zzd = new zzfi(this);
    }

    static /* bridge */ /* synthetic */ com.google.android.gms.internal.measurement.zzc zzd(zzfk zzfkVar, String str) throws Throwable {
        zzfkVar.zzW();
        Preconditions.checkNotEmpty(str);
        if (!zzfkVar.zzl(str)) {
            return null;
        }
        if (!zzfkVar.zzg.containsKey(str) || zzfkVar.zzg.get(str) == null) {
            zzfkVar.zzt(str);
        } else {
            zzfkVar.zzu(str, (com.google.android.gms.internal.measurement.zzfc) zzfkVar.zzg.get(str));
        }
        return (com.google.android.gms.internal.measurement.zzc) zzfkVar.zzc.snapshot().get(str);
    }

    private final com.google.android.gms.internal.measurement.zzfc zzr(String str, byte[] bArr) {
        if (bArr == null) {
            return com.google.android.gms.internal.measurement.zzfc.zzg();
        }
        try {
            com.google.android.gms.internal.measurement.zzfc zzfcVar = (com.google.android.gms.internal.measurement.zzfc) ((com.google.android.gms.internal.measurement.zzfb) zzkt.zzl(com.google.android.gms.internal.measurement.zzfc.zze(), bArr)).zzay();
            this.zzs.zzay().zzj().zzc("Parsed config. version, gmp_app_id", zzfcVar.zzq() ? Long.valueOf(zzfcVar.zzc()) : null, zzfcVar.zzp() ? zzfcVar.zzh() : null);
            return zzfcVar;
        } catch (com.google.android.gms.internal.measurement.zzkj e) {
            this.zzs.zzay().zzk().zzc("Unable to merge remote config. appId", zzej.zzn(str), e);
            return com.google.android.gms.internal.measurement.zzfc.zzg();
        } catch (RuntimeException e2) {
            this.zzs.zzay().zzk().zzc("Unable to merge remote config. appId", zzej.zzn(str), e2);
            return com.google.android.gms.internal.measurement.zzfc.zzg();
        }
    }

    private final void zzs(String str, com.google.android.gms.internal.measurement.zzfb zzfbVar) {
        ArrayMap arrayMap = new ArrayMap();
        ArrayMap arrayMap2 = new ArrayMap();
        ArrayMap arrayMap3 = new ArrayMap();
        if (zzfbVar != null) {
            for (int i = 0; i < zzfbVar.zza(); i++) {
                com.google.android.gms.internal.measurement.zzez zzezVar = (com.google.android.gms.internal.measurement.zzez) zzfbVar.zzb(i).zzbt();
                if (TextUtils.isEmpty(zzezVar.zzc())) {
                    this.zzs.zzay().zzk().zza("EventConfig contained null event name");
                } else {
                    String strZzc = zzezVar.zzc();
                    String strZzb = zzgq.zzb(zzezVar.zzc());
                    if (!TextUtils.isEmpty(strZzb)) {
                        zzezVar.zzb(strZzb);
                        zzfbVar.zzd(i, zzezVar);
                    }
                    if (zzezVar.zzf() && zzezVar.zzd()) {
                        arrayMap.put(strZzc, true);
                    }
                    if (zzezVar.zzg() && zzezVar.zze()) {
                        arrayMap2.put(zzezVar.zzc(), true);
                    }
                    if (zzezVar.zzh()) {
                        if (zzezVar.zza() < 2 || zzezVar.zza() > 65535) {
                            this.zzs.zzay().zzk().zzc("Invalid sampling rate. Event name, sample rate", zzezVar.zzc(), Integer.valueOf(zzezVar.zza()));
                        } else {
                            arrayMap3.put(zzezVar.zzc(), Integer.valueOf(zzezVar.zza()));
                        }
                    }
                }
            }
        }
        this.zza.put(str, arrayMap);
        this.zzb.put(str, arrayMap2);
        this.zzh.put(str, arrayMap3);
    }

    /* JADX WARN: Code duplicated, block: B:30:0x009e  */
    /* JADX WARN: Code duplicated, block: B:32:0x00bd  */
    /* JADX WARN: Code duplicated, block: B:37:0x00ff  */
    /* JADX WARN: Not initialized variable reg: 2, insn: 0x00fc: MOVE (r1 I:??[OBJECT, ARRAY]) = (r2 I:??[OBJECT, ARRAY]), block:B:35:0x00fc */
    private final void zzt(String str) throws Throwable {
        SQLiteException e;
        Cursor cursorQuery;
        Cursor cursor;
        Pair pair;
        zzW();
        zzg();
        Preconditions.checkNotEmpty(str);
        if (this.zzg.get(str) == null) {
            zzak zzakVarZzi = this.zzf.zzi();
            Preconditions.checkNotEmpty(str);
            zzakVarZzi.zzg();
            zzakVarZzi.zzW();
            Cursor cursor2 = null;
            try {
                try {
                    cursorQuery = zzakVarZzi.zzh().query("apps", new String[]{"remote_config", "config_last_modified_time"}, "app_id=?", new String[]{str}, null, null, null);
                    try {
                        if (cursorQuery.moveToFirst()) {
                            byte[] blob = cursorQuery.getBlob(0);
                            String string = cursorQuery.getString(1);
                            if (cursorQuery.moveToNext()) {
                                zzakVarZzi.zzs.zzay().zzd().zzb("Got multiple records for app config, expected one. appId", zzej.zzn(str));
                            }
                            if (blob == null) {
                                if (cursorQuery != null) {
                                    cursorQuery.close();
                                }
                                pair = null;
                            } else {
                                pair = new Pair(blob, string);
                                if (cursorQuery != null) {
                                    cursorQuery.close();
                                }
                            }
                        } else {
                            if (cursorQuery != null) {
                                cursorQuery.close();
                            }
                            pair = null;
                        }
                    } catch (SQLiteException e2) {
                        e = e2;
                        zzakVarZzi.zzs.zzay().zzd().zzc("Error querying remote config. appId", zzej.zzn(str), e);
                        if (cursorQuery != null) {
                        }
                        pair = null;
                        if (pair == null) {
                            this.zze.put(str, null);
                            this.zza.put(str, null);
                            this.zzb.put(str, null);
                            this.zzg.put(str, null);
                            this.zzi.put(str, null);
                            this.zzh.put(str, null);
                            return;
                        }
                        com.google.android.gms.internal.measurement.zzfb zzfbVar = (com.google.android.gms.internal.measurement.zzfb) zzr(str, (byte[]) pair.first).zzbt();
                        zzs(str, zzfbVar);
                        this.zze.put(str, zzv((com.google.android.gms.internal.measurement.zzfc) zzfbVar.zzay()));
                        this.zzg.put(str, (com.google.android.gms.internal.measurement.zzfc) zzfbVar.zzay());
                        zzu(str, (com.google.android.gms.internal.measurement.zzfc) zzfbVar.zzay());
                        this.zzi.put(str, (String) pair.second);
                    }
                } catch (Throwable th) {
                    th = th;
                    cursor2 = cursor;
                    if (cursor2 != null) {
                        cursor2.close();
                    }
                    throw th;
                }
            } catch (SQLiteException e3) {
                e = e3;
                cursorQuery = null;
            } catch (Throwable th2) {
                th = th2;
                if (cursor2 != null) {
                    cursor2.close();
                }
                throw th;
            }
            if (pair == null) {
                this.zze.put(str, null);
                this.zza.put(str, null);
                this.zzb.put(str, null);
                this.zzg.put(str, null);
                this.zzi.put(str, null);
                this.zzh.put(str, null);
                return;
            }
            com.google.android.gms.internal.measurement.zzfb zzfbVar2 = (com.google.android.gms.internal.measurement.zzfb) zzr(str, (byte[]) pair.first).zzbt();
            zzs(str, zzfbVar2);
            this.zze.put(str, zzv((com.google.android.gms.internal.measurement.zzfc) zzfbVar2.zzay()));
            this.zzg.put(str, (com.google.android.gms.internal.measurement.zzfc) zzfbVar2.zzay());
            zzu(str, (com.google.android.gms.internal.measurement.zzfc) zzfbVar2.zzay());
            this.zzi.put(str, (String) pair.second);
        }
    }

    private final void zzu(final String str, com.google.android.gms.internal.measurement.zzfc zzfcVar) {
        if (zzfcVar.zza() == 0) {
            this.zzc.remove(str);
            return;
        }
        this.zzs.zzay().zzj().zzb("EES programs found", Integer.valueOf(zzfcVar.zza()));
        com.google.android.gms.internal.measurement.zzgo zzgoVar = (com.google.android.gms.internal.measurement.zzgo) zzfcVar.zzj().get(0);
        try {
            com.google.android.gms.internal.measurement.zzc zzcVar = new com.google.android.gms.internal.measurement.zzc();
            zzcVar.zzd("internal.remoteConfig", new Callable() { // from class: com.google.android.gms.measurement.internal.zzfe
                @Override // java.util.concurrent.Callable
                public final Object call() {
                    return new com.google.android.gms.internal.measurement.zzn("internal.remoteConfig", new zzfj(this.zza, str));
                }
            });
            zzcVar.zzd("internal.appMetadata", new Callable() { // from class: com.google.android.gms.measurement.internal.zzfg
                @Override // java.util.concurrent.Callable
                public final Object call() {
                    final zzfk zzfkVar = this.zza;
                    final String str2 = str;
                    return new com.google.android.gms.internal.measurement.zzu("internal.appMetadata", new Callable() { // from class: com.google.android.gms.measurement.internal.zzff
                        @Override // java.util.concurrent.Callable
                        public final Object call() {
                            zzfk zzfkVar2 = zzfkVar;
                            String str3 = str2;
                            zzg zzgVarZzj = zzfkVar2.zzf.zzi().zzj(str3);
                            HashMap map = new HashMap();
                            map.put("platform", "android");
                            map.put("package_name", str3);
                            zzfkVar2.zzs.zzf().zzh();
                            map.put("gmp_version", 60000L);
                            if (zzgVarZzj != null) {
                                String strZzw = zzgVarZzj.zzw();
                                if (strZzw != null) {
                                    map.put("app_version", strZzw);
                                }
                                map.put("app_version_int", Long.valueOf(zzgVarZzj.zzb()));
                                map.put("dynamite_version", Long.valueOf(zzgVarZzj.zzk()));
                            }
                            return map;
                        }
                    });
                }
            });
            zzcVar.zzd("internal.logger", new Callable() { // from class: com.google.android.gms.measurement.internal.zzfd
                @Override // java.util.concurrent.Callable
                public final Object call() {
                    return new com.google.android.gms.internal.measurement.zzt(this.zza.zzd);
                }
            });
            zzcVar.zzc(zzgoVar);
            this.zzc.put(str, zzcVar);
            this.zzs.zzay().zzj().zzc("EES program loaded for appId, activities", str, Integer.valueOf(zzgoVar.zza().zza()));
            Iterator it = zzgoVar.zza().zzd().iterator();
            while (it.hasNext()) {
                this.zzs.zzay().zzj().zzb("EES program activity", ((com.google.android.gms.internal.measurement.zzgm) it.next()).zzb());
            }
        } catch (com.google.android.gms.internal.measurement.zzd unused) {
            this.zzs.zzay().zzd().zzb("Failed to load EES program. appId", str);
        }
    }

    private static final Map zzv(com.google.android.gms.internal.measurement.zzfc zzfcVar) {
        ArrayMap arrayMap = new ArrayMap();
        if (zzfcVar != null) {
            for (com.google.android.gms.internal.measurement.zzfe zzfeVar : zzfcVar.zzk()) {
                arrayMap.put(zzfeVar.zzb(), zzfeVar.zzc());
            }
        }
        return arrayMap;
    }

    @Override // com.google.android.gms.measurement.internal.zzae
    public final String zza(String str, String str2) throws Throwable {
        zzg();
        zzt(str);
        Map map = (Map) this.zze.get(str);
        if (map != null) {
            return (String) map.get(str2);
        }
        return null;
    }

    @Override // com.google.android.gms.measurement.internal.zzkh
    protected final boolean zzb() {
        return false;
    }

    final int zzc(String str, String str2) throws Throwable {
        Integer num;
        zzg();
        zzt(str);
        Map map = (Map) this.zzh.get(str);
        if (map == null || (num = (Integer) map.get(str2)) == null) {
            return 1;
        }
        return num.intValue();
    }

    protected final com.google.android.gms.internal.measurement.zzfc zze(String str) {
        zzW();
        zzg();
        Preconditions.checkNotEmpty(str);
        zzt(str);
        return (com.google.android.gms.internal.measurement.zzfc) this.zzg.get(str);
    }

    protected final String zzf(String str) {
        zzg();
        return (String) this.zzi.get(str);
    }

    protected final void zzi(String str) {
        zzg();
        this.zzi.put(str, null);
    }

    final void zzj(String str) {
        zzg();
        this.zzg.remove(str);
    }

    final boolean zzk(String str) {
        zzg();
        com.google.android.gms.internal.measurement.zzfc zzfcVarZze = zze(str);
        if (zzfcVarZze == null) {
            return false;
        }
        return zzfcVarZze.zzo();
    }

    public final boolean zzl(String str) {
        com.google.android.gms.internal.measurement.zzfc zzfcVar;
        return (TextUtils.isEmpty(str) || (zzfcVar = (com.google.android.gms.internal.measurement.zzfc) this.zzg.get(str)) == null || zzfcVar.zza() == 0) ? false : true;
    }

    final boolean zzm(String str) {
        return "1".equals(zza(str, "measurement.upload.blacklist_internal"));
    }

    final boolean zzn(String str, String str2) throws Throwable {
        Boolean bool;
        zzg();
        zzt(str);
        if (FirebaseAnalytics.Event.ECOMMERCE_PURCHASE.equals(str2) || FirebaseAnalytics.Event.PURCHASE.equals(str2) || FirebaseAnalytics.Event.REFUND.equals(str2)) {
            return true;
        }
        Map map = (Map) this.zzb.get(str);
        if (map == null || (bool = (Boolean) map.get(str2)) == null) {
            return false;
        }
        return bool.booleanValue();
    }

    final boolean zzo(String str, String str2) throws Throwable {
        Boolean bool;
        zzg();
        zzt(str);
        if (zzm(str) && zzky.zzag(str2)) {
            return true;
        }
        if (zzp(str) && zzky.zzah(str2)) {
            return true;
        }
        Map map = (Map) this.zza.get(str);
        if (map == null || (bool = (Boolean) map.get(str2)) == null) {
            return false;
        }
        return bool.booleanValue();
    }

    final boolean zzp(String str) {
        return "1".equals(zza(str, "measurement.upload.blacklist_public"));
    }

    protected final boolean zzq(String str, byte[] bArr, String str2) {
        zzW();
        zzg();
        Preconditions.checkNotEmpty(str);
        com.google.android.gms.internal.measurement.zzfb zzfbVar = (com.google.android.gms.internal.measurement.zzfb) zzr(str, bArr).zzbt();
        if (zzfbVar == null) {
            return false;
        }
        zzs(str, zzfbVar);
        zzu(str, (com.google.android.gms.internal.measurement.zzfc) zzfbVar.zzay());
        this.zzg.put(str, (com.google.android.gms.internal.measurement.zzfc) zzfbVar.zzay());
        this.zzi.put(str, str2);
        this.zze.put(str, zzv((com.google.android.gms.internal.measurement.zzfc) zzfbVar.zzay()));
        this.zzf.zzi().zzB(str, new ArrayList(zzfbVar.zze()));
        try {
            zzfbVar.zzc();
            bArr = ((com.google.android.gms.internal.measurement.zzfc) zzfbVar.zzay()).zzbq();
        } catch (RuntimeException e) {
            this.zzs.zzay().zzk().zzc("Unable to serialize reduced-size config. Storing full config instead. appId", zzej.zzn(str), e);
        }
        zzak zzakVarZzi = this.zzf.zzi();
        Preconditions.checkNotEmpty(str);
        zzakVarZzi.zzg();
        zzakVarZzi.zzW();
        ContentValues contentValues = new ContentValues();
        contentValues.put("remote_config", bArr);
        contentValues.put("config_last_modified_time", str2);
        try {
            if (zzakVarZzi.zzh().update("apps", contentValues, "app_id = ?", new String[]{str}) == 0) {
                zzakVarZzi.zzs.zzay().zzd().zzb("Failed to update remote config (got 0). appId", zzej.zzn(str));
            }
        } catch (SQLiteException e2) {
            zzakVarZzi.zzs.zzay().zzd().zzc("Error storing remote config. appId", zzej.zzn(str), e2);
        }
        this.zzg.put(str, (com.google.android.gms.internal.measurement.zzfc) zzfbVar.zzay());
        return true;
    }
}
