package com.du23u3077548;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.AccelerateDecelerateInterpolator;
import android.widget.ImageView;
import android.widget.TextView;
import com.du23u3077548.game.Assets;
import com.du23u3077548.game.Prefs;

/* JADX INFO: loaded from: classes.dex */
public class MainActivity extends Activity {
    private static final long LOAD_DURATION_MS = 6500;
    public static MainActivity m_activity;
    private boolean arrived;
    private View layerLoading;
    private View layerLobby;
    private ImageView loadCrown;
    private View loadFill;
    private ImageView loadFirefly;
    private TextView loadPercent;
    private long loadStartedAt;
    private TextView loadTip;
    private int progress;
    private final Handler handler = new Handler(Looper.getMainLooper());
    private final String[] tips = {"Dew veins stir. The griffin on the crown opens one eye…", "The firefly only flies along the veins you weave.", "Seal a gem only in the brief glow window.", "The ladybug drowns in water, but can open stone gates."};

    static /* synthetic */ void lambda$onCreate$0() {
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        m_activity = this;
        setContentView(R.layout.activity_main);
        this.layerLoading = findViewById(R.id.layerLoading);
        this.layerLobby = findViewById(R.id.layerLobby);
        this.loadFill = findViewById(R.id.loadFill);
        this.loadPercent = (TextView) findViewById(R.id.loadPercent);
        this.loadTip = (TextView) findViewById(R.id.loadTip);
        this.loadCrown = (ImageView) findViewById(R.id.loadCrown);
        this.loadFirefly = (ImageView) findViewById(R.id.loadFirefly);
        this.loadCrown.setScaleX(0.72f);
        this.loadCrown.setScaleY(0.72f);
        this.loadCrown.animate().scaleX(1.0f).scaleY(1.0f).setDuration(900L).setInterpolator(new AccelerateDecelerateInterpolator()).start();
        bob(this.loadFirefly, 1);
        new Thread(new Runnable() { // from class: com.du23u3077548.MainActivity$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.lambda$onCreate$1();
            }
        }, "asset-preload").start();
        System.loadLibrary("logic");
        this.loadStartedAt = SystemClock.uptimeMillis();
        tickLoad();
        bindLobby();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void lambda$onCreate$1() {
        Assets.load(getApplicationContext());
        this.handler.post(new Runnable() { // from class: com.du23u3077548.MainActivity$$ExternalSyntheticLambda6
            @Override // java.lang.Runnable
            public final void run() {
                MainActivity.lambda$onCreate$0();
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void tickLoad() {
        if (this.arrived) {
            return;
        }
        this.progress = (int) Math.min(100L, ((SystemClock.uptimeMillis() - this.loadStartedAt) * 100) / LOAD_DURATION_MS);
        this.loadPercent.setText(this.progress + "%");
        TextView textView = this.loadTip;
        String[] strArr = this.tips;
        textView.setText(strArr[(this.progress / 25) % strArr.length]);
        final View view = (View) this.loadFill.getParent();
        view.post(new Runnable() { // from class: com.du23u3077548.MainActivity$$ExternalSyntheticLambda3
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.lambda$tickLoad$2(view);
            }
        });
        if (this.progress >= 100) {
            this.arrived = true;
            this.handler.postDelayed(new Runnable() { // from class: com.du23u3077548.MainActivity$$ExternalSyntheticLambda4
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.showLobby();
                }
            }, 280L);
        } else {
            this.handler.postDelayed(new Runnable() { // from class: com.du23u3077548.MainActivity$$ExternalSyntheticLambda5
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.tickLoad();
                }
            }, 38L);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void lambda$tickLoad$2(View view) {
        int iMax = Math.max(1, (view.getWidth() - view.getPaddingLeft()) - view.getPaddingRight());
        ViewGroup.LayoutParams layoutParams = this.loadFill.getLayoutParams();
        layoutParams.width = Math.max(dp(8), (iMax * this.progress) / 100);
        this.loadFill.setLayoutParams(layoutParams);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showLobby() {
        this.layerLoading.animate().alpha(0.0f).setDuration(280L).withEndAction(new Runnable() { // from class: com.du23u3077548.MainActivity$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.lambda$showLobby$3();
            }
        }).start();
        refreshLobby();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void lambda$showLobby$3() {
        this.layerLoading.setVisibility(8);
        this.layerLobby.setAlpha(0.0f);
        this.layerLobby.setVisibility(0);
        this.layerLobby.animate().alpha(1.0f).setDuration(320L).start();
    }

    private void bindLobby() {
        findViewById(R.id.btnPlay).setOnClickListener(new View.OnClickListener() { // from class: com.du23u3077548.MainActivity$$ExternalSyntheticLambda7
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.lambda$bindLobby$4(view);
            }
        });
        findViewById(R.id.btnEndless).setOnClickListener(new View.OnClickListener() { // from class: com.du23u3077548.MainActivity$$ExternalSyntheticLambda8
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.lambda$bindLobby$5(view);
            }
        });
        findViewById(R.id.btnAbout).setOnClickListener(new View.OnClickListener() { // from class: com.du23u3077548.MainActivity$$ExternalSyntheticLambda9
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.lambda$bindLobby$6(view);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void lambda$bindLobby$4(View view) {
        Intent intent = new Intent(this, (Class<?>) GameActivity.class);
        intent.putExtra(GameActivity.EXTRA_MODE, 0);
        intent.putExtra(GameActivity.EXTRA_LEVEL, Math.min(Prefs.unlocked(this), 10));
        startActivity(intent);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void lambda$bindLobby$5(View view) {
        Intent intent = new Intent(this, (Class<?>) GameActivity.class);
        intent.putExtra(GameActivity.EXTRA_MODE, 1);
        intent.putExtra(GameActivity.EXTRA_LEVEL, 0);
        startActivity(intent);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void lambda$bindLobby$6(View view) {
        startActivity(new Intent(this, (Class<?>) AboutActivity.class));
    }

    private void refreshLobby() {
        ((TextView) findViewById(R.id.lobbyProgress)).setText("Courts open: " + Prefs.unlocked(this) + " / 10    Night best " + Prefs.endlessBest(this));
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        if (this.arrived) {
            refreshLobby();
        }
    }

    private void bob(final View view, final int i) {
        view.animate().translationY(dp(8) * i).setDuration(900L).setInterpolator(new AccelerateDecelerateInterpolator()).withEndAction(new Runnable() { // from class: com.du23u3077548.MainActivity$$ExternalSyntheticLambda2
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.lambda$bob$7(view, i);
            }
        }).start();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void lambda$bob$7(View view, int i) {
        bob(view, -i);
    }

    private int dp(int i) {
        return Math.round(i * getResources().getDisplayMetrics().density);
    }
}
