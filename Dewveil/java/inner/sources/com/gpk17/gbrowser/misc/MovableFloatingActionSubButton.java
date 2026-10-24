package com.gpk17.gbrowser.misc;

import android.content.Context;
import android.util.AttributeSet;
import com.google.android.material.floatingactionbutton.FloatingActionButton;

/* JADX INFO: loaded from: classes.dex */
public class MovableFloatingActionSubButton extends FloatingActionButton {
    private boolean isShow;

    public MovableFloatingActionSubButton(Context context) {
        super(context);
        this.isShow = true;
    }

    public MovableFloatingActionSubButton(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.isShow = true;
    }

    public MovableFloatingActionSubButton(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.isShow = true;
    }

    public boolean isShow() {
        return this.isShow;
    }

    public void setShow(boolean z) {
        this.isShow = z;
    }

    public void setSubItemXY(float f, float f2) {
        animate().x(f).y(f2).setDuration(0L).start();
    }
}
