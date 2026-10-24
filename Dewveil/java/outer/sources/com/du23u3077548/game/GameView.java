package com.du23u3077548.game;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.LinearGradient;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Shader;
import android.graphics.Typeface;
import android.util.AttributeSet;
import android.util.Log;
import android.view.MotionEvent;
import android.view.View;

/* JADX INFO: loaded from: classes.dex */
public class GameView extends View {
    private final Path arrow;
    private final Assets assets;
    private final RectF backBtn;
    private float boardH;
    private float boardW;
    private float cellSize;
    private int downC;
    private int downR;
    private float downX;
    private float downY;
    private boolean dragged;
    private final Runnable frame;
    private final RectF griffinBtn;
    private Host host;
    private int lastC;
    private long lastNs;
    private int lastR;
    private int lastState;
    private boolean loopOn;
    private final RectF nextBtn;
    private float originX;
    private float originY;
    private final Paint paint;
    private final RectF pauseBtn;
    private final RectF[] pulsePads;
    private final RectF replayBtn;
    private final Rect src;
    private final Paint text;
    private final RectF tmp;
    private GameWorld world;

    public interface Host {
        void onExit();

        void onNext(LevelSpec levelSpec);

        void onPersistWin(LevelSpec levelSpec, int i);

        void onRetry();
    }

    public GameView(Context context) {
        this(context, null);
    }

    public GameView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.paint = new Paint(1);
        Paint paint = new Paint(1);
        this.text = paint;
        this.tmp = new RectF();
        this.src = new Rect();
        this.arrow = new Path();
        this.griffinBtn = new RectF();
        this.pauseBtn = new RectF();
        this.backBtn = new RectF();
        this.replayBtn = new RectF();
        this.nextBtn = new RectF();
        this.pulsePads = new RectF[6];
        this.downR = -1;
        this.downC = -1;
        this.lastR = -1;
        this.lastC = -1;
        int i = 0;
        this.lastState = 0;
        this.frame = new Runnable() { // from class: com.du23u3077548.game.GameView.1
            @Override // java.lang.Runnable
            public void run() {
                if (GameView.this.loopOn) {
                    long jNanoTime = System.nanoTime();
                    if (GameView.this.lastNs == 0) {
                        GameView.this.lastNs = jNanoTime;
                    }
                    float fMin = Math.min(0.05f, (jNanoTime - GameView.this.lastNs) / 1.0E9f);
                    GameView.this.lastNs = jNanoTime;
                    if (GameView.this.world != null) {
                        GameView.this.world.update(fMin);
                        if (GameView.this.world.state == 1 && GameView.this.lastState != 1 && GameView.this.host != null) {
                            GameView.this.host.onPersistWin(GameView.this.world.spec, GameView.this.world.score);
                        }
                        GameView gameView = GameView.this;
                        gameView.lastState = gameView.world.state;
                    }
                    GameView.this.invalidate();
                    GameView.this.postOnAnimation(this);
                }
            }
        };
        this.assets = Assets.load(context);
        paint.setTypeface(Typeface.create(Typeface.SANS_SERIF, 1));
        while (true) {
            RectF[] rectFArr = this.pulsePads;
            if (i >= rectFArr.length) {
                return;
            }
            rectFArr[i] = new RectF();
            i++;
        }
    }

    public void bind(GameWorld gameWorld, Host host) {
        this.world = gameWorld;
        this.host = host;
        this.lastNs = 0L;
        this.lastState = 0;
        invalidate();
    }

    public GameWorld world() {
        return this.world;
    }

    @Override // android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.loopOn = true;
        this.lastNs = 0L;
        postOnAnimation(this.frame);
    }

    @Override // android.view.View
    protected void onDetachedFromWindow() {
        this.loopOn = false;
        super.onDetachedFromWindow();
    }

    @Override // android.view.View
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        if (this.world == null) {
            return;
        }
        try {
            layoutBoard();
            drawBackdrop(canvas);
            drawHud(canvas);
            drawBoard(canvas);
            drawInsects(canvas);
            drawSparks(canvas);
            drawChrome(canvas);
            if (this.world.paused && this.world.state == 0) {
                drawPause(canvas);
            }
            if (this.world.state != 0) {
                drawResult(canvas);
            }
        } catch (RuntimeException e) {
            Log.e("Dewveil", "draw failed", e);
        }
    }

    private void layoutBoard() {
        float width = getWidth();
        float height = getHeight();
        int i = this.world.spec.cols;
        int i2 = this.world.spec.rows;
        float fDp = dp(108.0f);
        float fDp2 = dp(32.0f);
        float f = i;
        float f2 = i2;
        float fMin = Math.min((width - dp(24.0f)) / f, (((height - fDp) - fDp2) - dp(78.0f)) / f2);
        this.cellSize = fMin;
        float f3 = f * fMin;
        this.boardW = f3;
        this.boardH = fMin * f2;
        this.originX = (width - f3) * 0.5f;
        this.originY = fDp + fDp2;
        float fMin2 = Math.min(dp(22.0f), this.cellSize * 0.42f);
        for (int i3 = 0; i3 < i; i3++) {
            float f4 = this.originX + ((i3 + 0.5f) * this.cellSize);
            float f5 = this.originY;
            this.pulsePads[i3].set(f4 - fMin2, (f5 - fDp2) + 4.0f, f4 + fMin2, f5 - 6.0f);
        }
        float fDp3 = dp(52.0f);
        this.griffinBtn.set(dp(14.0f), (height - fDp3) - dp(12.0f), dp(14.0f) + fDp3, height - dp(12.0f));
        this.pauseBtn.set(width - dp(86.0f), dp(8.0f), width - dp(10.0f), dp(40.0f));
        float fDp4 = dp(120.0f);
        float f6 = height * 0.52f;
        float f7 = width * 0.5f;
        float fDp5 = dp(50.0f) + f6;
        this.backBtn.set((f7 - fDp4) - dp(8.0f), f6, f7 - dp(8.0f), fDp5);
        this.replayBtn.set(dp(8.0f) + f7, f6, f7 + dp(8.0f) + fDp4, fDp5);
        float fDp6 = dp(188.0f);
        this.nextBtn.set((width - fDp6) * 0.5f, dp(10.0f) + fDp5, (width + fDp6) * 0.5f, fDp5 + dp(10.0f) + dp(44.0f));
    }

    private void drawBackdrop(Canvas canvas) {
        Bitmap bitmapBg = this.assets.bg(this.world.spec.bg);
        this.src.set(0, 0, bitmapBg.getWidth(), bitmapBg.getHeight());
        this.tmp.set(0.0f, 0.0f, getWidth(), getHeight());
        this.paint.setAlpha(255);
        canvas.drawBitmap(bitmapBg, this.src, this.tmp, this.paint);
        this.paint.setShader(new LinearGradient(0.0f, 0.0f, 0.0f, getHeight(), -1442376690, 1711739918, Shader.TileMode.CLAMP));
        canvas.drawRect(0.0f, 0.0f, getWidth(), getHeight(), this.paint);
        this.paint.setShader(null);
    }

    private void drawHud(Canvas canvas) {
        float width = getWidth();
        float fDp = dp(44.0f);
        float f = width * 0.5f;
        float f2 = 0.5f * fDp;
        this.tmp.set(f - f2, dp(6.0f), f2 + f, dp(6.0f) + fDp);
        drawContained(canvas, this.assets.crown, this.tmp);
        this.text.setTextAlign(Paint.Align.LEFT);
        this.text.setTextSize(dp(14.0f));
        this.text.setColor(-596048);
        canvas.drawText(this.world.spec.name, dp(12.0f), dp(24.0f), this.text);
        this.text.setTextSize(dp(11.0f));
        this.text.setColor(-2627886);
        canvas.drawText("Dew " + this.world.energy + "   Beats " + this.world.beatsLeft + "   Score " + this.world.score, dp(12.0f), dp(42.0f), this.text);
        float fDp2 = dp(12.0f);
        float fDp3 = dp(52.0f);
        int i = 0;
        while (true) {
            if (i >= this.world.spec.sequence.length) {
                break;
            }
            Bitmap bitmapGemOf = this.assets.gemOf(this.world.spec.sequence[i]);
            this.tmp.set(fDp2, fDp3, fDp2 + dp(22.0f), dp(22.0f) + fDp3);
            this.paint.setAlpha(i >= this.world.seqIndex ? 170 : 255);
            drawContained(canvas, bitmapGemOf, this.tmp);
            if (i == this.world.seqIndex) {
                this.paint.setStyle(Paint.Style.STROKE);
                this.paint.setStrokeWidth(2.5f);
                this.paint.setColor(this.world.socketGlow ? -3424 : -1999329218);
                canvas.drawRoundRect(this.tmp, 6.0f, 6.0f, this.paint);
                this.paint.setStyle(Paint.Style.FILL);
            }
            fDp2 += dp(26.0f);
            i++;
        }
        this.paint.setAlpha(255);
        this.text.setTextAlign(Paint.Align.CENTER);
        this.text.setTextSize(dp(11.0f));
        this.text.setColor(this.world.socketGlow ? -3424 : -1511196);
        canvas.drawText(this.world.socketGlow ? "SEAL NOW" : this.world.banner, f, dp(92.0f), this.text);
        this.paint.setColor(-871222746);
        canvas.drawRoundRect(this.pauseBtn, 14.0f, 14.0f, this.paint);
        this.paint.setStyle(Paint.Style.STROKE);
        this.paint.setStrokeWidth(2.0f);
        this.paint.setColor(-2840514);
        canvas.drawRoundRect(this.pauseBtn, 14.0f, 14.0f, this.paint);
        this.paint.setStyle(Paint.Style.FILL);
        this.text.setColor(-596048);
        this.text.setTextSize(dp(12.0f));
        canvas.drawText(this.world.paused ? "Resume" : "Pause", this.pauseBtn.centerX(), this.pauseBtn.centerY() + dp(4.0f), this.text);
    }

    private void drawBoard(Canvas canvas) {
        for (int i = 0; i < this.world.spec.rows; i++) {
            for (int i2 = 0; i2 < this.world.spec.cols; i2++) {
                Cell cell = this.world.grid[i][i2];
                float f = this.originX;
                float f2 = this.cellSize;
                float f3 = f + (i2 * f2);
                float f4 = this.originY + (i * f2);
                this.tmp.set(f3 + 3.0f, f4 + 3.0f, (f3 + f2) - 3.0f, (f4 + f2) - 3.0f);
                this.paint.setColor(cellColor(cell));
                canvas.drawRoundRect(this.tmp, 14.0f, 14.0f, this.paint);
                this.paint.setStyle(Paint.Style.STROKE);
                this.paint.setStrokeWidth(2.0f);
                this.paint.setColor(cell.vein ? -865146944 : 1725212734);
                canvas.drawRoundRect(this.tmp, 14.0f, 14.0f, this.paint);
                this.paint.setStyle(Paint.Style.FILL);
                if (cell.pulseGlow > 0) {
                    this.paint.setColor(872407674);
                    canvas.drawRoundRect(this.tmp, 14.0f, 14.0f, this.paint);
                }
                drawCellMark(canvas, cell, this.tmp);
            }
        }
        for (int i3 = 0; i3 < this.world.spec.cols; i3++) {
            this.paint.setColor(-585352664);
            canvas.drawRoundRect(this.pulsePads[i3], 8.0f, 8.0f, this.paint);
            this.paint.setStyle(Paint.Style.STROKE);
            this.paint.setStrokeWidth(2.0f);
            this.paint.setColor(-2840514);
            canvas.drawRoundRect(this.pulsePads[i3], 8.0f, 8.0f, this.paint);
            this.paint.setStyle(Paint.Style.FILL);
            RectF rectF = new RectF(this.pulsePads[i3]);
            rectF.inset(dp(5.0f), dp(5.0f));
            drawContained(canvas, this.assets.emerald, rectF);
        }
    }

    private void drawCellMark(Canvas canvas, Cell cell, RectF rectF) {
        if (cell.type == 1) {
            drawArrow(canvas, rectF, this.world.flowDir(cell.dir), -8585262);
        } else if (cell.type == 2) {
            this.paint.setColor(1713545424);
            canvas.drawOval(rectF.left + 10.0f, rectF.top + 18.0f, rectF.right - 10.0f, rectF.bottom - 10.0f, this.paint);
        } else if (cell.type == 3) {
            this.paint.setColor(-7656918);
            canvas.drawCircle(rectF.centerX(), rectF.centerY(), rectF.width() * 0.16f, this.paint);
        } else if (cell.type == 4) {
            this.paint.setColor(-10855848);
            canvas.drawRoundRect(rectF.left + 12.0f, rectF.top + 12.0f, rectF.right - 12.0f, rectF.bottom - 12.0f, 8.0f, 8.0f, this.paint);
        } else if (cell.type == 5) {
            this.paint.setColor(-3890854);
            canvas.drawRoundRect(rectF.left + 14.0f, rectF.top + 18.0f, rectF.right - 14.0f, rectF.bottom - 14.0f, 6.0f, 6.0f, this.paint);
        } else if (cell.type == 6) {
            this.paint.setColor(cell.gateOpen ? 860138086 : -1437982106);
            canvas.drawRoundRect(rectF, 14.0f, 14.0f, this.paint);
        } else if (Cell.socket(cell.type)) {
            Bitmap bitmapGemOf = this.assets.gemOf(cell.type);
            float fWidth = rectF.width() * 0.18f;
            this.tmp.set(rectF.left + fWidth, rectF.top + fWidth, rectF.right - fWidth, rectF.bottom - fWidth);
            this.paint.setAlpha(cell.sealed ? 80 : 255);
            drawContained(canvas, bitmapGemOf, this.tmp);
            this.paint.setAlpha(255);
            if (this.world.socketGlow && !cell.sealed && cell.lockBeats == 0) {
                this.paint.setStyle(Paint.Style.STROKE);
                this.paint.setStrokeWidth(4.0f);
                this.paint.setColor(-285216096);
                canvas.drawRoundRect(rectF, 14.0f, 14.0f, this.paint);
                this.paint.setStyle(Paint.Style.FILL);
            }
            if (cell.lockBeats > 0) {
                this.text.setTextAlign(Paint.Align.CENTER);
                this.text.setTextSize(dp(11.0f));
                this.text.setColor(-30584);
                canvas.drawText("LOCK", rectF.centerX(), rectF.centerY() + 6.0f, this.text);
            }
        }
        if (cell.vein) {
            drawArrow(canvas, rectF, this.world.flowDir(cell.flow), -6488096);
        }
    }

    private void drawArrow(Canvas canvas, RectF rectF, int i, int i2) {
        float fCenterX = rectF.centerX();
        float fCenterY = rectF.centerY();
        float fWidth = rectF.width() * 0.22f;
        this.arrow.reset();
        if (i == 0) {
            this.arrow.moveTo(fCenterX, fCenterY - fWidth);
            float f = fCenterY + (0.4f * fWidth);
            this.arrow.lineTo(fCenterX - fWidth, f);
            this.arrow.lineTo(fCenterX + fWidth, f);
        } else if (i == 1) {
            this.arrow.moveTo(fCenterX + fWidth, fCenterY);
            float f2 = fCenterX - (0.4f * fWidth);
            this.arrow.lineTo(f2, fCenterY - fWidth);
            this.arrow.lineTo(f2, fCenterY + fWidth);
        } else if (i == 2) {
            this.arrow.moveTo(fCenterX, fCenterY + fWidth);
            float f3 = fCenterY - (0.4f * fWidth);
            this.arrow.lineTo(fCenterX - fWidth, f3);
            this.arrow.lineTo(fCenterX + fWidth, f3);
        } else {
            this.arrow.moveTo(fCenterX - fWidth, fCenterY);
            float f4 = fCenterX + (0.4f * fWidth);
            this.arrow.lineTo(f4, fCenterY - fWidth);
            this.arrow.lineTo(f4, fCenterY + fWidth);
        }
        this.arrow.close();
        this.paint.setColor(i2);
        canvas.drawPath(this.arrow, this.paint);
    }

    private void drawInsects(Canvas canvas) {
        for (Insect insect : this.world.insects) {
            if (insect.alive) {
                float fEase = insect.col + ((insect.destCol - insect.col) * ease(insect.anim));
                float fEase2 = insect.row + ((insect.destRow - insect.row) * ease(insect.anim));
                float f = this.originX;
                float f2 = this.cellSize;
                float f3 = f + (fEase * f2);
                float f4 = this.originY + (fEase2 * f2);
                Bitmap bitmapInsect = this.assets.insect(insect.type);
                float f5 = this.cellSize;
                float f6 = 0.1f * f5;
                this.tmp.set(f3 + f6, f4 + f6, (f3 + f5) - f6, (f4 + f5) - f6);
                if (insect.type == 0) {
                    this.paint.setColor(1442801356);
                    canvas.drawCircle(this.tmp.centerX(), this.tmp.centerY(), this.cellSize * 0.28f, this.paint);
                }
                drawContained(canvas, bitmapInsect, this.tmp);
            }
        }
    }

    private void drawSparks(Canvas canvas) {
        for (GameWorld.Spark spark : this.world.sparks) {
            this.paint.setColor(spark.color);
            this.paint.setAlpha(Math.max(0, (int) ((spark.life / 0.8f) * 220.0f)));
            canvas.drawCircle(this.originX + (spark.x * this.cellSize), this.originY + (spark.y * this.cellSize), 5.0f, this.paint);
        }
        this.paint.setAlpha(255);
        if (this.world.toastLife > 0.0f) {
            this.text.setTextAlign(Paint.Align.CENTER);
            this.text.setTextSize(dp(14.0f));
            this.text.setColor(-2862);
            canvas.drawText(this.world.toast, getWidth() * 0.5f, this.originY + this.boardH + dp(22.0f), this.text);
        }
    }

    private void drawChrome(Canvas canvas) {
        drawContained(canvas, this.assets.griffin, this.griffinBtn);
        this.text.setTextAlign(Paint.Align.LEFT);
        this.text.setTextSize(dp(12.0f));
        this.text.setColor(-793944);
        canvas.drawText(this.world.griffinCd > 0 ? "CD " + this.world.griffinCd : "Griffin wind  ·  3 dew", this.griffinBtn.right + dp(10.0f), this.griffinBtn.centerY() + dp(4.0f), this.text);
    }

    private void drawPause(Canvas canvas) {
        this.paint.setColor(-1341713394);
        canvas.drawRect(0.0f, 0.0f, getWidth(), getHeight(), this.paint);
        drawPanel(canvas, getWidth() * 0.1f, getHeight() * 0.28f, getWidth() * 0.9f, getHeight() * 0.64f);
        this.text.setTextAlign(Paint.Align.CENTER);
        this.text.setTextSize(dp(22.0f));
        this.text.setColor(-596048);
        canvas.drawText("Paused", getWidth() * 0.5f, getHeight() * 0.38f, this.text);
        this.text.setTextSize(dp(13.0f));
        this.text.setColor(-1511196);
        canvas.drawText("Resume top-right, or leave this court", getWidth() * 0.5f, getHeight() * 0.44f, this.text);
        drawContained(canvas, this.assets.btnBack, this.backBtn);
        drawContained(canvas, this.assets.btnReplay, this.replayBtn);
    }

    private void drawResult(Canvas canvas) {
        String str;
        this.paint.setColor(-1341713394);
        canvas.drawRect(0.0f, 0.0f, getWidth(), getHeight(), this.paint);
        drawPanel(canvas, getWidth() * 0.08f, getHeight() * 0.26f, getWidth() * 0.92f, getHeight() * 0.68f);
        this.text.setTextAlign(Paint.Align.CENTER);
        this.text.setTextSize(dp(22.0f));
        this.text.setColor(-596048);
        canvas.drawText(this.world.state == 1 ? "Crown Restored" : "Dew Broken", getWidth() * 0.5f, getHeight() * 0.36f, this.text);
        this.text.setTextSize(dp(14.0f));
        this.text.setColor(-1511196);
        if (this.world.state == 1) {
            str = "Score " + this.world.score + "   Dew left " + this.world.energy;
        } else {
            str = this.world.loseReason;
        }
        canvas.drawText(str, getWidth() * 0.5f, getHeight() * 0.43f, this.text);
        drawContained(canvas, this.assets.btnBack, this.backBtn);
        drawContained(canvas, this.assets.btnReplay, this.replayBtn);
        if (this.world.state == 1) {
            drawPill(canvas, this.nextBtn, -3905006, -1531334);
            this.text.setTextSize(dp(16.0f));
            this.text.setColor(-1);
            canvas.drawText(this.world.spec.endless ? "Next Watch" : "Next Court", this.nextBtn.centerX(), this.nextBtn.centerY() + dp(5.0f), this.text);
        }
    }

    private int cellColor(Cell cell) {
        switch (cell.type) {
            case 1:
                return -1725927336;
            case 2:
                return -1726984080;
            case Cell.THORN /* 3 */:
                return -1723850720;
            case Cell.STONE /* 4 */:
                return -1722789812;
            case 5:
                return -1721218016;
            case Cell.GATE /* 6 */:
                return cell.gateOpen ? 1713393720 : -1724901312;
            default:
                return Cell.socket(cell.type) ? -1439028720 : -2011944928;
        }
    }

    private float ease(float f) {
        float fMax = Math.max(0.0f, Math.min(1.0f, f));
        return fMax * fMax * (3.0f - (fMax * 2.0f));
    }

    private float dp(float f) {
        return f * getResources().getDisplayMetrics().density;
    }

    private void drawContained(Canvas canvas, Bitmap bitmap, RectF rectF) {
        if (bitmap == null || rectF.width() <= 0.0f || rectF.height() <= 0.0f) {
            return;
        }
        float fMin = Math.min(rectF.width() / bitmap.getWidth(), rectF.height() / bitmap.getHeight());
        float width = bitmap.getWidth() * fMin;
        float height = bitmap.getHeight() * fMin;
        float fCenterX = rectF.centerX() - (width * 0.5f);
        float fCenterY = rectF.centerY() - (0.5f * height);
        this.src.set(0, 0, bitmap.getWidth(), bitmap.getHeight());
        this.tmp.set(fCenterX, fCenterY, width + fCenterX, height + fCenterY);
        canvas.drawBitmap(bitmap, this.src, this.tmp, this.paint);
    }

    private void drawPanel(Canvas canvas, float f, float f2, float f3, float f4) {
        this.tmp.set(f, f2, f3, f4);
        this.paint.setColor(-300670440);
        canvas.drawRoundRect(this.tmp, dp(18.0f), dp(18.0f), this.paint);
        this.paint.setStyle(Paint.Style.STROKE);
        this.paint.setStrokeWidth(dp(2.0f));
        this.paint.setColor(-2840514);
        canvas.drawRoundRect(this.tmp, dp(18.0f), dp(18.0f), this.paint);
        this.paint.setStyle(Paint.Style.FILL);
    }

    private void drawPill(Canvas canvas, RectF rectF, int i, int i2) {
        this.paint.setShader(new LinearGradient(rectF.left, rectF.bottom, rectF.left, rectF.top, i, i2, Shader.TileMode.CLAMP));
        canvas.drawRoundRect(rectF, rectF.height() * 0.5f, rectF.height() * 0.5f, this.paint);
        this.paint.setShader(null);
        this.paint.setStyle(Paint.Style.STROKE);
        this.paint.setStrokeWidth(dp(1.5f));
        this.paint.setColor(-597382);
        canvas.drawRoundRect(rectF, rectF.height() * 0.5f, rectF.height() * 0.5f, this.paint);
        this.paint.setStyle(Paint.Style.FILL);
    }

    @Override // android.view.View
    public boolean onTouchEvent(MotionEvent motionEvent) {
        int i;
        int i2;
        if (this.world == null) {
            return true;
        }
        float x = motionEvent.getX();
        float y = motionEvent.getY();
        if (motionEvent.getAction() == 0) {
            this.downX = x;
            this.downY = y;
            this.dragged = false;
            int[] iArrHitCell = hitCell(x, y);
            int i3 = iArrHitCell[0];
            this.downR = i3;
            int i4 = iArrHitCell[1];
            this.downC = i4;
            this.lastR = i3;
            this.lastC = i4;
            return true;
        }
        if (motionEvent.getAction() == 2) {
            if (Math.hypot(x - this.downX, y - this.downY) > this.cellSize * 0.35f) {
                this.dragged = true;
            }
            int[] iArrHitCell2 = hitCell(x, y);
            if (this.world.state == 0 && !this.world.paused && (i = iArrHitCell2[0]) >= 0 && (i != (i2 = this.lastR) || iArrHitCell2[1] != this.lastC)) {
                if (i2 >= 0 && Math.abs(i - i2) + Math.abs(iArrHitCell2[1] - this.lastC) == 1) {
                    this.world.paintVein(iArrHitCell2[0], iArrHitCell2[1], this.lastR, this.lastC);
                    if (!this.world.grid[this.lastR][this.lastC].vein) {
                        GameWorld gameWorld = this.world;
                        int i5 = this.lastR;
                        int i6 = this.lastC;
                        gameWorld.paintVein(i5, i6, i5, i6);
                    }
                }
                this.lastR = iArrHitCell2[0];
                this.lastC = iArrHitCell2[1];
            }
            return true;
        }
        if (motionEvent.getAction() == 1) {
            handleUp(x, y);
        }
        return true;
    }

    private void handleUp(float f, float f2) {
        Host host;
        Host host2;
        int i;
        if (this.pauseBtn.contains(f, f2) && this.world.state == 0) {
            GameWorld gameWorld = this.world;
            gameWorld.paused = !gameWorld.paused;
            return;
        }
        if (this.world.paused || this.world.state != 0) {
            if (this.backBtn.contains(f, f2) && (host2 = this.host) != null) {
                host2.onExit();
                return;
            }
            if (this.replayBtn.contains(f, f2) && (host = this.host) != null) {
                host.onRetry();
                return;
            }
            if (this.world.state == 1 && this.nextBtn.contains(f, f2) && this.host != null) {
                if (this.world.state == 1) {
                    this.host.onPersistWin(this.world.spec, this.world.score);
                }
                this.host.onNext(this.world.spec);
                return;
            } else if (this.world.paused) {
                return;
            }
        }
        if (this.world.state == 0 && this.griffinBtn.contains(f, f2)) {
            this.world.griffinWind();
            return;
        }
        if (this.world.state == 0) {
            for (int i2 = 0; i2 < this.world.spec.cols; i2++) {
                if (this.pulsePads[i2].contains(f, f2)) {
                    this.world.pulseColumn(i2);
                    return;
                }
            }
        }
        if (this.dragged || (i = this.downR) < 0) {
            return;
        }
        this.world.tapCell(i, this.downC);
    }

    private int[] hitCell(float f, float f2) {
        int iFloor = (int) Math.floor((f - this.originX) / this.cellSize);
        int iFloor2 = (int) Math.floor((f2 - this.originY) / this.cellSize);
        if (this.world.in(iFloor2, iFloor)) {
            return new int[]{iFloor2, iFloor};
        }
        return new int[]{-1, -1};
    }
}
