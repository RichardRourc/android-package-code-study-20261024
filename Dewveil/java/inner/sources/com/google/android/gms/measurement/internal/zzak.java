package com.google.android.gms.measurement.internal;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteException;
import android.os.Bundle;
import android.text.TextUtils;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.internal.measurement.zznv;
import com.google.android.gms.measurement.api.AppMeasurementSdk;
import com.google.firebase.messaging.Constants;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzak extends zzkh {
    private static final String[] zza = {"last_bundled_timestamp", "ALTER TABLE events ADD COLUMN last_bundled_timestamp INTEGER;", "last_bundled_day", "ALTER TABLE events ADD COLUMN last_bundled_day INTEGER;", "last_sampled_complex_event_id", "ALTER TABLE events ADD COLUMN last_sampled_complex_event_id INTEGER;", "last_sampling_rate", "ALTER TABLE events ADD COLUMN last_sampling_rate INTEGER;", "last_exempt_from_sampling", "ALTER TABLE events ADD COLUMN last_exempt_from_sampling INTEGER;", "current_session_count", "ALTER TABLE events ADD COLUMN current_session_count INTEGER;"};
    private static final String[] zzb = {"origin", "ALTER TABLE user_attributes ADD COLUMN origin TEXT;"};
    private static final String[] zzc = {"app_version", "ALTER TABLE apps ADD COLUMN app_version TEXT;", "app_store", "ALTER TABLE apps ADD COLUMN app_store TEXT;", "gmp_version", "ALTER TABLE apps ADD COLUMN gmp_version INTEGER;", "dev_cert_hash", "ALTER TABLE apps ADD COLUMN dev_cert_hash INTEGER;", "measurement_enabled", "ALTER TABLE apps ADD COLUMN measurement_enabled INTEGER;", "last_bundle_start_timestamp", "ALTER TABLE apps ADD COLUMN last_bundle_start_timestamp INTEGER;", "day", "ALTER TABLE apps ADD COLUMN day INTEGER;", "daily_public_events_count", "ALTER TABLE apps ADD COLUMN daily_public_events_count INTEGER;", "daily_events_count", "ALTER TABLE apps ADD COLUMN daily_events_count INTEGER;", "daily_conversions_count", "ALTER TABLE apps ADD COLUMN daily_conversions_count INTEGER;", "remote_config", "ALTER TABLE apps ADD COLUMN remote_config BLOB;", "config_fetched_time", "ALTER TABLE apps ADD COLUMN config_fetched_time INTEGER;", "failed_config_fetch_time", "ALTER TABLE apps ADD COLUMN failed_config_fetch_time INTEGER;", "app_version_int", "ALTER TABLE apps ADD COLUMN app_version_int INTEGER;", "firebase_instance_id", "ALTER TABLE apps ADD COLUMN firebase_instance_id TEXT;", "daily_error_events_count", "ALTER TABLE apps ADD COLUMN daily_error_events_count INTEGER;", "daily_realtime_events_count", "ALTER TABLE apps ADD COLUMN daily_realtime_events_count INTEGER;", "health_monitor_sample", "ALTER TABLE apps ADD COLUMN health_monitor_sample TEXT;", "android_id", "ALTER TABLE apps ADD COLUMN android_id INTEGER;", "adid_reporting_enabled", "ALTER TABLE apps ADD COLUMN adid_reporting_enabled INTEGER;", "ssaid_reporting_enabled", "ALTER TABLE apps ADD COLUMN ssaid_reporting_enabled INTEGER;", "admob_app_id", "ALTER TABLE apps ADD COLUMN admob_app_id TEXT;", "linked_admob_app_id", "ALTER TABLE apps ADD COLUMN linked_admob_app_id TEXT;", "dynamite_version", "ALTER TABLE apps ADD COLUMN dynamite_version INTEGER;", "safelisted_events", "ALTER TABLE apps ADD COLUMN safelisted_events TEXT;", "ga_app_id", "ALTER TABLE apps ADD COLUMN ga_app_id TEXT;", "config_last_modified_time", "ALTER TABLE apps ADD COLUMN config_last_modified_time TEXT;"};
    private static final String[] zzd = {"realtime", "ALTER TABLE raw_events ADD COLUMN realtime INTEGER;"};
    private static final String[] zze = {"has_realtime", "ALTER TABLE queue ADD COLUMN has_realtime INTEGER;", "retry_count", "ALTER TABLE queue ADD COLUMN retry_count INTEGER;"};
    private static final String[] zzg = {"session_scoped", "ALTER TABLE event_filters ADD COLUMN session_scoped BOOLEAN;"};
    private static final String[] zzh = {"session_scoped", "ALTER TABLE property_filters ADD COLUMN session_scoped BOOLEAN;"};
    private static final String[] zzi = {"previous_install_count", "ALTER TABLE app2 ADD COLUMN previous_install_count INTEGER;"};
    private final zzaj zzj;
    private final zzkd zzk;

    zzak(zzkr zzkrVar) {
        super(zzkrVar);
        this.zzk = new zzkd(this.zzs.zzav());
        this.zzs.zzf();
        this.zzj = new zzaj(this, this.zzs.zzau(), "google_app_measurement.db");
    }

    static final void zzV(ContentValues contentValues, String str, Object obj) {
        Preconditions.checkNotEmpty("value");
        Preconditions.checkNotNull(obj);
        if (obj instanceof String) {
            contentValues.put("value", (String) obj);
        } else if (obj instanceof Long) {
            contentValues.put("value", (Long) obj);
        } else {
            if (!(obj instanceof Double)) {
                throw new IllegalArgumentException("Invalid value type");
            }
            contentValues.put("value", (Double) obj);
        }
    }

    private final long zzZ(String str, String[] strArr) {
        Cursor cursor = null;
        try {
            try {
                Cursor cursorRawQuery = zzh().rawQuery(str, strArr);
                if (!cursorRawQuery.moveToFirst()) {
                    throw new SQLiteException("Database returned empty set");
                }
                long j = cursorRawQuery.getLong(0);
                if (cursorRawQuery != null) {
                    cursorRawQuery.close();
                }
                return j;
            } catch (SQLiteException e) {
                this.zzs.zzay().zzd().zzc("Database error", str, e);
                throw e;
            }
        } catch (Throwable th) {
            if (0 != 0) {
                cursor.close();
            }
            throw th;
        }
    }

    private final long zzaa(String str, String[] strArr, long j) {
        Cursor cursorRawQuery = null;
        try {
            try {
                cursorRawQuery = zzh().rawQuery(str, strArr);
                if (!cursorRawQuery.moveToFirst()) {
                    if (cursorRawQuery != null) {
                        cursorRawQuery.close();
                    }
                    return j;
                }
                long j2 = cursorRawQuery.getLong(0);
                if (cursorRawQuery != null) {
                    cursorRawQuery.close();
                }
                return j2;
            } catch (SQLiteException e) {
                this.zzs.zzay().zzd().zzc("Database error", str, e);
                throw e;
            }
        } catch (Throwable th) {
            if (cursorRawQuery != null) {
                cursorRawQuery.close();
            }
            throw th;
        }
    }

    public final void zzA(String str, String str2) {
        Preconditions.checkNotEmpty(str);
        Preconditions.checkNotEmpty(str2);
        zzg();
        zzW();
        try {
            zzh().delete("user_attributes", "app_id=? and name=?", new String[]{str, str2});
        } catch (SQLiteException e) {
            this.zzs.zzay().zzd().zzd("Error deleting user property. appId", zzej.zzn(str), this.zzs.zzj().zzf(str2), e);
        }
    }

    final void zzB(String str, List list) {
        Iterator it;
        boolean z;
        String str2 = "app_id=? and audience_id=?";
        Preconditions.checkNotNull(list);
        int i = 0;
        while (i < list.size()) {
            com.google.android.gms.internal.measurement.zzeg zzegVar = (com.google.android.gms.internal.measurement.zzeg) ((com.google.android.gms.internal.measurement.zzeh) list.get(i)).zzbt();
            if (zzegVar.zza() != 0) {
                int i2 = 0;
                while (i2 < zzegVar.zza()) {
                    com.google.android.gms.internal.measurement.zzei zzeiVar = (com.google.android.gms.internal.measurement.zzei) zzegVar.zze(i2).zzbt();
                    com.google.android.gms.internal.measurement.zzei zzeiVar2 = (com.google.android.gms.internal.measurement.zzei) zzeiVar.clone();
                    String strZzb = zzgq.zzb(zzeiVar.zze());
                    if (strZzb != null) {
                        zzeiVar2.zzb(strZzb);
                        z = true;
                    } else {
                        z = false;
                    }
                    int i3 = 0;
                    while (i3 < zzeiVar.zza()) {
                        com.google.android.gms.internal.measurement.zzel zzelVarZzd = zzeiVar.zzd(i3);
                        com.google.android.gms.internal.measurement.zzei zzeiVar3 = zzeiVar;
                        String str3 = str2;
                        String strZzb2 = zzie.zzb(zzelVarZzd.zze(), zzgr.zza, zzgr.zzb);
                        if (strZzb2 != null) {
                            com.google.android.gms.internal.measurement.zzek zzekVar = (com.google.android.gms.internal.measurement.zzek) zzelVarZzd.zzbt();
                            zzekVar.zza(strZzb2);
                            zzeiVar2.zzc(i3, (com.google.android.gms.internal.measurement.zzel) zzekVar.zzay());
                            z = true;
                        }
                        i3++;
                        zzeiVar = zzeiVar3;
                        str2 = str3;
                    }
                    String str4 = str2;
                    if (z) {
                        zzegVar.zzc(i2, zzeiVar2);
                        list.set(i, (com.google.android.gms.internal.measurement.zzeh) zzegVar.zzay());
                    }
                    i2++;
                    str2 = str4;
                }
            }
            String str5 = str2;
            if (zzegVar.zzb() != 0) {
                for (int i4 = 0; i4 < zzegVar.zzb(); i4++) {
                    com.google.android.gms.internal.measurement.zzes zzesVarZzf = zzegVar.zzf(i4);
                    String strZzb3 = zzie.zzb(zzesVarZzf.zze(), zzgs.zza, zzgs.zzb);
                    if (strZzb3 != null) {
                        com.google.android.gms.internal.measurement.zzer zzerVar = (com.google.android.gms.internal.measurement.zzer) zzesVarZzf.zzbt();
                        zzerVar.zza(strZzb3);
                        zzegVar.zzd(i4, zzerVar);
                        list.set(i, (com.google.android.gms.internal.measurement.zzeh) zzegVar.zzay());
                    }
                }
            }
            i++;
            str2 = str5;
        }
        String str6 = str2;
        zzW();
        zzg();
        Preconditions.checkNotEmpty(str);
        Preconditions.checkNotNull(list);
        SQLiteDatabase sQLiteDatabaseZzh = zzh();
        sQLiteDatabaseZzh.beginTransaction();
        try {
            zzW();
            zzg();
            Preconditions.checkNotEmpty(str);
            SQLiteDatabase sQLiteDatabaseZzh2 = zzh();
            sQLiteDatabaseZzh2.delete("property_filters", "app_id=?", new String[]{str});
            sQLiteDatabaseZzh2.delete("event_filters", "app_id=?", new String[]{str});
            Iterator it2 = list.iterator();
            while (it2.hasNext()) {
                com.google.android.gms.internal.measurement.zzeh zzehVar = (com.google.android.gms.internal.measurement.zzeh) it2.next();
                zzW();
                zzg();
                Preconditions.checkNotEmpty(str);
                Preconditions.checkNotNull(zzehVar);
                if (zzehVar.zzk()) {
                    int iZza = zzehVar.zza();
                    Iterator it3 = zzehVar.zzg().iterator();
                    while (true) {
                        if (it3.hasNext()) {
                            if (!((com.google.android.gms.internal.measurement.zzej) it3.next()).zzp()) {
                                this.zzs.zzay().zzk().zzc("Event filter with no ID. Audience definition ignored. appId, audienceId", zzej.zzn(str), Integer.valueOf(iZza));
                                break;
                            }
                        } else {
                            Iterator it4 = zzehVar.zzh().iterator();
                            while (true) {
                                if (!it4.hasNext()) {
                                    Iterator it5 = zzehVar.zzg().iterator();
                                    while (true) {
                                        if (!it5.hasNext()) {
                                            it = it2;
                                            Iterator it6 = zzehVar.zzh().iterator();
                                            while (it6.hasNext()) {
                                                com.google.android.gms.internal.measurement.zzes zzesVar = (com.google.android.gms.internal.measurement.zzes) it6.next();
                                                zzW();
                                                zzg();
                                                Preconditions.checkNotEmpty(str);
                                                Preconditions.checkNotNull(zzesVar);
                                                if (TextUtils.isEmpty(zzesVar.zze())) {
                                                    this.zzs.zzay().zzk().zzd("Property filter had no property name. Audience definition ignored. appId, audienceId, filterId", zzej.zzn(str), Integer.valueOf(iZza), String.valueOf(zzesVar.zzj() ? Integer.valueOf(zzesVar.zza()) : null));
                                                } else {
                                                    byte[] bArrZzbq = zzesVar.zzbq();
                                                    ContentValues contentValues = new ContentValues();
                                                    contentValues.put("app_id", str);
                                                    contentValues.put("audience_id", Integer.valueOf(iZza));
                                                    contentValues.put("filter_id", zzesVar.zzj() ? Integer.valueOf(zzesVar.zza()) : null);
                                                    Iterator it7 = it6;
                                                    contentValues.put("property_name", zzesVar.zze());
                                                    contentValues.put("session_scoped", zzesVar.zzk() ? Boolean.valueOf(zzesVar.zzi()) : null);
                                                    contentValues.put(Constants.ScionAnalytics.MessageType.DATA_MESSAGE, bArrZzbq);
                                                    try {
                                                        if (zzh().insertWithOnConflict("property_filters", null, contentValues, 5) == -1) {
                                                            this.zzs.zzay().zzd().zzb("Failed to insert property filter (got -1). appId", zzej.zzn(str));
                                                        } else {
                                                            it6 = it7;
                                                        }
                                                    } catch (SQLiteException e) {
                                                        this.zzs.zzay().zzd().zzc("Error storing property filter. appId", zzej.zzn(str), e);
                                                    }
                                                }
                                            }
                                            break;
                                        }
                                        com.google.android.gms.internal.measurement.zzej zzejVar = (com.google.android.gms.internal.measurement.zzej) it5.next();
                                        zzW();
                                        zzg();
                                        Preconditions.checkNotEmpty(str);
                                        Preconditions.checkNotNull(zzejVar);
                                        if (!TextUtils.isEmpty(zzejVar.zzg())) {
                                            byte[] bArrZzbq2 = zzejVar.zzbq();
                                            it = it2;
                                            ContentValues contentValues2 = new ContentValues();
                                            contentValues2.put("app_id", str);
                                            contentValues2.put("audience_id", Integer.valueOf(iZza));
                                            contentValues2.put("filter_id", zzejVar.zzp() ? Integer.valueOf(zzejVar.zzb()) : null);
                                            contentValues2.put("event_name", zzejVar.zzg());
                                            contentValues2.put("session_scoped", zzejVar.zzq() ? Boolean.valueOf(zzejVar.zzn()) : null);
                                            contentValues2.put(Constants.ScionAnalytics.MessageType.DATA_MESSAGE, bArrZzbq2);
                                            try {
                                                if (zzh().insertWithOnConflict("event_filters", null, contentValues2, 5) == -1) {
                                                    this.zzs.zzay().zzd().zzb("Failed to insert event filter (got -1). appId", zzej.zzn(str));
                                                }
                                                it2 = it;
                                            } catch (SQLiteException e2) {
                                                this.zzs.zzay().zzd().zzc("Error storing event filter. appId", zzej.zzn(str), e2);
                                                zzW();
                                                zzg();
                                                Preconditions.checkNotEmpty(str);
                                                SQLiteDatabase sQLiteDatabaseZzh3 = zzh();
                                                String str7 = str6;
                                                sQLiteDatabaseZzh3.delete("property_filters", str7, new String[]{str, String.valueOf(iZza)});
                                                sQLiteDatabaseZzh3.delete("event_filters", str7, new String[]{str, String.valueOf(iZza)});
                                                str6 = str7;
                                                it2 = it;
                                                break;
                                            }
                                        } else {
                                            this.zzs.zzay().zzk().zzd("Event filter had no event name. Audience definition ignored. appId, audienceId, filterId", zzej.zzn(str), Integer.valueOf(iZza), String.valueOf(zzejVar.zzp() ? Integer.valueOf(zzejVar.zzb()) : null));
                                            it = it2;
                                        }
                                        zzW();
                                        zzg();
                                        Preconditions.checkNotEmpty(str);
                                        SQLiteDatabase sQLiteDatabaseZzh4 = zzh();
                                        String str8 = str6;
                                        sQLiteDatabaseZzh4.delete("property_filters", str8, new String[]{str, String.valueOf(iZza)});
                                        sQLiteDatabaseZzh4.delete("event_filters", str8, new String[]{str, String.valueOf(iZza)});
                                        str6 = str8;
                                        break;
                                    }
                                    it2 = it;
                                    break;
                                }
                                if (!((com.google.android.gms.internal.measurement.zzes) it4.next()).zzj()) {
                                    this.zzs.zzay().zzk().zzc("Property filter with no ID. Audience definition ignored. appId, audienceId", zzej.zzn(str), Integer.valueOf(iZza));
                                    break;
                                }
                            }
                        }
                    }
                } else {
                    this.zzs.zzay().zzk().zzb("Audience with no ID. appId", zzej.zzn(str));
                }
            }
            ArrayList arrayList = new ArrayList();
            Iterator it8 = list.iterator();
            while (it8.hasNext()) {
                com.google.android.gms.internal.measurement.zzeh zzehVar2 = (com.google.android.gms.internal.measurement.zzeh) it8.next();
                arrayList.add(zzehVar2.zzk() ? Integer.valueOf(zzehVar2.zza()) : null);
            }
            Preconditions.checkNotEmpty(str);
            zzW();
            zzg();
            SQLiteDatabase sQLiteDatabaseZzh5 = zzh();
            try {
                long jZzZ = zzZ("select count(1) from audience_filter_values where app_id=?", new String[]{str});
                int iMax = Math.max(0, Math.min(2000, this.zzs.zzf().zze(str, zzdw.zzE)));
                if (jZzZ > iMax) {
                    ArrayList arrayList2 = new ArrayList();
                    int i5 = 0;
                    while (true) {
                        if (i5 >= arrayList.size()) {
                            String strJoin = TextUtils.join(",", arrayList2);
                            StringBuilder sb = new StringBuilder(String.valueOf(strJoin).length() + 2);
                            sb.append("(");
                            sb.append(strJoin);
                            sb.append(")");
                            String string = sb.toString();
                            StringBuilder sb2 = new StringBuilder(string.length() + 140);
                            sb2.append("audience_id in (select audience_id from audience_filter_values where app_id=? and audience_id not in ");
                            sb2.append(string);
                            sb2.append(" order by rowid desc limit -1 offset ?)");
                            sQLiteDatabaseZzh5.delete("audience_filter_values", sb2.toString(), new String[]{str, Integer.toString(iMax)});
                            break;
                        }
                        Integer num = (Integer) arrayList.get(i5);
                        if (num == null) {
                            break;
                        }
                        arrayList2.add(Integer.toString(num.intValue()));
                        i5++;
                    }
                }
            } catch (SQLiteException e3) {
                this.zzs.zzay().zzd().zzc("Database error querying filters. appId", zzej.zzn(str), e3);
            }
            sQLiteDatabaseZzh.setTransactionSuccessful();
            sQLiteDatabaseZzh.endTransaction();
        } catch (Throwable th) {
            sQLiteDatabaseZzh.endTransaction();
            throw th;
        }
    }

    public final void zzC() {
        zzW();
        zzh().setTransactionSuccessful();
    }

    public final void zzD(zzg zzgVar) {
        Preconditions.checkNotNull(zzgVar);
        zzg();
        zzW();
        String strZzt = zzgVar.zzt();
        Preconditions.checkNotNull(strZzt);
        ContentValues contentValues = new ContentValues();
        contentValues.put("app_id", strZzt);
        contentValues.put("app_instance_id", zzgVar.zzu());
        contentValues.put("gmp_app_id", zzgVar.zzy());
        contentValues.put("resettable_device_id_hash", zzgVar.zzA());
        contentValues.put("last_bundle_index", Long.valueOf(zzgVar.zzo()));
        contentValues.put("last_bundle_start_timestamp", Long.valueOf(zzgVar.zzp()));
        contentValues.put("last_bundle_end_timestamp", Long.valueOf(zzgVar.zzn()));
        contentValues.put("app_version", zzgVar.zzw());
        contentValues.put("app_store", zzgVar.zzv());
        contentValues.put("gmp_version", Long.valueOf(zzgVar.zzm()));
        contentValues.put("dev_cert_hash", Long.valueOf(zzgVar.zzj()));
        contentValues.put("measurement_enabled", Boolean.valueOf(zzgVar.zzah()));
        contentValues.put("day", Long.valueOf(zzgVar.zzi()));
        contentValues.put("daily_public_events_count", Long.valueOf(zzgVar.zzg()));
        contentValues.put("daily_events_count", Long.valueOf(zzgVar.zzf()));
        contentValues.put("daily_conversions_count", Long.valueOf(zzgVar.zzd()));
        contentValues.put("config_fetched_time", Long.valueOf(zzgVar.zzc()));
        contentValues.put("failed_config_fetch_time", Long.valueOf(zzgVar.zzl()));
        contentValues.put("app_version_int", Long.valueOf(zzgVar.zzb()));
        contentValues.put("firebase_instance_id", zzgVar.zzx());
        contentValues.put("daily_error_events_count", Long.valueOf(zzgVar.zze()));
        contentValues.put("daily_realtime_events_count", Long.valueOf(zzgVar.zzh()));
        contentValues.put("health_monitor_sample", zzgVar.zzz());
        contentValues.put("android_id", Long.valueOf(zzgVar.zza()));
        contentValues.put("adid_reporting_enabled", Boolean.valueOf(zzgVar.zzag()));
        contentValues.put("admob_app_id", zzgVar.zzr());
        contentValues.put("dynamite_version", Long.valueOf(zzgVar.zzk()));
        List listZzB = zzgVar.zzB();
        if (listZzB != null) {
            if (listZzB.isEmpty()) {
                this.zzs.zzay().zzk().zzb("Safelisted events should not be an empty list. appId", strZzt);
            } else {
                contentValues.put("safelisted_events", TextUtils.join(",", listZzB));
            }
        }
        zznv.zzc();
        if (this.zzs.zzf().zzs(null, zzdw.zzay) && !contentValues.containsKey("safelisted_events")) {
            contentValues.put("safelisted_events", (String) null);
        }
        try {
            SQLiteDatabase sQLiteDatabaseZzh = zzh();
            if (sQLiteDatabaseZzh.update("apps", contentValues, "app_id = ?", new String[]{strZzt}) == 0 && sQLiteDatabaseZzh.insertWithOnConflict("apps", null, contentValues, 5) == -1) {
                this.zzs.zzay().zzd().zzb("Failed to insert/update app (got -1). appId", zzej.zzn(strZzt));
            }
        } catch (SQLiteException e) {
            this.zzs.zzay().zzd().zzc("Error storing app. appId", zzej.zzn(strZzt), e);
        }
    }

    public final void zzE(zzaq zzaqVar) {
        Preconditions.checkNotNull(zzaqVar);
        zzg();
        zzW();
        ContentValues contentValues = new ContentValues();
        contentValues.put("app_id", zzaqVar.zza);
        contentValues.put(AppMeasurementSdk.ConditionalUserProperty.NAME, zzaqVar.zzb);
        contentValues.put("lifetime_count", Long.valueOf(zzaqVar.zzc));
        contentValues.put("current_bundle_count", Long.valueOf(zzaqVar.zzd));
        contentValues.put("last_fire_timestamp", Long.valueOf(zzaqVar.zzf));
        contentValues.put("last_bundled_timestamp", Long.valueOf(zzaqVar.zzg));
        contentValues.put("last_bundled_day", zzaqVar.zzh);
        contentValues.put("last_sampled_complex_event_id", zzaqVar.zzi);
        contentValues.put("last_sampling_rate", zzaqVar.zzj);
        contentValues.put("current_session_count", Long.valueOf(zzaqVar.zze));
        Boolean bool = zzaqVar.zzk;
        contentValues.put("last_exempt_from_sampling", (bool == null || !bool.booleanValue()) ? null : 1L);
        try {
            if (zzh().insertWithOnConflict("events", null, contentValues, 5) == -1) {
                this.zzs.zzay().zzd().zzb("Failed to insert/update event aggregates (got -1). appId", zzej.zzn(zzaqVar.zza));
            }
        } catch (SQLiteException e) {
            this.zzs.zzay().zzd().zzc("Error storing event aggregates. appId", zzej.zzn(zzaqVar.zza), e);
        }
    }

    public final boolean zzF() {
        return zzZ("select count(1) > 0 from raw_events", null) != 0;
    }

    public final boolean zzG() {
        return zzZ("select count(1) > 0 from queue where has_realtime = 1", null) != 0;
    }

    public final boolean zzH() {
        return zzZ("select count(1) > 0 from raw_events where realtime = 1", null) != 0;
    }

    protected final boolean zzI() {
        Context contextZzau = this.zzs.zzau();
        this.zzs.zzf();
        return contextZzau.getDatabasePath("google_app_measurement.db").exists();
    }

    public final boolean zzJ(String str, Long l, long j, com.google.android.gms.internal.measurement.zzfo zzfoVar) {
        zzg();
        zzW();
        Preconditions.checkNotNull(zzfoVar);
        Preconditions.checkNotEmpty(str);
        Preconditions.checkNotNull(l);
        byte[] bArrZzbq = zzfoVar.zzbq();
        this.zzs.zzay().zzj().zzc("Saving complex main event, appId, data size", this.zzs.zzj().zzd(str), Integer.valueOf(bArrZzbq.length));
        ContentValues contentValues = new ContentValues();
        contentValues.put("app_id", str);
        contentValues.put("event_id", l);
        contentValues.put("children_to_process", Long.valueOf(j));
        contentValues.put("main_event", bArrZzbq);
        try {
            if (zzh().insertWithOnConflict("main_event_params", null, contentValues, 5) != -1) {
                return true;
            }
            this.zzs.zzay().zzd().zzb("Failed to insert complex main event (got -1). appId", zzej.zzn(str));
            return false;
        } catch (SQLiteException e) {
            this.zzs.zzay().zzd().zzc("Error storing complex main event. appId", zzej.zzn(str), e);
            return false;
        }
    }

    public final boolean zzK(zzab zzabVar) {
        Preconditions.checkNotNull(zzabVar);
        zzg();
        zzW();
        String str = zzabVar.zza;
        Preconditions.checkNotNull(str);
        if (zzp(str, zzabVar.zzc.zzb) == null) {
            long jZzZ = zzZ("SELECT COUNT(1) FROM conditional_properties WHERE app_id=?", new String[]{str});
            this.zzs.zzf();
            if (jZzZ >= 1000) {
                return false;
            }
        }
        ContentValues contentValues = new ContentValues();
        contentValues.put("app_id", str);
        contentValues.put("origin", zzabVar.zzb);
        contentValues.put(AppMeasurementSdk.ConditionalUserProperty.NAME, zzabVar.zzc.zzb);
        zzV(contentValues, "value", Preconditions.checkNotNull(zzabVar.zzc.zza()));
        contentValues.put(AppMeasurementSdk.ConditionalUserProperty.ACTIVE, Boolean.valueOf(zzabVar.zze));
        contentValues.put(AppMeasurementSdk.ConditionalUserProperty.TRIGGER_EVENT_NAME, zzabVar.zzf);
        contentValues.put(AppMeasurementSdk.ConditionalUserProperty.TRIGGER_TIMEOUT, Long.valueOf(zzabVar.zzh));
        contentValues.put("timed_out_event", this.zzs.zzv().zzan(zzabVar.zzg));
        contentValues.put(AppMeasurementSdk.ConditionalUserProperty.CREATION_TIMESTAMP, Long.valueOf(zzabVar.zzd));
        contentValues.put("triggered_event", this.zzs.zzv().zzan(zzabVar.zzi));
        contentValues.put(AppMeasurementSdk.ConditionalUserProperty.TRIGGERED_TIMESTAMP, Long.valueOf(zzabVar.zzc.zzc));
        contentValues.put(AppMeasurementSdk.ConditionalUserProperty.TIME_TO_LIVE, Long.valueOf(zzabVar.zzj));
        contentValues.put("expired_event", this.zzs.zzv().zzan(zzabVar.zzk));
        try {
            if (zzh().insertWithOnConflict("conditional_properties", null, contentValues, 5) == -1) {
                this.zzs.zzay().zzd().zzb("Failed to insert/update conditional user property (got -1)", zzej.zzn(str));
            }
        } catch (SQLiteException e) {
            this.zzs.zzay().zzd().zzc("Error storing conditional user property", zzej.zzn(str), e);
        }
        return true;
    }

    public final boolean zzL(zzkw zzkwVar) {
        Preconditions.checkNotNull(zzkwVar);
        zzg();
        zzW();
        if (zzp(zzkwVar.zza, zzkwVar.zzc) == null) {
            if (zzky.zzah(zzkwVar.zzc)) {
                if (zzZ("select count(1) from user_attributes where app_id=? and name not like '!_%' escape '!'", new String[]{zzkwVar.zza}) >= this.zzs.zzf().zzf(zzkwVar.zza, zzdw.zzF, 25, 100)) {
                    return false;
                }
            } else if (!"_npa".equals(zzkwVar.zzc)) {
                long jZzZ = zzZ("select count(1) from user_attributes where app_id=? and origin=? AND name like '!_%' escape '!'", new String[]{zzkwVar.zza, zzkwVar.zzb});
                this.zzs.zzf();
                if (jZzZ >= 25) {
                    return false;
                }
            }
        }
        ContentValues contentValues = new ContentValues();
        contentValues.put("app_id", zzkwVar.zza);
        contentValues.put("origin", zzkwVar.zzb);
        contentValues.put(AppMeasurementSdk.ConditionalUserProperty.NAME, zzkwVar.zzc);
        contentValues.put("set_timestamp", Long.valueOf(zzkwVar.zzd));
        zzV(contentValues, "value", zzkwVar.zze);
        try {
            if (zzh().insertWithOnConflict("user_attributes", null, contentValues, 5) == -1) {
                this.zzs.zzay().zzd().zzb("Failed to insert/update user property (got -1). appId", zzej.zzn(zzkwVar.zza));
            }
        } catch (SQLiteException e) {
            this.zzs.zzay().zzd().zzc("Error storing user property. appId", zzej.zzn(zzkwVar.zza), e);
        }
        return true;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Not initialized variable reg: 4, insn: 0x0249: MOVE (r3 I:??[OBJECT, ARRAY]) = (r4 I:??[OBJECT, ARRAY]), block:B:105:0x0249 */
    /* JADX WARN: Type inference failed for: r4v0 */
    /* JADX WARN: Type inference failed for: r4v12 */
    /* JADX WARN: Type inference failed for: r4v15 */
    /* JADX WARN: Type inference failed for: r4v2, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r4v3, types: [boolean] */
    public final void zzU(String str, long j, long j2, zzkq zzkqVar) throws Throwable {
        ?? IsEmpty;
        Cursor cursor;
        String str2;
        Cursor cursorRawQuery;
        String string;
        int i;
        String str3;
        String[] strArr;
        Preconditions.checkNotNull(zzkqVar);
        zzg();
        zzW();
        Cursor cursor2 = null;
        string = null;
        string = null;
        String string2 = null;
        try {
            try {
                SQLiteDatabase sQLiteDatabaseZzh = zzh();
                IsEmpty = TextUtils.isEmpty(null);
                try {
                    if (IsEmpty != 0) {
                        String[] strArr2 = j2 != -1 ? new String[]{String.valueOf(j2), String.valueOf(j)} : new String[]{String.valueOf(j)};
                        str2 = j2 != -1 ? "rowid <= ? and " : "";
                        StringBuilder sb = new StringBuilder(str2.length() + 148);
                        sb.append("select app_id, metadata_fingerprint from raw_events where ");
                        sb.append(str2);
                        sb.append("app_id in (select app_id from apps where config_fetched_time >= ?) order by rowid limit 1;");
                        cursorRawQuery = sQLiteDatabaseZzh.rawQuery(sb.toString(), strArr2);
                        if (!cursorRawQuery.moveToFirst()) {
                            if (cursorRawQuery != null) {
                                cursorRawQuery.close();
                                return;
                            }
                            return;
                        } else {
                            string2 = cursorRawQuery.getString(0);
                            string = cursorRawQuery.getString(1);
                            cursorRawQuery.close();
                        }
                    } else {
                        String[] strArr3 = j2 != -1 ? new String[]{null, String.valueOf(j2)} : new String[]{null};
                        str2 = j2 != -1 ? " and rowid <= ?" : "";
                        StringBuilder sb2 = new StringBuilder(str2.length() + 84);
                        sb2.append("select metadata_fingerprint from raw_events where app_id = ?");
                        sb2.append(str2);
                        sb2.append(" order by rowid limit 1;");
                        cursorRawQuery = sQLiteDatabaseZzh.rawQuery(sb2.toString(), strArr3);
                        if (!cursorRawQuery.moveToFirst()) {
                            if (cursorRawQuery != null) {
                                cursorRawQuery.close();
                                return;
                            }
                            return;
                        }
                        string = cursorRawQuery.getString(0);
                        cursorRawQuery.close();
                    }
                    Cursor cursor3 = cursorRawQuery;
                    Cursor cursor4 = string;
                    try {
                        Cursor cursorQuery = sQLiteDatabaseZzh.query("raw_events_metadata", new String[]{"metadata"}, "app_id = ? and metadata_fingerprint = ?", new String[]{string2, cursor4}, null, null, "rowid", "2");
                        try {
                            if (!cursorQuery.moveToFirst()) {
                                this.zzs.zzay().zzd().zzb("Raw event metadata record is missing. appId", zzej.zzn(string2));
                                if (cursorQuery != null) {
                                    cursorQuery.close();
                                    return;
                                }
                                return;
                            }
                            try {
                                try {
                                    com.google.android.gms.internal.measurement.zzfy zzfyVar = (com.google.android.gms.internal.measurement.zzfy) ((com.google.android.gms.internal.measurement.zzfx) zzkt.zzl(com.google.android.gms.internal.measurement.zzfy.zzu(), cursorQuery.getBlob(0))).zzay();
                                    if (cursorQuery.moveToNext()) {
                                        this.zzs.zzay().zzk().zzb("Get multiple raw event metadata records, expected one. appId", zzej.zzn(string2));
                                    }
                                    cursorQuery.close();
                                    Preconditions.checkNotNull(zzfyVar);
                                    zzkqVar.zza = zzfyVar;
                                    if (j2 != -1) {
                                        i = 1;
                                        str3 = "app_id = ? and metadata_fingerprint = ? and rowid <= ?";
                                        strArr = new String[]{string2, cursor4, String.valueOf(j2)};
                                    } else {
                                        i = 1;
                                        str3 = "app_id = ? and metadata_fingerprint = ?";
                                        strArr = new String[]{string2, cursor4};
                                    }
                                    String[] strArr4 = new String[4];
                                    strArr4[0] = "rowid";
                                    strArr4[i] = AppMeasurementSdk.ConditionalUserProperty.NAME;
                                    strArr4[2] = "timestamp";
                                    strArr4[3] = Constants.ScionAnalytics.MessageType.DATA_MESSAGE;
                                    Cursor cursorQuery2 = sQLiteDatabaseZzh.query("raw_events", strArr4, str3, strArr, null, null, "rowid", null);
                                    if (!cursorQuery2.moveToFirst()) {
                                        this.zzs.zzay().zzk().zzb("Raw event data disappeared while in transaction. appId", zzej.zzn(string2));
                                        if (cursorQuery2 != null) {
                                            cursorQuery2.close();
                                            return;
                                        }
                                        return;
                                    }
                                    do {
                                        long j3 = cursorQuery2.getLong(0);
                                        try {
                                            com.google.android.gms.internal.measurement.zzfn zzfnVar = (com.google.android.gms.internal.measurement.zzfn) zzkt.zzl(com.google.android.gms.internal.measurement.zzfo.zze(), cursorQuery2.getBlob(3));
                                            zzfnVar.zzi(cursorQuery2.getString(i));
                                            zzfnVar.zzm(cursorQuery2.getLong(2));
                                            if (!zzkqVar.zza(j3, (com.google.android.gms.internal.measurement.zzfo) zzfnVar.zzay())) {
                                                if (cursorQuery2 != null) {
                                                    cursorQuery2.close();
                                                    return;
                                                }
                                                return;
                                            }
                                        } catch (IOException e) {
                                            this.zzs.zzay().zzd().zzc("Data loss. Failed to merge raw event. appId", zzej.zzn(string2), e);
                                        }
                                    } while (cursorQuery2.moveToNext());
                                    if (cursorQuery2 != null) {
                                        cursorQuery2.close();
                                    }
                                } catch (IOException e2) {
                                    this.zzs.zzay().zzd().zzc("Data loss. Failed to merge raw event metadata. appId", zzej.zzn(string2), e2);
                                    if (cursorQuery != null) {
                                        cursorQuery.close();
                                    }
                                }
                            } catch (SQLiteException e3) {
                                e = e3;
                                IsEmpty = cursor4;
                                this.zzs.zzay().zzd().zzc("Data loss. Error selecting raw event. appId", zzej.zzn(string2), e);
                                if (IsEmpty != 0) {
                                    IsEmpty.close();
                                }
                            } catch (Throwable th) {
                                th = th;
                                cursor2 = cursor4;
                                if (cursor2 != null) {
                                    cursor2.close();
                                }
                                throw th;
                            }
                        } catch (SQLiteException e4) {
                            e = e4;
                            cursor4 = cursorQuery;
                        } catch (Throwable th2) {
                            th = th2;
                            cursor4 = cursorQuery;
                        }
                    } catch (SQLiteException e5) {
                        e = e5;
                        IsEmpty = cursor3;
                    } catch (Throwable th3) {
                        th = th3;
                        cursor2 = cursor3;
                    }
                } catch (SQLiteException e6) {
                    e = e6;
                }
            } catch (Throwable th4) {
                th = th4;
                cursor2 = cursor;
            }
        } catch (SQLiteException e7) {
            e = e7;
            IsEmpty = 0;
        } catch (Throwable th5) {
            th = th5;
        }
    }

    public final int zza(String str, String str2) {
        Preconditions.checkNotEmpty(str);
        Preconditions.checkNotEmpty(str2);
        zzg();
        zzW();
        try {
            return zzh().delete("conditional_properties", "app_id=? and name=?", new String[]{str, str2});
        } catch (SQLiteException e) {
            this.zzs.zzay().zzd().zzd("Error deleting conditional property", zzej.zzn(str), this.zzs.zzj().zzf(str2), e);
            return 0;
        }
    }

    @Override // com.google.android.gms.measurement.internal.zzkh
    protected final boolean zzb() {
        return false;
    }

    protected final long zzc(String str, String str2) {
        Preconditions.checkNotEmpty(str);
        Preconditions.checkNotEmpty("first_open_count");
        zzg();
        zzW();
        SQLiteDatabase sQLiteDatabaseZzh = zzh();
        sQLiteDatabaseZzh.beginTransaction();
        long j = 0;
        try {
            try {
                StringBuilder sb = new StringBuilder(48);
                sb.append("select first_open_count from app2 where app_id=?");
                long jZzaa = zzaa(sb.toString(), new String[]{str}, -1L);
                if (jZzaa == -1) {
                    ContentValues contentValues = new ContentValues();
                    contentValues.put("app_id", str);
                    contentValues.put("first_open_count", (Integer) 0);
                    contentValues.put("previous_install_count", (Integer) 0);
                    if (sQLiteDatabaseZzh.insertWithOnConflict("app2", null, contentValues, 5) == -1) {
                        this.zzs.zzay().zzd().zzc("Failed to insert column (got -1). appId", zzej.zzn(str), "first_open_count");
                        return -1L;
                    }
                    jZzaa = 0;
                    this.zzs.zzay().zzd().zzd("Error inserting column. appId", zzej.zzn(str), "first_open_count", e);
                    return j;
                }
                try {
                    ContentValues contentValues2 = new ContentValues();
                    contentValues2.put("app_id", str);
                    contentValues2.put("first_open_count", Long.valueOf(1 + jZzaa));
                    if (sQLiteDatabaseZzh.update("app2", contentValues2, "app_id = ?", new String[]{str}) == 0) {
                        this.zzs.zzay().zzd().zzc("Failed to update column (got 0). appId", zzej.zzn(str), "first_open_count");
                        return -1L;
                    }
                    sQLiteDatabaseZzh.setTransactionSuccessful();
                    return jZzaa;
                } catch (SQLiteException e) {
                    e = e;
                    j = jZzaa;
                }
            } finally {
                sQLiteDatabaseZzh.endTransaction();
            }
        } catch (SQLiteException e2) {
            e = e2;
        }
    }

    public final long zzd() {
        return zzaa("select max(bundle_end_timestamp) from queue", null, 0L);
    }

    public final long zze() {
        return zzaa("select max(timestamp) from raw_events", null, 0L);
    }

    public final long zzf(String str) {
        Preconditions.checkNotEmpty(str);
        return zzaa("select count(1) from events where app_id=? and name not like '!_%' escape '!'", new String[]{str}, 0L);
    }

    final SQLiteDatabase zzh() {
        zzg();
        try {
            return this.zzj.getWritableDatabase();
        } catch (SQLiteException e) {
            this.zzs.zzay().zzk().zzb("Error opening database", e);
            throw e;
        }
    }

    /* JADX WARN: Code duplicated, block: B:49:0x00df  */
    /* JADX WARN: Not initialized variable reg: 1, insn: 0x00dc: MOVE (r0 I:??[OBJECT, ARRAY]) = (r1 I:??[OBJECT, ARRAY]), block:B:47:0x00dc */
    public final Bundle zzi(String str) throws Throwable {
        Cursor cursorRawQuery;
        Cursor cursor;
        zzg();
        zzW();
        Cursor cursor2 = null;
        try {
            try {
                cursorRawQuery = zzh().rawQuery("select parameters from default_event_params where app_id=?", new String[]{str});
                try {
                    if (!cursorRawQuery.moveToFirst()) {
                        this.zzs.zzay().zzj().zza("Default event parameters not found");
                        if (cursorRawQuery != null) {
                            cursorRawQuery.close();
                        }
                        return null;
                    }
                    try {
                        com.google.android.gms.internal.measurement.zzfo zzfoVar = (com.google.android.gms.internal.measurement.zzfo) ((com.google.android.gms.internal.measurement.zzfn) zzkt.zzl(com.google.android.gms.internal.measurement.zzfo.zze(), cursorRawQuery.getBlob(0))).zzay();
                        this.zzf.zzu();
                        List<com.google.android.gms.internal.measurement.zzfs> listZzi = zzfoVar.zzi();
                        Bundle bundle = new Bundle();
                        for (com.google.android.gms.internal.measurement.zzfs zzfsVar : listZzi) {
                            String strZzg = zzfsVar.zzg();
                            if (zzfsVar.zzu()) {
                                bundle.putDouble(strZzg, zzfsVar.zza());
                            } else if (zzfsVar.zzv()) {
                                bundle.putFloat(strZzg, zzfsVar.zzb());
                            } else if (zzfsVar.zzy()) {
                                bundle.putString(strZzg, zzfsVar.zzh());
                            } else if (zzfsVar.zzw()) {
                                bundle.putLong(strZzg, zzfsVar.zzd());
                            }
                        }
                        if (cursorRawQuery != null) {
                            cursorRawQuery.close();
                        }
                        return bundle;
                    } catch (IOException e) {
                        this.zzs.zzay().zzd().zzc("Failed to retrieve default event parameters. appId", zzej.zzn(str), e);
                        if (cursorRawQuery != null) {
                            cursorRawQuery.close();
                        }
                        return null;
                    }
                } catch (SQLiteException e2) {
                    e = e2;
                    this.zzs.zzay().zzd().zzb("Error selecting default event parameters", e);
                    if (cursorRawQuery != null) {
                        cursorRawQuery.close();
                    }
                    return null;
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
            cursorRawQuery = null;
        } catch (Throwable th2) {
            th = th2;
            if (cursor2 != null) {
                cursor2.close();
            }
            throw th;
        }
    }

    public final zzg zzj(String str) {
        Cursor cursorQuery;
        Preconditions.checkNotEmpty(str);
        zzg();
        zzW();
        Cursor cursor = null;
        try {
            cursorQuery = zzh().query("apps", new String[]{"app_instance_id", "gmp_app_id", "resettable_device_id_hash", "last_bundle_index", "last_bundle_start_timestamp", "last_bundle_end_timestamp", "app_version", "app_store", "gmp_version", "dev_cert_hash", "measurement_enabled", "day", "daily_public_events_count", "daily_events_count", "daily_conversions_count", "config_fetched_time", "failed_config_fetch_time", "app_version_int", "firebase_instance_id", "daily_error_events_count", "daily_realtime_events_count", "health_monitor_sample", "android_id", "adid_reporting_enabled", "admob_app_id", "dynamite_version", "safelisted_events", "ga_app_id"}, "app_id=?", new String[]{str}, null, null, null);
            try {
                try {
                    if (!cursorQuery.moveToFirst()) {
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                        return null;
                    }
                    zzg zzgVar = new zzg(this.zzf.zzq(), str);
                    zzgVar.zzH(cursorQuery.getString(0));
                    zzgVar.zzW(cursorQuery.getString(1));
                    zzgVar.zzae(cursorQuery.getString(2));
                    zzgVar.zzaa(cursorQuery.getLong(3));
                    zzgVar.zzab(cursorQuery.getLong(4));
                    zzgVar.zzZ(cursorQuery.getLong(5));
                    zzgVar.zzJ(cursorQuery.getString(6));
                    zzgVar.zzI(cursorQuery.getString(7));
                    zzgVar.zzX(cursorQuery.getLong(8));
                    zzgVar.zzS(cursorQuery.getLong(9));
                    zzgVar.zzac(cursorQuery.isNull(10) || cursorQuery.getInt(10) != 0);
                    zzgVar.zzR(cursorQuery.getLong(11));
                    zzgVar.zzP(cursorQuery.getLong(12));
                    zzgVar.zzO(cursorQuery.getLong(13));
                    zzgVar.zzM(cursorQuery.getLong(14));
                    zzgVar.zzL(cursorQuery.getLong(15));
                    zzgVar.zzU(cursorQuery.getLong(16));
                    zzgVar.zzK(cursorQuery.isNull(17) ? -2147483648L : cursorQuery.getInt(17));
                    zzgVar.zzV(cursorQuery.getString(18));
                    zzgVar.zzN(cursorQuery.getLong(19));
                    zzgVar.zzQ(cursorQuery.getLong(20));
                    zzgVar.zzY(cursorQuery.getString(21));
                    if (!this.zzs.zzf().zzs(null, zzdw.zzah)) {
                        zzgVar.zzG(cursorQuery.isNull(22) ? 0L : cursorQuery.getLong(22));
                    }
                    zzgVar.zzF(cursorQuery.isNull(23) || cursorQuery.getInt(23) != 0);
                    zzgVar.zzE(cursorQuery.getString(24));
                    zzgVar.zzT(cursorQuery.isNull(25) ? 0L : cursorQuery.getLong(25));
                    if (!cursorQuery.isNull(26)) {
                        zzgVar.zzaf(Arrays.asList(cursorQuery.getString(26).split(",", -1)));
                    }
                    zzgVar.zzC();
                    if (cursorQuery.moveToNext()) {
                        this.zzs.zzay().zzd().zzb("Got multiple records for app, expected one. appId", zzej.zzn(str));
                    }
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return zzgVar;
                } catch (SQLiteException e) {
                    e = e;
                    this.zzs.zzay().zzd().zzc("Error querying app. appId", zzej.zzn(str), e);
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return null;
                }
            } catch (Throwable th) {
                th = th;
                cursor = cursorQuery;
            }
        } catch (SQLiteException e2) {
            e = e2;
            cursorQuery = null;
        } catch (Throwable th2) {
            th = th2;
        }
        th = th;
        cursor = cursorQuery;
        if (cursor != null) {
            cursor.close();
        }
        throw th;
    }

    public final zzab zzk(String str, String str2) throws Throwable {
        Cursor cursorQuery;
        Preconditions.checkNotEmpty(str);
        Preconditions.checkNotEmpty(str2);
        zzg();
        zzW();
        Cursor cursor = null;
        try {
            cursorQuery = zzh().query("conditional_properties", new String[]{"origin", "value", AppMeasurementSdk.ConditionalUserProperty.ACTIVE, AppMeasurementSdk.ConditionalUserProperty.TRIGGER_EVENT_NAME, AppMeasurementSdk.ConditionalUserProperty.TRIGGER_TIMEOUT, "timed_out_event", AppMeasurementSdk.ConditionalUserProperty.CREATION_TIMESTAMP, "triggered_event", AppMeasurementSdk.ConditionalUserProperty.TRIGGERED_TIMESTAMP, AppMeasurementSdk.ConditionalUserProperty.TIME_TO_LIVE, "expired_event"}, "app_id=? and name=?", new String[]{str, str2}, null, null, null);
            try {
                try {
                    if (!cursorQuery.moveToFirst()) {
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                        return null;
                    }
                    String string = cursorQuery.getString(0);
                    if (string == null) {
                        string = "";
                    }
                    String str3 = string;
                    Object objZzq = zzq(cursorQuery, 1);
                    boolean z = cursorQuery.getInt(2) != 0;
                    zzab zzabVar = new zzab(str, str3, new zzku(str2, cursorQuery.getLong(8), objZzq, str3), cursorQuery.getLong(6), z, cursorQuery.getString(3), (zzau) this.zzf.zzu().zzh(cursorQuery.getBlob(5), zzau.CREATOR), cursorQuery.getLong(4), (zzau) this.zzf.zzu().zzh(cursorQuery.getBlob(7), zzau.CREATOR), cursorQuery.getLong(9), (zzau) this.zzf.zzu().zzh(cursorQuery.getBlob(10), zzau.CREATOR));
                    if (cursorQuery.moveToNext()) {
                        this.zzs.zzay().zzd().zzc("Got multiple records for conditional property, expected one", zzej.zzn(str), this.zzs.zzj().zzf(str2));
                    }
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return zzabVar;
                } catch (SQLiteException e) {
                    e = e;
                    this.zzs.zzay().zzd().zzd("Error querying conditional property", zzej.zzn(str), this.zzs.zzj().zzf(str2), e);
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return null;
                }
            } catch (Throwable th) {
                th = th;
                cursor = cursorQuery;
            }
        } catch (SQLiteException e2) {
            e = e2;
            cursorQuery = null;
        } catch (Throwable th2) {
            th = th2;
        }
        th = th;
        cursor = cursorQuery;
        if (cursor != null) {
            cursor.close();
        }
        throw th;
    }

    public final zzai zzl(long j, String str, boolean z, boolean z2, boolean z3, boolean z4, boolean z5) {
        return zzm(j, str, 1L, false, false, z3, false, z5);
    }

    /* JADX WARN: Code duplicated, block: B:40:0x0133  */
    public final zzai zzm(long j, String str, long j2, boolean z, boolean z2, boolean z3, boolean z4, boolean z5) throws Throwable {
        Cursor cursor;
        Cursor cursorQuery;
        Preconditions.checkNotEmpty(str);
        zzg();
        zzW();
        String[] strArr = {str};
        zzai zzaiVar = new zzai();
        try {
            try {
                SQLiteDatabase sQLiteDatabaseZzh = zzh();
                cursorQuery = sQLiteDatabaseZzh.query("apps", new String[]{"day", "daily_events_count", "daily_public_events_count", "daily_conversions_count", "daily_error_events_count", "daily_realtime_events_count"}, "app_id=?", new String[]{str}, null, null, null);
                try {
                    if (!cursorQuery.moveToFirst()) {
                        this.zzs.zzay().zzk().zzb("Not updating daily counts, app is not known. appId", zzej.zzn(str));
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                        return zzaiVar;
                    }
                    if (cursorQuery.getLong(0) == j) {
                        zzaiVar.zzb = cursorQuery.getLong(1);
                        zzaiVar.zza = cursorQuery.getLong(2);
                        zzaiVar.zzc = cursorQuery.getLong(3);
                        zzaiVar.zzd = cursorQuery.getLong(4);
                        zzaiVar.zze = cursorQuery.getLong(5);
                    }
                    if (z) {
                        zzaiVar.zzb += j2;
                    }
                    if (z2) {
                        zzaiVar.zza += j2;
                    }
                    if (z3) {
                        zzaiVar.zzc += j2;
                    }
                    if (z4) {
                        zzaiVar.zzd += j2;
                    }
                    if (z5) {
                        zzaiVar.zze += j2;
                    }
                    ContentValues contentValues = new ContentValues();
                    contentValues.put("day", Long.valueOf(j));
                    contentValues.put("daily_public_events_count", Long.valueOf(zzaiVar.zza));
                    contentValues.put("daily_events_count", Long.valueOf(zzaiVar.zzb));
                    contentValues.put("daily_conversions_count", Long.valueOf(zzaiVar.zzc));
                    contentValues.put("daily_error_events_count", Long.valueOf(zzaiVar.zzd));
                    contentValues.put("daily_realtime_events_count", Long.valueOf(zzaiVar.zze));
                    sQLiteDatabaseZzh.update("apps", contentValues, "app_id=?", strArr);
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return zzaiVar;
                } catch (SQLiteException e) {
                    e = e;
                    this.zzs.zzay().zzd().zzc("Error updating daily counts. appId", zzej.zzn(str), e);
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return zzaiVar;
                }
            } catch (Throwable th) {
                th = th;
                if (0 != 0) {
                    cursor.close();
                }
                throw th;
            }
        } catch (SQLiteException e2) {
            e = e2;
            cursorQuery = null;
        } catch (Throwable th2) {
            th = th2;
            cursor = null;
            if (0 != 0) {
                cursor.close();
            }
            throw th;
        }
    }

    /* JADX WARN: Code duplicated, block: B:65:0x0172  */
    public final zzaq zzn(String str, String str2) {
        Cursor cursor;
        Cursor cursor2;
        Boolean boolValueOf;
        Preconditions.checkNotEmpty(str);
        Preconditions.checkNotEmpty(str2);
        zzg();
        zzW();
        Cursor cursor3 = null;
        try {
            Cursor cursorQuery = zzh().query("events", (String[]) new ArrayList(Arrays.asList("lifetime_count", "current_bundle_count", "last_fire_timestamp", "last_bundled_timestamp", "last_bundled_day", "last_sampled_complex_event_id", "last_sampling_rate", "last_exempt_from_sampling", "current_session_count")).toArray(new String[0]), "app_id=? and name=?", new String[]{str, str2}, null, null, null);
            try {
                if (!cursorQuery.moveToFirst()) {
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return null;
                }
                long j = cursorQuery.getLong(0);
                long j2 = cursorQuery.getLong(1);
                long j3 = cursorQuery.getLong(2);
                long j4 = cursorQuery.isNull(3) ? 0L : cursorQuery.getLong(3);
                Long lValueOf = cursorQuery.isNull(4) ? null : Long.valueOf(cursorQuery.getLong(4));
                Long lValueOf2 = cursorQuery.isNull(5) ? null : Long.valueOf(cursorQuery.getLong(5));
                Long lValueOf3 = cursorQuery.isNull(6) ? null : Long.valueOf(cursorQuery.getLong(6));
                if (cursorQuery.isNull(7)) {
                    boolValueOf = null;
                } else {
                    boolValueOf = Boolean.valueOf(cursorQuery.getLong(7) == 1);
                }
                cursor2 = cursorQuery;
                try {
                    zzaq zzaqVar = new zzaq(str, str2, j, j2, cursorQuery.isNull(8) ? 0L : cursorQuery.getLong(8), j3, j4, lValueOf, lValueOf2, lValueOf3, boolValueOf);
                    if (cursor2.moveToNext()) {
                        this.zzs.zzay().zzd().zzb("Got multiple records for event aggregates, expected one. appId", zzej.zzn(str));
                    }
                    if (cursor2 != null) {
                        cursor2.close();
                    }
                    return zzaqVar;
                } catch (SQLiteException e) {
                    e = e;
                } catch (Throwable th) {
                    th = th;
                    cursor3 = cursor2;
                    if (cursor3 != null) {
                        cursor3.close();
                    }
                    throw th;
                }
            } catch (SQLiteException e2) {
                e = e2;
                cursor2 = cursorQuery;
            } catch (Throwable th2) {
                th = th2;
                cursor2 = cursorQuery;
            }
            cursor = cursor2;
        } catch (SQLiteException e3) {
            e = e3;
            cursor = null;
        } catch (Throwable th3) {
            th = th3;
        }
        try {
            this.zzs.zzay().zzd().zzd("Error querying events. appId", zzej.zzn(str), this.zzs.zzj().zzd(str2), e);
            if (cursor != null) {
                cursor.close();
            }
            return null;
        } catch (Throwable th4) {
            th = th4;
            cursor3 = cursor;
            if (cursor3 != null) {
                cursor3.close();
            }
            throw th;
        }
    }

    public final zzkw zzp(String str, String str2) {
        Cursor cursorQuery;
        Preconditions.checkNotEmpty(str);
        Preconditions.checkNotEmpty(str2);
        zzg();
        zzW();
        Cursor cursor = null;
        try {
            cursorQuery = zzh().query("user_attributes", new String[]{"set_timestamp", "value", "origin"}, "app_id=? and name=?", new String[]{str, str2}, null, null, null);
            try {
                try {
                    if (!cursorQuery.moveToFirst()) {
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                        return null;
                    }
                    long j = cursorQuery.getLong(0);
                    Object objZzq = zzq(cursorQuery, 1);
                    if (objZzq == null) {
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                        return null;
                    }
                    zzkw zzkwVar = new zzkw(str, cursorQuery.getString(2), str2, j, objZzq);
                    if (cursorQuery.moveToNext()) {
                        this.zzs.zzay().zzd().zzb("Got multiple records for user property, expected one. appId", zzej.zzn(str));
                    }
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return zzkwVar;
                } catch (SQLiteException e) {
                    e = e;
                    this.zzs.zzay().zzd().zzd("Error querying user property. appId", zzej.zzn(str), this.zzs.zzj().zzf(str2), e);
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return null;
                }
            } catch (Throwable th) {
                th = th;
                cursor = cursorQuery;
            }
        } catch (SQLiteException e2) {
            e = e2;
            cursorQuery = null;
        } catch (Throwable th2) {
            th = th2;
        }
        th = th;
        cursor = cursorQuery;
        if (cursor != null) {
            cursor.close();
        }
        throw th;
    }

    final Object zzq(Cursor cursor, int i) {
        int type = cursor.getType(i);
        if (type == 0) {
            this.zzs.zzay().zzd().zza("Loaded invalid null value from database");
            return null;
        }
        if (type == 1) {
            return Long.valueOf(cursor.getLong(i));
        }
        if (type == 2) {
            return Double.valueOf(cursor.getDouble(i));
        }
        if (type == 3) {
            return cursor.getString(i);
        }
        if (type != 4) {
            this.zzs.zzay().zzd().zzb("Loaded invalid unknown value type, ignoring it", Integer.valueOf(type));
            return null;
        }
        this.zzs.zzay().zzd().zza("Loaded invalid blob type value, ignoring it");
        return null;
    }

    public final String zzr() throws Throwable {
        SQLiteException e;
        Cursor cursorRawQuery;
        Cursor cursor = null;
        try {
            cursorRawQuery = zzh().rawQuery("select app_id from queue order by has_realtime desc, rowid asc limit 1;", null);
            try {
                try {
                    if (!cursorRawQuery.moveToFirst()) {
                        if (cursorRawQuery != null) {
                            cursorRawQuery.close();
                        }
                        return null;
                    }
                    String string = cursorRawQuery.getString(0);
                    if (cursorRawQuery != null) {
                        cursorRawQuery.close();
                    }
                    return string;
                } catch (SQLiteException e2) {
                    e = e2;
                    this.zzs.zzay().zzd().zzb("Database error getting next bundle app id", e);
                    if (cursorRawQuery != null) {
                        cursorRawQuery.close();
                    }
                    return null;
                }
            } catch (Throwable th) {
                th = th;
                cursor = cursorRawQuery;
            }
        } catch (SQLiteException e3) {
            e = e3;
            cursorRawQuery = null;
        } catch (Throwable th2) {
            th = th2;
        }
        th = th;
        cursor = cursorRawQuery;
        if (cursor != null) {
            cursor.close();
        }
        throw th;
    }

    public final List zzs(String str, String str2, String str3) {
        Preconditions.checkNotEmpty(str);
        zzg();
        zzW();
        ArrayList arrayList = new ArrayList(3);
        arrayList.add(str);
        StringBuilder sb = new StringBuilder("app_id=?");
        if (!TextUtils.isEmpty(str2)) {
            arrayList.add(str2);
            sb.append(" and origin=?");
        }
        if (!TextUtils.isEmpty(str3)) {
            arrayList.add(String.valueOf(str3).concat("*"));
            sb.append(" and name glob ?");
        }
        return zzt(sb.toString(), (String[]) arrayList.toArray(new String[arrayList.size()]));
    }

    /* JADX WARN: Code duplicated, block: B:36:0x0195  */
    public final List zzt(String str, String[] strArr) throws Throwable {
        Cursor cursor;
        zzg();
        zzW();
        ArrayList arrayList = new ArrayList();
        try {
            SQLiteDatabase sQLiteDatabaseZzh = zzh();
            String[] strArr2 = {"app_id", "origin", AppMeasurementSdk.ConditionalUserProperty.NAME, "value", AppMeasurementSdk.ConditionalUserProperty.ACTIVE, AppMeasurementSdk.ConditionalUserProperty.TRIGGER_EVENT_NAME, AppMeasurementSdk.ConditionalUserProperty.TRIGGER_TIMEOUT, "timed_out_event", AppMeasurementSdk.ConditionalUserProperty.CREATION_TIMESTAMP, "triggered_event", AppMeasurementSdk.ConditionalUserProperty.TRIGGERED_TIMESTAMP, AppMeasurementSdk.ConditionalUserProperty.TIME_TO_LIVE, "expired_event"};
            this.zzs.zzf();
            int i = 4;
            Cursor cursorQuery = sQLiteDatabaseZzh.query("conditional_properties", strArr2, str, strArr, null, null, "rowid", "1001");
            try {
                if (!cursorQuery.moveToFirst()) {
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return arrayList;
                }
                while (true) {
                    int size = arrayList.size();
                    this.zzs.zzf();
                    if (size >= 1000) {
                        zzeh zzehVarZzd = this.zzs.zzay().zzd();
                        this.zzs.zzf();
                        zzehVarZzd.zzb("Read more than the max allowed conditional properties, ignoring extra", 1000);
                        break;
                    }
                    String string = cursorQuery.getString(0);
                    String string2 = cursorQuery.getString(1);
                    String string3 = cursorQuery.getString(2);
                    Object objZzq = zzq(cursorQuery, 3);
                    boolean z = cursorQuery.getInt(i) != 0;
                    arrayList.add(new zzab(string, string2, new zzku(string3, cursorQuery.getLong(10), objZzq, string2), cursorQuery.getLong(8), z, cursorQuery.getString(5), (zzau) this.zzf.zzu().zzh(cursorQuery.getBlob(7), zzau.CREATOR), cursorQuery.getLong(6), (zzau) this.zzf.zzu().zzh(cursorQuery.getBlob(9), zzau.CREATOR), cursorQuery.getLong(11), (zzau) this.zzf.zzu().zzh(cursorQuery.getBlob(12), zzau.CREATOR)));
                    if (!cursorQuery.moveToNext()) {
                        break;
                    }
                    i = 4;
                }
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                return arrayList;
            } catch (SQLiteException e) {
                e = e;
                cursor = cursorQuery;
                try {
                    this.zzs.zzay().zzd().zzb("Error querying conditional user property value", e);
                    List listEmptyList = Collections.emptyList();
                    if (cursor != null) {
                        cursor.close();
                    }
                    return listEmptyList;
                } catch (Throwable th) {
                    th = th;
                    if (cursor != null) {
                        cursor.close();
                    }
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                cursor = cursorQuery;
                if (cursor != null) {
                    cursor.close();
                }
                throw th;
            }
        } catch (SQLiteException e2) {
            e = e2;
            cursor = null;
        } catch (Throwable th3) {
            th = th3;
            cursor = null;
        }
    }

    public final List zzu(String str) {
        Preconditions.checkNotEmpty(str);
        zzg();
        zzW();
        ArrayList arrayList = new ArrayList();
        Cursor cursorQuery = null;
        try {
            this.zzs.zzf();
            cursorQuery = zzh().query("user_attributes", new String[]{AppMeasurementSdk.ConditionalUserProperty.NAME, "origin", "set_timestamp", "value"}, "app_id=?", new String[]{str}, null, null, "rowid", "1000");
            if (!cursorQuery.moveToFirst()) {
                return arrayList;
            }
            do {
                String string = cursorQuery.getString(0);
                String string2 = cursorQuery.getString(1);
                if (string2 == null) {
                    string2 = "";
                }
                String str2 = string2;
                long j = cursorQuery.getLong(2);
                Object objZzq = zzq(cursorQuery, 3);
                if (objZzq == null) {
                    this.zzs.zzay().zzd().zzb("Read invalid user property value, ignoring it. appId", zzej.zzn(str));
                } else {
                    arrayList.add(new zzkw(str, str2, string, j, objZzq));
                }
            } while (cursorQuery.moveToNext());
            return arrayList;
        } catch (SQLiteException e) {
            this.zzs.zzay().zzd().zzc("Error querying user properties. appId", zzej.zzn(str), e);
            return Collections.emptyList();
        } finally {
            if (cursorQuery != null) {
                cursorQuery.close();
            }
        }
    }

    /* JADX WARN: Code duplicated, block: B:48:0x0137  */
    /* JADX WARN: Code duplicated, block: B:52:0x013e  */
    public final List zzv(String str, String str2, String str3) throws Throwable {
        Cursor cursor;
        String string;
        Preconditions.checkNotEmpty(str);
        zzg();
        zzW();
        ArrayList arrayList = new ArrayList();
        try {
            try {
                ArrayList arrayList2 = new ArrayList(3);
                try {
                    arrayList2.add(str);
                    StringBuilder sb = new StringBuilder("app_id=?");
                    if (TextUtils.isEmpty(str2)) {
                        string = str2;
                    } else {
                        string = str2;
                        try {
                            arrayList2.add(string);
                            sb.append(" and origin=?");
                        } catch (SQLiteException e) {
                            e = e;
                            cursor = null;
                            try {
                                this.zzs.zzay().zzd().zzd("(2)Error querying user properties", zzej.zzn(str), string, e);
                                List listEmptyList = Collections.emptyList();
                                if (cursor != null) {
                                    cursor.close();
                                }
                                return listEmptyList;
                            } catch (Throwable th) {
                                th = th;
                                if (cursor != null) {
                                    cursor.close();
                                }
                                throw th;
                            }
                        }
                    }
                    if (!TextUtils.isEmpty(str3)) {
                        arrayList2.add(String.valueOf(str3).concat("*"));
                        sb.append(" and name glob ?");
                    }
                    String[] strArr = (String[]) arrayList2.toArray(new String[arrayList2.size()]);
                    SQLiteDatabase sQLiteDatabaseZzh = zzh();
                    String[] strArr2 = {AppMeasurementSdk.ConditionalUserProperty.NAME, "set_timestamp", "value", "origin"};
                    String string2 = sb.toString();
                    this.zzs.zzf();
                    Cursor cursorQuery = sQLiteDatabaseZzh.query("user_attributes", strArr2, string2, strArr, null, null, "rowid", "1001");
                    try {
                        if (!cursorQuery.moveToFirst()) {
                            if (cursorQuery != null) {
                                cursorQuery.close();
                            }
                            return arrayList;
                        }
                        do {
                            int size = arrayList.size();
                            this.zzs.zzf();
                            if (size >= 1000) {
                                zzeh zzehVarZzd = this.zzs.zzay().zzd();
                                this.zzs.zzf();
                                zzehVarZzd.zzb("Read more than the max allowed user properties, ignoring excess", 1000);
                                break;
                            }
                            String string3 = cursorQuery.getString(0);
                            long j = cursorQuery.getLong(1);
                            Object objZzq = zzq(cursorQuery, 2);
                            string = cursorQuery.getString(3);
                            if (objZzq == null) {
                                this.zzs.zzay().zzd().zzd("(2)Read invalid user property value, ignoring it", zzej.zzn(str), string, str3);
                            } else {
                                arrayList.add(new zzkw(str, string, string3, j, objZzq));
                            }
                        } while (cursorQuery.moveToNext());
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                        return arrayList;
                    } catch (SQLiteException e2) {
                        e = e2;
                        cursor = cursorQuery;
                        this.zzs.zzay().zzd().zzd("(2)Error querying user properties", zzej.zzn(str), string, e);
                        List listEmptyList2 = Collections.emptyList();
                        if (cursor != null) {
                            cursor.close();
                        }
                        return listEmptyList2;
                    } catch (Throwable th2) {
                        th = th2;
                        cursor = cursorQuery;
                        if (cursor != null) {
                            cursor.close();
                        }
                        throw th;
                    }
                } catch (SQLiteException e3) {
                    e = e3;
                    string = str2;
                    cursor = null;
                    this.zzs.zzay().zzd().zzd("(2)Error querying user properties", zzej.zzn(str), string, e);
                    List listEmptyList3 = Collections.emptyList();
                    if (cursor != null) {
                        cursor.close();
                    }
                    return listEmptyList3;
                }
            } catch (SQLiteException e4) {
                e = e4;
            }
        } catch (Throwable th3) {
            th = th3;
            cursor = null;
        }
    }

    public final void zzw() {
        zzW();
        zzh().beginTransaction();
    }

    public final void zzx() {
        zzW();
        zzh().endTransaction();
    }

    final void zzy(List list) {
        zzg();
        zzW();
        Preconditions.checkNotNull(list);
        Preconditions.checkNotZero(list.size());
        if (zzI()) {
            String strJoin = TextUtils.join(",", list);
            StringBuilder sb = new StringBuilder(String.valueOf(strJoin).length() + 2);
            sb.append("(");
            sb.append(strJoin);
            sb.append(")");
            String string = sb.toString();
            StringBuilder sb2 = new StringBuilder(string.length() + 80);
            sb2.append("SELECT COUNT(1) FROM queue WHERE rowid IN ");
            sb2.append(string);
            sb2.append(" AND retry_count =  2147483647 LIMIT 1");
            if (zzZ(sb2.toString(), null) > 0) {
                this.zzs.zzay().zzk().zza("The number of upload retries exceeds the limit. Will remain unchanged.");
            }
            try {
                SQLiteDatabase sQLiteDatabaseZzh = zzh();
                StringBuilder sb3 = new StringBuilder(string.length() + 127);
                sb3.append("UPDATE queue SET retry_count = IFNULL(retry_count, 0) + 1 WHERE rowid IN ");
                sb3.append(string);
                sb3.append(" AND (retry_count IS NULL OR retry_count < 2147483647)");
                sQLiteDatabaseZzh.execSQL(sb3.toString());
            } catch (SQLiteException e) {
                this.zzs.zzay().zzd().zzb("Error incrementing retry count. error", e);
            }
        }
    }

    final void zzz() {
        zzg();
        zzW();
        if (zzI()) {
            long jZza = this.zzf.zzs().zza.zza();
            long jElapsedRealtime = this.zzs.zzav().elapsedRealtime();
            long jAbs = Math.abs(jElapsedRealtime - jZza);
            this.zzs.zzf();
            if (jAbs > ((Long) zzdw.zzx.zza(null)).longValue()) {
                this.zzf.zzs().zza.zzb(jElapsedRealtime);
                zzg();
                zzW();
                if (zzI()) {
                    SQLiteDatabase sQLiteDatabaseZzh = zzh();
                    this.zzs.zzf();
                    int iDelete = sQLiteDatabaseZzh.delete("queue", "abs(bundle_end_timestamp - ?) > cast(? as integer)", new String[]{String.valueOf(this.zzs.zzav().currentTimeMillis()), String.valueOf(zzaf.zzA())});
                    if (iDelete > 0) {
                        this.zzs.zzay().zzj().zzb("Deleted stale rows. rowsDeleted", Integer.valueOf(iDelete));
                    }
                }
            }
        }
    }
}
