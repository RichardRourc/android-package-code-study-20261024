package io.github.inflationx.viewpump.internal;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import com.google.android.gms.measurement.api.AppMeasurementSdk;
import kotlin.Metadata;

/* JADX INFO: renamed from: io.github.inflationx.viewpump.internal.-ViewPumpActivityFactory, reason: invalid class name */
/* JADX INFO: compiled from: -ViewPumpActivityFactory.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(bv = {1, 0, 3}, d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b`\u0018\u00002\u00020\u0001J6\u0010\u0002\u001a\u0004\u0018\u00010\u00032\b\u0010\u0004\u001a\u0004\u0018\u00010\u00032\u0006\u0010\u0005\u001a\u00020\u00032\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u000bH&¨\u0006\f"}, d2 = {"Lio/github/inflationx/viewpump/internal/-ViewPumpActivityFactory;", "", "onActivityCreateView", "Landroid/view/View;", "parent", "view", AppMeasurementSdk.ConditionalUserProperty.NAME, "", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "viewpump_release"}, k = 1, mv = {1, 1, 13})
public interface ViewPumpActivityFactory {
    View onActivityCreateView(View parent, View view, String name, Context context, AttributeSet attrs);
}
