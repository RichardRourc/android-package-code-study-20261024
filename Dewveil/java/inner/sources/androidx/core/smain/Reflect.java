package androidx.core.smain;

import java.lang.reflect.Field;
import java.lang.reflect.Method;

/* JADX INFO: loaded from: classes2.dex */
public class Reflect {
    public static Object getField(Object obj, String str) {
        try {
            Field fieldFindField = findField(obj.getClass(), str);
            fieldFindField.setAccessible(true);
            return fieldFindField.get(obj);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    public static void setField(Object obj, String str, Object obj2) {
        try {
            Field fieldFindField = findField(obj.getClass(), str);
            fieldFindField.setAccessible(true);
            fieldFindField.set(obj, obj2);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    public static Object callStaticMethod(Class<?> cls, String str, Class<?>[] clsArr, Object... objArr) {
        try {
            Method declaredMethod = cls.getDeclaredMethod(str, clsArr);
            declaredMethod.setAccessible(true);
            return declaredMethod.invoke(null, objArr);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    private static Field findField(Class<?> cls, String str) throws NoSuchFieldException {
        while (cls != null) {
            try {
                return cls.getDeclaredField(str);
            } catch (NoSuchFieldException unused) {
                cls = cls.getSuperclass();
            }
        }
        throw new NoSuchFieldException(str);
    }
}
