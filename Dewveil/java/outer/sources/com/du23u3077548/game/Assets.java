package com.du23u3077548.game;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import com.du23u3077548.R;

/* JADX INFO: loaded from: classes.dex */
public final class Assets {
    private static Assets inst;
    public Bitmap bgCrypt;
    public Bitmap bgFalls;
    public Bitmap bgGrove;
    public Bitmap bgPond;
    public Bitmap btnAccurate;
    public Bitmap btnAmber;
    public Bitmap btnAzure;
    public Bitmap btnBack;
    public Bitmap btnClose;
    public Bitmap btnReplay;
    public Bitmap butterfly;
    public Bitmap butterflyBig;
    public Bitmap crown;
    public Bitmap cushion;
    public Bitmap decoFirefly;
    public Bitmap decoMoss;
    public Bitmap decoPads;
    public Bitmap diamond;
    public Bitmap emerald;
    public Bitmap firefly;
    public Bitmap fireflyBig;
    public Bitmap frameBar;
    public Bitmap frameChip;
    public Bitmap frameGem;
    public Bitmap gold;
    public Bitmap griffin;
    public Bitmap halo;
    public Bitmap ladybug;
    public Bitmap ladybugBig;
    public Bitmap panel;
    public Bitmap vine;

    public static Assets get() {
        return inst;
    }

    public static Assets load(Context context) {
        Assets assets = inst;
        if (assets != null) {
            return assets;
        }
        Assets assets2 = new Assets();
        BitmapFactory.Options options = new BitmapFactory.Options();
        options.inPreferredConfig = Bitmap.Config.ARGB_8888;
        options.inScaled = false;
        assets2.crown = dec(context, R.drawable.crown_relic, options);
        assets2.griffin = dec(context, R.drawable.el_griffin, options);
        assets2.emerald = dec(context, R.drawable.el_emerald, options);
        assets2.diamond = dec(context, R.drawable.el_diamond, options);
        assets2.gold = dec(context, R.drawable.el_gold, options);
        assets2.halo = dec(context, R.drawable.el_halo, options);
        assets2.cushion = dec(context, R.drawable.el_cushion, options);
        assets2.vine = dec(context, R.drawable.el_vine, options);
        assets2.firefly = dec(context, R.drawable.spr_firefly, options);
        assets2.ladybug = dec(context, R.drawable.spr_ladybug, options);
        assets2.butterfly = dec(context, R.drawable.spr_butterfly, options);
        assets2.fireflyBig = dec(context, R.drawable.spr_firefly_big, options);
        assets2.ladybugBig = dec(context, R.drawable.spr_ladybug_big, options);
        assets2.butterflyBig = dec(context, R.drawable.spr_butterfly_big, options);
        assets2.bgGrove = dec(context, R.drawable.bg_grove, options);
        assets2.bgPond = dec(context, R.drawable.bg_pond, options);
        assets2.bgFalls = dec(context, R.drawable.bg_falls, options);
        assets2.bgCrypt = dec(context, R.drawable.bg_crypt, options);
        assets2.btnAmber = dec(context, R.drawable.btn_amber, options);
        assets2.btnAzure = dec(context, R.drawable.btn_azure, options);
        assets2.btnBack = dec(context, R.drawable.btn_back, options);
        assets2.btnReplay = dec(context, R.drawable.btn_replay, options);
        assets2.btnAccurate = dec(context, R.drawable.btn_accurate, options);
        assets2.btnClose = dec(context, R.drawable.btn_close, options);
        assets2.frameBar = dec(context, R.drawable.frame_bar, options);
        assets2.frameGem = dec(context, R.drawable.frame_gem, options);
        assets2.frameChip = dec(context, R.drawable.frame_chip, options);
        assets2.panel = dec(context, R.drawable.panel_board, options);
        assets2.decoFirefly = dec(context, R.drawable.deco_firefly, options);
        assets2.decoPads = dec(context, R.drawable.deco_pads, options);
        assets2.decoMoss = dec(context, R.drawable.deco_moss, options);
        inst = assets2;
        return assets2;
    }

    public Bitmap bg(int i) {
        if (i == 1) {
            return this.bgPond;
        }
        if (i == 2) {
            return this.bgFalls;
        }
        if (i == 3) {
            return this.bgCrypt;
        }
        return this.bgGrove;
    }

    public Bitmap insect(int i) {
        if (i == 1) {
            return this.ladybug;
        }
        if (i == 2) {
            return this.butterfly;
        }
        return this.firefly;
    }

    public Bitmap gemOf(int i) {
        if (i == 8) {
            return this.gold;
        }
        if (i == 9) {
            return this.diamond;
        }
        return this.emerald;
    }

    private static Bitmap dec(Context context, int i, BitmapFactory.Options options) {
        return BitmapFactory.decodeResource(context.getResources(), i, options);
    }
}
