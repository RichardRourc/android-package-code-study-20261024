package com.google.android.gms.internal.measurement;

import com.google.firebase.analytics.FirebaseAnalytics;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public final class zzat implements Iterable, zzap {
    private final String zza;

    public zzat(String str) {
        if (str == null) {
            throw new IllegalArgumentException("StringValue cannot be null.");
        }
        this.zza = str;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof zzat) {
            return this.zza.equals(((zzat) obj).zza);
        }
        return false;
    }

    public final int hashCode() {
        return this.zza.hashCode();
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        return new zzas(this);
    }

    public final String toString() {
        String str = this.zza;
        StringBuilder sb = new StringBuilder(str.length() + 2);
        sb.append('\"');
        sb.append(str);
        sb.append('\"');
        return sb.toString();
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.google.android.gms.internal.measurement.zzap
    public final zzap zzbI(String str, zzg zzgVar, List list) {
        String str2;
        String str3;
        byte b;
        zzap zzatVar;
        zzat zzatVar2;
        int i;
        zzap zzahVar;
        zzat zzatVar3;
        int i2;
        int i3;
        boolean zEquals;
        zzg zzgVar2;
        int iZza;
        if (!"charAt".equals(str) && !"concat".equals(str) && !"hasOwnProperty".equals(str) && !"indexOf".equals(str) && !"lastIndexOf".equals(str) && !"match".equals(str) && !"replace".equals(str) && !FirebaseAnalytics.Event.SEARCH.equals(str) && !"slice".equals(str) && !"split".equals(str) && !"substring".equals(str) && !"toLowerCase".equals(str) && !"toLocaleLowerCase".equals(str) && !"toString".equals(str) && !"toUpperCase".equals(str) && !"toLocaleUpperCase".equals(str) && !"trim".equals(str)) {
            throw new IllegalArgumentException(String.format("%s is not a String function", str));
        }
        switch (str.hashCode()) {
            case -1789698943:
                str2 = "charAt";
                str3 = "hasOwnProperty";
                if (str.equals(str3)) {
                    b = 2;
                } else {
                    b = -1;
                }
                break;
            case -1776922004:
                str2 = "charAt";
                if (str.equals("toString")) {
                    b = 14;
                    str3 = "hasOwnProperty";
                }
                str3 = "hasOwnProperty";
                b = -1;
                break;
            case -1464939364:
                str2 = "charAt";
                if (str.equals("toLocaleLowerCase")) {
                    b = 12;
                    str3 = "hasOwnProperty";
                }
                str3 = "hasOwnProperty";
                b = -1;
                break;
            case -1361633751:
                str2 = "charAt";
                if (str.equals(str2)) {
                    str3 = "hasOwnProperty";
                    b = 0;
                } else {
                    str3 = "hasOwnProperty";
                    b = -1;
                }
                break;
            case -1354795244:
                if (str.equals("concat")) {
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                    b = 1;
                } else {
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                    b = -1;
                }
                break;
            case -1137582698:
                if (str.equals("toLowerCase")) {
                    b = 13;
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                } else {
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                    b = -1;
                }
                break;
            case -906336856:
                if (str.equals(FirebaseAnalytics.Event.SEARCH)) {
                    b = 7;
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                } else {
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                    b = -1;
                }
                break;
            case -726908483:
                if (str.equals("toLocaleUpperCase")) {
                    b = 11;
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                } else {
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                    b = -1;
                }
                break;
            case -467511597:
                if (str.equals("lastIndexOf")) {
                    b = 4;
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                } else {
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                    b = -1;
                }
                break;
            case -399551817:
                if (str.equals("toUpperCase")) {
                    b = 15;
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                } else {
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                    b = -1;
                }
                break;
            case 3568674:
                if (str.equals("trim")) {
                    b = 16;
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                } else {
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                    b = -1;
                }
                break;
            case 103668165:
                if (str.equals("match")) {
                    b = 5;
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                } else {
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                    b = -1;
                }
                break;
            case 109526418:
                if (str.equals("slice")) {
                    b = 8;
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                } else {
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                    b = -1;
                }
                break;
            case 109648666:
                if (str.equals("split")) {
                    b = 9;
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                } else {
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                    b = -1;
                }
                break;
            case 530542161:
                if (str.equals("substring")) {
                    b = 10;
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                } else {
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                    b = -1;
                }
                break;
            case 1094496948:
                if (str.equals("replace")) {
                    b = 6;
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                } else {
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                    b = -1;
                }
                break;
            case 1943291465:
                if (str.equals("indexOf")) {
                    b = 3;
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                } else {
                    str2 = "charAt";
                    str3 = "hasOwnProperty";
                    b = -1;
                }
                break;
            default:
                str2 = "charAt";
                str3 = "hasOwnProperty";
                b = -1;
                break;
        }
        String strZzi = "undefined";
        String str4 = str2;
        switch (b) {
            case 0:
                zzh.zzj(str4, 1, list);
                int iZza2 = list.size() > 0 ? (int) zzh.zza(zzgVar.zzb((zzap) list.get(0)).zzh().doubleValue()) : 0;
                String str5 = this.zza;
                if (iZza2 < 0 || iZza2 >= str5.length()) {
                    return zzap.zzm;
                }
                zzatVar = new zzat(String.valueOf(str5.charAt(iZza2)));
                return zzatVar;
            case 1:
                zzatVar2 = this;
                if (list.size() != 0) {
                    StringBuilder sb = new StringBuilder(zzatVar2.zza);
                    for (int i4 = 0; i4 < list.size(); i4++) {
                        sb.append(zzgVar.zzb((zzap) list.get(i4)).zzi());
                    }
                    zzatVar = new zzat(sb.toString());
                    return zzatVar;
                }
                return zzatVar2;
            case 2:
                zzh.zzh(str3, 1, list);
                String str6 = this.zza;
                zzap zzapVarZzb = zzgVar.zzb((zzap) list.get(0));
                if ("length".equals(zzapVarZzb.zzi())) {
                    return zzaf.zzk;
                }
                double dDoubleValue = zzapVarZzb.zzh().doubleValue();
                return (dDoubleValue != Math.floor(dDoubleValue) || (i = (int) dDoubleValue) < 0 || i >= str6.length()) ? zzaf.zzl : zzaf.zzk;
            case 3:
                zzh.zzj("indexOf", 2, list);
                zzahVar = new zzah(Double.valueOf(this.zza.indexOf(list.size() > 0 ? zzgVar.zzb((zzap) list.get(0)).zzi() : "undefined", (int) zzh.zza(list.size() < 2 ? 0.0d : zzgVar.zzb((zzap) list.get(1)).zzh().doubleValue()))));
                return zzahVar;
            case 4:
                zzh.zzj("lastIndexOf", 2, list);
                String str7 = this.zza;
                String strZzi2 = list.size() > 0 ? zzgVar.zzb((zzap) list.get(0)).zzi() : "undefined";
                double dDoubleValue2 = list.size() < 2 ? Double.NaN : zzgVar.zzb((zzap) list.get(1)).zzh().doubleValue();
                zzahVar = new zzah(Double.valueOf(str7.lastIndexOf(strZzi2, (int) (Double.isNaN(dDoubleValue2) ? Double.POSITIVE_INFINITY : zzh.zza(dDoubleValue2)))));
                return zzahVar;
            case 5:
                zzh.zzj("match", 1, list);
                Matcher matcher = Pattern.compile(list.size() > 0 ? zzgVar.zzb((zzap) list.get(0)).zzi() : "").matcher(this.zza);
                if (!matcher.find()) {
                    return zzap.zzg;
                }
                zzatVar = new zzae(Arrays.asList(new zzat(matcher.group())));
                return zzatVar;
            case 6:
                zzatVar2 = this;
                zzh.zzj("replace", 2, list);
                zzap zzapVarZza = zzap.zzf;
                if (list.size() > 0) {
                    strZzi = zzgVar.zzb((zzap) list.get(0)).zzi();
                    if (list.size() > 1) {
                        zzapVarZza = zzgVar.zzb((zzap) list.get(1));
                    }
                }
                String str8 = strZzi;
                String str9 = zzatVar2.zza;
                int iIndexOf = str9.indexOf(str8);
                if (iIndexOf >= 0) {
                    if (zzapVarZza instanceof zzai) {
                        zzapVarZza = ((zzai) zzapVarZza).zza(zzgVar, Arrays.asList(new zzat(str8), new zzah(Double.valueOf(iIndexOf)), zzatVar2));
                    }
                    String strSubstring = str9.substring(0, iIndexOf);
                    String strZzi3 = zzapVarZza.zzi();
                    String strSubstring2 = str9.substring(iIndexOf + str8.length());
                    StringBuilder sb2 = new StringBuilder(String.valueOf(strSubstring).length() + String.valueOf(strZzi3).length() + String.valueOf(strSubstring2).length());
                    sb2.append(strSubstring);
                    sb2.append(strZzi3);
                    sb2.append(strSubstring2);
                    zzahVar = new zzat(sb2.toString());
                    return zzahVar;
                }
                return zzatVar2;
            case 7:
                zzh.zzj(FirebaseAnalytics.Event.SEARCH, 1, list);
                Matcher matcher2 = Pattern.compile(list.size() > 0 ? zzgVar.zzb((zzap) list.get(0)).zzi() : "undefined").matcher(this.zza);
                if (!matcher2.find()) {
                    return new zzah(Double.valueOf(-1.0d));
                }
                zzatVar = new zzah(Double.valueOf(matcher2.start()));
                return zzatVar;
            case 8:
                zzh.zzj("slice", 2, list);
                String str10 = this.zza;
                double dZza = zzh.zza(list.size() > 0 ? zzgVar.zzb((zzap) list.get(0)).zzh().doubleValue() : 0.0d);
                int iMax = (int) (dZza < 0.0d ? Math.max(((double) str10.length()) + dZza, 0.0d) : Math.min(dZza, str10.length()));
                double dZza2 = zzh.zza(list.size() > 1 ? zzgVar.zzb((zzap) list.get(1)).zzh().doubleValue() : str10.length());
                zzatVar3 = new zzat(str10.substring(iMax, Math.max(0, ((int) (dZza2 < 0.0d ? Math.max(((double) str10.length()) + dZza2, 0.0d) : Math.min(dZza2, str10.length()))) - iMax) + iMax));
                return zzatVar3;
            case 9:
                zzh.zzj("split", 2, list);
                String str11 = this.zza;
                if (str11.length() == 0) {
                    return new zzae(Arrays.asList(this));
                }
                ArrayList arrayList = new ArrayList();
                if (list.size() == 0) {
                    arrayList.add(this);
                } else {
                    String strZzi4 = zzgVar.zzb((zzap) list.get(0)).zzi();
                    long jZzd = list.size() > 1 ? zzh.zzd(zzgVar.zzb((zzap) list.get(1)).zzh().doubleValue()) : 2147483647L;
                    if (jZzd == 0) {
                        return new zzae();
                    }
                    String[] strArrSplit = str11.split(Pattern.quote(strZzi4), ((int) jZzd) + 1);
                    int length = strArrSplit.length;
                    if (!strZzi4.equals("") || length <= 0) {
                        i2 = length;
                        i3 = 0;
                    } else {
                        zEquals = strArrSplit[0].equals("");
                        i2 = length - 1;
                        if (!strArrSplit[i2].equals("")) {
                            i3 = zEquals;
                            i2 = length;
                            i3 = zEquals;
                        }
                    }
                    i3 = zEquals;
                    if (length > jZzd) {
                        i2--;
                    }
                    while (i3 < i2) {
                        arrayList.add(new zzat(strArrSplit[i3]));
                        i3++;
                    }
                }
                return new zzae(arrayList);
            case 10:
                zzh.zzj("substring", 2, list);
                String str12 = this.zza;
                if (list.size() > 0) {
                    zzgVar2 = zzgVar;
                    iZza = (int) zzh.zza(zzgVar2.zzb((zzap) list.get(0)).zzh().doubleValue());
                } else {
                    zzgVar2 = zzgVar;
                    iZza = 0;
                }
                int iZza3 = list.size() > 1 ? (int) zzh.zza(zzgVar2.zzb((zzap) list.get(1)).zzh().doubleValue()) : str12.length();
                int iMin = Math.min(Math.max(iZza, 0), str12.length());
                int iMin2 = Math.min(Math.max(iZza3, 0), str12.length());
                zzatVar3 = new zzat(str12.substring(Math.min(iMin, iMin2), Math.max(iMin, iMin2)));
                return zzatVar3;
            case 11:
                zzh.zzh("toLocaleUpperCase", 0, list);
                zzatVar = new zzat(this.zza.toUpperCase());
                return zzatVar;
            case 12:
                zzh.zzh("toLocaleLowerCase", 0, list);
                zzatVar = new zzat(this.zza.toLowerCase());
                return zzatVar;
            case 13:
                zzh.zzh("toLowerCase", 0, list);
                zzatVar = new zzat(this.zza.toLowerCase(Locale.ENGLISH));
                return zzatVar;
            case 14:
                zzatVar2 = this;
                zzh.zzh("toString", 0, list);
                return zzatVar2;
            case 15:
                zzh.zzh("toUpperCase", 0, list);
                zzatVar = new zzat(this.zza.toUpperCase(Locale.ENGLISH));
                return zzatVar;
            case 16:
                zzh.zzh("toUpperCase", 0, list);
                zzatVar = new zzat(this.zza.trim());
                return zzatVar;
            default:
                throw new IllegalArgumentException("Command not supported");
        }
    }

    @Override // com.google.android.gms.internal.measurement.zzap
    public final zzap zzd() {
        return new zzat(this.zza);
    }

    @Override // com.google.android.gms.internal.measurement.zzap
    public final Boolean zzg() {
        return Boolean.valueOf(!this.zza.isEmpty());
    }

    @Override // com.google.android.gms.internal.measurement.zzap
    public final Double zzh() {
        if (this.zza.isEmpty()) {
            return Double.valueOf(0.0d);
        }
        try {
            return Double.valueOf(this.zza);
        } catch (NumberFormatException unused) {
            return Double.valueOf(Double.NaN);
        }
    }

    @Override // com.google.android.gms.internal.measurement.zzap
    public final String zzi() {
        return this.zza;
    }

    @Override // com.google.android.gms.internal.measurement.zzap
    public final Iterator zzl() {
        return new zzar(this);
    }
}
