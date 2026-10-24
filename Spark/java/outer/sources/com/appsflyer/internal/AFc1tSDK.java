package com.appsflyer.internal;

import android.content.Context;
import android.util.Base64;
import com.appsflyer.AFLogger;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import kotlin.TuplesKt;
import kotlin.Unit;
import kotlin.collections.ArraysKt;
import kotlin.collections.CollectionsKt;
import kotlin.collections.MapsKt;
import kotlin.comparisons.ComparisonsKt;
import kotlin.io.CloseableKt;
import kotlin.io.FilesKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes.dex */
public final class AFc1tSDK implements AFc1vSDK {
    private final AFc1iSDK AFAdRevenueData;
    private final AFc1qSDK getCurrencyIso4217Code;
    private final AFc1sSDK getMediationNetwork;
    private final Map<String, Integer> getRevenue;

    public AFc1tSDK(AFc1iSDK aFc1iSDK, AFc1qSDK aFc1qSDK) {
        Intrinsics.checkNotNullParameter(aFc1iSDK, "");
        Intrinsics.checkNotNullParameter(aFc1qSDK, "");
        this.AFAdRevenueData = aFc1iSDK;
        this.getCurrencyIso4217Code = aFc1qSDK;
        this.getMediationNetwork = new AFc1sSDK(CollectionsKt.listOf((Object[]) new AFc1uSDK[]{new AFc1uSDK("ConversionsCache", CollectionsKt.listOf(AFe1mSDK.CONVERSION), 1), new AFc1uSDK("AttrCache", CollectionsKt.listOf(AFe1mSDK.ATTR), 1), new AFc1uSDK("OtherCache", CollectionsKt.listOf((Object[]) new AFe1mSDK[]{AFe1mSDK.LAUNCH, AFe1mSDK.INAPP, AFe1mSDK.ADREVENUE, AFe1mSDK.ARS_VALIDATE, AFe1mSDK.PURCHASE_VALIDATE, AFe1mSDK.MANUAL_PURCHASE_VALIDATION, AFe1mSDK.SDK_SERVICES}), 40)}));
        this.getRevenue = MapsKt.mutableMapOf(TuplesKt.to("ConversionsCache", 0), TuplesKt.to("AttrCache", 0), TuplesKt.to("OtherCache", 0));
    }

    @Override // com.appsflyer.internal.AFc1vSDK
    public final void AFAdRevenueData() {
        try {
            if (this.getCurrencyIso4217Code.AFAdRevenueData("AF_CACHE_VERSION", -1) != 1) {
                this.getCurrencyIso4217Code.getMediationNetwork("AF_CACHE_VERSION", 1);
                Context context = this.AFAdRevenueData.getMonetizationNetwork;
                Intrinsics.checkNotNull(context);
                if (new File(context.getFilesDir(), "AFRequestCache").exists()) {
                    Context context2 = this.AFAdRevenueData.getMonetizationNetwork;
                    Intrinsics.checkNotNull(context2);
                    FilesKt.deleteRecursively(new File(context2.getFilesDir(), "AFRequestCache"));
                    Context context3 = this.AFAdRevenueData.getMonetizationNetwork;
                    Intrinsics.checkNotNull(context3);
                    new File(context3.getFilesDir(), "AFRequestCache").mkdir();
                }
            } else {
                Context context4 = this.AFAdRevenueData.getMonetizationNetwork;
                Intrinsics.checkNotNull(context4);
                if (!new File(context4.getFilesDir(), "AFRequestCache").exists()) {
                    Context context5 = this.AFAdRevenueData.getMonetizationNetwork;
                    Intrinsics.checkNotNull(context5);
                    new File(context5.getFilesDir(), "AFRequestCache").mkdir();
                }
            }
            getMonetizationNetwork();
        } catch (Exception e) {
            AFg1gSDK.e$default(AFLogger.INSTANCE, AFg1cSDK.CACHE, "Could not init cache", e, false, false, false, false, 120, null);
        }
    }

    private final void getMonetizationNetwork() {
        for (AFc1uSDK aFc1uSDK : this.getMediationNetwork.AFAdRevenueData) {
            String str = aFc1uSDK.getCurrencyIso4217Code;
            Context context = this.AFAdRevenueData.getMonetizationNetwork;
            Intrinsics.checkNotNull(context);
            File file = new File(new File(context.getFilesDir(), "AFRequestCache"), str);
            if (!file.exists()) {
                file.mkdirs();
                this.getRevenue.put(aFc1uSDK.getCurrencyIso4217Code, 0);
            } else {
                Map<String, Integer> map = this.getRevenue;
                String str2 = aFc1uSDK.getCurrencyIso4217Code;
                File[] fileArrListFiles = file.listFiles();
                map.put(str2, Integer.valueOf(fileArrListFiles != null ? fileArrListFiles.length : 0));
            }
        }
    }

    @Override // com.appsflyer.internal.AFc1vSDK
    public final List<AFc1rSDK> getRevenue() {
        AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.CACHE, "Get Cached Requests", false, 4, null);
        ArrayList arrayList = new ArrayList();
        ArrayList<File> arrayList2 = new ArrayList();
        try {
            Context context = this.AFAdRevenueData.getMonetizationNetwork;
            Intrinsics.checkNotNull(context);
            if (!new File(context.getFilesDir(), "AFRequestCache").exists()) {
                Context context2 = this.AFAdRevenueData.getMonetizationNetwork;
                Intrinsics.checkNotNull(context2);
                new File(context2.getFilesDir(), "AFRequestCache").mkdir();
            }
            Iterator<T> it = this.getMediationNetwork.AFAdRevenueData.iterator();
            while (it.hasNext()) {
                String str = ((AFc1uSDK) it.next()).getCurrencyIso4217Code;
                Context context3 = this.AFAdRevenueData.getMonetizationNetwork;
                Intrinsics.checkNotNull(context3);
                File file = new File(new File(context3.getFilesDir(), "AFRequestCache"), str);
                if (!file.exists()) {
                    file.mkdirs();
                }
                File[] fileArrListFiles = file.listFiles();
                if (fileArrListFiles == null) {
                    fileArrListFiles = new File[0];
                }
                CollectionsKt.addAll(arrayList2, fileArrListFiles);
            }
            for (File file2 : arrayList2) {
                AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.CACHE, "Found cached request: " + file2.getName(), false, 4, null);
                AFc1rSDK mediationNetwork = getMediationNetwork(file2);
                if (mediationNetwork != null) {
                    arrayList.add(mediationNetwork);
                }
            }
        } catch (Exception e) {
            AFg1gSDK.e$default(AFLogger.INSTANCE, AFg1cSDK.CACHE, "Could not get cached requests", e, false, false, false, false, 120, null);
        }
        AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.CACHE, "Found " + arrayList.size() + " Cached Requests", false, 4, null);
        return arrayList;
    }

    private static AFc1rSDK getMediationNetwork(File file) {
        try {
            InputStreamReader inputStreamReader = new InputStreamReader(new FileInputStream(file), Charset.defaultCharset());
            try {
                char[] cArr = new char[(int) file.length()];
                inputStreamReader.read(cArr);
                AFc1rSDK aFc1rSDK = new AFc1rSDK(cArr);
                aFc1rSDK.getMediationNetwork = file.getName();
                CloseableKt.closeFinally(inputStreamReader, null);
                return aFc1rSDK;
            } catch (Throwable th) {
                try {
                    throw th;
                } catch (Throwable th2) {
                    CloseableKt.closeFinally(inputStreamReader, th);
                    throw th2;
                }
            }
        } catch (Exception e) {
            AFLogger.INSTANCE.e(AFg1cSDK.CACHE, "Error while loading request from cache", e, false, false, true, false);
            return null;
        }
    }

    private final boolean getCurrencyIso4217Code(File file) {
        try {
            file.delete();
            getMonetizationNetwork();
            return true;
        } catch (Exception e) {
            AFg1gSDK.e$default(AFLogger.INSTANCE, AFg1cSDK.CACHE, "Could not delete " + file.getName() + " from cache", e, false, false, false, false, 120, null);
            return false;
        }
    }

    @Override // com.appsflyer.internal.AFc1vSDK
    public final void getMediationNetwork() {
        try {
            Context context = this.AFAdRevenueData.getMonetizationNetwork;
            Intrinsics.checkNotNull(context);
            if (!new File(context.getFilesDir(), "AFRequestCache").exists()) {
                Context context2 = this.AFAdRevenueData.getMonetizationNetwork;
                Intrinsics.checkNotNull(context2);
                new File(context2.getFilesDir(), "AFRequestCache").mkdir();
                return;
            }
            Iterator<T> it = this.getMediationNetwork.AFAdRevenueData.iterator();
            while (it.hasNext()) {
                String str = ((AFc1uSDK) it.next()).getCurrencyIso4217Code;
                Context context3 = this.AFAdRevenueData.getMonetizationNetwork;
                Intrinsics.checkNotNull(context3);
                File[] fileArrListFiles = new File(new File(context3.getFilesDir(), "AFRequestCache"), str).listFiles();
                if (fileArrListFiles != null) {
                    Intrinsics.checkNotNullExpressionValue(fileArrListFiles, "");
                    for (File file : fileArrListFiles) {
                        AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.CACHE, "ClearCache : Found cached request " + file.getName(), false, 4, null);
                        AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.CACHE, "Deleting " + file.getName() + " from cache", false, 4, null);
                        file.delete();
                    }
                }
            }
            Context context4 = this.AFAdRevenueData.getMonetizationNetwork;
            Intrinsics.checkNotNull(context4);
            FilesKt.deleteRecursively(new File(context4.getFilesDir(), "AFRequestCache"));
            getMonetizationNetwork();
        } catch (Exception e) {
            AFg1gSDK.e$default(AFLogger.INSTANCE, AFg1cSDK.CACHE, "Could not clearCache request", e, false, false, false, false, 120, null);
        }
    }

    private final AFc1uSDK getCurrencyIso4217Code(AFe1mSDK aFe1mSDK) {
        Object next;
        Iterator<T> it = this.getMediationNetwork.AFAdRevenueData.iterator();
        while (it.hasNext()) {
            next = it.next();
            if (((AFc1uSDK) next).getRevenue.contains(aFe1mSDK)) {
                return (AFc1uSDK) next;
            }
        }
        next = null;
        return (AFc1uSDK) next;
    }

    private final String getMediationNetwork(AFe1mSDK aFe1mSDK) {
        String str;
        AFc1uSDK currencyIso4217Code = getCurrencyIso4217Code(aFe1mSDK);
        if (currencyIso4217Code == null || (str = currencyIso4217Code.getCurrencyIso4217Code) == null) {
            throw new UnsupportedOperationException("Cache do not support this type of events");
        }
        return str;
    }

    @Override // com.appsflyer.internal.AFc1vSDK
    public final String AFAdRevenueData(AFc1rSDK aFc1rSDK) {
        File file;
        String str;
        List listSortedWith;
        List<File> listTake;
        Intrinsics.checkNotNullParameter(aFc1rSDK, "");
        try {
            AFe1mSDK aFe1mSDK = aFc1rSDK.getMonetizationNetwork;
            Intrinsics.checkNotNullExpressionValue(aFe1mSDK, "");
            Context context = this.AFAdRevenueData.getMonetizationNetwork;
            Intrinsics.checkNotNull(context);
            File file2 = new File(new File(context.getFilesDir(), "AFRequestCache"), getMediationNetwork(aFe1mSDK));
            if (!file2.exists()) {
                file2.mkdirs();
            }
            AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.CACHE, "Caching request with URL: " + aFc1rSDK.getRevenue, false, 4, null);
            String strValueOf = String.valueOf(System.currentTimeMillis());
            file = new File(file2, strValueOf);
            try {
                file.createNewFile();
                OutputStreamWriter outputStreamWriter = new OutputStreamWriter(new FileOutputStream(file.getPath(), true), Charset.defaultCharset());
                try {
                    OutputStreamWriter outputStreamWriter2 = outputStreamWriter;
                    outputStreamWriter2.write("version=");
                    outputStreamWriter2.write(aFc1rSDK.AFAdRevenueData);
                    outputStreamWriter2.write(10);
                    outputStreamWriter2.write("url=");
                    outputStreamWriter2.write(aFc1rSDK.getRevenue);
                    outputStreamWriter2.write(10);
                    outputStreamWriter2.write("data=");
                    outputStreamWriter2.write(Base64.encodeToString(aFc1rSDK.getMediationNetwork(), 2));
                    outputStreamWriter2.write(10);
                    AFe1mSDK aFe1mSDK2 = aFc1rSDK.getMonetizationNetwork;
                    outputStreamWriter2.write("type=");
                    outputStreamWriter2.write(aFe1mSDK2.name());
                    outputStreamWriter2.write(10);
                    outputStreamWriter2.flush();
                    Unit unit = Unit.INSTANCE;
                    CloseableKt.closeFinally(outputStreamWriter, null);
                    AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.CACHE, "Cache request: done, cacheKey: " + strValueOf, false, 4, null);
                    AFe1mSDK aFe1mSDK3 = aFc1rSDK.getMonetizationNetwork;
                    Intrinsics.checkNotNullExpressionValue(aFe1mSDK3, "");
                    AFc1uSDK currencyIso4217Code = getCurrencyIso4217Code(aFe1mSDK3);
                    Integer numValueOf = currencyIso4217Code != null ? Integer.valueOf(currencyIso4217Code.AFAdRevenueData) : null;
                    if (numValueOf == null) {
                        return strValueOf;
                    }
                    int iIntValue = numValueOf.intValue();
                    Map<String, Integer> map = this.getRevenue;
                    AFc1uSDK currencyIso4217Code2 = getCurrencyIso4217Code(aFe1mSDK3);
                    if (currencyIso4217Code2 != null && (str = currencyIso4217Code2.getCurrencyIso4217Code) != null) {
                        Integer num = map.get(str);
                        int iIntValue2 = num != null ? num.intValue() : 0;
                        if (iIntValue2 >= iIntValue) {
                            int i = (iIntValue2 + 1) - iIntValue;
                            AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.CACHE, "Cache overflown for type " + aFe1mSDK3 + ", removing " + i + " item(s)", false, 4, null);
                            Context context2 = this.AFAdRevenueData.getMonetizationNetwork;
                            Intrinsics.checkNotNull(context2);
                            File file3 = new File(new File(context2.getFilesDir(), "AFRequestCache"), getMediationNetwork(aFe1mSDK3));
                            if (!file3.exists()) {
                                file3.mkdirs();
                            }
                            File[] fileArrListFiles = file3.listFiles();
                            if (fileArrListFiles != null && (listSortedWith = ArraysKt.sortedWith(fileArrListFiles, new Comparator() { // from class: com.appsflyer.internal.AFc1tSDK.1
                                /* JADX WARN: Multi-variable type inference failed */
                                @Override // java.util.Comparator
                                public final int compare(T t, T t2) {
                                    return ComparisonsKt.compareValues(((File) t).getName(), ((File) t2).getName());
                                }
                            })) != null && (listTake = CollectionsKt.take(listSortedWith, i)) != null) {
                                for (File file4 : listTake) {
                                    file4.delete();
                                    AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.CACHE, "Cache entry " + file4.getName() + " removed", false, 4, null);
                                }
                            }
                        }
                        getMonetizationNetwork();
                        return strValueOf;
                    }
                    throw new UnsupportedOperationException("Cache do not support this type of events");
                } catch (Throwable th) {
                    try {
                        throw th;
                    } catch (Throwable th2) {
                        CloseableKt.closeFinally(outputStreamWriter, th);
                        throw th2;
                    }
                }
            } catch (Exception e) {
                e = e;
                if (file != null) {
                    file.delete();
                }
                AFg1gSDK.e$default(AFLogger.INSTANCE, AFg1cSDK.CACHE, "Could not cache request", e, false, false, false, false, 120, null);
                return null;
            }
        } catch (Exception e2) {
            e = e2;
            file = null;
        }
    }

    @Override // com.appsflyer.internal.AFc1vSDK
    public final boolean AFAdRevenueData(String str) {
        if (str == null) {
            return false;
        }
        Context context = this.AFAdRevenueData.getMonetizationNetwork;
        Intrinsics.checkNotNull(context);
        if (!new File(context.getFilesDir(), "AFRequestCache").exists()) {
            Context context2 = this.AFAdRevenueData.getMonetizationNetwork;
            Intrinsics.checkNotNull(context2);
            new File(context2.getFilesDir(), "AFRequestCache").mkdir();
            return true;
        }
        AFg1gSDK.i$default(AFLogger.INSTANCE, AFg1cSDK.CACHE, "Deleting " + str + " from cache", false, 4, null);
        Iterator<T> it = this.getMediationNetwork.AFAdRevenueData.iterator();
        while (it.hasNext()) {
            String str2 = ((AFc1uSDK) it.next()).getCurrencyIso4217Code;
            Context context3 = this.AFAdRevenueData.getMonetizationNetwork;
            Intrinsics.checkNotNull(context3);
            File file = new File(new File(new File(context3.getFilesDir(), "AFRequestCache"), str2), str);
            if (file.exists()) {
                return getCurrencyIso4217Code(file);
            }
        }
        return true;
    }
}
