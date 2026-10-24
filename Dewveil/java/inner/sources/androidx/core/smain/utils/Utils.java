package androidx.core.smain.utils;

import android.app.Activity;
import android.app.ActivityOptions;
import android.os.Build;
import java.io.File;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes2.dex */
public class Utils {
    public static final String DEX_SUFFIX = ".dex";
    public static final String ODEX_SUFFIX = ".odex";
    public static final String TEST_DEX_NAME = "test.dex";
    private static String currentInstructionSet;
    static final Object[] EMPTY_OBJECT_ARRAY = new Object[0];
    public static final Pattern CLASS_N_PATTERN = Pattern.compile("classes(?:[2-9]?|[1-9][0-9]+)\\.dex(\\.jar)?");
    static final Class<?>[] EMPTY_CLASS_ARRAY = new Class[0];

    public static boolean isNewerOrEqualThanVersion(int i, boolean z) {
        if (!z || Build.VERSION.SDK_INT < 23) {
            return Build.VERSION.SDK_INT >= i;
        }
        return Build.VERSION.SDK_INT >= i || (Build.VERSION.SDK_INT == i - 1 && Build.VERSION.PREVIEW_SDK_INT > 0);
    }

    public static boolean isAfterAndroidO() {
        return Build.VERSION.SDK_INT > 25;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:10:0x003b  */
    public static String getCurrentInstructionSet() {
        String str = currentInstructionSet;
        if (str != null) {
            return str;
        }
        try {
            Method declaredMethod = Class.forName("com.android.viewtool.VMRuntime").getDeclaredMethod("getCurrentInstructionSet", new Class[0]);
            declaredMethod.setAccessible(true);
            currentInstructionSet = (String) declaredMethod.invoke(null, new Object[0]);
        } catch (Throwable unused) {
            String str2 = Build.CPU_ABI;
            str2.hashCode();
            switch (str2) {
                case "mips64":
                    currentInstructionSet = "mips64";
                    break;
                case "x86_64":
                    currentInstructionSet = "x86_64";
                    break;
                case "armeabi":
                case "armeabi-v7a":
                    currentInstructionSet = "arm";
                    break;
                case "x86":
                    currentInstructionSet = "x86";
                    break;
                case "mips":
                    currentInstructionSet = "mips";
                    break;
                case "arm64-v8a":
                    currentInstructionSet = "arm64";
                    break;
                default:
                    throw new IllegalStateException("Unsupported abi: " + Build.CPU_ABI);
            }
        }
        return currentInstructionSet;
    }

    public static String optimizedPathFor(File file, File file2) {
        String currentInstructionSet2;
        if (isAfterAndroidO()) {
            try {
                currentInstructionSet2 = getCurrentInstructionSet();
            } catch (Exception unused) {
                currentInstructionSet2 = null;
            }
            File parentFile = file.getParentFile();
            String name = file.getName();
            int iLastIndexOf = name.lastIndexOf(46);
            if (iLastIndexOf > 0) {
                name = name.substring(0, iLastIndexOf);
            }
            return parentFile.getAbsolutePath() + "/oat/" + currentInstructionSet2 + "/" + name + ODEX_SUFFIX;
        }
        String name2 = file.getName();
        if (!name2.endsWith(DEX_SUFFIX)) {
            int iLastIndexOf2 = name2.lastIndexOf(".");
            if (iLastIndexOf2 < 0) {
                name2 = name2 + DEX_SUFFIX;
            } else {
                StringBuilder sb = new StringBuilder(iLastIndexOf2 + 4);
                sb.append((CharSequence) name2, 0, iLastIndexOf2);
                sb.append(DEX_SUFFIX);
                name2 = sb.toString();
            }
        }
        return new File(file2, name2).getPath();
    }

    static boolean isSameLength(Object[] objArr, Object[] objArr2) {
        if (objArr == null && objArr2 != null && objArr2.length > 0) {
            return false;
        }
        if (objArr2 != null || objArr == null || objArr.length <= 0) {
            return objArr == null || objArr2 == null || objArr.length == objArr2.length;
        }
        return false;
    }

    static Class<?>[] toClass(Object... objArr) {
        if (objArr == null) {
            return null;
        }
        if (objArr.length == 0) {
            return EMPTY_CLASS_ARRAY;
        }
        Class<?>[] clsArr = new Class[objArr.length];
        for (int i = 0; i < objArr.length; i++) {
            Object obj = objArr[i];
            clsArr[i] = obj == null ? null : obj.getClass();
        }
        return clsArr;
    }

    static Class<?>[] nullToEmpty(Class<?>[] clsArr) {
        return (clsArr == null || clsArr.length == 0) ? EMPTY_CLASS_ARRAY : clsArr;
    }

    static Object[] nullToEmpty(Object[] objArr) {
        return (objArr == null || objArr.length == 0) ? EMPTY_OBJECT_ARRAY : objArr;
    }

    public static List<Class<?>> getAllInterfaces(Class<?> cls) {
        if (cls == null) {
            return null;
        }
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        getAllInterfaces(cls, linkedHashSet);
        return new ArrayList(linkedHashSet);
    }

    private static void getAllInterfaces(Class<?> cls, HashSet<Class<?>> hashSet) {
        while (cls != null) {
            for (Class<?> cls2 : cls.getInterfaces()) {
                if (hashSet.add(cls2)) {
                    getAllInterfaces(cls2, hashSet);
                }
            }
            cls = cls.getSuperclass();
        }
    }

    public static void convertActivityToTranslucentBeforeL(Activity activity) {
        try {
            Class<?> cls = null;
            for (Class<?> cls2 : Activity.class.getDeclaredClasses()) {
                if (cls2.getSimpleName().contains("TranslucentConversionListener")) {
                    cls = cls2;
                }
            }
            Method declaredMethod = Activity.class.getDeclaredMethod("convertToTranslucent", cls);
            declaredMethod.setAccessible(true);
            declaredMethod.invoke(activity, null);
        } catch (Exception unused) {
        }
    }

    public static void convertActivityToTranslucentAfterL(Activity activity) {
        try {
            Method declaredMethod = Activity.class.getDeclaredMethod("getActivityOptions", new Class[0]);
            declaredMethod.setAccessible(true);
            Object objInvoke = declaredMethod.invoke(activity, new Object[0]);
            Class<?> cls = null;
            for (Class<?> cls2 : Activity.class.getDeclaredClasses()) {
                if (cls2.getSimpleName().contains("TranslucentConversionListener")) {
                    cls = cls2;
                }
            }
            Method declaredMethod2 = Activity.class.getDeclaredMethod("convertToTranslucent", cls, ActivityOptions.class);
            declaredMethod2.setAccessible(true);
            declaredMethod2.invoke(activity, null, objInvoke);
        } catch (Exception unused) {
        }
    }
}
