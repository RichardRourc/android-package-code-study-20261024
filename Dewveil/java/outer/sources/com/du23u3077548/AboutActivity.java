package com.du23u3077548;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

/* JADX INFO: loaded from: classes.dex */
public class AboutActivity extends Activity {
    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.activity_about);
        findViewById(R.id.btnBack).setOnClickListener(new View.OnClickListener() { // from class: com.du23u3077548.AboutActivity$$ExternalSyntheticLambda0
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.lambda$onCreate$0(view);
            }
        });
        ((TextView) findViewById(R.id.aboutBody)).setText("Dewveil Relic\n\nYou are not a hero. You are the dew-vein keeper of a forgotten court. A living crown rests on a velvet cushion, with a griffin perched on its peak. Firefly, ladybug, and butterfly will return to their seats — but each walks only its own path.\n\n[How to play]\nSwipe: lay a directed dew vein on adjacent tiles. Firefly and butterfly mostly follow veins.\nTap a lily: rotate its flow to steer the ladybug, who only walks straight.\nTap a gem pad above a column: spend 2 dew to pulse every envoy in that column one tile up.\nSeal on the beat: gems flare in a short window. Tap the correct seat while it glows to lock the sequence. A mistimed tap locks the seat for three beats. The wrong envoy bounces away.\nGriffin wind: spend 3 dew to reverse every lily and vein for a few beats.\n\n[Win and lose]\nFill the crown sequence in order to win. If a still-needed envoy is gone, or the beat clock runs out, the weave breaks.\n\n[From the icon]\nThe crown, griffin, emerald, diamond fire, gold filigree, and cushion were split from the launcher art. The crown is the goal, the griffin drives the wind, and the three gems are the seal seats.\n\nAn original piece. It does not copy any known commercial character or trademark.");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void lambda$onCreate$0(View view) {
        finish();
    }
}
