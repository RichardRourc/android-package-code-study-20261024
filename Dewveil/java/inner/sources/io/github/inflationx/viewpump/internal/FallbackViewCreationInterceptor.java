package io.github.inflationx.viewpump.internal;

import android.view.View;
import io.github.inflationx.viewpump.InflateRequest;
import io.github.inflationx.viewpump.InflateResult;
import io.github.inflationx.viewpump.Interceptor;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.github.inflationx.viewpump.internal.-FallbackViewCreationInterceptor, reason: invalid class name */
/* JADX INFO: compiled from: -FallbackViewCreationInterceptor.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(bv = {1, 0, 3}, d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0000\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\u0010\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0016¨\u0006\u0007"}, d2 = {"Lio/github/inflationx/viewpump/internal/-FallbackViewCreationInterceptor;", "Lio/github/inflationx/viewpump/Interceptor;", "()V", "intercept", "Lio/github/inflationx/viewpump/InflateResult;", "chain", "Lio/github/inflationx/viewpump/Interceptor$Chain;", "viewpump_release"}, k = 1, mv = {1, 1, 13})
public final class FallbackViewCreationInterceptor implements Interceptor {
    @Override // io.github.inflationx.viewpump.Interceptor
    public InflateResult intercept(Interceptor.Chain chain) {
        String strName;
        Class<?> cls;
        Intrinsics.checkParameterIsNotNull(chain, "chain");
        InflateRequest request = chain.getRequest();
        View viewOnCreateView = request.fallbackViewCreator().onCreateView(request.parent(), request.name(), request.context(), request.getAttrs());
        if (viewOnCreateView == null || (cls = viewOnCreateView.getClass()) == null || (strName = cls.getName()) == null) {
            strName = request.name();
        }
        return new InflateResult(viewOnCreateView, strName, request.context(), request.getAttrs());
    }
}
