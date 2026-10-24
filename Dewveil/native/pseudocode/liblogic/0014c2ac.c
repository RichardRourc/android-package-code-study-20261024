// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014c2ac; body: [[0014c2ac, 0014c47f]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014c2ac(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  byte local_c8 [96];
  undefined4 local_68;
  undefined2 local_64;
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
  long local_28;
  
  lVar1 = tpidr_el0;
  lVar2 = 0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_64 = 0x4543;
  iVar3 = 0x7d1a21d0;
  local_68 = (undefined4)ram0x0010ed38;
  local_62 = 0;
  do {
    iVar3 = iVar3 * 0x41c64e6d + 0x3039;
    local_c8[lVar2] =
         (char)lVar2 * '\x11' + 0x6eU ^ (&DAT_0010f018)[lVar2] ^ (byte)((uint)iVar3 >> 0x10);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x12);
  local_c8[0x12] = 0;
  (**(code **)(*param_1 + 0x480))(param_1,param_2,&local_68,local_c8);
  lVar2 = 0;
  local_68 = 0;
  local_64 = 0;
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


