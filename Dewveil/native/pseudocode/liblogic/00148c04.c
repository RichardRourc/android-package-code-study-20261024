// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00148c04; body: [[00148c04, 00148f37]]

void FUN_00148c04(void)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  byte local_a8 [128];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  lVar6 = 0;
  iVar5 = 0x7d1a0487;
  uStack_bc = 0;
  uStack_c0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_c4 = 0;
  uStack_d0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  do {
    iVar5 = iVar5 * 0x41c64e6d + 0x3039;
    local_a8[lVar6 + 0x40] =
         (char)lVar6 * '\x11' + 0x4bU ^ (&DAT_0010f198)[lVar6] ^ (byte)((uint)iVar5 >> 0x10);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0xf);
  local_a8[0x4f] = 0;
  local_a8[8] = 0;
  local_a8._0_8_ = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38._16_8_;
  iVar5 = __system_property_get(local_a8 + 0x40,&local_110);
  if (iVar5 < 1) {
LAB_00148cfc:
    bVar4 = false;
  }
  else {
    uVar9 = (uint)(byte)local_110;
    if ((byte)local_110 == 0) {
      pbVar7 = local_a8;
    }
    else {
      pbVar7 = local_a8;
      pbVar8 = (byte *)((ulong)&local_110 | 1);
      do {
        bVar2 = *pbVar7;
        if (bVar2 == 0) goto LAB_00148cfc;
        if (0xffffffe5 < uVar9 - 0x5b) {
          uVar9 = uVar9 | 0x20;
        }
        uVar1 = (uint)bVar2;
        if (0xffffffe5 < bVar2 - 0x5b) {
          uVar1 = bVar2 | 0x20;
        }
        if (uVar9 != uVar1) goto LAB_00148cfc;
        uVar9 = (uint)*pbVar8;
        pbVar7 = pbVar7 + 1;
        pbVar8 = pbVar8 + 1;
      } while (uVar9 != 0);
    }
    bVar4 = *pbVar7 == 0;
  }
  local_a8[0x40] = 0;
  local_a8[0x41] = 0;
  local_a8[0x42] = 0;
  local_a8[0x43] = 0;
  local_a8[0x44] = 0;
  local_a8[0x45] = 0;
  local_a8[0x46] = 0;
  local_a8[0x47] = 0;
  local_a8[0x48] = 0;
  local_a8[0x49] = 0;
  local_a8[0x4a] = 0;
  local_a8[0x4b] = 0;
  local_a8[0x4c] = 0;
  local_a8[0x4d] = 0;
  local_a8[0x4e] = 0;
  local_a8[0x4f] = 0;
  local_a8[0x50] = 0;
  local_a8[0x51] = 0;
  local_a8[0x52] = 0;
  local_a8[0x53] = 0;
  local_a8[0x54] = 0;
  local_a8[0x55] = 0;
  local_a8[0x56] = 0;
  local_a8[0x57] = 0;
  local_a8[0x58] = 0;
  local_a8[0x59] = 0;
  local_a8[0x5a] = 0;
  local_a8[0x5b] = 0;
  local_a8[0x5c] = 0;
  local_a8[0x5d] = 0;
  local_a8[0x5e] = 0;
  local_a8[0x5f] = 0;
  local_a8[0x60] = 0;
  local_a8[0x61] = 0;
  local_a8[0x62] = 0;
  local_a8[99] = 0;
  local_a8[100] = 0;
  local_a8[0x65] = 0;
  local_a8[0x66] = 0;
  local_a8[0x67] = 0;
  local_a8[0x68] = 0;
  local_a8[0x69] = 0;
  local_a8[0x6a] = 0;
  local_a8[0x6b] = 0;
  local_a8[0x6c] = 0;
  local_a8[0x6d] = 0;
  local_a8[0x6e] = 0;
  local_a8[0x6f] = 0;
  local_a8[0x70] = 0;
  local_a8[0x71] = 0;
  local_a8[0x72] = 0;
  local_a8[0x73] = 0;
  local_a8[0x74] = 0;
  local_a8[0x75] = 0;
  local_a8[0x76] = 0;
  local_a8[0x77] = 0;
  local_a8[0x78] = 0;
  local_a8[0x79] = 0;
  local_a8[0x7a] = 0;
  local_a8[0x7b] = 0;
  local_a8[0x7c] = 0;
  local_a8[0x7d] = 0;
  local_a8[0x7e] = 0;
  local_a8[0x7f] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[10] = 0;
  local_a8[0xb] = 0;
  local_a8[0xc] = 0;
  local_a8[0xd] = 0;
  local_a8[0xe] = 0;
  local_a8[0xf] = 0;
  local_a8[0x10] = 0;
  local_a8[0x11] = 0;
  local_a8[0x12] = 0;
  local_a8[0x13] = 0;
  local_a8[0x14] = 0;
  local_a8[0x15] = 0;
  local_a8[0x16] = 0;
  local_a8[0x17] = 0;
  local_a8[0x18] = 0;
  local_a8[0x19] = 0;
  local_a8[0x1a] = 0;
  local_a8[0x1b] = 0;
  local_a8[0x1c] = 0;
  local_a8[0x1d] = 0;
  local_a8[0x1e] = 0;
  local_a8[0x1f] = 0;
  local_a8[0x20] = 0;
  local_a8[0x21] = 0;
  local_a8[0x22] = 0;
  local_a8[0x23] = 0;
  local_a8[0x24] = 0;
  local_a8[0x25] = 0;
  local_a8[0x26] = 0;
  local_a8[0x27] = 0;
  local_a8[0x28] = 0;
  local_a8[0x29] = 0;
  local_a8[0x2a] = 0;
  local_a8[0x2b] = 0;
  local_a8[0x2c] = 0;
  local_a8[0x2d] = 0;
  local_a8[0x2e] = 0;
  local_a8[0x2f] = 0;
  local_a8[0x30] = 0;
  local_a8[0x31] = 0;
  local_a8[0x32] = 0;
  local_a8[0x33] = 0;
  local_a8[0x34] = 0;
  local_a8[0x35] = 0;
  local_a8[0x36] = 0;
  local_a8[0x37] = 0;
  local_a8[0x38] = 0;
  local_a8[0x39] = 0;
  local_a8[0x3a] = 0;
  local_a8[0x3b] = 0;
  local_a8[0x3c] = 0;
  local_a8[0x3d] = 0;
  local_a8[0x3e] = 0;
  local_a8[0x3f] = 0;
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar4);
  }
  return;
}


