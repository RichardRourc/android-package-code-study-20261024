// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001f70d0; body: [[001f70d0, 001f7a0b]]

void FUN_001f70d0(int *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x20;
  ulong unaff_x23;
  void *unaff_x24;
  void *unaff_x25;
  ulong uVar10;
  int local_9c;
  long local_98;
  int local_90;
  int local_88;
  int local_84;
  int local_6c;
  long *local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long **)(lVar3 + 0x28);
  uVar2 = 0xe295faf8de22c1df;
  if (param_3 != 0) {
    uVar2 = 0xa9449e77a77951ac;
  }
  local_6c = 0;
  plVar4 = local_68;
  uVar7 = uVar2;
  uVar9 = 0x41a203875b031c3;
LAB_001f71c4:
  while (uVar6 = uVar9, plVar8 = plVar4, uVar10 = uVar7 & 0xffffffff, uVar9 = uVar6, plVar4 = plVar8
        , (long)uVar6 < 0xdc8188db88ec11b) {
    if ((long)uVar6 < -0x2b0b93cebcb1988a) {
      if ((long)uVar6 < -0x59acc9f9846a69a9) {
        if (uVar6 == 0x80f2364c5c89acff) {
          plVar4 = (long *)param_2[1];
          uVar7 = uVar10;
          uVar9 = 0x5e955a53164f3d9f;
        }
        else {
          uVar7 = unaff_x20 & 0xffffffff;
          uVar9 = 0x4dc5ede807dc3016;
          if ((uVar6 != 0x926de49d3b08a3c9) &&
             (uVar7 = uVar10, uVar9 = uVar6, uVar6 == 0xa422ccb0ad4229c5)) {
            uVar9 = 0x5c75d317cff2739f;
          }
        }
      }
      else if ((long)uVar6 < -0x51d504ef14920bb2) {
        if (uVar6 == 0xa65336067b959657) {
          unaff_x23 = (ulong)(local_90 - 4U);
          *(uint *)((long)unaff_x24 + 4) = local_90 - 4U;
          unaff_x25 = calloc(1,unaff_x23);
          uVar9 = 0xf2bc86cfcf60b6d9;
          if (unaff_x25 != (void *)0x0) {
            uVar9 = 0x205d1929c40a5522;
          }
          *(void **)((long)unaff_x24 + 8) = unaff_x25;
          uVar7 = uVar10;
        }
        else {
          uVar7 = uVar10;
          if (uVar6 == 0xa9449e77a77951ac) {
            local_88 = 0;
            uVar9 = 0xdc8188db88ec11b;
          }
        }
      }
      else {
        uVar7 = uVar10;
        uVar9 = 0x236d10b4e1dc5a1e;
        if ((uVar6 != 0xae2afb10eb6df44e) && (uVar9 = uVar6, uVar6 == 0xaf48e395b2299f45)) {
          uVar1 = local_9c + local_6c + 4;
          unaff_x20 = (ulong)uVar1;
          uVar9 = 0x5aba0b6a880053f8;
          if (param_3 <= uVar1) {
            uVar9 = 0x926de49d3b08a3c9;
          }
        }
      }
    }
    else if ((long)uVar6 < -0x13f6cef773005e97) {
      if (uVar6 == 0xd4f46c31434e6776) {
        uVar6 = FUN_001f4fdc(param_1,unaff_x24,4,1,param_4);
        uVar7 = uVar10;
        uVar9 = 0xa65336067b959657;
        if ((uVar6 & 1) == 0) {
          uVar9 = 0x67be2c6e2af44868;
        }
      }
      else {
        uVar7 = uVar10;
        uVar9 = 0x236d10b4e1dc5a1e;
        if ((uVar6 != 0xddfdee40477d270b) && (uVar9 = uVar6, uVar6 == 0xe295faf8de22c1df)) {
          uVar7 = 0;
          uVar9 = 0x4dc5ede807dc3016;
        }
      }
    }
    else if ((long)uVar6 < -0x439fbf751afe062) {
      if (uVar6 == 0xec0931088cffa169) {
        *param_1 = local_84;
        uVar7 = uVar10;
        uVar9 = 0x236d10b4e1dc5a1e;
      }
      else {
        uVar7 = uVar10;
        if (uVar6 == 0xf2bc86cfcf60b6d9) {
          local_84 = 1;
LAB_001f7578:
          uVar7 = uVar10;
          uVar9 = 0xec0931088cffa169;
        }
      }
    }
    else {
      uVar7 = uVar10;
      uVar9 = 0x236d10b4e1dc5a1e;
      if ((uVar6 != 0xfbc60408ae501f9e) && (uVar9 = uVar6, uVar6 == 0x41a203875b031c3)) {
        uVar9 = uVar2;
      }
    }
  }
  if ((long)uVar6 < 0x5c75d317cff2739f) {
    if ((long)uVar6 < 0x3132af798d39a4e3) {
      if ((long)uVar6 < 0x236d10b4e1dc5a1e) {
        if (uVar6 == 0xdc8188db88ec11b) {
          uVar7 = FUN_001f4fdc(param_1,&local_6c,4,1,param_4);
          uVar9 = 0x7ededfa0c0eeb47a;
          if ((uVar7 & 1) == 0) {
            uVar9 = 0xddfdee40477d270b;
          }
          local_9c = local_88;
          uVar7 = uVar10;
        }
        else {
          uVar7 = uVar10;
          if (uVar6 == 0x205d1929c40a5522) {
            FUN_001f4fdc(param_1,unaff_x25,unaff_x23,1,param_4);
LAB_001f73f4:
            uVar7 = uVar10;
            uVar9 = 0x79de56917a785edc;
          }
        }
      }
      else {
        plVar4 = param_2;
        uVar7 = uVar10;
        uVar9 = 0x5e955a53164f3d9f;
        if ((uVar6 != 0x242c94bb96617abb) &&
           (plVar4 = plVar8, uVar9 = uVar6, uVar6 == 0x236d10b4e1dc5a1e)) {
          if (*(long **)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    }
    else if (uVar6 == 0x3132af798d39a4e3) {
      *param_1 = 1;
      uVar7 = uVar10;
      uVar9 = 0x5c75d317cff2739f;
    }
    else {
      if (uVar6 == 0x4dc5ede807dc3016) {
        bVar5 = (uint)uVar7 == param_3;
        uVar6 = 0x635f31928f91aac5;
        uVar9 = 0xae2afb10eb6df44e;
        goto LAB_001f71b8;
      }
      uVar7 = uVar10;
      if (uVar6 == 0x5aba0b6a880053f8) {
        local_88 = (int)unaff_x20;
        uVar9 = 0xdc8188db88ec11b;
      }
    }
    goto LAB_001f71c4;
  }
  if ((long)uVar6 < 0x66d97625bdcfaa84) {
    if (uVar6 == 0x5c75d317cff2739f) {
      local_98 = (long)unaff_x24 + 0x10;
      uVar7 = uVar10;
      uVar9 = 0x242c94bb96617abb;
      if (*param_2 != 0) {
        uVar9 = 0x80f2364c5c89acff;
      }
      goto LAB_001f71c4;
    }
    if (uVar6 != 0x5e955a53164f3d9f) {
      uVar7 = uVar10;
      if (uVar6 == 0x635f31928f91aac5) {
        local_84 = 8;
        goto LAB_001f7578;
      }
      goto LAB_001f71c4;
    }
    *plVar8 = (long)unaff_x24;
    param_2[1] = local_98;
    uVar6 = 0xfbc60408ae501f9e;
    bVar5 = *param_1 == 0;
    uVar9 = 0xd4f46c31434e6776;
  }
  else {
    if ((long)uVar6 < 0x79de56917a785edc) {
      uVar7 = uVar10;
      uVar9 = 0x236d10b4e1dc5a1e;
      if ((uVar6 != 0x66d97625bdcfaa84) && (uVar9 = uVar6, uVar6 == 0x67be2c6e2af44868))
      goto LAB_001f73f4;
      goto LAB_001f71c4;
    }
    if (uVar6 != 0x79de56917a785edc) {
      uVar7 = uVar10;
      if (uVar6 == 0x7ededfa0c0eeb47a) {
        local_90 = local_6c;
        unaff_x24 = calloc(1,0x18);
        uVar9 = 0x3132af798d39a4e3;
        if (unaff_x24 != (void *)0x0) {
          uVar9 = 0xa422ccb0ad4229c5;
        }
      }
      goto LAB_001f71c4;
    }
    bVar5 = *param_1 == 0;
    uVar6 = 0x66d97625bdcfaa84;
    uVar9 = 0xaf48e395b2299f45;
  }
LAB_001f71b8:
  uVar7 = uVar10;
  if (!bVar5) {
    uVar9 = uVar6;
  }
  goto LAB_001f71c4;
}


