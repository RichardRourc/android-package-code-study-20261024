// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014a120; body: [[0014a120, 0014a2d3]]

void FUN_0014a120(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  byte local_58 [8];
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  long local_18;
  
  lVar3 = tpidr_el0;
  local_18 = *(long *)(lVar3 + 0x28);
  local_58 = (byte  [8])s_sdk_gphoandroid_init_0010ed70._8_8_;
  local_50 = (int)DAT_0010ee68;
  bVar4 = false;
  if (param_1 != (byte *)0x0) {
    uVar6 = (uint)*param_1;
    if (*param_1 == 0) {
LAB_0014a1b0:
      bVar4 = false;
    }
    else {
      pbVar5 = local_58;
      do {
        param_1 = param_1 + 1;
        bVar2 = *pbVar5;
        if (bVar2 == 0) goto LAB_0014a1b0;
        if (0xffffffe5 < uVar6 - 0x5b) {
          uVar6 = uVar6 | 0x20;
        }
        uVar1 = (uint)bVar2;
        if (0xffffffe5 < bVar2 - 0x5b) {
          uVar1 = bVar2 | 0x20;
        }
        if (uVar6 != uVar1) goto LAB_0014a1b0;
        uVar6 = (uint)*param_1;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
      bVar4 = *pbVar5 == 0;
    }
  }
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_50 = 0;
  local_4c = 0;
  local_4b = 0;
  local_4a = 0;
  local_49 = 0;
  local_48 = 0;
  local_47 = 0;
  local_46 = 0;
  local_45 = 0;
  local_44 = 0;
  local_43 = 0;
  local_42 = 0;
  local_41 = 0;
  local_40 = 0;
  local_3f = 0;
  local_3e = 0;
  local_3d = 0;
  local_3c = 0;
  local_3b = 0;
  local_3a = 0;
  local_39 = 0;
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_35 = 0;
  local_34 = 0;
  local_33 = 0;
  local_32 = 0;
  local_31 = 0;
  local_30 = 0;
  local_2f = 0;
  local_2e = 0;
  local_2d = 0;
  local_2c = 0;
  local_2b = 0;
  local_2a = 0;
  local_29 = 0;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_25 = 0;
  local_24 = 0;
  local_23 = 0;
  local_22 = 0;
  local_21 = 0;
  local_20 = 0;
  local_1f = 0;
  local_1e = 0;
  local_1d = 0;
  local_1c = 0;
  local_1b = 0;
  local_1a = 0;
  local_19 = 0;
  if (*(long *)(lVar3 + 0x28) == *(long *)(lVar3 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


