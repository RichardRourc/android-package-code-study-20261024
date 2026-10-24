// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014b32c; body: [[0014b32c, 0014b51f]]

bool FUN_0014b32c(long *param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  char local_78 [8];
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
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
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_78 = s_vbox86p_0010ed58;
  pbVar5 = (byte *)(**(code **)(*param_1 + 0x548))(param_1,param_2,0);
  if (pbVar5 == (byte *)0x0) {
    bVar4 = false;
  }
  else {
    uVar7 = (uint)*pbVar5;
    if (*pbVar5 == 0) {
LAB_0014b3d4:
      bVar4 = false;
    }
    else {
      pbVar6 = (byte *)local_78;
      do {
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar6;
        if (bVar2 == 0) goto LAB_0014b3d4;
        if (0xffffffe5 < uVar7 - 0x5b) {
          uVar7 = uVar7 | 0x20;
        }
        uVar1 = (uint)bVar2;
        if (0xffffffe5 < bVar2 - 0x5b) {
          uVar1 = bVar2 | 0x20;
        }
        if (uVar7 != uVar1) goto LAB_0014b3d4;
        uVar7 = (uint)*pbVar5;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0);
      bVar4 = *pbVar6 == 0;
    }
    (**(code **)(*param_1 + 0x550))(param_1,param_2);
  }
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_70 = 0;
  local_6f = 0;
  local_6e = 0;
  local_6d = 0;
  local_6c = 0;
  local_6b = 0;
  local_6a = 0;
  local_69 = 0;
  local_68 = 0;
  local_67 = 0;
  local_66 = 0;
  local_65 = 0;
  local_64 = 0;
  local_63 = 0;
  local_62 = 0;
  local_61 = 0;
  local_60 = 0;
  local_5f = 0;
  local_5e = 0;
  local_5d = 0;
  local_5c = 0;
  local_5b = 0;
  local_5a = 0;
  local_59 = 0;
  local_58 = 0;
  local_57 = 0;
  local_56 = 0;
  local_55 = 0;
  local_54 = 0;
  local_53 = 0;
  local_52 = 0;
  local_51 = 0;
  local_50 = 0;
  local_4f = 0;
  local_4e = 0;
  local_4d = 0;
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
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


