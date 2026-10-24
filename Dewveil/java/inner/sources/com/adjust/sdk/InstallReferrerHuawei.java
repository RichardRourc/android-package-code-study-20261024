package com.adjust.sdk;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes.dex */
public class InstallReferrerHuawei {
    private static final int COLUMN_INDEX_CLICK_TIME = 1;
    private static final int COLUMN_INDEX_INSTALL_TIME = 2;
    private static final int COLUMN_INDEX_REFERRER = 0;
    private static final int COLUMN_INDEX_TRACK_ID = 4;
    private static final String REFERRER_PROVIDER_AUTHORITY = "com.huawei.appmarket.commondata";
    private static final String REFERRER_PROVIDER_URI = "content://com.huawei.appmarket.commondata/item/5";
    private Context context;
    private final InstallReferrerReadListener referrerCallback;
    private ILogger logger = AdjustFactory.getLogger();
    private final AtomicBoolean shouldTryToRead = new AtomicBoolean(true);

    public InstallReferrerHuawei(Context context, InstallReferrerReadListener installReferrerReadListener) {
        this.context = context;
        this.referrerCallback = installReferrerReadListener;
    }

    private boolean isValidReferrerHuaweiAds(String str) {
        return (str == null || str.isEmpty()) ? false : true;
    }

    private boolean isValidReferrerHuaweiAppGallery(String str) {
        return (str == null || str.isEmpty()) ? false : true;
    }

    /* JADX WARN: Code duplicated, block: B:28:0x00cd A[PHI: r10
  0x00cd: PHI (r10v1 android.database.Cursor) = (r10v0 android.database.Cursor), (r10v2 android.database.Cursor) binds: [B:27:0x00cb, B:21:0x00b6] A[DONT_GENERATE, DONT_INLINE]] */
    public void readReferrer() {
        if (!this.shouldTryToRead.get()) {
            this.logger.debug("Should not try to read Install referrer Huawei", new Object[0]);
            return;
        }
        if (Util.resolveContentProvider(this.context, REFERRER_PROVIDER_AUTHORITY)) {
            Uri uri = Uri.parse(REFERRER_PROVIDER_URI);
            Cursor cursorQuery = null;
            try {
                try {
                    cursorQuery = this.context.getContentResolver().query(uri, null, null, new String[]{this.context.getPackageName()}, null);
                    if (cursorQuery == null || !cursorQuery.moveToFirst()) {
                        this.logger.debug("InstallReferrerHuawei fail to read referrer for package [%s] and content uri [%s]", this.context.getPackageName(), uri.toString());
                    } else {
                        String string = cursorQuery.getString(0);
                        String string2 = cursorQuery.getString(4);
                        this.logger.debug("InstallReferrerHuawei reads index_referrer[%s] index_track_id[%s]", string, string2);
                        String string3 = cursorQuery.getString(1);
                        String string4 = cursorQuery.getString(2);
                        this.logger.debug("InstallReferrerHuawei reads clickTime[%s] installTime[%s]", string3, string4);
                        long j = Long.parseLong(string3);
                        long j2 = Long.parseLong(string4);
                        if (isValidReferrerHuaweiAds(string)) {
                            this.referrerCallback.onInstallReferrerRead(new ReferrerDetails(string, j, j2), Constants.REFERRER_API_HUAWEI_ADS);
                        }
                        if (isValidReferrerHuaweiAppGallery(string2)) {
                            this.referrerCallback.onInstallReferrerRead(new ReferrerDetails(string2, j, j2), Constants.REFERRER_API_HUAWEI_APP_GALLERY);
                        }
                    }
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                } catch (Exception e) {
                    this.logger.debug("InstallReferrerHuawei error [%s]", e.getMessage());
                    if (0 != 0) {
                        cursorQuery.close();
                    }
                }
                this.shouldTryToRead.set(false);
            } catch (Throwable th) {
                if (0 != 0) {
                    cursorQuery.close();
                }
                throw th;
            }
        }
    }
}
