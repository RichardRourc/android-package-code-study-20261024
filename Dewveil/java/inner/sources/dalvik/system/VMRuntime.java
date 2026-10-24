package dalvik.system;

/* JADX INFO: loaded from: classes2.dex */
public class VMRuntime {
    public native void setHiddenApiExemptions(String[] strArr);

    public static VMRuntime getRuntime() {
        throw new IllegalArgumentException("stub");
    }
}
