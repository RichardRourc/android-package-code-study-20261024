package com.du23u3077548.game;

/* JADX INFO: loaded from: classes.dex */
public final class LevelSpec {
    public final int beats;
    public final int bg;
    public final int[][] bugs;
    public final int cols;
    public final int[][] dir;
    public final boolean endless;
    public final int energy;
    public final String hint;
    public final int id;
    public final int[][] link;
    public final String name;
    public final int rows;
    public final int[] sequence;
    public final int[][] type;

    public LevelSpec(int i, String str, int i2, int[][] iArr, int[][] iArr2, int[][] iArr3, int[] iArr4, int i3, int i4, int[][] iArr5, String str2, boolean z) {
        this.id = i;
        this.name = str;
        this.bg = i2;
        this.rows = iArr.length;
        this.cols = iArr[0].length;
        this.type = iArr;
        this.dir = iArr2;
        this.link = iArr3;
        this.sequence = iArr4;
        this.energy = i3;
        this.beats = i4;
        this.bugs = iArr5;
        this.hint = str2;
        this.endless = z;
    }
}
