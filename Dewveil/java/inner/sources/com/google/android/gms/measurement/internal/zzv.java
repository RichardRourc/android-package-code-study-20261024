package com.google.android.gms.measurement.internal;

import android.database.Cursor;
import android.database.sqlite.SQLiteException;
import android.text.TextUtils;
import android.util.Pair;
import com.google.android.gms.common.internal.Preconditions;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzv {
    final /* synthetic */ zzz zza;
    private com.google.android.gms.internal.measurement.zzfo zzb;
    private Long zzc;
    private long zzd;

    /* synthetic */ zzv(zzz zzzVar, zzu zzuVar) {
        this.zza = zzzVar;
    }

    /* JADX WARN: Code duplicated, block: B:41:0x0102 A[PHI: r14
  0x0102: PHI (r14v3 android.database.Cursor) = (r14v2 android.database.Cursor), (r14v6 android.database.Cursor) binds: [B:40:0x0100, B:31:0x00e6] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:72:0x01ea  */
    /* JADX WARN: Not initialized variable reg: 14, insn: 0x01e7: MOVE (r5 I:??[OBJECT, ARRAY]) = (r14 I:??[OBJECT, ARRAY]), block:B:70:0x01e7 */
    final com.google.android.gms.internal.measurement.zzfo zza(String str, com.google.android.gms.internal.measurement.zzfo zzfoVar) {
        Cursor cursor;
        Cursor cursorRawQuery;
        Cursor cursor2;
        Pair pairCreate;
        String strZzh = zzfoVar.zzh();
        List listZzi = zzfoVar.zzi();
        this.zza.zzf.zzu();
        Long l = (Long) zzkt.zzC(zzfoVar, "_eid");
        if (l != null) {
            if (strZzh.equals("_ep")) {
                Preconditions.checkNotNull(l);
                this.zza.zzf.zzu();
                String str2 = (String) zzkt.zzC(zzfoVar, "_en");
                if (TextUtils.isEmpty(str2)) {
                    this.zza.zzs.zzay().zzh().zzb("Extra parameter without an event name. eventId", l);
                    return null;
                }
                if (this.zzb == null || this.zzc == null || l.longValue() != this.zzc.longValue()) {
                    zzak zzakVarZzi = this.zza.zzf.zzi();
                    zzakVarZzi.zzg();
                    zzakVarZzi.zzW();
                    try {
                        try {
                            cursorRawQuery = zzakVarZzi.zzh().rawQuery("select main_event, children_to_process from main_event_params where app_id=? and event_id=?", new String[]{str, l.toString()});
                            try {
                                if (cursorRawQuery.moveToFirst()) {
                                    try {
                                        pairCreate = Pair.create((com.google.android.gms.internal.measurement.zzfo) ((com.google.android.gms.internal.measurement.zzfn) zzkt.zzl(com.google.android.gms.internal.measurement.zzfo.zze(), cursorRawQuery.getBlob(0))).zzay(), Long.valueOf(cursorRawQuery.getLong(1)));
                                        if (cursorRawQuery != null) {
                                            cursorRawQuery.close();
                                        }
                                    } catch (IOException e) {
                                        zzakVarZzi.zzs.zzay().zzd().zzd("Failed to merge main event. appId, eventId", zzej.zzn(str), l, e);
                                        if (cursorRawQuery != null) {
                                            cursorRawQuery.close();
                                        }
                                        pairCreate = null;
                                    }
                                } else {
                                    zzakVarZzi.zzs.zzay().zzj().zza("Main event not found");
                                    if (cursorRawQuery != null) {
                                        cursorRawQuery.close();
                                    }
                                    pairCreate = null;
                                }
                            } catch (SQLiteException e2) {
                                e = e2;
                                zzakVarZzi.zzs.zzay().zzd().zzb("Error selecting main event", e);
                                if (cursorRawQuery != null) {
                                    cursorRawQuery.close();
                                }
                                pairCreate = null;
                                if (pairCreate != null) {
                                }
                                this.zza.zzs.zzay().zzh().zzc("Extra parameter without existing main event. eventName, eventId", str2, l);
                                return null;
                            }
                        } catch (Throwable th) {
                            th = th;
                            cursor = cursor2;
                            if (cursor != null) {
                                cursor.close();
                            }
                            throw th;
                        }
                    } catch (SQLiteException e3) {
                        e = e3;
                        cursorRawQuery = null;
                    } catch (Throwable th2) {
                        th = th2;
                        cursor = null;
                        if (cursor != null) {
                            cursor.close();
                        }
                        throw th;
                    }
                    if (pairCreate != null || pairCreate.first == null) {
                        this.zza.zzs.zzay().zzh().zzc("Extra parameter without existing main event. eventName, eventId", str2, l);
                        return null;
                    }
                    this.zzb = (com.google.android.gms.internal.measurement.zzfo) pairCreate.first;
                    this.zzd = ((Long) pairCreate.second).longValue();
                    this.zza.zzf.zzu();
                    this.zzc = (Long) zzkt.zzC(this.zzb, "_eid");
                }
                long j = this.zzd - 1;
                this.zzd = j;
                if (j <= 0) {
                    zzak zzakVarZzi2 = this.zza.zzf.zzi();
                    zzakVarZzi2.zzg();
                    zzakVarZzi2.zzs.zzay().zzj().zzb("Clearing complex main event info. appId", str);
                    try {
                        zzakVarZzi2.zzh().execSQL("delete from main_event_params where app_id=?", new String[]{str});
                    } catch (SQLiteException e4) {
                        zzakVarZzi2.zzs.zzay().zzd().zzb("Error clearing complex main event", e4);
                    }
                } else {
                    this.zza.zzf.zzi().zzJ(str, l, this.zzd, this.zzb);
                }
                ArrayList arrayList = new ArrayList();
                for (com.google.android.gms.internal.measurement.zzfs zzfsVar : this.zzb.zzi()) {
                    this.zza.zzf.zzu();
                    if (zzkt.zzB(zzfoVar, zzfsVar.zzg()) == null) {
                        arrayList.add(zzfsVar);
                    }
                }
                if (arrayList.isEmpty()) {
                    this.zza.zzs.zzay().zzh().zzb("No unique parameters in main event. eventName", str2);
                } else {
                    arrayList.addAll(listZzi);
                    listZzi = arrayList;
                }
                strZzh = str2;
            } else {
                this.zzc = l;
                this.zzb = zzfoVar;
                this.zza.zzf.zzu();
                Object objZzC = zzkt.zzC(zzfoVar, "_epc");
                long jLongValue = ((Long) (objZzC != null ? objZzC : 0L)).longValue();
                this.zzd = jLongValue;
                if (jLongValue <= 0) {
                    this.zza.zzs.zzay().zzh().zzb("Complex event with zero extra param count. eventName", strZzh);
                } else {
                    this.zza.zzf.zzi().zzJ(str, (Long) Preconditions.checkNotNull(l), this.zzd, zzfoVar);
                }
            }
        }
        com.google.android.gms.internal.measurement.zzfn zzfnVar = (com.google.android.gms.internal.measurement.zzfn) zzfoVar.zzbt();
        zzfnVar.zzi(strZzh);
        zzfnVar.zzg();
        zzfnVar.zzd(listZzi);
        return (com.google.android.gms.internal.measurement.zzfo) zzfnVar.zzay();
    }
}
