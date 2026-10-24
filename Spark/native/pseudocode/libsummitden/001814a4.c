// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001814a4; body: [[001814a4, 00181883]]

long FUN_001814a4(long param_1,long param_2,undefined1 *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long unaff_x19;
  undefined1 local_6c [4];
  long local_68;
  
  lVar2 = tpidr_el0;
  param_4 = param_4 - (long)param_3;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = -0x2674d143;
  if (param_4 != 0) {
    iVar1 = 0x2de1fe74;
  }
  lVar3 = param_2;
  iVar6 = 0x6f4645c2;
LAB_00181544:
  while (iVar4 = iVar6, lVar5 = lVar3, lVar3 = lVar5, iVar6 = iVar4, 0x8e51429 < iVar4) {
    if (iVar4 < 0x52644c7a) {
      if (iVar4 < 0x2de1fe74) {
        if (iVar4 == 0xe7ade3b) {
          iVar6 = 0x6effb7df;
        }
        else if (iVar4 == 0x8e5142a) {
          if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return lVar5;
        }
      }
      else {
        if (iVar4 == 0x2de1fe74) {
          unaff_x19 = param_2 - param_1;
          lVar5 = unaff_x19 - param_4;
          iVar4 = -0x1eab1505;
          iVar6 = 0x52644c7a;
          goto LAB_00181824;
        }
        if (iVar4 == 0x3a42e10c) {
          lVar3 = param_2;
          iVar6 = -0x2cae0c98;
        }
      }
    }
    else if (iVar4 < 0x6effb7df) {
      lVar3 = param_2;
      iVar6 = -0x6f17b4ac;
      if ((iVar4 != 0x52644c7a) && (lVar3 = lVar5, iVar6 = iVar4, iVar4 == 0x669e7e39)) {
        lVar3 = param_1;
        iVar6 = -0x2cae0c98;
      }
    }
    else if (iVar4 == 0x6effb7df) {
      unaff_x19 = param_2 - param_1;
      lVar5 = unaff_x19 - param_4;
      iVar4 = -0x60dbe8ed;
      iVar6 = -0x28dc0b4b;
LAB_00181824:
      if (lVar5 < 0 == SBORROW8(unaff_x19,param_4)) {
        iVar6 = iVar4;
      }
    }
    else if (iVar4 == 0x6f4645c2) {
      iVar6 = iVar1;
    }
  }
  if (iVar4 < -0x28dc0b4b) {
    if (iVar4 < -0x55a2a6c0) {
      iVar6 = 0x8e5142a;
      if ((iVar4 != -0x6f17b4ac) && (iVar6 = iVar4, iVar4 == -0x60dbe8ed)) {
        param_1 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8ad)])
                            (param_1,(unaff_x19 - param_4) + 1,local_6c);
        iVar6 = 0x3a42e10c;
        if (param_1 != 0) {
          iVar6 = -0x12fbf984;
        }
      }
      goto LAB_00181544;
    }
    if (iVar4 != -0x55a2a6c0) {
      if (iVar4 == -0x2cae0c98) {
        iVar6 = -0x6f17b4ac;
      }
      goto LAB_00181544;
    }
    param_1 = param_1 + 1;
  }
  else {
    if (iVar4 < -0x1eab1505) {
      lVar3 = param_2;
      iVar6 = -0x2cae0c98;
      if ((iVar4 != -0x28dc0b4b) && (lVar3 = lVar5, iVar6 = iVar4, iVar4 == -0x2674d143)) {
        lVar3 = param_1;
        iVar6 = 0x8e5142a;
      }
      goto LAB_00181544;
    }
    if (iVar4 != -0x1eab1505) {
      if (iVar4 == -0x12fbf984) {
        iVar4 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8b8)])
                          (param_1,param_3,param_4);
        iVar6 = 0x669e7e39;
        if (iVar4 != 0) {
          iVar6 = -0x55a2a6c0;
        }
      }
      goto LAB_00181544;
    }
    local_6c[0] = *param_3;
  }
  iVar6 = 0xe7ade3b;
  goto LAB_00181544;
}


