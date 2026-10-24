// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00149d64; body: [[00149d64, 00149f77]]

void FUN_00149d64(byte *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  byte local_58 [64];
  long local_18;
  
  lVar5 = tpidr_el0;
  local_18 = *(long *)(lVar5 + 0x28);
  uVar8 = *(ulong *)(param_2 + 8);
  uVar2 = uVar8;
  if (0x3e < uVar8) {
    uVar2 = 0x3f;
  }
  if (uVar8 != 0) {
    cVar3 = *(char *)(param_2 + 5);
    uVar8 = 0;
    uVar9 = *(ushort *)(param_2 + 4) ^ 0x7d1a4f62;
    do {
      uVar9 = uVar9 * 0x41c64e6d + 0x3039;
      local_58[uVar8] =
           (char)uVar8 * '\x11' + cVar3 ^ *(byte *)(param_2 + uVar8) ^ (byte)(uVar9 >> 0x10);
      uVar8 = uVar8 + 1;
    } while (uVar2 != uVar8);
  }
  local_58[uVar2] = 0;
  bVar6 = false;
  if (param_1 != (byte *)0x0) {
    uVar9 = (uint)*param_1;
    if (*param_1 == 0) {
      pbVar7 = local_58;
    }
    else {
      pbVar7 = local_58;
      do {
        param_1 = param_1 + 1;
        bVar4 = *pbVar7;
        if (bVar4 == 0) {
LAB_00149e40:
          bVar6 = false;
          goto LAB_00149e58;
        }
        if (0xffffffe5 < uVar9 - 0x5b) {
          uVar9 = uVar9 | 0x20;
        }
        uVar1 = (uint)bVar4;
        if (0xffffffe5 < bVar4 - 0x5b) {
          uVar1 = bVar4 | 0x20;
        }
        if (uVar9 != uVar1) goto LAB_00149e40;
        uVar9 = (uint)*param_1;
        pbVar7 = pbVar7 + 1;
      } while (uVar9 != 0);
    }
    bVar6 = *pbVar7 == 0;
  }
LAB_00149e58:
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[8] = 0;
  local_58[9] = 0;
  local_58[10] = 0;
  local_58[0xb] = 0;
  local_58[0xc] = 0;
  local_58[0xd] = 0;
  local_58[0xe] = 0;
  local_58[0xf] = 0;
  local_58[0x10] = 0;
  local_58[0x11] = 0;
  local_58[0x12] = 0;
  local_58[0x13] = 0;
  local_58[0x14] = 0;
  local_58[0x15] = 0;
  local_58[0x16] = 0;
  local_58[0x17] = 0;
  local_58[0x18] = 0;
  local_58[0x19] = 0;
  local_58[0x1a] = 0;
  local_58[0x1b] = 0;
  local_58[0x1c] = 0;
  local_58[0x1d] = 0;
  local_58[0x1e] = 0;
  local_58[0x1f] = 0;
  local_58[0x20] = 0;
  local_58[0x21] = 0;
  local_58[0x22] = 0;
  local_58[0x23] = 0;
  local_58[0x24] = 0;
  local_58[0x25] = 0;
  local_58[0x26] = 0;
  local_58[0x27] = 0;
  local_58[0x28] = 0;
  local_58[0x29] = 0;
  local_58[0x2a] = 0;
  local_58[0x2b] = 0;
  local_58[0x2c] = 0;
  local_58[0x2d] = 0;
  local_58[0x2e] = 0;
  local_58[0x2f] = 0;
  local_58[0x30] = 0;
  local_58[0x31] = 0;
  local_58[0x32] = 0;
  local_58[0x33] = 0;
  local_58[0x34] = 0;
  local_58[0x35] = 0;
  local_58[0x36] = 0;
  local_58[0x37] = 0;
  local_58[0x38] = 0;
  local_58[0x39] = 0;
  local_58[0x3a] = 0;
  local_58[0x3b] = 0;
  local_58[0x3c] = 0;
  local_58[0x3d] = 0;
  local_58[0x3e] = 0;
  local_58[0x3f] = 0;
  if (*(long *)(lVar5 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar6);
  }
  return;
}


