package com.google.android.gms.internal.measurement;

import android.content.Context;
import android.net.Uri;
import android.os.Build;
import android.os.StrictMode;
import android.util.Log;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicReference;
import javax.annotation.Nullable;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public abstract class zzhu {
    public static final /* synthetic */ int zzc = 0;

    @Nullable
    private static volatile zzhs zze;
    private static volatile boolean zzf;
    final zzhr zza;
    final String zzb;
    private final Object zzj;
    private volatile int zzk = -1;
    private volatile Object zzl;
    private final boolean zzm;
    private static final Object zzd = new Object();
    private static final AtomicReference zzg = new AtomicReference();
    private static final zzhw zzh = new zzhw(zzhl.zza, null);
    private static final AtomicInteger zzi = new AtomicInteger();

    /* synthetic */ zzhu(zzhr zzhrVar, String str, Object obj, boolean z, zzht zzhtVar) {
        if (zzhrVar.zzb == null) {
            throw new IllegalArgumentException("Must pass a valid SharedPreferences file name or ContentProvider URI");
        }
        this.zza = zzhrVar;
        this.zzb = str;
        this.zzj = obj;
        this.zzm = true;
    }

    static void zzd() {
        zzi.incrementAndGet();
    }

    public static void zze(final Context context) {
        if (zze == null) {
            Object obj = zzd;
            synchronized (obj) {
                if (zze == null) {
                    synchronized (obj) {
                        zzhs zzhsVar = zze;
                        Context applicationContext = context.getApplicationContext();
                        if (applicationContext != null) {
                            context = applicationContext;
                        }
                        if (zzhsVar == null || zzhsVar.zza() != context) {
                            zzha.zze();
                            zzhv.zzc();
                            zzhh.zze();
                            zze = new zzgx(context, zzif.zza(new zzib() { // from class: com.google.android.gms.internal.measurement.zzhm
                                @Override // com.google.android.gms.internal.measurement.zzib
                                public final Object zza() {
                                    zzhz zzhzVarZzc;
                                    zzhz zzhzVarZzc2;
                                    Context contextCreateDeviceProtectedStorageContext = context;
                                    int i = zzhu.zzc;
                                    String str = Build.TYPE;
                                    String str2 = Build.TAGS;
                                    if ((!str.equals("eng") && !str.equals("userdebug")) || (!str2.contains("dev-keys") && !str2.contains("test-keys"))) {
                                        return zzhz.zzc();
                                    }
                                    if (zzgw.zza() && !contextCreateDeviceProtectedStorageContext.isDeviceProtectedStorage()) {
                                        contextCreateDeviceProtectedStorageContext = contextCreateDeviceProtectedStorageContext.createDeviceProtectedStorageContext();
                                    }
                                    StrictMode.ThreadPolicy threadPolicyAllowThreadDiskReads = StrictMode.allowThreadDiskReads();
                                    try {
                                        StrictMode.allowThreadDiskWrites();
                                        try {
                                            File file = new File(contextCreateDeviceProtectedStorageContext.getDir("phenotype_hermetic", 0), "overrides.txt");
                                            zzhzVarZzc = file.exists() ? zzhz.zzd(file) : zzhz.zzc();
                                        } catch (RuntimeException e) {
                                            Log.e("HermeticFileOverrides", "no data dir", e);
                                            zzhzVarZzc = zzhz.zzc();
                                        }
                                        if (zzhzVarZzc.zzb()) {
                                            File file2 = (File) zzhzVarZzc.zza();
                                            try {
                                                BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(file2)));
                                                try {
                                                    HashMap map = new HashMap();
                                                    HashMap map2 = new HashMap();
                                                    while (true) {
                                                        String line = bufferedReader.readLine();
                                                        if (line == null) {
                                                            break;
                                                        }
                                                        String[] strArrSplit = line.split(" ", 3);
                                                        if (strArrSplit.length != 3) {
                                                            Log.e("HermeticFileOverrides", line.length() != 0 ? "Invalid: ".concat(line) : new String("Invalid: "));
                                                        } else {
                                                            String str3 = new String(strArrSplit[0]);
                                                            String strDecode = Uri.decode(new String(strArrSplit[1]));
                                                            String strDecode2 = (String) map2.get(strArrSplit[2]);
                                                            if (strDecode2 == null) {
                                                                String str4 = new String(strArrSplit[2]);
                                                                strDecode2 = Uri.decode(str4);
                                                                if (strDecode2.length() < 1024 || strDecode2 == str4) {
                                                                    map2.put(str4, strDecode2);
                                                                }
                                                            }
                                                            if (!map.containsKey(str3)) {
                                                                map.put(str3, new HashMap());
                                                            }
                                                            ((Map) map.get(str3)).put(strDecode, strDecode2);
                                                        }
                                                    }
                                                    String string = file2.toString();
                                                    StringBuilder sb = new StringBuilder(string.length() + 7);
                                                    sb.append("Parsed ");
                                                    sb.append(string);
                                                    Log.i("HermeticFileOverrides", sb.toString());
                                                    zzhi zzhiVar = new zzhi(map);
                                                    bufferedReader.close();
                                                    zzhzVarZzc2 = zzhz.zzd(zzhiVar);
                                                } catch (Throwable th) {
                                                    try {
                                                        bufferedReader.close();
                                                    } catch (Throwable th2) {
                                                        try {
                                                            Throwable.class.getDeclaredMethod("addSuppressed", Throwable.class).invoke(th, th2);
                                                        } catch (Exception unused) {
                                                        }
                                                    }
                                                    throw th;
                                                }
                                            } catch (IOException e2) {
                                                throw new RuntimeException(e2);
                                            }
                                        } else {
                                            zzhzVarZzc2 = zzhz.zzc();
                                        }
                                        StrictMode.setThreadPolicy(threadPolicyAllowThreadDiskReads);
                                        return zzhzVarZzc2;
                                    } catch (Throwable th3) {
                                        StrictMode.setThreadPolicy(threadPolicyAllowThreadDiskReads);
                                        throw th3;
                                    }
                                }
                            }));
                            zzi.incrementAndGet();
                        }
                    }
                }
            }
        }
    }

    abstract Object zza(Object obj);

    /* JADX WARN: Code duplicated, block: B:40:0x00bd  */
    /* JADX WARN: Code duplicated, block: B:41:0x00be A[Catch: all -> 0x0124, TryCatch #0 {, blocks: (B:12:0x001c, B:14:0x0020, B:16:0x0026, B:18:0x003d, B:20:0x0049, B:22:0x0052, B:24:0x0064, B:26:0x006f, B:25:0x0069, B:53:0x00ea, B:55:0x00fa, B:57:0x0110, B:58:0x0113, B:59:0x0117, B:41:0x00be, B:43:0x00c4, B:47:0x00da, B:49:0x00e0, B:52:0x00e8, B:46:0x00d6, B:28:0x0074, B:30:0x007a, B:32:0x0088, B:36:0x00ad, B:38:0x00b7, B:34:0x009f, B:60:0x011c, B:61:0x0121, B:62:0x0122), top: B:69:0x001c }] */
    /* JADX WARN: Code duplicated, block: B:43:0x00c4 A[Catch: all -> 0x0124, TryCatch #0 {, blocks: (B:12:0x001c, B:14:0x0020, B:16:0x0026, B:18:0x003d, B:20:0x0049, B:22:0x0052, B:24:0x0064, B:26:0x006f, B:25:0x0069, B:53:0x00ea, B:55:0x00fa, B:57:0x0110, B:58:0x0113, B:59:0x0117, B:41:0x00be, B:43:0x00c4, B:47:0x00da, B:49:0x00e0, B:52:0x00e8, B:46:0x00d6, B:28:0x0074, B:30:0x007a, B:32:0x0088, B:36:0x00ad, B:38:0x00b7, B:34:0x009f, B:60:0x011c, B:61:0x0121, B:62:0x0122), top: B:69:0x001c }] */
    /* JADX WARN: Code duplicated, block: B:45:0x00d4  */
    /* JADX WARN: Code duplicated, block: B:46:0x00d6 A[Catch: all -> 0x0124, TryCatch #0 {, blocks: (B:12:0x001c, B:14:0x0020, B:16:0x0026, B:18:0x003d, B:20:0x0049, B:22:0x0052, B:24:0x0064, B:26:0x006f, B:25:0x0069, B:53:0x00ea, B:55:0x00fa, B:57:0x0110, B:58:0x0113, B:59:0x0117, B:41:0x00be, B:43:0x00c4, B:47:0x00da, B:49:0x00e0, B:52:0x00e8, B:46:0x00d6, B:28:0x0074, B:30:0x007a, B:32:0x0088, B:36:0x00ad, B:38:0x00b7, B:34:0x009f, B:60:0x011c, B:61:0x0121, B:62:0x0122), top: B:69:0x001c }] */
    /* JADX WARN: Code duplicated, block: B:49:0x00e0 A[Catch: all -> 0x0124, TryCatch #0 {, blocks: (B:12:0x001c, B:14:0x0020, B:16:0x0026, B:18:0x003d, B:20:0x0049, B:22:0x0052, B:24:0x0064, B:26:0x006f, B:25:0x0069, B:53:0x00ea, B:55:0x00fa, B:57:0x0110, B:58:0x0113, B:59:0x0117, B:41:0x00be, B:43:0x00c4, B:47:0x00da, B:49:0x00e0, B:52:0x00e8, B:46:0x00d6, B:28:0x0074, B:30:0x007a, B:32:0x0088, B:36:0x00ad, B:38:0x00b7, B:34:0x009f, B:60:0x011c, B:61:0x0121, B:62:0x0122), top: B:69:0x001c }] */
    /* JADX WARN: Code duplicated, block: B:50:0x00e5  */
    /* JADX WARN: Code duplicated, block: B:52:0x00e8 A[Catch: all -> 0x0124, TryCatch #0 {, blocks: (B:12:0x001c, B:14:0x0020, B:16:0x0026, B:18:0x003d, B:20:0x0049, B:22:0x0052, B:24:0x0064, B:26:0x006f, B:25:0x0069, B:53:0x00ea, B:55:0x00fa, B:57:0x0110, B:58:0x0113, B:59:0x0117, B:41:0x00be, B:43:0x00c4, B:47:0x00da, B:49:0x00e0, B:52:0x00e8, B:46:0x00d6, B:28:0x0074, B:30:0x007a, B:32:0x0088, B:36:0x00ad, B:38:0x00b7, B:34:0x009f, B:60:0x011c, B:61:0x0121, B:62:0x0122), top: B:69:0x001c }] */
    /* JADX WARN: Code duplicated, block: B:55:0x00fa A[Catch: all -> 0x0124, TryCatch #0 {, blocks: (B:12:0x001c, B:14:0x0020, B:16:0x0026, B:18:0x003d, B:20:0x0049, B:22:0x0052, B:24:0x0064, B:26:0x006f, B:25:0x0069, B:53:0x00ea, B:55:0x00fa, B:57:0x0110, B:58:0x0113, B:59:0x0117, B:41:0x00be, B:43:0x00c4, B:47:0x00da, B:49:0x00e0, B:52:0x00e8, B:46:0x00d6, B:28:0x0074, B:30:0x007a, B:32:0x0088, B:36:0x00ad, B:38:0x00b7, B:34:0x009f, B:60:0x011c, B:61:0x0121, B:62:0x0122), top: B:69:0x001c }] */
    /* JADX WARN: Code duplicated, block: B:57:0x0110 A[Catch: all -> 0x0124, TryCatch #0 {, blocks: (B:12:0x001c, B:14:0x0020, B:16:0x0026, B:18:0x003d, B:20:0x0049, B:22:0x0052, B:24:0x0064, B:26:0x006f, B:25:0x0069, B:53:0x00ea, B:55:0x00fa, B:57:0x0110, B:58:0x0113, B:59:0x0117, B:41:0x00be, B:43:0x00c4, B:47:0x00da, B:49:0x00e0, B:52:0x00e8, B:46:0x00d6, B:28:0x0074, B:30:0x007a, B:32:0x0088, B:36:0x00ad, B:38:0x00b7, B:34:0x009f, B:60:0x011c, B:61:0x0121, B:62:0x0122), top: B:69:0x001c }] */
    /* JADX WARN: Code duplicated, block: B:58:0x0113 A[Catch: all -> 0x0124, TryCatch #0 {, blocks: (B:12:0x001c, B:14:0x0020, B:16:0x0026, B:18:0x003d, B:20:0x0049, B:22:0x0052, B:24:0x0064, B:26:0x006f, B:25:0x0069, B:53:0x00ea, B:55:0x00fa, B:57:0x0110, B:58:0x0113, B:59:0x0117, B:41:0x00be, B:43:0x00c4, B:47:0x00da, B:49:0x00e0, B:52:0x00e8, B:46:0x00d6, B:28:0x0074, B:30:0x007a, B:32:0x0088, B:36:0x00ad, B:38:0x00b7, B:34:0x009f, B:60:0x011c, B:61:0x0121, B:62:0x0122), top: B:69:0x001c }] */
    public final Object zzb() {
        zzhe zzheVarZza;
        Object objZzb;
        Object objZza;
        zzhr zzhrVar;
        zzhr zzhrVar2;
        String str;
        String strZzc;
        zzhz zzhzVar;
        String strZza;
        if (!this.zzm && this.zzb == null) {
            throw new NullPointerException("flagName must not be null");
        }
        int i = zzi.get();
        if (this.zzk < i) {
            synchronized (this) {
                if (this.zzk < i) {
                    zzhs zzhsVar = zze;
                    if (zzhsVar == null) {
                        throw new IllegalStateException("Must call PhenotypeFlag.init() first");
                    }
                    zzhr zzhrVar3 = this.zza;
                    boolean z = zzhrVar3.zzf;
                    boolean z2 = zzhrVar3.zzg;
                    String strZzc2 = zzhh.zza(zzhsVar.zza()).zzb("gms:phenotype:phenotype_flag:debug_bypass_phenotype");
                    if (strZzc2 == null || !zzgv.zzc.matcher(strZzc2).matches()) {
                        if (this.zza.zzb == null) {
                            Context contextZza = zzhsVar.zza();
                            String str2 = this.zza.zza;
                            zzheVarZza = zzhv.zza(contextZza, null);
                        } else if (zzhj.zza(zzhsVar.zza(), this.zza.zzb)) {
                            boolean z3 = this.zza.zzh;
                            zzheVarZza = zzha.zza(zzhsVar.zza().getContentResolver(), this.zza.zzb);
                        } else {
                            zzheVarZza = null;
                        }
                        if (zzheVarZza != null && (objZzb = zzheVarZza.zzb(zzc())) != null) {
                            objZza = zza(objZzb);
                        }
                        if (objZza != null) {
                            zzhrVar = this.zza;
                            if (zzhrVar.zze) {
                                objZza = null;
                            } else {
                                zzhy zzhyVar = zzhrVar.zzi;
                                zzhh zzhhVarZza = zzhh.zza(zzhsVar.zza());
                                zzhrVar2 = this.zza;
                                if (zzhrVar2.zze) {
                                    str = null;
                                } else {
                                    String str3 = zzhrVar2.zzc;
                                    str = this.zzb;
                                }
                                strZzc = zzhhVarZza.zzb(str);
                                if (strZzc != null) {
                                    objZza = zza(strZzc);
                                } else {
                                    objZza = null;
                                }
                            }
                            if (objZza == null) {
                                objZza = this.zzj;
                            }
                        }
                        zzhzVar = (zzhz) zzhsVar.zzb().zza();
                        if (zzhzVar.zzb()) {
                            zzhi zzhiVar = (zzhi) zzhzVar.zza();
                            zzhr zzhrVar4 = this.zza;
                            Uri uri = zzhrVar4.zzb;
                            String str4 = zzhrVar4.zza;
                            strZza = zzhiVar.zza(uri, null, zzhrVar4.zzd, this.zzb);
                            if (strZza == null) {
                                objZza = this.zzj;
                            } else {
                                objZza = zza(strZza);
                            }
                        }
                        this.zzl = objZza;
                        this.zzk = i;
                    } else if (Log.isLoggable("PhenotypeFlag", 3)) {
                        String strValueOf = String.valueOf(zzc());
                        Log.d("PhenotypeFlag", strValueOf.length() != 0 ? "Bypass reading Phenotype values for flag: ".concat(strValueOf) : new String("Bypass reading Phenotype values for flag: "));
                    }
                    objZza = null;
                    if (objZza != null) {
                        zzhrVar = this.zza;
                        if (zzhrVar.zze) {
                            zzhy zzhyVar2 = zzhrVar.zzi;
                            zzhh zzhhVarZza2 = zzhh.zza(zzhsVar.zza());
                            zzhrVar2 = this.zza;
                            if (zzhrVar2.zze) {
                                str = null;
                            } else {
                                String str5 = zzhrVar2.zzc;
                                str = this.zzb;
                            }
                            strZzc = zzhhVarZza2.zzb(str);
                            if (strZzc != null) {
                                objZza = zza(strZzc);
                            } else {
                                objZza = null;
                            }
                        } else {
                            objZza = null;
                        }
                        if (objZza == null) {
                            objZza = this.zzj;
                        }
                    }
                    zzhzVar = (zzhz) zzhsVar.zzb().zza();
                    if (zzhzVar.zzb()) {
                        zzhi zzhiVar2 = (zzhi) zzhzVar.zza();
                        zzhr zzhrVar5 = this.zza;
                        Uri uri2 = zzhrVar5.zzb;
                        String str6 = zzhrVar5.zza;
                        strZza = zzhiVar2.zza(uri2, null, zzhrVar5.zzd, this.zzb);
                        if (strZza == null) {
                            objZza = this.zzj;
                        } else {
                            objZza = zza(strZza);
                        }
                    }
                    this.zzl = objZza;
                    this.zzk = i;
                }
            }
        }
        return this.zzl;
    }

    public final String zzc() {
        String str = this.zza.zzd;
        return this.zzb;
    }
}
