package androidx.core.smain.utils;

/* JADX INFO: loaded from: classes2.dex */
class Validate {
    Validate() {
    }

    static void isTrue(boolean z, String str, Object... objArr) {
        if (!z) {
            throw new IllegalArgumentException(String.format(str, objArr));
        }
    }
}
