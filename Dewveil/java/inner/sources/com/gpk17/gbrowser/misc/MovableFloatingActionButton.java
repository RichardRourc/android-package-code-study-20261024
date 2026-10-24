package com.gpk17.gbrowser.misc;

import android.content.Context;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import com.google.android.material.floatingactionbutton.FloatingActionButton;
import java.util.ArrayList;
import java.util.Collections;

/* JADX INFO: loaded from: classes.dex */
public class MovableFloatingActionButton extends FloatingActionButton implements View.OnTouchListener {
    private static final float CLICK_DRAG_TOLERANCE = 10.0f;
    private float dX;
    private float dY;
    private float downRawX;
    private float downRawY;
    private boolean isFABOpen;
    private ArrayList<MovableFloatingActionSubButton> subItems;

    public void addSubItem(MovableFloatingActionSubButton movableFloatingActionSubButton) {
        this.subItems.add(movableFloatingActionSubButton);
    }

    public MovableFloatingActionButton(Context context) {
        super(context);
        this.isFABOpen = false;
        this.subItems = new ArrayList<>();
        init();
    }

    public MovableFloatingActionButton(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.isFABOpen = false;
        this.subItems = new ArrayList<>();
        init();
    }

    public MovableFloatingActionButton(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.isFABOpen = false;
        this.subItems = new ArrayList<>();
        init();
    }

    private void init() {
        setOnTouchListener(this);
    }

    @Override // android.view.View.OnTouchListener
    public boolean onTouch(View view, MotionEvent motionEvent) {
        int action = motionEvent.getAction();
        if (action == 0) {
            this.downRawX = motionEvent.getRawX();
            this.downRawY = motionEvent.getRawY();
            this.dX = view.getX() - this.downRawX;
            this.dY = view.getY() - this.downRawY;
            return true;
        }
        if (action == 2) {
            int width = view.getWidth();
            int height = view.getHeight();
            View view2 = (View) view.getParent();
            int width2 = view2.getWidth();
            int height2 = view2.getHeight();
            float fMin = Math.min(width2 - width, Math.max(0.0f, motionEvent.getRawX() + this.dX));
            float fMin2 = Math.min(height2 - height, Math.max(0.0f, motionEvent.getRawY() + this.dY));
            view.animate().x(fMin).y(fMin2).setDuration(0L).start();
            setSubItemsXY(fMin, fMin2);
            return true;
        }
        if (action == 1) {
            float rawX = motionEvent.getRawX();
            float rawY = motionEvent.getRawY();
            float f = rawX - this.downRawX;
            float f2 = rawY - this.downRawY;
            if (Math.abs(f) < CLICK_DRAG_TOLERANCE && Math.abs(f2) < CLICK_DRAG_TOLERANCE) {
                if (!this.isFABOpen) {
                    openFabSubItems();
                } else {
                    closeFabSubItems();
                }
                return performClick();
            }
            this.isFABOpen = false;
            return true;
        }
        return super.onTouchEvent(motionEvent);
    }

    public void openFabSubItems() {
        ArrayList<MovableFloatingActionSubButton> arrayList = this.subItems;
        if (arrayList == null || arrayList.isEmpty()) {
            return;
        }
        this.isFABOpen = true;
        View view = (View) getParent();
        int width = view.getWidth();
        int height = view.getHeight();
        boolean z = height > width;
        if (z) {
            setSubItemXYForOpen(this.subItems, z, getY() >= ((float) (height / 2)));
        } else {
            setSubItemXYForOpen(this.subItems, z, getX() >= ((float) (width / 2)));
        }
    }

    private void setSubItemXYForOpen(ArrayList<MovableFloatingActionSubButton> arrayList, boolean z, boolean z2) {
        if (arrayList == null || arrayList.isEmpty()) {
            return;
        }
        ArrayList<MovableFloatingActionSubButton> arrayList2 = new ArrayList(arrayList);
        if (z2) {
            Collections.reverse(arrayList2);
        }
        float height = 0.0f;
        for (MovableFloatingActionSubButton movableFloatingActionSubButton : arrayList2) {
            if (movableFloatingActionSubButton.isShow()) {
                if (height == 0.0f) {
                    height = (getHeight() - movableFloatingActionSubButton.getHeight()) / 2;
                }
                height += movableFloatingActionSubButton.getHeight() + 15.0f;
                float x = getX() + ((getHeight() - movableFloatingActionSubButton.getHeight()) / 2);
                float y = getY() + ((getWidth() - movableFloatingActionSubButton.getWidth()) / 2);
                if (z) {
                    if (z2) {
                        movableFloatingActionSubButton.setSubItemXY(x, y - height);
                    } else {
                        movableFloatingActionSubButton.setSubItemXY(x, y + height);
                    }
                } else if (z2) {
                    movableFloatingActionSubButton.setSubItemXY(x - height, y);
                } else {
                    movableFloatingActionSubButton.setSubItemXY(x + height, y);
                }
            }
        }
    }

    public void closeFabSubItems() {
        this.isFABOpen = false;
        setSubItemsXY(getX(), getY());
    }

    public void setSubItemsXY(float f, float f2) {
        ArrayList<MovableFloatingActionSubButton> arrayList = this.subItems;
        if (arrayList == null || arrayList.isEmpty()) {
            return;
        }
        for (MovableFloatingActionSubButton movableFloatingActionSubButton : this.subItems) {
            movableFloatingActionSubButton.setSubItemXY(((getHeight() - movableFloatingActionSubButton.getHeight()) / 2) + f, ((getWidth() - movableFloatingActionSubButton.getWidth()) / 2) + f2);
        }
    }

    public void setSubItemsShow(MovableFloatingActionSubButton movableFloatingActionSubButton, boolean z) {
        this.subItems.get(this.subItems.indexOf(movableFloatingActionSubButton)).setShow(z);
    }
}
