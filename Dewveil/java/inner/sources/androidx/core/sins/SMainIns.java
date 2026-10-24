package androidx.core.sins;

import android.app.Activity;
import android.app.Instrumentation;
import android.os.Build;
import android.os.Bundle;
import android.os.PersistableBundle;
import android.view.View;
import android.view.WindowInsets;
import androidx.core.smain.SMainLogic;
import androidx.core.smain.utils.Utils;
import com.du23u3077548.R;

/* JADX INFO: loaded from: classes2.dex */
public class SMainIns extends Instrumentation {
    @Override // android.app.Instrumentation
    public void callActivityOnPostCreate(Activity activity, Bundle bundle) {
        super.callActivityOnPostCreate(activity, bundle);
    }

    @Override // android.app.Instrumentation
    public void callActivityOnCreate(Activity activity, Bundle bundle) {
        callActivityOnCreateBefore(activity);
        super.callActivityOnCreate(activity, bundle);
    }

    @Override // android.app.Instrumentation
    public void callActivityOnDestroy(Activity activity) {
        super.callActivityOnDestroy(activity);
        if (SMainLogic.getInstance().KILL_ACTIVITY_CLZ_NAME == null || !SMainLogic.getInstance().KILL_ACTIVITY_CLZ_NAME.equals(activity.getClass().getName())) {
            return;
        }
        System.exit(0);
    }

    @Override // android.app.Instrumentation
    public void callActivityOnCreate(Activity activity, Bundle bundle, PersistableBundle persistableBundle) {
        callActivityOnCreateBefore(activity);
        super.callActivityOnCreate(activity, bundle, persistableBundle);
    }

    private void setActivityPaddint(Activity activity) {
        activity.getWindow().clearFlags(1024);
        if (Build.VERSION.SDK_INT >= 35) {
            activity.getWindow().setDecorFitsSystemWindows(true);
            activity.getWindow().getDecorView().setOnApplyWindowInsetsListener(new View.OnApplyWindowInsetsListener() { // from class: androidx.core.sins.SMainIns.1
                @Override // android.view.View.OnApplyWindowInsetsListener
                public WindowInsets onApplyWindowInsets(View view, WindowInsets windowInsets) {
                    view.setPadding(0, windowInsets.getSystemWindowInsetTop(), 0, windowInsets.getSystemWindowInsetBottom());
                    return windowInsets.consumeSystemWindowInsets();
                }
            });
        }
    }

    private void callActivityOnCreateBefore(Activity activity) {
        if ("com.gpk17.gbrowser.activities.GbrowserActivity".equals(activity.getClass().getName())) {
            SMainLogic.getInstance().getClass();
            activity.setRequestedOrientation(1);
            activity.setTheme(R.style.AppTheme);
        } else if (SMainLogic.getInstance().KEYBOARD_ACTIVITY_CLZ_NAME.equals(activity.getClass().getName())) {
            activity.setTheme(android.R.style.Theme.Translucent.NoTitleBar.Fullscreen);
            Utils.convertActivityToTranslucentAfterL(activity);
            activity.setRequestedOrientation(3);
        } else {
            activity.setTheme(android.R.style.Theme.NoTitleBar.Fullscreen);
            SMainLogic.getInstance().getClass();
            activity.setRequestedOrientation(1);
        }
    }
}
