// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00146914; body: [[00146914, 0014777f]]

void FUN_00146914(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  undefined *puVar10;
  long unaff_x24;
  long local_f0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b3a)])();
  iVar1 = 0xa2ceca5;
  if (param_2 != 0) {
    iVar1 = -0x3739481a;
  }
  iVar2 = 0xa2ceca5;
  if (param_3 != 0) {
    iVar2 = 0x509429cb;
  }
  iVar4 = -0xa33a0b5;
LAB_00146a30:
  do {
    while (iVar9 = iVar4, iVar4 = iVar9, iVar9 < -0x38bcb44) {
      if (iVar9 < -0x313c7d0e) {
        if (iVar9 < -0x5c46fcfd) {
          if (iVar9 < -0x65f4139d) {
            if (iVar9 == -0x76f668fa) {
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b3a)])();
              unaff_x24 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b03)])
                                    (param_2,param_3,auStack_b0);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b3a)])();
              iVar4 = -0x2300ba13;
              if (unaff_x24 != 0) {
                iVar4 = 0x5fb900d2;
              }
            }
            else if (iVar9 == -0x69f471fb) {
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                        (&DAT_001fbb60,6,&DAT_002041ac,&DAT_001fbb60);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b22)])
                        (param_1,&DAT_001fbb60);
              iVar4 = -0x38bcb44;
            }
          }
          else {
            iVar4 = 0x766d1cec;
            if ((iVar9 != -0x65f4139d) && (iVar4 = iVar9, iVar9 == -0x654d37f2)) {
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b3a)])();
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b23)])(auStack_c8);
              uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b05)])
                                (param_2,local_f0,param_3,auStack_c8,param_4);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b26)])(auStack_c8);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b3a)])();
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_2,local_f0);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_2,unaff_x24);
              iVar4 = -0x2ace2756;
              if ((uVar6 & 1) == 0) {
                iVar4 = 0x53e7efb6;
              }
            }
          }
        }
        else if (iVar9 < -0x47b87723) {
          iVar4 = -0x65f4139d;
          if ((iVar9 != -0x5c46fcfd) && (iVar4 = iVar9, iVar9 == -0x4e95185f)) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b26)])(auStack_80);
            iVar4 = 0x206a65bf;
          }
        }
        else {
          iVar4 = -0x140c4265;
          if ((iVar9 != -0x47b87723) && (iVar4 = iVar9, iVar9 == -0x3739481a)) {
            iVar4 = iVar2;
          }
        }
      }
      else if (iVar9 < -0x2300ba13) {
        if (iVar9 < -0x243f903d) {
          if (iVar9 == -0x313c7d0e) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b3a)])();
            uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b02)])(auStack_b0);
            iVar4 = -0x76f668fa;
            if ((uVar6 & 1) == 0) {
              iVar4 = -0x1a998c61;
            }
          }
          else if (iVar9 == -0x2ace2756) {
            puVar10 = &DAT_001fbca1;
            uVar7 = 3;
            puVar5 = &DAT_001fbca1;
            puVar8 = &DAT_002041f8;
LAB_00147514:
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (puVar5,uVar7,puVar8,puVar10);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b22)])(param_1,puVar10);
            iVar4 = -0x5c46fcfd;
          }
        }
        else if (iVar9 == -0x243f903d) {
          uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b20)])(param_5);
          iVar4 = 0xa2ceca5;
          if ((uVar6 & 1) == 0) {
            iVar4 = 0x2f98efc5;
          }
        }
        else if (iVar9 == -0x243a8517) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_2,unaff_x24);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbb60,6,&DAT_002041ac,&DAT_001fbb60);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b22)])(param_1,&DAT_001fbb60);
          iVar4 = -0x65f4139d;
        }
      }
      else if (iVar9 < -0x15ce6565) {
        if (iVar9 == -0x2300ba13) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbb60,6,&DAT_002041ac,&DAT_001fbb60);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b22)])(param_1,&DAT_001fbb60);
          iVar4 = 0x766d1cec;
        }
        else if (iVar9 == -0x1a998c61) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbb60,6,&DAT_002041ac,&DAT_001fbb60);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b22)])(param_1,&DAT_001fbb60);
          iVar4 = -0x47b87723;
        }
      }
      else if (iVar9 == -0x15ce6565) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                  (&DAT_001fbb60,6,&DAT_002041ac,&DAT_001fbb60);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b22)])(param_1,&DAT_001fbb60);
        iVar4 = 0x178b89c4;
      }
      else if (iVar9 == -0x140c4265) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b06)])(auStack_b0);
        iVar4 = -0x38bcb44;
      }
      else if (iVar9 == -0xa33a0b5) {
        iVar4 = iVar1;
      }
    }
    if (0x3e1d5bb4 < iVar9) {
      if (iVar9 < 0x5fb900d2) {
        if (iVar9 < 0x53e7efb6) {
          if (iVar9 == 0x3e1d5bb5) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b3c)])(auStack_98);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b3a)])();
            uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b3d)])
                              (param_2,param_3,param_6,auStack_98);
            iVar4 = 0x721bcba2;
            if ((uVar6 & 1) == 0) {
              iVar4 = -0x15ce6565;
            }
          }
          else if (iVar9 == 0x509429cb) {
            uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b20)])(param_4);
            iVar4 = 0xa2ceca5;
            if ((uVar6 & 1) == 0) {
              iVar4 = -0x243f903d;
            }
          }
        }
        else {
          if (iVar9 == 0x53e7efb6) {
            puVar10 = &DAT_001fbb60;
            uVar7 = 6;
            puVar5 = &DAT_001fbb60;
            puVar8 = &DAT_002041ac;
            goto LAB_00147514;
          }
          if (iVar9 == 0x5b8640f8) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbb60,6,&DAT_002041ac,&DAT_001fbb60);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b22)])(param_1,&DAT_001fbb60);
            iVar4 = -0x4e95185f;
          }
        }
      }
      else if (iVar9 < 0x766d1cec) {
        if (iVar9 == 0x5fb900d2) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b3a)])();
          local_f0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b04)])
                               (param_2,unaff_x24,param_7);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b3a)])();
          iVar4 = -0x243a8517;
          if (local_f0 != 0) {
            iVar4 = -0x654d37f2;
          }
        }
        else if (iVar9 == 0x721bcba2) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b3a)])();
          uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b3e)])();
          iVar4 = -0x69f471fb;
          if ((uVar6 & 1) == 0) {
            iVar4 = 0x2e15d1ff;
          }
        }
      }
      else {
        iVar4 = -0x47b87723;
        if ((iVar9 != 0x766d1cec) && (iVar4 = iVar9, iVar9 == 0x76b2c6d7)) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbb60,6,&DAT_002041ac,&DAT_001fbb60);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b22)])(param_1,&DAT_001fbb60);
          iVar4 = -0x140c4265;
        }
      }
      goto LAB_00146a30;
    }
    if (iVar9 < 0x206a65bf) {
      if (iVar9 < 0x178b89c4) {
        iVar4 = 0x178b89c4;
        if ((iVar9 != -0x38bcb44) && (iVar4 = iVar9, iVar9 == 0xa2ceca5)) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbb60,6,&DAT_002041ac,&DAT_001fbb60);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b22)])(param_1,&DAT_001fbb60);
          iVar4 = 0x206a65bf;
        }
      }
      else if (iVar9 == 0x178b89c4) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b07)])(auStack_98);
        iVar4 = -0x4e95185f;
      }
      else if (iVar9 == 0x1a06a8f6) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b00)])(auStack_b0);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b3a)])();
        uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b01)])
                          (param_2,auStack_98,param_5,auStack_b0);
        iVar4 = -0x313c7d0e;
        if ((uVar6 & 1) == 0) {
          iVar4 = 0x76b2c6d7;
        }
      }
    }
    else if (iVar9 < 0x2f98efc5) {
      if (iVar9 == 0x2cde704f) {
        uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b20)])(auStack_80);
        iVar4 = 0x5b8640f8;
        if ((uVar6 & 1) == 0) {
          iVar4 = 0x3e1d5bb5;
        }
      }
      else if (iVar9 == 0x2e15d1ff) {
        uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b3f)])();
        iVar4 = -0x69f471fb;
        if ((uVar6 & 1) == 0) {
          iVar4 = 0x1a06a8f6;
        }
      }
      else if (iVar9 == 0x206a65bf) {
        if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    else if (iVar9 == 0x2f98efc5) {
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b3b)])(auStack_80,param_2,param_3);
      uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b20)])(param_6);
      iVar4 = 0x5b8640f8;
      if ((uVar6 & 1) == 0) {
        iVar4 = 0x3861c1cc;
      }
    }
    else if (iVar9 == 0x3861c1cc) {
      uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b20)])(param_7);
      iVar4 = 0x5b8640f8;
      if ((uVar6 & 1) == 0) {
        iVar4 = 0x2cde704f;
      }
    }
  } while( true );
}


