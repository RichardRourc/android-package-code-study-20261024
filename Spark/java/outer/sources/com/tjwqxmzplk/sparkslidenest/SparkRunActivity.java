package com.tjwqxmzplk.sparkslidenest;

import android.content.DialogInterface;
import android.os.Bundle;
import android.view.View;
import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;
import com.tjwqxmzplk.sparkslidenest.databinding.ActivitySparkRunBinding;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SparkRunActivity.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\u0003\u0018\u00002\u00020\u00012\u00020\u0002B\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\u0012\u0010\t\u001a\u00020\n2\b\u0010\u000b\u001a\u0004\u0018\u00010\fH\u0014J\b\u0010\r\u001a\u00020\nH\u0014J\b\u0010\u000e\u001a\u00020\nH\u0014J\b\u0010\u000f\u001a\u00020\nH\u0002J\u0010\u0010\u0010\u001a\u00020\n2\u0006\u0010\u0011\u001a\u00020\u0012H\u0016J\u0018\u0010\u0013\u001a\u00020\n2\u0006\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0014\u001a\u00020\u0012H\u0016R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"Lcom/tjwqxmzplk/sparkslidenest/SparkRunActivity;", "Landroidx/appcompat/app/AppCompatActivity;", "Lcom/tjwqxmzplk/sparkslidenest/BarrierCanvas$ArenaSink;", "<init>", "()V", "binding", "Lcom/tjwqxmzplk/sparkslidenest/databinding/ActivitySparkRunBinding;", "paused", "", "onCreate", "", "savedInstanceState", "Landroid/os/Bundle;", "onResume", "onPause", "openHaltSheet", "onMarksChanged", "marks", "", "onArenaEnded", "peak", "app_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class SparkRunActivity extends AppCompatActivity implements BarrierCanvas.ArenaSink {
    private ActivitySparkRunBinding binding;
    private boolean paused;

    @Override // androidx.fragment.app.FragmentActivity, androidx.activity.ComponentActivity, androidx.core.app.ComponentActivity, android.app.Activity
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        ActivitySparkRunBinding activitySparkRunBindingInflate = ActivitySparkRunBinding.inflate(getLayoutInflater());
        this.binding = activitySparkRunBindingInflate;
        ActivitySparkRunBinding activitySparkRunBinding = null;
        if (activitySparkRunBindingInflate == null) {
            Intrinsics.throwUninitializedPropertyAccessException("binding");
            activitySparkRunBindingInflate = null;
        }
        setContentView(activitySparkRunBindingInflate.getRoot());
        ScreenVeil.INSTANCE.hideChrome(this);
        ActivitySparkRunBinding activitySparkRunBinding2 = this.binding;
        if (activitySparkRunBinding2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("binding");
            activitySparkRunBinding2 = null;
        }
        activitySparkRunBinding2.fieldPane.setArenaSink(this);
        ActivitySparkRunBinding activitySparkRunBinding3 = this.binding;
        if (activitySparkRunBinding3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("binding");
        } else {
            activitySparkRunBinding = activitySparkRunBinding3;
        }
        activitySparkRunBinding.btnHalt.setOnClickListener(new View.OnClickListener() { // from class: com.tjwqxmzplk.sparkslidenest.SparkRunActivity$$ExternalSyntheticLambda0
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.openHaltSheet();
            }
        });
    }

    @Override // androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onResume() {
        super.onResume();
        ScreenVeil.INSTANCE.hideChrome(this);
        if (this.paused) {
            return;
        }
        ActivitySparkRunBinding activitySparkRunBinding = this.binding;
        if (activitySparkRunBinding == null) {
            Intrinsics.throwUninitializedPropertyAccessException("binding");
            activitySparkRunBinding = null;
        }
        activitySparkRunBinding.fieldPane.startPulse();
    }

    @Override // androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onPause() {
        ActivitySparkRunBinding activitySparkRunBinding = this.binding;
        if (activitySparkRunBinding == null) {
            Intrinsics.throwUninitializedPropertyAccessException("binding");
            activitySparkRunBinding = null;
        }
        activitySparkRunBinding.fieldPane.stopPulse();
        super.onPause();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void openHaltSheet() {
        this.paused = true;
        ActivitySparkRunBinding activitySparkRunBinding = this.binding;
        if (activitySparkRunBinding == null) {
            Intrinsics.throwUninitializedPropertyAccessException("binding");
            activitySparkRunBinding = null;
        }
        activitySparkRunBinding.fieldPane.stopPulse();
        new AlertDialog.Builder(this).setTitle(R.string.pause_title).setItems(new String[]{getString(R.string.restart), getString(R.string.resume), getString(R.string.exit_game)}, new DialogInterface.OnClickListener() { // from class: com.tjwqxmzplk.sparkslidenest.SparkRunActivity$$ExternalSyntheticLambda2
            @Override // android.content.DialogInterface.OnClickListener
            public final void onClick(DialogInterface dialogInterface, int i) {
                SparkRunActivity.openHaltSheet$lambda$1(this.f$0, dialogInterface, i);
            }
        }).setCancelable(false).show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void openHaltSheet$lambda$1(SparkRunActivity sparkRunActivity, DialogInterface dialogInterface, int i) {
        ActivitySparkRunBinding activitySparkRunBinding = null;
        if (i != 0) {
            if (i != 1) {
                if (i != 2) {
                    return;
                }
                sparkRunActivity.finish();
                return;
            } else {
                sparkRunActivity.paused = false;
                ActivitySparkRunBinding activitySparkRunBinding2 = sparkRunActivity.binding;
                if (activitySparkRunBinding2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("binding");
                } else {
                    activitySparkRunBinding = activitySparkRunBinding2;
                }
                activitySparkRunBinding.fieldPane.startPulse();
                return;
            }
        }
        sparkRunActivity.paused = false;
        ActivitySparkRunBinding activitySparkRunBinding3 = sparkRunActivity.binding;
        if (activitySparkRunBinding3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("binding");
            activitySparkRunBinding3 = null;
        }
        activitySparkRunBinding3.fieldPane.freshRun();
        ActivitySparkRunBinding activitySparkRunBinding4 = sparkRunActivity.binding;
        if (activitySparkRunBinding4 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("binding");
        } else {
            activitySparkRunBinding = activitySparkRunBinding4;
        }
        activitySparkRunBinding.fieldPane.startPulse();
    }

    @Override // com.tjwqxmzplk.sparkslidenest.BarrierCanvas.ArenaSink
    public void onMarksChanged(int marks) {
        ActivitySparkRunBinding activitySparkRunBinding = this.binding;
        if (activitySparkRunBinding == null) {
            Intrinsics.throwUninitializedPropertyAccessException("binding");
            activitySparkRunBinding = null;
        }
        activitySparkRunBinding.txtMarks.setText(getString(R.string.hud_score, new Object[]{Integer.valueOf(marks)}));
    }

    @Override // com.tjwqxmzplk.sparkslidenest.BarrierCanvas.ArenaSink
    public void onArenaEnded(int marks, int peak) {
        this.paused = true;
        ActivitySparkRunBinding activitySparkRunBinding = this.binding;
        if (activitySparkRunBinding == null) {
            Intrinsics.throwUninitializedPropertyAccessException("binding");
            activitySparkRunBinding = null;
        }
        activitySparkRunBinding.fieldPane.stopPulse();
        new AlertDialog.Builder(this).setTitle(R.string.over_title).setMessage(getString(R.string.score_label, new Object[]{Integer.valueOf(marks)}) + "\n" + getString(R.string.best_label, new Object[]{Integer.valueOf(peak)})).setPositiveButton(R.string.back_main, new DialogInterface.OnClickListener() { // from class: com.tjwqxmzplk.sparkslidenest.SparkRunActivity$$ExternalSyntheticLambda1
            @Override // android.content.DialogInterface.OnClickListener
            public final void onClick(DialogInterface dialogInterface, int i) {
                this.f$0.finish();
            }
        }).setCancelable(false).show();
    }
}
