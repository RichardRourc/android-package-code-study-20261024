// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00165a64; body: [[00165a64, 00165d1f]]

ulong FUN_00165a64(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  char *__s2;
  long lVar7;
  long *local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined1 local_59;
  undefined7 uStack_58;
  undefined8 uStack_51;
  undefined1 local_49;
  undefined8 local_48;
  
  __s2 = *(char **)(param_2 + 8);
  if (__s2 == PTR_typeinfo_name_00174a70) {
    *param_3 = 0;
    return 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x18) == 0) {
    lVar3 = __dynamic_cast(param_2,PTR_typeinfo_00174a58,PTR_typeinfo_00174a68,0);
    if (lVar3 == 0) goto LAB_00165b20;
    if ((*(byte *)(lVar3 + 0x10) & 0x18) == 0) {
      if (*(char **)(param_1 + 8) != __s2) goto LAB_00165b20;
      goto LAB_00165ac4;
    }
  }
  if ((param_1 == param_2) || (iVar2 = strcmp(*(char **)(param_1 + 8),__s2), iVar2 == 0)) {
LAB_00165ac4:
    if ((long *)*param_3 == (long *)0x0) {
      return 1;
    }
    *param_3 = *(long *)*param_3;
    return 1;
  }
LAB_00165b20:
  lVar3 = __dynamic_cast(param_2,PTR_typeinfo_00174a58,PTR_typeinfo_00174a78,0);
  if (lVar3 == 0) {
    return 0;
  }
  if ((long *)*param_3 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)*param_3;
    *param_3 = lVar6;
  }
  if (((*(uint *)(lVar3 + 0x10) & (uVar1 ^ 0xffffffff) & 7) == 0) &&
     ((uVar1 & (*(uint *)(lVar3 + 0x10) ^ 0xffffffff) & 0x60) == 0)) {
    lVar7 = *(long *)(param_1 + 0x18);
    lVar3 = *(long *)(lVar3 + 0x18);
    if (*(undefined **)(lVar7 + 8) == *(undefined **)(lVar3 + 8)) {
      return 1;
    }
    if (*(undefined **)(lVar7 + 8) == PTR_typeinfo_name_00174a80) {
      lVar3 = __dynamic_cast(lVar3,PTR_typeinfo_00174a58,PTR_typeinfo_00174a88,0);
      return (ulong)(lVar3 == 0);
    }
    lVar4 = __dynamic_cast(lVar7,PTR_typeinfo_00174a58,PTR_typeinfo_00174a78,0);
    if (lVar4 == 0) {
      lVar4 = __dynamic_cast(lVar7,PTR_typeinfo_00174a58,PTR_typeinfo_00174a90,0);
      if (lVar4 == 0) {
        local_88 = __dynamic_cast(lVar7,PTR_typeinfo_00174a58,PTR_typeinfo_00174a60,0);
        if (local_88 == 0) {
          return 0;
        }
        local_98 = (long *)__dynamic_cast(lVar3,PTR_typeinfo_00174a58,PTR_typeinfo_00174a60,0);
        if (local_98 != (long *)0x0) {
          local_49 = lVar6 != 0;
          local_48 = 0;
          uStack_90 = 0;
          uStack_58 = 0;
          uStack_70 = 0;
          local_78 = 0;
          uStack_60 = 0;
          local_59 = 0;
          local_68 = 0;
          uStack_51 = 0x100;
          uStack_80 = 0xffffffffffffffff;
          (**(code **)(*local_98 + 0x38))(local_98,&local_98,lVar6,1);
          if ((int)local_68 == 1) {
            if (lVar6 == 0) {
              local_78 = 0;
            }
            *param_3 = local_78;
            return 1;
          }
          return 0;
        }
        return 0;
      }
      if ((uVar1 & 1) != 0) {
        uVar5 = FUN_00165e14(lVar4,lVar3);
        return uVar5;
      }
    }
    else if ((uVar1 & 1) != 0) {
      uVar5 = FUN_00165d20(lVar4,lVar3);
      return uVar5;
    }
  }
  return 0;
}


