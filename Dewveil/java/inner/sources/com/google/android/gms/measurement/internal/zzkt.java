package com.google.android.gms.measurement.internal;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.common.internal.safeparcel.SafeParcelReader;
import com.google.android.gms.internal.measurement.zzlf;
import com.google.android.gms.internal.measurement.zzoz;
import com.google.android.gms.measurement.api.AppMeasurementSdk;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.BitSet;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.zip.GZIPOutputStream;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzkt extends zzkh {
    zzkt(zzkr zzkrVar) {
        super(zzkrVar);
    }

    static final boolean zzA(zzau zzauVar, zzp zzpVar) {
        Preconditions.checkNotNull(zzauVar);
        Preconditions.checkNotNull(zzpVar);
        return (TextUtils.isEmpty(zzpVar.zzb) && TextUtils.isEmpty(zzpVar.zzq)) ? false : true;
    }

    static final com.google.android.gms.internal.measurement.zzfs zzB(com.google.android.gms.internal.measurement.zzfo zzfoVar, String str) {
        for (com.google.android.gms.internal.measurement.zzfs zzfsVar : zzfoVar.zzi()) {
            if (zzfsVar.zzg().equals(str)) {
                return zzfsVar;
            }
        }
        return null;
    }

    static final Object zzC(com.google.android.gms.internal.measurement.zzfo zzfoVar, String str) {
        com.google.android.gms.internal.measurement.zzfs zzfsVarZzB = zzB(zzfoVar, str);
        if (zzfsVarZzB == null) {
            return null;
        }
        if (zzfsVarZzB.zzy()) {
            return zzfsVarZzB.zzh();
        }
        if (zzfsVarZzB.zzw()) {
            return Long.valueOf(zzfsVarZzB.zzd());
        }
        if (zzfsVarZzB.zzu()) {
            return Double.valueOf(zzfsVarZzB.zza());
        }
        if (zzfsVarZzB.zzc() <= 0) {
            return null;
        }
        List<com.google.android.gms.internal.measurement.zzfs> listZzi = zzfsVarZzB.zzi();
        ArrayList arrayList = new ArrayList();
        for (com.google.android.gms.internal.measurement.zzfs zzfsVar : listZzi) {
            if (zzfsVar != null) {
                Bundle bundle = new Bundle();
                for (com.google.android.gms.internal.measurement.zzfs zzfsVar2 : zzfsVar.zzi()) {
                    if (zzfsVar2.zzy()) {
                        bundle.putString(zzfsVar2.zzg(), zzfsVar2.zzh());
                    } else if (zzfsVar2.zzw()) {
                        bundle.putLong(zzfsVar2.zzg(), zzfsVar2.zzd());
                    } else if (zzfsVar2.zzu()) {
                        bundle.putDouble(zzfsVar2.zzg(), zzfsVar2.zza());
                    }
                }
                if (!bundle.isEmpty()) {
                    arrayList.add(bundle);
                }
            }
        }
        return (Bundle[]) arrayList.toArray(new Bundle[arrayList.size()]);
    }

    private final void zzD(StringBuilder sb, int i, List list) {
        if (list == null) {
            return;
        }
        int i2 = i + 1;
        Iterator it = list.iterator();
        while (it.hasNext()) {
            com.google.android.gms.internal.measurement.zzfs zzfsVar = (com.google.android.gms.internal.measurement.zzfs) it.next();
            if (zzfsVar != null) {
                zzF(sb, i2);
                sb.append("param {\n");
                zzI(sb, i2, AppMeasurementSdk.ConditionalUserProperty.NAME, zzfsVar.zzx() ? this.zzs.zzj().zze(zzfsVar.zzg()) : null);
                zzI(sb, i2, "string_value", zzfsVar.zzy() ? zzfsVar.zzh() : null);
                zzI(sb, i2, "int_value", zzfsVar.zzw() ? Long.valueOf(zzfsVar.zzd()) : null);
                zzI(sb, i2, "double_value", zzfsVar.zzu() ? Double.valueOf(zzfsVar.zza()) : null);
                if (zzfsVar.zzc() > 0) {
                    zzD(sb, i2, zzfsVar.zzi());
                }
                zzF(sb, i2);
                sb.append("}\n");
            }
        }
    }

    private final void zzE(StringBuilder sb, int i, com.google.android.gms.internal.measurement.zzel zzelVar) {
        String str;
        if (zzelVar == null) {
            return;
        }
        zzF(sb, i);
        sb.append("filter {\n");
        if (zzelVar.zzh()) {
            zzI(sb, i, "complement", Boolean.valueOf(zzelVar.zzg()));
        }
        if (zzelVar.zzj()) {
            zzI(sb, i, "param_name", this.zzs.zzj().zze(zzelVar.zze()));
        }
        if (zzelVar.zzk()) {
            int i2 = i + 1;
            com.google.android.gms.internal.measurement.zzex zzexVarZzd = zzelVar.zzd();
            if (zzexVarZzd != null) {
                zzF(sb, i2);
                sb.append("string_filter {\n");
                if (zzexVarZzd.zzi()) {
                    switch (zzexVarZzd.zzj()) {
                        case 1:
                            str = "UNKNOWN_MATCH_TYPE";
                            break;
                        case 2:
                            str = "REGEXP";
                            break;
                        case 3:
                            str = "BEGINS_WITH";
                            break;
                        case 4:
                            str = "ENDS_WITH";
                            break;
                        case 5:
                            str = "PARTIAL";
                            break;
                        case 6:
                            str = "EXACT";
                            break;
                        default:
                            str = "IN_LIST";
                            break;
                    }
                    zzI(sb, i2, "match_type", str);
                }
                if (zzexVarZzd.zzh()) {
                    zzI(sb, i2, "expression", zzexVarZzd.zzd());
                }
                if (zzexVarZzd.zzg()) {
                    zzI(sb, i2, "case_sensitive", Boolean.valueOf(zzexVarZzd.zzf()));
                }
                if (zzexVarZzd.zza() > 0) {
                    zzF(sb, i + 2);
                    sb.append("expression_list {\n");
                    for (String str2 : zzexVarZzd.zze()) {
                        zzF(sb, i + 3);
                        sb.append(str2);
                        sb.append("\n");
                    }
                    sb.append("}\n");
                }
                zzF(sb, i2);
                sb.append("}\n");
            }
        }
        if (zzelVar.zzi()) {
            zzJ(sb, i + 1, "number_filter", zzelVar.zzc());
        }
        zzF(sb, i);
        sb.append("}\n");
    }

    private static final void zzF(StringBuilder sb, int i) {
        for (int i2 = 0; i2 < i; i2++) {
            sb.append("  ");
        }
    }

    private static final String zzG(boolean z, boolean z2, boolean z3) {
        StringBuilder sb = new StringBuilder();
        if (z) {
            sb.append("Dynamic ");
        }
        if (z2) {
            sb.append("Sequence ");
        }
        if (z3) {
            sb.append("Session-Scoped ");
        }
        return sb.toString();
    }

    private static final void zzH(StringBuilder sb, int i, String str, com.google.android.gms.internal.measurement.zzgd zzgdVar) {
        if (zzgdVar == null) {
            return;
        }
        zzF(sb, 3);
        sb.append(str);
        sb.append(" {\n");
        if (zzgdVar.zzb() != 0) {
            zzF(sb, 4);
            sb.append("results: ");
            int i2 = 0;
            for (Long l : zzgdVar.zzk()) {
                int i3 = i2 + 1;
                if (i2 != 0) {
                    sb.append(", ");
                }
                sb.append(l);
                i2 = i3;
            }
            sb.append('\n');
        }
        if (zzgdVar.zzd() != 0) {
            zzF(sb, 4);
            sb.append("status: ");
            int i4 = 0;
            for (Long l2 : zzgdVar.zzn()) {
                int i5 = i4 + 1;
                if (i4 != 0) {
                    sb.append(", ");
                }
                sb.append(l2);
                i4 = i5;
            }
            sb.append('\n');
        }
        if (zzgdVar.zza() != 0) {
            zzF(sb, 4);
            sb.append("dynamic_filter_timestamps: {");
            int i6 = 0;
            for (com.google.android.gms.internal.measurement.zzfm zzfmVar : zzgdVar.zzj()) {
                int i7 = i6 + 1;
                if (i6 != 0) {
                    sb.append(", ");
                }
                sb.append(zzfmVar.zzh() ? Integer.valueOf(zzfmVar.zza()) : null);
                sb.append(":");
                sb.append(zzfmVar.zzg() ? Long.valueOf(zzfmVar.zzb()) : null);
                i6 = i7;
            }
            sb.append("}\n");
        }
        if (zzgdVar.zzc() != 0) {
            zzF(sb, 4);
            sb.append("sequence_filter_timestamps: {");
            int i8 = 0;
            for (com.google.android.gms.internal.measurement.zzgf zzgfVar : zzgdVar.zzm()) {
                int i9 = i8 + 1;
                if (i8 != 0) {
                    sb.append(", ");
                }
                sb.append(zzgfVar.zzi() ? Integer.valueOf(zzgfVar.zzb()) : null);
                sb.append(": [");
                Iterator it = zzgfVar.zzf().iterator();
                int i10 = 0;
                while (it.hasNext()) {
                    long jLongValue = ((Long) it.next()).longValue();
                    int i11 = i10 + 1;
                    if (i10 != 0) {
                        sb.append(", ");
                    }
                    sb.append(jLongValue);
                    i10 = i11;
                }
                sb.append("]");
                i8 = i9;
            }
            sb.append("}\n");
        }
        zzF(sb, 3);
        sb.append("}\n");
    }

    private static final void zzI(StringBuilder sb, int i, String str, Object obj) {
        if (obj == null) {
            return;
        }
        zzF(sb, i + 1);
        sb.append(str);
        sb.append(": ");
        sb.append(obj);
        sb.append('\n');
    }

    private static final void zzJ(StringBuilder sb, int i, String str, com.google.android.gms.internal.measurement.zzeq zzeqVar) {
        String str2;
        if (zzeqVar == null) {
            return;
        }
        zzF(sb, i);
        sb.append(str);
        sb.append(" {\n");
        if (zzeqVar.zzg()) {
            int iZzm = zzeqVar.zzm();
            if (iZzm == 1) {
                str2 = "UNKNOWN_COMPARISON_TYPE";
            } else if (iZzm == 2) {
                str2 = "LESS_THAN";
            } else if (iZzm != 3) {
                str2 = iZzm != 4 ? "BETWEEN" : "EQUAL";
            } else {
                str2 = "GREATER_THAN";
            }
            zzI(sb, i, "comparison_type", str2);
        }
        if (zzeqVar.zzi()) {
            zzI(sb, i, "match_as_float", Boolean.valueOf(zzeqVar.zzf()));
        }
        if (zzeqVar.zzh()) {
            zzI(sb, i, "comparison_value", zzeqVar.zzc());
        }
        if (zzeqVar.zzk()) {
            zzI(sb, i, "min_comparison_value", zzeqVar.zze());
        }
        if (zzeqVar.zzj()) {
            zzI(sb, i, "max_comparison_value", zzeqVar.zzd());
        }
        zzF(sb, i);
        sb.append("}\n");
    }

    static int zza(com.google.android.gms.internal.measurement.zzfx zzfxVar, String str) {
        for (int i = 0; i < zzfxVar.zzb(); i++) {
            if (str.equals(zzfxVar.zzaj(i).zzf())) {
                return i;
            }
        }
        return -1;
    }

    static zzlf zzl(zzlf zzlfVar, byte[] bArr) throws com.google.android.gms.internal.measurement.zzkj {
        com.google.android.gms.internal.measurement.zzjl zzjlVarZzb = com.google.android.gms.internal.measurement.zzjl.zzb();
        return zzjlVarZzb != null ? zzlfVar.zzau(bArr, zzjlVarZzb) : zzlfVar.zzat(bArr);
    }

    static List zzr(BitSet bitSet) {
        int length = (bitSet.length() + 63) / 64;
        ArrayList arrayList = new ArrayList(length);
        for (int i = 0; i < length; i++) {
            long j = 0;
            for (int i2 = 0; i2 < 64; i2++) {
                int i3 = (i * 64) + i2;
                if (i3 >= bitSet.length()) {
                    break;
                }
                if (bitSet.get(i3)) {
                    j |= 1 << i2;
                }
            }
            arrayList.add(Long.valueOf(j));
        }
        return arrayList;
    }

    static boolean zzv(List list, int i) {
        if (i < list.size() * 64) {
            return ((1 << (i % 64)) & ((Long) list.get(i / 64)).longValue()) != 0;
        }
        return false;
    }

    static boolean zzx(String str) {
        return str != null && str.matches("([+-])?([0-9]+\\.?[0-9]*|[0-9]*\\.?[0-9]+)") && str.length() <= 310;
    }

    static final void zzz(com.google.android.gms.internal.measurement.zzfn zzfnVar, String str, Object obj) {
        List listZzp = zzfnVar.zzp();
        int i = 0;
        while (true) {
            if (i >= listZzp.size()) {
                i = -1;
                break;
            } else if (str.equals(((com.google.android.gms.internal.measurement.zzfs) listZzp.get(i)).zzg())) {
                break;
            } else {
                i++;
            }
        }
        com.google.android.gms.internal.measurement.zzfr zzfrVarZze = com.google.android.gms.internal.measurement.zzfs.zze();
        zzfrVarZze.zzj(str);
        if (obj instanceof Long) {
            zzfrVarZze.zzi(((Long) obj).longValue());
        }
        if (i >= 0) {
            zzfnVar.zzj(i, zzfrVarZze);
        } else {
            zzfnVar.zze(zzfrVarZze);
        }
    }

    @Override // com.google.android.gms.measurement.internal.zzkh
    protected final boolean zzb() {
        return false;
    }

    final long zzd(byte[] bArr) {
        Preconditions.checkNotNull(bArr);
        this.zzs.zzv().zzg();
        MessageDigest messageDigestZzE = zzky.zzE();
        if (messageDigestZzE != null) {
            return zzky.zzp(messageDigestZzE.digest(bArr));
        }
        this.zzs.zzay().zzd().zza("Failed to get MD5");
        return 0L;
    }

    final Bundle zzf(Map map, boolean z) {
        Bundle bundle = new Bundle();
        for (String str : map.keySet()) {
            Object obj = map.get(str);
            if (obj == null) {
                bundle.putString(str, null);
            } else if (obj instanceof Long) {
                bundle.putLong(str, ((Long) obj).longValue());
            } else if (obj instanceof Double) {
                bundle.putDouble(str, ((Double) obj).doubleValue());
            } else if (!(obj instanceof ArrayList)) {
                bundle.putString(str, obj.toString());
            } else if (z) {
                zzoz.zzc();
                if (this.zzs.zzf().zzs(null, zzdw.zzam)) {
                    ArrayList arrayList = (ArrayList) obj;
                    ArrayList arrayList2 = new ArrayList();
                    int size = arrayList.size();
                    for (int i = 0; i < size; i++) {
                        arrayList2.add(zzf((Map) arrayList.get(i), false));
                    }
                    bundle.putParcelableArray(str, (Parcelable[]) arrayList2.toArray(new Parcelable[0]));
                } else {
                    ArrayList arrayList3 = (ArrayList) obj;
                    ArrayList<? extends Parcelable> arrayList4 = new ArrayList<>();
                    int size2 = arrayList3.size();
                    for (int i2 = 0; i2 < size2; i2++) {
                        arrayList4.add(zzf((Map) arrayList3.get(i2), false));
                    }
                    bundle.putParcelableArrayList(str, arrayList4);
                }
            }
        }
        return bundle;
    }

    final Parcelable zzh(byte[] bArr, Parcelable.Creator creator) {
        if (bArr == null) {
            return null;
        }
        Parcel parcelObtain = Parcel.obtain();
        try {
            parcelObtain.unmarshall(bArr, 0, bArr.length);
            parcelObtain.setDataPosition(0);
            return (Parcelable) creator.createFromParcel(parcelObtain);
        } catch (SafeParcelReader.ParseException unused) {
            this.zzs.zzay().zzd().zza("Failed to load parcelable from buffer");
            return null;
        } finally {
            parcelObtain.recycle();
        }
    }

    final zzau zzi(com.google.android.gms.internal.measurement.zzaa zzaaVar) {
        Object obj;
        Bundle bundleZzf = zzf(zzaaVar.zze(), true);
        String string = (!bundleZzf.containsKey("_o") || (obj = bundleZzf.get("_o")) == null) ? "app" : obj.toString();
        String strZzb = zzgq.zzb(zzaaVar.zzd());
        if (strZzb == null) {
            strZzb = zzaaVar.zzd();
        }
        return new zzau(strZzb, new zzas(bundleZzf), string, zzaaVar.zza());
    }

    final com.google.android.gms.internal.measurement.zzfo zzj(zzap zzapVar) {
        com.google.android.gms.internal.measurement.zzfn zzfnVarZze = com.google.android.gms.internal.measurement.zzfo.zze();
        zzfnVarZze.zzl(zzapVar.zze);
        zzar zzarVar = new zzar(zzapVar.zzf);
        while (zzarVar.hasNext()) {
            String next = zzarVar.next();
            com.google.android.gms.internal.measurement.zzfr zzfrVarZze = com.google.android.gms.internal.measurement.zzfs.zze();
            zzfrVarZze.zzj(next);
            Object objZzf = zzapVar.zzf.zzf(next);
            Preconditions.checkNotNull(objZzf);
            zzt(zzfrVarZze, objZzf);
            zzfnVarZze.zze(zzfrVarZze);
        }
        return (com.google.android.gms.internal.measurement.zzfo) zzfnVarZze.zzay();
    }

    final String zzm(com.google.android.gms.internal.measurement.zzfw zzfwVar) {
        if (zzfwVar == null) {
            return "";
        }
        StringBuilder sb = new StringBuilder();
        sb.append("\nbatch {\n");
        for (com.google.android.gms.internal.measurement.zzfy zzfyVar : zzfwVar.zzd()) {
            if (zzfyVar != null) {
                zzF(sb, 1);
                sb.append("bundle {\n");
                if (zzfyVar.zzbf()) {
                    zzI(sb, 1, "protocol_version", Integer.valueOf(zzfyVar.zzd()));
                }
                zzI(sb, 1, "platform", zzfyVar.zzJ());
                if (zzfyVar.zzbb()) {
                    zzI(sb, 1, "gmp_version", Long.valueOf(zzfyVar.zzn()));
                }
                if (zzfyVar.zzbl()) {
                    zzI(sb, 1, "uploading_gmp_version", Long.valueOf(zzfyVar.zzs()));
                }
                if (zzfyVar.zzaZ()) {
                    zzI(sb, 1, "dynamite_version", Long.valueOf(zzfyVar.zzk()));
                }
                if (zzfyVar.zzaW()) {
                    zzI(sb, 1, "config_version", Long.valueOf(zzfyVar.zzi()));
                }
                zzI(sb, 1, "gmp_app_id", zzfyVar.zzG());
                zzI(sb, 1, "admob_app_id", zzfyVar.zzx());
                zzI(sb, 1, "app_id", zzfyVar.zzy());
                zzI(sb, 1, "app_version", zzfyVar.zzB());
                if (zzfyVar.zzaU()) {
                    zzI(sb, 1, "app_version_major", Integer.valueOf(zzfyVar.zza()));
                }
                zzI(sb, 1, "firebase_instance_id", zzfyVar.zzF());
                if (zzfyVar.zzaY()) {
                    zzI(sb, 1, "dev_cert_hash", Long.valueOf(zzfyVar.zzj()));
                }
                zzI(sb, 1, "app_store", zzfyVar.zzA());
                if (zzfyVar.zzbk()) {
                    zzI(sb, 1, "upload_timestamp_millis", Long.valueOf(zzfyVar.zzr()));
                }
                if (zzfyVar.zzbi()) {
                    zzI(sb, 1, "start_timestamp_millis", Long.valueOf(zzfyVar.zzq()));
                }
                if (zzfyVar.zzba()) {
                    zzI(sb, 1, "end_timestamp_millis", Long.valueOf(zzfyVar.zzm()));
                }
                if (zzfyVar.zzbe()) {
                    zzI(sb, 1, "previous_bundle_start_timestamp_millis", Long.valueOf(zzfyVar.zzp()));
                }
                if (zzfyVar.zzbd()) {
                    zzI(sb, 1, "previous_bundle_end_timestamp_millis", Long.valueOf(zzfyVar.zzo()));
                }
                zzI(sb, 1, "app_instance_id", zzfyVar.zzz());
                zzI(sb, 1, "resettable_device_id", zzfyVar.zzK());
                zzI(sb, 1, "ds_id", zzfyVar.zzE());
                if (zzfyVar.zzbc()) {
                    zzI(sb, 1, "limited_ad_tracking", Boolean.valueOf(zzfyVar.zzaR()));
                }
                zzI(sb, 1, "os_version", zzfyVar.zzI());
                zzI(sb, 1, "device_model", zzfyVar.zzD());
                zzI(sb, 1, "user_default_language", zzfyVar.zzL());
                if (zzfyVar.zzbj()) {
                    zzI(sb, 1, "time_zone_offset_minutes", Integer.valueOf(zzfyVar.zzf()));
                }
                if (zzfyVar.zzaV()) {
                    zzI(sb, 1, "bundle_sequential_index", Integer.valueOf(zzfyVar.zzb()));
                }
                if (zzfyVar.zzbh()) {
                    zzI(sb, 1, "service_upload", Boolean.valueOf(zzfyVar.zzaS()));
                }
                zzI(sb, 1, "health_monitor", zzfyVar.zzH());
                if (!this.zzs.zzf().zzs(null, zzdw.zzah) && zzfyVar.zzaT() && zzfyVar.zzh() != 0) {
                    zzI(sb, 1, "android_id", Long.valueOf(zzfyVar.zzh()));
                }
                if (zzfyVar.zzbg()) {
                    zzI(sb, 1, "retry_counter", Integer.valueOf(zzfyVar.zze()));
                }
                if (zzfyVar.zzaX()) {
                    zzI(sb, 1, "consent_signals", zzfyVar.zzC());
                }
                List<com.google.android.gms.internal.measurement.zzgh> listZzO = zzfyVar.zzO();
                if (listZzO != null) {
                    for (com.google.android.gms.internal.measurement.zzgh zzghVar : listZzO) {
                        if (zzghVar != null) {
                            zzF(sb, 2);
                            sb.append("user_property {\n");
                            zzI(sb, 2, "set_timestamp_millis", zzghVar.zzs() ? Long.valueOf(zzghVar.zzc()) : null);
                            zzI(sb, 2, AppMeasurementSdk.ConditionalUserProperty.NAME, this.zzs.zzj().zzf(zzghVar.zzf()));
                            zzI(sb, 2, "string_value", zzghVar.zzg());
                            zzI(sb, 2, "int_value", zzghVar.zzr() ? Long.valueOf(zzghVar.zzb()) : null);
                            zzI(sb, 2, "double_value", zzghVar.zzq() ? Double.valueOf(zzghVar.zza()) : null);
                            zzF(sb, 2);
                            sb.append("}\n");
                        }
                    }
                }
                List<com.google.android.gms.internal.measurement.zzfk> listZzM = zzfyVar.zzM();
                if (listZzM != null) {
                    for (com.google.android.gms.internal.measurement.zzfk zzfkVar : listZzM) {
                        if (zzfkVar != null) {
                            zzF(sb, 2);
                            sb.append("audience_membership {\n");
                            if (zzfkVar.zzk()) {
                                zzI(sb, 2, "audience_id", Integer.valueOf(zzfkVar.zza()));
                            }
                            if (zzfkVar.zzm()) {
                                zzI(sb, 2, "new_audience", Boolean.valueOf(zzfkVar.zzj()));
                            }
                            zzH(sb, 2, "current_data", zzfkVar.zzd());
                            if (zzfkVar.zzn()) {
                                zzH(sb, 2, "previous_data", zzfkVar.zze());
                            }
                            zzF(sb, 2);
                            sb.append("}\n");
                        }
                    }
                }
                List<com.google.android.gms.internal.measurement.zzfo> listZzN = zzfyVar.zzN();
                if (listZzN != null) {
                    for (com.google.android.gms.internal.measurement.zzfo zzfoVar : listZzN) {
                        if (zzfoVar != null) {
                            zzF(sb, 2);
                            sb.append("event {\n");
                            zzI(sb, 2, AppMeasurementSdk.ConditionalUserProperty.NAME, this.zzs.zzj().zzd(zzfoVar.zzh()));
                            if (zzfoVar.zzu()) {
                                zzI(sb, 2, "timestamp_millis", Long.valueOf(zzfoVar.zzd()));
                            }
                            if (zzfoVar.zzt()) {
                                zzI(sb, 2, "previous_timestamp_millis", Long.valueOf(zzfoVar.zzc()));
                            }
                            if (zzfoVar.zzs()) {
                                zzI(sb, 2, "count", Integer.valueOf(zzfoVar.zza()));
                            }
                            if (zzfoVar.zzb() != 0) {
                                zzD(sb, 2, zzfoVar.zzi());
                            }
                            zzF(sb, 2);
                            sb.append("}\n");
                        }
                    }
                }
                zzF(sb, 1);
                sb.append("}\n");
            }
        }
        sb.append("}\n");
        return sb.toString();
    }

    final String zzo(com.google.android.gms.internal.measurement.zzej zzejVar) {
        if (zzejVar == null) {
            return "null";
        }
        StringBuilder sb = new StringBuilder();
        sb.append("\nevent_filter {\n");
        if (zzejVar.zzp()) {
            zzI(sb, 0, "filter_id", Integer.valueOf(zzejVar.zzb()));
        }
        zzI(sb, 0, "event_name", this.zzs.zzj().zzd(zzejVar.zzg()));
        String strZzG = zzG(zzejVar.zzk(), zzejVar.zzm(), zzejVar.zzn());
        if (!strZzG.isEmpty()) {
            zzI(sb, 0, "filter_type", strZzG);
        }
        if (zzejVar.zzo()) {
            zzJ(sb, 1, "event_count_filter", zzejVar.zzf());
        }
        if (zzejVar.zza() > 0) {
            sb.append("  filters {\n");
            Iterator it = zzejVar.zzh().iterator();
            while (it.hasNext()) {
                zzE(sb, 2, (com.google.android.gms.internal.measurement.zzel) it.next());
            }
        }
        zzF(sb, 1);
        sb.append("}\n}\n");
        return sb.toString();
    }

    final String zzp(com.google.android.gms.internal.measurement.zzes zzesVar) {
        if (zzesVar == null) {
            return "null";
        }
        StringBuilder sb = new StringBuilder();
        sb.append("\nproperty_filter {\n");
        if (zzesVar.zzj()) {
            zzI(sb, 0, "filter_id", Integer.valueOf(zzesVar.zza()));
        }
        zzI(sb, 0, "property_name", this.zzs.zzj().zzf(zzesVar.zze()));
        String strZzG = zzG(zzesVar.zzg(), zzesVar.zzh(), zzesVar.zzi());
        if (!strZzG.isEmpty()) {
            zzI(sb, 0, "filter_type", strZzG);
        }
        zzE(sb, 1, zzesVar.zzb());
        sb.append("}\n");
        return sb.toString();
    }

    final List zzq(List list, List list2) {
        int i;
        ArrayList arrayList = new ArrayList(list);
        Iterator it = list2.iterator();
        while (it.hasNext()) {
            Integer num = (Integer) it.next();
            if (num.intValue() < 0) {
                this.zzs.zzay().zzk().zzb("Ignoring negative bit index to be cleared", num);
            } else {
                int iIntValue = num.intValue() / 64;
                if (iIntValue >= arrayList.size()) {
                    this.zzs.zzay().zzk().zzc("Ignoring bit index greater than bitSet size", num, Integer.valueOf(arrayList.size()));
                } else {
                    arrayList.set(iIntValue, Long.valueOf(((Long) arrayList.get(iIntValue)).longValue() & (~(1 << (num.intValue() % 64)))));
                }
            }
        }
        int size = arrayList.size();
        int size2 = arrayList.size() - 1;
        while (true) {
            int i2 = size2;
            i = size;
            size = i2;
            if (size < 0 || ((Long) arrayList.get(size)).longValue() != 0) {
                break;
            }
            size2 = size - 1;
        }
        return arrayList.subList(0, i);
    }

    /* JADX WARN: Code duplicated, block: B:26:0x005b  */
    /* JADX WARN: Code duplicated, block: B:28:0x0061  */
    /* JADX WARN: Code duplicated, block: B:30:0x0067  */
    /* JADX WARN: Code duplicated, block: B:32:0x0073  */
    /* JADX WARN: Code duplicated, block: B:34:0x0077  */
    /* JADX WARN: Code duplicated, block: B:36:0x0080  */
    /* JADX WARN: Code duplicated, block: B:38:0x0088  */
    /* JADX WARN: Code duplicated, block: B:40:0x0094  */
    /* JADX WARN: Code duplicated, block: B:42:0x0098  */
    /* JADX WARN: Code duplicated, block: B:52:0x004b A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:55:0x0051 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:57:0x000d A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:59:0x000d A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:63:0x0070 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:66:0x0091 A[SYNTHETIC] */
    /* JADX WARN: Instruction removed from duplicated block: B:26:0x005b, please report this as an issue */
    final Map zzs(Bundle bundle, boolean z) {
        ArrayList arrayList;
        ArrayList arrayList2;
        int size;
        int i;
        Object obj;
        int i2;
        HashMap map = new HashMap();
        for (String str : bundle.keySet()) {
            Object obj2 = bundle.get(str);
            zzoz.zzc();
            if (this.zzs.zzf().zzs(null, zzdw.zzam)) {
                if ((obj2 instanceof Parcelable[]) || (obj2 instanceof ArrayList) || (obj2 instanceof Bundle)) {
                    if (z) {
                        arrayList = new ArrayList();
                        if (obj2 instanceof Parcelable[]) {
                            for (Parcelable parcelable : (Parcelable[]) obj2) {
                                if (parcelable instanceof Bundle) {
                                    arrayList.add(zzs((Bundle) parcelable, false));
                                }
                            }
                        } else if (obj2 instanceof ArrayList) {
                            arrayList2 = (ArrayList) obj2;
                            size = arrayList2.size();
                            for (i = 0; i < size; i++) {
                                obj = arrayList2.get(i);
                                if (obj instanceof Bundle) {
                                    arrayList.add(zzs((Bundle) obj, false));
                                }
                            }
                        } else if (obj2 instanceof Bundle) {
                            arrayList.add(zzs((Bundle) obj2, false));
                        }
                        map.put(str, arrayList);
                    }
                } else if (obj2 != null) {
                    map.put(str, obj2);
                }
            } else if ((obj2 instanceof Bundle[]) || (obj2 instanceof ArrayList) || (obj2 instanceof Bundle)) {
                if (z) {
                    arrayList = new ArrayList();
                    if (obj2 instanceof Parcelable[]) {
                        while (i2 < r5) {
                            if (parcelable instanceof Bundle) {
                                arrayList.add(zzs((Bundle) parcelable, false));
                            }
                        }
                    } else if (obj2 instanceof ArrayList) {
                        arrayList2 = (ArrayList) obj2;
                        size = arrayList2.size();
                        while (i < size) {
                            obj = arrayList2.get(i);
                            if (obj instanceof Bundle) {
                                arrayList.add(zzs((Bundle) obj, false));
                            }
                        }
                    } else if (obj2 instanceof Bundle) {
                        arrayList.add(zzs((Bundle) obj2, false));
                    }
                    map.put(str, arrayList);
                }
            } else if (obj2 != null) {
                map.put(str, obj2);
            }
        }
        return map;
    }

    final void zzt(com.google.android.gms.internal.measurement.zzfr zzfrVar, Object obj) {
        Preconditions.checkNotNull(obj);
        zzfrVar.zzg();
        zzfrVar.zze();
        zzfrVar.zzd();
        zzfrVar.zzf();
        if (obj instanceof String) {
            zzfrVar.zzk((String) obj);
            return;
        }
        if (obj instanceof Long) {
            zzfrVar.zzi(((Long) obj).longValue());
            return;
        }
        if (obj instanceof Double) {
            zzfrVar.zzh(((Double) obj).doubleValue());
            return;
        }
        if (!(obj instanceof Bundle[])) {
            this.zzs.zzay().zzd().zzb("Ignoring invalid (type) event param value", obj);
            return;
        }
        ArrayList arrayList = new ArrayList();
        for (Bundle bundle : (Bundle[]) obj) {
            if (bundle != null) {
                com.google.android.gms.internal.measurement.zzfr zzfrVarZze = com.google.android.gms.internal.measurement.zzfs.zze();
                for (String str : bundle.keySet()) {
                    com.google.android.gms.internal.measurement.zzfr zzfrVarZze2 = com.google.android.gms.internal.measurement.zzfs.zze();
                    zzfrVarZze2.zzj(str);
                    Object obj2 = bundle.get(str);
                    if (obj2 instanceof Long) {
                        zzfrVarZze2.zzi(((Long) obj2).longValue());
                    } else if (obj2 instanceof String) {
                        zzfrVarZze2.zzk((String) obj2);
                    } else if (obj2 instanceof Double) {
                        zzfrVarZze2.zzh(((Double) obj2).doubleValue());
                    }
                    zzfrVarZze.zzc(zzfrVarZze2);
                }
                if (zzfrVarZze.zza() > 0) {
                    arrayList.add((com.google.android.gms.internal.measurement.zzfs) zzfrVarZze.zzay());
                }
            }
        }
        zzfrVar.zzb(arrayList);
    }

    final void zzu(com.google.android.gms.internal.measurement.zzgg zzggVar, Object obj) {
        Preconditions.checkNotNull(obj);
        zzggVar.zzc();
        zzggVar.zzb();
        zzggVar.zza();
        if (obj instanceof String) {
            zzggVar.zzh((String) obj);
            return;
        }
        if (obj instanceof Long) {
            zzggVar.zze(((Long) obj).longValue());
        } else if (obj instanceof Double) {
            zzggVar.zzd(((Double) obj).doubleValue());
        } else {
            this.zzs.zzay().zzd().zzb("Ignoring invalid (type) user attribute value", obj);
        }
    }

    final boolean zzw(long j, long j2) {
        return j == 0 || j2 <= 0 || Math.abs(this.zzs.zzav().currentTimeMillis() - j) > j2;
    }

    final byte[] zzy(byte[] bArr) throws IOException {
        try {
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            GZIPOutputStream gZIPOutputStream = new GZIPOutputStream(byteArrayOutputStream);
            gZIPOutputStream.write(bArr);
            gZIPOutputStream.close();
            byteArrayOutputStream.close();
            return byteArrayOutputStream.toByteArray();
        } catch (IOException e) {
            this.zzs.zzay().zzd().zzb("Failed to gzip content", e);
            throw e;
        }
    }
}
