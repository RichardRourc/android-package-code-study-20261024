// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014c0e4; body: [[0014c0e4, 0014c2ab]]

void FUN_0014c0e4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  byte local_c8 [96];
  char local_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  lVar2 = 0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar3 = 0x7d1a21d0;
  local_68._0_8_ = s_emulatioPRODUCT_0010edf0._8_8_;
  do {
    iVar3 = iVar3 * 0x41c64e6d + 0x3039;
    local_c8[lVar2] =
         (char)lVar2 * '\x11' + 0x6eU ^ (&DAT_0010f018)[lVar2] ^ (byte)((uint)iVar3 >> 0x10);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x12);
  local_c8[0x12] = 0;
  (**(code **)(*param_1 + 0x480))(param_1,param_2,local_68,local_c8);
  lVar2 = 0;
  local_68[0] = '\0';
  local_68[1] = '\0';
  local_68[2] = '\0';
  local_68[3] = '\0';
  local_68[4] = '\0';
  local_68[5] = '\0';
  local_68[6] = '\0';
  local_68[7] = '\0';
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
    local_c8[lVar2] = 0;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


