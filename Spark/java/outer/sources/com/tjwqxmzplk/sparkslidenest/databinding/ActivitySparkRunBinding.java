package com.tjwqxmzplk.sparkslidenest.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.RelativeLayout;
import android.widget.TextView;
import androidx.viewbinding.ViewBinding;
import androidx.viewbinding.ViewBindings;
import com.tjwqxmzplk.sparkslidenest.BarrierCanvas;
import com.tjwqxmzplk.sparkslidenest.R;

/* JADX INFO: loaded from: classes.dex */
public final class ActivitySparkRunBinding implements ViewBinding {
    public final Button btnHalt;
    public final BarrierCanvas fieldPane;
    private final RelativeLayout rootView;
    public final TextView txtGuide;
    public final TextView txtMarks;

    private ActivitySparkRunBinding(RelativeLayout relativeLayout, Button button, BarrierCanvas barrierCanvas, TextView textView, TextView textView2) {
        this.rootView = relativeLayout;
        this.btnHalt = button;
        this.fieldPane = barrierCanvas;
        this.txtGuide = textView;
        this.txtMarks = textView2;
    }

    @Override // androidx.viewbinding.ViewBinding
    public RelativeLayout getRoot() {
        return this.rootView;
    }

    public static ActivitySparkRunBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, null, false);
    }

    public static ActivitySparkRunBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        View viewInflate = layoutInflater.inflate(R.layout.activity_spark_run, viewGroup, false);
        if (z) {
            viewGroup.addView(viewInflate);
        }
        return bind(viewInflate);
    }

    public static ActivitySparkRunBinding bind(View view) {
        int i = R.id.btnHalt;
        Button button = (Button) ViewBindings.findChildViewById(view, i);
        if (button != null) {
            i = R.id.fieldPane;
            BarrierCanvas barrierCanvas = (BarrierCanvas) ViewBindings.findChildViewById(view, i);
            if (barrierCanvas != null) {
                i = R.id.txtGuide;
                TextView textView = (TextView) ViewBindings.findChildViewById(view, i);
                if (textView != null) {
                    i = R.id.txtMarks;
                    TextView textView2 = (TextView) ViewBindings.findChildViewById(view, i);
                    if (textView2 != null) {
                        return new ActivitySparkRunBinding((RelativeLayout) view, button, barrierCanvas, textView, textView2);
                    }
                }
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i)));
    }
}
