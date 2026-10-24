package com.appsflyer.internal;

import com.android.billingclient.BuildConfig;
import java.lang.reflect.Field;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes.dex */
public final class AFj1gSDK implements AFj1hSDK {
    @Override // com.appsflyer.internal.AFj1hSDK
    public final String getRevenue() {
        Object objM126constructorimpl;
        try {
            Result.Companion companion = Result.INSTANCE;
            AFj1gSDK aFj1gSDK = this;
            Field declaredField = BuildConfig.class.getDeclaredField("VERSION_NAME");
            declaredField.setAccessible(true);
            Object obj = declaredField.get(null);
            Intrinsics.checkNotNull(obj, "");
            objM126constructorimpl = Result.m126constructorimpl((String) obj);
        } catch (Throwable th) {
            Result.Companion companion2 = Result.INSTANCE;
            objM126constructorimpl = Result.m126constructorimpl(ResultKt.createFailure(th));
        }
        return (String) (Result.m132isFailureimpl(objM126constructorimpl) ? "" : objM126constructorimpl);
    }
}
