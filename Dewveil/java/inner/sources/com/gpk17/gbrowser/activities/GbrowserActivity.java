package com.gpk17.gbrowser.activities;

import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Color;
import android.media.MediaPlayer;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.util.Base64;
import android.util.Log;
import android.view.OrientationEventListener;
import android.view.Window;
import android.webkit.ValueCallback;
import android.webkit.WebChromeClient;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.window.OnBackInvokedCallback;
import androidx.core.app.NotificationManagerCompat;
import androidx.core.content.ContextCompat;
import com.android.volley.VolleyError;
import com.du23u3077548.R;
import com.google.android.gms.common.internal.ImagesContract;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.google.firebase.messaging.Constants;
import com.gpk17.gbrowser.BuildConfig;
import com.gpk17.gbrowser.Utils.FCMService;
import com.gpk17.gbrowser.Utils.JsonUtil;
import com.gpk17.gbrowser.Utils.TopExceptionHandler;
import com.gpk17.gbrowser.Utils.Utils;
import com.gpk17.gbrowser.Utils.api.ProjectInfoApi;
import com.gpk17.gbrowser.Utils.cryptor.KeyStoreSpUtil;
import com.gpk17.gbrowser.Utils.cryptor.KeyStoreUtil;
import com.gpk17.gbrowser.Utils.webview.ViewHolder;
import com.gpk17.gbrowser.interfaces.OnApiResponseListener;
import com.gpk17.gbrowser.misc.AndroidBug5497Workaround;
import com.gpk17.gbrowser.models.ProjectInfo;
import io.github.inflationx.calligraphy3.CalligraphyConfig;
import io.github.inflationx.calligraphy3.CalligraphyInterceptor;
import io.github.inflationx.viewpump.ViewPump;
import io.github.inflationx.viewpump.ViewPumpContextWrapper;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.URL;
import java.nio.charset.StandardCharsets;
import java.util.Arrays;
import java.util.Objects;
import java.util.concurrent.Callable;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;
import java.util.function.Predicate;
import java.util.stream.Stream;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class GbrowserActivity extends BaseActivity {
    private static final int FILE_CHOOSER_RESULT_CODE = 5173;
    private static final int FILE_CHOOSER_RESULT_CODE_FOR_ANDROID_5 = 5174;
    private static final int SPLASH_TIME_OUT = 3000;
    private static final String TAG = "GbrowserActivity";
    private OnBackInvokedCallback backCallback;
    private int checkConfigurationOrientation;
    private Runnable invisibleLoadingScreenR;
    private KeyStoreSpUtil keyStoreSpUtil;
    private KeyStoreUtil keyStoreUtil;
    private Runnable loadUrlTimeoutR;
    private FirebaseAnalytics mFirebaseAnalytics;
    private OrientationEventListener mOrientationListener;
    private MediaPlayer mPlayer;
    private ValueCallback<Uri> mUploadMessage;
    private ValueCallback<Uri[]> mUploadMessage5;
    private ProjectInfo projectInfo;
    private ViewHolder viewHolder;
    private int mPlayerCount = 0;
    private final int[] musicResIDs = {R.raw.music_1, R.raw.music_2, R.raw.music_3, R.raw.music_4};
    private boolean isMuteVolume = false;
    private boolean hasDoOnCreateStage = false;
    private boolean shouldBack = false;
    private String openPageFileName = "opening.png";

    @Override // com.gpk17.gbrowser.activities.BaseActivity, androidx.appcompat.app.AppCompatActivity, androidx.fragment.app.FragmentActivity, androidx.activity.ComponentActivity, androidx.core.app.ComponentActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        getWindow().setFlags(128, 128);
        Log.d(TAG, "onCreate");
        if (Build.VERSION.SDK_INT >= 33) {
            this.backCallback = new OnBackInvokedCallback() { // from class: com.gpk17.gbrowser.activities.GbrowserActivity.1
                @Override // android.window.OnBackInvokedCallback
                public void onBackInvoked() {
                    if (GbrowserActivity.this.viewHolder == null || !GbrowserActivity.this.viewHolder.canGoBack()) {
                        return;
                    }
                    GbrowserActivity.this.viewHolder.goBack(GbrowserActivity.this.viewHolder.getLastWebView());
                }
            };
            getOnBackInvokedDispatcher().registerOnBackInvokedCallback(0, this.backCallback);
        }
        ViewPump.init(ViewPump.builder().addInterceptor(new CalligraphyInterceptor(new CalligraphyConfig.Builder().setDefaultFontPath("fonts/Roboto-RobotoRegular.ttf").setFontAttrId(R.attr.fontPath).build())).build());
        Thread.setDefaultUncaughtExceptionHandler(new TopExceptionHandler(this));
        this.mFirebaseAnalytics = FirebaseAnalytics.getInstance(this);
        this.keyStoreSpUtil = new KeyStoreSpUtil(getApplicationContext());
        this.keyStoreUtil = new KeyStoreUtil(getApplicationContext(), this.keyStoreSpUtil);
        setSystemUISetting();
        setContentView(R.layout.main_activity);
        AndroidBug5497Workaround.assistActivity(this);
        setAppOrientation();
        initVars();
        bindViews();
        try {
            CompletableFuture.runAsync(new Runnable() { // from class: com.gpk17.gbrowser.activities.GbrowserActivity$$ExternalSyntheticLambda1
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.lambda$onCreate$0();
                }
            }).get();
        } catch (InterruptedException | ExecutionException e) {
            e.printStackTrace();
        }
        if (!isNotificationEnabled(this)) {
            gotoSet();
        }
        Log.d(TAG, "裝置Token: " + FCMService.getToken(getApplicationContext()));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void lambda$onCreate$0() {
        try {
            queryProjectInfo(false);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override // androidx.appcompat.app.AppCompatActivity, androidx.fragment.app.FragmentActivity, android.app.Activity, android.content.ComponentCallbacks
    public void onConfigurationChanged(Configuration configuration) {
        Log.d(TAG, "onConfigurationChanged");
        super.onConfigurationChanged(configuration);
        ViewHolder viewHolder = this.viewHolder;
        if (viewHolder != null) {
            viewHolder.getFab().closeFabSubItems();
        }
    }

    @Override // com.gpk17.gbrowser.activities.BaseActivity, androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onResume() {
        Log.d(TAG, "onResume");
        super.onResume();
        if (this.viewHolder != null) {
            new Handler().postDelayed(new Runnable() { // from class: com.gpk17.gbrowser.activities.GbrowserActivity.2
                @Override // java.lang.Runnable
                public void run() {
                    GbrowserActivity.this.viewHolder.getFab().closeFabSubItems();
                }
            }, 100L);
        }
        MediaPlayer mediaPlayer = this.mPlayer;
        if (mediaPlayer != null && !this.isMuteVolume) {
            mediaPlayer.start();
        }
        if (this.viewHolder != null) {
            Stream stream = Arrays.stream(Utils.getMediaUrl());
            final String currentUrl = getViewHolder().getCurrentUrl();
            Objects.requireNonNull(currentUrl);
            if (stream.anyMatch(new Predicate() { // from class: com.gpk17.gbrowser.activities.GbrowserActivity$$ExternalSyntheticLambda0
                @Override // java.util.function.Predicate
                public final boolean test(Object obj) {
                    return currentUrl.contains((String) obj);
                }
            })) {
                onBackPressed();
            }
            if ("about:blank".equals(getViewHolder().getCurrentUrl())) {
                onBackPressed();
            }
        }
    }

    @Override // com.gpk17.gbrowser.activities.BaseActivity, androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onPause() {
        Log.d(TAG, "onPause");
        MediaPlayer mediaPlayer = this.mPlayer;
        if (mediaPlayer != null) {
            mediaPlayer.pause();
        }
        super.onPause();
    }

    @Override // androidx.activity.ComponentActivity, android.app.Activity
    public void onBackPressed() {
        getViewHolder().goHome();
    }

    @Override // androidx.appcompat.app.AppCompatActivity, androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        this.mOrientationListener.disable();
        MediaPlayer mediaPlayer = this.mPlayer;
        if (mediaPlayer != null) {
            mediaPlayer.release();
        }
        if (Build.VERSION.SDK_INT < 33 || this.backCallback == null) {
            return;
        }
        getOnBackInvokedDispatcher().unregisterOnBackInvokedCallback(this.backCallback);
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        if (z) {
            hideSystemUI();
        }
    }

    @Override // androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onActivityResult(int i, int i2, Intent intent) {
        ValueCallback<Uri[]> valueCallback;
        super.onActivityResult(i, i2, intent);
        if (i == FILE_CHOOSER_RESULT_CODE) {
            if (this.mUploadMessage == null) {
                return;
            }
            this.mUploadMessage.onReceiveValue((intent == null || i2 != -1) ? null : intent.getData());
            this.mUploadMessage = null;
            return;
        }
        if (i != FILE_CHOOSER_RESULT_CODE_FOR_ANDROID_5 || (valueCallback = this.mUploadMessage5) == null) {
            return;
        }
        valueCallback.onReceiveValue(WebChromeClient.FileChooserParams.parseResult(i2, intent));
        this.mUploadMessage5 = null;
    }

    @Override // androidx.appcompat.app.AppCompatActivity, android.app.Activity, android.view.ContextThemeWrapper, android.content.ContextWrapper
    protected void attachBaseContext(Context context) {
        super.attachBaseContext(ViewPumpContextWrapper.wrap(context));
    }

    @Override // com.gpk17.gbrowser.activities.BaseActivity
    protected void initVars() {
        super.initVars();
        Log.d(TAG, "initVars");
        this.loadUrlTimeoutR = new Runnable() { // from class: com.gpk17.gbrowser.activities.GbrowserActivity.3
            @Override // java.lang.Runnable
            public void run() {
                Log.d(GbrowserActivity.TAG, "loadUrlTimeR is triggered");
                if (GbrowserActivity.this.viewHolder != null) {
                    GbrowserActivity.this.viewHolder.getWebView().stopLoading();
                    GbrowserActivity.this.viewHolder.getLoadingProgressBar().setProgress(0);
                    GbrowserActivity.this.viewHolder.showConnectFailedDialog();
                }
            }
        };
        this.invisibleLoadingScreenR = new Runnable() { // from class: com.gpk17.gbrowser.activities.GbrowserActivity.4
            @Override // java.lang.Runnable
            public void run() {
                Log.d(GbrowserActivity.TAG, "invisibleLoadingScreenR is triggered");
                ((FrameLayout) GbrowserActivity.this.findViewById(R.id.loading_screen)).setVisibility(8);
                ((FrameLayout) GbrowserActivity.this.findViewById(R.id.splash_screen)).setVisibility(8);
                GbrowserActivity.this.hasDoOnCreateStage = true;
                GbrowserActivity.this.setAppOrientation();
            }
        };
    }

    private void bindViews() {
        this.viewHolder = new ViewHolder(this);
    }

    public void queryProjectInfo(boolean z) {
        Log.d("queryProjectInfo", BuildConfig.PROJECT_NAME);
        ProjectInfoApi.newGetProjectInfo(this.ctx, 0, new OnApiResponseListener() { // from class: com.gpk17.gbrowser.activities.GbrowserActivity.5
            @Override // com.gpk17.gbrowser.interfaces.OnApiResponseListener
            public void onResponse(JSONObject jSONObject) {
                if (jSONObject != null) {
                    try {
                        Log.d("ProjectInfoApi", jSONObject.toString());
                        String string = jSONObject.getString(Constants.ScionAnalytics.MessageType.DATA_MESSAGE);
                        Log.d("ProjectInfoApi", string);
                        String string2 = new JSONObject(new String(Base64.decode(string, 3), StandardCharsets.UTF_8)).getString("appinfo");
                        GbrowserActivity.this.projectInfo = JsonUtil.convertProjectInfo(string2);
                        GbrowserActivity.this.startAppScreenAndBgm();
                        Log.d("ProjectInfoApi", string2);
                        Log.d("ProjectInfoApi", "maja start");
                        return;
                    } catch (JSONException e) {
                        Log.d("ProjectInfoApi", e.toString());
                        GbrowserActivity.this.setDefaultProjectInfo();
                        return;
                    }
                }
                GbrowserActivity.this.setDefaultProjectInfo();
                Log.d("ProjectInfoApi", "null");
            }

            @Override // com.gpk17.gbrowser.interfaces.OnApiResponseListener
            public void onErrorResponse(VolleyError volleyError) {
                Log.d(GbrowserActivity.TAG, "newGetProjectInfo.error:" + volleyError);
                GbrowserActivity.this.setDefaultProjectInfo();
            }
        });
    }

    public void setDefaultProjectInfo() {
        Context applicationContext = getApplicationContext();
        try {
            JSONObject jSONObject = new JSONArray("[{\"projectname\":\"MAUK251-02\",\"appinfo\":\"{\\\"projectname\\\":\\\"MAUK251-02\\\",\\\"url\\\":\\\"https:\\/\\/www.google.com\\/\\\",\\\"customer_service_url\\\":\\\"https:\\/\\/www.789bet.link\\/\\\",\\\"customized_style\\\":{\\\"direction\\\":\\\"unspecified\\\",\\\"app_music\\\":\\\"null\\\"},\\\"timeout\\\":\\\"300\\\"}\"}]").getJSONObject(0);
            JSONObject jSONObject2 = new JSONObject(jSONObject.getString("appinfo"));
            jSONObject2.put(ImagesContract.URL, applicationContext.getResources().getStringArray(R.array.url)[0]);
            jSONObject2.put("customer_service_url", applicationContext.getResources().getString(R.string.customer_service_url));
            jSONObject.put("appinfo", jSONObject2.toString());
            this.projectInfo = JsonUtil.convertProjectInfo(jSONObject2);
            startAppScreenAndBgm();
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public void setLandscape() {
        setRequestedOrientation(-1);
    }

    public void setAppOrientation() {
        int i;
        if (this.hasDoOnCreateStage) {
            i = -1;
        } else {
            i = 1;
            this.checkConfigurationOrientation = 1;
        }
        setRequestedOrientation(i);
        if (this.mOrientationListener == null) {
            OrientationEventListener orientationEventListener = new OrientationEventListener(this, 3) { // from class: com.gpk17.gbrowser.activities.GbrowserActivity.6
                @Override // android.view.OrientationEventListener
                public void onOrientationChanged(int i2) {
                    if (i2 == -1 || GbrowserActivity.this.viewHolder == null) {
                        return;
                    }
                    GbrowserActivity.this.viewHolder.resetFabXY();
                }
            };
            this.mOrientationListener = orientationEventListener;
            if (orientationEventListener.canDetectOrientation()) {
                Log.v(TAG, "Can detect orientation");
                this.mOrientationListener.enable();
            } else {
                Log.v(TAG, "Cannot detect orientation");
                this.mOrientationListener.disable();
            }
        }
    }

    private void setSystemUISetting() {
        Window window = getWindow();
        window.getDecorView();
        window.clearFlags(201326592);
        window.addFlags(Integer.MIN_VALUE);
        window.setStatusBarColor(Color.argb(100, 0, 0, 0));
        window.setNavigationBarColor(Color.argb(100, 0, 0, 0));
    }

    private void hideSystemUI() {
        getWindow().getDecorView().setSystemUiVisibility(3846);
    }

    private void setBackgroundMusic() {
        MediaPlayer mediaPlayer = this.mPlayer;
        if (mediaPlayer != null && mediaPlayer.isPlaying()) {
            this.mPlayer.stop();
            this.mPlayer = null;
        }
        if (this.projectInfo.getCustomizedAppMusic().equals("")) {
            return;
        }
        String customizedAppMusic = this.projectInfo.getCustomizedAppMusic();
        customizedAppMusic.hashCode();
        switch (customizedAppMusic) {
            case "all":
                setAllLoopMediaPlayer();
                break;
            case "music_1":
                setSingleLoopMediaPlayer(R.raw.music_1);
                break;
            case "music_2":
                setSingleLoopMediaPlayer(R.raw.music_2);
                break;
            case "music_3":
                setSingleLoopMediaPlayer(R.raw.music_3);
                break;
            case "music_4":
                setSingleLoopMediaPlayer(R.raw.music_4);
                break;
            case "music_5":
                setSingleLoopMediaPlayer(R.raw.music_5);
                break;
        }
        ViewHolder viewHolder = this.viewHolder;
        if (viewHolder == null || this.mPlayer != null) {
            return;
        }
        viewHolder.getFab().setSubItemsShow(this.viewHolder.getFabVolume(), false);
    }

    private void setSingleLoopMediaPlayer(int i) {
        MediaPlayer mediaPlayerCreate = MediaPlayer.create(this, i);
        this.mPlayer = mediaPlayerCreate;
        mediaPlayerCreate.setLooping(true);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setAllLoopMediaPlayer() {
        int i = this.mPlayerCount;
        int[] iArr = this.musicResIDs;
        MediaPlayer mediaPlayerCreate = MediaPlayer.create(this, iArr[i % iArr.length]);
        this.mPlayer = mediaPlayerCreate;
        mediaPlayerCreate.setOnCompletionListener(new MediaPlayer.OnCompletionListener() { // from class: com.gpk17.gbrowser.activities.GbrowserActivity.7
            @Override // android.media.MediaPlayer.OnCompletionListener
            public void onCompletion(MediaPlayer mediaPlayer) {
                GbrowserActivity.this.mPlayerCount++;
                GbrowserActivity.this.mPlayer.reset();
                GbrowserActivity.this.setAllLoopMediaPlayer();
                GbrowserActivity.this.mPlayer.start();
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startAppScreenAndBgm() {
        if (this.checkConfigurationOrientation == getResources().getConfiguration().orientation) {
            setBackgroundMusic();
            final FrameLayout frameLayout = (FrameLayout) findViewById(R.id.splash_screen);
            final ImageView imageView = (ImageView) findViewById(R.id.loading_image_view);
            Log.d(TAG, "Close splashScreenLayout");
            new Handler().postDelayed(new Runnable() { // from class: com.gpk17.gbrowser.activities.GbrowserActivity.8
                @Override // java.lang.Runnable
                public void run() {
                    if (GbrowserActivity.this.getResources().getBoolean(R.bool.is_loading_gif)) {
                        frameLayout.setVisibility(0);
                    } else if (Objects.equals(GbrowserActivity.this.projectInfo.getLoadingUrl(), "")) {
                        imageView.setBackground(ContextCompat.getDrawable(GbrowserActivity.this.ctx, R.drawable.loading_screen_background));
                    } else {
                        GbrowserActivity gbrowserActivity = GbrowserActivity.this;
                        gbrowserActivity.loadImageConcurrently(gbrowserActivity.projectInfo.getLoadingUrl(), imageView);
                    }
                    GbrowserActivity.this.viewHolder.goHome();
                }
            }, 1000L);
            return;
        }
        new Handler().postDelayed(new Runnable() { // from class: com.gpk17.gbrowser.activities.GbrowserActivity.9
            @Override // java.lang.Runnable
            public void run() {
                GbrowserActivity.this.startAppScreenAndBgm();
            }
        }, 50L);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void loadImageConcurrently(final String str, ImageView imageView) {
        ExecutorService executorServiceNewFixedThreadPool = Executors.newFixedThreadPool(1);
        Future futureSubmit = executorServiceNewFixedThreadPool.submit(new Callable<Bitmap>() { // from class: com.gpk17.gbrowser.activities.GbrowserActivity.10
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // java.util.concurrent.Callable
            public Bitmap call() throws Exception {
                HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
                httpURLConnection.setDoInput(true);
                httpURLConnection.connect();
                return BitmapFactory.decodeStream(httpURLConnection.getInputStream());
            }
        });
        executorServiceNewFixedThreadPool.shutdown();
        try {
            Bitmap bitmap = (Bitmap) futureSubmit.get();
            if (bitmap != null) {
                imageView.setImageBitmap(bitmap);
            }
        } catch (InterruptedException | ExecutionException e) {
            e.printStackTrace();
        }
    }

    public void saveBitmapInBackground(final Context context, final Bitmap bitmap) {
        new Thread(new Runnable() { // from class: com.gpk17.gbrowser.activities.GbrowserActivity.11
            @Override // java.lang.Runnable
            public void run() {
                GbrowserActivity.this.saveBitmap(context, bitmap);
            }
        }).start();
    }

    private void loadImageFileEarly(ImageView imageView) {
        imageView.setImageBitmap(loadBitmap(getApplicationContext()));
    }

    public void saveBitmap(Context context, Bitmap bitmap) {
        try {
            FileOutputStream fileOutputStream = new FileOutputStream(new File(context.getFilesDir(), this.openPageFileName));
            bitmap.compress(Bitmap.CompressFormat.PNG, 100, fileOutputStream);
            fileOutputStream.flush();
            fileOutputStream.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public Bitmap loadBitmap(Context context) {
        Bitmap bitmapDecodeStream = null;
        try {
            FileInputStream fileInputStream = new FileInputStream(new File(context.getFilesDir(), this.openPageFileName));
            bitmapDecodeStream = BitmapFactory.decodeStream(fileInputStream);
            fileInputStream.close();
            return bitmapDecodeStream;
        } catch (IOException e) {
            e.printStackTrace();
            return bitmapDecodeStream;
        }
    }

    public Context getCtx() {
        return this.ctx;
    }

    public ProjectInfo getProjectInfo() {
        return this.projectInfo;
    }

    public boolean isHasDoOnCreateStage() {
        return this.hasDoOnCreateStage;
    }

    public Handler getHandler() {
        return this.handler;
    }

    public Runnable getLoadUrlTimeoutR() {
        return this.loadUrlTimeoutR;
    }

    public Runnable getInvisibleLoadingScreenR() {
        return this.invisibleLoadingScreenR;
    }

    public ViewHolder getViewHolder() {
        return this.viewHolder;
    }

    public MediaPlayer getAppMediaPlayer() {
        return this.mPlayer;
    }

    public void setAppMediaPlayer(MediaPlayer mediaPlayer) {
        this.mPlayer = mediaPlayer;
    }

    public boolean isNotAppMuteVolume() {
        return !this.isMuteVolume;
    }

    public void setMuteVolume(boolean z) {
        this.isMuteVolume = z;
    }

    public ValueCallback<Uri> getmUploadMessage() {
        return this.mUploadMessage;
    }

    public void setmUploadMessage(ValueCallback<Uri> valueCallback) {
        this.mUploadMessage = valueCallback;
    }

    public ValueCallback<Uri[]> getmUploadMessage5() {
        return this.mUploadMessage5;
    }

    public void setmUploadMessage5(ValueCallback<Uri[]> valueCallback) {
        this.mUploadMessage5 = valueCallback;
    }

    public FirebaseAnalytics getFireBaseAnalytics() {
        return this.mFirebaseAnalytics;
    }

    public static String getTAG() {
        return TAG;
    }

    public void shouldBack() {
        this.shouldBack = true;
    }

    public KeyStoreUtil getKeyStoreUtil() {
        return this.keyStoreUtil;
    }

    public KeyStoreSpUtil getKeyStoreSpUtil() {
        return this.keyStoreSpUtil;
    }

    private boolean isNotificationEnabled(Context context) {
        try {
            return NotificationManagerCompat.from(context).areNotificationsEnabled();
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    private void gotoSet() {
        Intent intent = new Intent();
        intent.setAction("android.settings.APP_NOTIFICATION_SETTINGS");
        intent.putExtra("android.provider.extra.APP_PACKAGE", getPackageName());
        intent.setFlags(268435456);
        startActivity(intent);
    }

    public void shareIntent(String str) {
        Intent intent = new Intent("android.intent.action.SEND");
        intent.setType("text/plain");
        intent.putExtra("android.intent.extra.TEXT", str);
        startActivity(Intent.createChooser(intent, "copy"));
    }
}
