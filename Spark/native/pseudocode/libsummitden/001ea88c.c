// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ea88c; body: [[001ea88c, 001eaa77]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ea88c(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if ((param_1 >> 0x3e & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x10);
  }
  auVar7._8_8_ = uVar1;
  auVar7._0_8_ = uVar1;
  auVar4[8] = UNK_0011d6e8;
  auVar4._0_8_ = _DAT_0011d6e0;
  auVar8 = NEON_ushl(auVar7,_DAT_0011d7e0,8);
  auVar5 = NEON_ushl(auVar7,_DAT_0011d740,8);
  auVar3 = NEON_ushl(auVar7,_DAT_0011d760,8);
  auVar4[9] = (char)_UNK_0011d6e9;
  auVar4[10] = (char)((uint7)_UNK_0011d6e9 >> 8);
  auVar4[0xb] = (char)((uint7)_UNK_0011d6e9 >> 0x10);
  auVar4[0xc] = (char)((uint7)_UNK_0011d6e9 >> 0x18);
  auVar4[0xd] = (char)((uint7)_UNK_0011d6e9 >> 0x20);
  auVar4[0xe] = (char)((uint7)_UNK_0011d6e9 >> 0x28);
  auVar4[0xf] = (char)((uint7)_UNK_0011d6e9 >> 0x30);
  auVar4 = NEON_ushl(auVar7,auVar4,8);
  auVar6[0] = auVar3[0] & (byte)_DAT_0011d800 | auVar4[0] & (byte)_DAT_0011d730 |
              auVar8[0] & (byte)_DAT_0011d700 | auVar5[0] & DAT_0011d6f0;
  auVar6[1] = auVar3[1] & (byte)((ulong)_DAT_0011d800 >> 8) |
              auVar4[1] & (byte)((ulong)_DAT_0011d730 >> 8) |
              auVar8[1] & (byte)((ulong)_DAT_0011d700 >> 8) | auVar5[1] & UNK_0011d6f1;
  auVar6[2] = auVar3[2] & (byte)((ulong)_DAT_0011d800 >> 0x10) |
              auVar4[2] & (byte)((ulong)_DAT_0011d730 >> 0x10) |
              auVar8[2] & (byte)((ulong)_DAT_0011d700 >> 0x10) | auVar5[2] & UNK_0011d6f2;
  auVar6[3] = auVar3[3] & (byte)((ulong)_DAT_0011d800 >> 0x18) |
              auVar4[3] & (byte)((ulong)_DAT_0011d730 >> 0x18) |
              auVar8[3] & (byte)((ulong)_DAT_0011d700 >> 0x18) | auVar5[3] & UNK_0011d6f3;
  auVar6[4] = auVar3[4] & (byte)((ulong)_DAT_0011d800 >> 0x20) |
              auVar4[4] & (byte)((ulong)_DAT_0011d730 >> 0x20) |
              auVar8[4] & (byte)((ulong)_DAT_0011d700 >> 0x20) | auVar5[4] & UNK_0011d6f4;
  auVar6[5] = auVar3[5] & (byte)((ulong)_DAT_0011d800 >> 0x28) |
              auVar4[5] & (byte)((ulong)_DAT_0011d730 >> 0x28) |
              auVar8[5] & (byte)((ulong)_DAT_0011d700 >> 0x28) | auVar5[5] & UNK_0011d6f5;
  auVar6[6] = auVar3[6] & (byte)((ulong)_DAT_0011d800 >> 0x30) |
              auVar4[6] & (byte)((ulong)_DAT_0011d730 >> 0x30) |
              auVar8[6] & (byte)((ulong)_DAT_0011d700 >> 0x30) | auVar5[6] & UNK_0011d6f6;
  auVar6[7] = auVar3[7] & (byte)((ulong)_DAT_0011d800 >> 0x38) |
              auVar4[7] & (byte)((ulong)_DAT_0011d730 >> 0x38) |
              auVar8[7] & (byte)((ulong)_DAT_0011d700 >> 0x38) | auVar5[7] & UNK_0011d6f7;
  auVar6[8] = auVar3[8] & (byte)_UNK_0011d808 | auVar4[8] & (byte)_UNK_0011d738 |
              auVar8[8] & (byte)_UNK_0011d708 | auVar5[8] & UNK_0011d6f8;
  auVar6[9] = auVar3[9] & (byte)((ulong)_UNK_0011d808 >> 8) |
              auVar4[9] & (byte)((ulong)_UNK_0011d738 >> 8) |
              auVar8[9] & (byte)((ulong)_UNK_0011d708 >> 8) | auVar5[9] & UNK_0011d6f9;
  auVar6[10] = auVar3[10] & (byte)((ulong)_UNK_0011d808 >> 0x10) |
               auVar4[10] & (byte)((ulong)_UNK_0011d738 >> 0x10) |
               auVar8[10] & (byte)((ulong)_UNK_0011d708 >> 0x10) | auVar5[10] & UNK_0011d6fa;
  auVar6[0xb] = auVar3[0xb] & (byte)((ulong)_UNK_0011d808 >> 0x18) |
                auVar4[0xb] & (byte)((ulong)_UNK_0011d738 >> 0x18) |
                auVar8[0xb] & (byte)((ulong)_UNK_0011d708 >> 0x18) | auVar5[0xb] & UNK_0011d6fb;
  auVar6[0xc] = auVar3[0xc] & (byte)((ulong)_UNK_0011d808 >> 0x20) |
                auVar4[0xc] & (byte)((ulong)_UNK_0011d738 >> 0x20) |
                auVar8[0xc] & (byte)((ulong)_UNK_0011d708 >> 0x20) | auVar5[0xc] & UNK_0011d6fc;
  auVar6[0xd] = auVar3[0xd] & (byte)((ulong)_UNK_0011d808 >> 0x28) |
                auVar4[0xd] & (byte)((ulong)_UNK_0011d738 >> 0x28) |
                auVar8[0xd] & (byte)((ulong)_UNK_0011d708 >> 0x28) | auVar5[0xd] & UNK_0011d6fd;
  auVar6[0xe] = auVar3[0xe] & (byte)((ulong)_UNK_0011d808 >> 0x30) |
                auVar4[0xe] & (byte)((ulong)_UNK_0011d738 >> 0x30) |
                auVar8[0xe] & (byte)((ulong)_UNK_0011d708 >> 0x30) | auVar5[0xe] & UNK_0011d6fe;
  auVar6[0xf] = auVar3[0xf] & (byte)((ulong)_UNK_0011d808 >> 0x38) |
                auVar4[0xf] & (byte)((ulong)_UNK_0011d738 >> 0x38) |
                auVar8[0xf] & (byte)((ulong)_UNK_0011d708 >> 0x38) | auVar5[0xf] & UNK_0011d6ff;
  auVar7 = NEON_ext(auVar6,auVar6,8,1);
  uVar2 = CONCAT17(auVar6[7] | auVar7[7],
                   CONCAT16(auVar6[6] | auVar7[6],
                            CONCAT15(auVar6[5] | auVar7[5],
                                     CONCAT14(auVar6[4] | auVar7[4],
                                              CONCAT13(auVar6[3] | auVar7[3],
                                                       CONCAT12(auVar6[2] | auVar7[2],
                                                                CONCAT11(auVar6[1] | auVar7[1],
                                                                         auVar6[0] | auVar7[0]))))))
                  ) | (param_1 & 0x80) << 3 |
          param_1 >> 0x1a & 2 | (param_1 >> 4 & 1) << 0xf |
          param_1 >> 0xe & 0x20 | param_1 >> 0x10 & 0x10 |
          param_1 >> 0x14 & 8 | (param_1 >> 9 & 1) << 0x10 |
          param_1 >> 7 & 0x20000 | param_1 >> 6 & 0x40 |
          param_1 << 7 & 0x300000 | (param_1 >> 6 & 1) << 0xc |
          (param_1 & 0x10000000) << 0x15 | (param_1 >> 0x1d & 1) << 0x2e |
          param_1 >> 1 & 0x80 | uVar1 >> 5 & 4 |
          uVar1 << 0x23 & 0x3c000000000 | (uVar1 >> 0x12 & 1) << 0x2c |
          auVar4._0_8_ & 0x80000 | uVar1 >> 0x10 & 1 |
          auVar3._0_8_ & 0x800000000000000 | (uVar1 >> 0xd & 1) << 0x1a;
  if ((param_1 & 1) != 0) {
    uVar2 = uVar2 | 0x300;
  }
  DAT_00205ee8 = (param_1 >> 0x16 & 1) << 0x1e | (uVar1 >> 0x2e & 1) << 0x3a |
                 param_1 << 7 & 0x400000 | (param_1 >> 0x10 & 1) << 0x12 | param_1 >> 3 & 0x800000 |
                 param_1 >> 4 & 0x2000 | (uVar1 >> 0xe & 1) << 0x1b | uVar1 << 0x23 & 0x1000000000 |
                 uVar2 | 0x8000000000000000;
  return;
}


