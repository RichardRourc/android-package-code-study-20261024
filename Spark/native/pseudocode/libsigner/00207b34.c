// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00207b34; body: [[00207b34, 002083ab]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00207b34(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long unaff_x23;
  undefined *unaff_x25;
  uint uVar18;
  long unaff_x27;
  long unaff_x28;
  undefined1 auVar19 [16];
  long local_340;
  long lStack_338;
  long local_330;
  long lStack_328;
  undefined *local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  long local_2f8;
  long local_2d0;
  long lStack_2c8;
  ulong local_2c0;
  long local_2b8;
  byte local_2b0 [64];
  ulong local_270 [66];
  
  lVar4 = tpidr_el0;
  local_270[0x40] = *(long *)(lVar4 + 0x28);
  *param_1 = param_2;
  FUN_00202858();
  lVar7 = _UNK_00103008;
  lVar6 = _DAT_00103000;
  local_2b0[8] = 0;
  local_2b0[9] = 0;
  local_2b0[10] = 0;
  local_2b0[0xb] = 0;
  local_2b0[0xc] = 0;
  local_2b0[0xd] = 0;
  local_2b0[0xe] = 0;
  local_2b0[0xf] = 0;
  local_2b0[0] = 0;
  local_2b0[1] = 0;
  local_2b0[2] = 0;
  local_2b0[3] = 0;
  local_2b0[4] = 0;
  local_2b0[5] = 0;
  local_2b0[6] = 0;
  local_2b0[7] = 0;
  local_2b0[0x18] = 0;
  local_2b0[0x19] = 0;
  local_2b0[0x1a] = 0;
  local_2b0[0x1b] = 0;
  local_2b0[0x1c] = 0;
  local_2b0[0x1d] = 0;
  local_2b0[0x1e] = 0;
  local_2b0[0x1f] = 0;
  local_2b0[0x10] = 0;
  local_2b0[0x11] = 0;
  local_2b0[0x12] = 0;
  local_2b0[0x13] = 0;
  local_2b0[0x14] = 0;
  local_2b0[0x15] = 0;
  local_2b0[0x16] = 0;
  local_2b0[0x17] = 0;
  local_2b0[0x28] = 0;
  local_2b0[0x29] = 0;
  local_2b0[0x2a] = 0;
  local_2b0[0x2b] = 0;
  local_2b0[0x2c] = 0;
  local_2b0[0x2d] = 0;
  local_2b0[0x2e] = 0;
  local_2b0[0x2f] = 0;
  local_2b0[0x20] = 0;
  local_2b0[0x21] = 0;
  local_2b0[0x22] = 0;
  local_2b0[0x23] = 0;
  local_2b0[0x24] = 0;
  local_2b0[0x25] = 0;
  local_2b0[0x26] = 0;
  local_2b0[0x27] = 0;
  local_2b0[0x38] = 0;
  local_2b0[0x39] = 0;
  local_2b0[0x3a] = 0;
  local_2b0[0x3b] = 0;
  local_2b0[0x3c] = 0;
  local_2b0[0x3d] = 0;
  local_2b0[0x3e] = 0;
  local_2b0[0x3f] = 0;
  local_2b0[0x30] = 0;
  local_2b0[0x31] = 0;
  local_2b0[0x32] = 0;
  local_2b0[0x33] = 0;
  local_2b0[0x34] = 0;
  local_2b0[0x35] = 0;
  local_2b0[0x36] = 0;
  local_2b0[0x37] = 0;
  bVar3 = false;
  puVar8 = &DAT_00103000;
  lVar9 = 0;
  lVar10 = 2;
  puVar1 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar17 = puVar1, lVar15 = lVar10, lVar14 = lVar9, puVar12 = puVar8,
                puVar1 = puVar17, puVar8 = puVar12, lVar9 = lVar14, lVar10 = lVar15,
                (long)puVar17 < 0x52cde6c2dea1be4) {
            if ((long)puVar17 < -0x2ddd98d59c65e2d2) {
              if ((long)puVar17 < -0x3dc07bfa902cf42a) {
                puVar1 = (undefined1 *)0xf54c5df74fcabc41;
                if ((puVar17 != (undefined1 *)0xaa46adf0a78af8c7) &&
                   (puVar1 = puVar17, puVar17 == (undefined1 *)0xbf711ec4fafe862e)) {
                  local_2b8 = local_2f8;
                  lStack_2c8 = lStack_328;
                  local_2d0 = local_330;
                  puVar1 = (undefined1 *)0xd222672a639a1d2e;
                }
              }
              else {
                puVar1 = (undefined1 *)0x6b5051bf1aed633d;
                if ((puVar17 != (undefined1 *)0xc23f84056fd30bd6) &&
                   (puVar1 = puVar17, puVar17 == (undefined1 *)0xc89737e2f8768a05)) {
                  uVar16 = FUN_002027c4(param_1 + 2);
                  unaff_x23 = lVar15 + 1;
                  uVar13 = 1L << ((ulong)~(uint)local_2b0[lVar15] & 0x3f);
                  puVar1 = (undefined1 *)0x353e7cd16df664a2;
                  if (unaff_x23 != 0x40) {
                    puVar1 = (undefined1 *)0x52cde6c2dea1be4;
                  }
                  *(ulong *)(param_1 + lVar15 * 2 + 4) = uVar13 - 1 & uVar16 | uVar13;
                }
              }
            }
            else if ((long)puVar17 < -0x9ea7f7bbe4e2504) {
              if (puVar17 == (undefined1 *)0xd222672a639a1d2e) {
                auVar19._8_8_ = uStack_308;
                auVar19._0_8_ = local_310;
                lStack_338 = lStack_2c8;
                local_340 = local_2d0;
                auVar5._8_8_ = lStack_2c8;
                auVar5._0_8_ = local_2d0;
                auVar19 = NEON_ushl(auVar19,auVar5,8);
                bVar3 = (auVar19._8_8_ & 0x8000000000000000) != 0;
                puVar1 = (undefined1 *)0xf63b36e7a9d9f670;
                unaff_x28 = local_2b8;
                if ((auVar19._0_8_ & 0x8000000000000000) == 0) {
                  puVar1 = (undefined1 *)0xaa46adf0a78af8c7;
                }
              }
              else if (puVar17 == (undefined1 *)0xf54c5df74fcabc41) {
                puVar1 = (undefined1 *)0xf6c71d76f8b48eb9;
                if (!bVar3) {
                  puVar1 = (undefined1 *)0xc23f84056fd30bd6;
                }
              }
            }
            else if (puVar17 == &DAT_f615808441b1dafc) {
              uVar11 = FUN_0020275c(param_1 + 2);
              unaff_x27 = lVar14 + 1;
              uVar2 = 0;
              uVar18 = (uint)unaff_x27;
              if (uVar18 != 0) {
                uVar2 = uVar11 / uVar18;
              }
              uVar11 = uVar11 - uVar2 * uVar18;
              puVar1 = (undefined1 *)0x696b554ab6b2c8c5;
              if (unaff_x27 != 0x40) {
                puVar1 = (undefined1 *)0x125dd2cc844aecb4;
              }
              local_2b0[lVar14] = local_2b0[uVar11];
              local_2b0[uVar11] = (byte)lVar14;
            }
            else if (puVar17 == (undefined1 *)0xf63b36e7a9d9f670) {
              local_270[unaff_x28] = local_270[unaff_x28] | local_2c0;
              puVar1 = (undefined1 *)0xf54c5df74fcabc41;
            }
            else if (puVar17 == (undefined1 *)0xf6c71d76f8b48eb9) {
              uVar16 = unaff_x28 << 3 | 8;
              *(ulong *)((long)local_270 + uVar16) =
                   *(ulong *)((long)local_270 + uVar16) | local_2c0;
              puVar1 = (undefined1 *)0x6b5051bf1aed633d;
            }
          }
          if (0x312910f1547c7c76 < (long)puVar17) break;
          if ((long)puVar17 < 0x125dd2cc844aecb4) {
            lVar10 = unaff_x23;
            puVar1 = (undefined1 *)0xc89737e2f8768a05;
            if ((puVar17 != (undefined1 *)0x52cde6c2dea1be4) &&
               (lVar10 = lVar15, puVar1 = puVar17, puVar17 == (undefined1 *)0x887e73b2c28c6a1)) {
              puVar1 = &DAT_f615808441b1dafc;
            }
          }
          else {
            lVar9 = unaff_x27;
            puVar1 = &DAT_f615808441b1dafc;
            if (puVar17 != (undefined1 *)0x125dd2cc844aecb4) {
              if (puVar17 == (undefined1 *)0x1cba5f82f77e481f) {
                unaff_x25 = local_318 + 1;
                lVar9 = lVar14;
                puVar1 = (undefined1 *)0x312910f1547c7c77;
                if (unaff_x25 != (undefined *)0x40) {
                  puVar1 = (undefined1 *)0x3b36a7a007b21166;
                }
              }
              else {
                lVar9 = lVar14;
                puVar1 = puVar17;
                if (puVar17 == (undefined1 *)0x2ce2edddaf334d81) {
                  local_2d0 = lVar6;
                  lStack_2c8 = lVar7;
                  local_2c0 = 0x8000000000000000 >> ((ulong)puVar12 & 0x3f);
                  local_310 = *(undefined8 *)(param_1 + 4 + (long)puVar12 * 2);
                  local_2b8 = 0;
                  puVar1 = (undefined1 *)0xd222672a639a1d2e;
                  local_318 = puVar12;
                  uStack_308 = local_310;
                }
              }
            }
          }
        }
        if ((long)puVar17 < 0x696b554ab6b2c8c5) break;
        if (puVar17 == (undefined1 *)0x696b554ab6b2c8c5) {
          lVar10 = 0;
          puVar1 = (undefined1 *)0xc89737e2f8768a05;
        }
        else if (puVar17 == (undefined1 *)0x6b5051bf1aed633d) {
          local_2f8 = unaff_x28 + 2;
          local_330 = local_340 + 2;
          lStack_328 = lStack_338 + 2;
          puVar1 = (undefined1 *)0x1cba5f82f77e481f;
          if (local_2f8 != 0x40) {
            puVar1 = (undefined1 *)0xbf711ec4fafe862e;
          }
        }
      }
      if (puVar17 != (undefined1 *)0x353e7cd16df664a2) break;
      local_270[1] = 0;
      local_270[0] = 0;
      local_270[3] = 0;
      local_270[2] = 0;
      local_270[5] = 0;
      local_270[4] = 0;
      local_270[7] = 0;
      local_270[6] = 0;
      local_270[9] = 0;
      local_270[8] = 0;
      local_270[0xb] = 0;
      local_270[10] = 0;
      local_270[0xd] = 0;
      local_270[0xc] = 0;
      local_270[0xf] = 0;
      local_270[0xe] = 0;
      local_270[0x11] = 0;
      local_270[0x10] = 0;
      local_270[0x13] = 0;
      local_270[0x12] = 0;
      local_270[0x15] = 0;
      local_270[0x14] = 0;
      local_270[0x17] = 0;
      local_270[0x16] = 0;
      local_270[0x19] = 0;
      local_270[0x18] = 0;
      local_270[0x1b] = 0;
      local_270[0x1a] = 0;
      local_270[0x1d] = 0;
      local_270[0x1c] = 0;
      local_270[0x1f] = 0;
      local_270[0x1e] = 0;
      local_270[0x21] = 0;
      local_270[0x20] = 0;
      local_270[0x23] = 0;
      local_270[0x22] = 0;
      local_270[0x25] = 0;
      local_270[0x24] = 0;
      local_270[0x27] = 0;
      local_270[0x26] = 0;
      local_270[0x29] = 0;
      local_270[0x28] = 0;
      local_270[0x2b] = 0;
      local_270[0x2a] = 0;
      local_270[0x2d] = 0;
      local_270[0x2c] = 0;
      local_270[0x2f] = 0;
      local_270[0x2e] = 0;
      local_270[0x31] = 0;
      local_270[0x30] = 0;
      local_270[0x33] = 0;
      local_270[0x32] = 0;
      local_270[0x35] = 0;
      local_270[0x34] = 0;
      local_270[0x37] = 0;
      local_270[0x36] = 0;
      local_270[0x39] = 0;
      local_270[0x38] = 0;
      local_270[0x3b] = 0;
      local_270[0x3a] = 0;
      local_270[0x3d] = 0;
      local_270[0x3c] = 0;
      local_270[0x3f] = 0;
      local_270[0x3e] = 0;
      puVar8 = (undefined *)0x0;
      puVar1 = (undefined1 *)0x2ce2edddaf334d81;
    }
    puVar8 = unaff_x25;
    puVar1 = (undefined1 *)0x2ce2edddaf334d81;
  } while ((puVar17 == (undefined1 *)0x3b36a7a007b21166) ||
          (puVar8 = puVar12, puVar1 = puVar17, puVar17 != (undefined1 *)0x312910f1547c7c77));
  memcpy(param_1 + 4,local_270,0x200);
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_1 + 0x82);
  if (*(long *)(lVar4 + 0x28) != local_270[0x40]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


