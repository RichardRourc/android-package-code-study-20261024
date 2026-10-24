package com.tjwqxmzplk.sparkslidenest.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.LinearLayout;
import androidx.viewbinding.ViewBinding;
import androidx.viewbinding.ViewBindings;
import com.tjwqxmzplk.sparkslidenest.R;

/* JADX INFO: loaded from: classes.dex */
public final class ActivityNestLobbyBinding implements ViewBinding {
    public final Button btnBegin;
    public final Button btnGuide;
    public final Button btnQuit;
    private final LinearLayout rootView;

    private ActivityNestLobbyBinding(LinearLayout linearLayout, Button button, Button button2, Button button3) {
        this.rootView = linearLayout;
        this.btnBegin = button;
        this.btnGuide = button2;
        this.btnQuit = button3;
    }

    @Override // androidx.viewbinding.ViewBinding
    public LinearLayout getRoot() {
        return this.rootView;
    }

    public static ActivityNestLobbyBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, null, false);
    }

    public static ActivityNestLobbyBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        View viewInflate = layoutInflater.inflate(R.layout.activity_nest_lobby, viewGroup, false);
        if (z) {
            viewGroup.addView(viewInflate);
        }
        return bind(viewInflate);
    }

    public static ActivityNestLobbyBinding bind(View view) {
        int i = R.id.btnBegin;
        Button button = (Button) ViewBindings.findChildViewById(view, i);
        if (button != null) {
            i = R.id.btnGuide;
            Button button2 = (Button) ViewBindings.findChildViewById(view, i);
            if (button2 != null) {
                i = R.id.btnQuit;
                Button button3 = (Button) ViewBindings.findChildViewById(view, i);
                if (button3 != null) {
                    return new ActivityNestLobbyBinding((LinearLayout) view, button, button2, button3);
                }
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i)));
    }
}
