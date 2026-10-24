package com.google.android.gms.dynamite;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.os.IBinder;
import android.os.IInterface;
import android.os.RemoteException;
import android.os.SystemClock;
import android.util.Log;
import com.google.android.gms.common.internal.Objects;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.common.util.CrashUtils;
import com.google.android.gms.dynamic.IObjectWrapper;
import com.google.android.gms.dynamic.ObjectWrapper;
import com.google.firebase.analytics.FirebaseAnalytics;
import dalvik.system.DelegateLastClassLoader;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;

/* JADX INFO: compiled from: com.google.android.gms:play-services-basement@@18.0.0 */
/* JADX INFO: loaded from: classes.dex */
public final class DynamiteModule {
    private static Boolean zzb = null;
    private static String zzc = null;
    private static boolean zzd = false;
    private static int zze = -1;
    private static zzq zzj;
    private static zzr zzk;
    private final Context zzi;
    private static final ThreadLocal<zzn> zzf = new ThreadLocal<>();
    private static final ThreadLocal<Long> zzg = new zzd();
    private static final VersionPolicy.IVersions zzh = new zze();
    public static final VersionPolicy PREFER_REMOTE = new zzf();
    public static final VersionPolicy PREFER_LOCAL = new zzg();
    public static final VersionPolicy PREFER_REMOTE_VERSION_NO_FORCE_STAGING = new zzh();
    public static final VersionPolicy PREFER_HIGHEST_OR_LOCAL_VERSION = new zzi();
    public static final VersionPolicy PREFER_HIGHEST_OR_LOCAL_VERSION_NO_FORCE_STAGING = new zzj();
    public static final VersionPolicy PREFER_HIGHEST_OR_REMOTE_VERSION = new zzk();
    public static final VersionPolicy zza = new zzl();

    /* JADX INFO: compiled from: com.google.android.gms:play-services-basement@@18.0.0 */
    public static class DynamiteLoaderClassLoader {
        public static ClassLoader sClassLoader;
    }

    /* JADX INFO: compiled from: com.google.android.gms:play-services-basement@@18.0.0 */
    public static class LoadingException extends Exception {
        /* synthetic */ LoadingException(String str, zzp zzpVar) {
            super(str);
        }

        /* synthetic */ LoadingException(String str, Throwable th, zzp zzpVar) {
            super(str, th);
        }
    }

    /* JADX INFO: compiled from: com.google.android.gms:play-services-basement@@18.0.0 */
    public interface VersionPolicy {

        /* JADX INFO: compiled from: com.google.android.gms:play-services-basement@@18.0.0 */
        public interface IVersions {
            int zza(Context context, String str);

            int zzb(Context context, String str, boolean z) throws LoadingException;
        }

        /* JADX INFO: compiled from: com.google.android.gms:play-services-basement@@18.0.0 */
        public static class SelectionResult {
            public int localVersion = 0;
            public int remoteVersion = 0;
            public int selection = 0;
        }

        SelectionResult selectModule(Context context, String str, IVersions iVersions) throws LoadingException;
    }

    private DynamiteModule(Context context) {
        Preconditions.checkNotNull(context);
        this.zzi = context;
    }

    public static int getLocalVersion(Context context, String str) {
        try {
            ClassLoader classLoader = context.getApplicationContext().getClassLoader();
            StringBuilder sb = new StringBuilder(String.valueOf(str).length() + 61);
            sb.append("com.google.android.gms.dynamite.descriptors.");
            sb.append(str);
            sb.append(".ModuleDescriptor");
            Class<?> clsLoadClass = classLoader.loadClass(sb.toString());
            Field declaredField = clsLoadClass.getDeclaredField("MODULE_ID");
            Field declaredField2 = clsLoadClass.getDeclaredField("MODULE_VERSION");
            if (Objects.equal(declaredField.get(null), str)) {
                return declaredField2.getInt(null);
            }
            String strValueOf = String.valueOf(declaredField.get(null));
            StringBuilder sb2 = new StringBuilder(String.valueOf(strValueOf).length() + 51 + String.valueOf(str).length());
            sb2.append("Module descriptor id '");
            sb2.append(strValueOf);
            sb2.append("' didn't match expected id '");
            sb2.append(str);
            sb2.append("'");
            Log.e("DynamiteModule", sb2.toString());
            return 0;
        } catch (ClassNotFoundException unused) {
            StringBuilder sb3 = new StringBuilder(String.valueOf(str).length() + 45);
            sb3.append("Local module descriptor class for ");
            sb3.append(str);
            sb3.append(" not found.");
            Log.w("DynamiteModule", sb3.toString());
            return 0;
        } catch (Exception e) {
            String strValueOf2 = String.valueOf(e.getMessage());
            Log.e("DynamiteModule", strValueOf2.length() != 0 ? "Failed to load module descriptor class: ".concat(strValueOf2) : new String("Failed to load module descriptor class: "));
            return 0;
        }
    }

    public static int getRemoteVersion(Context context, String str) {
        return zza(context, str, false);
    }

    /* JADX WARN: Code duplicated, block: B:132:0x02b4 A[Catch: all -> 0x0309, TryCatch #5 {all -> 0x0309, blocks: (B:3:0x0023, B:7:0x0081, B:12:0x0089, B:15:0x008f, B:26:0x00b1, B:104:0x0239, B:105:0x0244, B:107:0x0246, B:109:0x0248, B:110:0x0250, B:132:0x02b4, B:133:0x02cd, B:112:0x0252, B:114:0x0264, B:116:0x026f, B:118:0x0276, B:120:0x0285, B:130:0x02ab, B:131:0x02b3, B:115:0x0269, B:134:0x02ce, B:135:0x0308), top: B:151:0x0023, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:146:0x00ed A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:148:0x00b1 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:149:0x00b6 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:15:0x008f A[Catch: all -> 0x0309, TRY_LEAVE, TryCatch #5 {all -> 0x0309, blocks: (B:3:0x0023, B:7:0x0081, B:12:0x0089, B:15:0x008f, B:26:0x00b1, B:104:0x0239, B:105:0x0244, B:107:0x0246, B:109:0x0248, B:110:0x0250, B:132:0x02b4, B:133:0x02cd, B:112:0x0252, B:114:0x0264, B:116:0x026f, B:118:0x0276, B:120:0x0285, B:130:0x02ab, B:131:0x02b3, B:115:0x0269, B:134:0x02ce, B:135:0x0308), top: B:151:0x0023, inners: #1 }] */
    /* JADX WARN: Code duplicated, block: B:18:0x0099  */
    /* JADX WARN: Code duplicated, block: B:19:0x009d  */
    /* JADX WARN: Code duplicated, block: B:22:0x00a8  */
    /* JADX WARN: Code duplicated, block: B:25:0x00af A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:32:0x00bb A[Catch: all -> 0x0238, LoadingException -> 0x0245, RemoteException -> 0x0247, TRY_ENTER, TryCatch #7 {RemoteException -> 0x0247, LoadingException -> 0x0245, all -> 0x0238, blocks: (B:28:0x00b5, B:32:0x00bb, B:34:0x00c2, B:35:0x00ec, B:39:0x00f2, B:41:0x00fa, B:43:0x00fe, B:44:0x010b, B:51:0x011a, B:53:0x0120, B:55:0x0147, B:57:0x014f, B:58:0x0156, B:59:0x015e, B:54:0x0134, B:62:0x0161, B:63:0x0162, B:64:0x016a, B:65:0x016b, B:66:0x0173, B:69:0x0176, B:70:0x0177, B:72:0x01a5, B:74:0x01ac, B:76:0x01b4, B:82:0x01ed, B:84:0x01f3, B:94:0x021a, B:95:0x0222, B:77:0x01c3, B:78:0x01cb, B:80:0x01ce, B:81:0x01de, B:96:0x0223, B:97:0x022b, B:98:0x022c, B:99:0x0234, B:102:0x0237), top: B:154:0x00b5 }] */
    /* JADX WARN: Code duplicated, block: B:34:0x00c2 A[Catch: all -> 0x0238, LoadingException -> 0x0245, RemoteException -> 0x0247, TryCatch #7 {RemoteException -> 0x0247, LoadingException -> 0x0245, all -> 0x0238, blocks: (B:28:0x00b5, B:32:0x00bb, B:34:0x00c2, B:35:0x00ec, B:39:0x00f2, B:41:0x00fa, B:43:0x00fe, B:44:0x010b, B:51:0x011a, B:53:0x0120, B:55:0x0147, B:57:0x014f, B:58:0x0156, B:59:0x015e, B:54:0x0134, B:62:0x0161, B:63:0x0162, B:64:0x016a, B:65:0x016b, B:66:0x0173, B:69:0x0176, B:70:0x0177, B:72:0x01a5, B:74:0x01ac, B:76:0x01b4, B:82:0x01ed, B:84:0x01f3, B:94:0x021a, B:95:0x0222, B:77:0x01c3, B:78:0x01cb, B:80:0x01ce, B:81:0x01de, B:96:0x0223, B:97:0x022b, B:98:0x022c, B:99:0x0234, B:102:0x0237), top: B:154:0x00b5 }] */
    /* JADX WARN: Code duplicated, block: B:39:0x00f2 A[Catch: all -> 0x0238, LoadingException -> 0x0245, RemoteException -> 0x0247, TRY_ENTER, TryCatch #7 {RemoteException -> 0x0247, LoadingException -> 0x0245, all -> 0x0238, blocks: (B:28:0x00b5, B:32:0x00bb, B:34:0x00c2, B:35:0x00ec, B:39:0x00f2, B:41:0x00fa, B:43:0x00fe, B:44:0x010b, B:51:0x011a, B:53:0x0120, B:55:0x0147, B:57:0x014f, B:58:0x0156, B:59:0x015e, B:54:0x0134, B:62:0x0161, B:63:0x0162, B:64:0x016a, B:65:0x016b, B:66:0x0173, B:69:0x0176, B:70:0x0177, B:72:0x01a5, B:74:0x01ac, B:76:0x01b4, B:82:0x01ed, B:84:0x01f3, B:94:0x021a, B:95:0x0222, B:77:0x01c3, B:78:0x01cb, B:80:0x01ce, B:81:0x01de, B:96:0x0223, B:97:0x022b, B:98:0x022c, B:99:0x0234, B:102:0x0237), top: B:154:0x00b5 }] */
    /* JADX WARN: Code duplicated, block: B:65:0x016b A[Catch: all -> 0x0238, LoadingException -> 0x0245, RemoteException -> 0x0247, TryCatch #7 {RemoteException -> 0x0247, LoadingException -> 0x0245, all -> 0x0238, blocks: (B:28:0x00b5, B:32:0x00bb, B:34:0x00c2, B:35:0x00ec, B:39:0x00f2, B:41:0x00fa, B:43:0x00fe, B:44:0x010b, B:51:0x011a, B:53:0x0120, B:55:0x0147, B:57:0x014f, B:58:0x0156, B:59:0x015e, B:54:0x0134, B:62:0x0161, B:63:0x0162, B:64:0x016a, B:65:0x016b, B:66:0x0173, B:69:0x0176, B:70:0x0177, B:72:0x01a5, B:74:0x01ac, B:76:0x01b4, B:82:0x01ed, B:84:0x01f3, B:94:0x021a, B:95:0x0222, B:77:0x01c3, B:78:0x01cb, B:80:0x01ce, B:81:0x01de, B:96:0x0223, B:97:0x022b, B:98:0x022c, B:99:0x0234, B:102:0x0237), top: B:154:0x00b5 }] */
    /* JADX WARN: Code duplicated, block: B:70:0x0177 A[Catch: all -> 0x0238, LoadingException -> 0x0245, RemoteException -> 0x0247, TryCatch #7 {RemoteException -> 0x0247, LoadingException -> 0x0245, all -> 0x0238, blocks: (B:28:0x00b5, B:32:0x00bb, B:34:0x00c2, B:35:0x00ec, B:39:0x00f2, B:41:0x00fa, B:43:0x00fe, B:44:0x010b, B:51:0x011a, B:53:0x0120, B:55:0x0147, B:57:0x014f, B:58:0x0156, B:59:0x015e, B:54:0x0134, B:62:0x0161, B:63:0x0162, B:64:0x016a, B:65:0x016b, B:66:0x0173, B:69:0x0176, B:70:0x0177, B:72:0x01a5, B:74:0x01ac, B:76:0x01b4, B:82:0x01ed, B:84:0x01f3, B:94:0x021a, B:95:0x0222, B:77:0x01c3, B:78:0x01cb, B:80:0x01ce, B:81:0x01de, B:96:0x0223, B:97:0x022b, B:98:0x022c, B:99:0x0234, B:102:0x0237), top: B:154:0x00b5 }] */
    /* JADX WARN: Code duplicated, block: B:72:0x01a5 A[Catch: all -> 0x0238, LoadingException -> 0x0245, RemoteException -> 0x0247, TryCatch #7 {RemoteException -> 0x0247, LoadingException -> 0x0245, all -> 0x0238, blocks: (B:28:0x00b5, B:32:0x00bb, B:34:0x00c2, B:35:0x00ec, B:39:0x00f2, B:41:0x00fa, B:43:0x00fe, B:44:0x010b, B:51:0x011a, B:53:0x0120, B:55:0x0147, B:57:0x014f, B:58:0x0156, B:59:0x015e, B:54:0x0134, B:62:0x0161, B:63:0x0162, B:64:0x016a, B:65:0x016b, B:66:0x0173, B:69:0x0176, B:70:0x0177, B:72:0x01a5, B:74:0x01ac, B:76:0x01b4, B:82:0x01ed, B:84:0x01f3, B:94:0x021a, B:95:0x0222, B:77:0x01c3, B:78:0x01cb, B:80:0x01ce, B:81:0x01de, B:96:0x0223, B:97:0x022b, B:98:0x022c, B:99:0x0234, B:102:0x0237), top: B:154:0x00b5 }] */
    /* JADX WARN: Code duplicated, block: B:74:0x01ac A[Catch: all -> 0x0238, LoadingException -> 0x0245, RemoteException -> 0x0247, TryCatch #7 {RemoteException -> 0x0247, LoadingException -> 0x0245, all -> 0x0238, blocks: (B:28:0x00b5, B:32:0x00bb, B:34:0x00c2, B:35:0x00ec, B:39:0x00f2, B:41:0x00fa, B:43:0x00fe, B:44:0x010b, B:51:0x011a, B:53:0x0120, B:55:0x0147, B:57:0x014f, B:58:0x0156, B:59:0x015e, B:54:0x0134, B:62:0x0161, B:63:0x0162, B:64:0x016a, B:65:0x016b, B:66:0x0173, B:69:0x0176, B:70:0x0177, B:72:0x01a5, B:74:0x01ac, B:76:0x01b4, B:82:0x01ed, B:84:0x01f3, B:94:0x021a, B:95:0x0222, B:77:0x01c3, B:78:0x01cb, B:80:0x01ce, B:81:0x01de, B:96:0x0223, B:97:0x022b, B:98:0x022c, B:99:0x0234, B:102:0x0237), top: B:154:0x00b5 }] */
    /* JADX WARN: Code duplicated, block: B:76:0x01b4 A[Catch: all -> 0x0238, LoadingException -> 0x0245, RemoteException -> 0x0247, TryCatch #7 {RemoteException -> 0x0247, LoadingException -> 0x0245, all -> 0x0238, blocks: (B:28:0x00b5, B:32:0x00bb, B:34:0x00c2, B:35:0x00ec, B:39:0x00f2, B:41:0x00fa, B:43:0x00fe, B:44:0x010b, B:51:0x011a, B:53:0x0120, B:55:0x0147, B:57:0x014f, B:58:0x0156, B:59:0x015e, B:54:0x0134, B:62:0x0161, B:63:0x0162, B:64:0x016a, B:65:0x016b, B:66:0x0173, B:69:0x0176, B:70:0x0177, B:72:0x01a5, B:74:0x01ac, B:76:0x01b4, B:82:0x01ed, B:84:0x01f3, B:94:0x021a, B:95:0x0222, B:77:0x01c3, B:78:0x01cb, B:80:0x01ce, B:81:0x01de, B:96:0x0223, B:97:0x022b, B:98:0x022c, B:99:0x0234, B:102:0x0237), top: B:154:0x00b5 }] */
    /* JADX WARN: Code duplicated, block: B:77:0x01c3 A[Catch: all -> 0x0238, LoadingException -> 0x0245, RemoteException -> 0x0247, TryCatch #7 {RemoteException -> 0x0247, LoadingException -> 0x0245, all -> 0x0238, blocks: (B:28:0x00b5, B:32:0x00bb, B:34:0x00c2, B:35:0x00ec, B:39:0x00f2, B:41:0x00fa, B:43:0x00fe, B:44:0x010b, B:51:0x011a, B:53:0x0120, B:55:0x0147, B:57:0x014f, B:58:0x0156, B:59:0x015e, B:54:0x0134, B:62:0x0161, B:63:0x0162, B:64:0x016a, B:65:0x016b, B:66:0x0173, B:69:0x0176, B:70:0x0177, B:72:0x01a5, B:74:0x01ac, B:76:0x01b4, B:82:0x01ed, B:84:0x01f3, B:94:0x021a, B:95:0x0222, B:77:0x01c3, B:78:0x01cb, B:80:0x01ce, B:81:0x01de, B:96:0x0223, B:97:0x022b, B:98:0x022c, B:99:0x0234, B:102:0x0237), top: B:154:0x00b5 }] */
    /* JADX WARN: Code duplicated, block: B:79:0x01cc A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:80:0x01ce A[Catch: all -> 0x0238, LoadingException -> 0x0245, RemoteException -> 0x0247, TryCatch #7 {RemoteException -> 0x0247, LoadingException -> 0x0245, all -> 0x0238, blocks: (B:28:0x00b5, B:32:0x00bb, B:34:0x00c2, B:35:0x00ec, B:39:0x00f2, B:41:0x00fa, B:43:0x00fe, B:44:0x010b, B:51:0x011a, B:53:0x0120, B:55:0x0147, B:57:0x014f, B:58:0x0156, B:59:0x015e, B:54:0x0134, B:62:0x0161, B:63:0x0162, B:64:0x016a, B:65:0x016b, B:66:0x0173, B:69:0x0176, B:70:0x0177, B:72:0x01a5, B:74:0x01ac, B:76:0x01b4, B:82:0x01ed, B:84:0x01f3, B:94:0x021a, B:95:0x0222, B:77:0x01c3, B:78:0x01cb, B:80:0x01ce, B:81:0x01de, B:96:0x0223, B:97:0x022b, B:98:0x022c, B:99:0x0234, B:102:0x0237), top: B:154:0x00b5 }] */
    /* JADX WARN: Code duplicated, block: B:81:0x01de A[Catch: all -> 0x0238, LoadingException -> 0x0245, RemoteException -> 0x0247, TryCatch #7 {RemoteException -> 0x0247, LoadingException -> 0x0245, all -> 0x0238, blocks: (B:28:0x00b5, B:32:0x00bb, B:34:0x00c2, B:35:0x00ec, B:39:0x00f2, B:41:0x00fa, B:43:0x00fe, B:44:0x010b, B:51:0x011a, B:53:0x0120, B:55:0x0147, B:57:0x014f, B:58:0x0156, B:59:0x015e, B:54:0x0134, B:62:0x0161, B:63:0x0162, B:64:0x016a, B:65:0x016b, B:66:0x0173, B:69:0x0176, B:70:0x0177, B:72:0x01a5, B:74:0x01ac, B:76:0x01b4, B:82:0x01ed, B:84:0x01f3, B:94:0x021a, B:95:0x0222, B:77:0x01c3, B:78:0x01cb, B:80:0x01ce, B:81:0x01de, B:96:0x0223, B:97:0x022b, B:98:0x022c, B:99:0x0234, B:102:0x0237), top: B:154:0x00b5 }] */
    /* JADX WARN: Code duplicated, block: B:84:0x01f3 A[Catch: all -> 0x0238, LoadingException -> 0x0245, RemoteException -> 0x0247, TRY_LEAVE, TryCatch #7 {RemoteException -> 0x0247, LoadingException -> 0x0245, all -> 0x0238, blocks: (B:28:0x00b5, B:32:0x00bb, B:34:0x00c2, B:35:0x00ec, B:39:0x00f2, B:41:0x00fa, B:43:0x00fe, B:44:0x010b, B:51:0x011a, B:53:0x0120, B:55:0x0147, B:57:0x014f, B:58:0x0156, B:59:0x015e, B:54:0x0134, B:62:0x0161, B:63:0x0162, B:64:0x016a, B:65:0x016b, B:66:0x0173, B:69:0x0176, B:70:0x0177, B:72:0x01a5, B:74:0x01ac, B:76:0x01b4, B:82:0x01ed, B:84:0x01f3, B:94:0x021a, B:95:0x0222, B:77:0x01c3, B:78:0x01cb, B:80:0x01ce, B:81:0x01de, B:96:0x0223, B:97:0x022b, B:98:0x022c, B:99:0x0234, B:102:0x0237), top: B:154:0x00b5 }] */
    /* JADX WARN: Code duplicated, block: B:87:0x0204  */
    /* JADX WARN: Code duplicated, block: B:88:0x0208  */
    /* JADX WARN: Code duplicated, block: B:91:0x0213  */
    /* JADX WARN: Code duplicated, block: B:94:0x021a A[Catch: all -> 0x0238, LoadingException -> 0x0245, RemoteException -> 0x0247, TRY_ENTER, TryCatch #7 {RemoteException -> 0x0247, LoadingException -> 0x0245, all -> 0x0238, blocks: (B:28:0x00b5, B:32:0x00bb, B:34:0x00c2, B:35:0x00ec, B:39:0x00f2, B:41:0x00fa, B:43:0x00fe, B:44:0x010b, B:51:0x011a, B:53:0x0120, B:55:0x0147, B:57:0x014f, B:58:0x0156, B:59:0x015e, B:54:0x0134, B:62:0x0161, B:63:0x0162, B:64:0x016a, B:65:0x016b, B:66:0x0173, B:69:0x0176, B:70:0x0177, B:72:0x01a5, B:74:0x01ac, B:76:0x01b4, B:82:0x01ed, B:84:0x01f3, B:94:0x021a, B:95:0x0222, B:77:0x01c3, B:78:0x01cb, B:80:0x01ce, B:81:0x01de, B:96:0x0223, B:97:0x022b, B:98:0x022c, B:99:0x0234, B:102:0x0237), top: B:154:0x00b5 }] */
    /* JADX WARN: Code duplicated, block: B:96:0x0223 A[Catch: all -> 0x0238, LoadingException -> 0x0245, RemoteException -> 0x0247, TryCatch #7 {RemoteException -> 0x0247, LoadingException -> 0x0245, all -> 0x0238, blocks: (B:28:0x00b5, B:32:0x00bb, B:34:0x00c2, B:35:0x00ec, B:39:0x00f2, B:41:0x00fa, B:43:0x00fe, B:44:0x010b, B:51:0x011a, B:53:0x0120, B:55:0x0147, B:57:0x014f, B:58:0x0156, B:59:0x015e, B:54:0x0134, B:62:0x0161, B:63:0x0162, B:64:0x016a, B:65:0x016b, B:66:0x0173, B:69:0x0176, B:70:0x0177, B:72:0x01a5, B:74:0x01ac, B:76:0x01b4, B:82:0x01ed, B:84:0x01f3, B:94:0x021a, B:95:0x0222, B:77:0x01c3, B:78:0x01cb, B:80:0x01ce, B:81:0x01de, B:96:0x0223, B:97:0x022b, B:98:0x022c, B:99:0x0234, B:102:0x0237), top: B:154:0x00b5 }] */
    /* JADX WARN: Code duplicated, block: B:98:0x022c A[Catch: all -> 0x0238, LoadingException -> 0x0245, RemoteException -> 0x0247, TryCatch #7 {RemoteException -> 0x0247, LoadingException -> 0x0245, all -> 0x0238, blocks: (B:28:0x00b5, B:32:0x00bb, B:34:0x00c2, B:35:0x00ec, B:39:0x00f2, B:41:0x00fa, B:43:0x00fe, B:44:0x010b, B:51:0x011a, B:53:0x0120, B:55:0x0147, B:57:0x014f, B:58:0x0156, B:59:0x015e, B:54:0x0134, B:62:0x0161, B:63:0x0162, B:64:0x016a, B:65:0x016b, B:66:0x0173, B:69:0x0176, B:70:0x0177, B:72:0x01a5, B:74:0x01ac, B:76:0x01b4, B:82:0x01ed, B:84:0x01f3, B:94:0x021a, B:95:0x0222, B:77:0x01c3, B:78:0x01cb, B:80:0x01ce, B:81:0x01de, B:96:0x0223, B:97:0x022b, B:98:0x022c, B:99:0x0234, B:102:0x0237), top: B:154:0x00b5 }] */
    public static DynamiteModule load(Context context, VersionPolicy versionPolicy, String str) throws LoadingException {
        int i;
        Boolean bool;
        zzq zzqVarZzf;
        int iZze;
        IObjectWrapper iObjectWrapperZzh;
        DynamiteModule dynamiteModule;
        zzn zznVar;
        Cursor cursor;
        zzr zzrVar;
        zzn zznVar2;
        Boolean boolValueOf;
        IObjectWrapper iObjectWrapperZze;
        Cursor cursor2;
        ThreadLocal<zzn> threadLocal = zzf;
        zzn zznVar3 = threadLocal.get();
        zzn zznVar4 = new zzn(null);
        threadLocal.set(zznVar4);
        ThreadLocal<Long> threadLocal2 = zzg;
        long jLongValue = threadLocal2.get().longValue();
        try {
            threadLocal2.set(Long.valueOf(SystemClock.elapsedRealtime()));
            VersionPolicy.SelectionResult selectionResultSelectModule = versionPolicy.selectModule(context, str, zzh);
            int i2 = selectionResultSelectModule.localVersion;
            int i3 = selectionResultSelectModule.remoteVersion;
            StringBuilder sb = new StringBuilder(String.valueOf(str).length() + 68 + String.valueOf(str).length());
            sb.append("Considering local module ");
            sb.append(str);
            sb.append(":");
            sb.append(i2);
            sb.append(" and remote module ");
            sb.append(str);
            sb.append(":");
            sb.append(i3);
            Log.i("DynamiteModule", sb.toString());
            int i4 = selectionResultSelectModule.selection;
            if (i4 != 0) {
                if (i4 != -1) {
                    if (i4 == 1 || selectionResultSelectModule.remoteVersion != 0) {
                        if (i4 == -1) {
                            DynamiteModule dynamiteModuleZzc = zzc(context, str);
                            if (jLongValue == 0) {
                                threadLocal2.remove();
                            } else {
                                threadLocal2.set(Long.valueOf(jLongValue));
                            }
                            cursor2 = zznVar4.zza;
                            if (cursor2 != null) {
                                cursor2.close();
                            }
                            threadLocal.set(zznVar3);
                            return dynamiteModuleZzc;
                        }
                        if (i4 == 1) {
                            StringBuilder sb2 = new StringBuilder(47);
                            sb2.append("VersionPolicy returned invalid code:");
                            sb2.append(i4);
                            throw new LoadingException(sb2.toString(), null);
                        }
                        try {
                            i = selectionResultSelectModule.remoteVersion;
                            try {
                                synchronized (DynamiteModule.class) {
                                    bool = zzb;
                                }
                                if (bool != null) {
                                    throw new LoadingException("Failed to determine which loading route to use.", null);
                                }
                                if (bool.booleanValue()) {
                                    StringBuilder sb3 = new StringBuilder(String.valueOf(str).length() + 51);
                                    sb3.append("Selected remote version of ");
                                    sb3.append(str);
                                    sb3.append(", version >= ");
                                    sb3.append(i);
                                    Log.i("DynamiteModule", sb3.toString());
                                    synchronized (DynamiteModule.class) {
                                        zzrVar = zzk;
                                    }
                                    if (zzrVar != null) {
                                        throw new LoadingException("DynamiteLoaderV2 was not cached.", null);
                                    }
                                    zznVar2 = threadLocal.get();
                                    if (zznVar2 != null || zznVar2.zza == null) {
                                        throw new LoadingException("No result cursor", null);
                                    }
                                    Context applicationContext = context.getApplicationContext();
                                    Cursor cursor3 = zznVar2.zza;
                                    ObjectWrapper.wrap(null);
                                    synchronized (DynamiteModule.class) {
                                        boolValueOf = Boolean.valueOf(zze >= 2);
                                    }
                                    if (boolValueOf.booleanValue()) {
                                        Log.v("DynamiteModule", "Dynamite loader version >= 2, using loadModule2NoCrashUtils");
                                        iObjectWrapperZze = zzrVar.zzf(ObjectWrapper.wrap(applicationContext), str, i, ObjectWrapper.wrap(cursor3));
                                    } else {
                                        Log.w("DynamiteModule", "Dynamite loader version < 2, falling back to loadModule2");
                                        iObjectWrapperZze = zzrVar.zze(ObjectWrapper.wrap(applicationContext), str, i, ObjectWrapper.wrap(cursor3));
                                    }
                                    Context context2 = (Context) ObjectWrapper.unwrap(iObjectWrapperZze);
                                    if (context2 == null) {
                                        throw new LoadingException("Failed to get module context", null);
                                    }
                                    dynamiteModule = new DynamiteModule(context2);
                                } else {
                                    StringBuilder sb4 = new StringBuilder(String.valueOf(str).length() + 51);
                                    sb4.append("Selected remote version of ");
                                    sb4.append(str);
                                    sb4.append(", version >= ");
                                    sb4.append(i);
                                    Log.i("DynamiteModule", sb4.toString());
                                    zzqVarZzf = zzf(context);
                                    if (zzqVarZzf != null) {
                                        throw new LoadingException("Failed to create IDynamiteLoader.", null);
                                    }
                                    iZze = zzqVarZzf.zze();
                                    if (iZze >= 3) {
                                        zznVar = threadLocal.get();
                                        if (zznVar != null) {
                                            throw new LoadingException("No cached result cursor holder", null);
                                        }
                                        iObjectWrapperZzh = zzqVarZzf.zzi(ObjectWrapper.wrap(context), str, i, ObjectWrapper.wrap(zznVar.zza));
                                    } else if (iZze == 2) {
                                        Log.w("DynamiteModule", "IDynamite loader version = 2");
                                        iObjectWrapperZzh = zzqVarZzf.zzj(ObjectWrapper.wrap(context), str, i);
                                    } else {
                                        Log.w("DynamiteModule", "Dynamite loader version < 2, falling back to createModuleContext");
                                        iObjectWrapperZzh = zzqVarZzf.zzh(ObjectWrapper.wrap(context), str, i);
                                    }
                                    if (ObjectWrapper.unwrap(iObjectWrapperZzh) != null) {
                                        throw new LoadingException("Failed to load remote module.", null);
                                    }
                                    dynamiteModule = new DynamiteModule((Context) ObjectWrapper.unwrap(iObjectWrapperZzh));
                                }
                                if (jLongValue == 0) {
                                    threadLocal2.remove();
                                } else {
                                    threadLocal2.set(Long.valueOf(jLongValue));
                                }
                                cursor = zznVar4.zza;
                                if (cursor != null) {
                                    cursor.close();
                                }
                                threadLocal.set(zznVar3);
                                return dynamiteModule;
                            } catch (RemoteException e) {
                                throw new LoadingException("Failed to load remote module.", e, null);
                            } catch (LoadingException e2) {
                                throw e2;
                            } catch (Throwable th) {
                                CrashUtils.addDynamiteErrorToDropBox(context, th);
                                throw new LoadingException("Failed to load remote module.", th, null);
                            }
                        } catch (LoadingException e3) {
                            String strValueOf = String.valueOf(e3.getMessage());
                            Log.w("DynamiteModule", strValueOf.length() != 0 ? "Failed to load remote module: ".concat(strValueOf) : new String("Failed to load remote module: "));
                            int i5 = selectionResultSelectModule.localVersion;
                            if (i5 == 0 || versionPolicy.selectModule(context, str, new zzo(i5, 0)).selection != -1) {
                                throw new LoadingException("Remote load failed. No local fallback found.", e3, null);
                            }
                            DynamiteModule dynamiteModuleZzc2 = zzc(context, str);
                            if (jLongValue == 0) {
                                zzg.remove();
                            } else {
                                zzg.set(Long.valueOf(jLongValue));
                            }
                            Cursor cursor4 = zznVar4.zza;
                            if (cursor4 != null) {
                                cursor4.close();
                            }
                            zzf.set(zznVar3);
                            return dynamiteModuleZzc2;
                        }
                    }
                } else if (selectionResultSelectModule.localVersion != 0) {
                    i4 = -1;
                    if (i4 == 1) {
                    }
                    if (i4 == -1) {
                        DynamiteModule dynamiteModuleZzc3 = zzc(context, str);
                        if (jLongValue == 0) {
                            threadLocal2.remove();
                        } else {
                            threadLocal2.set(Long.valueOf(jLongValue));
                        }
                        cursor2 = zznVar4.zza;
                        if (cursor2 != null) {
                            cursor2.close();
                        }
                        threadLocal.set(zznVar3);
                        return dynamiteModuleZzc3;
                    }
                    if (i4 == 1) {
                        StringBuilder sb5 = new StringBuilder(47);
                        sb5.append("VersionPolicy returned invalid code:");
                        sb5.append(i4);
                        throw new LoadingException(sb5.toString(), null);
                    }
                    i = selectionResultSelectModule.remoteVersion;
                    synchronized (DynamiteModule.class) {
                        bool = zzb;
                        if (bool != null) {
                            throw new LoadingException("Failed to determine which loading route to use.", null);
                        }
                        if (bool.booleanValue()) {
                            StringBuilder sb6 = new StringBuilder(String.valueOf(str).length() + 51);
                            sb6.append("Selected remote version of ");
                            sb6.append(str);
                            sb6.append(", version >= ");
                            sb6.append(i);
                            Log.i("DynamiteModule", sb6.toString());
                            synchronized (DynamiteModule.class) {
                                zzrVar = zzk;
                                if (zzrVar != null) {
                                    throw new LoadingException("DynamiteLoaderV2 was not cached.", null);
                                }
                                zznVar2 = threadLocal.get();
                                if (zznVar2 != null) {
                                }
                                throw new LoadingException("No result cursor", null);
                            }
                        }
                        StringBuilder sb7 = new StringBuilder(String.valueOf(str).length() + 51);
                        sb7.append("Selected remote version of ");
                        sb7.append(str);
                        sb7.append(", version >= ");
                        sb7.append(i);
                        Log.i("DynamiteModule", sb7.toString());
                        zzqVarZzf = zzf(context);
                        if (zzqVarZzf != null) {
                            throw new LoadingException("Failed to create IDynamiteLoader.", null);
                        }
                        iZze = zzqVarZzf.zze();
                        if (iZze >= 3) {
                            zznVar = threadLocal.get();
                            if (zznVar != null) {
                                throw new LoadingException("No cached result cursor holder", null);
                            }
                            iObjectWrapperZzh = zzqVarZzf.zzi(ObjectWrapper.wrap(context), str, i, ObjectWrapper.wrap(zznVar.zza));
                        } else if (iZze == 2) {
                            Log.w("DynamiteModule", "IDynamite loader version = 2");
                            iObjectWrapperZzh = zzqVarZzf.zzj(ObjectWrapper.wrap(context), str, i);
                        } else {
                            Log.w("DynamiteModule", "Dynamite loader version < 2, falling back to createModuleContext");
                            iObjectWrapperZzh = zzqVarZzf.zzh(ObjectWrapper.wrap(context), str, i);
                        }
                        if (ObjectWrapper.unwrap(iObjectWrapperZzh) != null) {
                            throw new LoadingException("Failed to load remote module.", null);
                        }
                        dynamiteModule = new DynamiteModule((Context) ObjectWrapper.unwrap(iObjectWrapperZzh));
                        if (jLongValue == 0) {
                            threadLocal2.remove();
                        } else {
                            threadLocal2.set(Long.valueOf(jLongValue));
                        }
                        cursor = zznVar4.zza;
                        if (cursor != null) {
                            cursor.close();
                        }
                        threadLocal.set(zznVar3);
                        return dynamiteModule;
                    }
                }
            }
            int i6 = selectionResultSelectModule.localVersion;
            int i7 = selectionResultSelectModule.remoteVersion;
            StringBuilder sb8 = new StringBuilder(String.valueOf(str).length() + 92);
            sb8.append("No acceptable module ");
            sb8.append(str);
            sb8.append(" found. Local version is ");
            sb8.append(i6);
            sb8.append(" and remote version is ");
            sb8.append(i7);
            sb8.append(".");
            throw new LoadingException(sb8.toString(), null);
        } catch (Throwable th2) {
            if (jLongValue == 0) {
                zzg.remove();
            } else {
                zzg.set(Long.valueOf(jLongValue));
            }
            Cursor cursor5 = zznVar4.zza;
            if (cursor5 != null) {
                cursor5.close();
            }
            zzf.set(zznVar3);
            throw th2;
        }
    }

    /* JADX WARN: Code duplicated, block: B:87:0x014e A[Catch: all -> 0x01af, TRY_ENTER, TRY_LEAVE, TryCatch #10 {all -> 0x01af, blocks: (B:3:0x0002, B:49:0x00bb, B:52:0x00c2, B:61:0x00e8, B:83:0x0140, B:87:0x014e, B:112:0x01a8, B:113:0x01ab, B:107:0x01a0, B:55:0x00c8, B:57:0x00da, B:59:0x00e4, B:58:0x00df, B:116:0x01ae, B:4:0x0003, B:7:0x0008, B:8:0x0024, B:47:0x00b8, B:33:0x0078, B:36:0x007b, B:44:0x0094, B:48:0x00ba, B:46:0x0096), top: B:135:0x0002, inners: #7, #8 }] */
    public static int zza(Context context, String str, boolean z) {
        Throwable th;
        RemoteException e;
        Cursor cursor;
        try {
            synchronized (DynamiteModule.class) {
                Boolean bool = zzb;
                Cursor cursor2 = null;
                if (bool == null) {
                    try {
                        Field declaredField = context.getApplicationContext().getClassLoader().loadClass(DynamiteLoaderClassLoader.class.getName()).getDeclaredField("sClassLoader");
                        synchronized (declaredField.getDeclaringClass()) {
                            ClassLoader classLoader = (ClassLoader) declaredField.get(null);
                            if (classLoader != null) {
                                if (classLoader == ClassLoader.getSystemClassLoader()) {
                                    bool = Boolean.FALSE;
                                } else {
                                    try {
                                        zzd(classLoader);
                                    } catch (LoadingException unused) {
                                    }
                                    bool = Boolean.TRUE;
                                }
                            } else if (zzd || Boolean.TRUE.equals(null)) {
                                declaredField.set(null, ClassLoader.getSystemClassLoader());
                                bool = Boolean.FALSE;
                            } else {
                                try {
                                    int iZzb = zzb(context, str, z);
                                    String str2 = zzc;
                                    if (str2 != null && !str2.isEmpty()) {
                                        ClassLoader classLoaderZza = zzb.zza();
                                        if (classLoaderZza == null) {
                                            String str3 = zzc;
                                            Preconditions.checkNotNull(str3);
                                            classLoaderZza = new DelegateLastClassLoader(str3, ClassLoader.getSystemClassLoader());
                                        }
                                        zzd(classLoaderZza);
                                        declaredField.set(null, classLoaderZza);
                                        zzb = Boolean.TRUE;
                                        return iZzb;
                                    }
                                    return iZzb;
                                } catch (LoadingException unused2) {
                                    declaredField.set(null, ClassLoader.getSystemClassLoader());
                                    bool = Boolean.FALSE;
                                }
                            }
                            zzb = bool;
                        }
                    } catch (ClassNotFoundException | IllegalAccessException | NoSuchFieldException e2) {
                        String string = e2.toString();
                        StringBuilder sb = new StringBuilder(string.length() + 30);
                        sb.append("Failed to load module via V2: ");
                        sb.append(string);
                        Log.w("DynamiteModule", sb.toString());
                        bool = Boolean.FALSE;
                    }
                }
                boolean zBooleanValue = bool.booleanValue();
                int iZzf = 0;
                if (zBooleanValue) {
                    try {
                        return zzb(context, str, z);
                    } catch (LoadingException e3) {
                        String strValueOf = String.valueOf(e3.getMessage());
                        Log.w("DynamiteModule", strValueOf.length() != 0 ? "Failed to retrieve remote module version: ".concat(strValueOf) : new String("Failed to retrieve remote module version: "));
                        return 0;
                    }
                }
                zzq zzqVarZzf = zzf(context);
                try {
                    if (zzqVarZzf != null) {
                        try {
                            int iZze = zzqVarZzf.zze();
                            if (iZze >= 3) {
                                zzn zznVar = zzf.get();
                                if (zznVar == null || (cursor = zznVar.zza) == null) {
                                    Cursor cursor3 = (Cursor) ObjectWrapper.unwrap(zzqVarZzf.zzk(ObjectWrapper.wrap(context), str, z, zzg.get().longValue()));
                                    if (cursor3 != null) {
                                        try {
                                            if (cursor3.moveToFirst()) {
                                                int i = cursor3.getInt(0);
                                                cursor2 = (i <= 0 || !zze(cursor3)) ? cursor3 : null;
                                                if (cursor2 != null) {
                                                    cursor2.close();
                                                }
                                                iZzf = i;
                                            } else {
                                                Log.w("DynamiteModule", "Failed to retrieve remote module version.");
                                                if (cursor3 != null) {
                                                    cursor3.close();
                                                }
                                            }
                                        } catch (RemoteException e4) {
                                            e = e4;
                                            cursor2 = cursor3;
                                            String strValueOf2 = String.valueOf(e.getMessage());
                                            Log.w("DynamiteModule", strValueOf2.length() != 0 ? "Failed to retrieve remote module version: ".concat(strValueOf2) : new String("Failed to retrieve remote module version: "));
                                            if (cursor2 != null) {
                                                cursor2.close();
                                            }
                                        } catch (Throwable th2) {
                                            th = th2;
                                            cursor2 = cursor3;
                                            if (cursor2 != null) {
                                                cursor2.close();
                                            }
                                            throw th;
                                        }
                                    } else {
                                        Log.w("DynamiteModule", "Failed to retrieve remote module version.");
                                        if (cursor3 != null) {
                                            cursor3.close();
                                        }
                                    }
                                } else {
                                    iZzf = cursor.getInt(0);
                                }
                            } else if (iZze == 2) {
                                Log.w("DynamiteModule", "IDynamite loader version = 2, no high precision latency measurement.");
                                iZzf = zzqVarZzf.zzg(ObjectWrapper.wrap(context), str, z);
                            } else {
                                Log.w("DynamiteModule", "IDynamite loader version < 2, falling back to getModuleVersion2");
                                iZzf = zzqVarZzf.zzf(ObjectWrapper.wrap(context), str, z);
                            }
                        } catch (RemoteException e5) {
                            e = e5;
                        }
                    }
                    return iZzf;
                } catch (Throwable th3) {
                    th = th3;
                }
            }
        } catch (Throwable th4) {
            CrashUtils.addDynamiteErrorToDropBox(context, th4);
            throw th4;
        }
    }

    /* JADX WARN: Code duplicated, block: B:54:0x00c6  */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0 */
    /* JADX WARN: Type inference failed for: r0v1, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r0v2 */
    /* JADX WARN: Type inference failed for: r0v3 */
    /* JADX WARN: Type inference failed for: r0v4 */
    /* JADX WARN: Type inference failed for: r0v5 */
    /* JADX WARN: Type inference failed for: r0v6 */
    /* JADX WARN: Type inference failed for: r0v7 */
    /* JADX WARN: Type inference failed for: r0v8 */
    private static int zzb(Context context, String str, boolean z) throws Throwable {
        Throwable th;
        Exception e;
        ?? r0 = 0;
        ?? r1 = 0;
        ?? r2 = 0;
        ?? r3 = 0;
        try {
            try {
                boolean z2 = true;
                Cursor cursorQuery = context.getContentResolver().query(new Uri.Builder().scheme(FirebaseAnalytics.Param.CONTENT).authority("com.google.android.gms.chimera").path(true != z ? "api" : "api_force_staging").appendPath(str).appendQueryParameter("requestStartTime", String.valueOf(zzg.get().longValue())).build(), null, null, null, null);
                if (cursorQuery != null) {
                    try {
                        if (cursorQuery.moveToFirst()) {
                            boolean z3 = false;
                            int i = cursorQuery.getInt(0);
                            if (i > 0) {
                                synchronized (DynamiteModule.class) {
                                    zzc = cursorQuery.getString(2);
                                    int columnIndex = cursorQuery.getColumnIndex("loaderVersion");
                                    if (columnIndex >= 0) {
                                        zze = cursorQuery.getInt(columnIndex);
                                    }
                                    int columnIndex2 = cursorQuery.getColumnIndex("disableStandaloneDynamiteLoader");
                                    if (columnIndex2 >= 0) {
                                        if (cursorQuery.getInt(columnIndex2) == 0) {
                                            z2 = false;
                                        }
                                        zzd = z2;
                                        z3 = z2;
                                    }
                                }
                                if (zze(cursorQuery)) {
                                    cursorQuery = null;
                                }
                            }
                            if (z3) {
                                throw new LoadingException("forcing fallback to container DynamiteLoader impl", r2 == true ? 1 : 0);
                            }
                            if (cursorQuery != null) {
                                cursorQuery.close();
                            }
                            return i;
                        }
                    } catch (Exception e2) {
                        e = e2;
                        if (e instanceof LoadingException) {
                            throw e;
                        }
                        throw new LoadingException("V2 version check failed", e, r1 == true ? 1 : 0);
                    }
                }
                Log.w("DynamiteModule", "Failed to retrieve remote module version.");
                throw new LoadingException("Failed to connect to dynamite module ContentResolver.", r3 == true ? 1 : 0);
            } catch (Throwable th2) {
                th = th2;
                r0 = context;
                if (r0 != 0) {
                    r0.close();
                }
                throw th;
            }
        } catch (Exception e3) {
            e = e3;
        } catch (Throwable th3) {
            th = th3;
            if (r0 != 0) {
                r0.close();
            }
            throw th;
        }
    }

    private static DynamiteModule zzc(Context context, String str) {
        String strValueOf = String.valueOf(str);
        Log.i("DynamiteModule", strValueOf.length() != 0 ? "Selected local version of ".concat(strValueOf) : new String("Selected local version of "));
        return new DynamiteModule(context.getApplicationContext());
    }

    private static void zzd(ClassLoader classLoader) throws LoadingException {
        zzr zzrVar;
        zzp zzpVar = null;
        try {
            IBinder iBinder = (IBinder) classLoader.loadClass("com.google.android.gms.dynamiteloader.DynamiteLoaderV2").getConstructor(new Class[0]).newInstance(new Object[0]);
            if (iBinder == null) {
                zzrVar = null;
            } else {
                IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.dynamite.IDynamiteLoaderV2");
                zzrVar = iInterfaceQueryLocalInterface instanceof zzr ? (zzr) iInterfaceQueryLocalInterface : new zzr(iBinder);
            }
            zzk = zzrVar;
        } catch (ClassNotFoundException | IllegalAccessException | InstantiationException | NoSuchMethodException | InvocationTargetException e) {
            throw new LoadingException("Failed to instantiate dynamite loader", e, zzpVar);
        }
    }

    private static boolean zze(Cursor cursor) {
        zzn zznVar = zzf.get();
        if (zznVar == null || zznVar.zza != null) {
            return false;
        }
        zznVar.zza = cursor;
        return true;
    }

    private static zzq zzf(Context context) {
        zzq zzqVar;
        synchronized (DynamiteModule.class) {
            zzq zzqVar2 = zzj;
            if (zzqVar2 != null) {
                return zzqVar2;
            }
            try {
                IBinder iBinder = (IBinder) context.createPackageContext("com.google.android.gms", 3).getClassLoader().loadClass("com.google.android.gms.chimera.container.DynamiteLoaderImpl").newInstance();
                if (iBinder == null) {
                    zzqVar = null;
                } else {
                    IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.dynamite.IDynamiteLoader");
                    zzqVar = iInterfaceQueryLocalInterface instanceof zzq ? (zzq) iInterfaceQueryLocalInterface : new zzq(iBinder);
                }
                if (zzqVar != null) {
                    zzj = zzqVar;
                    return zzqVar;
                }
            } catch (Exception e) {
                String strValueOf = String.valueOf(e.getMessage());
                Log.e("DynamiteModule", strValueOf.length() != 0 ? "Failed to load IDynamiteLoader from GmsCore: ".concat(strValueOf) : new String("Failed to load IDynamiteLoader from GmsCore: "));
            }
            return null;
        }
    }

    public Context getModuleContext() {
        return this.zzi;
    }

    public IBinder instantiate(String str) throws LoadingException {
        try {
            return (IBinder) this.zzi.getClassLoader().loadClass(str).newInstance();
        } catch (ClassNotFoundException | IllegalAccessException | InstantiationException e) {
            String strValueOf = String.valueOf(str);
            throw new LoadingException(strValueOf.length() != 0 ? "Failed to instantiate module class: ".concat(strValueOf) : new String("Failed to instantiate module class: "), e, null);
        }
    }
}
