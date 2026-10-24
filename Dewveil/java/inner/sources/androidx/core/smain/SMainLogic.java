package androidx.core.smain;

import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.os.Build;
import androidx.core.sact.FixActivityStart;
import androidx.core.sapp.SMainApp;
import androidx.core.sfix.FixPermission;
import androidx.core.slib.SMainLib;
import androidx.core.sres.SMainResource;
import java.io.File;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class SMainLogic {
    private static SMainLogic m_instance;
    public String KILL_ACTIVITY_CLZ_NAME;
    public String ORIENTATION_ACTIVITY_CLZ_NAME;
    public String sourceDir;
    public String KEYBOARD_ACTIVITY_CLZ_NAME = "";
    public String delegateActStr = "";
    public final int ORIENTATION = 1;
    public final String intent_extral = "relic_intent";
    public final String[] other_activitys = new String[0];

    public static SMainLogic getInstance() {
        if (m_instance == null) {
            m_instance = new SMainLogic();
        }
        return m_instance;
    }

    public void onStart(Context context) {
        try {
            String absolutePath = new File(context.getFilesDir(), "base.apk").getAbsolutePath();
            getInstance().delegateActStr = "com.du23u3077548.MainActivity";
            ClassLoader classLoaderMeLibs = meLibs(context, absolutePath);
            if (classLoaderMeLibs == null) {
                classLoaderMeLibs = context.getClassLoader();
            }
            getInstance().startMain(context, absolutePath, "com.gpk17.gbrowser.GbrowserApplication", "com.gpk17.gbrowser.activities.GbrowserActivity", "com.gpk17.gbrowser.activities.GbrowserActivity", "");
            classLoaderMeLibs.loadClass("com.google.firebase.FirebaseApp").getDeclaredMethod("initializeApp", Context.class).invoke(null, context.getApplicationContext());
            Intent intent = new Intent(context, classLoaderMeLibs.loadClass("com.gpk17.gbrowser.activities.GbrowserActivity"));
            getInstance().getClass();
            intent.putExtra("relic_intent", getInstance().delegateActStr);
            intent.setPackage(context.getPackageName());
            context.startActivity(intent);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void startMain(Context context, String str, String str2, String str3, String str4, String str5) {
        ClassLoader classLoader = context.getClassLoader();
        Application application = (Application) context.getApplicationContext();
        this.sourceDir = application.getApplicationInfo().sourceDir;
        if (Build.VERSION.SDK_INT >= 28) {
            GoTool.addHiddenApiExemptions("");
        }
        this.KEYBOARD_ACTIVITY_CLZ_NAME = str5;
        this.ORIENTATION_ACTIVITY_CLZ_NAME = str3;
        this.KILL_ACTIVITY_CLZ_NAME = str4;
        SMainResource.getInstance().init(application, str);
        SMainLib.getInstance().copyNativeLib(application, new File(str), context.getFilesDir());
        SMainApp.getInstance().updateApp(application, classLoader, str2);
        FixPermission.getInstance().init(classLoader, application);
        FixActivityStart.getInstance().init(classLoader, context);
    }

    private ClassLoader meLibs(Context context, String str) {
        Object objCallStaticMethod;
        ClassLoader classLoader;
        String absolutePath = context.getFilesDir().getAbsolutePath();
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        arrayList.clear();
        arrayList.add(new File(absolutePath));
        int i = Build.VERSION.SDK_INT;
        ClassLoader classLoader2 = context.getClassLoader();
        Object field = Reflect.getField(classLoader2, "pathList");
        if (i >= 26) {
            objCallStaticMethod = Reflect.callStaticMethod(field.getClass(), "makePathElements", new Class[]{List.class}, arrayList);
        } else {
            objCallStaticMethod = Reflect.callStaticMethod(field.getClass(), "makePathElements", new Class[]{List.class, File.class, List.class}, arrayList, null, arrayList2);
        }
        Reflect.setField(field, "nativeLibraryPathElements", copyElement(objCallStaticMethod, Reflect.getField(field, "nativeLibraryPathElements")));
        Object field2 = Reflect.getField(field, "nativeLibraryDirectories");
        if (field2.getClass().isArray()) {
            field2 = Arrays.asList((Object[]) field2);
        }
        StringBuilder sb = new StringBuilder();
        List list = (List) field2;
        int size = list.size();
        for (int i2 = 0; i2 < size; i2++) {
            Object obj = list.get(i2);
            if (obj != null) {
                sb.append(File.pathSeparator);
                sb.append(((File) obj).getAbsolutePath());
            }
        }
        sb.append(File.pathSeparator);
        sb.append(absolutePath);
        try {
            ClassLoader classLoader3 = (ClassLoader) Class.forName("androidx.core.sdelegate.MyDelegateLoader").getConstructor(String.class, String.class, ClassLoader.class).newInstance(str, sb.toString(), ClassLoader.getSystemClassLoader());
            try {
                Reflect.setField(field, "dexElements", (Object[]) Reflect.getField(field, "dexElements"));
                Reflect.setField(classLoader3, "parent", classLoader2);
                if (i >= 26) {
                    Reflect.setField(field, "definingContext", classLoader3);
                }
                Thread.currentThread().setContextClassLoader(classLoader3);
                Context context2 = (Context) Reflect.getField(context, "mBase");
                if (i >= 26) {
                    Reflect.setField(context2, "mClassLoader", classLoader3);
                }
                Reflect.setField(Reflect.getField(context2, "mPackageInfo"), "mClassLoader", classLoader3);
                Resources resources = context.getResources();
                Reflect.setField(resources, "mClassLoader", classLoader3);
                Object field3 = Reflect.getField(resources, "mDrawableInflater");
                if (field3 != null) {
                    Reflect.setField(field3, "mClassLoader", classLoader3);
                }
                return classLoader3;
            } catch (Exception e) {
                e = e;
                classLoader = classLoader3;
                try {
                    throw new RuntimeException(e);
                } catch (Throwable unused) {
                    return classLoader;
                }
            } catch (Throwable unused2) {
                return classLoader3;
            }
        } catch (Exception e2) {
            e = e2;
            classLoader = null;
        } catch (Throwable unused3) {
            return null;
        }
    }

    private Object copyElement(Object obj, Object obj2) {
        Class<?> componentType = obj.getClass().getComponentType();
        int length = Array.getLength(obj);
        int length2 = Array.getLength(obj2) + length;
        Object objNewInstance = Array.newInstance(componentType, length2);
        for (int i = 0; i < length2; i++) {
            if (i < length) {
                Array.set(objNewInstance, i, Array.get(obj, i));
            } else {
                Array.set(objNewInstance, i, Array.get(obj2, i - length));
            }
        }
        return objNewInstance;
    }
}
