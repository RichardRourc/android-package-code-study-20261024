// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a8ad0; body: [[001a8ad0, 001a90c3]]

void FUN_001a8ad0(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long extraout_x11;
  long lVar12;
  int unaff_w22;
  long lVar13;
  long local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_88 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4e7)])();
  iVar3 = -0x1a536efc;
  if (param_3 != param_4) {
    iVar3 = -0x1d821e1b;
  }
  lVar2 = 0xe5ac9104;
  lVar1 = extraout_x11;
  iVar11 = -0x620bea50;
  lStack_80 = local_88;
LAB_001a8b98:
  do {
    while (iVar9 = iVar11, lVar13 = param_1, lVar12 = lVar1, lVar10 = lVar2, lVar2 = lVar10,
          lVar1 = lVar12, param_1 = lVar13, iVar11 = iVar9, -0x1d821e1c < iVar9) {
      if (iVar9 < 0x1e52b5a3) {
        if (iVar9 < -0xaa46fda) {
          iVar11 = -0x3576f1cc;
          if (iVar9 != -0x1d821e1b) {
            if (iVar9 == -0x1a536efc) {
              plVar8 = &local_88;
LAB_001a8f74:
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4e4)])
                        (&local_78,plVar8,&local_88);
              unaff_w22 = 1;
              iVar11 = -0x47377e0d;
            }
            else {
              iVar11 = iVar9;
              if (iVar9 == -0xe98b95f) {
                iVar11 = 0x4bfd732e;
              }
            }
          }
        }
        else if (iVar9 == -0xaa46fda) {
          local_88 = lVar10 + 1;
          lVar2 = local_88;
          param_1 = lVar13 + 1;
          iVar11 = -0x317b77be;
          lStack_80 = lVar13;
        }
        else if (iVar9 == 0x131f2ee8) {
          uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4e5)])(param_6,lVar13);
          uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4e5)])(param_7,param_3);
          uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4da)])
                            (param_5,uVar5,uVar6);
          iVar9 = -0x4ddaa4a0;
          iVar11 = 0x1abbea34;
LAB_001a901c:
          lVar2 = lVar10;
          lVar1 = lVar12;
          if ((uVar7 & 1) == 0) {
            iVar11 = iVar9;
          }
        }
        else if (iVar9 == 0x1abbea34) {
          iVar11 = -0x7abaf71d;
        }
      }
      else if (iVar9 < 0x4bfd732e) {
        iVar11 = -0xe98b95f;
        if (iVar9 != 0x1e52b5a3) {
          if (iVar9 == 0x3c5e6841) {
            iVar11 = -0x3576f1cc;
            if (unaff_w22 != 0) goto LAB_001a9088;
          }
          else {
            iVar11 = iVar9;
            if (iVar9 == 0x3e30cfea) {
              iVar11 = -0x3dd0bb7a;
            }
          }
        }
      }
      else if (iVar9 == 0x4bfd732e) {
        lVar1 = lVar12 + 1;
        iVar11 = -0xaa46fda;
        if (lVar1 != param_4) {
          iVar11 = 0x693fc5e9;
        }
      }
      else if (iVar9 == 0x693fc5e9) {
        lVar2 = lVar10 + 1;
        iVar11 = -0x36b05521;
        if (lVar2 != param_2) {
          iVar11 = -0x784ce370;
        }
      }
      else if (iVar9 == 0x749ba1e1) {
        iVar11 = -0x204d04e5;
        if (lVar13 != param_2) {
          iVar11 = 0x131f2ee8;
        }
      }
    }
    if (-0x3dd0bb7b < iVar9) {
      if (iVar9 < -0x3576f1cc) {
        if (iVar9 == -0x3dd0bb7a) {
          iVar11 = 0x749ba1e1;
        }
        else if (iVar9 == -0x3c8ce2cc) {
          param_1 = lVar13 + 1;
          iVar11 = -0x317b77be;
        }
        else if (iVar9 == -0x36b05521) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4e4)])
                    (&local_78,&lStack_80,&local_88);
          unaff_w22 = 1;
          iVar11 = 0x3c5e6841;
        }
      }
      else if (iVar9 == -0x3576f1cc) {
        iVar11 = 0x3e30cfea;
      }
      else if (iVar9 == -0x317b77be) {
        unaff_w22 = 0;
        iVar11 = 0x3c5e6841;
      }
      else if (iVar9 == -0x204d04e5) {
        plVar8 = &lStack_80;
        goto LAB_001a8f74;
      }
      goto LAB_001a8b98;
    }
    if (iVar9 < -0x620bea50) {
      lVar2 = lVar13;
      lVar1 = param_3;
      iVar11 = -0xe98b95f;
      if (((iVar9 != -0x7abaf71d) &&
          (lVar2 = lVar10, lVar1 = lVar12, iVar11 = -0x3576f1cc, iVar9 != -0x78a6c2a9)) &&
         (iVar11 = iVar9, iVar9 == -0x784ce370)) {
        uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4e5)])(param_6,lVar10);
        uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4e5)])(param_7,lVar12);
        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4da)])
                          (param_5,uVar5,uVar6);
        iVar9 = -0x3c8ce2cc;
        iVar11 = 0x1e52b5a3;
        goto LAB_001a901c;
      }
    }
    else {
      iVar11 = iVar3;
      if (iVar9 != -0x620bea50) {
        if (iVar9 == -0x4ddaa4a0) {
          param_1 = lVar13 + 1;
          iVar11 = -0x3dd0bb7a;
        }
        else {
          iVar11 = iVar9;
          if (iVar9 == -0x47377e0d) {
LAB_001a9088:
            if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail(local_78,uStack_70);
            }
            return;
          }
        }
      }
    }
  } while( true );
}


