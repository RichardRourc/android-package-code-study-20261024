// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0014e8bc; body: [[0014e8bc, 0014f423]]

uint FUN_0014e8bc(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  long unaff_x25;
  uint unaff_w28;
  long local_a0;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  iVar4 = -0x2cbf3790;
  iVar1 = iVar4;
  if (param_1 != 0) {
    iVar1 = -0x5e9185bd;
  }
  iVar2 = iVar4;
  if (param_4 != 0) {
    iVar2 = -0x3bda4c7;
  }
  if (param_2 != 0) {
    iVar4 = -0xe88642a;
  }
  iVar3 = -0xa78126a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while (iVar8 = iVar3, iVar3 = iVar8, -0xb810bae < iVar8) {
                if (iVar8 < 0x1bb0f691) {
                  if (iVar8 < 0x136bfb90) {
                    if (iVar8 < -0x3bda4c7) {
                      iVar3 = -0x22dd26ee;
                      if ((iVar8 != -0xb810bad) && (iVar3 = iVar8, iVar8 == -0xa78126a)) {
                        iVar3 = iVar1;
                      }
                    }
                    else if (iVar8 == -0x3bda4c7) {
                      local_68 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba3)])
                                           (param_1,param_2);
                      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                                (&DAT_001fbcea,0x21,&DAT_00204210,&DAT_001fbcea);
                      unaff_x25 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2c)])
                                            (param_1,&DAT_001fbcea);
                      iVar3 = -0x7a26f4f8;
                      if (local_68 != 0) {
                        iVar3 = -0x3fb2f8c0;
                      }
                    }
                    else if (iVar8 == 0x3f51ed5) {
                      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
                      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])
                                (param_1,local_68);
                      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])
                                (param_1,unaff_x25);
                      unaff_w28 = 0;
                      iVar3 = 0x3efa88aa;
                    }
                  }
                  else if (iVar8 < 0x191bf996) {
                    iVar3 = iVar2;
                    if ((iVar8 != 0x136bfb90) && (iVar3 = iVar8, iVar8 == 0x16a12360)) {
                      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])
                                (param_1,local_78);
                      iVar3 = -0x3a13c14d;
                    }
                  }
                  else if (iVar8 == 0x191bf996) {
                    iVar3 = 0x6aef6173;
                    if (local_80 != 0) {
                      iVar3 = -0x193cae39;
                    }
                    local_78 = local_88;
                  }
                  else if (iVar8 == 0x19fea6e3) {
                    unaff_w28 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b85)])
                                          (param_1,local_78,param_4);
                    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])
                              (param_1,local_78);
                    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])
                              (param_1,local_70);
                    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])
                              (param_1,local_68);
                    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])
                              (param_1,unaff_x25);
                    iVar3 = 0x1bb0f691;
                  }
                  else if (iVar8 == 0x1a807c44) {
                    uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b30)])
                                      (param_3);
                    local_80 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b31)])
                                         (param_1,uVar6);
                    iVar3 = -0x67f88abd;
                    if (local_80 != 0) {
                      iVar3 = 0x617a78d2;
                    }
                  }
                }
                else if (iVar8 < 0x594e6980) {
                  if (iVar8 < 0x3efa88aa) {
                    iVar3 = -0x7a6a8a76;
                    if ((iVar8 != 0x1bb0f691) && (iVar3 = iVar8, iVar8 == 0x23fb77bb)) {
                      unaff_w28 = 0;
                      iVar3 = -0xb810bad;
                    }
                  }
                  else {
                    iVar3 = -0xb810bad;
                    if ((iVar8 != 0x3efa88aa) && (iVar3 = iVar8, iVar8 == 0x42ef6006)) {
                      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])
                                (param_1,unaff_x25);
                      iVar3 = 0x23fb77bb;
                    }
                  }
                }
                else if (iVar8 < 0x6aef6173) {
                  if (iVar8 == 0x594e6980) {
                    iVar3 = 0x23fb77bb;
                    if (unaff_x25 != 0) {
                      iVar3 = 0x42ef6006;
                    }
                  }
                  else if (iVar8 == 0x617a78d2) {
                    local_88 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b34)])
                                         (param_1,local_70,local_90,local_80);
                    iVar3 = 0x191bf996;
                  }
                }
                else if (iVar8 == 0x6aef6173) {
                  iVar3 = -0x639230c6;
                  if (local_78 != 0) {
                    iVar3 = 0x6e72752b;
                  }
                }
                else if (iVar8 == 0x6e72752b) {
                  cVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
                  iVar3 = 0x19fea6e3;
                  if (cVar5 != '\0') {
                    iVar3 = -0x639230c6;
                  }
                }
                else if (iVar8 == 0x77f8b159) {
                  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_68)
                  ;
                  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])
                            (param_1,unaff_x25);
                  unaff_w28 = 0;
                  iVar3 = -0x7a6a8a76;
                }
              }
              if (-0x3a13c14e < iVar8) break;
              if (iVar8 < -0x5e9185bd) {
                if (iVar8 < -0x67f88abd) {
                  iVar3 = 0x3efa88aa;
                  if ((iVar8 != -0x7a6a8a76) && (iVar3 = iVar8, iVar8 == -0x7a26f4f8)) {
                    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
                    iVar3 = 0x594e6980;
                    if (local_68 != 0) {
                      iVar3 = -0xf8f4a60;
                    }
                  }
                }
                else if (iVar8 == -0x67f88abd) {
                  local_88 = 0;
                  iVar3 = 0x191bf996;
                }
                else if (iVar8 == -0x639230c6) {
                  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
                  iVar3 = -0x3a13c14d;
                  if (local_78 != 0) {
                    iVar3 = 0x16a12360;
                  }
                }
              }
              else if (iVar8 < -0x52b384a9) {
                iVar3 = iVar4;
                if ((iVar8 != -0x5e9185bd) && (iVar3 = iVar8, iVar8 == -0x5a13ef6a)) {
                  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
                  iVar3 = 0x77f8b159;
                  if (local_70 != 0) {
                    iVar3 = -0x163813ae;
                  }
                }
              }
              else if (iVar8 == -0x52b384a9) {
                cVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
                iVar3 = 0x1a807c44;
                if (cVar5 != '\0') {
                  iVar3 = -0x5a13ef6a;
                }
              }
              else if (iVar8 == -0x42c1482e) {
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                          (&DAT_001fbd0b,10,&DAT_00204214,&DAT_001fbd0b);
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                          (&DAT_001fbd15,0x25,&DAT_00204218,&DAT_001fbd15);
                local_a0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                                     (param_1,local_68,&DAT_001fbd0b,&DAT_001fbd15);
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                          (&DAT_001fbd3a,5,&DAT_0020421c,&DAT_001fbd3a);
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                          (&DAT_001fbd3f,0x2a,&DAT_00204220,&DAT_001fbd3f);
                local_90 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                                     (param_1,unaff_x25,&DAT_001fbd3a,&DAT_001fbd3f);
                iVar3 = 0x3f51ed5;
                if (local_a0 != 0) {
                  iVar3 = -0x27487f86;
                }
              }
              else if (iVar8 == -0x3fb2f8c0) {
                iVar3 = -0x7a26f4f8;
                if (unaff_x25 != 0) {
                  iVar3 = -0x42c1482e;
                }
              }
            }
            if (-0x22dd26ef < iVar8) break;
            if (iVar8 < -0x2abb0dfb) {
              if (iVar8 == -0x3a13c14d) {
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_70);
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_68);
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,unaff_x25);
                unaff_w28 = 0;
                iVar3 = 0x1bb0f691;
              }
              else if (iVar8 == -0x2cbf3790) {
                unaff_w28 = 0;
                iVar3 = -0x22dd26ee;
              }
            }
            else if (iVar8 == -0x2abb0dfb) {
              local_70 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b34)])
                                   (param_1,param_2,local_a0);
              iVar3 = -0x5a13ef6a;
              if (local_70 != 0) {
                iVar3 = -0x52b384a9;
              }
            }
            else if (iVar8 == -0x27487f86) {
              iVar3 = 0x3f51ed5;
              if (local_90 != 0) {
                iVar3 = -0x2abb0dfb;
              }
            }
          }
          if (iVar8 < -0xf8f4a60) break;
          if (iVar8 == -0xf8f4a60) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_68);
            iVar3 = 0x594e6980;
          }
          else if (iVar8 == -0xe88642a) {
            uVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b20)])(param_3);
            iVar3 = -0x2cbf3790;
            if ((uVar7 & 1) == 0) {
              iVar3 = 0x136bfb90;
            }
          }
        }
        if (iVar8 != -0x193cae39) break;
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_80);
        iVar3 = 0x6aef6173;
      }
      if (iVar8 != -0x163813ae) break;
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_70);
      iVar3 = 0x77f8b159;
    }
  } while (iVar8 != -0x22dd26ee);
  return unaff_w28 & 1;
}


