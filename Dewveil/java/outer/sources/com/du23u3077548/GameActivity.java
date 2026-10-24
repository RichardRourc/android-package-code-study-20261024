package com.du23u3077548;

import android.app.Activity;
import android.os.Bundle;
import com.du23u3077548.game.GameView;
import com.du23u3077548.game.GameWorld;
import com.du23u3077548.game.LevelBank;
import com.du23u3077548.game.LevelSpec;
import com.du23u3077548.game.Prefs;
import java.util.Random;

/* JADX INFO: loaded from: classes.dex */
public class GameActivity extends Activity implements GameView.Host {
    public static final String EXTRA_LEVEL = "level";
    public static final String EXTRA_MODE = "mode";
    public static final int MODE_CAMPAIGN = 0;
    public static final int MODE_ENDLESS = 1;
    private GameView gameView;
    private int levelId;
    private int mode;
    private int night;
    private final Random rng = new Random();
    private boolean savedWin;

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.activity_game);
        this.gameView = (GameView) findViewById(R.id.gameView);
        this.mode = getIntent().getIntExtra(EXTRA_MODE, 0);
        this.levelId = getIntent().getIntExtra(EXTRA_LEVEL, 1);
        startLevel();
    }

    private void startLevel() {
        LevelSpec levelSpecCampaign;
        this.savedWin = false;
        if (this.mode == 1) {
            levelSpecCampaign = LevelBank.endless(this.night, this.rng);
        } else {
            levelSpecCampaign = LevelBank.campaign(Math.max(1, Math.min(this.levelId, 10)));
        }
        this.gameView.bind(new GameWorld(levelSpecCampaign), this);
    }

    @Override // com.du23u3077548.game.GameView.Host
    public void onExit() {
        finish();
    }

    @Override // com.du23u3077548.game.GameView.Host
    public void onPersistWin(LevelSpec levelSpec, int i) {
        if (this.savedWin) {
            return;
        }
        this.savedWin = true;
        if (levelSpec.endless) {
            Prefs.endlessBest(this, i);
        } else {
            Prefs.best(this, levelSpec.id, i);
            Prefs.unlock(this, levelSpec.id + 1);
        }
    }

    @Override // com.du23u3077548.game.GameView.Host
    public void onNext(LevelSpec levelSpec) {
        if (this.mode == 1) {
            this.night++;
        } else {
            this.levelId = Math.min(10, levelSpec.id + 1);
        }
        startLevel();
    }

    @Override // com.du23u3077548.game.GameView.Host
    public void onRetry() {
        startLevel();
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        GameWorld gameWorldWorld = this.gameView.world();
        if (gameWorldWorld != null && gameWorldWorld.state == 0 && !gameWorldWorld.paused) {
            gameWorldWorld.paused = true;
        } else {
            super.onBackPressed();
        }
    }
}
