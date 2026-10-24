package com.appsflyer.internal;

import android.content.ContentProviderClient;
import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import com.adjust.sdk.Constants;
import com.appsflyer.AFLogger;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import kotlin.NoWhenBranchMatchedException;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: loaded from: classes.dex */
public final class AFj1zSDK extends AFi1dSDK {
    private final Runnable component3;
    private final AFj1ySDK getCurrencyIso4217Code;
    private final AFc1pSDK getMediationNetwork;
    private final ExecutorService getMonetizationNetwork;
    private String hashCode;

    @Override // com.appsflyer.internal.AFj1qSDK
    public final void getRevenue(final Context context) {
        Intrinsics.checkNotNullParameter(context, "");
        if (!AFAdRevenueData(context)) {
            this.component3.run();
        } else {
            this.getMonetizationNetwork.execute(new Runnable() { // from class: com.appsflyer.internal.AFj1zSDK$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    AFj1zSDK.getMonetizationNetwork(this.f$0, context);
                }
            });
        }
    }

    /* JADX WARN: Code duplicated, block: B:37:0x00aa A[PHI: r0
  0x00aa: PHI (r0v8 java.lang.String) = (r0v7 java.lang.String), (r0v15 java.lang.String), (r0v22 java.lang.String) binds: [B:15:0x0048, B:25:0x0078, B:35:0x00a7] A[DONT_GENERATE, DONT_INLINE]] */
    private final boolean AFAdRevenueData(Context context) {
        String str;
        if (!getRevenue()) {
            AFg1gSDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Referrer collection disallowed by counter.", false, 4, null);
            return false;
        }
        String currencyIso4217Code = this.getMediationNetwork.getCurrencyIso4217Code("com.facebook.sdk.ApplicationId");
        String strRemovePrefix = currencyIso4217Code != null ? StringsKt.removePrefix(currencyIso4217Code, (CharSequence) "fb") : null;
        String str2 = strRemovePrefix;
        if (str2 == null || str2.length() == 0) {
            AFg1gSDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Facebook app id Manifest metadata is not found.", false, 4, null);
            strRemovePrefix = null;
        }
        if (strRemovePrefix == null) {
            String revenue = this.getMediationNetwork.getRevenue("facebook_application_id");
            strRemovePrefix = revenue != null ? StringsKt.removePrefix(revenue, (CharSequence) "fb") : null;
            String str3 = strRemovePrefix;
            if (str3 == null || str3.length() == 0) {
                AFg1gSDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Facebook app id string resource is not found.", false, 4, null);
                strRemovePrefix = null;
            }
            if (strRemovePrefix == null) {
                String currencyIso4217Code2 = this.getMediationNetwork.getCurrencyIso4217Code("com.appsflyer.FacebookApplicationId");
                strRemovePrefix = currencyIso4217Code2 != null ? StringsKt.removePrefix(currencyIso4217Code2, (CharSequence) "fb") : null;
                String str4 = strRemovePrefix;
                if (str4 == null || str4.length() == 0) {
                    AFg1gSDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "AF Facebook app id Manifest metadata is not found.", false, 4, null);
                    strRemovePrefix = null;
                }
                str = strRemovePrefix != null ? strRemovePrefix : null;
            }
        }
        this.hashCode = str;
        if (str == null) {
            AFg1gSDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Referrer collection disallowed by missing Facebook app id.", false, 4, null);
            return false;
        }
        if (getCurrencyIso4217Code(context)) {
            return true;
        }
        AFg1gSDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Referrer collection disallowed by missing content providers.", false, 4, null);
        return false;
    }

    private final boolean getCurrencyIso4217Code(Context context) {
        int i = AFa1vSDK.getMonetizationNetwork[this.getCurrencyIso4217Code.ordinal()];
        if (i == 1) {
            return getMediationNetwork(context);
        }
        if (i == 2) {
            return getMonetizationNetwork(context);
        }
        if (i == 3) {
            return component2(context);
        }
        throw new NoWhenBranchMatchedException();
    }

    private static boolean getMediationNetwork(Context context) {
        return context.getPackageManager().resolveContentProvider("com.facebook.katana.provider.InstallReferrerProvider", 0) != null;
    }

    private static boolean getMonetizationNetwork(Context context) {
        return context.getPackageManager().resolveContentProvider("com.instagram.contentprovider.InstallReferrerProvider", 0) != null;
    }

    private static boolean component2(Context context) {
        return context.getPackageManager().resolveContentProvider("com.facebook.lite.provider.InstallReferrerProvider", 0) != null;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    public AFj1zSDK(AFc1pSDK aFc1pSDK, ExecutorService executorService, AFj1ySDK aFj1ySDK, Runnable runnable, Runnable runnable2) {
        String str;
        Intrinsics.checkNotNullParameter(aFc1pSDK, "");
        Intrinsics.checkNotNullParameter(executorService, "");
        Intrinsics.checkNotNullParameter(aFj1ySDK, "");
        Intrinsics.checkNotNullParameter(runnable, "");
        Intrinsics.checkNotNullParameter(runnable2, "");
        int i = AFj1xSDK.AFa1ySDK.getMonetizationNetwork[aFj1ySDK.ordinal()];
        if (i == 1) {
            str = "facebook";
        } else if (i == 2) {
            str = "instagram";
        } else {
            if (i != 3) {
                throw new NoWhenBranchMatchedException();
            }
            str = "facebook_lite";
        }
        super("app", str, aFc1pSDK, runnable);
        this.getMediationNetwork = aFc1pSDK;
        this.getMonetizationNetwork = executorService;
        this.getCurrencyIso4217Code = aFj1ySDK;
        this.component3 = runnable2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:70:0x025d  */
    /* JADX WARN: Code duplicated, block: B:85:0x02a7  */
    /* JADX WARN: Code duplicated, block: B:87:0x02ac A[PHI: r24
  0x02ac: PHI (r24v2 android.content.ContentProviderClient) = 
  (r24v1 android.content.ContentProviderClient)
  (r24v3 android.content.ContentProviderClient)
  (r24v3 android.content.ContentProviderClient)
 binds: [B:86:0x02aa, B:66:0x0249, B:71:0x0260] A[DONT_GENERATE, DONT_INLINE]] */
    public static final void getMonetizationNetwork(AFj1zSDK aFj1zSDK, Context context) {
        String str;
        Throwable th;
        Cursor cursor;
        ContentProviderClient contentProviderClientAcquireUnstableContentProviderClient;
        Uri uri;
        String string;
        String str2;
        Intrinsics.checkNotNullParameter(aFj1zSDK, "");
        Intrinsics.checkNotNullParameter(context, "");
        aFj1zSDK.component1 = System.currentTimeMillis();
        aFj1zSDK.component4 = AFj1qSDK.AFa1ySDK.STARTED;
        aFj1zSDK.addObserver(new AFj1qSDK.AnonymousClass5());
        String str3 = aFj1zSDK.hashCode;
        Intrinsics.checkNotNull(str3);
        try {
            int i = AFa1vSDK.getMonetizationNetwork[aFj1zSDK.getCurrencyIso4217Code.ordinal()];
            str = "Error while collecting Meta Install Referrer for ";
            try {
                if (i != 1) {
                    if (i != 2) {
                        if (i != 3) {
                            throw new NoWhenBranchMatchedException();
                        }
                        if (component2(context)) {
                            AFg1gSDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Found Facebook Lite content provider", false, 4, null);
                            uri = Uri.parse("content://com.facebook.lite.provider.InstallReferrerProvider/" + str3);
                        } else {
                            AFg1gSDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Facebook Lite content provider not found", false, 4, null);
                            uri = null;
                        }
                    } else if (getMonetizationNetwork(context)) {
                        AFg1gSDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Found Instagram content provider", false, 4, null);
                        uri = Uri.parse("content://com.instagram.contentprovider.InstallReferrerProvider/" + str3);
                    } else {
                        AFg1gSDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Instagram content provider not found", false, 4, null);
                        uri = null;
                    }
                } else if (getMediationNetwork(context)) {
                    AFg1gSDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Found Facebook content provider", false, 4, null);
                    uri = Uri.parse("content://com.facebook.katana.provider.InstallReferrerProvider/" + str3);
                } else {
                    AFg1gSDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Facebook content provider not found", false, 4, null);
                    uri = null;
                }
                if (uri != null) {
                    contentProviderClientAcquireUnstableContentProviderClient = context.getContentResolver().acquireUnstableContentProviderClient(uri);
                    try {
                        Cursor cursorQuery = contentProviderClientAcquireUnstableContentProviderClient != null ? contentProviderClientAcquireUnstableContentProviderClient.query(uri, new String[]{Constants.INSTALL_REFERRER, "is_ct", "actual_timestamp"}, null, null, null) : null;
                        if (cursorQuery != null) {
                            try {
                                if (cursorQuery.moveToFirst()) {
                                    int columnIndex = cursorQuery.getColumnIndex(Constants.INSTALL_REFERRER);
                                    if (columnIndex != -1) {
                                        string = cursorQuery.getString(columnIndex);
                                    } else {
                                        AFg1gSDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "No such column, " + aFj1zSDK.getCurrencyIso4217Code + " provider", false, 4, null);
                                        string = null;
                                    }
                                    if (string != null) {
                                        AFg1gSDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Collected " + aFj1zSDK.getCurrencyIso4217Code + " attribution data.", false, 4, null);
                                        Map<String, Object> map = aFj1zSDK.AFAdRevenueData;
                                        Intrinsics.checkNotNullExpressionValue(map, "");
                                        map.put("response", "OK");
                                        Map<String, Object> map2 = aFj1zSDK.AFAdRevenueData;
                                        Intrinsics.checkNotNullExpressionValue(map2, "");
                                        map2.put(Constants.REFERRER, string);
                                        int columnIndex2 = cursorQuery.getColumnIndex("actual_timestamp");
                                        Long lValueOf = columnIndex2 != -1 ? Long.valueOf(cursorQuery.getLong(columnIndex2)) : null;
                                        if (lValueOf != null) {
                                            aFj1zSDK.AFAdRevenueData.put("click_ts", Long.valueOf(lValueOf.longValue()));
                                        }
                                        int columnIndex3 = cursorQuery.getColumnIndex("is_ct");
                                        Integer numValueOf = columnIndex3 != -1 ? Integer.valueOf(cursorQuery.getInt(columnIndex3)) : null;
                                        if (numValueOf != null) {
                                            aFj1zSDK.AFAdRevenueData.put("meta_custom", MapsKt.mutableMapOf(TuplesKt.to("is_ct", Integer.valueOf(numValueOf.intValue()))));
                                        }
                                        int i2 = AFa1vSDK.getMonetizationNetwork[aFj1zSDK.getCurrencyIso4217Code.ordinal()];
                                        if (i2 == 1) {
                                            str2 = "com.facebook.katana";
                                        } else if (i2 == 2) {
                                            str2 = "com.instagram.android";
                                        } else {
                                            if (i2 != 3) {
                                                throw new NoWhenBranchMatchedException();
                                            }
                                            str2 = "com.facebook.lite";
                                        }
                                        Map<String, Object> map3 = aFj1zSDK.AFAdRevenueData;
                                        Intrinsics.checkNotNullExpressionValue(map3, "");
                                        map3.put("api_ver", Long.valueOf(AFj1iSDK.AFAdRevenueData(context, str2)));
                                        Map<String, Object> map4 = aFj1zSDK.AFAdRevenueData;
                                        Intrinsics.checkNotNullExpressionValue(map4, "");
                                        map4.put("api_ver_name", AFj1iSDK.getMediationNetwork(context, str2));
                                    }
                                    cursorQuery.close();
                                    if (contentProviderClientAcquireUnstableContentProviderClient != null) {
                                        contentProviderClientAcquireUnstableContentProviderClient.close();
                                    }
                                } else {
                                    AFg1gSDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Content provider returned no data", false, 4, null);
                                    if (cursorQuery != null) {
                                        cursorQuery.close();
                                    }
                                    if (contentProviderClientAcquireUnstableContentProviderClient != null) {
                                        contentProviderClientAcquireUnstableContentProviderClient.close();
                                    }
                                }
                            } catch (Throwable th2) {
                                cursor = cursorQuery;
                                th = th2;
                                try {
                                    AFg1gSDK.e$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, str + aFj1zSDK.getCurrencyIso4217Code.name() + " provider", th, false, false, false, false, 120, null);
                                    if (cursor != null) {
                                        cursor.close();
                                    }
                                    if (contentProviderClientAcquireUnstableContentProviderClient != null) {
                                        contentProviderClientAcquireUnstableContentProviderClient.close();
                                    }
                                } catch (Throwable th3) {
                                    if (cursor != null) {
                                        cursor.close();
                                    }
                                    if (contentProviderClientAcquireUnstableContentProviderClient != null) {
                                        contentProviderClientAcquireUnstableContentProviderClient.close();
                                    }
                                    throw th3;
                                }
                            }
                        } else {
                            AFg1gSDK.d$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, "Content provider returned no data", false, 4, null);
                            if (cursorQuery != null) {
                                cursorQuery.close();
                            }
                            if (contentProviderClientAcquireUnstableContentProviderClient != null) {
                                contentProviderClientAcquireUnstableContentProviderClient.close();
                            }
                        }
                    } catch (Throwable th4) {
                        th = th4;
                        cursor = null;
                    }
                }
            } catch (Throwable th5) {
                th = th5;
                th = th;
                cursor = null;
                contentProviderClientAcquireUnstableContentProviderClient = null;
                AFg1gSDK.e$default(AFLogger.INSTANCE, AFg1cSDK.META_REFERRER, str + aFj1zSDK.getCurrencyIso4217Code.name() + " provider", th, false, false, false, false, 120, null);
                if (cursor != null) {
                    cursor.close();
                }
                if (contentProviderClientAcquireUnstableContentProviderClient != null) {
                    contentProviderClientAcquireUnstableContentProviderClient.close();
                }
                aFj1zSDK.getMediationNetwork();
                aFj1zSDK.component3.run();
            }
        } catch (Throwable th6) {
            th = th6;
            str = "Error while collecting Meta Install Referrer for ";
        }
        aFj1zSDK.getMediationNetwork();
        aFj1zSDK.component3.run();
    }

    public /* synthetic */ class AFa1vSDK {
        public static final /* synthetic */ int[] getMonetizationNetwork;

        static {
            int[] iArr = new int[AFj1ySDK.values().length];
            try {
                iArr[AFj1ySDK.FACEBOOK.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[AFj1ySDK.INSTAGRAM.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[AFj1ySDK.FACEBOOK_LITE.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            getMonetizationNetwork = iArr;
        }
    }
}
