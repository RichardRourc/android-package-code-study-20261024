// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00188524; body: [[00188524, 00188afb]]

void FUN_00188524(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  char *unaff_x24;
  long unaff_x25;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001fffce,0xe,&DAT_00204734,&DAT_001fffce);
  bVar4 = false;
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001fffdc,2,&DAT_00204738,&DAT_001fffdc);
  lVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b588)])
                    (&DAT_001fffce,&DAT_001fffdc);
  iVar1 = 0x4d47a8ff;
  if (lVar6 != 0) {
    iVar1 = -0x49197eda;
  }
  iVar3 = 0x33573fb9;
LAB_0018864c:
  do {
    while (iVar5 = iVar3, iVar3 = iVar5, 0x1d1ecb89 < iVar5) {
      if (iVar5 < 0x4d47a8ff) {
        if (iVar5 < 0x33573fb9) {
          if (iVar5 == 0x1d1ecb8a) {
            bVar4 = *unaff_x24 == '\t';
            iVar3 = -0x3ae40cf4;
          }
          else if (iVar5 == 0x208eced2) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001fffde,9,&DAT_0020473c,&DAT_001fffde);
            iVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b58e)])
                              (auStack_168,&DAT_001fffde,8);
            iVar3 = -0x3cff49a0;
            if (iVar5 != 0) {
              iVar3 = 0x389ad1f1;
            }
          }
        }
        else {
          iVar3 = iVar1;
          if (iVar5 != 0x33573fb9) {
            if (iVar5 == 0x35a82540) {
              pcVar8 = (char *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b582)])
                                         (param_1,unaff_x25 + -1);
              iVar3 = 0x1412c326;
              if (*pcVar8 != '\n') {
                iVar3 = -0x454c0adf;
              }
            }
            else {
              iVar3 = iVar5;
              if (iVar5 == 0x389ad1f1) {
                iVar3 = 0x7733d9a7;
              }
            }
          }
        }
      }
      else if (iVar5 < 0x54d3af2d) {
        if (iVar5 == 0x4d47a8ff) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])(param_1,&DAT_0011dd07);
          iVar3 = -0x7108e027;
        }
        else if (iVar5 == 0x4ee12f50) {
          iVar3 = -0x6b99cc66;
        }
      }
      else if (iVar5 == 0x54d3af2d) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(param_1);
        iVar3 = 0x1740e8e4;
      }
      else if (iVar5 == 0x711a650b) {
LAB_00188640:
        unaff_x24 = unaff_x24 + 1;
        iVar3 = -0x50ac1bc7;
      }
      else if (iVar5 == 0x7733d9a7) {
        lVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b589)])
                          (auStack_168,0x100,lVar6);
        iVar3 = -0x6b99cc66;
        if (lVar7 != 0) {
          iVar3 = 0x208eced2;
        }
      }
    }
    if (-0x3cff49a1 < iVar5) {
      if (iVar5 < 0x116a55b0) {
        if (iVar5 == -0x3cff49a0) {
          unaff_x24 = (char *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b58f)])
                                        (auStack_168,0x100,0x3a);
          iVar3 = 0x4ee12f50;
          if (unaff_x24 != (char *)0x0) {
            iVar3 = -0x4263c82d;
          }
        }
        else if (iVar5 == -0x3ae40cf4) {
          iVar3 = 0x711a650b;
          if (!bVar4) {
            iVar3 = 0x116a55b0;
          }
        }
      }
      else if (iVar5 == 0x116a55b0) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b58c)])(param_1,unaff_x24);
        unaff_x25 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b58d)])(param_1);
        iVar3 = -0x454c0adf;
        if (unaff_x25 != 0) {
          iVar3 = 0x35a82540;
        }
      }
      else if (iVar5 == 0x1412c326) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b583)])
                  (param_1,unaff_x25 + -1,0xffffffffffffffff);
        iVar3 = -0x454c0adf;
      }
      else if (iVar5 == 0x1740e8e4) {
        iVar3 = -0x7108e027;
      }
      goto LAB_0018864c;
    }
    if (iVar5 < -0x49197eda) {
      if (iVar5 == -0x6b99cc66) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b580)])(lVar6);
        iVar3 = 0x1740e8e4;
      }
      else if (iVar5 == -0x50ac1bc7) {
        bVar4 = true;
        iVar3 = -0x3ae40cf4;
        if (*unaff_x24 != ' ') {
          iVar3 = 0x1d1ecb8a;
        }
      }
      else if (iVar5 == -0x7108e027) {
        if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    else if (iVar5 == -0x49197eda) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b592)])(param_1);
      iVar3 = 0x7733d9a7;
    }
    else {
      iVar3 = 0x4ee12f50;
      if ((iVar5 != -0x454c0adf) && (iVar3 = iVar5, iVar5 == -0x4263c82d)) goto LAB_00188640;
    }
  } while( true );
}


