package com.du23u3077548.game;

/* JADX INFO: loaded from: classes.dex */
public final class Cell {
    public static final int EMPTY = 0;
    public static final int GATE = 6;
    public static final int LILY = 1;
    public static final int PLATE = 5;
    public static final int SOCK_DIA = 9;
    public static final int SOCK_EME = 7;
    public static final int SOCK_GOLD = 8;
    public static final int STONE = 4;
    public static final int THORN = 3;
    public static final int WATER = 2;
    public int dir;
    public int flow;
    public boolean gateOpen;
    public int link;
    public int lockBeats;
    public int pulseGlow;
    public boolean sealed;
    public int type;
    public boolean vein;

    public static int owner(int i) {
        if (i == 8) {
            return 1;
        }
        return i == 9 ? 0 : 2;
    }

    public static boolean socket(int i) {
        return i == 7 || i == 8 || i == 9;
    }

    public static String gemName(int i) {
        if (i == 8) {
            return "Gold";
        }
        if (i == 9) {
            return "Diamond";
        }
        return "Emerald";
    }
}
