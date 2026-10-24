package androidx.core.slib;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.os.Build;
import android.text.TextUtils;
import androidx.core.smain.utils.ShareReflectUtil;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.Enumeration;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;

/* JADX INFO: loaded from: classes2.dex */
public class SMainLib {
    private static SMainLib m_instance;
    private final String TAG = "lib_load";

    public static SMainLib getInstance() {
        if (m_instance == null) {
            m_instance = new SMainLib();
        }
        return m_instance;
    }

    public void copyNativeLib(Context context, File file, File file2) {
        try {
            ZipFile zipFile = new ZipFile(file.getAbsolutePath());
            try {
                ApplicationInfo applicationInfo = context.getApplicationInfo();
                String str = (String) ShareReflectUtil.findField(applicationInfo, "primaryCpuAbi").get(applicationInfo);
                if (!TextUtils.isEmpty(str) && findAndCopyNativeLib(zipFile, str, file2)) {
                    zipFile.close();
                    return;
                }
                if (Build.VERSION.SDK_INT >= 21) {
                    for (String str2 : Build.SUPPORTED_ABIS) {
                        if (findAndCopyNativeLib(zipFile, str2, file2)) {
                            zipFile.close();
                            return;
                        }
                    }
                } else if (findAndCopyNativeLib(zipFile, Build.CPU_ABI, file2)) {
                    zipFile.close();
                    return;
                }
                findAndCopyNativeLib(zipFile, "arm64-v8a", file2);
                zipFile.close();
            } catch (Throwable th) {
                try {
                    zipFile.close();
                } catch (Throwable th2) {
                    Throwable.class.getDeclaredMethod("addSuppressed", Throwable.class).invoke(th, th2);
                }
                throw th;
            }
        } catch (Exception unused) {
        }
    }

    private boolean findAndCopyNativeLib(ZipFile zipFile, String str, File file) throws Exception {
        String str2 = "lib/" + str + "/";
        Enumeration<? extends ZipEntry> enumerationEntries = zipFile.entries();
        byte[] bArr = null;
        boolean z = false;
        boolean z2 = false;
        while (enumerationEntries.hasMoreElements()) {
            ZipEntry zipEntryNextElement = enumerationEntries.nextElement();
            String name = zipEntryNextElement.getName();
            if (name.charAt(0) >= 'l' && name.charAt(0) <= 'l' && (z || name.startsWith("lib/"))) {
                if (name.endsWith(".so") && name.startsWith(str2)) {
                    if (bArr == null) {
                        bArr = new byte[8192];
                        z2 = true;
                    }
                    copySo(bArr, zipFile.getInputStream(zipEntryNextElement), new FileOutputStream(new File(file, name.substring(name.lastIndexOf(47) + 1))));
                }
                z = true;
            }
        }
        if (z) {
            return z2;
        }
        return true;
    }

    private void copySo(byte[] bArr, InputStream inputStream, OutputStream outputStream) throws IOException {
        BufferedInputStream bufferedInputStream = new BufferedInputStream(inputStream);
        BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(outputStream);
        while (true) {
            int i = bufferedInputStream.read(bArr);
            if (i > 0) {
                bufferedOutputStream.write(bArr, 0, i);
            } else {
                bufferedOutputStream.flush();
                bufferedOutputStream.close();
                outputStream.close();
                bufferedInputStream.close();
                inputStream.close();
                return;
            }
        }
    }
}
