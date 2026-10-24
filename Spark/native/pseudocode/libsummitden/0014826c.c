// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0014826c; body: [[0014826c, 00148da7]]

void FUN_0014826c(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  long lVar6;
  int iVar7;
  long unaff_x25;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar1 = 0x115705e4;
  if (param_3 != 0) {
    iVar1 = -0x47345300;
  }
  iVar2 = 0x115705e4;
  if (param_2 != 0) {
    iVar2 = 0xc2707c2;
  }
  iVar4 = 0x4291c392;
LAB_00148350:
  do {
    while( true ) {
      while (iVar7 = iVar4, iVar4 = iVar7, -0x6bad2bc < iVar7) {
        if (iVar7 < 0x3f1252d9) {
          if (iVar7 < 0x115705e4) {
            if (iVar7 < -0x10e3d8f) {
              if (iVar7 == -0x6bad2bb) {
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b26)])(param_1);
                iVar4 = -0x7cbf62f3;
              }
              else if (iVar7 == -0x57f3c9b) {
                cVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_2);
                iVar4 = -0x5c0b103f;
                if (cVar5 != '\0') {
                  iVar4 = 0x1843ce70;
                }
              }
            }
            else {
              iVar4 = iVar1;
              if ((iVar7 != 0xc2707c2) && (iVar4 = iVar7, iVar7 == -0x10e3d8f)) {
                if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
                return;
              }
            }
          }
          else if (iVar7 < 0x1413a42b) {
            if (iVar7 == 0x115705e4) {
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b23)])(param_1);
              iVar4 = -0x10e3d8f;
            }
            else if (iVar7 == 0x120c12d4) {
              iVar4 = -0x6bbb9392;
              if (local_b0 != 0) {
                iVar4 = 0x4e424125;
              }
            }
          }
          else if (iVar7 == 0x1413a42b) {
            local_a8 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b34)])
                                 (param_2,param_3,local_c0);
            iVar4 = 0x1843ce70;
            if (local_a8 != 0) {
              iVar4 = -0x57f3c9b;
            }
          }
          else if (iVar7 == 0x1843ce70) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_2);
            iVar4 = 0x4043bd21;
            if (local_a8 != 0) {
              iVar4 = 0x6e5a93f9;
            }
          }
        }
        else if (iVar7 < 0x4f4132ef) {
          if (iVar7 < 0x4291c392) {
            if (iVar7 == 0x3f1252d9) {
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_2,local_a8);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_2,local_a0);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_2,unaff_x25);
              iVar4 = -0x7cbf62f3;
            }
            else if (iVar7 == 0x4043bd21) {
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_2,local_a0);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_2,unaff_x25);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b23)])(param_1);
              iVar4 = -0x9c13730;
            }
          }
          else {
            iVar4 = iVar2;
            if ((iVar7 != 0x4291c392) && (iVar4 = iVar7, iVar7 == 0x4e424125)) {
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b36)])
                        (auStack_98,param_2,local_b0);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b37)])
                        (auStack_80,auStack_98);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b39)])(param_1,auStack_80);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b26)])(auStack_80);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b26)])(auStack_98);
              iVar4 = -0x6bbb9392;
            }
          }
        }
        else if (iVar7 < 0x6e5a93f9) {
          if (iVar7 == 0x4f4132ef) {
            cVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_2);
            iVar4 = -0x68d325a9;
            if (cVar5 != '\0') {
              iVar4 = -0x3d441fe7;
            }
          }
          else if (iVar7 == 0x6e303358) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_2);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_2,local_a0);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_2,unaff_x25);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b23)])(param_1);
            iVar4 = -0x6ed8984f;
          }
        }
        else if (iVar7 == 0x6e5a93f9) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_2,local_a8);
          iVar4 = 0x4043bd21;
        }
        else if (iVar7 == 0x76eb0957) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_2,unaff_x25);
          iVar4 = -0x6589b4e8;
        }
      }
      if (-0x5c0b1040 < iVar7) break;
      if (iVar7 < -0x6bbb9392) {
        if (iVar7 < -0x75d33e67) {
          iVar4 = -0x9c13730;
          if ((iVar7 != -0x7cbf62f3) && (iVar4 = iVar7, iVar7 == -0x783a6d55)) {
            iVar7 = 0x4f4132ef;
            lVar6 = unaff_x25;
LAB_00148c6c:
            iVar4 = -0x3d441fe7;
            if (lVar6 != 0) {
              iVar4 = iVar7;
            }
          }
        }
        else if (iVar7 == -0x75d33e67) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_2,local_b0);
          iVar4 = 0x3f1252d9;
        }
        else if (iVar7 == -0x6ed8984f) {
          iVar4 = -0x9c26c09;
        }
      }
      else if (iVar7 < -0x67089050) {
        if (iVar7 == -0x6bbb9392) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_2);
          iVar4 = 0x3f1252d9;
          if (local_b0 != 0) {
            iVar4 = -0x75d33e67;
          }
        }
        else if (iVar7 == -0x68d325a9) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbcc5,9,&DAT_00204204,&DAT_001fbcc5);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbcce,0x14,&DAT_00204208,&DAT_001fbcce);
          local_c0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                               (param_2,local_a0,&DAT_001fbcc5,&DAT_001fbcce);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbc7c,0x15,&DAT_002041ec,&DAT_001fbc7c);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbce2,8,&DAT_0020420c,&DAT_001fbce2);
          local_b8 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                               (param_2,unaff_x25,&DAT_001fbce2,&DAT_001fbc7c);
          iVar4 = 0x6e303358;
          if (local_c0 != 0) {
            iVar4 = -0x5b88548f;
          }
        }
      }
      else if (iVar7 == -0x67089050) {
        iVar4 = -0x6589b4e8;
        if (unaff_x25 != 0) {
          iVar4 = 0x76eb0957;
        }
      }
      else if (iVar7 == -0x6589b4e8) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b23)])(param_1);
        iVar4 = -0x9c26c09;
      }
    }
    if (-0x2b95c031 < iVar7) {
      if (iVar7 < -0x9c26c09) {
        if (iVar7 == -0x2b95c030) {
          cVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_2);
          iVar4 = 0x1413a42b;
          if (cVar5 != '\0') {
            iVar4 = 0x6e303358;
          }
        }
        else if (iVar7 == -0x208ddf44) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_2,local_a0);
          iVar4 = -0x67089050;
        }
      }
      else {
        iVar4 = -0x10e3d8f;
        if ((iVar7 != -0x9c26c09) && (iVar4 = iVar7, iVar7 == -0x9c13730)) {
          iVar4 = -0x6ed8984f;
        }
      }
      goto LAB_00148350;
    }
    if (iVar7 < -0x47345300) {
      if (iVar7 == -0x5c0b103f) {
        local_b0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b34)])
                             (param_2,local_a8,local_b8);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b23)])(param_1);
        cVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_2);
        iVar4 = 0x120c12d4;
        if (cVar5 != '\0') {
          iVar4 = -0x6bbb9392;
        }
      }
      else if (iVar7 == -0x5b88548f) {
        iVar4 = 0x6e303358;
        if (local_b8 != 0) {
          iVar4 = -0x2b95c030;
        }
      }
    }
    else {
      if (iVar7 == -0x47345300) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                  (&DAT_001fbca4,0x11,&DAT_002041fc,&DAT_001fbca4);
        lVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2c)])
                          (param_2,&DAT_001fbca4);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                  (&DAT_001fbcb5,0x10,&DAT_00204200,&DAT_001fbcb5);
        unaff_x25 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2c)])
                              (param_2,&DAT_001fbcb5);
        iVar7 = -0x783a6d55;
        local_a0 = lVar6;
        goto LAB_00148c6c;
      }
      if (iVar7 == -0x3d441fe7) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_2);
        iVar4 = -0x67089050;
        if (local_a0 != 0) {
          iVar4 = -0x208ddf44;
        }
      }
    }
  } while( true );
}


