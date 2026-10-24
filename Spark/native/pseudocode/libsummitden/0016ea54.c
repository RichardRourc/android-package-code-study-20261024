// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016ea54; body: [[0016ea54, 0016efcb]]

void FUN_0016ea54(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  undefined1 auStack_90 [24];
  long local_78;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar11 = (param_4 - param_1 >> 3) * -0x5555555555555555;
  lVar9 = (param_3 + -2) / 2;
  iVar3 = 0x2bd9db7b;
  if (1 < param_3) {
    iVar3 = -0x1f32985e;
  }
  iVar10 = -0x13015f12;
  local_70 = param_4;
LAB_0016eb50:
  do {
    while (iVar7 = iVar10, iVar10 = iVar7, iVar7 < -0x13015f12) {
      if (iVar7 < -0x2554be95) {
        if (iVar7 < -0x4e01d552) {
          if (iVar7 == -0x7ed33d10) {
            lVar1 = uVar11 * 2 + 2;
            lVar2 = lVar1 - param_3;
            iVar10 = -0x38cb1be;
            iVar7 = -0x4e01d552;
LAB_0016ee90:
            uVar11 = uVar11 << 1 | 1;
            local_78 = param_1 + uVar11 * 0x18;
            if (lVar2 < 0 == SBORROW8(lVar1,param_3)) {
              iVar10 = iVar7;
            }
          }
          else if (iVar7 == -0x65f9be43) {
            uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_70);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aad)])(auStack_90,uVar5);
            iVar10 = -0x4094dd6a;
          }
        }
        else if (iVar7 == -0x4e01d552) {
          uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                            (param_2,local_78,local_70);
          iVar10 = -0x439c331;
          if ((uVar6 & 1) == 0) {
            iVar10 = -0x65f9be43;
          }
        }
        else if (iVar7 == -0x4094dd6a) {
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_78);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(local_70,uVar5);
          local_70 = local_78;
          iVar10 = 0x7244c7b8;
          if ((long)uVar11 <= lVar9) {
            iVar10 = 0x3d382920;
          }
        }
      }
      else if (iVar7 < -0x1f32985e) {
        if (iVar7 == -0x2554be95) {
          iVar10 = 0x7460598b;
        }
        else if (iVar7 == -0x250a1f48) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(local_70,auStack_90);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_90);
          iVar10 = -0x2554be95;
        }
      }
      else if (iVar7 == -0x1f32985e) {
        iVar10 = 0x2bd9db7b;
        if ((long)uVar11 <= lVar9) {
          iVar10 = -0x7ed33d10;
        }
      }
      else if (iVar7 == -0x1f01f419) {
        uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                          (param_2,local_78,local_78 + 0x18);
        iVar10 = -0x190cd067;
        if ((uVar6 & 1) == 0) {
          iVar10 = 0x3c389398;
        }
      }
      else if (iVar7 == -0x190cd067) {
        uVar11 = uVar11 + 1;
        local_78 = local_78 + 0x18;
        iVar10 = 0x3c389398;
      }
    }
    if (0x3c389397 < iVar7) {
      if (iVar7 < 0x4eef9296) {
        if (iVar7 == 0x3c389398) {
          iVar10 = 0x13ce485a;
        }
        else if (iVar7 == 0x3d382920) {
          lVar1 = uVar11 * 2 + 2;
          lVar2 = lVar1 - param_3;
          iVar10 = -0x1f01f419;
          iVar7 = 0x3c389398;
          goto LAB_0016ee90;
        }
      }
      else {
        if (iVar7 < 0x7244c7b8) {
          if (iVar7 == 0x4eef9296) {
            uVar11 = uVar11 + 1;
            local_78 = local_78 + 0x18;
            iVar10 = -0x4e01d552;
            goto LAB_0016eb50;
          }
          iVar8 = 0x6d31496e;
        }
        else {
          iVar10 = -0x250a1f48;
          if (iVar7 == 0x7244c7b8) goto LAB_0016eb50;
          iVar8 = 0x7460598b;
        }
        iVar10 = iVar7;
        if (iVar7 == iVar8) {
          if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      goto LAB_0016eb50;
    }
    if (iVar7 < -0x38cb1be) {
      iVar10 = iVar3;
      if ((iVar7 != -0x13015f12) && (iVar10 = iVar7, iVar7 == -0x439c331)) {
        iVar10 = -0x2554be95;
      }
    }
    else if (iVar7 == -0x38cb1be) {
      uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                        (param_2,local_78,local_78 + 0x18);
      iVar10 = 0x4eef9296;
      if ((uVar6 & 1) == 0) {
        iVar10 = -0x4e01d552;
      }
    }
    else if (iVar7 == 0x13ce485a) {
      uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                        (param_2,local_78,auStack_90);
      iVar10 = -0x250a1f48;
      if ((uVar6 & 1) == 0) {
        iVar10 = -0x4094dd6a;
      }
    }
    else if (iVar7 == 0x2bd9db7b) {
      iVar10 = 0x7460598b;
    }
  } while( true );
}


