package io.github.inflationx.viewpump;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import com.fasterxml.jackson.databind.annotation.JsonPOJOBuilder;
import com.google.android.gms.measurement.api.AppMeasurementSdk;
import kotlin.Metadata;
import kotlin.jvm.JvmStatic;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InflateRequest.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(bv = {1, 0, 3}, d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0086\b\u0018\u0000 !2\u00020\u0001:\u0002 !B5\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t\u0012\u0006\u0010\n\u001a\u00020\u000b¢\u0006\u0002\u0010\fJ\t\u0010\u0012\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0013\u001a\u00020\u0005HÆ\u0003J\u000b\u0010\u0014\u001a\u0004\u0018\u00010\u0007HÆ\u0003J\u000b\u0010\u0015\u001a\u0004\u0018\u00010\tHÆ\u0003J\t\u0010\u0016\u001a\u00020\u000bHÆ\u0003J?\u0010\u0017\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t2\b\b\u0002\u0010\n\u001a\u00020\u000bHÆ\u0001J\u0013\u0010\u0018\u001a\u00020\u00192\b\u0010\u001a\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001b\u001a\u00020\u001cHÖ\u0001J\u0006\u0010\u001d\u001a\u00020\u001eJ\t\u0010\u001f\u001a\u00020\u0003HÖ\u0001R\u0015\u0010\u0006\u001a\u0004\u0018\u00010\u00078\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\rR\u0013\u0010\u0004\u001a\u00020\u00058\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0004\u0010\u000eR\u0013\u0010\n\u001a\u00020\u000b8\u0007¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000fR\u0013\u0010\u0002\u001a\u00020\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\u0010R\u0015\u0010\b\u001a\u0004\u0018\u00010\t8\u0007¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\u0011¨\u0006\""}, d2 = {"Lio/github/inflationx/viewpump/InflateRequest;", "", AppMeasurementSdk.ConditionalUserProperty.NAME, "", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "parent", "Landroid/view/View;", "fallbackViewCreator", "Lio/github/inflationx/viewpump/FallbackViewCreator;", "(Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;Landroid/view/View;Lio/github/inflationx/viewpump/FallbackViewCreator;)V", "()Landroid/util/AttributeSet;", "()Landroid/content/Context;", "()Lio/github/inflationx/viewpump/FallbackViewCreator;", "()Ljava/lang/String;", "()Landroid/view/View;", "component1", "component2", "component3", "component4", "component5", "copy", "equals", "", "other", "hashCode", "", "toBuilder", "Lio/github/inflationx/viewpump/InflateRequest$Builder;", "toString", "Builder", "Companion", "viewpump_release"}, k = 1, mv = {1, 1, 13})
public final /* data */ class InflateRequest {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final AttributeSet attrs;
    private final Context context;
    private final FallbackViewCreator fallbackViewCreator;
    private final String name;
    private final View parent;

    @JvmStatic
    public static final Builder builder() {
        return INSTANCE.builder();
    }

    public static /* synthetic */ InflateRequest copy$default(InflateRequest inflateRequest, String str, Context context, AttributeSet attributeSet, View view, FallbackViewCreator fallbackViewCreator, int i, Object obj) {
        if ((i & 1) != 0) {
            str = inflateRequest.name;
        }
        if ((i & 2) != 0) {
            context = inflateRequest.context;
        }
        Context context2 = context;
        if ((i & 4) != 0) {
            attributeSet = inflateRequest.attrs;
        }
        AttributeSet attributeSet2 = attributeSet;
        if ((i & 8) != 0) {
            view = inflateRequest.parent;
        }
        View view2 = view;
        if ((i & 16) != 0) {
            fallbackViewCreator = inflateRequest.fallbackViewCreator;
        }
        return inflateRequest.copy(str, context2, attributeSet2, view2, fallbackViewCreator);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getName() {
        return this.name;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final Context getContext() {
        return this.context;
    }

    public final AttributeSet component3() {
        return this.attrs;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final View getParent() {
        return this.parent;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final FallbackViewCreator getFallbackViewCreator() {
        return this.fallbackViewCreator;
    }

    public final InflateRequest copy(String name, Context context, AttributeSet attrs, View parent, FallbackViewCreator fallbackViewCreator) {
        Intrinsics.checkParameterIsNotNull(name, "name");
        Intrinsics.checkParameterIsNotNull(context, "context");
        Intrinsics.checkParameterIsNotNull(fallbackViewCreator, "fallbackViewCreator");
        return new InflateRequest(name, context, attrs, parent, fallbackViewCreator);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof InflateRequest)) {
            return false;
        }
        InflateRequest inflateRequest = (InflateRequest) other;
        return Intrinsics.areEqual(this.name, inflateRequest.name) && Intrinsics.areEqual(this.context, inflateRequest.context) && Intrinsics.areEqual(this.attrs, inflateRequest.attrs) && Intrinsics.areEqual(this.parent, inflateRequest.parent) && Intrinsics.areEqual(this.fallbackViewCreator, inflateRequest.fallbackViewCreator);
    }

    public int hashCode() {
        String str = this.name;
        int iHashCode = (str != null ? str.hashCode() : 0) * 31;
        Context context = this.context;
        int iHashCode2 = (iHashCode + (context != null ? context.hashCode() : 0)) * 31;
        AttributeSet attributeSet = this.attrs;
        int iHashCode3 = (iHashCode2 + (attributeSet != null ? attributeSet.hashCode() : 0)) * 31;
        View view = this.parent;
        int iHashCode4 = (iHashCode3 + (view != null ? view.hashCode() : 0)) * 31;
        FallbackViewCreator fallbackViewCreator = this.fallbackViewCreator;
        return iHashCode4 + (fallbackViewCreator != null ? fallbackViewCreator.hashCode() : 0);
    }

    public String toString() {
        return "InflateRequest(name=" + this.name + ", context=" + this.context + ", attrs=" + this.attrs + ", parent=" + this.parent + ", fallbackViewCreator=" + this.fallbackViewCreator + ")";
    }

    public InflateRequest(String name, Context context, AttributeSet attributeSet, View view, FallbackViewCreator fallbackViewCreator) {
        Intrinsics.checkParameterIsNotNull(name, "name");
        Intrinsics.checkParameterIsNotNull(context, "context");
        Intrinsics.checkParameterIsNotNull(fallbackViewCreator, "fallbackViewCreator");
        this.name = name;
        this.context = context;
        this.attrs = attributeSet;
        this.parent = view;
        this.fallbackViewCreator = fallbackViewCreator;
    }

    public final String name() {
        return this.name;
    }

    public final Context context() {
        return this.context;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    public /* synthetic */ InflateRequest(String str, Context context, AttributeSet attributeSet, View view, FallbackViewCreator fallbackViewCreator, int i, DefaultConstructorMarker defaultConstructorMarker) {
        AttributeSet attributeSet2;
        View view2;
        if ((i & 4) != 0) {
            attributeSet2 = null;
        } else {
            attributeSet2 = attributeSet;
        }
        if ((i & 8) != 0) {
            view2 = null;
        } else {
            view2 = view;
        }
        this(str, context, attributeSet2, view2, fallbackViewCreator);
    }

    /* JADX INFO: renamed from: attrs, reason: from getter */
    public final AttributeSet getAttrs() {
        return this.attrs;
    }

    public final View parent() {
        return this.parent;
    }

    public final FallbackViewCreator fallbackViewCreator() {
        return this.fallbackViewCreator;
    }

    public final Builder toBuilder() {
        return new Builder(this);
    }

    /* JADX INFO: compiled from: InflateRequest.kt */
    @Metadata(bv = {1, 0, 3}, d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0010¢\u0006\u0002\u0010\u0002B\u000f\b\u0010\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0002\u0010\u0005J\u0010\u0010\u0006\u001a\u00020\u00002\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007J\u0006\u0010\u0010\u001a\u00020\u0004J\u000e\u0010\b\u001a\u00020\u00002\u0006\u0010\b\u001a\u00020\tJ\u000e\u0010\n\u001a\u00020\u00002\u0006\u0010\n\u001a\u00020\u000bJ\u000e\u0010\f\u001a\u00020\u00002\u0006\u0010\f\u001a\u00020\rJ\u0010\u0010\u000e\u001a\u00020\u00002\b\u0010\u000e\u001a\u0004\u0018\u00010\u000fR\u0010\u0010\u0006\u001a\u0004\u0018\u00010\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\b\u001a\u0004\u0018\u00010\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\f\u001a\u0004\u0018\u00010\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u000e\u001a\u0004\u0018\u00010\u000fX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lio/github/inflationx/viewpump/InflateRequest$Builder;", "", "()V", "request", "Lio/github/inflationx/viewpump/InflateRequest;", "(Lio/github/inflationx/viewpump/InflateRequest;)V", "attrs", "Landroid/util/AttributeSet;", "context", "Landroid/content/Context;", "fallbackViewCreator", "Lio/github/inflationx/viewpump/FallbackViewCreator;", AppMeasurementSdk.ConditionalUserProperty.NAME, "", "parent", "Landroid/view/View;", JsonPOJOBuilder.DEFAULT_BUILD_METHOD, "viewpump_release"}, k = 1, mv = {1, 1, 13})
    public static final class Builder {
        private AttributeSet attrs;
        private Context context;
        private FallbackViewCreator fallbackViewCreator;
        private String name;
        private View parent;

        public Builder() {
        }

        public Builder(InflateRequest request) {
            Intrinsics.checkParameterIsNotNull(request, "request");
            this.name = request.name();
            this.context = request.context();
            this.attrs = request.getAttrs();
            this.parent = request.parent();
            this.fallbackViewCreator = request.fallbackViewCreator();
        }

        public final Builder name(String name) {
            Intrinsics.checkParameterIsNotNull(name, "name");
            this.name = name;
            return this;
        }

        public final Builder context(Context context) {
            Intrinsics.checkParameterIsNotNull(context, "context");
            this.context = context;
            return this;
        }

        public final Builder attrs(AttributeSet attrs) {
            this.attrs = attrs;
            return this;
        }

        public final Builder parent(View parent) {
            this.parent = parent;
            return this;
        }

        public final Builder fallbackViewCreator(FallbackViewCreator fallbackViewCreator) {
            Intrinsics.checkParameterIsNotNull(fallbackViewCreator, "fallbackViewCreator");
            this.fallbackViewCreator = fallbackViewCreator;
            return this;
        }

        public final InflateRequest build() {
            String str = this.name;
            if (str == null) {
                throw new IllegalStateException("name == null");
            }
            Context context = this.context;
            if (context == null) {
                throw new IllegalStateException("context == null");
            }
            AttributeSet attributeSet = this.attrs;
            View view = this.parent;
            FallbackViewCreator fallbackViewCreator = this.fallbackViewCreator;
            if (fallbackViewCreator != null) {
                return new InflateRequest(str, context, attributeSet, view, fallbackViewCreator);
            }
            throw new IllegalStateException("fallbackViewCreator == null");
        }
    }

    /* JADX INFO: compiled from: InflateRequest.kt */
    @Metadata(bv = {1, 0, 3}, d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\b\u0010\u0003\u001a\u00020\u0004H\u0007¨\u0006\u0005"}, d2 = {"Lio/github/inflationx/viewpump/InflateRequest$Companion;", "", "()V", "builder", "Lio/github/inflationx/viewpump/InflateRequest$Builder;", "viewpump_release"}, k = 1, mv = {1, 1, 13})
    public static final class Companion {
        private Companion() {
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @JvmStatic
        public final Builder builder() {
            return new Builder();
        }
    }
}
