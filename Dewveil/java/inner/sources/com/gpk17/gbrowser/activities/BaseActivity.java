package com.gpk17.gbrowser.activities;

import android.content.Context;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.view.View;
import android.view.ViewGroup;
import androidx.appcompat.app.AppCompatActivity;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentManager;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.LinkedList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class BaseActivity extends AppCompatActivity {
    protected static final String TAG = "BaseActivity";
    protected Context ctx;
    public List<Fragment> fragmentList;
    protected Handler handler;
    boolean inForeground = false;
    protected Deque<Boolean> progressStack;
    protected LinkedList<String> snackBarQ;

    protected void initVars() {
        this.ctx = this;
        this.progressStack = new ArrayDeque();
        this.snackBarQ = new LinkedList<>();
        this.handler = new Handler(Looper.getMainLooper());
        getSupportFragmentManager().registerFragmentLifecycleCallbacks(new FragmentManager.FragmentLifecycleCallbacks() { // from class: com.gpk17.gbrowser.activities.BaseActivity.1
            @Override // androidx.fragment.app.FragmentManager.FragmentLifecycleCallbacks
            public void onFragmentAttached(FragmentManager fragmentManager, Fragment fragment, Context context) {
                if (BaseActivity.this.fragmentList == null) {
                    BaseActivity.this.fragmentList = new ArrayList();
                }
                BaseActivity.this.fragmentList.add(fragment);
                super.onFragmentAttached(fragmentManager, fragment, context);
            }

            @Override // androidx.fragment.app.FragmentManager.FragmentLifecycleCallbacks
            public void onFragmentDetached(FragmentManager fragmentManager, Fragment fragment) {
                if (BaseActivity.this.fragmentList != null) {
                    BaseActivity.this.fragmentList.remove(fragment);
                }
                super.onFragmentDetached(fragmentManager, fragment);
            }
        }, false);
    }

    @Override // androidx.appcompat.app.AppCompatActivity, androidx.fragment.app.FragmentActivity, androidx.activity.ComponentActivity, androidx.core.app.ComponentActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.inForeground = true;
    }

    @Override // androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onResume() {
        this.inForeground = true;
        super.onResume();
    }

    @Override // androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onPause() {
        this.inForeground = false;
        super.onPause();
    }

    protected boolean isInForeground() {
        return this.inForeground;
    }

    @Override // androidx.appcompat.app.AppCompatActivity, android.app.Activity
    public void setContentView(int i) {
        super.setContentView(i);
    }

    @Override // androidx.appcompat.app.AppCompatActivity, android.app.Activity
    public void setContentView(View view) {
        super.setContentView(view);
    }

    @Override // androidx.appcompat.app.AppCompatActivity, android.app.Activity
    public void setContentView(View view, ViewGroup.LayoutParams layoutParams) {
        super.setContentView(view, layoutParams);
    }
}
