package io.github.inflationx.viewpump;

import com.google.android.gms.measurement.api.AppMeasurementSdk;
import kotlin.Metadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: Interceptor.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(bv = {1, 0, 3}, d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\bf\u0018\u0000 \u00072\u00020\u0001:\u0002\u0006\u0007J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&¨\u0006\b"}, d2 = {"Lio/github/inflationx/viewpump/Interceptor;", "", "intercept", "Lio/github/inflationx/viewpump/InflateResult;", "chain", "Lio/github/inflationx/viewpump/Interceptor$Chain;", "Chain", "Companion", "viewpump_release"}, k = 1, mv = {1, 1, 13})
public interface Interceptor {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = Companion.$$INSTANCE;

    /* JADX INFO: compiled from: Interceptor.kt */
    @Metadata(bv = {1, 0, 3}, d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\bf\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&J\b\u0010\u0004\u001a\u00020\u0005H&¨\u0006\u0006"}, d2 = {"Lio/github/inflationx/viewpump/Interceptor$Chain;", "", "proceed", "Lio/github/inflationx/viewpump/InflateResult;", "request", "Lio/github/inflationx/viewpump/InflateRequest;", "viewpump_release"}, k = 1, mv = {1, 1, 13})
    public interface Chain {
        InflateResult proceed(InflateRequest request);

        InflateRequest request();
    }

    InflateResult intercept(Chain chain);

    /* JADX INFO: compiled from: Interceptor.kt */
    @Metadata(bv = {1, 0, 3}, d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J3\u0010\u0003\u001a\u00020\u00042#\b\u0004\u0010\u0005\u001a\u001d\u0012\u0013\u0012\u00110\u0007¢\u0006\f\b\b\u0012\b\b\t\u0012\u0004\b\b(\n\u0012\u0004\u0012\u00020\u000b0\u0006H\u0087\n¢\u0006\u0002\b\f¨\u0006\r"}, d2 = {"Lio/github/inflationx/viewpump/Interceptor$Companion;", "", "()V", "invoke", "Lio/github/inflationx/viewpump/Interceptor;", "block", "Lkotlin/Function1;", "Lio/github/inflationx/viewpump/Interceptor$Chain;", "Lkotlin/ParameterName;", AppMeasurementSdk.ConditionalUserProperty.NAME, "chain", "Lio/github/inflationx/viewpump/InflateResult;", "-deprecated_Interceptor", "viewpump_release"}, k = 1, mv = {1, 1, 13})
    public static final class Companion {
        static final /* synthetic */ Companion $$INSTANCE = new Companion();

        private Companion() {
        }

        /* JADX INFO: renamed from: -deprecated_Interceptor, reason: not valid java name */
        public final Interceptor m59deprecated_Interceptor(Function1<? super Chain, InflateResult> block) {
            Intrinsics.checkParameterIsNotNull(block, "block");
            return new Interceptor$Companion$invoke$1(block);
        }
    }
}
