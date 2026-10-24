// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001492c4; body: [[001492c4, 00149607]]

void FUN_001492c4(void)

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
  byte local_a8 [8];
  undefined4 local_a0;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined1 local_99;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  byte local_68 [64];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  lVar6 = 0;
  iVar5 = 0x7d1a0a89;
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
    local_68[lVar6] =
         (char)lVar6 * '\x11' + 0x45U ^ (&DAT_0010ef98)[lVar6] ^ (byte)((uint)iVar5 >> 0x10);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x11);
  local_68[0x11] = 0;
  local_a8 = (byte  [8])s_aosp_emugoogle_sgeneric_URER_0010eec0._16_8_;
  local_a0 = (undefined4)DAT_0010edc8;
  local_9c = 0x34;
  iVar5 = __system_property_get(local_68,&local_110);
  if (iVar5 < 1) {
LAB_001493cc:
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
        if (bVar2 == 0) goto LAB_001493cc;
        if (0xffffffe5 < uVar9 - 0x5b) {
          uVar9 = uVar9 | 0x20;
        }
        uVar1 = (uint)bVar2;
        if (0xffffffe5 < bVar2 - 0x5b) {
          uVar1 = bVar2 | 0x20;
        }
        if (uVar9 != uVar1) goto LAB_001493cc;
        uVar9 = (uint)*pbVar8;
        pbVar7 = pbVar7 + 1;
        pbVar8 = pbVar8 + 1;
      } while (uVar9 != 0);
    }
    bVar4 = *pbVar7 == 0;
  }
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
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a0 = 0;
  local_9c = 0;
  local_9a = 0;
  local_99 = 0;
  local_98 = 0;
  local_97 = 0;
  local_96 = 0;
  local_95 = 0;
  local_94 = 0;
  local_93 = 0;
  local_92 = 0;
  local_91 = 0;
  local_90 = 0;
  local_8f = 0;
  local_8e = 0;
  local_8d = 0;
  local_8c = 0;
  local_8b = 0;
  local_8a = 0;
  local_89 = 0;
  local_88 = 0;
  local_87 = 0;
  local_86 = 0;
  local_85 = 0;
  local_84 = 0;
  local_83 = 0;
  local_82 = 0;
  local_81 = 0;
  local_80 = 0;
  local_7f = 0;
  local_7e = 0;
  local_7d = 0;
  local_7c = 0;
  local_7b = 0;
  local_7a = 0;
  local_79 = 0;
  local_78 = 0;
  local_77 = 0;
  local_76 = 0;
  local_75 = 0;
  local_74 = 0;
  local_73 = 0;
  local_72 = 0;
  local_71 = 0;
  local_70 = 0;
  local_6f = 0;
  local_6e = 0;
  local_6d = 0;
  local_6c = 0;
  local_6b = 0;
  local_6a = 0;
  local_69 = 0;
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar4);
  }
  return;
}


