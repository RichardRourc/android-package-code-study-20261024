// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001654c0; body: [[001654c0, 001656cb]]

long __dynamic_cast(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *local_98;
  long *plStack_90;
  long *local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  int iStack_60;
  int iStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  lVar3 = *(long *)(*param_1 + -0x10);
  plVar1 = *(long **)(*param_1 + -8);
  lVar4 = (long)param_1 + lVar3;
  lStack_80 = param_4;
  if (plVar1[1] == param_3[1]) {
    if (param_4 < 0) {
      if (param_4 == -2) {
        return 0;
      }
      local_50 = 1;
      local_58 = 0;
      uStack_54 = 0;
      local_48 = 0;
      lStack_70 = 0;
      local_78 = 0;
      iStack_60 = 0;
      iStack_5c = 0;
      local_68 = 0;
      local_4c = 0x1000000;
      local_98 = param_3;
      plStack_90 = param_1;
      local_88 = (long *)param_2;
      (**(code **)(*param_3 + 0x28))(param_3,&local_98,lVar4,lVar4,1,0);
      bVar2 = (int)local_68 == 1;
    }
    else {
      bVar2 = param_4 + lVar3 == 0;
    }
    if (!bVar2) {
      lVar4 = 0;
    }
  }
  else {
    if ((-1 < param_4) && (lVar3 = (long)param_1 - param_4, lVar4 <= lVar3)) {
      local_58 = 0;
      uStack_54 = 0;
      iStack_60 = 0;
      iStack_5c = 0;
      local_68 = 0;
      lStack_70 = 0;
      local_78 = 0;
      local_50 = 1;
      local_4c = 0x1000000;
      local_48 = 0;
      local_98 = plVar1;
      plStack_90 = (long *)lVar3;
      local_88 = param_3;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_98,lVar4,lVar4,1,0);
      if ((int)local_68 != 0) {
        return lVar3;
      }
    }
    local_48 = 0;
    local_50 = 0;
    local_4c = 0x1000000;
    local_58 = 0;
    uStack_54 = 0;
    lStack_70 = 0;
    local_78 = 0;
    iStack_60 = 0;
    iStack_5c = 0;
    local_68 = 0;
    local_98 = param_3;
    plStack_90 = param_1;
    local_88 = (long *)param_2;
    lStack_80 = param_4;
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_98,lVar4,1,0);
    if (iStack_5c == 1) {
      if (((int)local_68 == 1) ||
         (((lVar4 = 0, local_58 == 0 && (local_68._4_4_ == 1)) && (iStack_60 == 1)))) {
        lVar4 = local_78;
      }
    }
    else {
      lVar4 = 0;
      if ((iStack_5c == 0) &&
         (lVar4 = lStack_70, (iStack_60 != 1 || local_68._4_4_ != 1) || local_58 != 1)) {
        lVar4 = 0;
      }
    }
  }
  return lVar4;
}


