// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014b0c4; body: [[0014b0c4, 0014b32b]]

bool FUN_0014b0c4(long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  byte local_78 [64];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  uVar9 = *(ulong *)(param_3 + 8);
  uVar2 = uVar9;
  if (0x3e < uVar9) {
    uVar2 = 0x3f;
  }
  if (uVar9 != 0) {
    cVar3 = *(char *)(param_3 + 7);
    uVar9 = 0;
    uVar10 = *(ushort *)(param_3 + 6) ^ 0x7d1a4f62;
    do {
      uVar10 = uVar10 * 0x41c64e6d + 0x3039;
      local_78[uVar9] =
           (char)uVar9 * '\x11' + cVar3 ^ *(byte *)(param_3 + uVar9) ^ (byte)(uVar10 >> 0x10);
      uVar9 = uVar9 + 1;
    } while (uVar2 != uVar9);
  }
  lVar11 = *param_1;
  local_78[uVar2] = 0;
  pbVar7 = (byte *)(**(code **)(lVar11 + 0x548))(param_1,param_2,0);
  if (pbVar7 == (byte *)0x0) {
    bVar6 = false;
  }
  else {
    uVar10 = (uint)*pbVar7;
    if (*pbVar7 == 0) {
      pbVar8 = local_78;
    }
    else {
      pbVar8 = local_78;
      do {
        pbVar7 = pbVar7 + 1;
        bVar4 = *pbVar8;
        if (bVar4 == 0) {
LAB_0014b1d4:
          bVar6 = false;
          goto LAB_0014b1ec;
        }
        if (0xffffffe5 < uVar10 - 0x5b) {
          uVar10 = uVar10 | 0x20;
        }
        uVar1 = (uint)bVar4;
        if (0xffffffe5 < bVar4 - 0x5b) {
          uVar1 = bVar4 | 0x20;
        }
        if (uVar10 != uVar1) goto LAB_0014b1d4;
        uVar10 = (uint)*pbVar7;
        pbVar8 = pbVar8 + 1;
      } while (uVar10 != 0);
    }
    bVar6 = *pbVar8 == 0;
LAB_0014b1ec:
    (**(code **)(*param_1 + 0x550))(param_1,param_2);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0;
  local_78[0xc] = 0;
  local_78[0xd] = 0;
  local_78[0xe] = 0;
  local_78[0xf] = 0;
  local_78[0x10] = 0;
  local_78[0x11] = 0;
  local_78[0x12] = 0;
  local_78[0x13] = 0;
  local_78[0x14] = 0;
  local_78[0x15] = 0;
  local_78[0x16] = 0;
  local_78[0x17] = 0;
  local_78[0x18] = 0;
  local_78[0x19] = 0;
  local_78[0x1a] = 0;
  local_78[0x1b] = 0;
  local_78[0x1c] = 0;
  local_78[0x1d] = 0;
  local_78[0x1e] = 0;
  local_78[0x1f] = 0;
  local_78[0x20] = 0;
  local_78[0x21] = 0;
  local_78[0x22] = 0;
  local_78[0x23] = 0;
  local_78[0x24] = 0;
  local_78[0x25] = 0;
  local_78[0x26] = 0;
  local_78[0x27] = 0;
  local_78[0x28] = 0;
  local_78[0x29] = 0;
  local_78[0x2a] = 0;
  local_78[0x2b] = 0;
  local_78[0x2c] = 0;
  local_78[0x2d] = 0;
  local_78[0x2e] = 0;
  local_78[0x2f] = 0;
  local_78[0x30] = 0;
  local_78[0x31] = 0;
  local_78[0x32] = 0;
  local_78[0x33] = 0;
  local_78[0x34] = 0;
  local_78[0x35] = 0;
  local_78[0x36] = 0;
  local_78[0x37] = 0;
  local_78[0x38] = 0;
  local_78[0x39] = 0;
  local_78[0x3a] = 0;
  local_78[0x3b] = 0;
  local_78[0x3c] = 0;
  local_78[0x3d] = 0;
  local_78[0x3e] = 0;
  local_78[0x3f] = 0;
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}


