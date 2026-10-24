// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001686a4; body: [[001686a4, 0016894f]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001686a4(ulong param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined1 auVar29 [16];
  
  uVar2 = (uint)param_1;
  if (((uint)(param_1 >> 0x3e) & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_2 + 0x10);
  }
  auVar10._8_8_ = param_1;
  auVar10._0_8_ = param_1;
  auVar6 = NEON_ushl(auVar10,_DAT_00139390,8);
  auVar7 = NEON_ushl(auVar10,_DAT_00139330,8);
  auVar9 = NEON_ushl(auVar10,_DAT_00139370,8);
  auVar8 = NEON_ushl(auVar10,_DAT_00139380,8);
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = uVar3;
  uVar5 = uVar3 >> 1;
  bVar13 = auVar9[0] & DAT_001393d0 | auVar8[0] & DAT_001393f0 |
           auVar7[0] & (byte)_DAT_001393e0 | auVar6[0] & DAT_001393a0;
  bVar14 = auVar9[1] & UNK_001393d1 | auVar8[1] & UNK_001393f1 |
           auVar7[1] & (byte)((ulong)_DAT_001393e0 >> 8) | auVar6[1] & UNK_001393a1;
  bVar15 = auVar9[2] & UNK_001393d2 | auVar8[2] & UNK_001393f2 |
           auVar7[2] & (byte)((ulong)_DAT_001393e0 >> 0x10) | auVar6[2] & UNK_001393a2;
  bVar16 = auVar9[3] & UNK_001393d3 | auVar8[3] & UNK_001393f3 |
           auVar7[3] & (byte)((ulong)_DAT_001393e0 >> 0x18) | auVar6[3] & UNK_001393a3;
  bVar17 = auVar9[4] & UNK_001393d4 | auVar8[4] & UNK_001393f4 |
           auVar7[4] & (byte)((ulong)_DAT_001393e0 >> 0x20) | auVar6[4] & UNK_001393a4;
  bVar18 = auVar9[5] & UNK_001393d5 | auVar8[5] & UNK_001393f5 |
           auVar7[5] & (byte)((ulong)_DAT_001393e0 >> 0x28) | auVar6[5] & UNK_001393a5;
  bVar19 = auVar9[6] & UNK_001393d6 | auVar8[6] & UNK_001393f6 |
           auVar7[6] & (byte)((ulong)_DAT_001393e0 >> 0x30) | auVar6[6] & UNK_001393a6;
  bVar20 = auVar9[7] & UNK_001393d7 | auVar8[7] & UNK_001393f7 |
           auVar7[7] & (byte)((ulong)_DAT_001393e0 >> 0x38) | auVar6[7] & UNK_001393a7;
  bVar21 = auVar9[8] & UNK_001393d8 | auVar8[8] & UNK_001393f8 |
           auVar7[8] & (byte)_UNK_001393e8 | auVar6[8] & UNK_001393a8;
  bVar22 = auVar9[9] & UNK_001393d9 | auVar8[9] & UNK_001393f9 |
           auVar7[9] & (byte)((ulong)_UNK_001393e8 >> 8) | auVar6[9] & UNK_001393a9;
  bVar23 = auVar9[10] & UNK_001393da | auVar8[10] & UNK_001393fa |
           auVar7[10] & (byte)((ulong)_UNK_001393e8 >> 0x10) | auVar6[10] & UNK_001393aa;
  bVar24 = auVar9[0xb] & UNK_001393db | auVar8[0xb] & UNK_001393fb |
           auVar7[0xb] & (byte)((ulong)_UNK_001393e8 >> 0x18) | auVar6[0xb] & UNK_001393ab;
  bVar25 = auVar9[0xc] & UNK_001393dc | auVar8[0xc] & UNK_001393fc |
           auVar7[0xc] & (byte)((ulong)_UNK_001393e8 >> 0x20) | auVar6[0xc] & UNK_001393ac;
  bVar26 = auVar9[0xd] & UNK_001393dd | auVar8[0xd] & UNK_001393fd |
           auVar7[0xd] & (byte)((ulong)_UNK_001393e8 >> 0x28) | auVar6[0xd] & UNK_001393ad;
  bVar27 = auVar9[0xe] & UNK_001393de | auVar8[0xe] & UNK_001393fe |
           auVar7[0xe] & (byte)((ulong)_UNK_001393e8 >> 0x30) | auVar6[0xe] & UNK_001393ae;
  bVar28 = auVar9[0xf] & UNK_001393df | auVar8[0xf] & UNK_001393ff |
           auVar7[0xf] & (byte)((ulong)_UNK_001393e8 >> 0x38) | auVar6[0xf] & UNK_001393af;
  auVar29 = NEON_ushl(auVar11,_DAT_001393c0,8);
  auVar10 = NEON_ushl(auVar11,_DAT_001393b0,8);
  auVar8[1] = bVar14;
  auVar8[0] = bVar13;
  auVar8[2] = bVar15;
  auVar8[3] = bVar16;
  auVar8[4] = bVar17;
  auVar8[5] = bVar18;
  auVar8[6] = bVar19;
  auVar8[7] = bVar20;
  auVar8[8] = bVar21;
  auVar8[9] = bVar22;
  auVar8[10] = bVar23;
  auVar8[0xb] = bVar24;
  auVar8[0xc] = bVar25;
  auVar8[0xd] = bVar26;
  auVar8[0xe] = bVar27;
  auVar8[0xf] = bVar28;
  auVar9[1] = bVar14;
  auVar9[0] = bVar13;
  auVar9[2] = bVar15;
  auVar9[3] = bVar16;
  auVar9[4] = bVar17;
  auVar9[5] = bVar18;
  auVar9[6] = bVar19;
  auVar9[7] = bVar20;
  auVar9[8] = bVar21;
  auVar9[9] = bVar22;
  auVar9[10] = bVar23;
  auVar9[0xb] = bVar24;
  auVar9[0xc] = bVar25;
  auVar9[0xd] = bVar26;
  auVar9[0xe] = bVar27;
  auVar9[0xf] = bVar28;
  auVar12 = NEON_ext(auVar8,auVar9,8,1);
  auVar8 = NEON_ushl(auVar11,_DAT_001392f0,8);
  auVar9 = NEON_ushl(auVar11,_DAT_00139320,8);
  auVar11 = NEON_ushl(auVar11,_DAT_00139350,8);
  uVar4 = CONCAT17(bVar20 | auVar12[7],
                   CONCAT16(bVar19 | auVar12[6],
                            CONCAT15(bVar18 | auVar12[5],
                                     CONCAT14(bVar17 | auVar12[4],
                                              CONCAT13(bVar16 | auVar12[3],
                                                       CONCAT12(bVar15 | auVar12[2],
                                                                CONCAT11(bVar14 | auVar12[1],
                                                                         bVar13 | auVar12[0])))))))
          | auVar7._0_8_ & 0x8000 |
          auVar6._0_8_ & 0x10000 | ((ulong)(uVar2 >> 7) & 1) << 10 |
          (param_1 & 0x1000000) >> 7 | (param_1 & 0x1000) >> 6 | uVar3 >> 5 & 4;
  if ((param_1 & 0x10000000) != 0) {
    uVar4 = uVar4 | 0x3000000000000;
  }
  auVar7[0] = auVar10[0] & DAT_00139410 | auVar9[0] & DAT_00139400 |
              auVar29[0] & DAT_00139360 | auVar8[0] & (byte)_DAT_00139310;
  auVar7[1] = auVar10[1] & UNK_00139411 | auVar9[1] & UNK_00139401 |
              auVar29[1] & UNK_00139361 | auVar8[1] & (byte)((ulong)_DAT_00139310 >> 8);
  auVar7[2] = auVar10[2] & UNK_00139412 | auVar9[2] & UNK_00139402 |
              auVar29[2] & UNK_00139362 | auVar8[2] & (byte)((ulong)_DAT_00139310 >> 0x10);
  auVar7[3] = auVar10[3] & UNK_00139413 | auVar9[3] & UNK_00139403 |
              auVar29[3] & UNK_00139363 | auVar8[3] & (byte)((ulong)_DAT_00139310 >> 0x18);
  auVar7[4] = auVar10[4] & UNK_00139414 | auVar9[4] & UNK_00139404 |
              auVar29[4] & UNK_00139364 | auVar8[4] & (byte)((ulong)_DAT_00139310 >> 0x20);
  auVar7[5] = auVar10[5] & UNK_00139415 | auVar9[5] & UNK_00139405 |
              auVar29[5] & UNK_00139365 | auVar8[5] & (byte)((ulong)_DAT_00139310 >> 0x28);
  auVar7[6] = auVar10[6] & UNK_00139416 | auVar9[6] & UNK_00139406 |
              auVar29[6] & UNK_00139366 | auVar8[6] & (byte)((ulong)_DAT_00139310 >> 0x30);
  auVar7[7] = auVar10[7] & UNK_00139417 | auVar9[7] & UNK_00139407 |
              auVar29[7] & UNK_00139367 | auVar8[7] & (byte)((ulong)_DAT_00139310 >> 0x38);
  auVar7[8] = auVar10[8] & UNK_00139418 | auVar9[8] & UNK_00139408 |
              auVar29[8] & UNK_00139368 | auVar8[8] & (byte)_UNK_00139318;
  auVar7[9] = auVar10[9] & UNK_00139419 | auVar9[9] & UNK_00139409 |
              auVar29[9] & UNK_00139369 | auVar8[9] & (byte)((ulong)_UNK_00139318 >> 8);
  auVar7[10] = auVar10[10] & UNK_0013941a | auVar9[10] & UNK_0013940a |
               auVar29[10] & UNK_0013936a | auVar8[10] & (byte)((ulong)_UNK_00139318 >> 0x10);
  auVar7[0xb] = auVar10[0xb] & UNK_0013941b | auVar9[0xb] & UNK_0013940b |
                auVar29[0xb] & UNK_0013936b | auVar8[0xb] & (byte)((ulong)_UNK_00139318 >> 0x18);
  auVar7[0xc] = auVar10[0xc] & UNK_0013941c | auVar9[0xc] & UNK_0013940c |
                auVar29[0xc] & UNK_0013936c | auVar8[0xc] & (byte)((ulong)_UNK_00139318 >> 0x20);
  auVar7[0xd] = auVar10[0xd] & UNK_0013941d | auVar9[0xd] & UNK_0013940d |
                auVar29[0xd] & UNK_0013936d | auVar8[0xd] & (byte)((ulong)_UNK_00139318 >> 0x28);
  auVar7[0xe] = auVar10[0xe] & UNK_0013941e | auVar9[0xe] & UNK_0013940e |
                auVar29[0xe] & UNK_0013936e | auVar8[0xe] & (byte)((ulong)_UNK_00139318 >> 0x30);
  auVar7[0xf] = auVar10[0xf] & UNK_0013941f | auVar9[0xf] & UNK_0013940f |
                auVar29[0xf] & UNK_0013936f | auVar8[0xf] & (byte)((ulong)_UNK_00139318 >> 0x38);
  if ((uVar3 & 0x40000) != 0) {
    uVar4 = uVar4 | 0x180000000000;
  }
  auVar12 = NEON_ext(auVar7,auVar7,8,1);
  uVar4 = CONCAT17(auVar7[7] | auVar12[7],
                   CONCAT16(auVar7[6] | auVar12[6],
                            CONCAT15(auVar7[5] | auVar12[5],
                                     CONCAT14(auVar7[4] | auVar12[4],
                                              CONCAT13(auVar7[3] | auVar12[3],
                                                       CONCAT12(auVar7[2] | auVar12[2],
                                                                CONCAT11(auVar7[1] | auVar12[1],
                                                                         auVar7[0] | auVar12[0])))))
                           )) | (param_1 & 0x100) >> 1 |
          auVar9._8_8_ & 0x200000000000 | (uVar3 >> 2 & 0x1f) << 0x25 |
          auVar8._0_8_ & 0x80000 | uVar3 >> 0x10 & 1 |
          uVar3 >> 4 & 0x10000000 | (uVar3 >> 0xd & 1) << 0x1a |
          CONCAT17(auVar11[7] & (byte)((ulong)_DAT_00139300 >> 0x38) |
                   (byte)(uVar3 >> 0x39) & UNK_00139347 |
                   auVar11[0xf] & (byte)((ulong)_UNK_00139308 >> 0x38) | auVar10[0xf] & UNK_0013934f
                   ,CONCAT16(auVar11[6] & (byte)((ulong)_DAT_00139300 >> 0x30) |
                             (byte)(uVar5 >> 0x30) & UNK_00139346 |
                             auVar11[0xe] & (byte)((ulong)_UNK_00139308 >> 0x30) |
                             auVar10[0xe] & UNK_0013934e,
                             CONCAT15(auVar11[5] & (byte)((ulong)_DAT_00139300 >> 0x28) |
                                      (byte)(uVar5 >> 0x28) & UNK_00139345 |
                                      auVar11[0xd] & (byte)((ulong)_UNK_00139308 >> 0x28) |
                                      auVar10[0xd] & UNK_0013934d,
                                      CONCAT14(auVar11[4] & (byte)((ulong)_DAT_00139300 >> 0x20) |
                                               (byte)(uVar5 >> 0x20) & UNK_00139344 |
                                               auVar11[0xc] & (byte)((ulong)_UNK_00139308 >> 0x20) |
                                               auVar10[0xc] & UNK_0013934c,
                                               CONCAT13(auVar11[3] &
                                                        (byte)((ulong)_DAT_00139300 >> 0x18) |
                                                        (byte)(uVar5 >> 0x18) & UNK_00139343 |
                                                        auVar11[0xb] &
                                                        (byte)((ulong)_UNK_00139308 >> 0x18) |
                                                        auVar10[0xb] & UNK_0013934b,
                                                        CONCAT12(auVar11[2] &
                                                                 (byte)((ulong)_DAT_00139300 >> 0x10
                                                                       ) | (byte)(uVar5 >> 0x10) &
                                                                           UNK_00139342 |
                                                                 auVar11[10] &
                                                                 (byte)((ulong)_UNK_00139308 >> 0x10
                                                                       ) | auVar10[10] &
                                                                           UNK_0013934a,
                                                                 CONCAT11(auVar11[1] &
                                                                          (byte)((ulong)
                                                  _DAT_00139300 >> 8) |
                                                  (byte)(uVar5 >> 8) & UNK_00139341 |
                                                  auVar11[9] & (byte)((ulong)_UNK_00139308 >> 8) |
                                                  auVar10[9] & UNK_00139349,
                                                  auVar11[0] & (byte)_DAT_00139300 |
                                                  (byte)uVar5 & DAT_00139340 |
                                                  auVar11[8] & (byte)_UNK_00139308 |
                                                  auVar10[8] & UNK_00139348))))))) | uVar4;
  if ((uVar2 >> 0xb & 1) != 0) {
    uVar5 = id_aa64isar1_el1;
    if ((uVar5 & 0xf0000000000) != 0) {
      uVar4 = uVar4 | 0x800000000000;
    }
    if (uVar5 >> 0x3c != 0) {
      uVar4 = uVar4 | 0x8000000000000;
    }
    uVar1 = uVar4 | 0x10000000000000;
    if (uVar5 >> 0x3d == 0) {
      uVar1 = uVar4;
    }
    uVar4 = uVar1 | 0x20000000000000;
    if (uVar5 >> 0x3c < 3) {
      uVar4 = uVar1;
    }
  }
  if ((param_1 & 1) != 0) {
    uVar4 = uVar4 | 0x300;
  }
  DAT_00179018 = auVar6._0_8_ & 0x400000 | ((ulong)(uVar2 >> 0x10) & 1) << 0x12 |
                 (param_1 & 0x4000000) >> 3 | ((ulong)(uVar2 >> 0x16) & 1) << 0x1e |
                 (param_1 & 0x20000) >> 4 | (uVar3 >> 0x2e & 1) << 0x3a |
                 (uVar3 & 0x4000) << 0xd | auVar8._0_8_ & 0x80000000 | (uVar3 & 2) << 0x23 | uVar4 |
                 0x8000000000000000;
  return;
}


