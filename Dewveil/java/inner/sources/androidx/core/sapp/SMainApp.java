package androidx.core.sapp;

import android.app.Application;
import android.content.ContentProvider;
import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.text.TextUtils;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class SMainApp {
    private static SMainApp m_instance;

    public static SMainApp getInstance() {
        if (m_instance == null) {
            m_instance = new SMainApp();
        }
        return m_instance;
    }

    public Application updateApp(Application application, ClassLoader classLoader, String str) {
        Application application2;
        if (TextUtils.isEmpty(str)) {
            return application;
        }
        Application application3 = null;
        try {
            Context baseContext = application.getBaseContext();
            application2 = (Application) classLoader.loadClass(str).newInstance();
            try {
                Method declaredMethod = Application.class.getDeclaredMethod("attach", Context.class);
                declaredMethod.setAccessible(true);
                declaredMethod.invoke(application2, baseContext);
                Class<?> cls = baseContext.getClass();
                Method declaredMethod2 = cls.getDeclaredMethod("setOuterContext", Context.class);
                declaredMethod2.setAccessible(true);
                declaredMethod2.invoke(baseContext, application2);
                Field declaredField = cls.getDeclaredField("mPackageInfo");
                declaredField.setAccessible(true);
                Object obj = declaredField.get(baseContext);
                Class<?> cls2 = Class.forName("android.app.LoadedApk");
                Field declaredField2 = cls2.getDeclaredField("mApplication");
                declaredField2.setAccessible(true);
                declaredField2.set(obj, application2);
                Field declaredField3 = cls.getDeclaredField("mMainThread");
                declaredField3.setAccessible(true);
                Object obj2 = declaredField3.get(baseContext);
                Class<?> cls3 = Class.forName("android.app.ActivityThread");
                Field declaredField4 = cls3.getDeclaredField("mInitialApplication");
                declaredField4.setAccessible(true);
                declaredField4.set(obj2, application2);
                Field declaredField5 = cls3.getDeclaredField("mAllApplications");
                declaredField5.setAccessible(true);
                ArrayList arrayList = (ArrayList) declaredField5.get(obj2);
                arrayList.remove(application);
                arrayList.add(application2);
                Field declaredField6 = cls2.getDeclaredField("mApplicationInfo");
                declaredField6.setAccessible(true);
                ((ApplicationInfo) declaredField6.get(obj)).className = str;
                replaceContentProvider(obj2, application2);
                application2.onCreate();
            } catch (Exception e) {
                e = e;
                application3 = application2;
                e.printStackTrace();
                application2 = application3;
            }
        } catch (Exception e2) {
            e = e2;
        }
        return application2 != null ? application2 : application;
    }

    private void replaceContentProvider(Object obj, Application application) {
        try {
            Field declaredField = obj.getClass().getDeclaredField("mProviderMap");
            declaredField.setAccessible(true);
            Iterator it = ((Map) declaredField.get(obj)).entrySet().iterator();
            while (it.hasNext()) {
                Object value = ((Map.Entry) it.next()).getValue();
                Field declaredField2 = value.getClass().getDeclaredField("mLocalProvider");
                declaredField2.setAccessible(true);
                ContentProvider contentProvider = (ContentProvider) declaredField2.get(value);
                if (contentProvider != null) {
                    Field declaredField3 = Class.forName("android.content.ContentProvider").getDeclaredField("mContext");
                    declaredField3.setAccessible(true);
                    declaredField3.set(contentProvider, application);
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
