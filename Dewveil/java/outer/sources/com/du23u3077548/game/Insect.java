package com.du23u3077548.game;

/* JADX INFO: loaded from: classes.dex */
public final class Insect {
    public static final int BUTTERFLY = 2;
    public static final int FIREFLY = 0;
    public static final int LADYBUG = 1;
    public boolean alive = true;
    public float anim;
    public int col;
    public boolean delivered;
    public int destCol;
    public int destRow;
    public int facing;
    public int row;
    public int type;

    public Insect(int i, int i2, int i3, int i4) {
        this.type = i;
        this.row = i2;
        this.col = i3;
        this.destRow = i2;
        this.destCol = i3;
        this.facing = i4;
    }

    public boolean moving() {
        return (this.row == this.destRow && this.col == this.destCol) ? false : true;
    }

    public static String name(int i) {
        if (i == 1) {
            return "Ladybug";
        }
        if (i == 2) {
            return "Butterfly";
        }
        return "Firefly";
    }
}
