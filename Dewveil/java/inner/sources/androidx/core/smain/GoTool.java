package androidx.core.smain;

import android.util.Log;
import dalvik.system.VMRuntime;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;
import sun.misc.Unsafe;

/* JADX INFO: loaded from: classes2.dex */
public final class GoTool {
    static final /* synthetic */ boolean $assertionsDisabled = false;
    private static final boolean DEBUG = false;
    private static final String TAG = "GoTool";
    private static final long artMethodBias;
    private static final long artMethodSize;
    private static final long artOffset;
    private static final long methodOffset;
    private static final long methodsOffset;
    private static final Set<String> signaturePrefixes = new HashSet();
    private static final Unsafe unsafe;

    public static class a {
        private Object b;
        private Object c;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Object f3a = null;
        protected final int d = 0;
        protected final long e = 0;
    }

    public static final class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private transient Object f4a;
        private transient Object b;
        private transient Object c;
        private transient Object d;
        private transient Object e;
        private transient Object f;
        private transient Object g;
        private transient Object h;
        private transient long i;
        private transient long j;
    }

    public static final class c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Object f5a;
        private Object b;
        private Object c;
        private long d;
    }

    public static class d {
        private static void a() {
        }

        private static void b() {
        }
    }

    public static class e {
        private static Object invoke(Object... objArr) {
            throw new IllegalStateException("invoke  ");
        }

        private e(Object... objArr) {
            throw new IllegalStateException("IStub   ");
        }
    }

    static {
        try {
            Unsafe unsafe2 = (Unsafe) Unsafe.class.getDeclaredMethod("getUnsafe", new Class[0]).invoke(null, new Object[0]);
            unsafe = unsafe2;
            methodOffset = unsafe2.objectFieldOffset(c.class.getDeclaredField("d"));
            long jObjectFieldOffset = unsafe2.objectFieldOffset(a.class.getDeclaredField("e"));
            artOffset = jObjectFieldOffset;
            long jObjectFieldOffset2 = unsafe2.objectFieldOffset(b.class.getDeclaredField("j"));
            methodsOffset = jObjectFieldOffset2;
            Method declaredMethod = d.class.getDeclaredMethod("a", new Class[0]);
            Method declaredMethod2 = d.class.getDeclaredMethod("b", new Class[0]);
            declaredMethod.setAccessible(true);
            declaredMethod2.setAccessible(true);
            MethodHandle methodHandleUnreflect = MethodHandles.lookup().unreflect(declaredMethod);
            MethodHandle methodHandleUnreflect2 = MethodHandles.lookup().unreflect(declaredMethod2);
            long j = unsafe2.getLong(methodHandleUnreflect, jObjectFieldOffset);
            long j2 = unsafe2.getLong(methodHandleUnreflect2, jObjectFieldOffset);
            long j3 = unsafe2.getLong(d.class, jObjectFieldOffset2);
            long j4 = j2 - j;
            artMethodSize = j4;
            artMethodBias = (j - j3) - j4;
        } catch (ReflectiveOperationException e2) {
            Log.e(TAG, "Initialize error", e2);
            throw new ExceptionInInitializerError(e2);
        }
    }

    static boolean checkArgsForInvokeMethod(Class<?>[] clsArr, Object[] objArr) {
        if (clsArr.length != objArr.length) {
            return false;
        }
        for (int i = 0; i < clsArr.length; i++) {
            if (clsArr[i].isPrimitive()) {
                if (clsArr[i] == Integer.TYPE && !(objArr[i] instanceof Integer)) {
                    return false;
                }
                if (clsArr[i] == Byte.TYPE && !(objArr[i] instanceof Byte)) {
                    return false;
                }
                if (clsArr[i] == Character.TYPE && !(objArr[i] instanceof Character)) {
                    return false;
                }
                if (clsArr[i] == Boolean.TYPE && !(objArr[i] instanceof Boolean)) {
                    return false;
                }
                if (clsArr[i] == Double.TYPE && !(objArr[i] instanceof Double)) {
                    return false;
                }
                if (clsArr[i] == Float.TYPE && !(objArr[i] instanceof Float)) {
                    return false;
                }
                if (clsArr[i] == Long.TYPE && !(objArr[i] instanceof Long)) {
                    return false;
                }
                if (clsArr[i] == Short.TYPE && !(objArr[i] instanceof Short)) {
                    return false;
                }
            } else {
                Object obj = objArr[i];
                if (obj != null && !clsArr[i].isInstance(obj)) {
                    return false;
                }
            }
        }
        return true;
    }

    public static Object invoke(Class<?> cls, Object obj, String str, Object... objArr) throws IllegalAccessException, NoSuchMethodException, InvocationTargetException {
        if (obj != null && !cls.isInstance(obj)) {
            throw new IllegalArgumentException("this object is not an instance of the given class");
        }
        Method declaredMethod = e.class.getDeclaredMethod("invoke", Object[].class);
        declaredMethod.setAccessible(true);
        Unsafe unsafe2 = unsafe;
        long j = unsafe2.getLong(cls, methodsOffset);
        if (j == 0) {
            throw new NoSuchMethodException("Cannot find matching method");
        }
        int i = unsafe2.getInt(j);
        for (int i2 = 0; i2 < i; i2++) {
            unsafe.putLong(declaredMethod, methodOffset, (((long) i2) * artMethodSize) + j + artMethodBias);
            if (str.equals(declaredMethod.getName()) && checkArgsForInvokeMethod(declaredMethod.getParameterTypes(), objArr)) {
                return declaredMethod.invoke(obj, objArr);
            }
        }
        throw new NoSuchMethodException("Cannot find matching method");
    }

    public static boolean setHiddenApiExemptions(String... strArr) {
        try {
            invoke(VMRuntime.class, invoke(VMRuntime.class, null, "getRuntime", new Object[0]), "setHiddenApiExemptions", strArr);
            return true;
        } catch (Throwable th) {
            Log.w(TAG, "setHiddenApiExemptions", th);
            return false;
        }
    }

    public static boolean addHiddenApiExemptions(String... strArr) {
        Set<String> set = signaturePrefixes;
        set.addAll(Arrays.asList(strArr));
        String[] strArr2 = new String[set.size()];
        set.toArray(strArr2);
        return setHiddenApiExemptions(strArr2);
    }
}
