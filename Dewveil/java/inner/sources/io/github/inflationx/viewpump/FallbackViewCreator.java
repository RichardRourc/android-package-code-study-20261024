package io.github.inflationx.viewpump;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import com.google.android.gms.measurement.api.AppMeasurementSdk;
import kotlin.Metadata;

/* JADX INFO: compiled from: FallbackViewCreator.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(bv = {1, 0, 3}, d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\bf\u0018\u00002\u00020\u0001J.\u0010\u0002\u001a\u0004\u0018\u00010\u00032\b\u0010\u0004\u001a\u0004\u0018\u00010\u00032\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\b2\b\u0010\t\u001a\u0004\u0018\u00010\nH&¨\u0006\u000b"}, d2 = {"Lio/github/inflationx/viewpump/FallbackViewCreator;", "", "onCreateView", "Landroid/view/View;", "parent", AppMeasurementSdk.ConditionalUserProperty.NAME, "", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "viewpump_release"}, k = 1, mv = {1, 1, 13})
public interface FallbackViewCreator {
    View onCreateView(View parent, String name, Context context, AttributeSet attrs);
}
