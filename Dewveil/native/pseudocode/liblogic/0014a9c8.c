// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014a9c8; body: [[0014a9c8, 0014ac8f]]

undefined4 FUN_0014a9c8(long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  undefined4 uVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  byte local_78 [64];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  lVar6 = FUN_0014bc58(param_1,param_2,&DAT_0010f528);
  if (lVar6 == 0) {
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x488))(param_1,param_2,lVar6);
    if (lVar6 != 0) {
      uVar10 = *(ulong *)(param_3 + 0x20);
      uVar2 = uVar10;
      if (0x3e < uVar10) {
        uVar2 = 0x3f;
      }
      if (uVar10 != 0) {
        cVar3 = *(char *)(param_3 + 0x1c);
        uVar10 = 0;
        uVar11 = *(ushort *)(param_3 + 0x1b) ^ 0x7d1a4f62;
        do {
          uVar11 = uVar11 * 0x41c64e6d + 0x3039;
          local_78[uVar10] =
               (char)uVar10 * '\x11' + cVar3 ^ *(byte *)(param_3 + uVar10) ^ (byte)(uVar11 >> 0x10);
          uVar10 = uVar10 + 1;
        } while (uVar2 != uVar10);
      }
      lVar12 = *param_1;
      local_78[uVar2] = 0;
      pbVar7 = (byte *)(**(code **)(lVar12 + 0x548))(param_1,lVar6,0);
      if (pbVar7 == (byte *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar11 = (uint)*pbVar7;
        if (*pbVar7 == 0) {
          pbVar9 = local_78;
        }
        else {
          pbVar9 = local_78;
          do {
            pbVar7 = pbVar7 + 1;
            bVar4 = *pbVar9;
            if (bVar4 == 0) {
LAB_0014ab20:
              uVar8 = 0;
              goto LAB_0014ab3c;
            }
            if (0xffffffe5 < uVar11 - 0x5b) {
              uVar11 = uVar11 | 0x20;
            }
            uVar1 = (uint)bVar4;
            if (0xffffffe5 < bVar4 - 0x5b) {
              uVar1 = bVar4 | 0x20;
            }
            if (uVar11 != uVar1) goto LAB_0014ab20;
            uVar11 = (uint)*pbVar7;
            pbVar9 = pbVar9 + 1;
          } while (uVar11 != 0);
        }
        uVar8 = 0x28;
        if (*pbVar9 != 0) {
          uVar8 = 0;
        }
LAB_0014ab3c:
        (**(code **)(*param_1 + 0x550))(param_1,lVar6);
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
      (**(code **)(*param_1 + 0xb8))(param_1,lVar6);
      goto LAB_0014ac64;
    }
  }
  uVar8 = 0;
LAB_0014ac64:
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


