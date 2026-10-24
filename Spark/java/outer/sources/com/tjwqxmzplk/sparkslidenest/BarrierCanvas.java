package com.tjwqxmzplk.sparkslidenest;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.os.Handler;
import android.os.Looper;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import androidx.core.app.NotificationCompat;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.random.Random;
import kotlin.ranges.RangesKt;

/* JADX INFO: compiled from: BarrierCanvas.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(d1 = {"\u0000s\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u0007\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004*\u0001'\u0018\u00002\u00020\u0001:\u0002<=B\u001d\b\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0006\u0010)\u001a\u00020*J\u0006\u0010+\u001a\u00020*J\u0006\u0010,\u001a\u00020*J(\u0010-\u001a\u00020*2\u0006\u0010.\u001a\u00020\u00132\u0006\u0010/\u001a\u00020\u00132\u0006\u00100\u001a\u00020\u00132\u0006\u00101\u001a\u00020\u0013H\u0014J\u0010\u00102\u001a\u00020\u001e2\u0006\u00103\u001a\u000204H\u0016J\b\u00105\u001a\u00020*H\u0002J\b\u00106\u001a\u00020*H\u0002J\b\u00107\u001a\u00020*H\u0002J\u0010\u00108\u001a\u00020*2\u0006\u00109\u001a\u00020:H\u0014J\b\u0010;\u001a\u00020*H\u0014R\u001c\u0010\b\u001a\u0004\u0018\u00010\tX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\n\u0010\u000b\"\u0004\b\f\u0010\rR\u001e\u0010\u000e\u001a\u0012\u0012\u0004\u0012\u00020\u00100\u000fj\b\u0012\u0004\u0012\u00020\u0010`\u0011X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0014\u001a\u00020\u0013X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0019\u001a\u00020\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u0013X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001b\u001a\u00020\u0013X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001c\u001a\u00020\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001d\u001a\u00020\u001eX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001f\u001a\u00020\u001eX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010 \u001a\u00020\u0013X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010!\u001a\u00020\"X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010#\u001a\u00020$X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010%\u001a\u00020$X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010&\u001a\u00020'X\u0082\u0004¢\u0006\u0004\n\u0002\u0010(¨\u0006>"}, d2 = {"Lcom/tjwqxmzplk/sparkslidenest/BarrierCanvas;", "Landroid/view/View;", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V", "arenaSink", "Lcom/tjwqxmzplk/sparkslidenest/BarrierCanvas$ArenaSink;", "getArenaSink", "()Lcom/tjwqxmzplk/sparkslidenest/BarrierCanvas$ArenaSink;", "setArenaSink", "(Lcom/tjwqxmzplk/sparkslidenest/BarrierCanvas$ArenaSink;)V", "sparks", "Ljava/util/ArrayList;", "Lcom/tjwqxmzplk/sparkslidenest/BarrierCanvas$NovaDot;", "Lkotlin/collections/ArrayList;", "marks", "", "misses", "boardX", "", "boardW", "boardH", "boardY", "spawnGap", "tickCount", "fallBase", "running", "", "finished", "grace", "clock", "Landroid/os/Handler;", "sparkPaint", "Landroid/graphics/Paint;", "boardPaint", "pulse", "com/tjwqxmzplk/sparkslidenest/BarrierCanvas$pulse$1", "Lcom/tjwqxmzplk/sparkslidenest/BarrierCanvas$pulse$1;", "startPulse", "", "stopPulse", "freshRun", "onSizeChanged", "w", "h", "oldw", "oldh", "onTouchEvent", NotificationCompat.CATEGORY_EVENT, "Landroid/view/MotionEvent;", "stepWorld", "emitSpark", "closeArena", "onDraw", "canvas", "Landroid/graphics/Canvas;", "onDetachedFromWindow", "ArenaSink", "NovaDot", "app_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class BarrierCanvas extends View {
    private ArenaSink arenaSink;
    private float boardH;
    private final Paint boardPaint;
    private float boardW;
    private float boardX;
    private float boardY;
    private final Handler clock;
    private float fallBase;
    private boolean finished;
    private int grace;
    private int marks;
    private int misses;
    private final BarrierCanvas$pulse$1 pulse;
    private boolean running;
    private final Paint sparkPaint;
    private final ArrayList<NovaDot> sparks;
    private int spawnGap;
    private int tickCount;

    /* JADX INFO: compiled from: BarrierCanvas.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\bf\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&J\u0018\u0010\u0006\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0005H&¨\u0006\b"}, d2 = {"Lcom/tjwqxmzplk/sparkslidenest/BarrierCanvas$ArenaSink;", "", "onMarksChanged", "", "marks", "", "onArenaEnded", "peak", "app_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public interface ArenaSink {
        void onArenaEnded(int marks, int peak);

        void onMarksChanged(int marks);
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public BarrierCanvas(Context context) {
        this(context, null, 2, 0 == true ? 1 : 0);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    public /* synthetic */ BarrierCanvas(Context context, AttributeSet attributeSet, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i & 2) != 0 ? null : attributeSet);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Type inference failed for: r2v11, types: [com.tjwqxmzplk.sparkslidenest.BarrierCanvas$pulse$1] */
    public BarrierCanvas(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        Intrinsics.checkNotNullParameter(context, "context");
        this.sparks = new ArrayList<>();
        this.boardX = 0.5f;
        this.boardW = 160.0f;
        this.boardH = 22.0f;
        this.spawnGap = 70;
        this.fallBase = 3.2f;
        this.grace = 90;
        this.clock = new Handler(Looper.getMainLooper());
        Paint paint = new Paint(1);
        paint.setStyle(Paint.Style.FILL);
        paint.setColor(-14796196);
        this.sparkPaint = paint;
        Paint paint2 = new Paint(1);
        paint2.setStyle(Paint.Style.FILL);
        paint2.setColor(-15066598);
        this.boardPaint = paint2;
        this.pulse = new Runnable() { // from class: com.tjwqxmzplk.sparkslidenest.BarrierCanvas$pulse$1
            @Override // java.lang.Runnable
            public void run() {
                if (!this.this$0.running || this.this$0.finished) {
                    return;
                }
                this.this$0.stepWorld();
                this.this$0.invalidate();
                this.this$0.clock.postDelayed(this, 16L);
            }
        };
    }

    /* JADX INFO: compiled from: BarrierCanvas.kt */
    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0015\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0082\b\u0018\u00002\u00020\u0001B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003¢\u0006\u0004\b\u0007\u0010\bJ\t\u0010\u0013\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0014\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0015\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0003HÆ\u0003J1\u0010\u0017\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\u0018\u001a\u00020\u00192\b\u0010\u001a\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001b\u001a\u00020\u001cHÖ\u0001J\t\u0010\u001d\u001a\u00020\u001eHÖ\u0001R\u001a\u0010\u0002\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\t\u0010\n\"\u0004\b\u000b\u0010\fR\u001a\u0010\u0004\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\r\u0010\n\"\u0004\b\u000e\u0010\fR\u001a\u0010\u0005\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000f\u0010\n\"\u0004\b\u0010\u0010\fR\u001a\u0010\u0006\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0011\u0010\n\"\u0004\b\u0012\u0010\f¨\u0006\u001f"}, d2 = {"Lcom/tjwqxmzplk/sparkslidenest/BarrierCanvas$NovaDot;", "", "px", "", "py", "fall", "span", "<init>", "(FFFF)V", "getPx", "()F", "setPx", "(F)V", "getPy", "setPy", "getFall", "setFall", "getSpan", "setSpan", "component1", "component2", "component3", "component4", "copy", "equals", "", "other", "hashCode", "", "toString", "", "app_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    private static final /* data */ class NovaDot {
        private float fall;
        private float px;
        private float py;
        private float span;

        public static /* synthetic */ NovaDot copy$default(NovaDot novaDot, float f, float f2, float f3, float f4, int i, Object obj) {
            if ((i & 1) != 0) {
                f = novaDot.px;
            }
            if ((i & 2) != 0) {
                f2 = novaDot.py;
            }
            if ((i & 4) != 0) {
                f3 = novaDot.fall;
            }
            if ((i & 8) != 0) {
                f4 = novaDot.span;
            }
            return novaDot.copy(f, f2, f3, f4);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final float getPx() {
            return this.px;
        }

        /* JADX INFO: renamed from: component2, reason: from getter */
        public final float getPy() {
            return this.py;
        }

        /* JADX INFO: renamed from: component3, reason: from getter */
        public final float getFall() {
            return this.fall;
        }

        /* JADX INFO: renamed from: component4, reason: from getter */
        public final float getSpan() {
            return this.span;
        }

        public final NovaDot copy(float px, float py, float fall, float span) {
            return new NovaDot(px, py, fall, span);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof NovaDot)) {
                return false;
            }
            NovaDot novaDot = (NovaDot) other;
            return Float.compare(this.px, novaDot.px) == 0 && Float.compare(this.py, novaDot.py) == 0 && Float.compare(this.fall, novaDot.fall) == 0 && Float.compare(this.span, novaDot.span) == 0;
        }

        public int hashCode() {
            return (((((Float.hashCode(this.px) * 31) + Float.hashCode(this.py)) * 31) + Float.hashCode(this.fall)) * 31) + Float.hashCode(this.span);
        }

        public String toString() {
            return "NovaDot(px=" + this.px + ", py=" + this.py + ", fall=" + this.fall + ", span=" + this.span + ")";
        }

        public NovaDot(float f, float f2, float f3, float f4) {
            this.px = f;
            this.py = f2;
            this.fall = f3;
            this.span = f4;
        }

        public final float getPx() {
            return this.px;
        }

        public final void setPx(float f) {
            this.px = f;
        }

        public final float getPy() {
            return this.py;
        }

        public final void setPy(float f) {
            this.py = f;
        }

        public final float getFall() {
            return this.fall;
        }

        public final void setFall(float f) {
            this.fall = f;
        }

        public final float getSpan() {
            return this.span;
        }

        public final void setSpan(float f) {
            this.span = f;
        }
    }

    public final ArenaSink getArenaSink() {
        return this.arenaSink;
    }

    public final void setArenaSink(ArenaSink arenaSink) {
        this.arenaSink = arenaSink;
    }

    public final void startPulse() {
        if (this.finished || this.running) {
            return;
        }
        this.running = true;
        this.clock.removeCallbacks(this.pulse);
        this.clock.post(this.pulse);
    }

    public final void stopPulse() {
        this.running = false;
        this.clock.removeCallbacks(this.pulse);
    }

    public final void freshRun() {
        stopPulse();
        this.sparks.clear();
        this.marks = 0;
        this.misses = 0;
        this.boardX = 0.5f;
        this.spawnGap = 70;
        this.tickCount = 0;
        this.fallBase = 3.2f;
        this.finished = false;
        this.grace = 90;
        ArenaSink arenaSink = this.arenaSink;
        if (arenaSink != null) {
            arenaSink.onMarksChanged(0);
        }
        invalidate();
    }

    @Override // android.view.View
    protected void onSizeChanged(int w, int h, int oldw, int oldh) {
        super.onSizeChanged(w, h, oldw, oldh);
        this.boardW = w * 0.34f;
        float f = h;
        float f2 = 0.028f * f;
        this.boardH = f2;
        this.boardY = (f - f2) - 36.0f;
        if (!this.sparks.isEmpty() || w <= 0) {
            return;
        }
        emitSpark();
    }

    @Override // android.view.View
    public boolean onTouchEvent(MotionEvent event) {
        int actionMasked;
        Intrinsics.checkNotNullParameter(event, "event");
        if (this.finished || getWidth() <= 0 || !((actionMasked = event.getActionMasked()) == 0 || actionMasked == 2)) {
            return true;
        }
        this.boardX = RangesKt.coerceIn(event.getX() / getWidth(), 0.08f, 0.92f);
        invalidate();
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void stepWorld() {
        if (getWidth() <= 0 || getHeight() <= 0) {
            return;
        }
        int i = this.tickCount + 1;
        this.tickCount = i;
        int i2 = this.grace;
        if (i2 > 0) {
            this.grace = i2 - 1;
        }
        if (i % this.spawnGap == 0) {
            emitSpark();
            if (this.tickCount % 240 == 0) {
                this.spawnGap = RangesKt.coerceAtLeast(this.spawnGap - 4, 28);
                this.fallBase = RangesKt.coerceAtMost(this.fallBase + 0.18f, 8.5f);
            }
        }
        float width = this.boardX * getWidth();
        float f = this.boardW;
        float f2 = width - (f / 2.0f);
        float f3 = f + f2;
        Iterator<NovaDot> it = this.sparks.iterator();
        Intrinsics.checkNotNullExpressionValue(it, "iterator(...)");
        while (it.hasNext()) {
            NovaDot next = it.next();
            Intrinsics.checkNotNullExpressionValue(next, "next(...)");
            NovaDot novaDot = next;
            novaDot.setPy(novaDot.getPy() + novaDot.getFall());
            if (novaDot.getPy() + novaDot.getSpan() >= this.boardY && novaDot.getPy() - novaDot.getSpan() <= this.boardY + this.boardH && novaDot.getPx() >= f2 && novaDot.getPx() <= f3) {
                int i3 = this.marks + 1;
                this.marks = i3;
                ArenaSink arenaSink = this.arenaSink;
                if (arenaSink != null) {
                    arenaSink.onMarksChanged(i3);
                }
                it.remove();
            } else if (novaDot.getPy() - novaDot.getSpan() > getHeight()) {
                it.remove();
                if (this.grace <= 0) {
                    int i4 = this.misses + 1;
                    this.misses = i4;
                    if (i4 >= 3) {
                        closeArena();
                        return;
                    }
                } else {
                    continue;
                }
            } else {
                continue;
            }
        }
    }

    private final void emitSpark() {
        if (getWidth() <= 0) {
            return;
        }
        this.sparks.add(new NovaDot((Random.INSTANCE.nextFloat() * RangesKt.coerceAtLeast(getWidth() - 56.0f, 1.0f)) + 28.0f, -18.0f, this.fallBase + (Random.INSTANCE.nextFloat() * 1.4f), (Random.INSTANCE.nextFloat() * 6.0f) + 12.0f));
    }

    private final void closeArena() {
        if (this.finished) {
            return;
        }
        this.finished = true;
        this.running = false;
        this.clock.removeCallbacks(this.pulse);
        ScoreVault scoreVault = ScoreVault.INSTANCE;
        Context context = getContext();
        Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
        scoreVault.writePeak(context, this.marks);
        ScoreVault scoreVault2 = ScoreVault.INSTANCE;
        Context context2 = getContext();
        Intrinsics.checkNotNullExpressionValue(context2, "getContext(...)");
        int peak = scoreVault2.readPeak(context2);
        ArenaSink arenaSink = this.arenaSink;
        if (arenaSink != null) {
            arenaSink.onArenaEnded(this.marks, peak);
        }
    }

    @Override // android.view.View
    protected void onDraw(Canvas canvas) {
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        super.onDraw(canvas);
        if (getWidth() <= 0 || getHeight() <= 0) {
            return;
        }
        float width = this.boardX * getWidth();
        float f = this.boardW;
        float f2 = width - (f / 2.0f);
        float f3 = this.boardY;
        canvas.drawRoundRect(f2, f3, f2 + f, f3 + this.boardH, 8.0f, 8.0f, this.boardPaint);
        Iterator<NovaDot> it = this.sparks.iterator();
        Intrinsics.checkNotNullExpressionValue(it, "iterator(...)");
        while (it.hasNext()) {
            NovaDot next = it.next();
            Intrinsics.checkNotNullExpressionValue(next, "next(...)");
            NovaDot novaDot = next;
            canvas.drawCircle(novaDot.getPx(), novaDot.getPy(), novaDot.getSpan(), this.sparkPaint);
        }
    }

    @Override // android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.clock.removeCallbacks(this.pulse);
    }
}
