package com.du23u3077548.game;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Random;

/* JADX INFO: loaded from: classes.dex */
public final class GameWorld {
    public static final int BEAT_MS = 720;
    public static final int GLOW_EVERY = 5;
    public static final int GLOW_MS = 1200;
    public static final int LOST = 2;
    public static final int PLAYING = 0;
    public static final int WON = 1;
    public String banner;
    public float beatAcc;
    public int beatCount;
    public int beatsLeft;
    public int combo;
    public int energy;
    public float glowLife;
    public final Cell[][] grid;
    public int griffinCd;
    public int night;
    public boolean paused;
    public int score;
    public int seqIndex;
    public boolean socketGlow;
    public final LevelSpec spec;
    public float toastLife;
    public int windBeats;
    public boolean windOn;
    public static final int[] DR = {-1, 0, 1, 0};
    public static final int[] DC = {0, 1, 0, -1};
    public final List<Insect> insects = new ArrayList();
    public final List<Floater> floaters = new ArrayList();
    public final List<Spark> sparks = new ArrayList();
    public final Random rng = new Random();
    public int state = 0;
    public String toast = "";
    public String loseReason = "";

    public static final class Spark {
        public int color;
        public float life;
        public float vx;
        public float vy;
        public float x;
        public float y;
    }

    public static int dirOf(int i, int i2, int i3, int i4) {
        if (i3 < i) {
            return 0;
        }
        if (i4 > i2) {
            return 1;
        }
        return i3 > i ? 2 : 3;
    }

    public GameWorld(LevelSpec levelSpec) {
        this.banner = "";
        this.spec = levelSpec;
        this.energy = levelSpec.energy;
        this.beatsLeft = levelSpec.beats;
        this.grid = (Cell[][]) Array.newInstance((Class<?>) Cell.class, levelSpec.rows, levelSpec.cols);
        for (int i = 0; i < levelSpec.rows; i++) {
            for (int i2 = 0; i2 < levelSpec.cols; i2++) {
                Cell cell = new Cell();
                cell.type = levelSpec.type[i][i2];
                cell.dir = levelSpec.dir[i][i2];
                cell.link = levelSpec.link[i][i2];
                this.grid[i][i2] = cell;
            }
        }
        for (int[] iArr : levelSpec.bugs) {
            this.insects.add(new Insect(iArr[0], iArr[1], iArr[2], iArr[3]));
        }
        this.banner = levelSpec.hint;
        this.socketGlow = true;
        this.glowLife = 1.2f;
    }

    public void update(float f) {
        if (this.paused || this.state != 0) {
            tickVfx(f);
            return;
        }
        float f2 = this.toastLife;
        if (f2 > 0.0f) {
            this.toastLife = f2 - f;
        }
        if (this.socketGlow) {
            float f3 = this.glowLife - f;
            this.glowLife = f3;
            if (f3 <= 0.0f) {
                this.socketGlow = false;
            }
        }
        for (int i = 0; i < this.spec.rows; i++) {
            for (int i2 = 0; i2 < this.spec.cols; i2++) {
                if (this.grid[i][i2].pulseGlow > 0) {
                    this.grid[i][i2].pulseGlow--;
                }
            }
        }
        for (Insect insect : this.insects) {
            if (insect.alive && insect.moving()) {
                insect.anim += (1000.0f * f) / 280.0f;
                if (insect.anim >= 1.0f) {
                    insect.anim = 1.0f;
                    insect.row = insect.destRow;
                    insect.col = insect.destCol;
                    afterLand(insect);
                }
            }
        }
        float f4 = this.beatAcc + (1000.0f * f);
        this.beatAcc = f4;
        if (f4 >= 720.0f) {
            this.beatAcc = f4 - 720.0f;
            onBeat();
        }
        tickVfx(f);
    }

    private void onBeat() {
        if (this.state != 0) {
            return;
        }
        this.beatCount++;
        this.beatsLeft--;
        if (this.windOn) {
            int i = this.windBeats - 1;
            this.windBeats = i;
            if (i <= 0) {
                this.windOn = false;
                toast("Wind fades");
            }
        }
        int i2 = this.griffinCd;
        if (i2 > 0) {
            this.griffinCd = i2 - 1;
        }
        for (int i3 = 0; i3 < this.spec.rows; i3++) {
            for (int i4 = 0; i4 < this.spec.cols; i4++) {
                if (this.grid[i3][i4].lockBeats > 0) {
                    this.grid[i3][i4].lockBeats--;
                }
            }
        }
        if (this.beatCount % 5 == 0) {
            this.socketGlow = true;
            this.glowLife = 1.2f;
            toast("Seal window");
        }
        for (Insect insect : this.insects) {
            if (insect.alive && !insect.delivered && !insect.moving()) {
                planStep(insect);
            }
        }
        if (this.beatsLeft <= 0) {
            lose("Beats gone. The dew on the crown dries out.");
        } else {
            checkExtinct();
        }
    }

    private void planStep(Insect insect) {
        int i;
        int i2;
        int i3 = insect.row;
        int i4 = insect.col;
        Cell cell = this.grid[i3][i4];
        if (cell.type == 1) {
            int iFlowDir = flowDir(cell.dir);
            i = DR[iFlowDir] + i3;
            i2 = DC[iFlowDir] + i4;
            insect.facing = iFlowDir;
        } else if (insect.type == 1) {
            int[] iArrWalkLady = walkLady(insect);
            i = iArrWalkLady[0];
            i2 = iArrWalkLady[1];
        } else if (insect.type == 2) {
            int[] iArrWalkButterfly = walkButterfly(insect);
            i = iArrWalkButterfly[0];
            i2 = iArrWalkButterfly[1];
        } else {
            int[] iArrWalkFirefly = walkFirefly(insect);
            i = iArrWalkFirefly[0];
            i2 = iArrWalkFirefly[1];
        }
        if (i == i3 && i2 == i4) {
            return;
        }
        if (!in(i, i2) || blocked(insect, i, i2)) {
            if (insect.type == 1) {
                insect.facing = (insect.facing + 1) % 4;
                return;
            }
            return;
        }
        insect.destRow = i;
        insect.destCol = i2;
        insect.anim = 0.0f;
        if (i2 != i4) {
            insect.facing = i2 <= i4 ? 3 : 1;
        } else if (i != i3) {
            insect.facing = i <= i3 ? 0 : 2;
        }
    }

    private int[] walkLady(Insect insect) {
        int i = insect.row + DR[insect.facing];
        int i2 = insect.col + DC[insect.facing];
        if (in(i, i2) && !blocked(insect, i, i2)) {
            return new int[]{i, i2};
        }
        return new int[]{insect.row, insect.col};
    }

    private int[] walkButterfly(Insect insect) {
        int[] iArrFollowVein = followVein(insect, 2);
        if (iArrFollowVein != null) {
            return iArrFollowVein;
        }
        if (this.windOn) {
            int iFlowDir = flowDir(0);
            int i = insect.row + DR[iFlowDir];
            int i2 = insect.col + DC[iFlowDir];
            if (in(i, i2) && !blocked(insect, i, i2)) {
                return new int[]{i, i2};
            }
        }
        return new int[]{insect.row, insect.col};
    }

    private int[] walkFirefly(Insect insect) {
        int[] iArrFollowVein = followVein(insect, 1);
        if (iArrFollowVein != null) {
            return iArrFollowVein;
        }
        if (this.grid[insect.row][insect.col].pulseGlow > 0) {
            int i = insect.row - 1;
            if (in(i, insect.col) && !blocked(insect, i, insect.col)) {
                return new int[]{i, insect.col};
            }
        }
        int[] iArrLilyNudge = lilyNudge(insect);
        return iArrLilyNudge != null ? iArrLilyNudge : new int[]{insect.row, insect.col};
    }

    private int[] followVein(Insect insect, int i) {
        if (!this.grid[insect.row][insect.col].vein) {
            int[] iArrAdjacentVein = adjacentVein(insect);
            if (iArrAdjacentVein == null) {
                return null;
            }
            return iArrAdjacentVein;
        }
        int i2 = insect.row;
        int i3 = insect.col;
        int i4 = 0;
        while (i4 < i) {
            int iFlowDir = flowDir(this.grid[i2][i3].flow);
            int i5 = DR[iFlowDir] + i2;
            int i6 = DC[iFlowDir] + i3;
            if (in(i5, i6) && !blocked(insect, i5, i6)) {
                if (!this.grid[i5][i6].vein && !Cell.socket(this.grid[i5][i6].type)) {
                    i3 = i6;
                    i2 = i5;
                    break;
                }
                i4++;
                i3 = i6;
                i2 = i5;
            } else {
                break;
            }
        }
        if (i2 == insect.row && i3 == insect.col) {
            return null;
        }
        return new int[]{i2, i3};
    }

    private int[] adjacentVein(Insect insect) {
        for (int i = 0; i < 4; i++) {
            int i2 = insect.row + DR[i];
            int i3 = insect.col + DC[i];
            if (in(i2, i3) && this.grid[i2][i3].vein && !blocked(insect, i2, i3)) {
                return new int[]{i2, i3};
            }
        }
        return null;
    }

    private int[] lilyNudge(Insect insect) {
        for (int i = 0; i < 4; i++) {
            int i2 = insect.row;
            int[] iArr = DR;
            int i3 = i2 + iArr[i];
            int i4 = insect.col;
            int[] iArr2 = DC;
            int i5 = i4 + iArr2[i];
            if (in(i3, i5) && this.grid[i3][i5].type == 1) {
                int iFlowDir = flowDir(this.grid[i3][i5].dir);
                if ((iArr[iFlowDir] + i3 != insect.row || iArr2[iFlowDir] + i5 != insect.col) && !blocked(insect, i3, i5)) {
                    return new int[]{i3, i5};
                }
            }
        }
        return null;
    }

    private void afterLand(Insect insect) {
        if (insect.alive) {
            Cell cell = this.grid[insect.row][insect.col];
            if (cell.type == 2 && insect.type == 1) {
                kill(insect, "Ladybug drowned");
                return;
            }
            if (cell.type == 3 && insect.type != 1) {
                kill(insect, Insect.name(insect.type) + " hit thorns");
                return;
            }
            if (cell.type == 5 && insect.type == 1 && cell.link > 0) {
                toggleGates(cell.link, true);
                toast("Gate opens");
                burst(insect.col, insect.row, -1652646);
            }
        }
    }

    private void toggleGates(int i, boolean z) {
        for (int i2 = 0; i2 < this.spec.rows; i2++) {
            for (int i3 = 0; i3 < this.spec.cols; i3++) {
                if (this.grid[i2][i3].type == 6 && this.grid[i2][i3].link == i) {
                    this.grid[i2][i3].gateOpen = z;
                }
            }
        }
    }

    public boolean tapCell(int i, int i2) {
        if (this.state == 0 && !this.paused && in(i, i2)) {
            Cell cell = this.grid[i][i2];
            if (cell.type == 1) {
                cell.dir = (cell.dir + 1) % 4;
                toast("Lily turned");
                return true;
            }
            if (Cell.socket(cell.type)) {
                return trySeal(i, i2);
            }
        }
        return false;
    }

    public boolean paintVein(int i, int i2, int i3, int i4) {
        if (this.state == 0 && !this.paused && in(i, i2)) {
            Cell cell = this.grid[i][i2];
            if (cell.type != 4 && cell.type != 3 && (cell.type != 6 || cell.gateOpen)) {
                if (cell.vein) {
                    if (in(i3, i4)) {
                        cell.flow = dirOf(i3, i4, i, i2);
                    }
                    return true;
                }
                int i5 = this.energy;
                if (i5 < 1) {
                    toast("Not enough dew");
                    return false;
                }
                this.energy = i5 - 1;
                cell.vein = true;
                cell.flow = in(i3, i4) ? dirOf(i3, i4, i, i2) : 0;
                burst(i2, i, -9508928);
                return true;
            }
        }
        return false;
    }

    public boolean pulseColumn(int i) {
        if (this.state != 0 || this.paused || i < 0 || i >= this.spec.cols) {
            return false;
        }
        int i2 = this.energy;
        if (i2 < 2) {
            toast("Pulse costs 2 dew");
            return false;
        }
        this.energy = i2 - 2;
        for (int i3 = 0; i3 < this.spec.rows; i3++) {
            this.grid[i3][i].pulseGlow = 18;
        }
        for (Insect insect : this.insects) {
            if (insect.alive && !insect.delivered && insect.col == i) {
                int i4 = insect.row - 1;
                if (in(i4, i) && !blocked(insect, i4, i) && !insect.moving()) {
                    insect.destRow = i4;
                    insect.destCol = i;
                    insect.anim = 0.0f;
                    insect.facing = 0;
                }
            }
        }
        toast("Column pulse");
        return true;
    }

    public boolean griffinWind() {
        if (this.state != 0 || this.paused) {
            return false;
        }
        if (this.griffinCd > 0) {
            toast("Griffin still roosting");
            return false;
        }
        int i = this.energy;
        if (i < 3) {
            toast("Wind costs 3 dew");
            return false;
        }
        this.energy = i - 3;
        this.windOn = true;
        this.windBeats = 3;
        this.griffinCd = 8;
        toast("Griffin wind! Flow reversed");
        burst(this.spec.cols / 2.0f, 0.2f, -10902);
        return true;
    }

    public boolean trySeal(int i, int i2) {
        Cell cell = this.grid[i][i2];
        if (!Cell.socket(cell.type) || cell.sealed) {
            return false;
        }
        if (cell.lockBeats > 0) {
            toast("Seat still locked");
            return false;
        }
        Insect insectInsectAt = insectAt(i, i2);
        if (insectInsectAt == null) {
            toast("Empty seat");
            return false;
        }
        if (!this.socketGlow) {
            cell.lockBeats = 3;
            this.combo = 0;
            toast("Off-beat! Seat locked 3 beats");
            burst(i2, i, -5618620);
            return true;
        }
        int i3 = this.spec.sequence[this.seqIndex];
        if (cell.type != i3) {
            toast("Wrong seat. Need " + Cell.gemName(i3));
            this.combo = 0;
            return true;
        }
        if (insectInsectAt.type != Cell.owner(cell.type)) {
            toast(Insect.name(insectInsectAt.type) + " does not fit. Bounced");
            bounce(insectInsectAt);
            this.combo = 0;
            return true;
        }
        insectInsectAt.delivered = true;
        insectInsectAt.alive = false;
        cell.sealed = true;
        this.seqIndex++;
        int i4 = this.combo + 1;
        this.combo = i4;
        int i5 = (i4 * 180) + (this.beatsLeft * 2);
        this.score += i5;
        toast("Sealed  +" + i5 + "  combo x" + this.combo);
        burst(i2, i, -3416);
        this.banner = this.seqIndex >= this.spec.sequence.length ? "The crown is full. Dew returns." : "Next: " + Cell.gemName(this.spec.sequence[this.seqIndex]);
        if (this.seqIndex >= this.spec.sequence.length) {
            this.score += (this.energy * 30) + (this.beatsLeft * 8);
            this.state = 1;
        }
        return true;
    }

    private void bounce(Insect insect) {
        int iMin = Math.min(this.spec.rows - 1, insect.row + 1);
        if (blocked(insect, iMin, insect.col)) {
            return;
        }
        insect.destRow = iMin;
        insect.destCol = insect.col;
        insect.anim = 0.0f;
    }

    private void kill(Insect insect, String str) {
        insect.alive = false;
        burst(insect.col, insect.row, -3394731);
        toast(str);
        checkExtinct();
    }

    private void checkExtinct() {
        if (this.state != 0) {
            return;
        }
        for (int i = this.seqIndex; i < this.spec.sequence.length; i++) {
            int iOwner = Cell.owner(this.spec.sequence[i]);
            if (!hasLiving(iOwner)) {
                lose(Insect.name(iOwner) + " is gone. Sequence cannot finish.");
                return;
            }
        }
    }

    private boolean hasLiving(int i) {
        for (Insect insect : this.insects) {
            if (insect.alive && !insect.delivered && insect.type == i) {
                return true;
            }
        }
        return false;
    }

    private void lose(String str) {
        this.state = 2;
        this.loseReason = str;
        this.combo = 0;
        this.banner = str;
    }

    public Insect insectAt(int i, int i2) {
        for (Insect insect : this.insects) {
            if (insect.alive && !insect.delivered && insect.row == i && insect.col == i2) {
                return insect;
            }
        }
        return null;
    }

    public boolean in(int i, int i2) {
        return i >= 0 && i2 >= 0 && i < this.spec.rows && i2 < this.spec.cols;
    }

    public boolean blocked(Insect insect, int i, int i2) {
        if (!in(i, i2)) {
            return true;
        }
        Cell cell = this.grid[i][i2];
        if (cell.type == 4) {
            return true;
        }
        if (cell.type == 6 && !cell.gateOpen) {
            return true;
        }
        Insect insectInsectAt = insectAt(i, i2);
        return (insectInsectAt == null || insectInsectAt == insect) ? false : true;
    }

    public int flowDir(int i) {
        return this.windOn ? (i + 2) % 4 : i;
    }

    public void toast(String str) {
        this.toast = str;
        this.toastLife = 2.1f;
        this.floaters.add(new Floater(str, 2.0f));
    }

    public void burst(float f, float f2, int i) {
        for (int i2 = 0; i2 < 10; i2++) {
            Spark spark = new Spark();
            spark.x = f + 0.5f;
            spark.y = f2 + 0.5f;
            spark.vx = (this.rng.nextFloat() - 0.5f) * 3.2f;
            spark.vy = (this.rng.nextFloat() - 0.5f) * 3.2f;
            spark.life = (this.rng.nextFloat() * 0.4f) + 0.45f;
            spark.color = i;
            this.sparks.add(spark);
        }
    }

    private void tickVfx(float f) {
        Iterator<Floater> it = this.floaters.iterator();
        while (it.hasNext()) {
            Floater next = it.next();
            next.life -= f;
            next.y -= 28.0f * f;
            if (next.life <= 0.0f) {
                it.remove();
            }
        }
        Iterator<Spark> it2 = this.sparks.iterator();
        while (it2.hasNext()) {
            Spark next2 = it2.next();
            next2.life -= f;
            next2.x += next2.vx * f;
            next2.y += next2.vy * f;
            if (next2.life <= 0.0f) {
                it2.remove();
            }
        }
    }

    public static final class Floater {
        public float life;
        public final String text;
        public float y;

        Floater(String str, float f) {
            this.text = str;
            this.life = f;
        }
    }
}
