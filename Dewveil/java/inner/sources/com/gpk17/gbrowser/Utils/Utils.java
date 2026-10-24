package com.gpk17.gbrowser.Utils;

import android.app.Activity;
import android.app.ActivityManager;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.os.Build;
import android.os.Handler;
import android.util.Log;
import android.util.TypedValue;
import android.view.Display;
import android.view.View;
import android.view.WindowManager;
import android.view.inputmethod.InputMethodManager;
import android.widget.Button;
import java.io.IOException;
import java.io.PrintWriter;
import java.io.StringWriter;
import java.math.BigInteger;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.sql.Timestamp;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import kotlin.UByte;

/* JADX INFO: loaded from: classes.dex */
public class Utils {
    static final String TAG = "Utils";

    public static float UnsignByteToFloat(byte b) {
        return b & UByte.MAX_VALUE;
    }

    public static int UnsignByteToInt(byte b) {
        return b & UByte.MAX_VALUE;
    }

    public static int dp2Px(Context context, int i) {
        if (context != null) {
            return (int) TypedValue.applyDimension(1, i, context.getResources().getDisplayMetrics());
        }
        return 0;
    }

    public static int pxToDp(Context context, int i) {
        if (context != null) {
            return Math.round(i / (context.getResources().getDisplayMetrics().xdpi / 160.0f));
        }
        return 0;
    }

    public static int byteArray2Int(byte[] bArr) {
        if (bArr == null) {
            return -1;
        }
        try {
            return new BigInteger(bArr).intValue();
        } catch (Exception unused) {
            return -1;
        }
    }

    public static long byteArray2Long(byte[] bArr) {
        if (bArr == null) {
            return -1L;
        }
        try {
            return new BigInteger(bArr).longValue();
        } catch (Exception unused) {
            return -1L;
        }
    }

    public static float byteArray2Float(byte[] bArr) {
        return new BigInteger(bArr).floatValue();
    }

    public static double byteArray2Double(byte[] bArr) {
        return new BigInteger(bArr).doubleValue();
    }

    public static byte[] convertIntArray2ByteArray(int[] iArr) {
        int length = iArr.length;
        byte[] bArr = new byte[length];
        for (int i = 0; i < length; i++) {
            bArr[i] = (byte) iArr[i];
        }
        return bArr;
    }

    public static int[] convertByteArray2IntArray(byte[] bArr) {
        int length = bArr.length;
        int[] iArr = new int[bArr.length];
        for (int i = 0; i < length; i++) {
            iArr[i] = bArr[i] & UByte.MAX_VALUE;
        }
        return iArr;
    }

    public static byte[] hexString2ByteArray(String str) {
        int length = str.length() / 2;
        byte[] bArr = new byte[length];
        for (int i = 0; i < length; i++) {
            int i2 = i * 2;
            bArr[i] = (byte) Integer.parseInt(str.substring(i2, i2 + 2), 16);
        }
        return bArr;
    }

    public static String byteArray2HexString(byte[] bArr) {
        String str = "";
        for (byte b : bArr) {
            str = String.format("%s%02X", str, Byte.valueOf(b));
        }
        return str;
    }

    public static String byteArrayToString(byte[] bArr) {
        String str = "";
        for (int i = 0; i < bArr.length; i++) {
            if (bArr[i] != 0) {
                str = str + ((char) bArr[i]);
            }
        }
        return str;
    }

    public static byte[] intToByteArray(int i, int i2) {
        byte[] bArr = new byte[i];
        for (int i3 = 0; i3 < i; i3++) {
            bArr[i3] = (byte) (i2 >>> (((i - 1) - i3) * 8));
        }
        return bArr;
    }

    public static byte[] longToByteArray(int i, long j) {
        byte[] bArr = new byte[i];
        for (int i2 = 0; i2 < i; i2++) {
            bArr[i2] = (byte) (j >>> (((i - 1) - i2) * 8));
        }
        return bArr;
    }

    public static int UnsignBytesToInt(byte[] bArr) {
        return byteArray2Int(bArr) & ((int) (Math.pow(16.0d, bArr.length) - 1.0d));
    }

    public static float UnsignBytesToFloat(byte[] bArr) {
        return byteArray2Int(bArr) & ((int) (Math.pow(16.0d, bArr.length) - 1.0d));
    }

    public static String BCDtoString(byte b) {
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append((int) ((byte) (((byte) (((byte) (b & 240)) >>> 4)) & 15)));
        stringBuffer.append((int) ((byte) (b & 15)));
        return stringBuffer.toString();
    }

    public static String BCDtoString(byte[] bArr) {
        StringBuffer stringBuffer = new StringBuffer();
        for (byte b : bArr) {
            stringBuffer.append(BCDtoString(b));
        }
        return stringBuffer.toString();
    }

    public static String getFormatDate(String str) {
        return new SimpleDateFormat(str).format(Calendar.getInstance().getTime());
    }

    public static float roundOff(float f, int i) {
        double dPow = Math.pow(10.0d, i);
        return Math.round((float) (((double) f) * dPow)) / ((float) dPow);
    }

    public static String getStackTraceString(Throwable th) {
        StringWriter stringWriter = new StringWriter();
        th.printStackTrace(new PrintWriter(stringWriter));
        return stringWriter.toString();
    }

    public static String getStackTraceElementString(StackTraceElement[] stackTraceElementArr) {
        String str = null;
        for (StackTraceElement stackTraceElement : stackTraceElementArr) {
            str = str + stackTraceElement.toString() + "\n\t\t";
        }
        return str;
    }

    public static String printStackTrace(Exception exc) {
        StringWriter stringWriter = new StringWriter();
        exc.printStackTrace(new PrintWriter(stringWriter));
        return stringWriter.toString();
    }

    public static Timestamp getCurrentTimeStamp() {
        return new Timestamp(Calendar.getInstance().getTimeInMillis());
    }

    public static boolean doesArrayRepresentEmpty(byte[] bArr) {
        boolean z = true;
        for (int i = 0; i < bArr.length && z; i++) {
            z = bArr[i] == -1;
        }
        return z;
    }

    public static int[] getScreenResolution(Context context) {
        if (context == null) {
            return null;
        }
        Display defaultDisplay = ((WindowManager) context.getSystemService("window")).getDefaultDisplay();
        return new int[]{defaultDisplay.getWidth(), defaultDisplay.getHeight()};
    }

    public static String getAppVersionName(Context context) {
        try {
            return context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionName;
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static int getAppVersionCode(Context context) {
        try {
            return context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionCode;
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            return -1;
        }
    }

    public static String getOSVersion() {
        return "android : " + Build.VERSION.RELEASE;
    }

    public static boolean checkIfPageNameInBackground(Context context, String str) {
        if (context == null) {
            return false;
        }
        List<ActivityManager.RunningTaskInfo> runningTasks = ((ActivityManager) context.getSystemService("activity")).getRunningTasks(1);
        if (runningTasks.isEmpty()) {
            return false;
        }
        return !runningTasks.get(0).topActivity.getPackageName().equals(str);
    }

    public static boolean appInstalledOrNot(Context context, String str) {
        if (context == null) {
            return false;
        }
        try {
            context.getPackageManager().getPackageInfo(str, 1);
            return true;
        } catch (Exception unused) {
            return false;
        }
    }

    public static void setButtonDrawableCenter(final Button button, final Drawable drawable, final int i) {
        new Handler().postDelayed(new Runnable() { // from class: com.gpk17.gbrowser.Utils.Utils.1
            @Override // java.lang.Runnable
            public void run() {
                if (button.getMeasuredWidth() > 0) {
                    int measuredWidth = button.getMeasuredWidth();
                    int measuredHeight = button.getMeasuredHeight();
                    int textSize = (int) (button.getTextSize() * button.getText().length());
                    int lineCount = button.getLineCount() * button.getLineHeight();
                    int intrinsicWidth = drawable.getIntrinsicWidth();
                    int intrinsicHeight = lineCount + drawable.getIntrinsicHeight();
                    int i2 = i;
                    int i3 = (measuredWidth / 2) - (((textSize + intrinsicWidth) + i2) / 2);
                    int i4 = measuredHeight / 2;
                    int i5 = (intrinsicHeight + i2) / 2;
                    button.setCompoundDrawablesWithIntrinsicBounds(drawable, (Drawable) null, (Drawable) null, (Drawable) null);
                    button.setPadding(i3, 0, 0, 0);
                    button.setCompoundDrawablePadding(-i3);
                }
            }
        }, 0L);
    }

    public static Locale getCurrentLocale(Context context) {
        if (context != null) {
            return context.getResources().getConfiguration().getLocales().get(0);
        }
        return null;
    }

    public static long fetchLastModifiedFromUrl(String str) {
        if (str == null || !str.contains("https://") || !str.contains("@")) {
            return -1L;
        }
        String[] strArrSplit = str.split("/");
        return Long.parseLong(strArrSplit[strArrSplit.length - 1].split("\\.")[0].split("@")[1]);
    }

    public static int simplifiedComparator(int i) {
        if (i != 0) {
            return i / Math.abs(i);
        }
        return 0;
    }

    public static void hideKeyboard(Activity activity, String str) {
        View currentFocus = activity.getCurrentFocus();
        if (currentFocus != null) {
            ((InputMethodManager) activity.getSystemService("input_method")).hideSoftInputFromWindow(currentFocus.getWindowToken(), 2);
        }
    }

    public static void grantIntentUriPermission(Context context, Intent intent, Uri uri) {
        if (context != null) {
            Iterator<ResolveInfo> it = context.getPackageManager().queryIntentActivities(intent, 65536).iterator();
            while (it.hasNext()) {
                context.grantUriPermission(it.next().activityInfo.packageName, uri, 3);
            }
        }
    }

    public static int parseInt(String str) {
        if (str != null && str.length() > 0) {
            try {
                return Integer.parseInt(str);
            } catch (Exception e) {
                Log.d(TAG, "parseInt Exception:" + printStackTrace(e));
            }
        }
        return 0;
    }

    public static String parsingShareDest(String str) {
        if (str != null) {
            String[] strArrSplit = str.split(";");
            if (strArrSplit.length > 1) {
                for (String str2 : strArrSplit) {
                    if (str2.contains("component=")) {
                        String[] strArrSplit2 = str2.split("=");
                        if (strArrSplit2.length == 2) {
                            return strArrSplit2[1].split("/")[0];
                        }
                    }
                }
            }
        }
        return null;
    }

    public static boolean isAbsNull(String str) {
        return str == null || str.toLowerCase().contentEquals("null") || str.length() == 0 || str.toLowerCase().contentEquals("");
    }

    public static String getEmojiFlag(String str) {
        if (isAbsNull(str)) {
            return null;
        }
        return new String(Character.toChars(Character.codePointAt(str, 0) - (-127397))).concat(new String(Character.toChars(Character.codePointAt(str, 1) - (-127397))));
    }

    public static StringBuffer removeUTFCharacters(String str) {
        Matcher matcher = Pattern.compile("\\\\u(\\p{XDigit}{4})").matcher(str);
        StringBuffer stringBuffer = new StringBuffer(str.length());
        while (matcher.find()) {
            matcher.appendReplacement(stringBuffer, Matcher.quoteReplacement(String.valueOf((char) Integer.parseInt(matcher.group(1), 16))));
        }
        matcher.appendTail(stringBuffer);
        return stringBuffer;
    }

    public static boolean isHostAvailable(String str, int i, int i2) {
        Socket socket = new Socket();
        boolean zIsConnected = false;
        try {
            try {
                try {
                    socket.connect(new InetSocketAddress(InetAddress.getByName(str), i), i2);
                    zIsConnected = socket.isConnected();
                    Log.d(TAG, String.format("isHostAvailable.socket.isconntected:%b", Boolean.valueOf(zIsConnected)));
                    socket.close();
                } catch (IOException e) {
                    Log.d(TAG, "isHostAvailable Exception:" + printStackTrace(e));
                    socket.close();
                }
            } catch (Throwable th) {
                try {
                    socket.close();
                } catch (IOException e2) {
                    e2.printStackTrace();
                }
                throw th;
            }
        } catch (IOException e3) {
            e3.printStackTrace();
        }
        return zIsConnected;
    }

    public static boolean matchInterestedUrl(String str) {
        boolean zFind = str != null ? Pattern.compile("^(http://|https://)?(m.){1}(\\w+.)(com){1}(/[\\w.]+)*").matcher(str).find() : false;
        Log.d(TAG, String.format("matchInterestedUrl(%s) ret:%b", str, Boolean.valueOf(zFind)));
        return zFind;
    }

    public static String[] getMediaUrl() {
        return new String[]{"&data-origbrowser", "instagram", "twitter", "t.me", "youtube", "line.me", "threads", "whatsapp", "x.com/intent/", "facebook"};
    }
}
