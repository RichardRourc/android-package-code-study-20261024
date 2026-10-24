package io.github.inflationx.viewpump;

import kotlin.Metadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: Interceptor.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(bv = {1, 0, 3}, d1 = {"\u0000\u0017\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000*\u0001\u0000\b\n\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H\u0016¨\u0006\u0006"}, d2 = {"io/github/inflationx/viewpump/Interceptor$Companion$invoke$1", "Lio/github/inflationx/viewpump/Interceptor;", "intercept", "Lio/github/inflationx/viewpump/InflateResult;", "chain", "Lio/github/inflationx/viewpump/Interceptor$Chain;", "viewpump_release"}, k = 1, mv = {1, 1, 13})
public final class Interceptor$Companion$invoke$1 implements Interceptor {
    final /* synthetic */ Function1 $block;

    public Interceptor$Companion$invoke$1(Function1 function1) {
        this.$block = function1;
    }

    @Override // io.github.inflationx.viewpump.Interceptor
    public InflateResult intercept(Interceptor.Chain chain) {
        Intrinsics.checkParameterIsNotNull(chain, "chain");
        return (InflateResult) this.$block.invoke(chain);
    }
}
