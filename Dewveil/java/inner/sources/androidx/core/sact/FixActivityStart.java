package androidx.core.sact;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Handler;
import android.os.Message;
import android.text.TextUtils;
import android.util.Log;
import androidx.core.sins.SMainIns;
import androidx.core.smain.SMainLogic;
import androidx.core.smain.utils.ShareReflectUtil;
import androidx.core.smain.utils.Utils;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class FixActivityStart {
    private static FixActivityStart m_instance;
    private final String TAG = "fix_tag";
    private final String ORIGIN_INTENT = "ORIGIN_INTENT";

    public static FixActivityStart getInstance() {
        if (m_instance == null) {
            m_instance = new FixActivityStart();
        }
        return m_instance;
    }

    public void init(ClassLoader classLoader, Context context) {
        getInstance().fixInstrumentation(classLoader);
        getInstance().fixmH(classLoader);
        getInstance().fixIsRootTask(classLoader, context);
    }

    private void fixInstrumentation(ClassLoader classLoader) {
        try {
            Object obj = ShareReflectUtil.findField(classLoader.loadClass("android.app.ActivityThread"), "sCurrentActivityThread").get(null);
            Field fieldFindField = ShareReflectUtil.findField(obj, "mInstrumentation");
            Object obj2 = fieldFindField.get(obj);
            Object obj3 = ShareReflectUtil.findField(obj2, "mThread").get(obj2);
            Object obj4 = ShareReflectUtil.findField(obj2, "mMessageQueue").get(obj2);
            Object obj5 = ShareReflectUtil.findField(obj2, "mInstrContext").get(obj2);
            Object obj6 = ShareReflectUtil.findField(obj2, "mAppContext").get(obj2);
            Object obj7 = ShareReflectUtil.findField(obj2, "mComponent").get(obj2);
            Object obj8 = ShareReflectUtil.findField(obj2, "mWatcher").get(obj2);
            Object obj9 = ShareReflectUtil.findField(obj2, "mUiAutomationConnection").get(obj2);
            SMainIns sMainIns = new SMainIns();
            ShareReflectUtil.findField(sMainIns, "mThread").set(sMainIns, obj3);
            ShareReflectUtil.findField(sMainIns, "mMessageQueue").set(sMainIns, obj4);
            ShareReflectUtil.findField(sMainIns, "mInstrContext").set(sMainIns, obj5);
            ShareReflectUtil.findField(sMainIns, "mAppContext").set(sMainIns, obj6);
            ShareReflectUtil.findField(sMainIns, "mComponent").set(sMainIns, obj7);
            ShareReflectUtil.findField(sMainIns, "mWatcher").set(sMainIns, obj8);
            ShareReflectUtil.findField(sMainIns, "mUiAutomationConnection").set(sMainIns, obj9);
            fieldFindField.set(obj, sMainIns);
        } catch (Exception e) {
            Log.e("fix_tag", e.toString());
        }
    }

    private void fixIsRootTask(ClassLoader classLoader, Context context) {
        if (Build.VERSION.SDK_INT >= 29) {
            fixIsRootTask_Q(classLoader, context);
            if (Build.VERSION.SDK_INT >= 31) {
                fixIsRootTask_S(classLoader);
                return;
            }
            return;
        }
        if (Build.VERSION.SDK_INT >= 26) {
            fixIsRootTask_O(classLoader, context);
        } else {
            fixIsRootTask_Default(classLoader, context);
        }
    }

    private void fixIsRootTask_S(ClassLoader classLoader) {
        try {
            Object obj = ShareReflectUtil.findField(classLoader.loadClass("android.app.ActivityClient"), "INTERFACE_SINGLETON").get(null);
            Field fieldFindField = ShareReflectUtil.findField(obj, "mKnownInstance");
            final Object objInvoke = fieldFindField.get(obj);
            if (objInvoke == null) {
                objInvoke = ShareReflectUtil.findMethod(obj, "get", (Class<?>[]) new Class[0]).invoke(obj, new Object[0]);
            }
            fieldFindField.set(obj, Proxy.newProxyInstance(classLoader, new Class[]{classLoader.loadClass("android.app.IActivityClientController")}, new InvocationHandler() { // from class: androidx.core.sact.FixActivityStart$$ExternalSyntheticLambda1
                @Override // java.lang.reflect.InvocationHandler
                public final Object invoke(Object obj2, Method method, Object[] objArr) {
                    return FixActivityStart.lambda$fixIsRootTask_S$0(objInvoke, obj2, method, objArr);
                }
            }));
        } catch (Exception e) {
            Log.e("fix_tag", e.toString());
        }
    }

    static /* synthetic */ Object lambda$fixIsRootTask_S$0(Object obj, Object obj2, Method method, Object[] objArr) throws Throwable {
        if ("getTaskForActivity".equals(method.getName())) {
            return 0;
        }
        return method.invoke(obj, objArr);
    }

    private void fixIsRootTask_Q(final ClassLoader classLoader, final Context context) {
        try {
            final Uri data = ((Activity) context).getIntent() != null ? ((Activity) context).getIntent().getData() : null;
            Object obj = ShareReflectUtil.findField(classLoader.loadClass("android.app.ActivityTaskManager"), "IActivityTaskManagerSingleton").get(null);
            Field fieldFindField = ShareReflectUtil.findField(obj, "mInstance");
            Object objInvoke = fieldFindField.get(obj);
            if (objInvoke == null) {
                objInvoke = ShareReflectUtil.findMethod(obj, "get", (Class<?>[]) new Class[0]).invoke(obj, new Object[0]);
            }
            final Object obj2 = objInvoke;
            List<Class<?>> allInterfaces = Utils.getAllInterfaces(obj2.getClass());
            fieldFindField.set(obj, Proxy.newProxyInstance(classLoader, (allInterfaces == null || allInterfaces.size() <= 0) ? new Class[0] : (Class[]) allInterfaces.toArray(new Class[allInterfaces.size()]), new InvocationHandler() { // from class: androidx.core.sact.FixActivityStart$$ExternalSyntheticLambda2
                @Override // java.lang.reflect.InvocationHandler
                public final Object invoke(Object obj3, Method method, Object[] objArr) {
                    return this.f$0.m7lambda$fixIsRootTask_Q$1$androidxcoresactFixActivityStart(data, context, classLoader, obj2, obj3, method, objArr);
                }
            }));
        } catch (Exception e) {
            Log.e("fix_tag", e.toString());
        }
    }

    /* JADX INFO: renamed from: lambda$fixIsRootTask_Q$1$androidx-core-sact-FixActivityStart, reason: not valid java name */
    /* synthetic */ Object m7lambda$fixIsRootTask_Q$1$androidxcoresactFixActivityStart(Uri uri, Context context, ClassLoader classLoader, Object obj, Object obj2, Method method, Object[] objArr) throws Throwable {
        int i = 0;
        if ("getTaskForActivity".equals(method.getName())) {
            return 0;
        }
        if ("startActivity".equals(method.getName())) {
            for (int i2 = 0; i2 < objArr.length; i2++) {
                if (objArr[i2] instanceof Intent) {
                    i = i2;
                    break;
                }
            }
            Object obj3 = objArr[i];
            if (obj3 instanceof Intent) {
                Intent intent = (Intent) obj3;
                SMainLogic.getInstance().getClass();
                String stringExtra = intent.getStringExtra("relic_intent");
                if (TextUtils.isEmpty(stringExtra)) {
                    ComponentName component = intent.getComponent();
                    if (component != null) {
                        if (SMainLogic.getInstance().KEYBOARD_ACTIVITY_CLZ_NAME.equals(component.getClassName())) {
                            Intent intent2 = new Intent();
                            if (uri != null) {
                                intent2.setData(uri);
                            }
                            intent2.setFlags(intent.getFlags());
                            intent2.setPackage(context.getPackageName());
                            intent2.setClass(context, classLoader.loadClass(SMainLogic.getInstance().delegateActStr));
                            intent2.putExtra("ORIGIN_INTENT", intent);
                            objArr[i] = intent2;
                        } else if (checkActivity(component.getClassName())) {
                            Intent intent3 = new Intent();
                            if (uri != null) {
                                intent3.setData(uri);
                            }
                            intent3.setFlags(intent.getFlags());
                            intent3.setPackage(context.getPackageName());
                            intent3.setClass(context, classLoader.loadClass(SMainLogic.getInstance().delegateActStr));
                            intent3.putExtra("ORIGIN_INTENT", intent);
                            objArr[i] = intent3;
                        }
                    }
                } else {
                    SMainLogic.getInstance().getClass();
                    intent.removeExtra("relic_intent");
                    Intent intent4 = new Intent();
                    if (uri != null) {
                        intent4.setData(uri);
                    }
                    intent4.setFlags(intent.getFlags());
                    intent4.setPackage(context.getPackageName());
                    intent4.setClass(context, classLoader.loadClass(stringExtra));
                    intent4.putExtra("ORIGIN_INTENT", intent);
                    objArr[i] = intent4;
                }
            }
        }
        return method.invoke(obj, objArr);
    }

    private void fixIsRootTask_O(final ClassLoader classLoader, final Context context) {
        try {
            final Uri data = ((Activity) context).getIntent() != null ? ((Activity) context).getIntent().getData() : null;
            Object obj = ShareReflectUtil.findField(classLoader.loadClass("android.app.ActivityManager"), "IActivityManagerSingleton").get(null);
            Field fieldFindField = ShareReflectUtil.findField(obj, "mInstance");
            Object objInvoke = fieldFindField.get(obj);
            if (objInvoke == null) {
                objInvoke = ShareReflectUtil.findMethod(obj, "get", (Class<?>[]) new Class[0]).invoke(obj, new Object[0]);
            }
            final Object obj2 = objInvoke;
            List<Class<?>> allInterfaces = Utils.getAllInterfaces(obj2.getClass());
            fieldFindField.set(obj, Proxy.newProxyInstance(classLoader, (allInterfaces == null || allInterfaces.size() <= 0) ? new Class[0] : (Class[]) allInterfaces.toArray(new Class[allInterfaces.size()]), new InvocationHandler() { // from class: androidx.core.sact.FixActivityStart$$ExternalSyntheticLambda0
                @Override // java.lang.reflect.InvocationHandler
                public final Object invoke(Object obj3, Method method, Object[] objArr) {
                    return this.f$0.m6lambda$fixIsRootTask_O$2$androidxcoresactFixActivityStart(data, context, classLoader, obj2, obj3, method, objArr);
                }
            }));
        } catch (Exception e) {
            Log.e("fix_tag", e.toString());
        }
    }

    /* JADX INFO: renamed from: lambda$fixIsRootTask_O$2$androidx-core-sact-FixActivityStart, reason: not valid java name */
    /* synthetic */ Object m6lambda$fixIsRootTask_O$2$androidxcoresactFixActivityStart(Uri uri, Context context, ClassLoader classLoader, Object obj, Object obj2, Method method, Object[] objArr) throws Throwable {
        int i = 0;
        if ("getTaskForActivity".equals(method.getName())) {
            return 0;
        }
        if ("startActivity".equals(method.getName())) {
            for (int i2 = 0; i2 < objArr.length; i2++) {
                if (objArr[i2] instanceof Intent) {
                    i = i2;
                    break;
                }
            }
            Object obj3 = objArr[i];
            if (obj3 instanceof Intent) {
                Intent intent = (Intent) obj3;
                SMainLogic.getInstance().getClass();
                String stringExtra = intent.getStringExtra("relic_intent");
                if (TextUtils.isEmpty(stringExtra)) {
                    ComponentName component = intent.getComponent();
                    if (component != null) {
                        if (SMainLogic.getInstance().KEYBOARD_ACTIVITY_CLZ_NAME.equals(component.getClassName())) {
                            Intent intent2 = new Intent();
                            if (uri != null) {
                                intent2.setData(uri);
                            }
                            intent2.setFlags(intent.getFlags());
                            intent2.setPackage(context.getPackageName());
                            intent2.setClass(context, classLoader.loadClass(SMainLogic.getInstance().delegateActStr));
                            intent2.putExtra("ORIGIN_INTENT", intent);
                            objArr[i] = intent2;
                        } else if (checkActivity(component.getClassName())) {
                            Intent intent3 = new Intent();
                            if (uri != null) {
                                intent3.setData(uri);
                            }
                            intent3.setFlags(intent.getFlags());
                            intent3.setPackage(context.getPackageName());
                            intent3.setClass(context, classLoader.loadClass(SMainLogic.getInstance().delegateActStr));
                            intent3.putExtra("ORIGIN_INTENT", intent);
                            objArr[i] = intent3;
                        }
                    }
                } else {
                    SMainLogic.getInstance().getClass();
                    intent.removeExtra("relic_intent");
                    Intent intent4 = new Intent();
                    if (uri != null) {
                        intent4.setData(uri);
                    }
                    intent4.setFlags(intent.getFlags());
                    intent4.setPackage(context.getPackageName());
                    intent4.setClass(context, classLoader.loadClass(stringExtra));
                    intent4.putExtra("ORIGIN_INTENT", intent);
                    objArr[i] = intent4;
                }
            }
        }
        return method.invoke(obj, objArr);
    }

    private void fixIsRootTask_Default(final ClassLoader classLoader, final Context context) {
        try {
            final Uri data = ((Activity) context).getIntent() != null ? ((Activity) context).getIntent().getData() : null;
            Object obj = ShareReflectUtil.findField(classLoader.loadClass("android.app.ActivityManagerNative"), "gDefault").get(null);
            Field fieldFindField = ShareReflectUtil.findField(obj, "mInstance");
            Object objInvoke = fieldFindField.get(obj);
            if (objInvoke == null) {
                objInvoke = ShareReflectUtil.findMethod(obj, "get", (Class<?>[]) new Class[0]).invoke(obj, new Object[0]);
            }
            final Object obj2 = objInvoke;
            List<Class<?>> allInterfaces = Utils.getAllInterfaces(obj2.getClass());
            fieldFindField.set(obj, Proxy.newProxyInstance(classLoader, (allInterfaces == null || allInterfaces.size() <= 0) ? new Class[0] : (Class[]) allInterfaces.toArray(new Class[allInterfaces.size()]), new InvocationHandler() { // from class: androidx.core.sact.FixActivityStart$$ExternalSyntheticLambda3
                @Override // java.lang.reflect.InvocationHandler
                public final Object invoke(Object obj3, Method method, Object[] objArr) {
                    return this.f$0.m5x2b44a8d8(data, context, classLoader, obj2, obj3, method, objArr);
                }
            }));
        } catch (Exception e) {
            Log.e("fix_tag", e.toString());
        }
    }

    /* JADX INFO: renamed from: lambda$fixIsRootTask_Default$3$androidx-core-sact-FixActivityStart, reason: not valid java name */
    /* synthetic */ Object m5x2b44a8d8(Uri uri, Context context, ClassLoader classLoader, Object obj, Object obj2, Method method, Object[] objArr) throws Throwable {
        int i = 0;
        if ("getTaskForActivity".equals(method.getName())) {
            return 0;
        }
        if ("startActivity".equals(method.getName())) {
            for (int i2 = 0; i2 < objArr.length; i2++) {
                if (objArr[i2] instanceof Intent) {
                    i = i2;
                    break;
                }
            }
            Object obj3 = objArr[i];
            if (obj3 instanceof Intent) {
                Intent intent = (Intent) obj3;
                SMainLogic.getInstance().getClass();
                String stringExtra = intent.getStringExtra("relic_intent");
                if (TextUtils.isEmpty(stringExtra)) {
                    ComponentName component = intent.getComponent();
                    if (component != null) {
                        if (SMainLogic.getInstance().KEYBOARD_ACTIVITY_CLZ_NAME.equals(component.getClassName())) {
                            Intent intent2 = new Intent();
                            if (uri != null) {
                                intent2.setData(uri);
                            }
                            intent2.setFlags(intent.getFlags());
                            intent2.setPackage(context.getPackageName());
                            intent2.setClass(context, classLoader.loadClass(SMainLogic.getInstance().delegateActStr));
                            intent2.putExtra("ORIGIN_INTENT", intent);
                            objArr[i] = intent2;
                        } else if (checkActivity(component.getClassName())) {
                            Intent intent3 = new Intent();
                            if (uri != null) {
                                intent3.setData(uri);
                            }
                            intent3.setFlags(intent.getFlags());
                            intent3.setPackage(context.getPackageName());
                            intent3.setClass(context, classLoader.loadClass(SMainLogic.getInstance().delegateActStr));
                            intent3.putExtra("ORIGIN_INTENT", intent);
                            objArr[i] = intent3;
                        }
                    }
                } else {
                    SMainLogic.getInstance().getClass();
                    intent.removeExtra("relic_intent");
                    Intent intent4 = new Intent();
                    if (uri != null) {
                        intent4.setData(uri);
                    }
                    intent4.setFlags(intent.getFlags());
                    intent4.setPackage(context.getPackageName());
                    intent4.setClass(context, classLoader.loadClass(stringExtra));
                    intent4.putExtra("ORIGIN_INTENT", intent);
                    objArr[i] = intent4;
                }
            }
        }
        return method.invoke(obj, objArr);
    }

    private boolean checkActivity(String str) {
        if (SMainLogic.getInstance().other_activitys.length <= 0) {
            return false;
        }
        for (int i = 0; i < SMainLogic.getInstance().other_activitys.length; i++) {
            if (SMainLogic.getInstance().other_activitys[i].equals(str)) {
                return true;
            }
        }
        return false;
    }

    private void fixmH(ClassLoader classLoader) {
        try {
            Object obj = ShareReflectUtil.findField(classLoader.loadClass("android.app.ActivityThread"), "sCurrentActivityThread").get(null);
            Object obj2 = ShareReflectUtil.findField(obj, "mH").get(obj);
            Field fieldFindField = ShareReflectUtil.findField(obj2, "mCallback");
            fieldFindField.set(obj2, new ProxyCallback((Handler.Callback) fieldFindField.get(obj2), obj, classLoader.loadClass("android.os.IBinder")));
        } catch (Exception e) {
            Log.e("fix_tag", e.toString());
        }
    }

    private class ProxyCallback implements Handler.Callback {
        public Object ActivityThread;
        public Class IBinder_clz;
        public Handler.Callback mCallback;

        public ProxyCallback(Handler.Callback callback, Object obj, Class cls) {
            this.mCallback = callback;
            this.ActivityThread = obj;
            this.IBinder_clz = cls;
        }

        @Override // android.os.Handler.Callback
        public boolean handleMessage(Message message) {
            if (message.what == 100) {
                return FixActivityStart.this.handleLaunchActivity(message, this.mCallback);
            }
            if (message.what == 159) {
                return FixActivityStart.this.handleLaunchActivity28(message, this.mCallback, this.ActivityThread, this.IBinder_clz);
            }
            Handler.Callback callback = this.mCallback;
            if (callback != null) {
                return callback.handleMessage(message);
            }
            return false;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean handleLaunchActivity28(Message message, Handler.Callback callback, Object obj, Class cls) {
        Intent intent;
        try {
            Object obj2 = message.obj;
            List list = (List) ShareReflectUtil.findField(obj2, "mActivityCallbacks").get(obj2);
            if (list != null && !list.isEmpty()) {
                for (Object obj3 : list) {
                    if (obj3.getClass().getName().equals("android.app.servertransaction.LaunchActivityItem")) {
                        Field fieldFindField = ShareReflectUtil.findField(obj3, "mIntent");
                        Intent intent2 = (Intent) fieldFindField.get(obj3);
                        if (intent2 != null && (intent = (Intent) intent2.getParcelableExtra("ORIGIN_INTENT")) != null) {
                            fieldFindField.set(obj3, intent);
                            if (Build.VERSION.SDK_INT == 31 || Build.VERSION.SDK_INT == 32) {
                                Object objInvoke = ShareReflectUtil.findMethod(obj, "getLaunchingActivity", (Class<?>[]) new Class[]{cls}).invoke(obj, ShareReflectUtil.findField(obj2, "mActivityToken").get(obj2));
                                ShareReflectUtil.findField(objInvoke, "intent").set(objInvoke, intent);
                            }
                        }
                    }
                }
            }
        } catch (Exception e) {
            Log.e("fix_tag", "handleLaunchActivity28 Exception " + e);
        }
        if (callback != null) {
            return callback.handleMessage(message);
        }
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean handleLaunchActivity(Message message, Handler.Callback callback) {
        Intent intent;
        try {
            Object obj = message.obj;
            Field fieldFindField = ShareReflectUtil.findField(obj, "intent");
            Intent intent2 = (Intent) fieldFindField.get(obj);
            if (intent2 != null && (intent = (Intent) intent2.getParcelableExtra("ORIGIN_INTENT")) != null) {
                fieldFindField.set(obj, intent);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        if (callback != null) {
            return callback.handleMessage(message);
        }
        return false;
    }
}
