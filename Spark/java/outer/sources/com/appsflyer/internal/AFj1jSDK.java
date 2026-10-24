package com.appsflyer.internal;

import android.content.Intent;
import android.os.Parcelable;
import com.appsflyer.AFLogger;
import java.util.ConcurrentModificationException;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.collections.ArraysKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;

/* JADX INFO: loaded from: classes.dex */
public final class AFj1jSDK {
    final Intent getCurrencyIso4217Code;

    public AFj1jSDK(Intent intent) {
        Intrinsics.checkNotNullParameter(intent, "");
        this.getCurrencyIso4217Code = intent;
    }

    public final <T extends Parcelable> T H_(final String str) {
        Intrinsics.checkNotNullParameter(str, "");
        return (T) getMonetizationNetwork(new Function0<T>() { // from class: com.appsflyer.internal.AFj1jSDK.1
            /* JADX WARN: Incorrect return type in method signature: ()TT; */
            @Override // kotlin.jvm.functions.Function0
            /* JADX INFO: renamed from: J_, reason: merged with bridge method [inline-methods] */
            public final Parcelable invoke() {
                return AFj1jSDK.this.getCurrencyIso4217Code.getParcelableExtra(str);
            }

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }
        }, "Error while trying to read " + str + " extra from intent", null, true);
    }

    public final String getRevenue(final String str) {
        Intrinsics.checkNotNullParameter(str, "");
        return (String) getMonetizationNetwork(new Function0<String>() { // from class: com.appsflyer.internal.AFj1jSDK.2
            @Override // kotlin.jvm.functions.Function0
            /* JADX INFO: renamed from: getMediationNetwork, reason: merged with bridge method [inline-methods] */
            public final String invoke() {
                return AFj1jSDK.this.getCurrencyIso4217Code.getStringExtra(str);
            }

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }
        }, "Error while trying to read " + str + " extra from intent", null, true);
    }

    public final boolean getMonetizationNetwork(final String str) {
        Intrinsics.checkNotNullParameter(str, "");
        Boolean bool = (Boolean) getMonetizationNetwork(new Function0<Boolean>() { // from class: com.appsflyer.internal.AFj1jSDK.5
            @Override // kotlin.jvm.functions.Function0
            /* JADX INFO: renamed from: getCurrencyIso4217Code, reason: merged with bridge method [inline-methods] */
            public final Boolean invoke() {
                return Boolean.valueOf(AFj1jSDK.this.getCurrencyIso4217Code.hasExtra(str));
            }

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }
        }, "Error while trying to check presence of " + str + " extra from intent", Boolean.TRUE, true);
        if (bool != null) {
            return bool.booleanValue();
        }
        return true;
    }

    public final Intent I_(final String str, final long j) {
        Intrinsics.checkNotNullParameter(str, "");
        return (Intent) getMonetizationNetwork(new Function0<Intent>() { // from class: com.appsflyer.internal.AFj1jSDK.3
            @Override // kotlin.jvm.functions.Function0
            /* JADX INFO: renamed from: K_, reason: merged with bridge method [inline-methods] */
            public final Intent invoke() {
                return AFj1jSDK.this.getCurrencyIso4217Code.putExtra(str, j);
            }

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }
        }, "Error while trying to write " + str + " extra to intent", null, true);
    }

    private final <T> T getMonetizationNetwork(Function0<? extends T> function0, String str, T t, boolean z) {
        Object objM126constructorimpl;
        Object objM126constructorimpl2;
        Object monetizationNetwork;
        synchronized (this.getCurrencyIso4217Code) {
            try {
                Result.Companion companion = Result.INSTANCE;
                AFj1jSDK aFj1jSDK = this;
                objM126constructorimpl = Result.m126constructorimpl(function0.invoke());
            } catch (Throwable th) {
                Result.Companion companion2 = Result.INSTANCE;
                objM126constructorimpl = Result.m126constructorimpl(ResultKt.createFailure(th));
            }
            KClass[] kClassArr = {Reflection.getOrCreateKotlinClass(ConcurrentModificationException.class), Reflection.getOrCreateKotlinClass(ArrayIndexOutOfBoundsException.class)};
            Throwable thM129exceptionOrNullimpl = Result.m129exceptionOrNullimpl(objM126constructorimpl);
            if (thM129exceptionOrNullimpl != null) {
                try {
                    Result.Companion companion3 = Result.INSTANCE;
                    if (ArraysKt.contains(kClassArr, Reflection.getOrCreateKotlinClass(thM129exceptionOrNullimpl.getClass()))) {
                        if (z) {
                            monetizationNetwork = getMonetizationNetwork(function0, str, t, false);
                        } else {
                            AFLogger.afErrorLog(str, thM129exceptionOrNullimpl, false, false);
                            monetizationNetwork = t;
                        }
                        objM126constructorimpl2 = Result.m126constructorimpl(monetizationNetwork);
                        objM126constructorimpl = objM126constructorimpl2;
                    } else {
                        throw thM129exceptionOrNullimpl;
                    }
                } catch (Throwable th2) {
                    Result.Companion companion4 = Result.INSTANCE;
                    objM126constructorimpl2 = Result.m126constructorimpl(ResultKt.createFailure(th2));
                }
            }
            Throwable thM129exceptionOrNullimpl2 = Result.m129exceptionOrNullimpl(objM126constructorimpl);
            if (thM129exceptionOrNullimpl2 == null) {
                t = (T) objM126constructorimpl;
            } else {
                AFLogger.afErrorLog(str, thM129exceptionOrNullimpl2, false, false);
            }
        }
        return t;
    }
}
