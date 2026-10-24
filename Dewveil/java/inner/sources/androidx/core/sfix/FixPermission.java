package androidx.core.sfix;

import android.app.Notification;
import android.app.NotificationManager;
import android.content.ComponentName;
import android.content.Context;
import android.graphics.drawable.Icon;
import android.util.Log;
import androidx.core.smain.SMainLogic;
import androidx.core.smain.utils.ShareReflectUtil;
import androidx.core.smain.utils.Utils;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class FixPermission {
    private static FixPermission m_instance;
    private final String TAG = "fix_ssion";

    public static FixPermission getInstance() {
        if (m_instance == null) {
            m_instance = new FixPermission();
        }
        return m_instance;
    }

    public void init(ClassLoader classLoader, Context context) {
        hookPermission(classLoader, context);
        hookPermission2(classLoader, context);
    }

    private void hookPermission(final ClassLoader classLoader, final Context context) {
        try {
            Object obj = ShareReflectUtil.findField(classLoader.loadClass("android.app.ActivityThread"), "sCurrentActivityThread").get(null);
            Field fieldFindField = ShareReflectUtil.findField(obj, "sPackageManager");
            final Object obj2 = fieldFindField.get(obj);
            List<Class<?>> allInterfaces = Utils.getAllInterfaces(obj2.getClass());
            fieldFindField.set(obj, Proxy.newProxyInstance(classLoader, (allInterfaces == null || allInterfaces.size() <= 0) ? new Class[0] : (Class[]) allInterfaces.toArray(new Class[allInterfaces.size()]), new InvocationHandler() { // from class: androidx.core.sfix.FixPermission$$ExternalSyntheticLambda0
                @Override // java.lang.reflect.InvocationHandler
                public final Object invoke(Object obj3, Method method, Object[] objArr) {
                    return FixPermission.lambda$hookPermission$0(context, classLoader, obj2, obj3, method, objArr);
                }
            }));
        } catch (Exception e) {
            Log.e("fix_ssion", e.toString());
        }
    }

    static /* synthetic */ Object lambda$hookPermission$0(Context context, ClassLoader classLoader, Object obj, Object obj2, Method method, Object[] objArr) throws Throwable {
        if ("getActivityInfo".equals(method.getName())) {
            objArr[0] = new ComponentName(context, classLoader.loadClass(SMainLogic.getInstance().delegateActStr));
        }
        return method.invoke(obj, objArr);
    }

    private void hookPermission2(ClassLoader classLoader, final Context context) {
        try {
            NotificationManager notificationManager = (NotificationManager) context.getSystemService("notification");
            final Object objInvoke = ShareReflectUtil.findMethod(notificationManager, "getService", (Class<?>[]) new Class[0]).invoke(notificationManager, new Object[0]);
            List<Class<?>> allInterfaces = Utils.getAllInterfaces(objInvoke.getClass());
            ShareReflectUtil.findField(notificationManager, "sService").set(notificationManager, Proxy.newProxyInstance(classLoader, (allInterfaces == null || allInterfaces.size() <= 0) ? new Class[0] : (Class[]) allInterfaces.toArray(new Class[allInterfaces.size()]), new InvocationHandler() { // from class: androidx.core.sfix.FixPermission$$ExternalSyntheticLambda1
                @Override // java.lang.reflect.InvocationHandler
                public final Object invoke(Object obj, Method method, Object[] objArr) {
                    return FixPermission.lambda$hookPermission2$1(context, objInvoke, obj, method, objArr);
                }
            }));
        } catch (Exception e) {
            Log.e("fix_ssion", e.toString());
        }
    }

    static /* synthetic */ Object lambda$hookPermission2$1(Context context, Object obj, Object obj2, Method method, Object[] objArr) throws Throwable {
        if ("enqueueNotificationWithTag".equals(method.getName())) {
            for (Object obj3 : objArr) {
                if (obj3 instanceof Notification) {
                    Notification notification = (Notification) obj3;
                    notification.icon = context.getResources().getIdentifier("ic_stat_notification_default", "drawable", context.getPackageName());
                    ShareReflectUtil.findMethod(notification, "setSmallIcon", (Class<?>[]) new Class[]{Icon.class}).invoke(notification, Icon.createWithResource(context.getPackageName(), notification.icon));
                }
            }
        }
        return method.invoke(obj, objArr);
    }
}
