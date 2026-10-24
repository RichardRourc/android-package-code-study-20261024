package com.google.android.gms.measurement.internal;

import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Pair;
import com.google.android.gms.common.internal.Preconditions;
import java.io.IOException;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.Callable;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzgg implements Callable {
    final /* synthetic */ zzau zza;
    final /* synthetic */ String zzb;
    final /* synthetic */ zzgl zzc;

    zzgg(zzgl zzglVar, zzau zzauVar, String str) {
        this.zzc = zzglVar;
        this.zza = zzauVar;
        this.zzb = str;
    }

    /* JADX WARN: Code duplicated, block: B:101:0x03e1 A[Catch: all -> 0x05bf, TryCatch #3 {all -> 0x05bf, blocks: (B:11:0x007f, B:13:0x008b, B:16:0x00a7, B:18:0x00ad, B:20:0x00c1, B:22:0x00d8, B:23:0x00df, B:25:0x00e9, B:26:0x00f6, B:28:0x0100, B:29:0x010d, B:31:0x0118, B:32:0x0120, B:34:0x013c, B:38:0x0149, B:40:0x015e, B:42:0x016e, B:44:0x0176, B:46:0x017c, B:47:0x017f, B:49:0x018e, B:51:0x01a2, B:53:0x01ac, B:54:0x01bd, B:56:0x01c1, B:58:0x01ce, B:60:0x01e7, B:61:0x021e, B:63:0x0226, B:65:0x022c, B:66:0x0243, B:68:0x024d, B:69:0x025a, B:70:0x026c, B:72:0x0272, B:78:0x0288, B:81:0x02b2, B:83:0x02d5, B:85:0x02e2, B:87:0x02ee, B:88:0x0301, B:90:0x0307, B:92:0x0319, B:94:0x031f, B:95:0x033c, B:96:0x0342, B:98:0x0348, B:99:0x037e, B:101:0x03e1, B:102:0x03f9, B:104:0x0407, B:106:0x0449, B:107:0x047e, B:109:0x0484, B:111:0x0497, B:112:0x04a4, B:114:0x04f0, B:115:0x04fe, B:117:0x0506, B:118:0x0509, B:120:0x0511, B:123:0x051a, B:122:0x0517, B:105:0x0436, B:80:0x028c, B:130:0x05a5, B:35:0x0140, B:37:0x0146), top: B:142:0x007f, inners: #0, #2 }] */
    /* JADX WARN: Code duplicated, block: B:104:0x0407 A[Catch: all -> 0x05bf, TryCatch #3 {all -> 0x05bf, blocks: (B:11:0x007f, B:13:0x008b, B:16:0x00a7, B:18:0x00ad, B:20:0x00c1, B:22:0x00d8, B:23:0x00df, B:25:0x00e9, B:26:0x00f6, B:28:0x0100, B:29:0x010d, B:31:0x0118, B:32:0x0120, B:34:0x013c, B:38:0x0149, B:40:0x015e, B:42:0x016e, B:44:0x0176, B:46:0x017c, B:47:0x017f, B:49:0x018e, B:51:0x01a2, B:53:0x01ac, B:54:0x01bd, B:56:0x01c1, B:58:0x01ce, B:60:0x01e7, B:61:0x021e, B:63:0x0226, B:65:0x022c, B:66:0x0243, B:68:0x024d, B:69:0x025a, B:70:0x026c, B:72:0x0272, B:78:0x0288, B:81:0x02b2, B:83:0x02d5, B:85:0x02e2, B:87:0x02ee, B:88:0x0301, B:90:0x0307, B:92:0x0319, B:94:0x031f, B:95:0x033c, B:96:0x0342, B:98:0x0348, B:99:0x037e, B:101:0x03e1, B:102:0x03f9, B:104:0x0407, B:106:0x0449, B:107:0x047e, B:109:0x0484, B:111:0x0497, B:112:0x04a4, B:114:0x04f0, B:115:0x04fe, B:117:0x0506, B:118:0x0509, B:120:0x0511, B:123:0x051a, B:122:0x0517, B:105:0x0436, B:80:0x028c, B:130:0x05a5, B:35:0x0140, B:37:0x0146), top: B:142:0x007f, inners: #0, #2 }] */
    /* JADX WARN: Code duplicated, block: B:105:0x0436 A[Catch: all -> 0x05bf, TryCatch #3 {all -> 0x05bf, blocks: (B:11:0x007f, B:13:0x008b, B:16:0x00a7, B:18:0x00ad, B:20:0x00c1, B:22:0x00d8, B:23:0x00df, B:25:0x00e9, B:26:0x00f6, B:28:0x0100, B:29:0x010d, B:31:0x0118, B:32:0x0120, B:34:0x013c, B:38:0x0149, B:40:0x015e, B:42:0x016e, B:44:0x0176, B:46:0x017c, B:47:0x017f, B:49:0x018e, B:51:0x01a2, B:53:0x01ac, B:54:0x01bd, B:56:0x01c1, B:58:0x01ce, B:60:0x01e7, B:61:0x021e, B:63:0x0226, B:65:0x022c, B:66:0x0243, B:68:0x024d, B:69:0x025a, B:70:0x026c, B:72:0x0272, B:78:0x0288, B:81:0x02b2, B:83:0x02d5, B:85:0x02e2, B:87:0x02ee, B:88:0x0301, B:90:0x0307, B:92:0x0319, B:94:0x031f, B:95:0x033c, B:96:0x0342, B:98:0x0348, B:99:0x037e, B:101:0x03e1, B:102:0x03f9, B:104:0x0407, B:106:0x0449, B:107:0x047e, B:109:0x0484, B:111:0x0497, B:112:0x04a4, B:114:0x04f0, B:115:0x04fe, B:117:0x0506, B:118:0x0509, B:120:0x0511, B:123:0x051a, B:122:0x0517, B:105:0x0436, B:80:0x028c, B:130:0x05a5, B:35:0x0140, B:37:0x0146), top: B:142:0x007f, inners: #0, #2 }] */
    /* JADX WARN: Code duplicated, block: B:109:0x0484 A[Catch: all -> 0x05bf, TryCatch #3 {all -> 0x05bf, blocks: (B:11:0x007f, B:13:0x008b, B:16:0x00a7, B:18:0x00ad, B:20:0x00c1, B:22:0x00d8, B:23:0x00df, B:25:0x00e9, B:26:0x00f6, B:28:0x0100, B:29:0x010d, B:31:0x0118, B:32:0x0120, B:34:0x013c, B:38:0x0149, B:40:0x015e, B:42:0x016e, B:44:0x0176, B:46:0x017c, B:47:0x017f, B:49:0x018e, B:51:0x01a2, B:53:0x01ac, B:54:0x01bd, B:56:0x01c1, B:58:0x01ce, B:60:0x01e7, B:61:0x021e, B:63:0x0226, B:65:0x022c, B:66:0x0243, B:68:0x024d, B:69:0x025a, B:70:0x026c, B:72:0x0272, B:78:0x0288, B:81:0x02b2, B:83:0x02d5, B:85:0x02e2, B:87:0x02ee, B:88:0x0301, B:90:0x0307, B:92:0x0319, B:94:0x031f, B:95:0x033c, B:96:0x0342, B:98:0x0348, B:99:0x037e, B:101:0x03e1, B:102:0x03f9, B:104:0x0407, B:106:0x0449, B:107:0x047e, B:109:0x0484, B:111:0x0497, B:112:0x04a4, B:114:0x04f0, B:115:0x04fe, B:117:0x0506, B:118:0x0509, B:120:0x0511, B:123:0x051a, B:122:0x0517, B:105:0x0436, B:80:0x028c, B:130:0x05a5, B:35:0x0140, B:37:0x0146), top: B:142:0x007f, inners: #0, #2 }] */
    /* JADX WARN: Code duplicated, block: B:114:0x04f0 A[Catch: all -> 0x05bf, TryCatch #3 {all -> 0x05bf, blocks: (B:11:0x007f, B:13:0x008b, B:16:0x00a7, B:18:0x00ad, B:20:0x00c1, B:22:0x00d8, B:23:0x00df, B:25:0x00e9, B:26:0x00f6, B:28:0x0100, B:29:0x010d, B:31:0x0118, B:32:0x0120, B:34:0x013c, B:38:0x0149, B:40:0x015e, B:42:0x016e, B:44:0x0176, B:46:0x017c, B:47:0x017f, B:49:0x018e, B:51:0x01a2, B:53:0x01ac, B:54:0x01bd, B:56:0x01c1, B:58:0x01ce, B:60:0x01e7, B:61:0x021e, B:63:0x0226, B:65:0x022c, B:66:0x0243, B:68:0x024d, B:69:0x025a, B:70:0x026c, B:72:0x0272, B:78:0x0288, B:81:0x02b2, B:83:0x02d5, B:85:0x02e2, B:87:0x02ee, B:88:0x0301, B:90:0x0307, B:92:0x0319, B:94:0x031f, B:95:0x033c, B:96:0x0342, B:98:0x0348, B:99:0x037e, B:101:0x03e1, B:102:0x03f9, B:104:0x0407, B:106:0x0449, B:107:0x047e, B:109:0x0484, B:111:0x0497, B:112:0x04a4, B:114:0x04f0, B:115:0x04fe, B:117:0x0506, B:118:0x0509, B:120:0x0511, B:123:0x051a, B:122:0x0517, B:105:0x0436, B:80:0x028c, B:130:0x05a5, B:35:0x0140, B:37:0x0146), top: B:142:0x007f, inners: #0, #2 }] */
    /* JADX WARN: Code duplicated, block: B:117:0x0506 A[Catch: all -> 0x05bf, TryCatch #3 {all -> 0x05bf, blocks: (B:11:0x007f, B:13:0x008b, B:16:0x00a7, B:18:0x00ad, B:20:0x00c1, B:22:0x00d8, B:23:0x00df, B:25:0x00e9, B:26:0x00f6, B:28:0x0100, B:29:0x010d, B:31:0x0118, B:32:0x0120, B:34:0x013c, B:38:0x0149, B:40:0x015e, B:42:0x016e, B:44:0x0176, B:46:0x017c, B:47:0x017f, B:49:0x018e, B:51:0x01a2, B:53:0x01ac, B:54:0x01bd, B:56:0x01c1, B:58:0x01ce, B:60:0x01e7, B:61:0x021e, B:63:0x0226, B:65:0x022c, B:66:0x0243, B:68:0x024d, B:69:0x025a, B:70:0x026c, B:72:0x0272, B:78:0x0288, B:81:0x02b2, B:83:0x02d5, B:85:0x02e2, B:87:0x02ee, B:88:0x0301, B:90:0x0307, B:92:0x0319, B:94:0x031f, B:95:0x033c, B:96:0x0342, B:98:0x0348, B:99:0x037e, B:101:0x03e1, B:102:0x03f9, B:104:0x0407, B:106:0x0449, B:107:0x047e, B:109:0x0484, B:111:0x0497, B:112:0x04a4, B:114:0x04f0, B:115:0x04fe, B:117:0x0506, B:118:0x0509, B:120:0x0511, B:123:0x051a, B:122:0x0517, B:105:0x0436, B:80:0x028c, B:130:0x05a5, B:35:0x0140, B:37:0x0146), top: B:142:0x007f, inners: #0, #2 }] */
    /* JADX WARN: Code duplicated, block: B:120:0x0511 A[Catch: all -> 0x05bf, TryCatch #3 {all -> 0x05bf, blocks: (B:11:0x007f, B:13:0x008b, B:16:0x00a7, B:18:0x00ad, B:20:0x00c1, B:22:0x00d8, B:23:0x00df, B:25:0x00e9, B:26:0x00f6, B:28:0x0100, B:29:0x010d, B:31:0x0118, B:32:0x0120, B:34:0x013c, B:38:0x0149, B:40:0x015e, B:42:0x016e, B:44:0x0176, B:46:0x017c, B:47:0x017f, B:49:0x018e, B:51:0x01a2, B:53:0x01ac, B:54:0x01bd, B:56:0x01c1, B:58:0x01ce, B:60:0x01e7, B:61:0x021e, B:63:0x0226, B:65:0x022c, B:66:0x0243, B:68:0x024d, B:69:0x025a, B:70:0x026c, B:72:0x0272, B:78:0x0288, B:81:0x02b2, B:83:0x02d5, B:85:0x02e2, B:87:0x02ee, B:88:0x0301, B:90:0x0307, B:92:0x0319, B:94:0x031f, B:95:0x033c, B:96:0x0342, B:98:0x0348, B:99:0x037e, B:101:0x03e1, B:102:0x03f9, B:104:0x0407, B:106:0x0449, B:107:0x047e, B:109:0x0484, B:111:0x0497, B:112:0x04a4, B:114:0x04f0, B:115:0x04fe, B:117:0x0506, B:118:0x0509, B:120:0x0511, B:123:0x051a, B:122:0x0517, B:105:0x0436, B:80:0x028c, B:130:0x05a5, B:35:0x0140, B:37:0x0146), top: B:142:0x007f, inners: #0, #2 }] */
    /* JADX WARN: Code duplicated, block: B:121:0x0515 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:122:0x0517 A[Catch: all -> 0x05bf, TryCatch #3 {all -> 0x05bf, blocks: (B:11:0x007f, B:13:0x008b, B:16:0x00a7, B:18:0x00ad, B:20:0x00c1, B:22:0x00d8, B:23:0x00df, B:25:0x00e9, B:26:0x00f6, B:28:0x0100, B:29:0x010d, B:31:0x0118, B:32:0x0120, B:34:0x013c, B:38:0x0149, B:40:0x015e, B:42:0x016e, B:44:0x0176, B:46:0x017c, B:47:0x017f, B:49:0x018e, B:51:0x01a2, B:53:0x01ac, B:54:0x01bd, B:56:0x01c1, B:58:0x01ce, B:60:0x01e7, B:61:0x021e, B:63:0x0226, B:65:0x022c, B:66:0x0243, B:68:0x024d, B:69:0x025a, B:70:0x026c, B:72:0x0272, B:78:0x0288, B:81:0x02b2, B:83:0x02d5, B:85:0x02e2, B:87:0x02ee, B:88:0x0301, B:90:0x0307, B:92:0x0319, B:94:0x031f, B:95:0x033c, B:96:0x0342, B:98:0x0348, B:99:0x037e, B:101:0x03e1, B:102:0x03f9, B:104:0x0407, B:106:0x0449, B:107:0x047e, B:109:0x0484, B:111:0x0497, B:112:0x04a4, B:114:0x04f0, B:115:0x04fe, B:117:0x0506, B:118:0x0509, B:120:0x0511, B:123:0x051a, B:122:0x0517, B:105:0x0436, B:80:0x028c, B:130:0x05a5, B:35:0x0140, B:37:0x0146), top: B:142:0x007f, inners: #0, #2 }] */
    /* JADX WARN: Code duplicated, block: B:143:0x0283 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:147:0x0319 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:150:0x0497 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:152:0x047e A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:60:0x01e7 A[Catch: all -> 0x05bf, TRY_ENTER, TRY_LEAVE, TryCatch #3 {all -> 0x05bf, blocks: (B:11:0x007f, B:13:0x008b, B:16:0x00a7, B:18:0x00ad, B:20:0x00c1, B:22:0x00d8, B:23:0x00df, B:25:0x00e9, B:26:0x00f6, B:28:0x0100, B:29:0x010d, B:31:0x0118, B:32:0x0120, B:34:0x013c, B:38:0x0149, B:40:0x015e, B:42:0x016e, B:44:0x0176, B:46:0x017c, B:47:0x017f, B:49:0x018e, B:51:0x01a2, B:53:0x01ac, B:54:0x01bd, B:56:0x01c1, B:58:0x01ce, B:60:0x01e7, B:61:0x021e, B:63:0x0226, B:65:0x022c, B:66:0x0243, B:68:0x024d, B:69:0x025a, B:70:0x026c, B:72:0x0272, B:78:0x0288, B:81:0x02b2, B:83:0x02d5, B:85:0x02e2, B:87:0x02ee, B:88:0x0301, B:90:0x0307, B:92:0x0319, B:94:0x031f, B:95:0x033c, B:96:0x0342, B:98:0x0348, B:99:0x037e, B:101:0x03e1, B:102:0x03f9, B:104:0x0407, B:106:0x0449, B:107:0x047e, B:109:0x0484, B:111:0x0497, B:112:0x04a4, B:114:0x04f0, B:115:0x04fe, B:117:0x0506, B:118:0x0509, B:120:0x0511, B:123:0x051a, B:122:0x0517, B:105:0x0436, B:80:0x028c, B:130:0x05a5, B:35:0x0140, B:37:0x0146), top: B:142:0x007f, inners: #0, #2 }] */
    /* JADX WARN: Code duplicated, block: B:63:0x0226 A[Catch: SecurityException -> 0x05a4, all -> 0x05bf, TryCatch #0 {SecurityException -> 0x05a4, blocks: (B:61:0x021e, B:63:0x0226, B:65:0x022c), top: B:136:0x021e, outer: #3 }] */
    /* JADX WARN: Code duplicated, block: B:68:0x024d A[Catch: all -> 0x05bf, TryCatch #3 {all -> 0x05bf, blocks: (B:11:0x007f, B:13:0x008b, B:16:0x00a7, B:18:0x00ad, B:20:0x00c1, B:22:0x00d8, B:23:0x00df, B:25:0x00e9, B:26:0x00f6, B:28:0x0100, B:29:0x010d, B:31:0x0118, B:32:0x0120, B:34:0x013c, B:38:0x0149, B:40:0x015e, B:42:0x016e, B:44:0x0176, B:46:0x017c, B:47:0x017f, B:49:0x018e, B:51:0x01a2, B:53:0x01ac, B:54:0x01bd, B:56:0x01c1, B:58:0x01ce, B:60:0x01e7, B:61:0x021e, B:63:0x0226, B:65:0x022c, B:66:0x0243, B:68:0x024d, B:69:0x025a, B:70:0x026c, B:72:0x0272, B:78:0x0288, B:81:0x02b2, B:83:0x02d5, B:85:0x02e2, B:87:0x02ee, B:88:0x0301, B:90:0x0307, B:92:0x0319, B:94:0x031f, B:95:0x033c, B:96:0x0342, B:98:0x0348, B:99:0x037e, B:101:0x03e1, B:102:0x03f9, B:104:0x0407, B:106:0x0449, B:107:0x047e, B:109:0x0484, B:111:0x0497, B:112:0x04a4, B:114:0x04f0, B:115:0x04fe, B:117:0x0506, B:118:0x0509, B:120:0x0511, B:123:0x051a, B:122:0x0517, B:105:0x0436, B:80:0x028c, B:130:0x05a5, B:35:0x0140, B:37:0x0146), top: B:142:0x007f, inners: #0, #2 }] */
    /* JADX WARN: Code duplicated, block: B:72:0x0272 A[Catch: all -> 0x05bf, TryCatch #3 {all -> 0x05bf, blocks: (B:11:0x007f, B:13:0x008b, B:16:0x00a7, B:18:0x00ad, B:20:0x00c1, B:22:0x00d8, B:23:0x00df, B:25:0x00e9, B:26:0x00f6, B:28:0x0100, B:29:0x010d, B:31:0x0118, B:32:0x0120, B:34:0x013c, B:38:0x0149, B:40:0x015e, B:42:0x016e, B:44:0x0176, B:46:0x017c, B:47:0x017f, B:49:0x018e, B:51:0x01a2, B:53:0x01ac, B:54:0x01bd, B:56:0x01c1, B:58:0x01ce, B:60:0x01e7, B:61:0x021e, B:63:0x0226, B:65:0x022c, B:66:0x0243, B:68:0x024d, B:69:0x025a, B:70:0x026c, B:72:0x0272, B:78:0x0288, B:81:0x02b2, B:83:0x02d5, B:85:0x02e2, B:87:0x02ee, B:88:0x0301, B:90:0x0307, B:92:0x0319, B:94:0x031f, B:95:0x033c, B:96:0x0342, B:98:0x0348, B:99:0x037e, B:101:0x03e1, B:102:0x03f9, B:104:0x0407, B:106:0x0449, B:107:0x047e, B:109:0x0484, B:111:0x0497, B:112:0x04a4, B:114:0x04f0, B:115:0x04fe, B:117:0x0506, B:118:0x0509, B:120:0x0511, B:123:0x051a, B:122:0x0517, B:105:0x0436, B:80:0x028c, B:130:0x05a5, B:35:0x0140, B:37:0x0146), top: B:142:0x007f, inners: #0, #2 }] */
    /* JADX WARN: Code duplicated, block: B:78:0x0288 A[Catch: all -> 0x05bf, TryCatch #3 {all -> 0x05bf, blocks: (B:11:0x007f, B:13:0x008b, B:16:0x00a7, B:18:0x00ad, B:20:0x00c1, B:22:0x00d8, B:23:0x00df, B:25:0x00e9, B:26:0x00f6, B:28:0x0100, B:29:0x010d, B:31:0x0118, B:32:0x0120, B:34:0x013c, B:38:0x0149, B:40:0x015e, B:42:0x016e, B:44:0x0176, B:46:0x017c, B:47:0x017f, B:49:0x018e, B:51:0x01a2, B:53:0x01ac, B:54:0x01bd, B:56:0x01c1, B:58:0x01ce, B:60:0x01e7, B:61:0x021e, B:63:0x0226, B:65:0x022c, B:66:0x0243, B:68:0x024d, B:69:0x025a, B:70:0x026c, B:72:0x0272, B:78:0x0288, B:81:0x02b2, B:83:0x02d5, B:85:0x02e2, B:87:0x02ee, B:88:0x0301, B:90:0x0307, B:92:0x0319, B:94:0x031f, B:95:0x033c, B:96:0x0342, B:98:0x0348, B:99:0x037e, B:101:0x03e1, B:102:0x03f9, B:104:0x0407, B:106:0x0449, B:107:0x047e, B:109:0x0484, B:111:0x0497, B:112:0x04a4, B:114:0x04f0, B:115:0x04fe, B:117:0x0506, B:118:0x0509, B:120:0x0511, B:123:0x051a, B:122:0x0517, B:105:0x0436, B:80:0x028c, B:130:0x05a5, B:35:0x0140, B:37:0x0146), top: B:142:0x007f, inners: #0, #2 }] */
    /* JADX WARN: Code duplicated, block: B:80:0x028c A[Catch: all -> 0x05bf, TryCatch #3 {all -> 0x05bf, blocks: (B:11:0x007f, B:13:0x008b, B:16:0x00a7, B:18:0x00ad, B:20:0x00c1, B:22:0x00d8, B:23:0x00df, B:25:0x00e9, B:26:0x00f6, B:28:0x0100, B:29:0x010d, B:31:0x0118, B:32:0x0120, B:34:0x013c, B:38:0x0149, B:40:0x015e, B:42:0x016e, B:44:0x0176, B:46:0x017c, B:47:0x017f, B:49:0x018e, B:51:0x01a2, B:53:0x01ac, B:54:0x01bd, B:56:0x01c1, B:58:0x01ce, B:60:0x01e7, B:61:0x021e, B:63:0x0226, B:65:0x022c, B:66:0x0243, B:68:0x024d, B:69:0x025a, B:70:0x026c, B:72:0x0272, B:78:0x0288, B:81:0x02b2, B:83:0x02d5, B:85:0x02e2, B:87:0x02ee, B:88:0x0301, B:90:0x0307, B:92:0x0319, B:94:0x031f, B:95:0x033c, B:96:0x0342, B:98:0x0348, B:99:0x037e, B:101:0x03e1, B:102:0x03f9, B:104:0x0407, B:106:0x0449, B:107:0x047e, B:109:0x0484, B:111:0x0497, B:112:0x04a4, B:114:0x04f0, B:115:0x04fe, B:117:0x0506, B:118:0x0509, B:120:0x0511, B:123:0x051a, B:122:0x0517, B:105:0x0436, B:80:0x028c, B:130:0x05a5, B:35:0x0140, B:37:0x0146), top: B:142:0x007f, inners: #0, #2 }] */
    /* JADX WARN: Code duplicated, block: B:83:0x02d5 A[Catch: all -> 0x05bf, TryCatch #3 {all -> 0x05bf, blocks: (B:11:0x007f, B:13:0x008b, B:16:0x00a7, B:18:0x00ad, B:20:0x00c1, B:22:0x00d8, B:23:0x00df, B:25:0x00e9, B:26:0x00f6, B:28:0x0100, B:29:0x010d, B:31:0x0118, B:32:0x0120, B:34:0x013c, B:38:0x0149, B:40:0x015e, B:42:0x016e, B:44:0x0176, B:46:0x017c, B:47:0x017f, B:49:0x018e, B:51:0x01a2, B:53:0x01ac, B:54:0x01bd, B:56:0x01c1, B:58:0x01ce, B:60:0x01e7, B:61:0x021e, B:63:0x0226, B:65:0x022c, B:66:0x0243, B:68:0x024d, B:69:0x025a, B:70:0x026c, B:72:0x0272, B:78:0x0288, B:81:0x02b2, B:83:0x02d5, B:85:0x02e2, B:87:0x02ee, B:88:0x0301, B:90:0x0307, B:92:0x0319, B:94:0x031f, B:95:0x033c, B:96:0x0342, B:98:0x0348, B:99:0x037e, B:101:0x03e1, B:102:0x03f9, B:104:0x0407, B:106:0x0449, B:107:0x047e, B:109:0x0484, B:111:0x0497, B:112:0x04a4, B:114:0x04f0, B:115:0x04fe, B:117:0x0506, B:118:0x0509, B:120:0x0511, B:123:0x051a, B:122:0x0517, B:105:0x0436, B:80:0x028c, B:130:0x05a5, B:35:0x0140, B:37:0x0146), top: B:142:0x007f, inners: #0, #2 }] */
    /* JADX WARN: Code duplicated, block: B:85:0x02e2 A[Catch: all -> 0x05bf, TryCatch #3 {all -> 0x05bf, blocks: (B:11:0x007f, B:13:0x008b, B:16:0x00a7, B:18:0x00ad, B:20:0x00c1, B:22:0x00d8, B:23:0x00df, B:25:0x00e9, B:26:0x00f6, B:28:0x0100, B:29:0x010d, B:31:0x0118, B:32:0x0120, B:34:0x013c, B:38:0x0149, B:40:0x015e, B:42:0x016e, B:44:0x0176, B:46:0x017c, B:47:0x017f, B:49:0x018e, B:51:0x01a2, B:53:0x01ac, B:54:0x01bd, B:56:0x01c1, B:58:0x01ce, B:60:0x01e7, B:61:0x021e, B:63:0x0226, B:65:0x022c, B:66:0x0243, B:68:0x024d, B:69:0x025a, B:70:0x026c, B:72:0x0272, B:78:0x0288, B:81:0x02b2, B:83:0x02d5, B:85:0x02e2, B:87:0x02ee, B:88:0x0301, B:90:0x0307, B:92:0x0319, B:94:0x031f, B:95:0x033c, B:96:0x0342, B:98:0x0348, B:99:0x037e, B:101:0x03e1, B:102:0x03f9, B:104:0x0407, B:106:0x0449, B:107:0x047e, B:109:0x0484, B:111:0x0497, B:112:0x04a4, B:114:0x04f0, B:115:0x04fe, B:117:0x0506, B:118:0x0509, B:120:0x0511, B:123:0x051a, B:122:0x0517, B:105:0x0436, B:80:0x028c, B:130:0x05a5, B:35:0x0140, B:37:0x0146), top: B:142:0x007f, inners: #0, #2 }] */
    /* JADX WARN: Code duplicated, block: B:90:0x0307 A[Catch: all -> 0x05bf, TryCatch #3 {all -> 0x05bf, blocks: (B:11:0x007f, B:13:0x008b, B:16:0x00a7, B:18:0x00ad, B:20:0x00c1, B:22:0x00d8, B:23:0x00df, B:25:0x00e9, B:26:0x00f6, B:28:0x0100, B:29:0x010d, B:31:0x0118, B:32:0x0120, B:34:0x013c, B:38:0x0149, B:40:0x015e, B:42:0x016e, B:44:0x0176, B:46:0x017c, B:47:0x017f, B:49:0x018e, B:51:0x01a2, B:53:0x01ac, B:54:0x01bd, B:56:0x01c1, B:58:0x01ce, B:60:0x01e7, B:61:0x021e, B:63:0x0226, B:65:0x022c, B:66:0x0243, B:68:0x024d, B:69:0x025a, B:70:0x026c, B:72:0x0272, B:78:0x0288, B:81:0x02b2, B:83:0x02d5, B:85:0x02e2, B:87:0x02ee, B:88:0x0301, B:90:0x0307, B:92:0x0319, B:94:0x031f, B:95:0x033c, B:96:0x0342, B:98:0x0348, B:99:0x037e, B:101:0x03e1, B:102:0x03f9, B:104:0x0407, B:106:0x0449, B:107:0x047e, B:109:0x0484, B:111:0x0497, B:112:0x04a4, B:114:0x04f0, B:115:0x04fe, B:117:0x0506, B:118:0x0509, B:120:0x0511, B:123:0x051a, B:122:0x0517, B:105:0x0436, B:80:0x028c, B:130:0x05a5, B:35:0x0140, B:37:0x0146), top: B:142:0x007f, inners: #0, #2 }] */
    /* JADX WARN: Code duplicated, block: B:93:0x031d A[LOOP:1: B:88:0x0301->B:93:0x031d, LOOP_END] */
    /* JADX WARN: Code duplicated, block: B:98:0x0348 A[Catch: all -> 0x05bf, LOOP:2: B:96:0x0342->B:98:0x0348, LOOP_END, TryCatch #3 {all -> 0x05bf, blocks: (B:11:0x007f, B:13:0x008b, B:16:0x00a7, B:18:0x00ad, B:20:0x00c1, B:22:0x00d8, B:23:0x00df, B:25:0x00e9, B:26:0x00f6, B:28:0x0100, B:29:0x010d, B:31:0x0118, B:32:0x0120, B:34:0x013c, B:38:0x0149, B:40:0x015e, B:42:0x016e, B:44:0x0176, B:46:0x017c, B:47:0x017f, B:49:0x018e, B:51:0x01a2, B:53:0x01ac, B:54:0x01bd, B:56:0x01c1, B:58:0x01ce, B:60:0x01e7, B:61:0x021e, B:63:0x0226, B:65:0x022c, B:66:0x0243, B:68:0x024d, B:69:0x025a, B:70:0x026c, B:72:0x0272, B:78:0x0288, B:81:0x02b2, B:83:0x02d5, B:85:0x02e2, B:87:0x02ee, B:88:0x0301, B:90:0x0307, B:92:0x0319, B:94:0x031f, B:95:0x033c, B:96:0x0342, B:98:0x0348, B:99:0x037e, B:101:0x03e1, B:102:0x03f9, B:104:0x0407, B:106:0x0449, B:107:0x047e, B:109:0x0484, B:111:0x0497, B:112:0x04a4, B:114:0x04f0, B:115:0x04fe, B:117:0x0506, B:118:0x0509, B:120:0x0511, B:123:0x051a, B:122:0x0517, B:105:0x0436, B:80:0x028c, B:130:0x05a5, B:35:0x0140, B:37:0x0146), top: B:142:0x007f, inners: #0, #2 }] */
    @Override // java.util.concurrent.Callable
    public final /* bridge */ /* synthetic */ Object call() throws Exception {
        byte[] bArr;
        zzkr zzkrVar;
        String strZzt;
        List listZzu;
        Iterator it;
        zzkw zzkwVar;
        zzkt zzktVarZzu;
        com.google.android.gms.internal.measurement.zzgh[] zzghVarArr;
        Bundle bundle;
        zzaq zzaqVarZzn;
        Object obj;
        zzaq zzaqVarZzc;
        long j;
        zzap zzapVar;
        com.google.android.gms.internal.measurement.zzfn zzfnVarZze;
        zzar zzarVar;
        long jZzn;
        long jZzp;
        com.google.android.gms.internal.measurement.zzfr zzfrVarZze;
        Object objZzf;
        String strZzt2;
        Iterator it2;
        this.zzc.zza.zzA();
        zzid zzidVarZzr = this.zzc.zza.zzr();
        zzau zzauVar = this.zza;
        String str = this.zzb;
        zzidVarZzr.zzg();
        zzft.zzO();
        Preconditions.checkNotNull(zzauVar);
        Preconditions.checkNotEmpty(str);
        if (!zzidVarZzr.zzs.zzf().zzs(str, zzdw.zzS)) {
            zzidVarZzr.zzs.zzay().zzc().zzb("Generating ScionPayload disabled. packageName", str);
            return new byte[0];
        }
        if (!"_iap".equals(zzauVar.zza) && !"_iapx".equals(zzauVar.zza)) {
            zzidVarZzr.zzs.zzay().zzc().zzc("Generating a payload for this event is not available. package_name, event_name", str, zzauVar.zza);
            return null;
        }
        com.google.android.gms.internal.measurement.zzfv zzfvVarZza = com.google.android.gms.internal.measurement.zzfw.zza();
        zzidVarZzr.zzf.zzi().zzw();
        try {
            zzg zzgVarZzj = zzidVarZzr.zzf.zzi().zzj(str);
            if (zzgVarZzj == null) {
                zzidVarZzr.zzs.zzay().zzc().zzb("Log and bundle not available. package_name", str);
                bArr = new byte[0];
                zzkrVar = zzidVarZzr.zzf;
            } else if (zzgVarZzj.zzah()) {
                com.google.android.gms.internal.measurement.zzfx zzfxVarZzu = com.google.android.gms.internal.measurement.zzfy.zzu();
                zzfxVarZzu.zzZ(1);
                zzfxVarZzu.zzV("android");
                if (!TextUtils.isEmpty(zzgVarZzj.zzt())) {
                    zzfxVarZzu.zzA(zzgVarZzj.zzt());
                }
                if (!TextUtils.isEmpty(zzgVarZzj.zzv())) {
                    zzfxVarZzu.zzC((String) Preconditions.checkNotNull(zzgVarZzj.zzv()));
                }
                if (!TextUtils.isEmpty(zzgVarZzj.zzw())) {
                    zzfxVarZzu.zzD((String) Preconditions.checkNotNull(zzgVarZzj.zzw()));
                }
                if (zzgVarZzj.zzb() != -2147483648L) {
                    zzfxVarZzu.zzE((int) zzgVarZzj.zzb());
                }
                zzfxVarZzu.zzR(zzgVarZzj.zzm());
                zzfxVarZzu.zzM(zzgVarZzj.zzk());
                String strZzy = zzgVarZzj.zzy();
                String strZzr = zzgVarZzj.zzr();
                if (!TextUtils.isEmpty(strZzy)) {
                    zzfxVarZzu.zzQ(strZzy);
                } else if (!TextUtils.isEmpty(strZzr)) {
                    zzfxVarZzu.zzy(strZzr);
                }
                zzah zzahVarZzh = zzidVarZzr.zzf.zzh(str);
                zzfxVarZzu.zzJ(zzgVarZzj.zzj());
                if (zzidVarZzr.zzs.zzJ() && zzidVarZzr.zzs.zzf().zzt(zzfxVarZzu.zzak()) && zzahVarZzh.zzi(zzag.AD_STORAGE) && !TextUtils.isEmpty(null)) {
                    zzfxVarZzu.zzL(null);
                }
                zzfxVarZzu.zzI(zzahVarZzh.zzh());
                if (!zzahVarZzh.zzi(zzag.AD_STORAGE)) {
                    zzidVarZzr.zzs.zzg().zzu();
                    zzfxVarZzu.zzK(Build.MODEL);
                    zzidVarZzr.zzs.zzg().zzu();
                    zzfxVarZzu.zzU(Build.VERSION.RELEASE);
                    zzfxVarZzu.zzae((int) zzidVarZzr.zzs.zzg().zzb());
                    zzfxVarZzu.zzai(zzidVarZzr.zzs.zzg().zzc());
                    if (zzahVarZzh.zzi(zzag.ANALYTICS_STORAGE)) {
                        zzfxVarZzu.zzB(zzid.zza((String) Preconditions.checkNotNull(zzgVarZzj.zzu()), Long.toString(zzauVar.zzd)));
                    }
                    if (!TextUtils.isEmpty(zzgVarZzj.zzx())) {
                        zzfxVarZzu.zzP((String) Preconditions.checkNotNull(zzgVarZzj.zzx()));
                    }
                    strZzt = zzgVarZzj.zzt();
                    listZzu = zzidVarZzr.zzf.zzi().zzu(strZzt);
                    it = listZzu.iterator();
                    do {
                        if (!it.hasNext()) {
                            zzkwVar = null;
                            break;
                        }
                        zzkwVar = (zzkw) it.next();
                    } while (!"_lte".equals(zzkwVar.zzc));
                    if (zzkwVar != null) {
                        zzkw zzkwVar2 = new zzkw(strZzt, "auto", "_lte", zzidVarZzr.zzs.zzav().currentTimeMillis(), 0L);
                        listZzu.add(zzkwVar2);
                        zzidVarZzr.zzf.zzi().zzL(zzkwVar2);
                    } else {
                        zzkw zzkwVar3 = new zzkw(strZzt, "auto", "_lte", zzidVarZzr.zzs.zzav().currentTimeMillis(), 0L);
                        listZzu.add(zzkwVar3);
                        zzidVarZzr.zzf.zzi().zzL(zzkwVar3);
                    }
                    zzktVarZzu = zzidVarZzr.zzf.zzu();
                    zzktVarZzu.zzs.zzay().zzj().zza("Checking account type status for ad personalization signals");
                    if (zzktVarZzu.zzs.zzg().zze()) {
                        strZzt2 = zzgVarZzj.zzt();
                        Preconditions.checkNotNull(strZzt2);
                        if (zzgVarZzj.zzag()) {
                            zzktVarZzu.zzs.zzay().zzc().zza("Turning off ad personalization due to account type");
                            it2 = listZzu.iterator();
                            while (it2.hasNext()) {
                                if ("_npa".equals(((zzkw) it2.next()).zzc)) {
                                    it2.remove();
                                    break;
                                }
                            }
                            listZzu.add(new zzkw(strZzt2, "auto", "_npa", zzktVarZzu.zzs.zzav().currentTimeMillis(), 1L));
                        }
                    }
                    zzghVarArr = new com.google.android.gms.internal.measurement.zzgh[listZzu.size()];
                    for (int i = 0; i < listZzu.size(); i++) {
                        com.google.android.gms.internal.measurement.zzgg zzggVarZzd = com.google.android.gms.internal.measurement.zzgh.zzd();
                        zzggVarZzd.zzf(((zzkw) listZzu.get(i)).zzc);
                        zzggVarZzd.zzg(((zzkw) listZzu.get(i)).zzd);
                        zzidVarZzr.zzf.zzu().zzu(zzggVarZzd, ((zzkw) listZzu.get(i)).zze);
                        zzghVarArr[i] = (com.google.android.gms.internal.measurement.zzgh) zzggVarZzd.zzay();
                    }
                    zzfxVarZzu.zzi(Arrays.asList(zzghVarArr));
                    zzek zzekVarZzb = zzek.zzb(zzauVar);
                    zzidVarZzr.zzs.zzv().zzK(zzekVarZzb.zzd, zzidVarZzr.zzf.zzi().zzi(str));
                    zzidVarZzr.zzs.zzv().zzL(zzekVarZzb, zzidVarZzr.zzs.zzf().zzd(str));
                    bundle = zzekVarZzb.zzd;
                    bundle.putLong("_c", 1L);
                    zzidVarZzr.zzs.zzay().zzc().zza("Marking in-app purchase as real-time");
                    bundle.putLong("_r", 1L);
                    bundle.putString("_o", zzauVar.zzc);
                    if (zzidVarZzr.zzs.zzv().zzad(zzfxVarZzu.zzak())) {
                        zzidVarZzr.zzs.zzv().zzN(bundle, "_dbg", 1L);
                        zzidVarZzr.zzs.zzv().zzN(bundle, "_r", 1L);
                    }
                    zzaqVarZzn = zzidVarZzr.zzf.zzi().zzn(str, zzauVar.zza);
                    if (zzaqVarZzn == null) {
                        obj = null;
                        zzaqVarZzc = new zzaq(str, zzauVar.zza, 0L, 0L, 0L, zzauVar.zzd, 0L, null, null, null, null);
                        j = 0;
                    } else {
                        obj = null;
                        long j2 = zzaqVarZzn.zzf;
                        zzaqVarZzc = zzaqVarZzn.zzc(zzauVar.zzd);
                        j = j2;
                    }
                    zzidVarZzr.zzf.zzi().zzE(zzaqVarZzc);
                    zzapVar = new zzap(zzidVarZzr.zzs, zzauVar.zzc, str, zzauVar.zza, zzauVar.zzd, j, bundle);
                    zzfnVarZze = com.google.android.gms.internal.measurement.zzfo.zze();
                    zzfnVarZze.zzm(zzapVar.zzd);
                    zzfnVarZze.zzi(zzapVar.zzb);
                    zzfnVarZze.zzl(zzapVar.zze);
                    zzarVar = new zzar(zzapVar.zzf);
                    while (zzarVar.hasNext()) {
                        String next = zzarVar.next();
                        zzfrVarZze = com.google.android.gms.internal.measurement.zzfs.zze();
                        zzfrVarZze.zzj(next);
                        objZzf = zzapVar.zzf.zzf(next);
                        if (objZzf != null) {
                            zzidVarZzr.zzf.zzu().zzt(zzfrVarZze, objZzf);
                            zzfnVarZze.zze(zzfrVarZze);
                        }
                    }
                    zzfxVarZzu.zzj(zzfnVarZze);
                    com.google.android.gms.internal.measurement.zzfz zzfzVarZza = com.google.android.gms.internal.measurement.zzgb.zza();
                    com.google.android.gms.internal.measurement.zzfp zzfpVarZza = com.google.android.gms.internal.measurement.zzfq.zza();
                    zzfpVarZza.zza(zzaqVarZzc.zzc);
                    zzfpVarZza.zzb(zzauVar.zza);
                    zzfzVarZza.zza(zzfpVarZza);
                    zzfxVarZzu.zzW(zzfzVarZza);
                    zzfxVarZzu.zzf(zzidVarZzr.zzf.zzf().zza(zzgVarZzj.zzt(), Collections.emptyList(), zzfxVarZzu.zzan(), Long.valueOf(zzfnVarZze.zzc()), Long.valueOf(zzfnVarZze.zzc())));
                    if (zzfnVarZze.zzq()) {
                        zzfxVarZzu.zzad(zzfnVarZze.zzc());
                        zzfxVarZzu.zzN(zzfnVarZze.zzc());
                    }
                    jZzn = zzgVarZzj.zzn();
                    if (jZzn != 0) {
                        zzfxVarZzu.zzX(jZzn);
                    }
                    jZzp = zzgVarZzj.zzp();
                    if (jZzp != 0) {
                        zzfxVarZzu.zzY(jZzp);
                    } else if (jZzn != 0) {
                        zzfxVarZzu.zzY(jZzn);
                    }
                    zzgVarZzj.zzD();
                    zzfxVarZzu.zzF((int) zzgVarZzj.zzo());
                    zzidVarZzr.zzs.zzf().zzh();
                    zzfxVarZzu.zzag(60000L);
                    zzfxVarZzu.zzaf(zzidVarZzr.zzs.zzav().currentTimeMillis());
                    zzfxVarZzu.zzac(Boolean.TRUE.booleanValue());
                    zzfvVarZza.zza(zzfxVarZzu);
                    zzgVarZzj.zzab(zzfxVarZzu.zzd());
                    zzgVarZzj.zzZ(zzfxVarZzu.zzc());
                    zzidVarZzr.zzf.zzi().zzD(zzgVarZzj);
                    zzidVarZzr.zzf.zzi().zzC();
                    zzidVarZzr.zzf.zzi().zzx();
                    return zzidVarZzr.zzf.zzu().zzy(((com.google.android.gms.internal.measurement.zzfw) zzfvVarZza.zzay()).zzbq());
                }
                Pair pairZzd = zzidVarZzr.zzf.zzs().zzd(zzgVarZzj.zzt(), zzahVarZzh);
                if (!zzgVarZzj.zzag() || TextUtils.isEmpty((CharSequence) pairZzd.first)) {
                    zzidVarZzr.zzs.zzg().zzu();
                    zzfxVarZzu.zzK(Build.MODEL);
                    zzidVarZzr.zzs.zzg().zzu();
                    zzfxVarZzu.zzU(Build.VERSION.RELEASE);
                    zzfxVarZzu.zzae((int) zzidVarZzr.zzs.zzg().zzb());
                    zzfxVarZzu.zzai(zzidVarZzr.zzs.zzg().zzc());
                    try {
                        if (zzahVarZzh.zzi(zzag.ANALYTICS_STORAGE) && zzgVarZzj.zzu() != null) {
                            zzfxVarZzu.zzB(zzid.zza((String) Preconditions.checkNotNull(zzgVarZzj.zzu()), Long.toString(zzauVar.zzd)));
                        }
                        if (!TextUtils.isEmpty(zzgVarZzj.zzx())) {
                            zzfxVarZzu.zzP((String) Preconditions.checkNotNull(zzgVarZzj.zzx()));
                        }
                        strZzt = zzgVarZzj.zzt();
                        listZzu = zzidVarZzr.zzf.zzi().zzu(strZzt);
                        it = listZzu.iterator();
                        do {
                            if (!it.hasNext()) {
                                zzkwVar = null;
                                break;
                            }
                            zzkwVar = (zzkw) it.next();
                        } while (!"_lte".equals(zzkwVar.zzc));
                        if (zzkwVar != null || zzkwVar.zze == null) {
                            zzkw zzkwVar4 = new zzkw(strZzt, "auto", "_lte", zzidVarZzr.zzs.zzav().currentTimeMillis(), 0L);
                            listZzu.add(zzkwVar4);
                            zzidVarZzr.zzf.zzi().zzL(zzkwVar4);
                        }
                        zzktVarZzu = zzidVarZzr.zzf.zzu();
                        zzktVarZzu.zzs.zzay().zzj().zza("Checking account type status for ad personalization signals");
                        if (zzktVarZzu.zzs.zzg().zze()) {
                            strZzt2 = zzgVarZzj.zzt();
                            Preconditions.checkNotNull(strZzt2);
                            if (zzgVarZzj.zzag() && zzktVarZzu.zzf.zzo().zzk(strZzt2)) {
                                zzktVarZzu.zzs.zzay().zzc().zza("Turning off ad personalization due to account type");
                                it2 = listZzu.iterator();
                                while (it2.hasNext()) {
                                    if ("_npa".equals(((zzkw) it2.next()).zzc)) {
                                        it2.remove();
                                        break;
                                    }
                                }
                                listZzu.add(new zzkw(strZzt2, "auto", "_npa", zzktVarZzu.zzs.zzav().currentTimeMillis(), 1L));
                            }
                        }
                        zzghVarArr = new com.google.android.gms.internal.measurement.zzgh[listZzu.size()];
                        while (i < listZzu.size()) {
                            com.google.android.gms.internal.measurement.zzgg zzggVarZzd2 = com.google.android.gms.internal.measurement.zzgh.zzd();
                            zzggVarZzd2.zzf(((zzkw) listZzu.get(i)).zzc);
                            zzggVarZzd2.zzg(((zzkw) listZzu.get(i)).zzd);
                            zzidVarZzr.zzf.zzu().zzu(zzggVarZzd2, ((zzkw) listZzu.get(i)).zze);
                            zzghVarArr[i] = (com.google.android.gms.internal.measurement.zzgh) zzggVarZzd2.zzay();
                        }
                        zzfxVarZzu.zzi(Arrays.asList(zzghVarArr));
                        zzek zzekVarZzb2 = zzek.zzb(zzauVar);
                        zzidVarZzr.zzs.zzv().zzK(zzekVarZzb2.zzd, zzidVarZzr.zzf.zzi().zzi(str));
                        zzidVarZzr.zzs.zzv().zzL(zzekVarZzb2, zzidVarZzr.zzs.zzf().zzd(str));
                        bundle = zzekVarZzb2.zzd;
                        bundle.putLong("_c", 1L);
                        zzidVarZzr.zzs.zzay().zzc().zza("Marking in-app purchase as real-time");
                        bundle.putLong("_r", 1L);
                        bundle.putString("_o", zzauVar.zzc);
                        if (zzidVarZzr.zzs.zzv().zzad(zzfxVarZzu.zzak())) {
                            zzidVarZzr.zzs.zzv().zzN(bundle, "_dbg", 1L);
                            zzidVarZzr.zzs.zzv().zzN(bundle, "_r", 1L);
                        }
                        zzaqVarZzn = zzidVarZzr.zzf.zzi().zzn(str, zzauVar.zza);
                        if (zzaqVarZzn == null) {
                            obj = null;
                            zzaqVarZzc = new zzaq(str, zzauVar.zza, 0L, 0L, 0L, zzauVar.zzd, 0L, null, null, null, null);
                            j = 0;
                        } else {
                            obj = null;
                            long j3 = zzaqVarZzn.zzf;
                            zzaqVarZzc = zzaqVarZzn.zzc(zzauVar.zzd);
                            j = j3;
                        }
                        zzidVarZzr.zzf.zzi().zzE(zzaqVarZzc);
                        zzapVar = new zzap(zzidVarZzr.zzs, zzauVar.zzc, str, zzauVar.zza, zzauVar.zzd, j, bundle);
                        zzfnVarZze = com.google.android.gms.internal.measurement.zzfo.zze();
                        zzfnVarZze.zzm(zzapVar.zzd);
                        zzfnVarZze.zzi(zzapVar.zzb);
                        zzfnVarZze.zzl(zzapVar.zze);
                        zzarVar = new zzar(zzapVar.zzf);
                        while (zzarVar.hasNext()) {
                            String next2 = zzarVar.next();
                            zzfrVarZze = com.google.android.gms.internal.measurement.zzfs.zze();
                            zzfrVarZze.zzj(next2);
                            objZzf = zzapVar.zzf.zzf(next2);
                            if (objZzf != null) {
                                zzidVarZzr.zzf.zzu().zzt(zzfrVarZze, objZzf);
                                zzfnVarZze.zze(zzfrVarZze);
                            }
                        }
                        zzfxVarZzu.zzj(zzfnVarZze);
                        com.google.android.gms.internal.measurement.zzfz zzfzVarZza2 = com.google.android.gms.internal.measurement.zzgb.zza();
                        com.google.android.gms.internal.measurement.zzfp zzfpVarZza2 = com.google.android.gms.internal.measurement.zzfq.zza();
                        zzfpVarZza2.zza(zzaqVarZzc.zzc);
                        zzfpVarZza2.zzb(zzauVar.zza);
                        zzfzVarZza2.zza(zzfpVarZza2);
                        zzfxVarZzu.zzW(zzfzVarZza2);
                        zzfxVarZzu.zzf(zzidVarZzr.zzf.zzf().zza(zzgVarZzj.zzt(), Collections.emptyList(), zzfxVarZzu.zzan(), Long.valueOf(zzfnVarZze.zzc()), Long.valueOf(zzfnVarZze.zzc())));
                        if (zzfnVarZze.zzq()) {
                            zzfxVarZzu.zzad(zzfnVarZze.zzc());
                            zzfxVarZzu.zzN(zzfnVarZze.zzc());
                        }
                        jZzn = zzgVarZzj.zzn();
                        if (jZzn != 0) {
                            zzfxVarZzu.zzX(jZzn);
                        }
                        jZzp = zzgVarZzj.zzp();
                        if (jZzp != 0) {
                            zzfxVarZzu.zzY(jZzp);
                        } else if (jZzn != 0) {
                            zzfxVarZzu.zzY(jZzn);
                        }
                        zzgVarZzj.zzD();
                        zzfxVarZzu.zzF((int) zzgVarZzj.zzo());
                        zzidVarZzr.zzs.zzf().zzh();
                        zzfxVarZzu.zzag(60000L);
                        zzfxVarZzu.zzaf(zzidVarZzr.zzs.zzav().currentTimeMillis());
                        zzfxVarZzu.zzac(Boolean.TRUE.booleanValue());
                        zzfvVarZza.zza(zzfxVarZzu);
                        zzgVarZzj.zzab(zzfxVarZzu.zzd());
                        zzgVarZzj.zzZ(zzfxVarZzu.zzc());
                        zzidVarZzr.zzf.zzi().zzD(zzgVarZzj);
                        zzidVarZzr.zzf.zzi().zzC();
                        zzidVarZzr.zzf.zzi().zzx();
                        try {
                            return zzidVarZzr.zzf.zzu().zzy(((com.google.android.gms.internal.measurement.zzfw) zzfvVarZza.zzay()).zzbq());
                        } catch (IOException e) {
                            zzidVarZzr.zzs.zzay().zzd().zzc("Data loss. Failed to bundle and serialize. appId", zzej.zzn(str), e);
                            return obj;
                        }
                    } catch (SecurityException e2) {
                        zzidVarZzr.zzs.zzay().zzc().zzb("app instance id encryption failed", e2.getMessage());
                        bArr = new byte[0];
                        zzkrVar = zzidVarZzr.zzf;
                    }
                } else {
                    try {
                        zzfxVarZzu.zzaa(zzid.zza((String) pairZzd.first, Long.toString(zzauVar.zzd)));
                        if (pairZzd.second != null) {
                            zzfxVarZzu.zzT(((Boolean) pairZzd.second).booleanValue());
                        }
                        zzidVarZzr.zzs.zzg().zzu();
                        zzfxVarZzu.zzK(Build.MODEL);
                        zzidVarZzr.zzs.zzg().zzu();
                        zzfxVarZzu.zzU(Build.VERSION.RELEASE);
                        zzfxVarZzu.zzae((int) zzidVarZzr.zzs.zzg().zzb());
                        zzfxVarZzu.zzai(zzidVarZzr.zzs.zzg().zzc());
                        if (zzahVarZzh.zzi(zzag.ANALYTICS_STORAGE)) {
                            zzfxVarZzu.zzB(zzid.zza((String) Preconditions.checkNotNull(zzgVarZzj.zzu()), Long.toString(zzauVar.zzd)));
                        }
                        if (!TextUtils.isEmpty(zzgVarZzj.zzx())) {
                            zzfxVarZzu.zzP((String) Preconditions.checkNotNull(zzgVarZzj.zzx()));
                        }
                        strZzt = zzgVarZzj.zzt();
                        listZzu = zzidVarZzr.zzf.zzi().zzu(strZzt);
                        it = listZzu.iterator();
                        do {
                            if (!it.hasNext()) {
                                zzkwVar = null;
                                break;
                            }
                            zzkwVar = (zzkw) it.next();
                        } while (!"_lte".equals(zzkwVar.zzc));
                        if (zzkwVar != null) {
                            zzkw zzkwVar5 = new zzkw(strZzt, "auto", "_lte", zzidVarZzr.zzs.zzav().currentTimeMillis(), 0L);
                            listZzu.add(zzkwVar5);
                            zzidVarZzr.zzf.zzi().zzL(zzkwVar5);
                        } else {
                            zzkw zzkwVar6 = new zzkw(strZzt, "auto", "_lte", zzidVarZzr.zzs.zzav().currentTimeMillis(), 0L);
                            listZzu.add(zzkwVar6);
                            zzidVarZzr.zzf.zzi().zzL(zzkwVar6);
                        }
                        zzktVarZzu = zzidVarZzr.zzf.zzu();
                        zzktVarZzu.zzs.zzay().zzj().zza("Checking account type status for ad personalization signals");
                        if (zzktVarZzu.zzs.zzg().zze()) {
                            strZzt2 = zzgVarZzj.zzt();
                            Preconditions.checkNotNull(strZzt2);
                            if (zzgVarZzj.zzag()) {
                                zzktVarZzu.zzs.zzay().zzc().zza("Turning off ad personalization due to account type");
                                it2 = listZzu.iterator();
                                while (it2.hasNext()) {
                                    if ("_npa".equals(((zzkw) it2.next()).zzc)) {
                                        it2.remove();
                                        break;
                                    }
                                }
                                listZzu.add(new zzkw(strZzt2, "auto", "_npa", zzktVarZzu.zzs.zzav().currentTimeMillis(), 1L));
                            }
                        }
                        zzghVarArr = new com.google.android.gms.internal.measurement.zzgh[listZzu.size()];
                        while (i < listZzu.size()) {
                            com.google.android.gms.internal.measurement.zzgg zzggVarZzd3 = com.google.android.gms.internal.measurement.zzgh.zzd();
                            zzggVarZzd3.zzf(((zzkw) listZzu.get(i)).zzc);
                            zzggVarZzd3.zzg(((zzkw) listZzu.get(i)).zzd);
                            zzidVarZzr.zzf.zzu().zzu(zzggVarZzd3, ((zzkw) listZzu.get(i)).zze);
                            zzghVarArr[i] = (com.google.android.gms.internal.measurement.zzgh) zzggVarZzd3.zzay();
                        }
                        zzfxVarZzu.zzi(Arrays.asList(zzghVarArr));
                        zzek zzekVarZzb3 = zzek.zzb(zzauVar);
                        zzidVarZzr.zzs.zzv().zzK(zzekVarZzb3.zzd, zzidVarZzr.zzf.zzi().zzi(str));
                        zzidVarZzr.zzs.zzv().zzL(zzekVarZzb3, zzidVarZzr.zzs.zzf().zzd(str));
                        bundle = zzekVarZzb3.zzd;
                        bundle.putLong("_c", 1L);
                        zzidVarZzr.zzs.zzay().zzc().zza("Marking in-app purchase as real-time");
                        bundle.putLong("_r", 1L);
                        bundle.putString("_o", zzauVar.zzc);
                        if (zzidVarZzr.zzs.zzv().zzad(zzfxVarZzu.zzak())) {
                            zzidVarZzr.zzs.zzv().zzN(bundle, "_dbg", 1L);
                            zzidVarZzr.zzs.zzv().zzN(bundle, "_r", 1L);
                        }
                        zzaqVarZzn = zzidVarZzr.zzf.zzi().zzn(str, zzauVar.zza);
                        if (zzaqVarZzn == null) {
                            obj = null;
                            zzaqVarZzc = new zzaq(str, zzauVar.zza, 0L, 0L, 0L, zzauVar.zzd, 0L, null, null, null, null);
                            j = 0;
                        } else {
                            obj = null;
                            long j4 = zzaqVarZzn.zzf;
                            zzaqVarZzc = zzaqVarZzn.zzc(zzauVar.zzd);
                            j = j4;
                        }
                        zzidVarZzr.zzf.zzi().zzE(zzaqVarZzc);
                        zzapVar = new zzap(zzidVarZzr.zzs, zzauVar.zzc, str, zzauVar.zza, zzauVar.zzd, j, bundle);
                        zzfnVarZze = com.google.android.gms.internal.measurement.zzfo.zze();
                        zzfnVarZze.zzm(zzapVar.zzd);
                        zzfnVarZze.zzi(zzapVar.zzb);
                        zzfnVarZze.zzl(zzapVar.zze);
                        zzarVar = new zzar(zzapVar.zzf);
                        while (zzarVar.hasNext()) {
                            String next3 = zzarVar.next();
                            zzfrVarZze = com.google.android.gms.internal.measurement.zzfs.zze();
                            zzfrVarZze.zzj(next3);
                            objZzf = zzapVar.zzf.zzf(next3);
                            if (objZzf != null) {
                                zzidVarZzr.zzf.zzu().zzt(zzfrVarZze, objZzf);
                                zzfnVarZze.zze(zzfrVarZze);
                            }
                        }
                        zzfxVarZzu.zzj(zzfnVarZze);
                        com.google.android.gms.internal.measurement.zzfz zzfzVarZza3 = com.google.android.gms.internal.measurement.zzgb.zza();
                        com.google.android.gms.internal.measurement.zzfp zzfpVarZza3 = com.google.android.gms.internal.measurement.zzfq.zza();
                        zzfpVarZza3.zza(zzaqVarZzc.zzc);
                        zzfpVarZza3.zzb(zzauVar.zza);
                        zzfzVarZza3.zza(zzfpVarZza3);
                        zzfxVarZzu.zzW(zzfzVarZza3);
                        zzfxVarZzu.zzf(zzidVarZzr.zzf.zzf().zza(zzgVarZzj.zzt(), Collections.emptyList(), zzfxVarZzu.zzan(), Long.valueOf(zzfnVarZze.zzc()), Long.valueOf(zzfnVarZze.zzc())));
                        if (zzfnVarZze.zzq()) {
                            zzfxVarZzu.zzad(zzfnVarZze.zzc());
                            zzfxVarZzu.zzN(zzfnVarZze.zzc());
                        }
                        jZzn = zzgVarZzj.zzn();
                        if (jZzn != 0) {
                            zzfxVarZzu.zzX(jZzn);
                        }
                        jZzp = zzgVarZzj.zzp();
                        if (jZzp != 0) {
                            zzfxVarZzu.zzY(jZzp);
                        } else if (jZzn != 0) {
                            zzfxVarZzu.zzY(jZzn);
                        }
                        zzgVarZzj.zzD();
                        zzfxVarZzu.zzF((int) zzgVarZzj.zzo());
                        zzidVarZzr.zzs.zzf().zzh();
                        zzfxVarZzu.zzag(60000L);
                        zzfxVarZzu.zzaf(zzidVarZzr.zzs.zzav().currentTimeMillis());
                        zzfxVarZzu.zzac(Boolean.TRUE.booleanValue());
                        zzfvVarZza.zza(zzfxVarZzu);
                        zzgVarZzj.zzab(zzfxVarZzu.zzd());
                        zzgVarZzj.zzZ(zzfxVarZzu.zzc());
                        zzidVarZzr.zzf.zzi().zzD(zzgVarZzj);
                        zzidVarZzr.zzf.zzi().zzC();
                        zzidVarZzr.zzf.zzi().zzx();
                        return zzidVarZzr.zzf.zzu().zzy(((com.google.android.gms.internal.measurement.zzfw) zzfvVarZza.zzay()).zzbq());
                    } catch (SecurityException e3) {
                        zzidVarZzr.zzs.zzay().zzc().zzb("Resettable device id encryption failed", e3.getMessage());
                        bArr = new byte[0];
                        zzkrVar = zzidVarZzr.zzf;
                    }
                }
            } else {
                zzidVarZzr.zzs.zzay().zzc().zzb("Log and bundle disabled. package_name", str);
                bArr = new byte[0];
                zzkrVar = zzidVarZzr.zzf;
            }
            zzkrVar.zzi().zzx();
            return bArr;
        } catch (Throwable th) {
            zzidVarZzr.zzf.zzi().zzx();
            throw th;
        }
    }
}
