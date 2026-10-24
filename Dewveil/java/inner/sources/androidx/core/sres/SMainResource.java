package androidx.core.sres;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.res.AssetManager;
import android.content.res.Resources;
import android.os.Build;
import android.util.ArrayMap;
import androidx.core.smain.utils.ShareReflectUtil;
import java.lang.ref.WeakReference;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class SMainResource {
    private static SMainResource m_instance;
    private Collection<WeakReference<Resources>> references = null;
    private Map<Object, WeakReference<Object>> resourceImpls = null;
    private Object currentActivityThread = null;
    private AssetManager newAssetManager = null;
    private Constructor<?> newAssetManagerCtor = null;
    private Method addAssetPathMethod = null;
    private Method addAssetPathAsSharedLibraryMethod = null;
    private Method ensureStringBlocksMethod = null;
    private Field assetsFiled = null;
    private Field resourcesImplFiled = null;
    private Field resDir = null;
    private Field resources = null;
    private Field packagesFiled = null;
    private Field resourcePackagesFiled = null;
    private Field publicSourceDirField = null;
    private Field stringBlocksField = null;
    private Context packageContext = null;
    private Context packageResContext = null;

    public static SMainResource getInstance() {
        if (m_instance == null) {
            m_instance = new SMainResource();
        }
        return m_instance;
    }

    public boolean init(Context context, String str) {
        try {
            isResourceCanPatch(context);
            monkeyPatchExistingResources(context, str, false);
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }

    private void isResourceCanPatch(Context context) throws Exception {
        Class<?> cls;
        Class<?> cls2 = Class.forName("android.app.ActivityThread");
        this.currentActivityThread = ShareReflectUtil.getActivityThread(context, cls2);
        try {
            cls = Class.forName("android.app.LoadedApk");
        } catch (ClassNotFoundException unused) {
            cls = Class.forName("android.app.ActivityThread$PackageInfo");
        }
        this.resDir = ShareReflectUtil.findField(cls, "mResDir");
        try {
            this.resources = ShareReflectUtil.findField(cls, "mResources");
        } catch (Throwable unused2) {
            this.resources = null;
        }
        this.packagesFiled = ShareReflectUtil.findField(cls2, "mPackages");
        try {
            this.resourcePackagesFiled = ShareReflectUtil.findField(cls2, "mResourcePackages");
        } catch (Throwable unused3) {
            this.resourcePackagesFiled = null;
        }
        AssetManager assets = context.getAssets();
        this.addAssetPathMethod = ShareReflectUtil.findMethod(assets, "addAssetPath", (Class<?>[]) new Class[]{String.class});
        if (shouldAddSharedLibraryAssets(context.getApplicationInfo())) {
            this.addAssetPathAsSharedLibraryMethod = ShareReflectUtil.findMethod(assets, "addAssetPathAsSharedLibrary", (Class<?>[]) new Class[]{String.class});
        }
        try {
            this.stringBlocksField = ShareReflectUtil.findField(assets, "mStringBlocks");
            this.ensureStringBlocksMethod = ShareReflectUtil.findMethod(assets, "ensureStringBlocks", (Class<?>[]) new Class[0]);
        } catch (Throwable unused4) {
        }
        this.newAssetManagerCtor = ShareReflectUtil.findConstructor(assets, (Class<?>[]) new Class[0]);
        if (Build.VERSION.SDK_INT >= 19) {
            Class<?> cls3 = Class.forName("android.app.ResourcesManager");
            Object objInvoke = ShareReflectUtil.findMethod(cls3, "getInstance", (Class<?>[]) new Class[0]).invoke(null, new Object[0]);
            try {
                this.references = ((ArrayMap) ShareReflectUtil.findField(cls3, "mActiveResources").get(objInvoke)).values();
            } catch (NoSuchFieldException unused5) {
                this.references = (Collection) ShareReflectUtil.findField(cls3, "mResourceReferences").get(objInvoke);
                try {
                    this.resourceImpls = (Map) ShareReflectUtil.findField(cls3, "mResourceImpls").get(objInvoke);
                } catch (Throwable unused6) {
                    this.resourceImpls = null;
                }
            }
        } else {
            this.references = ((HashMap) ShareReflectUtil.findField(cls2, "mActiveResources").get(this.currentActivityThread)).values();
        }
        if (this.references == null) {
            throw new Exception("resource references is null");
        }
        Resources resources = context.getResources();
        if (Build.VERSION.SDK_INT >= 24) {
            try {
                this.resourcesImplFiled = ShareReflectUtil.findField(resources, "mResourcesImpl");
            } catch (Throwable unused7) {
                this.assetsFiled = ShareReflectUtil.findField(resources, "mAssets");
            }
        } else {
            this.assetsFiled = ShareReflectUtil.findField(resources, "mAssets");
        }
        try {
            this.publicSourceDirField = ShareReflectUtil.findField((Class<?>) ApplicationInfo.class, "publicSourceDir");
        } catch (NoSuchFieldException unused8) {
        }
    }

    private void monkeyPatchExistingResources(Context context, String str, boolean z) throws Exception {
        if (str == null) {
            return;
        }
        ApplicationInfo applicationInfo = context.getApplicationInfo();
        this.packageContext = context.createPackageContext(context.getPackageName(), 1);
        this.packageResContext = context.createPackageContext(context.getPackageName(), 0);
        Field[] fieldArr = {this.packagesFiled, this.resourcePackagesFiled};
        for (int i = 0; i < 2; i++) {
            Field field = fieldArr[i];
            if (field != null) {
                Iterator it = ((Map) field.get(this.currentActivityThread)).entrySet().iterator();
                while (it.hasNext()) {
                    Object obj = ((WeakReference) ((Map.Entry) it.next()).getValue()).get();
                    if (obj != null && applicationInfo.sourceDir.equals((String) this.resDir.get(obj))) {
                        this.resDir.set(obj, str);
                        Field field2 = this.resources;
                        if (field2 != null) {
                            field2.set(obj, null);
                        }
                    }
                }
            }
        }
        AssetManager assetManager = (AssetManager) this.newAssetManagerCtor.newInstance(new Object[0]);
        this.newAssetManager = assetManager;
        this.addAssetPathMethod.invoke(assetManager, context.getApplicationInfo().sourceDir);
        this.addAssetPathMethod.invoke(this.newAssetManager, str);
        if (shouldAddSharedLibraryAssets(applicationInfo)) {
            for (String str2 : applicationInfo.sharedLibraryFiles) {
                if (str2.endsWith(".apk") && ((Integer) this.addAssetPathAsSharedLibraryMethod.invoke(this.newAssetManager, str2)).intValue() == 0) {
                    throw new Exception("AssetManager add SharedLibrary Fail");
                }
            }
        }
        Field field3 = this.stringBlocksField;
        if (field3 != null && this.ensureStringBlocksMethod != null) {
            field3.set(this.newAssetManager, null);
            this.ensureStringBlocksMethod.invoke(this.newAssetManager, new Object[0]);
        }
        Iterator<WeakReference<Resources>> it2 = this.references.iterator();
        while (it2.hasNext()) {
            Resources resources = it2.next().get();
            if (resources != null) {
                try {
                    this.assetsFiled.set(resources, this.newAssetManager);
                } catch (Throwable unused) {
                    Object obj2 = this.resourcesImplFiled.get(resources);
                    ShareReflectUtil.findField(obj2, "mAssets").set(obj2, this.newAssetManager);
                }
                clearPreloadTypedArrayIssue(resources);
                resources.updateConfiguration(resources.getConfiguration(), resources.getDisplayMetrics());
            }
        }
        try {
            Map<Object, WeakReference<Object>> map = this.resourceImpls;
            if (map != null) {
                Iterator<WeakReference<Object>> it3 = map.values().iterator();
                while (it3.hasNext()) {
                    Object obj3 = it3.next().get();
                    if (obj3 != null) {
                        ShareReflectUtil.findField(obj3, "mAssets").set(obj3, this.newAssetManager);
                    }
                }
            }
            if (Build.VERSION.SDK_INT >= 24) {
                try {
                    Field field4 = this.publicSourceDirField;
                    if (field4 != null) {
                        field4.set(context.getApplicationInfo(), str);
                    }
                } catch (Throwable unused2) {
                }
            }
        } catch (Throwable unused3) {
            throw new Exception("resourceImpls is null");
        }
    }

    private void clearPreloadTypedArrayIssue(Resources resources) {
        try {
            Object obj = ShareReflectUtil.findField((Class<?>) Resources.class, "mTypedArrayPool").get(resources);
            do {
            } while (ShareReflectUtil.findMethod(obj, "acquire", (Class<?>[]) new Class[0]).invoke(obj, new Object[0]) != null);
        } catch (Throwable unused) {
        }
    }

    private boolean shouldAddSharedLibraryAssets(ApplicationInfo applicationInfo) {
        return (Build.VERSION.SDK_INT < 24 || applicationInfo == null || applicationInfo.sharedLibraryFiles == null) ? false : true;
    }
}
