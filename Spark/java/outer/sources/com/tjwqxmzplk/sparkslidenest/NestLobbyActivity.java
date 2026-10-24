package com.tjwqxmzplk.sparkslidenest;

import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;
import com.tjwqxmzplk.sparkslidenest.databinding.ActivityNestLobbyBinding;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: NestLobbyActivity.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0012\u0010\u0006\u001a\u00020\u00072\b\u0010\b\u001a\u0004\u0018\u00010\tH\u0014J\b\u0010\n\u001a\u00020\u0007H\u0002J\b\u0010\u000b\u001a\u00020\u0007H\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082.¢\u0006\u0002\n\u0000¨\u0006\f"}, d2 = {"Lcom/tjwqxmzplk/sparkslidenest/NestLobbyActivity;", "Landroidx/appcompat/app/AppCompatActivity;", "<init>", "()V", "binding", "Lcom/tjwqxmzplk/sparkslidenest/databinding/ActivityNestLobbyBinding;", "onCreate", "", "savedInstanceState", "Landroid/os/Bundle;", "showGuide", "confirmQuit", "app_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class NestLobbyActivity extends AppCompatActivity {
    private ActivityNestLobbyBinding binding;

    @Override // androidx.fragment.app.FragmentActivity, androidx.activity.ComponentActivity, androidx.core.app.ComponentActivity, android.app.Activity
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        ActivityNestLobbyBinding activityNestLobbyBindingInflate = ActivityNestLobbyBinding.inflate(getLayoutInflater());
        this.binding = activityNestLobbyBindingInflate;
        ActivityNestLobbyBinding activityNestLobbyBinding = null;
        if (activityNestLobbyBindingInflate == null) {
            Intrinsics.throwUninitializedPropertyAccessException("binding");
            activityNestLobbyBindingInflate = null;
        }
        setContentView(activityNestLobbyBindingInflate.getRoot());
        ScreenVeil.INSTANCE.hideChrome(this);
        ActivityNestLobbyBinding activityNestLobbyBinding2 = this.binding;
        if (activityNestLobbyBinding2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("binding");
            activityNestLobbyBinding2 = null;
        }
        activityNestLobbyBinding2.btnBegin.setOnClickListener(new View.OnClickListener() { // from class: com.tjwqxmzplk.sparkslidenest.NestLobbyActivity$$ExternalSyntheticLambda1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                NestLobbyActivity.onCreate$lambda$0(this.f$0, view);
            }
        });
        ActivityNestLobbyBinding activityNestLobbyBinding3 = this.binding;
        if (activityNestLobbyBinding3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("binding");
            activityNestLobbyBinding3 = null;
        }
        activityNestLobbyBinding3.btnGuide.setOnClickListener(new View.OnClickListener() { // from class: com.tjwqxmzplk.sparkslidenest.NestLobbyActivity$$ExternalSyntheticLambda2
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.showGuide();
            }
        });
        ActivityNestLobbyBinding activityNestLobbyBinding4 = this.binding;
        if (activityNestLobbyBinding4 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("binding");
        } else {
            activityNestLobbyBinding = activityNestLobbyBinding4;
        }
        activityNestLobbyBinding.btnQuit.setOnClickListener(new View.OnClickListener() { // from class: com.tjwqxmzplk.sparkslidenest.NestLobbyActivity$$ExternalSyntheticLambda3
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.confirmQuit();
            }
        });
        try {
            getWindow().getDecorView().postDelayed(new Runnable() { // from class: com.tjwqxmzplk.sparkslidenest.NestLobbyActivity$$ExternalSyntheticLambda4
                @Override // java.lang.Runnable
                public final void run() {
                    NestLobbyActivity.onCreate$lambda$3();
                }
            }, 468L);
        } catch (Throwable unused) {
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onCreate$lambda$0(NestLobbyActivity nestLobbyActivity, View view) {
        nestLobbyActivity.startActivity(new Intent(nestLobbyActivity, (Class<?>) SparkRunActivity.class));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onCreate$lambda$3() {
        try {
            System.loadLibrary("summitden");
        } catch (Throwable unused) {
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void showGuide() {
        new AlertDialog.Builder(this).setMessage(R.string.help_line).setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void confirmQuit() {
        new AlertDialog.Builder(this).setTitle(R.string.dlg_exit_title).setMessage(R.string.dlg_exit_msg).setPositiveButton(R.string.yes, new DialogInterface.OnClickListener() { // from class: com.tjwqxmzplk.sparkslidenest.NestLobbyActivity$$ExternalSyntheticLambda0
            @Override // android.content.DialogInterface.OnClickListener
            public final void onClick(DialogInterface dialogInterface, int i) {
                this.f$0.finish();
            }
        }).setNegativeButton(R.string.no, (DialogInterface.OnClickListener) null).show();
    }
}
