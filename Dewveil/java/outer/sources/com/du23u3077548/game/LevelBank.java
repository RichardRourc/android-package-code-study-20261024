package com.du23u3077548.game;

import java.lang.reflect.Array;
import java.util.Random;

/* JADX INFO: loaded from: classes.dex */
public final class LevelBank {
    public static final int CAMPAIGN = 10;

    private static int decode(char c) {
        if (c == '#') {
            return 4;
        }
        if (c == 'G') {
            return 6;
        }
        if (c == 'L') {
            return 1;
        }
        if (c == 'T') {
            return 3;
        }
        if (c == 'W') {
            return 2;
        }
        if (c == 'D') {
            return 9;
        }
        if (c == 'E') {
            return 7;
        }
        if (c != 'O') {
            return c != 'P' ? 0 : 5;
        }
        return 8;
    }

    public static LevelSpec campaign(int i) {
        switch (i) {
            case 1:
                return parse(1, "First Dew Path", 0, 10, 40, new String[]{"D.....", "......", "......", "......", "......", "......", "......", "......"}, null, null, new int[]{9}, new int[][]{new int[]{0, 7, 0, 0}}, "Swipe up a vein. Tap the gem when it glows.");
            case 2:
                return parse(2, "Split Shore", 1, 9, 42, new String[]{".O....", ".L....", ".L....", "W.L.W.", ".L....", "......", ".L....", "......"}, new String[]{"......", ".0....", ".0....", "..1...", ".0....", "......", ".0....", "......"}, null, new int[]{8}, new int[][]{new int[]{1, 7, 1, 0}}, "Tap the middle lily so it faces up. Keep the ladybug out of water.");
            case Cell.THORN /* 3 */:
                return parse(3, "First Butterfly Path", 2, 11, 44, new String[]{"..E...", "......", "..#...", "......", "..#...", "......", "......", "......"}, null, null, new int[]{7}, new int[][]{new int[]{2, 7, 2, 0}}, "Butterflies follow veins. Route around the stones.");
            case Cell.STONE /* 4 */:
                return parse(4, "Two Envoys", 0, 14, 50, new String[]{"D..O..", "......", ".W.W..", "...L..", "......", "......", "...L..", "......"}, new String[]{"......", "......", "......", "...0..", "......", "......", "...1..", "......"}, null, new int[]{9, 8}, new int[][]{new int[]{0, 7, 0, 0}, new int[]{1, 7, 3, 0}}, "Seal diamond first. Turn the lower lily up.");
            case 5:
                return parse(5, "Thorn Side Gate", 3, 13, 48, new String[]{"...D..", "..T...", ".T.T..", "......", "T...T.", "......", "..T...", "......"}, null, null, new int[]{9}, new int[][]{new int[]{0, 7, 0, 0}}, "Fireflies die on thorns. Weave around them.");
            case Cell.GATE /* 6 */:
                return parse(6, "First Stone Gate", 3, 14, 52, new String[]{"..GO..", "..G...", "..G...", "P.L...", ".L....", "......", ".L....", "......"}, new String[]{"......", "......", "......", "..1...", ".3....", "......", ".0....", "......"}, new String[]{"..1...", "..1...", "..1...", "1.....", "......", "......", "......", "......"}, new int[]{8}, new int[][]{new int[]{1, 7, 1, 0}}, "Send the ladybug to the plate, then into gold.");
            case Cell.SOCK_EME /* 7 */:
                return parse(7, "Three Envoys", 2, 16, 58, new String[]{"E.O.D.", "......", ".W#W..", "..T...", ".L.L..", "......", "......", "......"}, new String[]{"......", "......", "......", "......", ".1.3..", "......", "......", "......"}, null, new int[]{7, 8, 9}, new int[][]{new int[]{2, 7, 0, 0}, new int[]{1, 7, 2, 0}, new int[]{0, 7, 4, 0}}, "Seal emerald, gold, then diamond.");
            case Cell.SOCK_GOLD /* 8 */:
                return parse(8, "Hidden Gallery", 1, 15, 56, new String[]{"..E.O.", "#.#.#.", "......", "W.T.W.", ".L.L..", "......", "P..G..", "......"}, new String[]{"......", "......", "......", "......", ".0.2..", "......", "......", "......"}, new String[]{"......", "......", "......", "......", "......", "......", "2..2..", "......"}, new int[]{8, 7}, new int[][]{new int[]{1, 7, 0, 0}, new int[]{2, 7, 4, 0}}, "Open the gate with the ladybug first.");
            case Cell.SOCK_DIA /* 9 */:
                return parse(9, "Late Bell", 0, 14, 46, new String[]{"D.E.O.", ".T.T..", "......", ".#.#..", "......", "L...L.", "......", "......"}, new String[]{"......", "......", "......", "......", "......", "1...3.", "......", "......"}, null, new int[]{9, 7, 8, 9}, new int[][]{new int[]{0, 7, 0, 0}, new int[]{2, 7, 2, 0}, new int[]{1, 7, 4, 0}, new int[]{0, 7, 5, 0}}, "Tight beats. Miss the glow and the seat locks.");
            case CAMPAIGN /* 10 */:
                return parse(10, "Final Weave", 3, 16, 60, new String[]{"EOD.EO", "G#T#G.", "......", "W.L.W.", "P.#.P.", ".L.L..", "T...T.", "......"}, new String[]{"......", "......", "......", "..0...", "......", ".1.3..", "......", "......"}, new String[]{"......", "1...2.", "......", "......", "1...2.", "......", "......", "......"}, new int[]{7, 8, 9, 7, 8}, new int[][]{new int[]{2, 7, 0, 0}, new int[]{1, 7, 1, 0}, new int[]{0, 7, 2, 0}, new int[]{2, 7, 4, 0}, new int[]{1, 7, 5, 0}}, "Gates, thorns, water. Spend dew, catch the glow.");
            default:
                return campaign(1);
        }
    }

    public static LevelSpec endless(int i, Random random) {
        int[][] iArr = (int[][]) Array.newInstance((Class<?>) Integer.TYPE, 8, 6);
        int[][] iArr2 = (int[][]) Array.newInstance((Class<?>) Integer.TYPE, 8, 6);
        int[][] iArr3 = (int[][]) Array.newInstance((Class<?>) Integer.TYPE, 8, 6);
        int[] iArr4 = iArr[0];
        iArr4[1] = 7;
        iArr4[3] = 8;
        iArr4[5] = 9;
        int iMin = Math.min(10, i + 3);
        for (int i2 = 0; i2 < iMin; i2++) {
            int iNextInt = random.nextInt(5) + 2;
            int iNextInt2 = random.nextInt(6);
            int iNextInt3 = random.nextInt(5);
            if (iNextInt3 == 0) {
                iArr[iNextInt][iNextInt2] = 2;
            } else if (iNextInt3 == 1) {
                iArr[iNextInt][iNextInt2] = 3;
            } else if (iNextInt3 == 2) {
                iArr[iNextInt][iNextInt2] = 4;
            } else if (iNextInt3 == 3) {
                iArr[iNextInt][iNextInt2] = 1;
                iArr2[iNextInt][iNextInt2] = random.nextInt(4);
            } else {
                iArr[iNextInt][iNextInt2] = 0;
            }
        }
        if (i >= 2) {
            iArr[4][0] = 5;
            iArr[1][2] = 6;
            iArr[2][2] = 6;
            iArr3[4][0] = 1;
            iArr3[1][2] = 1;
            iArr3[2][2] = 1;
        }
        int iMin2 = Math.min(6, (i / 2) + 2);
        int[] iArr5 = new int[iMin2];
        int[] iArr6 = {7, 8, 9};
        for (int i3 = 0; i3 < iMin2; i3++) {
            iArr5[i3] = iArr6[random.nextInt(3)];
        }
        return new LevelSpec(i + 100, "Night Watch " + (i + 1), i % 4, iArr, iArr2, iArr3, iArr5, Math.max(8, 16 - i), Math.max(28, 50 - (i * 3)), new int[][]{new int[]{2, 7, 0, 0}, new int[]{1, 7, 2, 0}, new int[]{0, 7, 4, 0}}, "No hints in Endless Night. Less dew, wilder sequences.", true);
    }

    private static LevelSpec parse(int i, String str, int i2, int i3, int i4, String[] strArr, String[] strArr2, String[] strArr3, int[] iArr, int[][] iArr2, String str2) {
        char cCharAt;
        char cCharAt2;
        int length = strArr.length;
        int length2 = strArr[0].length();
        int[][] iArr3 = (int[][]) Array.newInstance((Class<?>) Integer.TYPE, length, length2);
        int[][] iArr4 = (int[][]) Array.newInstance((Class<?>) Integer.TYPE, length, length2);
        int[][] iArr5 = (int[][]) Array.newInstance((Class<?>) Integer.TYPE, length, length2);
        for (int i5 = 0; i5 < length; i5++) {
            for (int i6 = 0; i6 < length2; i6++) {
                iArr3[i5][i6] = decode(strArr[i5].charAt(i6));
                if (strArr2 != null && i5 < strArr2.length && i6 < strArr2[i5].length() && (cCharAt2 = strArr2[i5].charAt(i6)) >= '0' && cCharAt2 <= '3') {
                    iArr4[i5][i6] = cCharAt2 - '0';
                }
                if (strArr3 != null && i5 < strArr3.length && i6 < strArr3[i5].length() && (cCharAt = strArr3[i5].charAt(i6)) >= '1' && cCharAt <= '9') {
                    iArr5[i5][i6] = cCharAt - '0';
                }
            }
        }
        return new LevelSpec(i, str, i2, iArr3, iArr4, iArr5, iArr, i3, i4, iArr2, str2, false);
    }
}
