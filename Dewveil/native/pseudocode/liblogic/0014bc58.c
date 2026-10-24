// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014bc58; body: [[0014bc58, 0014be7b]]

void FUN_0014bc58(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  byte local_c8 [96];
  byte local_68 [64];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar4 = *(ulong *)(param_3 + 8);
  uVar1 = uVar4;
  if (0x3e < uVar4) {
    uVar1 = 0x3f;
  }
  if (uVar4 != 0) {
    cVar2 = *(char *)(param_3 + 6);
    uVar4 = 0;
    uVar7 = *(ushort *)(param_3 + 5) ^ 0x7d1a4f62;
    do {
      uVar7 = uVar7 * 0x41c64e6d + 0x3039;
      local_68[uVar4] =
           (char)uVar4 * '\x11' + cVar2 ^ *(byte *)(param_3 + uVar4) ^ (byte)(uVar7 >> 0x10);
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  lVar5 = 0;
  iVar6 = 0x7d1a21d0;
  local_68[uVar1] = 0;
  do {
    iVar6 = iVar6 * 0x41c64e6d + 0x3039;
    local_c8[lVar5] =
         (char)lVar5 * '\x11' + 0x6eU ^ (&DAT_0010f018)[lVar5] ^ (byte)((uint)iVar6 >> 0x10);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x12);
  local_c8[0x12] = 0;
  (**(code **)(*param_1 + 0x480))(param_1,param_2,local_68,local_c8);
  lVar5 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  local_68[8] = 0;
  local_68[9] = 0;
  local_68[10] = 0;
  local_68[0xb] = 0;
  local_68[0xc] = 0;
  local_68[0xd] = 0;
  local_68[0xe] = 0;
  local_68[0xf] = 0;
  local_68[0x10] = 0;
  local_68[0x11] = 0;
  local_68[0x12] = 0;
  local_68[0x13] = 0;
  local_68[0x14] = 0;
  local_68[0x15] = 0;
  local_68[0x16] = 0;
  local_68[0x17] = 0;
  local_68[0x18] = 0;
  local_68[0x19] = 0;
  local_68[0x1a] = 0;
  local_68[0x1b] = 0;
  local_68[0x1c] = 0;
  local_68[0x1d] = 0;
  local_68[0x1e] = 0;
  local_68[0x1f] = 0;
  local_68[0x20] = 0;
  local_68[0x21] = 0;
  local_68[0x22] = 0;
  local_68[0x23] = 0;
  local_68[0x24] = 0;
  local_68[0x25] = 0;
  local_68[0x26] = 0;
  local_68[0x27] = 0;
  local_68[0x28] = 0;
  local_68[0x29] = 0;
  local_68[0x2a] = 0;
  local_68[0x2b] = 0;
  local_68[0x2c] = 0;
  local_68[0x2d] = 0;
  local_68[0x2e] = 0;
  local_68[0x2f] = 0;
  local_68[0x30] = 0;
  local_68[0x31] = 0;
  local_68[0x32] = 0;
  local_68[0x33] = 0;
  local_68[0x34] = 0;
  local_68[0x35] = 0;
  local_68[0x36] = 0;
  local_68[0x37] = 0;
  local_68[0x38] = 0;
  local_68[0x39] = 0;
  local_68[0x3a] = 0;
  local_68[0x3b] = 0;
  local_68[0x3c] = 0;
  local_68[0x3d] = 0;
  local_68[0x3e] = 0;
  local_68[0x3f] = 0;
  do {
    local_c8[lVar5] = 0;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x60);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


