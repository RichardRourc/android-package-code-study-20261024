package com.google.android.gms.measurement.internal;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteException;
import android.util.Log;
import androidx.collection.ArrayMap;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.internal.measurement.zzoh;
import com.google.firebase.messaging.Constants;
import java.io.IOException;
import java.util.ArrayList;
import java.util.BitSet;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzz extends zzkh {
    private String zza;
    private Set zzb;
    private Map zzc;
    private Long zzd;
    private Long zze;

    zzz(zzkr zzkrVar) {
        super(zzkrVar);
    }

    private final zzt zzd(Integer num) {
        if (this.zzc.containsKey(num)) {
            return (zzt) this.zzc.get(num);
        }
        zzt zztVar = new zzt(this, this.zza, null);
        this.zzc.put(num, zztVar);
        return zztVar;
    }

    private final boolean zzf(int i, int i2) {
        zzt zztVar = (zzt) this.zzc.get(Integer.valueOf(i));
        if (zztVar == null) {
            return false;
        }
        return zztVar.zze.get(i2);
    }

    /* JADX WARN: Code duplicated, block: B:101:0x027f  */
    /* JADX WARN: Code duplicated, block: B:105:0x02ae A[Catch: all -> 0x02e6, SQLiteException -> 0x02e9, LOOP:11: B:105:0x02ae->B:505:?, LOOP_START, TryCatch #4 {all -> 0x02e6, blocks: (B:103:0x02a8, B:105:0x02ae, B:107:0x02bf, B:108:0x02c7, B:112:0x02df, B:123:0x02f1), top: B:431:0x0298 }] */
    /* JADX WARN: Code duplicated, block: B:107:0x02bf A[Catch: all -> 0x02e6, SQLiteException -> 0x02e9, TryCatch #4 {all -> 0x02e6, blocks: (B:103:0x02a8, B:105:0x02ae, B:107:0x02bf, B:108:0x02c7, B:112:0x02df, B:123:0x02f1), top: B:431:0x0298 }] */
    /* JADX WARN: Code duplicated, block: B:111:0x02db A[PHI: r0 r5
  0x02db: PHI (r0v64 java.util.Map) = (r0v46 java.util.Map), (r0v66 java.util.Map), (r0v40 java.util.Map) binds: [B:124:0x0308, B:113:0x02e3, B:110:0x02d9] A[DONT_GENERATE, DONT_INLINE]
  0x02db: PHI (r5v16 android.database.Cursor) = (r5v9 android.database.Cursor), (r5v17 android.database.Cursor), (r5v17 android.database.Cursor) binds: [B:124:0x0308, B:113:0x02e3, B:110:0x02d9] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:112:0x02df A[Catch: all -> 0x02e6, SQLiteException -> 0x02e9, TRY_ENTER, TRY_LEAVE, TryCatch #4 {all -> 0x02e6, blocks: (B:103:0x02a8, B:105:0x02ae, B:107:0x02bf, B:108:0x02c7, B:112:0x02df, B:123:0x02f1), top: B:431:0x0298 }] */
    /* JADX WARN: Code duplicated, block: B:129:0x0319  */
    /* JADX WARN: Code duplicated, block: B:131:0x0335  */
    /* JADX WARN: Code duplicated, block: B:156:0x03d6  */
    /* JADX WARN: Code duplicated, block: B:158:0x03da  */
    /* JADX WARN: Code duplicated, block: B:162:0x03e5  */
    /* JADX WARN: Code duplicated, block: B:164:0x040a  */
    /* JADX WARN: Code duplicated, block: B:170:0x041f  */
    /* JADX WARN: Code duplicated, block: B:174:0x0439  */
    /* JADX WARN: Code duplicated, block: B:175:0x0442  */
    /* JADX WARN: Code duplicated, block: B:179:0x044e  */
    /* JADX WARN: Code duplicated, block: B:185:0x0463  */
    /* JADX WARN: Code duplicated, block: B:192:0x049b  */
    /* JADX WARN: Code duplicated, block: B:195:0x04a4  */
    /* JADX WARN: Code duplicated, block: B:197:0x04ae  */
    /* JADX WARN: Code duplicated, block: B:199:0x04d6  */
    /* JADX WARN: Code duplicated, block: B:200:0x04da  */
    /* JADX WARN: Code duplicated, block: B:205:0x04fd A[ADDED_TO_REGION] */
    /* JADX WARN: Code duplicated, block: B:229:0x0597  */
    /* JADX WARN: Code duplicated, block: B:232:0x05ab  */
    /* JADX WARN: Code duplicated, block: B:234:0x05b9  */
    /* JADX WARN: Code duplicated, block: B:236:0x05cf  */
    /* JADX WARN: Code duplicated, block: B:237:0x060e  */
    /* JADX WARN: Code duplicated, block: B:240:0x065a  */
    /* JADX WARN: Code duplicated, block: B:248:0x06a9 A[Catch: SQLiteException -> 0x0725, all -> 0x075a, LOOP:8: B:248:0x06a9->B:266:0x070c, LOOP_START, PHI: r2 r13 r29
  0x06a9: PHI (r2v48 java.lang.String) = (r2v46 java.lang.String), (r2v52 java.lang.String) binds: [B:247:0x06a7, B:266:0x070c] A[DONT_GENERATE, DONT_INLINE]
  0x06a9: PHI (r13v17 androidx.collection.ArrayMap) = (r13v10 androidx.collection.ArrayMap), (r13v20 androidx.collection.ArrayMap) binds: [B:247:0x06a7, B:266:0x070c] A[DONT_GENERATE, DONT_INLINE]
  0x06a9: PHI (r29v7 java.lang.String) = (r29v2 java.lang.String), (r29v8 java.lang.String) binds: [B:247:0x06a7, B:266:0x070c] A[DONT_GENERATE, DONT_INLINE], TRY_LEAVE, TryCatch #21 {SQLiteException -> 0x0725, blocks: (B:246:0x06a3, B:248:0x06a9, B:249:0x06ae, B:251:0x06bf), top: B:452:0x06a3 }] */
    /* JADX WARN: Code duplicated, block: B:253:0x06cf  */
    /* JADX WARN: Code duplicated, block: B:255:0x06da  */
    /* JADX WARN: Code duplicated, block: B:264:0x0706  */
    /* JADX WARN: Code duplicated, block: B:266:0x070c A[LOOP:8: B:248:0x06a9->B:266:0x070c, LOOP_END] */
    /* JADX WARN: Code duplicated, block: B:269:0x0715  */
    /* JADX WARN: Code duplicated, block: B:272:0x071f A[PHI: r0 r4 r13 r26 r28 r66
  0x071f: PHI (r0v98 java.util.Map) = (r0v100 java.util.Map), (r0v109 java.util.Map) binds: [B:288:0x0753, B:271:0x071d] A[DONT_GENERATE, DONT_INLINE]
  0x071f: PHI (r4v28 android.database.Cursor) = (r4v29 android.database.Cursor), (r4v31 android.database.Cursor) binds: [B:288:0x0753, B:271:0x071d] A[DONT_GENERATE, DONT_INLINE]
  0x071f: PHI (r13v12 java.lang.String) = (r13v13 java.lang.String), (r13v16 java.lang.String) binds: [B:288:0x0753, B:271:0x071d] A[DONT_GENERATE, DONT_INLINE]
  0x071f: PHI (r26v5 java.lang.String) = (r26v6 java.lang.String), (r26v8 java.lang.String) binds: [B:288:0x0753, B:271:0x071d] A[DONT_GENERATE, DONT_INLINE]
  0x071f: PHI (r28v7 java.lang.String) = (r28v8 java.lang.String), (r28v14 java.lang.String) binds: [B:288:0x0753, B:271:0x071d] A[DONT_GENERATE, DONT_INLINE]
  0x071f: PHI (r66v5 java.util.Iterator) = (r66v6 java.util.Iterator), (r66v8 java.util.Iterator) binds: [B:288:0x0753, B:271:0x071d] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:296:0x0762  */
    /* JADX WARN: Code duplicated, block: B:300:0x0778  */
    /* JADX WARN: Code duplicated, block: B:306:0x07ad  */
    /* JADX WARN: Code duplicated, block: B:308:0x07da A[LOOP:10: B:304:0x07a7->B:308:0x07da, LOOP_END] */
    /* JADX WARN: Code duplicated, block: B:312:0x07f6  */
    /* JADX WARN: Code duplicated, block: B:319:0x0816  */
    /* JADX WARN: Code duplicated, block: B:322:0x0825  */
    /* JADX WARN: Code duplicated, block: B:324:0x0838  */
    /* JADX WARN: Code duplicated, block: B:331:0x087c A[Catch: SQLiteException -> 0x08dd, all -> 0x0905, LOOP:3: B:331:0x087c->B:481:?, LOOP_START, TRY_LEAVE, TryCatch #13 {SQLiteException -> 0x08dd, blocks: (B:329:0x0876, B:331:0x087c, B:332:0x0881), top: B:443:0x0876 }] */
    /* JADX WARN: Code duplicated, block: B:336:0x08a2 A[Catch: SQLiteException -> 0x08db, all -> 0x0905, TryCatch #9 {SQLiteException -> 0x08db, blocks: (B:334:0x0892, B:336:0x08a2, B:337:0x08aa, B:340:0x08c3, B:339:0x08af, B:346:0x08d1), top: B:436:0x0892 }] */
    /* JADX WARN: Code duplicated, block: B:343:0x08cb  */
    /* JADX WARN: Code duplicated, block: B:345:0x08d0  */
    /* JADX WARN: Code duplicated, block: B:348:0x08d7 A[PHI: r0 r9
  0x08d7: PHI (r0v151 java.util.Map) = (r0v153 java.util.Map), (r0v160 java.util.Map) binds: [B:361:0x08fe, B:347:0x08d5] A[DONT_GENERATE, DONT_INLINE]
  0x08d7: PHI (r9v41 android.database.Cursor) = (r9v42 android.database.Cursor), (r9v43 android.database.Cursor) binds: [B:361:0x08fe, B:347:0x08d5] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:369:0x090d  */
    /* JADX WARN: Code duplicated, block: B:373:0x091c  */
    /* JADX WARN: Code duplicated, block: B:376:0x0941  */
    /* JADX WARN: Code duplicated, block: B:379:0x0952  */
    /* JADX WARN: Code duplicated, block: B:381:0x0969  */
    /* JADX WARN: Code duplicated, block: B:383:0x097d  */
    /* JADX WARN: Code duplicated, block: B:384:0x0986  */
    /* JADX WARN: Code duplicated, block: B:388:0x09b9  */
    /* JADX WARN: Code duplicated, block: B:397:0x0a09  */
    /* JADX WARN: Code duplicated, block: B:398:0x0a12  */
    /* JADX WARN: Code duplicated, block: B:401:0x0a1f  */
    /* JADX WARN: Code duplicated, block: B:406:0x0a45  */
    /* JADX WARN: Code duplicated, block: B:411:0x0aa7 A[Catch: SQLiteException -> 0x0abb, TRY_LEAVE, TryCatch #28 {SQLiteException -> 0x0abb, blocks: (B:409:0x0a9d, B:411:0x0aa7), top: B:459:0x0a9d }] */
    /* JADX WARN: Code duplicated, block: B:476:0x0932 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:483:0x0a28 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:484:0x09f3 A[ADDED_TO_REGION, REMOVE, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:487:0x0a1d A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:490:0x0ad2 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:494:0x080b A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:495:0x0704 A[EDGE_INSN: B:495:0x0704->B:263:0x0704 BREAK  A[LOOP:8: B:248:0x06a9->B:266:0x070c], SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:497:0x079c A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:498:0x078e A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:502:0x07f2 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:503:0x07e8 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:508:0x03c5 A[ADDED_TO_REGION, REMOVE, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:521:0x055b A[ADDED_TO_REGION, REMOVE, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:528:0x042b A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:530:0x0419 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:533:0x046f A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:536:0x045d A[ADDED_TO_REGION, REMOVE, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:546:0x0218 A[EDGE_INSN: B:546:0x0218->B:77:0x0218 BREAK  A[LOOP:20: B:68:0x01d0->B:80:0x0220], SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:56:0x017f  */
    /* JADX WARN: Code duplicated, block: B:63:0x01bd A[Catch: SQLiteException -> 0x0228, all -> 0x0ad9, TRY_LEAVE, TryCatch #14 {SQLiteException -> 0x0228, blocks: (B:61:0x01b7, B:63:0x01bd, B:67:0x01cb, B:68:0x01d0, B:69:0x01da, B:70:0x01ea, B:72:0x01f7), top: B:444:0x01b7 }] */
    /* JADX WARN: Code duplicated, block: B:65:0x01c3  */
    /* JADX WARN: Code duplicated, block: B:67:0x01cb A[Catch: SQLiteException -> 0x0228, all -> 0x0ad9, TRY_ENTER, TryCatch #14 {SQLiteException -> 0x0228, blocks: (B:61:0x01b7, B:63:0x01bd, B:67:0x01cb, B:68:0x01d0, B:69:0x01da, B:70:0x01ea, B:72:0x01f7), top: B:444:0x01b7 }] */
    /* JADX WARN: Code duplicated, block: B:78:0x021a  */
    /* JADX WARN: Code duplicated, block: B:80:0x0220 A[LOOP:20: B:68:0x01d0->B:80:0x0220, LOOP_END] */
    /* JADX WARN: Code duplicated, block: B:96:0x025f  */
    /* JADX WARN: Code duplicated, block: B:98:0x026a  */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v203, types: [android.content.ContentValues] */
    /* JADX WARN: Type inference failed for: r4v41, types: [android.database.sqlite.SQLiteDatabase] */
    /* JADX WARN: Type inference failed for: r5v0 */
    /* JADX WARN: Type inference failed for: r5v37 */
    /* JADX WARN: Type inference failed for: r5v39, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r5v44, types: [java.lang.Integer] */
    /* JADX WARN: Type inference failed for: r5v45 */
    /* JADX WARN: Type inference failed for: r5v46, types: [java.lang.String[]] */
    /* JADX WARN: Type inference failed for: r5v47 */
    /* JADX WARN: Type inference failed for: r5v48 */
    /* JADX WARN: Type inference failed for: r5v5, types: [android.database.sqlite.SQLiteDatabase] */
    /* JADX WARN: Type inference failed for: r5v6 */
    /* JADX WARN: Type inference failed for: r5v8, types: [android.database.Cursor] */
    final List zza(String str, List list, List list2, Long l, Long l2) throws Throwable {
        int i;
        int i2;
        boolean z;
        ?? r5;
        Map map;
        Cursor cursor;
        Cursor cursorQuery;
        Map map2;
        Map map3;
        Iterator it;
        int iIntValue;
        com.google.android.gms.internal.measurement.zzgd zzgdVar;
        BitSet bitSet;
        BitSet bitSet2;
        ArrayMap arrayMap;
        List<com.google.android.gms.internal.measurement.zzej> list3;
        int i3;
        String str2;
        String str3;
        Iterator it2;
        com.google.android.gms.internal.measurement.zzgf zzgfVar;
        Long lValueOf;
        String str4;
        ArrayMap arrayMap2;
        Map arrayMap3;
        ?? Zzh;
        Cursor cursorRawQuery;
        Iterator it3;
        com.google.android.gms.internal.measurement.zzgd zzgdVar2;
        List list4;
        Map map4;
        Integer numValueOf;
        List arrayList;
        String str5;
        String str6;
        zzu zzuVar;
        zzv zzvVar;
        ArrayMap arrayMap4;
        Iterator it4;
        com.google.android.gms.internal.measurement.zzfo zzfoVar;
        com.google.android.gms.internal.measurement.zzfo zzfoVarZza;
        zzak zzakVarZzi;
        String str7;
        String strZzh;
        zzaq zzaqVarZzn;
        zzaq zzaqVar;
        long j;
        String strZzh2;
        Map mapEmptyMap;
        Iterator it5;
        String str8;
        String str9;
        Iterator it6;
        int iIntValue2;
        Set set;
        Integer numValueOf2;
        Iterator it7;
        boolean zZzd;
        Map map5;
        zzw zzwVar;
        String str10;
        ArrayMap arrayMap5;
        Cursor cursor2;
        Cursor cursorQuery2;
        String str11;
        Integer numValueOf3;
        List list5;
        List arrayList2;
        String str12;
        ArrayList arrayList3;
        Iterator it8;
        zzak zzakVarZzi2;
        String str13;
        ContentValues contentValues;
        ArrayMap arrayMap6;
        Iterator it9;
        String strZzf;
        Map mapEmptyMap2;
        Iterator it10;
        int iIntValue3;
        Set set2;
        Integer numValueOf4;
        Iterator it11;
        boolean zZzd2;
        com.google.android.gms.internal.measurement.zzes zzesVar;
        Integer numValueOf5;
        zzy zzyVar;
        Integer numValueOf6;
        String str14;
        ArrayMap arrayMap7;
        Cursor cursor3;
        Cursor cursorQuery3;
        Integer numValueOf7;
        List arrayList4;
        ArrayMap arrayMap8;
        int i4;
        Cursor cursorQuery4;
        List arrayList5;
        String str15 = "current_results";
        Preconditions.checkNotEmpty(str);
        Preconditions.checkNotNull(list);
        Preconditions.checkNotNull(list2);
        this.zza = str;
        this.zzb = new HashSet();
        this.zzc = new ArrayMap();
        this.zzd = l;
        this.zze = l2;
        Iterator it12 = list.iterator();
        while (true) {
            i = 0;
            i2 = 1;
            if (!it12.hasNext()) {
                z = false;
                break;
            }
            if ("_s".equals(((com.google.android.gms.internal.measurement.zzfo) it12.next()).zzh())) {
                z = true;
                break;
            }
        }
        zzoh.zzc();
        boolean zZzs = this.zzs.zzf().zzs(this.zza, zzdw.zzW);
        zzoh.zzc();
        boolean zZzs2 = this.zzs.zzf().zzs(this.zza, zzdw.zzV);
        if (z) {
            zzak zzakVarZzi3 = this.zzf.zzi();
            String str16 = this.zza;
            zzakVarZzi3.zzW();
            zzakVarZzi3.zzg();
            Preconditions.checkNotEmpty(str16);
            ?? contentValues2 = new ContentValues();
            int i5 = 0;
            contentValues2.put("current_session_count", 0);
            try {
                i5 = new String[]{str16};
                zzakVarZzi3.zzh().update("events", contentValues2, "app_id = ?", i5);
                r5 = i5;
            } catch (SQLiteException e) {
                zzakVarZzi3.zzs.zzay().zzd().zzc("Error resetting session-scoped event counts. appId", zzej.zzn(str16), e);
                r5 = i5;
            }
        }
        Map mapEmptyMap3 = Collections.emptyMap();
        String str17 = "Failed to merge filter. appId";
        String str18 = "Database error querying filters. appId";
        String str19 = "audience_id";
        if (zZzs2 && zZzs) {
            zzak zzakVarZzi4 = this.zzf.zzi();
            String str20 = this.zza;
            Preconditions.checkNotEmpty(str20);
            ArrayMap arrayMap9 = new ArrayMap();
            try {
                try {
                    cursorQuery4 = zzakVarZzi4.zzh().query("event_filters", new String[]{"audience_id", Constants.ScionAnalytics.MessageType.DATA_MESSAGE}, "app_id=?", new String[]{str20}, null, null, null);
                    try {
                        if (cursorQuery4.moveToFirst()) {
                            while (true) {
                                try {
                                    com.google.android.gms.internal.measurement.zzej zzejVar = (com.google.android.gms.internal.measurement.zzej) ((com.google.android.gms.internal.measurement.zzei) zzkt.zzl(com.google.android.gms.internal.measurement.zzej.zzc(), cursorQuery4.getBlob(i2))).zzay();
                                    if (zzejVar.zzo()) {
                                        Integer numValueOf8 = Integer.valueOf(cursorQuery4.getInt(i));
                                        List list6 = (List) arrayMap9.get(numValueOf8);
                                        if (list6 == null) {
                                            arrayList5 = new ArrayList();
                                            arrayMap9.put(numValueOf8, arrayList5);
                                        } else {
                                            arrayList5 = list6;
                                        }
                                        arrayList5.add(zzejVar);
                                    }
                                } catch (IOException e2) {
                                    zzakVarZzi4.zzs.zzay().zzd().zzc("Failed to merge filter. appId", zzej.zzn(str20), e2);
                                }
                                if (!cursorQuery4.moveToNext()) {
                                    break;
                                }
                                i = 0;
                                i2 = 1;
                            }
                            if (cursorQuery4 != null) {
                                cursorQuery4.close();
                            }
                            map = arrayMap9;
                        } else {
                            mapEmptyMap3 = Collections.emptyMap();
                            if (cursorQuery4 != null) {
                                cursorQuery4.close();
                            }
                            map = mapEmptyMap3;
                        }
                    } catch (SQLiteException e3) {
                        e = e3;
                        zzakVarZzi4.zzs.zzay().zzd().zzc("Database error querying filters. appId", zzej.zzn(str20), e);
                        mapEmptyMap3 = Collections.emptyMap();
                        if (cursorQuery4 != null) {
                        }
                        map = mapEmptyMap3;
                        zzak zzakVarZzi5 = this.zzf.zzi();
                        String str21 = this.zza;
                        zzakVarZzi5.zzW();
                        zzakVarZzi5.zzg();
                        Preconditions.checkNotEmpty(str21);
                        cursorQuery = zzakVarZzi5.zzh().query("audience_filter_values", new String[]{"audience_id", "current_results"}, "app_id=?", new String[]{str21}, null, null, null);
                        try {
                            try {
                                if (cursorQuery.moveToFirst()) {
                                    arrayMap8 = new ArrayMap();
                                    while (true) {
                                        i4 = cursorQuery.getInt(0);
                                        try {
                                            arrayMap8.put(Integer.valueOf(i4), (com.google.android.gms.internal.measurement.zzgd) ((com.google.android.gms.internal.measurement.zzgc) zzkt.zzl(com.google.android.gms.internal.measurement.zzgd.zzf(), cursorQuery.getBlob(1))).zzay());
                                        } catch (IOException e4) {
                                            zzakVarZzi5.zzs.zzay().zzd().zzd("Failed to merge filter results. appId, audienceId, error", zzej.zzn(str21), Integer.valueOf(i4), e4);
                                        }
                                        try {
                                            if (!cursorQuery.moveToNext()) {
                                                break;
                                            }
                                            arrayMap8 = arrayMap8;
                                            str19 = str19;
                                        } catch (SQLiteException e5) {
                                            e = e5;
                                            zzakVarZzi5.zzs.zzay().zzd().zzc("Database error querying filter results. appId", zzej.zzn(str21), e);
                                            Map mapEmptyMap4 = Collections.emptyMap();
                                            if (cursorQuery != null) {
                                                cursorQuery.close();
                                            }
                                            map2 = mapEmptyMap4;
                                        }
                                    }
                                    if (cursorQuery != null) {
                                        cursorQuery.close();
                                    }
                                    map2 = arrayMap8;
                                } else {
                                    Map mapEmptyMap5 = Collections.emptyMap();
                                    if (cursorQuery != null) {
                                        cursorQuery.close();
                                    }
                                    map2 = mapEmptyMap5;
                                    str19 = "audience_id";
                                }
                            } catch (SQLiteException e6) {
                                e = e6;
                                str19 = "audience_id";
                            }
                            if (!map2.isEmpty()) {
                                HashSet hashSet = new HashSet(map2.keySet());
                                if (z) {
                                    str4 = this.zza;
                                    Preconditions.checkNotEmpty(str4);
                                    Preconditions.checkNotNull(map2);
                                    arrayMap2 = new ArrayMap();
                                    if (!map2.isEmpty()) {
                                        zzak zzakVarZzi6 = this.zzf.zzi();
                                        zzakVarZzi6.zzW();
                                        zzakVarZzi6.zzg();
                                        Preconditions.checkNotEmpty(str4);
                                        arrayMap3 = new ArrayMap();
                                        Zzh = zzakVarZzi6.zzh();
                                        try {
                                            try {
                                                cursorRawQuery = Zzh.rawQuery("select audience_id, filter_id from event_filters where app_id = ? and session_scoped = 1 UNION select audience_id, filter_id from property_filters where app_id = ? and session_scoped = 1;", new String[]{str4, str4});
                                                try {
                                                    if (cursorRawQuery.moveToFirst()) {
                                                        do {
                                                            numValueOf = Integer.valueOf(cursorRawQuery.getInt(0));
                                                            arrayList = (List) arrayMap3.get(numValueOf);
                                                            if (arrayList == null) {
                                                                arrayList = new ArrayList();
                                                                arrayMap3.put(numValueOf, arrayList);
                                                            }
                                                            arrayList.add(Integer.valueOf(cursorRawQuery.getInt(1)));
                                                        } while (cursorRawQuery.moveToNext());
                                                        if (cursorRawQuery != null) {
                                                            cursorRawQuery.close();
                                                        }
                                                    } else {
                                                        arrayMap3 = Collections.emptyMap();
                                                        if (cursorRawQuery != null) {
                                                            cursorRawQuery.close();
                                                        }
                                                    }
                                                } catch (SQLiteException e7) {
                                                    e = e7;
                                                    zzakVarZzi6.zzs.zzay().zzd().zzc("Database error querying scoped filters. appId", zzej.zzn(str4), e);
                                                    arrayMap3 = Collections.emptyMap();
                                                    if (cursorRawQuery != null) {
                                                    }
                                                    it3 = map2.keySet().iterator();
                                                    while (it3.hasNext()) {
                                                        int iIntValue4 = ((Integer) it3.next()).intValue();
                                                        Integer numValueOf9 = Integer.valueOf(iIntValue4);
                                                        zzgdVar2 = (com.google.android.gms.internal.measurement.zzgd) map2.get(numValueOf9);
                                                        list4 = (List) arrayMap3.get(numValueOf9);
                                                        if (list4 != null) {
                                                        }
                                                        map4 = arrayMap3;
                                                        arrayMap2.put(numValueOf9, zzgdVar2);
                                                        arrayMap3 = map4;
                                                        it3 = it3;
                                                    }
                                                    map3 = arrayMap2;
                                                    it = hashSet.iterator();
                                                    while (it.hasNext()) {
                                                        iIntValue = ((Integer) it.next()).intValue();
                                                        zzgdVar = (com.google.android.gms.internal.measurement.zzgd) map3.get(Integer.valueOf(iIntValue));
                                                        bitSet = new BitSet();
                                                        bitSet2 = new BitSet();
                                                        arrayMap = new ArrayMap();
                                                        if (zzgdVar != null) {
                                                            for (com.google.android.gms.internal.measurement.zzfm zzfmVar : zzgdVar.zzj()) {
                                                                if (zzfmVar.zzh()) {
                                                                    Integer numValueOf10 = Integer.valueOf(zzfmVar.zza());
                                                                    if (zzfmVar.zzg()) {
                                                                        lValueOf = Long.valueOf(zzfmVar.zzb());
                                                                    } else {
                                                                        lValueOf = null;
                                                                    }
                                                                    arrayMap.put(numValueOf10, lValueOf);
                                                                }
                                                            }
                                                        }
                                                        ArrayMap arrayMap10 = new ArrayMap();
                                                        if (zzgdVar != null) {
                                                            it2 = zzgdVar.zzm().iterator();
                                                            while (it2.hasNext()) {
                                                                zzgfVar = (com.google.android.gms.internal.measurement.zzgf) it2.next();
                                                                if (!zzgfVar.zzi()) {
                                                                }
                                                            }
                                                        }
                                                        Map map6 = map3;
                                                        if (zzgdVar != null) {
                                                            i3 = 0;
                                                            while (i3 < zzgdVar.zzd() * 64) {
                                                                if (zzkt.zzv(zzgdVar.zzn(), i3)) {
                                                                    str2 = str18;
                                                                    str3 = str17;
                                                                    this.zzs.zzay().zzj().zzc("Filter already evaluated. audience ID, filter ID", Integer.valueOf(iIntValue), Integer.valueOf(i3));
                                                                    bitSet2.set(i3);
                                                                    if (zzkt.zzv(zzgdVar.zzk(), i3)) {
                                                                        bitSet.set(i3);
                                                                    }
                                                                    i3++;
                                                                    str18 = str2;
                                                                    str17 = str3;
                                                                } else {
                                                                    str2 = str18;
                                                                    str3 = str17;
                                                                }
                                                                arrayMap.remove(Integer.valueOf(i3));
                                                                i3++;
                                                                str18 = str2;
                                                                str17 = str3;
                                                            }
                                                        }
                                                        String str22 = str18;
                                                        String str23 = str17;
                                                        Integer numValueOf11 = Integer.valueOf(iIntValue);
                                                        com.google.android.gms.internal.measurement.zzgd zzgdVar3 = (com.google.android.gms.internal.measurement.zzgd) map2.get(numValueOf11);
                                                        if (!zZzs2) {
                                                        }
                                                        this.zzc.put(Integer.valueOf(iIntValue), new zzt(this, this.zza, zzgdVar3, bitSet, bitSet2, arrayMap, arrayMap10, null));
                                                        map2 = map2;
                                                        str18 = str22;
                                                        map = map;
                                                        map3 = map6;
                                                        str17 = str23;
                                                    }
                                                    String str24 = str18;
                                                    str5 = str17;
                                                    str6 = str19;
                                                    zzuVar = null;
                                                    if (!list.isEmpty()) {
                                                        zzvVar = new zzv(this, zzuVar);
                                                        arrayMap4 = new ArrayMap();
                                                        it4 = list.iterator();
                                                        while (it4.hasNext()) {
                                                            zzfoVar = (com.google.android.gms.internal.measurement.zzfo) it4.next();
                                                            zzfoVarZza = zzvVar.zza(this.zza, zzfoVar);
                                                            if (zzfoVarZza != null) {
                                                                zzakVarZzi = this.zzf.zzi();
                                                                str7 = this.zza;
                                                                strZzh = zzfoVarZza.zzh();
                                                                zzaqVarZzn = zzakVarZzi.zzn(str7, zzfoVar.zzh());
                                                                if (zzaqVarZzn == null) {
                                                                    zzakVarZzi.zzs.zzay().zzk().zzc("Event aggregate wasn't created during raw event logging. appId, event", zzej.zzn(str7), zzakVarZzi.zzs.zzj().zzd(strZzh));
                                                                    zzaqVar = new zzaq(str7, zzfoVar.zzh(), 1L, 1L, 1L, zzfoVar.zzd(), 0L, null, null, null, null);
                                                                } else {
                                                                    zzaqVar = new zzaq(zzaqVarZzn.zza, zzaqVarZzn.zzb, zzaqVarZzn.zzc + 1, zzaqVarZzn.zzd + 1, zzaqVarZzn.zze + 1, zzaqVarZzn.zzf, zzaqVarZzn.zzg, zzaqVarZzn.zzh, zzaqVarZzn.zzi, zzaqVarZzn.zzj, zzaqVarZzn.zzk);
                                                                }
                                                                this.zzf.zzi().zzE(zzaqVar);
                                                                j = zzaqVar.zzc;
                                                                strZzh2 = zzfoVarZza.zzh();
                                                                mapEmptyMap = (Map) arrayMap4.get(strZzh2);
                                                                if (mapEmptyMap == null) {
                                                                    zzak zzakVarZzi7 = this.zzf.zzi();
                                                                    str10 = this.zza;
                                                                    zzakVarZzi7.zzW();
                                                                    zzakVarZzi7.zzg();
                                                                    Preconditions.checkNotEmpty(str10);
                                                                    Preconditions.checkNotEmpty(strZzh2);
                                                                    arrayMap5 = new ArrayMap();
                                                                    SQLiteDatabase sQLiteDatabaseZzh = zzakVarZzi7.zzh();
                                                                    try {
                                                                        try {
                                                                            String[] strArr = new String[2];
                                                                            str11 = str6;
                                                                            try {
                                                                                strArr[0] = str11;
                                                                                strArr[1] = Constants.ScionAnalytics.MessageType.DATA_MESSAGE;
                                                                                it5 = it4;
                                                                                str8 = str15;
                                                                                try {
                                                                                    cursorQuery2 = sQLiteDatabaseZzh.query("event_filters", strArr, "app_id=? AND event_name=?", new String[]{str10, strZzh2}, null, null, null);
                                                                                    try {
                                                                                        try {
                                                                                            if (cursorQuery2.moveToFirst()) {
                                                                                                while (true) {
                                                                                                    try {
                                                                                                        com.google.android.gms.internal.measurement.zzej zzejVar2 = (com.google.android.gms.internal.measurement.zzej) ((com.google.android.gms.internal.measurement.zzei) zzkt.zzl(com.google.android.gms.internal.measurement.zzej.zzc(), cursorQuery2.getBlob(1))).zzay();
                                                                                                        numValueOf3 = Integer.valueOf(cursorQuery2.getInt(0));
                                                                                                        list5 = (List) arrayMap5.get(numValueOf3);
                                                                                                        if (list5 == null) {
                                                                                                            str6 = str11;
                                                                                                            try {
                                                                                                                arrayList2 = new ArrayList();
                                                                                                                arrayMap5.put(numValueOf3, arrayList2);
                                                                                                            } catch (SQLiteException e8) {
                                                                                                                e = e8;
                                                                                                                str9 = str5;
                                                                                                                zzakVarZzi7.zzs.zzay().zzd().zzc(str24, zzej.zzn(str10), e);
                                                                                                                mapEmptyMap = Collections.emptyMap();
                                                                                                                if (cursorQuery2 != null) {
                                                                                                                    cursorQuery2.close();
                                                                                                                }
                                                                                                                arrayMap4.put(strZzh2, mapEmptyMap);
                                                                                                                it6 = mapEmptyMap.keySet().iterator();
                                                                                                                while (it6.hasNext()) {
                                                                                                                    iIntValue2 = ((Integer) it6.next()).intValue();
                                                                                                                    set = this.zzb;
                                                                                                                    numValueOf2 = Integer.valueOf(iIntValue2);
                                                                                                                    if (set.contains(numValueOf2)) {
                                                                                                                        this.zzs.zzay().zzj().zzb("Skipping failed audience ID", numValueOf2);
                                                                                                                    } else {
                                                                                                                        it7 = ((List) mapEmptyMap.get(numValueOf2)).iterator();
                                                                                                                        zZzd = true;
                                                                                                                        while (true) {
                                                                                                                            if (it7.hasNext()) {
                                                                                                                                map5 = mapEmptyMap;
                                                                                                                                break;
                                                                                                                            }
                                                                                                                            com.google.android.gms.internal.measurement.zzej zzejVar3 = (com.google.android.gms.internal.measurement.zzej) it7.next();
                                                                                                                            zzwVar = new zzw(this, this.zza, iIntValue2, zzejVar3);
                                                                                                                            map5 = mapEmptyMap;
                                                                                                                            zZzd = zzwVar.zzd(this.zzd, this.zze, zzfoVarZza, j, zzaqVar, zzf(iIntValue2, zzejVar3.zzb()));
                                                                                                                            if (zZzd) {
                                                                                                                                this.zzb.add(Integer.valueOf(iIntValue2));
                                                                                                                                break;
                                                                                                                            }
                                                                                                                            zzd(Integer.valueOf(iIntValue2)).zzc(zzwVar);
                                                                                                                            mapEmptyMap = map5;
                                                                                                                        }
                                                                                                                        if (!zZzd) {
                                                                                                                            this.zzb.add(Integer.valueOf(iIntValue2));
                                                                                                                        }
                                                                                                                        mapEmptyMap = map5;
                                                                                                                    }
                                                                                                                }
                                                                                                                it4 = it5;
                                                                                                                str5 = str9;
                                                                                                                zzvVar = zzvVar;
                                                                                                                str15 = str8;
                                                                                                            }
                                                                                                        } else {
                                                                                                            str6 = str11;
                                                                                                            arrayList2 = list5;
                                                                                                        }
                                                                                                        arrayList2.add(zzejVar2);
                                                                                                        str9 = str5;
                                                                                                    } catch (IOException e9) {
                                                                                                        str6 = str11;
                                                                                                        str9 = str5;
                                                                                                        zzakVarZzi7.zzs.zzay().zzd().zzc(str9, zzej.zzn(str10), e9);
                                                                                                    }
                                                                                                    try {
                                                                                                        if (!cursorQuery2.moveToNext()) {
                                                                                                            break;
                                                                                                        }
                                                                                                        str5 = str9;
                                                                                                        arrayMap5 = arrayMap5;
                                                                                                        str11 = str6;
                                                                                                    } catch (SQLiteException e10) {
                                                                                                        e = e10;
                                                                                                        zzakVarZzi7.zzs.zzay().zzd().zzc(str24, zzej.zzn(str10), e);
                                                                                                        mapEmptyMap = Collections.emptyMap();
                                                                                                        if (cursorQuery2 != null) {
                                                                                                            cursorQuery2.close();
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                                if (cursorQuery2 != null) {
                                                                                                    cursorQuery2.close();
                                                                                                }
                                                                                                mapEmptyMap = arrayMap5;
                                                                                            } else {
                                                                                                str6 = str11;
                                                                                                str9 = str5;
                                                                                                mapEmptyMap = Collections.emptyMap();
                                                                                                if (cursorQuery2 != null) {
                                                                                                    cursorQuery2.close();
                                                                                                }
                                                                                            }
                                                                                        } catch (SQLiteException e11) {
                                                                                            e = e11;
                                                                                            str6 = str11;
                                                                                        }
                                                                                        arrayMap4.put(strZzh2, mapEmptyMap);
                                                                                    } catch (Throwable th) {
                                                                                        th = th;
                                                                                        cursor2 = cursorQuery2;
                                                                                        if (cursor2 != null) {
                                                                                            cursor2.close();
                                                                                        }
                                                                                        throw th;
                                                                                    }
                                                                                } catch (SQLiteException e12) {
                                                                                    e = e12;
                                                                                    str6 = str11;
                                                                                    str9 = str5;
                                                                                    cursorQuery2 = null;
                                                                                    zzakVarZzi7.zzs.zzay().zzd().zzc(str24, zzej.zzn(str10), e);
                                                                                    mapEmptyMap = Collections.emptyMap();
                                                                                    if (cursorQuery2 != null) {
                                                                                        cursorQuery2.close();
                                                                                    }
                                                                                    arrayMap4.put(strZzh2, mapEmptyMap);
                                                                                    it6 = mapEmptyMap.keySet().iterator();
                                                                                    while (it6.hasNext()) {
                                                                                        iIntValue2 = ((Integer) it6.next()).intValue();
                                                                                        set = this.zzb;
                                                                                        numValueOf2 = Integer.valueOf(iIntValue2);
                                                                                        if (set.contains(numValueOf2)) {
                                                                                            this.zzs.zzay().zzj().zzb("Skipping failed audience ID", numValueOf2);
                                                                                        } else {
                                                                                            it7 = ((List) mapEmptyMap.get(numValueOf2)).iterator();
                                                                                            zZzd = true;
                                                                                            while (true) {
                                                                                                if (it7.hasNext()) {
                                                                                                    map5 = mapEmptyMap;
                                                                                                    break;
                                                                                                }
                                                                                                com.google.android.gms.internal.measurement.zzej zzejVar4 = (com.google.android.gms.internal.measurement.zzej) it7.next();
                                                                                                zzwVar = new zzw(this, this.zza, iIntValue2, zzejVar4);
                                                                                                map5 = mapEmptyMap;
                                                                                                zZzd = zzwVar.zzd(this.zzd, this.zze, zzfoVarZza, j, zzaqVar, zzf(iIntValue2, zzejVar4.zzb()));
                                                                                                if (zZzd) {
                                                                                                    this.zzb.add(Integer.valueOf(iIntValue2));
                                                                                                    break;
                                                                                                }
                                                                                                zzd(Integer.valueOf(iIntValue2)).zzc(zzwVar);
                                                                                                mapEmptyMap = map5;
                                                                                            }
                                                                                            if (!zZzd) {
                                                                                                this.zzb.add(Integer.valueOf(iIntValue2));
                                                                                            }
                                                                                            mapEmptyMap = map5;
                                                                                        }
                                                                                    }
                                                                                    it4 = it5;
                                                                                    str5 = str9;
                                                                                    zzvVar = zzvVar;
                                                                                    str15 = str8;
                                                                                }
                                                                            } catch (SQLiteException e13) {
                                                                                e = e13;
                                                                                str6 = str11;
                                                                                it5 = it4;
                                                                                str8 = str15;
                                                                                str9 = str5;
                                                                                cursorQuery2 = null;
                                                                                zzakVarZzi7.zzs.zzay().zzd().zzc(str24, zzej.zzn(str10), e);
                                                                                mapEmptyMap = Collections.emptyMap();
                                                                                if (cursorQuery2 != null) {
                                                                                    cursorQuery2.close();
                                                                                }
                                                                                arrayMap4.put(strZzh2, mapEmptyMap);
                                                                                it6 = mapEmptyMap.keySet().iterator();
                                                                                while (it6.hasNext()) {
                                                                                    iIntValue2 = ((Integer) it6.next()).intValue();
                                                                                    set = this.zzb;
                                                                                    numValueOf2 = Integer.valueOf(iIntValue2);
                                                                                    if (set.contains(numValueOf2)) {
                                                                                        this.zzs.zzay().zzj().zzb("Skipping failed audience ID", numValueOf2);
                                                                                    } else {
                                                                                        it7 = ((List) mapEmptyMap.get(numValueOf2)).iterator();
                                                                                        zZzd = true;
                                                                                        while (true) {
                                                                                            if (it7.hasNext()) {
                                                                                                map5 = mapEmptyMap;
                                                                                                break;
                                                                                            }
                                                                                            com.google.android.gms.internal.measurement.zzej zzejVar5 = (com.google.android.gms.internal.measurement.zzej) it7.next();
                                                                                            zzwVar = new zzw(this, this.zza, iIntValue2, zzejVar5);
                                                                                            map5 = mapEmptyMap;
                                                                                            zZzd = zzwVar.zzd(this.zzd, this.zze, zzfoVarZza, j, zzaqVar, zzf(iIntValue2, zzejVar5.zzb()));
                                                                                            if (zZzd) {
                                                                                                this.zzb.add(Integer.valueOf(iIntValue2));
                                                                                                break;
                                                                                            }
                                                                                            zzd(Integer.valueOf(iIntValue2)).zzc(zzwVar);
                                                                                            mapEmptyMap = map5;
                                                                                        }
                                                                                        if (!zZzd) {
                                                                                            this.zzb.add(Integer.valueOf(iIntValue2));
                                                                                        }
                                                                                        mapEmptyMap = map5;
                                                                                    }
                                                                                }
                                                                                it4 = it5;
                                                                                str5 = str9;
                                                                                zzvVar = zzvVar;
                                                                                str15 = str8;
                                                                            }
                                                                        } catch (Throwable th2) {
                                                                            th = th2;
                                                                            cursor2 = null;
                                                                        }
                                                                    } catch (SQLiteException e14) {
                                                                        e = e14;
                                                                    }
                                                                } else {
                                                                    it5 = it4;
                                                                    str8 = str15;
                                                                    str9 = str5;
                                                                }
                                                                it6 = mapEmptyMap.keySet().iterator();
                                                                while (it6.hasNext()) {
                                                                    iIntValue2 = ((Integer) it6.next()).intValue();
                                                                    set = this.zzb;
                                                                    numValueOf2 = Integer.valueOf(iIntValue2);
                                                                    if (set.contains(numValueOf2)) {
                                                                        this.zzs.zzay().zzj().zzb("Skipping failed audience ID", numValueOf2);
                                                                    } else {
                                                                        it7 = ((List) mapEmptyMap.get(numValueOf2)).iterator();
                                                                        zZzd = true;
                                                                        while (true) {
                                                                            if (it7.hasNext()) {
                                                                                map5 = mapEmptyMap;
                                                                                break;
                                                                            }
                                                                            com.google.android.gms.internal.measurement.zzej zzejVar6 = (com.google.android.gms.internal.measurement.zzej) it7.next();
                                                                            zzwVar = new zzw(this, this.zza, iIntValue2, zzejVar6);
                                                                            map5 = mapEmptyMap;
                                                                            zZzd = zzwVar.zzd(this.zzd, this.zze, zzfoVarZza, j, zzaqVar, zzf(iIntValue2, zzejVar6.zzb()));
                                                                            if (zZzd) {
                                                                                this.zzb.add(Integer.valueOf(iIntValue2));
                                                                                break;
                                                                            }
                                                                            zzd(Integer.valueOf(iIntValue2)).zzc(zzwVar);
                                                                            mapEmptyMap = map5;
                                                                        }
                                                                        if (!zZzd) {
                                                                            this.zzb.add(Integer.valueOf(iIntValue2));
                                                                        }
                                                                        mapEmptyMap = map5;
                                                                    }
                                                                }
                                                                it4 = it5;
                                                                str5 = str9;
                                                                zzvVar = zzvVar;
                                                                str15 = str8;
                                                            }
                                                        }
                                                    }
                                                    str12 = str15;
                                                    if (!list2.isEmpty()) {
                                                        arrayMap6 = new ArrayMap();
                                                        it9 = list2.iterator();
                                                        while (it9.hasNext()) {
                                                            com.google.android.gms.internal.measurement.zzgh zzghVar = (com.google.android.gms.internal.measurement.zzgh) it9.next();
                                                            strZzf = zzghVar.zzf();
                                                            mapEmptyMap2 = (Map) arrayMap6.get(strZzf);
                                                            if (mapEmptyMap2 == null) {
                                                                zzak zzakVarZzi8 = this.zzf.zzi();
                                                                str14 = this.zza;
                                                                zzakVarZzi8.zzW();
                                                                zzakVarZzi8.zzg();
                                                                Preconditions.checkNotEmpty(str14);
                                                                Preconditions.checkNotEmpty(strZzf);
                                                                arrayMap7 = new ArrayMap();
                                                                SQLiteDatabase sQLiteDatabaseZzh2 = zzakVarZzi8.zzh();
                                                                try {
                                                                    try {
                                                                        String[] strArr2 = new String[2];
                                                                        try {
                                                                            strArr2[0] = str6;
                                                                            strArr2[1] = Constants.ScionAnalytics.MessageType.DATA_MESSAGE;
                                                                            String[] strArr3 = new String[2];
                                                                            strArr3[0] = str14;
                                                                            strArr3[1] = strZzf;
                                                                            cursorQuery3 = sQLiteDatabaseZzh2.query("property_filters", strArr2, "app_id=? AND property_name=?", strArr3, null, null, null);
                                                                            try {
                                                                                try {
                                                                                    if (cursorQuery3.moveToFirst()) {
                                                                                        do {
                                                                                            try {
                                                                                                com.google.android.gms.internal.measurement.zzes zzesVar2 = (com.google.android.gms.internal.measurement.zzes) ((com.google.android.gms.internal.measurement.zzer) zzkt.zzl(com.google.android.gms.internal.measurement.zzes.zzc(), cursorQuery3.getBlob(1))).zzay();
                                                                                                try {
                                                                                                    numValueOf7 = Integer.valueOf(cursorQuery3.getInt(0));
                                                                                                    arrayList4 = (List) arrayMap7.get(numValueOf7);
                                                                                                    if (arrayList4 == null) {
                                                                                                        arrayList4 = new ArrayList();
                                                                                                        arrayMap7.put(numValueOf7, arrayList4);
                                                                                                    }
                                                                                                    arrayList4.add(zzesVar2);
                                                                                                } catch (SQLiteException e15) {
                                                                                                    e = e15;
                                                                                                    zzakVarZzi8.zzs.zzay().zzd().zzc(str24, zzej.zzn(str14), e);
                                                                                                    mapEmptyMap2 = Collections.emptyMap();
                                                                                                    if (cursorQuery3 != null) {
                                                                                                        cursorQuery3.close();
                                                                                                    }
                                                                                                }
                                                                                            } catch (IOException e16) {
                                                                                                zzakVarZzi8.zzs.zzay().zzd().zzc("Failed to merge filter", zzej.zzn(str14), e16);
                                                                                            }
                                                                                        } while (cursorQuery3.moveToNext());
                                                                                        if (cursorQuery3 != null) {
                                                                                            cursorQuery3.close();
                                                                                        }
                                                                                        mapEmptyMap2 = arrayMap7;
                                                                                    } else {
                                                                                        mapEmptyMap2 = Collections.emptyMap();
                                                                                        if (cursorQuery3 != null) {
                                                                                            cursorQuery3.close();
                                                                                        }
                                                                                    }
                                                                                } catch (SQLiteException e17) {
                                                                                    e = e17;
                                                                                }
                                                                                arrayMap6.put(strZzf, mapEmptyMap2);
                                                                            } catch (Throwable th3) {
                                                                                th = th3;
                                                                                cursor3 = cursorQuery3;
                                                                                if (cursor3 != null) {
                                                                                    cursor3.close();
                                                                                }
                                                                                throw th;
                                                                            }
                                                                        } catch (SQLiteException e18) {
                                                                            e = e18;
                                                                            cursorQuery3 = null;
                                                                            zzakVarZzi8.zzs.zzay().zzd().zzc(str24, zzej.zzn(str14), e);
                                                                            mapEmptyMap2 = Collections.emptyMap();
                                                                            if (cursorQuery3 != null) {
                                                                                cursorQuery3.close();
                                                                            }
                                                                            arrayMap6.put(strZzf, mapEmptyMap2);
                                                                            it10 = mapEmptyMap2.keySet().iterator();
                                                                            while (it10.hasNext()) {
                                                                                iIntValue3 = ((Integer) it10.next()).intValue();
                                                                                set2 = this.zzb;
                                                                                numValueOf4 = Integer.valueOf(iIntValue3);
                                                                                if (set2.contains(numValueOf4)) {
                                                                                    this.zzs.zzay().zzj().zzb("Skipping failed audience ID", numValueOf4);
                                                                                    break;
                                                                                }
                                                                                it11 = ((List) mapEmptyMap2.get(numValueOf4)).iterator();
                                                                                zZzd2 = true;
                                                                                while (true) {
                                                                                    if (it11.hasNext()) {
                                                                                        zzesVar = (com.google.android.gms.internal.measurement.zzes) it11.next();
                                                                                        if (Log.isLoggable(this.zzs.zzay().zzq(), 2)) {
                                                                                            zzeh zzehVarZzj = this.zzs.zzay().zzj();
                                                                                            Integer numValueOf12 = Integer.valueOf(iIntValue3);
                                                                                            if (zzesVar.zzj()) {
                                                                                                numValueOf6 = Integer.valueOf(zzesVar.zza());
                                                                                            } else {
                                                                                                numValueOf6 = null;
                                                                                            }
                                                                                            zzehVarZzj.zzd("Evaluating filter. audience, filter, property", numValueOf12, numValueOf6, this.zzs.zzj().zzf(zzesVar.zze()));
                                                                                            this.zzs.zzay().zzj().zzb("Filter definition", this.zzf.zzu().zzp(zzesVar));
                                                                                        }
                                                                                        if (zzesVar.zzj()) {
                                                                                        }
                                                                                        zzeh zzehVarZzk = this.zzs.zzay().zzk();
                                                                                        Object objZzn = zzej.zzn(this.zza);
                                                                                        if (zzesVar.zzj()) {
                                                                                            numValueOf5 = Integer.valueOf(zzesVar.zza());
                                                                                        } else {
                                                                                            numValueOf5 = null;
                                                                                        }
                                                                                        zzehVarZzk.zzc("Invalid property filter ID. appId, id", objZzn, String.valueOf(numValueOf5));
                                                                                        this.zzb.add(Integer.valueOf(iIntValue3));
                                                                                    }
                                                                                    if (!zZzd2) {
                                                                                        this.zzb.add(Integer.valueOf(iIntValue3));
                                                                                    }
                                                                                    zzd(Integer.valueOf(iIntValue3)).zzc(zzyVar);
                                                                                }
                                                                            }
                                                                        }
                                                                    } catch (Throwable th4) {
                                                                        th = th4;
                                                                        cursor3 = null;
                                                                    }
                                                                } catch (SQLiteException e19) {
                                                                    e = e19;
                                                                }
                                                            }
                                                            it10 = mapEmptyMap2.keySet().iterator();
                                                            while (it10.hasNext()) {
                                                                iIntValue3 = ((Integer) it10.next()).intValue();
                                                                set2 = this.zzb;
                                                                numValueOf4 = Integer.valueOf(iIntValue3);
                                                                if (set2.contains(numValueOf4)) {
                                                                    this.zzs.zzay().zzj().zzb("Skipping failed audience ID", numValueOf4);
                                                                    break;
                                                                    break;
                                                                }
                                                                it11 = ((List) mapEmptyMap2.get(numValueOf4)).iterator();
                                                                zZzd2 = true;
                                                                while (true) {
                                                                    if (it11.hasNext()) {
                                                                        zzesVar = (com.google.android.gms.internal.measurement.zzes) it11.next();
                                                                        if (Log.isLoggable(this.zzs.zzay().zzq(), 2)) {
                                                                            zzeh zzehVarZzj2 = this.zzs.zzay().zzj();
                                                                            Integer numValueOf13 = Integer.valueOf(iIntValue3);
                                                                            if (zzesVar.zzj()) {
                                                                                numValueOf6 = Integer.valueOf(zzesVar.zza());
                                                                            } else {
                                                                                numValueOf6 = null;
                                                                            }
                                                                            zzehVarZzj2.zzd("Evaluating filter. audience, filter, property", numValueOf13, numValueOf6, this.zzs.zzj().zzf(zzesVar.zze()));
                                                                            this.zzs.zzay().zzj().zzb("Filter definition", this.zzf.zzu().zzp(zzesVar));
                                                                        }
                                                                        if (zzesVar.zzj()) {
                                                                        }
                                                                        zzeh zzehVarZzk2 = this.zzs.zzay().zzk();
                                                                        Object objZzn2 = zzej.zzn(this.zza);
                                                                        if (zzesVar.zzj()) {
                                                                            numValueOf5 = Integer.valueOf(zzesVar.zza());
                                                                        } else {
                                                                            numValueOf5 = null;
                                                                        }
                                                                        zzehVarZzk2.zzc("Invalid property filter ID. appId, id", objZzn2, String.valueOf(numValueOf5));
                                                                        this.zzb.add(Integer.valueOf(iIntValue3));
                                                                    }
                                                                    if (!zZzd2) {
                                                                        this.zzb.add(Integer.valueOf(iIntValue3));
                                                                    }
                                                                    zzd(Integer.valueOf(iIntValue3)).zzc(zzyVar);
                                                                }
                                                            }
                                                        }
                                                    }
                                                    arrayList3 = new ArrayList();
                                                    Set setKeySet = this.zzc.keySet();
                                                    setKeySet.removeAll(this.zzb);
                                                    it8 = setKeySet.iterator();
                                                    while (it8.hasNext()) {
                                                        int iIntValue5 = ((Integer) it8.next()).intValue();
                                                        Map map7 = this.zzc;
                                                        Integer numValueOf14 = Integer.valueOf(iIntValue5);
                                                        zzt zztVar = (zzt) map7.get(numValueOf14);
                                                        Preconditions.checkNotNull(zztVar);
                                                        com.google.android.gms.internal.measurement.zzfk zzfkVarZza = zztVar.zza(iIntValue5);
                                                        arrayList3.add(zzfkVarZza);
                                                        zzakVarZzi2 = this.zzf.zzi();
                                                        str13 = this.zza;
                                                        com.google.android.gms.internal.measurement.zzgd zzgdVarZzd = zzfkVarZza.zzd();
                                                        zzakVarZzi2.zzW();
                                                        zzakVarZzi2.zzg();
                                                        Preconditions.checkNotEmpty(str13);
                                                        Preconditions.checkNotNull(zzgdVarZzd);
                                                        byte[] bArrZzbq = zzgdVarZzd.zzbq();
                                                        contentValues = new ContentValues();
                                                        contentValues.put("app_id", str13);
                                                        String str25 = str6;
                                                        contentValues.put(str25, numValueOf14);
                                                        String str26 = str12;
                                                        contentValues.put(str26, bArrZzbq);
                                                        try {
                                                            try {
                                                                if (zzakVarZzi2.zzh().insertWithOnConflict("audience_filter_values", null, contentValues, 5) == -1) {
                                                                    zzakVarZzi2.zzs.zzay().zzd().zzb("Failed to insert filter results (got -1). appId", zzej.zzn(str13));
                                                                }
                                                            } catch (SQLiteException e20) {
                                                                e = e20;
                                                                zzakVarZzi2.zzs.zzay().zzd().zzc("Error storing filter results. appId", zzej.zzn(str13), e);
                                                            }
                                                        } catch (SQLiteException e21) {
                                                            e = e21;
                                                        }
                                                        str12 = str26;
                                                        str6 = str25;
                                                    }
                                                    return arrayList3;
                                                }
                                            } catch (Throwable th5) {
                                                th = th5;
                                                if (Zzh != 0) {
                                                    Zzh.close();
                                                }
                                                throw th;
                                            }
                                        } catch (SQLiteException e22) {
                                            e = e22;
                                            cursorRawQuery = null;
                                        } catch (Throwable th6) {
                                            th = th6;
                                            Zzh = 0;
                                            if (Zzh != 0) {
                                                Zzh.close();
                                            }
                                            throw th;
                                        }
                                        it3 = map2.keySet().iterator();
                                        while (it3.hasNext()) {
                                            int iIntValue6 = ((Integer) it3.next()).intValue();
                                            Integer numValueOf15 = Integer.valueOf(iIntValue6);
                                            zzgdVar2 = (com.google.android.gms.internal.measurement.zzgd) map2.get(numValueOf15);
                                            list4 = (List) arrayMap3.get(numValueOf15);
                                            if (list4 != null) {
                                            }
                                            map4 = arrayMap3;
                                            arrayMap2.put(numValueOf15, zzgdVar2);
                                            arrayMap3 = map4;
                                            it3 = it3;
                                        }
                                    }
                                    map3 = arrayMap2;
                                } else {
                                    map3 = map2;
                                }
                                it = hashSet.iterator();
                                while (it.hasNext()) {
                                    iIntValue = ((Integer) it.next()).intValue();
                                    zzgdVar = (com.google.android.gms.internal.measurement.zzgd) map3.get(Integer.valueOf(iIntValue));
                                    bitSet = new BitSet();
                                    bitSet2 = new BitSet();
                                    arrayMap = new ArrayMap();
                                    if (zzgdVar != null) {
                                        while (r2.hasNext()) {
                                            if (zzfmVar.zzh()) {
                                                Integer numValueOf16 = Integer.valueOf(zzfmVar.zza());
                                                if (zzfmVar.zzg()) {
                                                    lValueOf = Long.valueOf(zzfmVar.zzb());
                                                } else {
                                                    lValueOf = null;
                                                }
                                                arrayMap.put(numValueOf16, lValueOf);
                                            }
                                        }
                                    }
                                    ArrayMap arrayMap11 = new ArrayMap();
                                    if (zzgdVar != null) {
                                        it2 = zzgdVar.zzm().iterator();
                                        while (it2.hasNext()) {
                                            zzgfVar = (com.google.android.gms.internal.measurement.zzgf) it2.next();
                                            if (!zzgfVar.zzi()) {
                                            }
                                        }
                                    }
                                    Map map8 = map3;
                                    if (zzgdVar != null) {
                                        i3 = 0;
                                        while (i3 < zzgdVar.zzd() * 64) {
                                            if (zzkt.zzv(zzgdVar.zzn(), i3)) {
                                                str2 = str18;
                                                str3 = str17;
                                                this.zzs.zzay().zzj().zzc("Filter already evaluated. audience ID, filter ID", Integer.valueOf(iIntValue), Integer.valueOf(i3));
                                                bitSet2.set(i3);
                                                if (zzkt.zzv(zzgdVar.zzk(), i3)) {
                                                    bitSet.set(i3);
                                                }
                                                i3++;
                                                str18 = str2;
                                                str17 = str3;
                                            } else {
                                                str2 = str18;
                                                str3 = str17;
                                            }
                                            arrayMap.remove(Integer.valueOf(i3));
                                            i3++;
                                            str18 = str2;
                                            str17 = str3;
                                        }
                                    }
                                    String str27 = str18;
                                    String str28 = str17;
                                    Integer numValueOf17 = Integer.valueOf(iIntValue);
                                    com.google.android.gms.internal.measurement.zzgd zzgdVar4 = (com.google.android.gms.internal.measurement.zzgd) map2.get(numValueOf17);
                                    if (!zZzs2) {
                                    }
                                    this.zzc.put(Integer.valueOf(iIntValue), new zzt(this, this.zza, zzgdVar4, bitSet, bitSet2, arrayMap, arrayMap11, null));
                                    map2 = map2;
                                    str18 = str27;
                                    map = map;
                                    map3 = map8;
                                    str17 = str28;
                                }
                            }
                            String str29 = str18;
                            str5 = str17;
                            str6 = str19;
                            zzuVar = null;
                            if (!list.isEmpty()) {
                                zzvVar = new zzv(this, zzuVar);
                                arrayMap4 = new ArrayMap();
                                it4 = list.iterator();
                                while (it4.hasNext()) {
                                    zzfoVar = (com.google.android.gms.internal.measurement.zzfo) it4.next();
                                    zzfoVarZza = zzvVar.zza(this.zza, zzfoVar);
                                    if (zzfoVarZza != null) {
                                        zzakVarZzi = this.zzf.zzi();
                                        str7 = this.zza;
                                        strZzh = zzfoVarZza.zzh();
                                        zzaqVarZzn = zzakVarZzi.zzn(str7, zzfoVar.zzh());
                                        if (zzaqVarZzn == null) {
                                            zzakVarZzi.zzs.zzay().zzk().zzc("Event aggregate wasn't created during raw event logging. appId, event", zzej.zzn(str7), zzakVarZzi.zzs.zzj().zzd(strZzh));
                                            zzaqVar = new zzaq(str7, zzfoVar.zzh(), 1L, 1L, 1L, zzfoVar.zzd(), 0L, null, null, null, null);
                                        } else {
                                            zzaqVar = new zzaq(zzaqVarZzn.zza, zzaqVarZzn.zzb, zzaqVarZzn.zzc + 1, zzaqVarZzn.zzd + 1, zzaqVarZzn.zze + 1, zzaqVarZzn.zzf, zzaqVarZzn.zzg, zzaqVarZzn.zzh, zzaqVarZzn.zzi, zzaqVarZzn.zzj, zzaqVarZzn.zzk);
                                        }
                                        this.zzf.zzi().zzE(zzaqVar);
                                        j = zzaqVar.zzc;
                                        strZzh2 = zzfoVarZza.zzh();
                                        mapEmptyMap = (Map) arrayMap4.get(strZzh2);
                                        if (mapEmptyMap == null) {
                                            zzak zzakVarZzi9 = this.zzf.zzi();
                                            str10 = this.zza;
                                            zzakVarZzi9.zzW();
                                            zzakVarZzi9.zzg();
                                            Preconditions.checkNotEmpty(str10);
                                            Preconditions.checkNotEmpty(strZzh2);
                                            arrayMap5 = new ArrayMap();
                                            SQLiteDatabase sQLiteDatabaseZzh3 = zzakVarZzi9.zzh();
                                            String[] strArr4 = new String[2];
                                            str11 = str6;
                                            strArr4[0] = str11;
                                            strArr4[1] = Constants.ScionAnalytics.MessageType.DATA_MESSAGE;
                                            it5 = it4;
                                            str8 = str15;
                                            cursorQuery2 = sQLiteDatabaseZzh3.query("event_filters", strArr4, "app_id=? AND event_name=?", new String[]{str10, strZzh2}, null, null, null);
                                            if (cursorQuery2.moveToFirst()) {
                                                while (true) {
                                                    com.google.android.gms.internal.measurement.zzej zzejVar7 = (com.google.android.gms.internal.measurement.zzej) ((com.google.android.gms.internal.measurement.zzei) zzkt.zzl(com.google.android.gms.internal.measurement.zzej.zzc(), cursorQuery2.getBlob(1))).zzay();
                                                    numValueOf3 = Integer.valueOf(cursorQuery2.getInt(0));
                                                    list5 = (List) arrayMap5.get(numValueOf3);
                                                    if (list5 == null) {
                                                        str6 = str11;
                                                        arrayList2 = new ArrayList();
                                                        arrayMap5.put(numValueOf3, arrayList2);
                                                    } else {
                                                        str6 = str11;
                                                        arrayList2 = list5;
                                                    }
                                                    arrayList2.add(zzejVar7);
                                                    str9 = str5;
                                                    if (!cursorQuery2.moveToNext()) {
                                                        break;
                                                        break;
                                                    }
                                                    str5 = str9;
                                                    arrayMap5 = arrayMap5;
                                                    str11 = str6;
                                                }
                                                if (cursorQuery2 != null) {
                                                    cursorQuery2.close();
                                                }
                                                mapEmptyMap = arrayMap5;
                                            } else {
                                                str6 = str11;
                                                str9 = str5;
                                                mapEmptyMap = Collections.emptyMap();
                                                if (cursorQuery2 != null) {
                                                    cursorQuery2.close();
                                                }
                                            }
                                            arrayMap4.put(strZzh2, mapEmptyMap);
                                        } else {
                                            it5 = it4;
                                            str8 = str15;
                                            str9 = str5;
                                        }
                                        it6 = mapEmptyMap.keySet().iterator();
                                        while (it6.hasNext()) {
                                            iIntValue2 = ((Integer) it6.next()).intValue();
                                            set = this.zzb;
                                            numValueOf2 = Integer.valueOf(iIntValue2);
                                            if (set.contains(numValueOf2)) {
                                                this.zzs.zzay().zzj().zzb("Skipping failed audience ID", numValueOf2);
                                            } else {
                                                it7 = ((List) mapEmptyMap.get(numValueOf2)).iterator();
                                                zZzd = true;
                                                while (true) {
                                                    if (it7.hasNext()) {
                                                        map5 = mapEmptyMap;
                                                        break;
                                                    }
                                                    com.google.android.gms.internal.measurement.zzej zzejVar8 = (com.google.android.gms.internal.measurement.zzej) it7.next();
                                                    zzwVar = new zzw(this, this.zza, iIntValue2, zzejVar8);
                                                    map5 = mapEmptyMap;
                                                    zZzd = zzwVar.zzd(this.zzd, this.zze, zzfoVarZza, j, zzaqVar, zzf(iIntValue2, zzejVar8.zzb()));
                                                    if (zZzd) {
                                                        this.zzb.add(Integer.valueOf(iIntValue2));
                                                        break;
                                                    }
                                                    zzd(Integer.valueOf(iIntValue2)).zzc(zzwVar);
                                                    mapEmptyMap = map5;
                                                }
                                                if (!zZzd) {
                                                    this.zzb.add(Integer.valueOf(iIntValue2));
                                                }
                                                mapEmptyMap = map5;
                                            }
                                        }
                                        it4 = it5;
                                        str5 = str9;
                                        zzvVar = zzvVar;
                                        str15 = str8;
                                    }
                                }
                            }
                            str12 = str15;
                            if (!list2.isEmpty()) {
                                arrayMap6 = new ArrayMap();
                                it9 = list2.iterator();
                                while (it9.hasNext()) {
                                    com.google.android.gms.internal.measurement.zzgh zzghVar2 = (com.google.android.gms.internal.measurement.zzgh) it9.next();
                                    strZzf = zzghVar2.zzf();
                                    mapEmptyMap2 = (Map) arrayMap6.get(strZzf);
                                    if (mapEmptyMap2 == null) {
                                        zzak zzakVarZzi10 = this.zzf.zzi();
                                        str14 = this.zza;
                                        zzakVarZzi10.zzW();
                                        zzakVarZzi10.zzg();
                                        Preconditions.checkNotEmpty(str14);
                                        Preconditions.checkNotEmpty(strZzf);
                                        arrayMap7 = new ArrayMap();
                                        SQLiteDatabase sQLiteDatabaseZzh4 = zzakVarZzi10.zzh();
                                        String[] strArr5 = new String[2];
                                        strArr5[0] = str6;
                                        strArr5[1] = Constants.ScionAnalytics.MessageType.DATA_MESSAGE;
                                        String[] strArr6 = new String[2];
                                        strArr6[0] = str14;
                                        strArr6[1] = strZzf;
                                        cursorQuery3 = sQLiteDatabaseZzh4.query("property_filters", strArr5, "app_id=? AND property_name=?", strArr6, null, null, null);
                                        if (cursorQuery3.moveToFirst()) {
                                            do {
                                                com.google.android.gms.internal.measurement.zzes zzesVar3 = (com.google.android.gms.internal.measurement.zzes) ((com.google.android.gms.internal.measurement.zzer) zzkt.zzl(com.google.android.gms.internal.measurement.zzes.zzc(), cursorQuery3.getBlob(1))).zzay();
                                                numValueOf7 = Integer.valueOf(cursorQuery3.getInt(0));
                                                arrayList4 = (List) arrayMap7.get(numValueOf7);
                                                if (arrayList4 == null) {
                                                    arrayList4 = new ArrayList();
                                                    arrayMap7.put(numValueOf7, arrayList4);
                                                }
                                                arrayList4.add(zzesVar3);
                                            } while (cursorQuery3.moveToNext());
                                            if (cursorQuery3 != null) {
                                                cursorQuery3.close();
                                            }
                                            mapEmptyMap2 = arrayMap7;
                                        } else {
                                            mapEmptyMap2 = Collections.emptyMap();
                                            if (cursorQuery3 != null) {
                                                cursorQuery3.close();
                                            }
                                        }
                                        arrayMap6.put(strZzf, mapEmptyMap2);
                                    }
                                    it10 = mapEmptyMap2.keySet().iterator();
                                    while (it10.hasNext()) {
                                        iIntValue3 = ((Integer) it10.next()).intValue();
                                        set2 = this.zzb;
                                        numValueOf4 = Integer.valueOf(iIntValue3);
                                        if (set2.contains(numValueOf4)) {
                                            this.zzs.zzay().zzj().zzb("Skipping failed audience ID", numValueOf4);
                                            break;
                                            break;
                                        }
                                        it11 = ((List) mapEmptyMap2.get(numValueOf4)).iterator();
                                        zZzd2 = true;
                                        while (true) {
                                            if (it11.hasNext()) {
                                                zzesVar = (com.google.android.gms.internal.measurement.zzes) it11.next();
                                                if (Log.isLoggable(this.zzs.zzay().zzq(), 2)) {
                                                    zzeh zzehVarZzj3 = this.zzs.zzay().zzj();
                                                    Integer numValueOf18 = Integer.valueOf(iIntValue3);
                                                    if (zzesVar.zzj()) {
                                                        numValueOf6 = Integer.valueOf(zzesVar.zza());
                                                    } else {
                                                        numValueOf6 = null;
                                                    }
                                                    zzehVarZzj3.zzd("Evaluating filter. audience, filter, property", numValueOf18, numValueOf6, this.zzs.zzj().zzf(zzesVar.zze()));
                                                    this.zzs.zzay().zzj().zzb("Filter definition", this.zzf.zzu().zzp(zzesVar));
                                                }
                                                if (zzesVar.zzj()) {
                                                }
                                                zzeh zzehVarZzk3 = this.zzs.zzay().zzk();
                                                Object objZzn3 = zzej.zzn(this.zza);
                                                if (zzesVar.zzj()) {
                                                    numValueOf5 = Integer.valueOf(zzesVar.zza());
                                                } else {
                                                    numValueOf5 = null;
                                                }
                                                zzehVarZzk3.zzc("Invalid property filter ID. appId, id", objZzn3, String.valueOf(numValueOf5));
                                                this.zzb.add(Integer.valueOf(iIntValue3));
                                            }
                                            if (!zZzd2) {
                                                this.zzb.add(Integer.valueOf(iIntValue3));
                                            }
                                            zzd(Integer.valueOf(iIntValue3)).zzc(zzyVar);
                                        }
                                    }
                                }
                            }
                            arrayList3 = new ArrayList();
                            Set setKeySet2 = this.zzc.keySet();
                            setKeySet2.removeAll(this.zzb);
                            it8 = setKeySet2.iterator();
                            while (it8.hasNext()) {
                                int iIntValue7 = ((Integer) it8.next()).intValue();
                                Map map9 = this.zzc;
                                Integer numValueOf19 = Integer.valueOf(iIntValue7);
                                zzt zztVar2 = (zzt) map9.get(numValueOf19);
                                Preconditions.checkNotNull(zztVar2);
                                com.google.android.gms.internal.measurement.zzfk zzfkVarZza2 = zztVar2.zza(iIntValue7);
                                arrayList3.add(zzfkVarZza2);
                                zzakVarZzi2 = this.zzf.zzi();
                                str13 = this.zza;
                                com.google.android.gms.internal.measurement.zzgd zzgdVarZzd2 = zzfkVarZza2.zzd();
                                zzakVarZzi2.zzW();
                                zzakVarZzi2.zzg();
                                Preconditions.checkNotEmpty(str13);
                                Preconditions.checkNotNull(zzgdVarZzd2);
                                byte[] bArrZzbq2 = zzgdVarZzd2.zzbq();
                                contentValues = new ContentValues();
                                contentValues.put("app_id", str13);
                                String str210 = str6;
                                contentValues.put(str210, numValueOf19);
                                String str211 = str12;
                                contentValues.put(str211, bArrZzbq2);
                                if (zzakVarZzi2.zzh().insertWithOnConflict("audience_filter_values", null, contentValues, 5) == -1) {
                                    zzakVarZzi2.zzs.zzay().zzd().zzb("Failed to insert filter results (got -1). appId", zzej.zzn(str13));
                                }
                                str12 = str211;
                                str6 = str210;
                            }
                            return arrayList3;
                        } catch (Throwable th7) {
                            th = th7;
                            cursor = cursorQuery;
                            if (cursor != null) {
                                cursor.close();
                            }
                            throw th;
                        }
                    }
                } catch (Throwable th8) {
                    th = th8;
                    if (r5 != 0) {
                        r5.close();
                    }
                    throw th;
                }
            } catch (SQLiteException e23) {
                e = e23;
                cursorQuery4 = null;
            } catch (Throwable th9) {
                th = th9;
                r5 = 0;
                if (r5 != 0) {
                    r5.close();
                }
                throw th;
            }
        } else {
            map = mapEmptyMap3;
        }
        zzak zzakVarZzi11 = this.zzf.zzi();
        String str212 = this.zza;
        zzakVarZzi11.zzW();
        zzakVarZzi11.zzg();
        Preconditions.checkNotEmpty(str212);
        try {
            cursorQuery = zzakVarZzi11.zzh().query("audience_filter_values", new String[]{"audience_id", "current_results"}, "app_id=?", new String[]{str212}, null, null, null);
            if (cursorQuery.moveToFirst()) {
                Map mapEmptyMap6 = Collections.emptyMap();
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                map2 = mapEmptyMap6;
                str19 = "audience_id";
            } else {
                arrayMap8 = new ArrayMap();
                while (true) {
                    i4 = cursorQuery.getInt(0);
                    arrayMap8.put(Integer.valueOf(i4), (com.google.android.gms.internal.measurement.zzgd) ((com.google.android.gms.internal.measurement.zzgc) zzkt.zzl(com.google.android.gms.internal.measurement.zzgd.zzf(), cursorQuery.getBlob(1))).zzay());
                    if (!cursorQuery.moveToNext()) {
                        break;
                        break;
                    }
                    arrayMap8 = arrayMap8;
                    str19 = str19;
                }
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                map2 = arrayMap8;
            }
        } catch (SQLiteException e24) {
            e = e24;
            str19 = "audience_id";
            cursorQuery = null;
        } catch (Throwable th10) {
            th = th10;
            cursor = null;
        }
        if (!map2.isEmpty()) {
            HashSet hashSet2 = new HashSet(map2.keySet());
            if (z) {
                str4 = this.zza;
                Preconditions.checkNotEmpty(str4);
                Preconditions.checkNotNull(map2);
                arrayMap2 = new ArrayMap();
                if (!map2.isEmpty()) {
                    zzak zzakVarZzi12 = this.zzf.zzi();
                    zzakVarZzi12.zzW();
                    zzakVarZzi12.zzg();
                    Preconditions.checkNotEmpty(str4);
                    arrayMap3 = new ArrayMap();
                    Zzh = zzakVarZzi12.zzh();
                    cursorRawQuery = Zzh.rawQuery("select audience_id, filter_id from event_filters where app_id = ? and session_scoped = 1 UNION select audience_id, filter_id from property_filters where app_id = ? and session_scoped = 1;", new String[]{str4, str4});
                    if (cursorRawQuery.moveToFirst()) {
                        do {
                            numValueOf = Integer.valueOf(cursorRawQuery.getInt(0));
                            arrayList = (List) arrayMap3.get(numValueOf);
                            if (arrayList == null) {
                                arrayList = new ArrayList();
                                arrayMap3.put(numValueOf, arrayList);
                            }
                            arrayList.add(Integer.valueOf(cursorRawQuery.getInt(1)));
                        } while (cursorRawQuery.moveToNext());
                        if (cursorRawQuery != null) {
                            cursorRawQuery.close();
                        }
                    } else {
                        arrayMap3 = Collections.emptyMap();
                        if (cursorRawQuery != null) {
                            cursorRawQuery.close();
                        }
                    }
                    it3 = map2.keySet().iterator();
                    while (it3.hasNext()) {
                        int iIntValue8 = ((Integer) it3.next()).intValue();
                        Integer numValueOf110 = Integer.valueOf(iIntValue8);
                        zzgdVar2 = (com.google.android.gms.internal.measurement.zzgd) map2.get(numValueOf110);
                        list4 = (List) arrayMap3.get(numValueOf110);
                        if (list4 != null || list4.isEmpty()) {
                            map4 = arrayMap3;
                            arrayMap2.put(numValueOf110, zzgdVar2);
                            arrayMap3 = map4;
                            it3 = it3;
                        } else {
                            map4 = arrayMap3;
                            List listZzq = this.zzf.zzu().zzq(zzgdVar2.zzk(), list4);
                            if (listZzq.isEmpty()) {
                                arrayMap3 = map4;
                            } else {
                                com.google.android.gms.internal.measurement.zzgc zzgcVar = (com.google.android.gms.internal.measurement.zzgc) zzgdVar2.zzbt();
                                zzgcVar.zze();
                                zzgcVar.zzb(listZzq);
                                List listZzq2 = this.zzf.zzu().zzq(zzgdVar2.zzn(), list4);
                                zzgcVar.zzf();
                                zzgcVar.zzd(listZzq2);
                                for (int i6 = 0; i6 < zzgdVar2.zza(); i6++) {
                                    if (list4.contains(Integer.valueOf(zzgdVar2.zze(i6).zza()))) {
                                        zzgcVar.zzg(i6);
                                    }
                                }
                                for (int i7 = 0; i7 < zzgdVar2.zzc(); i7++) {
                                    if (list4.contains(Integer.valueOf(zzgdVar2.zzi(i7).zzb()))) {
                                        zzgcVar.zzh(i7);
                                    }
                                }
                                arrayMap2.put(Integer.valueOf(iIntValue8), (com.google.android.gms.internal.measurement.zzgd) zzgcVar.zzay());
                                arrayMap3 = map4;
                                it3 = it3;
                            }
                        }
                    }
                }
                map3 = arrayMap2;
            } else {
                map3 = map2;
            }
            it = hashSet2.iterator();
            while (it.hasNext()) {
                iIntValue = ((Integer) it.next()).intValue();
                zzgdVar = (com.google.android.gms.internal.measurement.zzgd) map3.get(Integer.valueOf(iIntValue));
                bitSet = new BitSet();
                bitSet2 = new BitSet();
                arrayMap = new ArrayMap();
                if (zzgdVar != null && zzgdVar.zza() != 0) {
                    while (r2.hasNext()) {
                        if (zzfmVar.zzh()) {
                            Integer numValueOf111 = Integer.valueOf(zzfmVar.zza());
                            if (zzfmVar.zzg()) {
                                lValueOf = Long.valueOf(zzfmVar.zzb());
                            } else {
                                lValueOf = null;
                            }
                            arrayMap.put(numValueOf111, lValueOf);
                        }
                    }
                }
                ArrayMap arrayMap12 = new ArrayMap();
                if (zzgdVar != null && zzgdVar.zzc() != 0) {
                    it2 = zzgdVar.zzm().iterator();
                    while (it2.hasNext()) {
                        zzgfVar = (com.google.android.gms.internal.measurement.zzgf) it2.next();
                        if (!zzgfVar.zzi() && zzgfVar.zza() > 0) {
                            arrayMap12.put(Integer.valueOf(zzgfVar.zzb()), Long.valueOf(zzgfVar.zzc(zzgfVar.zza() - 1)));
                            map3 = map3;
                            it2 = it2;
                        }
                    }
                }
                Map map10 = map3;
                if (zzgdVar != null) {
                    i3 = 0;
                    while (i3 < zzgdVar.zzd() * 64) {
                        if (zzkt.zzv(zzgdVar.zzn(), i3)) {
                            str2 = str18;
                            str3 = str17;
                            this.zzs.zzay().zzj().zzc("Filter already evaluated. audience ID, filter ID", Integer.valueOf(iIntValue), Integer.valueOf(i3));
                            bitSet2.set(i3);
                            if (zzkt.zzv(zzgdVar.zzk(), i3)) {
                                bitSet.set(i3);
                            }
                            i3++;
                            str18 = str2;
                            str17 = str3;
                        } else {
                            str2 = str18;
                            str3 = str17;
                        }
                        arrayMap.remove(Integer.valueOf(i3));
                        i3++;
                        str18 = str2;
                        str17 = str3;
                    }
                }
                String str213 = str18;
                String str214 = str17;
                Integer numValueOf112 = Integer.valueOf(iIntValue);
                com.google.android.gms.internal.measurement.zzgd zzgdVar5 = (com.google.android.gms.internal.measurement.zzgd) map2.get(numValueOf112);
                if (!zZzs2 && zZzs && (list3 = (List) map.get(numValueOf112)) != null && this.zze != null && this.zzd != null) {
                    for (com.google.android.gms.internal.measurement.zzej zzejVar9 : list3) {
                        int iZzb = zzejVar9.zzb();
                        long jLongValue = this.zze.longValue() / 1000;
                        if (zzejVar9.zzm()) {
                            jLongValue = this.zzd.longValue() / 1000;
                        }
                        Integer numValueOf20 = Integer.valueOf(iZzb);
                        if (arrayMap.containsKey(numValueOf20)) {
                            arrayMap.put(numValueOf20, Long.valueOf(jLongValue));
                        }
                        if (arrayMap12.containsKey(numValueOf20)) {
                            arrayMap12.put(numValueOf20, Long.valueOf(jLongValue));
                        }
                    }
                }
                this.zzc.put(Integer.valueOf(iIntValue), new zzt(this, this.zza, zzgdVar5, bitSet, bitSet2, arrayMap, arrayMap12, null));
                map2 = map2;
                str18 = str213;
                map = map;
                map3 = map10;
                str17 = str214;
            }
        }
        String str215 = str18;
        str5 = str17;
        str6 = str19;
        zzuVar = null;
        if (!list.isEmpty()) {
            zzvVar = new zzv(this, zzuVar);
            arrayMap4 = new ArrayMap();
            it4 = list.iterator();
            while (it4.hasNext()) {
                zzfoVar = (com.google.android.gms.internal.measurement.zzfo) it4.next();
                zzfoVarZza = zzvVar.zza(this.zza, zzfoVar);
                if (zzfoVarZza != null) {
                    zzakVarZzi = this.zzf.zzi();
                    str7 = this.zza;
                    strZzh = zzfoVarZza.zzh();
                    zzaqVarZzn = zzakVarZzi.zzn(str7, zzfoVar.zzh());
                    if (zzaqVarZzn == null) {
                        zzakVarZzi.zzs.zzay().zzk().zzc("Event aggregate wasn't created during raw event logging. appId, event", zzej.zzn(str7), zzakVarZzi.zzs.zzj().zzd(strZzh));
                        zzaqVar = new zzaq(str7, zzfoVar.zzh(), 1L, 1L, 1L, zzfoVar.zzd(), 0L, null, null, null, null);
                    } else {
                        zzaqVar = new zzaq(zzaqVarZzn.zza, zzaqVarZzn.zzb, zzaqVarZzn.zzc + 1, zzaqVarZzn.zzd + 1, zzaqVarZzn.zze + 1, zzaqVarZzn.zzf, zzaqVarZzn.zzg, zzaqVarZzn.zzh, zzaqVarZzn.zzi, zzaqVarZzn.zzj, zzaqVarZzn.zzk);
                    }
                    this.zzf.zzi().zzE(zzaqVar);
                    j = zzaqVar.zzc;
                    strZzh2 = zzfoVarZza.zzh();
                    mapEmptyMap = (Map) arrayMap4.get(strZzh2);
                    if (mapEmptyMap == null) {
                        zzak zzakVarZzi13 = this.zzf.zzi();
                        str10 = this.zza;
                        zzakVarZzi13.zzW();
                        zzakVarZzi13.zzg();
                        Preconditions.checkNotEmpty(str10);
                        Preconditions.checkNotEmpty(strZzh2);
                        arrayMap5 = new ArrayMap();
                        SQLiteDatabase sQLiteDatabaseZzh5 = zzakVarZzi13.zzh();
                        String[] strArr7 = new String[2];
                        str11 = str6;
                        strArr7[0] = str11;
                        strArr7[1] = Constants.ScionAnalytics.MessageType.DATA_MESSAGE;
                        it5 = it4;
                        str8 = str15;
                        cursorQuery2 = sQLiteDatabaseZzh5.query("event_filters", strArr7, "app_id=? AND event_name=?", new String[]{str10, strZzh2}, null, null, null);
                        if (cursorQuery2.moveToFirst()) {
                            while (true) {
                                com.google.android.gms.internal.measurement.zzej zzejVar10 = (com.google.android.gms.internal.measurement.zzej) ((com.google.android.gms.internal.measurement.zzei) zzkt.zzl(com.google.android.gms.internal.measurement.zzej.zzc(), cursorQuery2.getBlob(1))).zzay();
                                numValueOf3 = Integer.valueOf(cursorQuery2.getInt(0));
                                list5 = (List) arrayMap5.get(numValueOf3);
                                if (list5 == null) {
                                    str6 = str11;
                                    arrayList2 = new ArrayList();
                                    arrayMap5.put(numValueOf3, arrayList2);
                                } else {
                                    str6 = str11;
                                    arrayList2 = list5;
                                }
                                arrayList2.add(zzejVar10);
                                str9 = str5;
                                if (!cursorQuery2.moveToNext()) {
                                    break;
                                    break;
                                }
                                str5 = str9;
                                arrayMap5 = arrayMap5;
                                str11 = str6;
                            }
                            if (cursorQuery2 != null) {
                                cursorQuery2.close();
                            }
                            mapEmptyMap = arrayMap5;
                        } else {
                            str6 = str11;
                            str9 = str5;
                            mapEmptyMap = Collections.emptyMap();
                            if (cursorQuery2 != null) {
                                cursorQuery2.close();
                            }
                        }
                        arrayMap4.put(strZzh2, mapEmptyMap);
                    } else {
                        it5 = it4;
                        str8 = str15;
                        str9 = str5;
                    }
                    it6 = mapEmptyMap.keySet().iterator();
                    while (it6.hasNext()) {
                        iIntValue2 = ((Integer) it6.next()).intValue();
                        set = this.zzb;
                        numValueOf2 = Integer.valueOf(iIntValue2);
                        if (set.contains(numValueOf2)) {
                            this.zzs.zzay().zzj().zzb("Skipping failed audience ID", numValueOf2);
                        } else {
                            it7 = ((List) mapEmptyMap.get(numValueOf2)).iterator();
                            zZzd = true;
                            while (true) {
                                if (it7.hasNext()) {
                                    map5 = mapEmptyMap;
                                    break;
                                }
                                com.google.android.gms.internal.measurement.zzej zzejVar11 = (com.google.android.gms.internal.measurement.zzej) it7.next();
                                zzwVar = new zzw(this, this.zza, iIntValue2, zzejVar11);
                                map5 = mapEmptyMap;
                                zZzd = zzwVar.zzd(this.zzd, this.zze, zzfoVarZza, j, zzaqVar, zzf(iIntValue2, zzejVar11.zzb()));
                                if (zZzd) {
                                    this.zzb.add(Integer.valueOf(iIntValue2));
                                    break;
                                }
                                zzd(Integer.valueOf(iIntValue2)).zzc(zzwVar);
                                mapEmptyMap = map5;
                            }
                            if (!zZzd) {
                                this.zzb.add(Integer.valueOf(iIntValue2));
                            }
                            mapEmptyMap = map5;
                        }
                    }
                    it4 = it5;
                    str5 = str9;
                    zzvVar = zzvVar;
                    str15 = str8;
                }
            }
        }
        str12 = str15;
        if (!list2.isEmpty()) {
            arrayMap6 = new ArrayMap();
            it9 = list2.iterator();
            while (it9.hasNext()) {
                com.google.android.gms.internal.measurement.zzgh zzghVar3 = (com.google.android.gms.internal.measurement.zzgh) it9.next();
                strZzf = zzghVar3.zzf();
                mapEmptyMap2 = (Map) arrayMap6.get(strZzf);
                if (mapEmptyMap2 == null) {
                    zzak zzakVarZzi14 = this.zzf.zzi();
                    str14 = this.zza;
                    zzakVarZzi14.zzW();
                    zzakVarZzi14.zzg();
                    Preconditions.checkNotEmpty(str14);
                    Preconditions.checkNotEmpty(strZzf);
                    arrayMap7 = new ArrayMap();
                    SQLiteDatabase sQLiteDatabaseZzh6 = zzakVarZzi14.zzh();
                    String[] strArr8 = new String[2];
                    strArr8[0] = str6;
                    strArr8[1] = Constants.ScionAnalytics.MessageType.DATA_MESSAGE;
                    String[] strArr9 = new String[2];
                    strArr9[0] = str14;
                    strArr9[1] = strZzf;
                    cursorQuery3 = sQLiteDatabaseZzh6.query("property_filters", strArr8, "app_id=? AND property_name=?", strArr9, null, null, null);
                    if (cursorQuery3.moveToFirst()) {
                        do {
                            com.google.android.gms.internal.measurement.zzes zzesVar4 = (com.google.android.gms.internal.measurement.zzes) ((com.google.android.gms.internal.measurement.zzer) zzkt.zzl(com.google.android.gms.internal.measurement.zzes.zzc(), cursorQuery3.getBlob(1))).zzay();
                            numValueOf7 = Integer.valueOf(cursorQuery3.getInt(0));
                            arrayList4 = (List) arrayMap7.get(numValueOf7);
                            if (arrayList4 == null) {
                                arrayList4 = new ArrayList();
                                arrayMap7.put(numValueOf7, arrayList4);
                            }
                            arrayList4.add(zzesVar4);
                        } while (cursorQuery3.moveToNext());
                        if (cursorQuery3 != null) {
                            cursorQuery3.close();
                        }
                        mapEmptyMap2 = arrayMap7;
                    } else {
                        mapEmptyMap2 = Collections.emptyMap();
                        if (cursorQuery3 != null) {
                            cursorQuery3.close();
                        }
                    }
                    arrayMap6.put(strZzf, mapEmptyMap2);
                }
                it10 = mapEmptyMap2.keySet().iterator();
                while (it10.hasNext()) {
                    iIntValue3 = ((Integer) it10.next()).intValue();
                    set2 = this.zzb;
                    numValueOf4 = Integer.valueOf(iIntValue3);
                    if (set2.contains(numValueOf4)) {
                        this.zzs.zzay().zzj().zzb("Skipping failed audience ID", numValueOf4);
                        break;
                        break;
                    }
                    it11 = ((List) mapEmptyMap2.get(numValueOf4)).iterator();
                    zZzd2 = true;
                    while (true) {
                        if (it11.hasNext()) {
                            zzesVar = (com.google.android.gms.internal.measurement.zzes) it11.next();
                            if (Log.isLoggable(this.zzs.zzay().zzq(), 2)) {
                                zzeh zzehVarZzj4 = this.zzs.zzay().zzj();
                                Integer numValueOf113 = Integer.valueOf(iIntValue3);
                                if (zzesVar.zzj()) {
                                    numValueOf6 = Integer.valueOf(zzesVar.zza());
                                } else {
                                    numValueOf6 = null;
                                }
                                zzehVarZzj4.zzd("Evaluating filter. audience, filter, property", numValueOf113, numValueOf6, this.zzs.zzj().zzf(zzesVar.zze()));
                                this.zzs.zzay().zzj().zzb("Filter definition", this.zzf.zzu().zzp(zzesVar));
                            }
                            if (zzesVar.zzj() || zzesVar.zza() > 256) {
                                zzeh zzehVarZzk4 = this.zzs.zzay().zzk();
                                Object objZzn4 = zzej.zzn(this.zza);
                                if (zzesVar.zzj()) {
                                    numValueOf5 = Integer.valueOf(zzesVar.zza());
                                } else {
                                    numValueOf5 = null;
                                }
                                zzehVarZzk4.zzc("Invalid property filter ID. appId, id", objZzn4, String.valueOf(numValueOf5));
                                this.zzb.add(Integer.valueOf(iIntValue3));
                            } else {
                                zzyVar = new zzy(this, this.zza, iIntValue3, zzesVar);
                                zZzd2 = zzyVar.zzd(this.zzd, this.zze, zzghVar3, zzf(iIntValue3, zzesVar.zza()));
                                if (zZzd2) {
                                    zzd(Integer.valueOf(iIntValue3)).zzc(zzyVar);
                                } else {
                                    this.zzb.add(Integer.valueOf(iIntValue3));
                                }
                            }
                        }
                        if (!zZzd2) {
                            this.zzb.add(Integer.valueOf(iIntValue3));
                        }
                    }
                }
            }
        }
        arrayList3 = new ArrayList();
        Set setKeySet3 = this.zzc.keySet();
        setKeySet3.removeAll(this.zzb);
        it8 = setKeySet3.iterator();
        while (it8.hasNext()) {
            int iIntValue9 = ((Integer) it8.next()).intValue();
            Map map11 = this.zzc;
            Integer numValueOf114 = Integer.valueOf(iIntValue9);
            zzt zztVar3 = (zzt) map11.get(numValueOf114);
            Preconditions.checkNotNull(zztVar3);
            com.google.android.gms.internal.measurement.zzfk zzfkVarZza3 = zztVar3.zza(iIntValue9);
            arrayList3.add(zzfkVarZza3);
            zzakVarZzi2 = this.zzf.zzi();
            str13 = this.zza;
            com.google.android.gms.internal.measurement.zzgd zzgdVarZzd3 = zzfkVarZza3.zzd();
            zzakVarZzi2.zzW();
            zzakVarZzi2.zzg();
            Preconditions.checkNotEmpty(str13);
            Preconditions.checkNotNull(zzgdVarZzd3);
            byte[] bArrZzbq3 = zzgdVarZzd3.zzbq();
            contentValues = new ContentValues();
            contentValues.put("app_id", str13);
            String str216 = str6;
            contentValues.put(str216, numValueOf114);
            String str217 = str12;
            contentValues.put(str217, bArrZzbq3);
            if (zzakVarZzi2.zzh().insertWithOnConflict("audience_filter_values", null, contentValues, 5) == -1) {
                zzakVarZzi2.zzs.zzay().zzd().zzb("Failed to insert filter results (got -1). appId", zzej.zzn(str13));
            }
            str12 = str217;
            str6 = str216;
        }
        return arrayList3;
    }

    @Override // com.google.android.gms.measurement.internal.zzkh
    protected final boolean zzb() {
        return false;
    }
}
