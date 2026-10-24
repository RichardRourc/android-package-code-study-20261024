// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014c480; body: [[0014c480, 0014c693]]

undefined4 FUN_0014c480(long *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  byte local_88 [64];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  pcVar5 = (char *)(**(code **)(*param_1 + 0x548))(param_1,param_2,0);
  if (pcVar5 == (char *)0x0) {
    uVar11 = 0;
  }
  else {
    local_88[8] = 0;
    local_88[0] = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38[0x10];
    local_88[1] = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38[0x11];
    local_88[2] = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38[0x12];
    local_88[3] = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38[0x13];
    local_88[4] = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38[0x14];
    local_88[5] = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38[0x15];
    local_88[6] = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38[0x16];
    local_88[7] = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38[0x17];
    lVar6 = __strlen_chk(local_88,0x40);
    cVar1 = *pcVar5;
    pcVar7 = pcVar5;
    while (cVar1 != '\0') {
      lVar8 = 0;
      do {
        if (lVar6 == lVar8) {
          uVar11 = 1;
          goto LAB_0014c544;
        }
        bVar2 = pcVar7[lVar8];
        bVar3 = local_88[lVar8];
        lVar8 = lVar8 + 1;
        uVar9 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar9 = (uint)bVar2;
        }
        uVar10 = bVar3 | 0x20;
        if (0x19 < bVar3 - 0x41) {
          uVar10 = (uint)bVar3;
        }
      } while (uVar9 == uVar10);
      pcVar7 = pcVar7 + 1;
      cVar1 = *pcVar7;
    }
    uVar11 = 0;
LAB_0014c544:
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[6] = 0;
    local_88[7] = 0;
    local_88[8] = 0;
    local_88[9] = 0;
    local_88[10] = 0;
    local_88[0xb] = 0;
    local_88[0xc] = 0;
    local_88[0xd] = 0;
    local_88[0xe] = 0;
    local_88[0xf] = 0;
    local_88[0x10] = 0;
    local_88[0x11] = 0;
    local_88[0x12] = 0;
    local_88[0x13] = 0;
    local_88[0x14] = 0;
    local_88[0x15] = 0;
    local_88[0x16] = 0;
    local_88[0x17] = 0;
    local_88[0x18] = 0;
    local_88[0x19] = 0;
    local_88[0x1a] = 0;
    local_88[0x1b] = 0;
    local_88[0x1c] = 0;
    local_88[0x1d] = 0;
    local_88[0x1e] = 0;
    local_88[0x1f] = 0;
    local_88[0x20] = 0;
    local_88[0x21] = 0;
    local_88[0x22] = 0;
    local_88[0x23] = 0;
    local_88[0x24] = 0;
    local_88[0x25] = 0;
    local_88[0x26] = 0;
    local_88[0x27] = 0;
    local_88[0x28] = 0;
    local_88[0x29] = 0;
    local_88[0x2a] = 0;
    local_88[0x2b] = 0;
    local_88[0x2c] = 0;
    local_88[0x2d] = 0;
    local_88[0x2e] = 0;
    local_88[0x2f] = 0;
    local_88[0x30] = 0;
    local_88[0x31] = 0;
    local_88[0x32] = 0;
    local_88[0x33] = 0;
    local_88[0x34] = 0;
    local_88[0x35] = 0;
    local_88[0x36] = 0;
    local_88[0x37] = 0;
    local_88[0x38] = 0;
    local_88[0x39] = 0;
    local_88[0x3a] = 0;
    local_88[0x3b] = 0;
    local_88[0x3c] = 0;
    local_88[0x3d] = 0;
    local_88[0x3e] = 0;
    local_88[0x3f] = 0;
    (**(code **)(*param_1 + 0x550))(param_1,param_2,pcVar5);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


