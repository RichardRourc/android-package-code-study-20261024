// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001666d4; body: [[001666d4, 00166d47]]

undefined8 FUN_001666d4(long param_1,long param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 unaff_x20;
  long unaff_x25;
  long unaff_x26;
  long local_98;
  undefined4 local_8c;
  undefined8 local_78;
  long local_70;
  
  iVar1 = 0x1f79c217;
  if (param_1 != 0) {
    iVar1 = 0x29cef0cd;
  }
  iVar2 = 0x1f79c217;
  if (param_2 != 0) {
    iVar2 = -0x414535f;
  }
  iVar3 = 0x5900f8a3;
  if (param_3 != (char *)0x0) {
    iVar3 = -0x4f9c8bfa;
  }
  iVar4 = -0x5884dca0;
LAB_00166794:
  do {
    while( true ) {
      while (iVar6 = iVar4, iVar4 = iVar6, iVar6 < 0x17737ece) {
        if (iVar6 < -0xab77ea8) {
          if (iVar6 < -0x5478bc13) {
            iVar4 = 0x89dfc27;
            if ((iVar6 != -0x6044a01f) && (iVar4 = iVar6, iVar6 == -0x5884dca0)) {
              iVar4 = iVar1;
            }
          }
          else {
            iVar4 = 0x6b8c1d30;
            if (iVar6 != -0x5478bc13) {
              if (iVar6 == -0x4f9c8bfa) {
                iVar4 = 0x5900f8a3;
                if (*param_3 != '\0') {
                  iVar4 = 0x5af9ecda;
                }
              }
              else {
                iVar4 = iVar6;
                if (iVar6 == -0x491ad063) {
                  local_8c = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bc5)])
                                       (param_1,unaff_x26,unaff_x25);
                  local_70 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad8)])
                                       (param_1,param_3);
                  iVar4 = 0x41ee1e68;
                  if (local_70 != 0) {
                    iVar4 = -0xab77ea8;
                  }
                }
              }
            }
          }
        }
        else if (iVar6 < -0x414535f) {
          if (iVar6 == -0xab77ea8) {
            local_78 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aec)])
                                 (param_1,param_2,local_98,local_70,local_8c);
            cVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(param_1);
            iVar4 = 0x56e4893c;
            if (cVar5 != '\0') {
              iVar4 = -0x71b976e;
            }
          }
          else if (iVar6 == -0x71b976e) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_1);
            local_78 = 0;
            iVar4 = 0x56e4893c;
          }
        }
        else {
          iVar4 = iVar3;
          if (iVar6 != -0x414535f) {
            if (iVar6 == -0x119100d) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd1ff,0x15,&DAT_00204300,&DAT_001fd1ff);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd214,0x39,&DAT_00204304,&DAT_001fd214);
              local_98 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                   (param_1,unaff_x26,&DAT_001fd1ff,&DAT_001fd214);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd24d,0xd,&DAT_00204308,&DAT_001fd24d);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd25a,2,&DAT_0020430c,&DAT_001fd25a);
              unaff_x25 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bc4)])
                                    (param_1,unaff_x26,&DAT_001fd24d,&DAT_001fd25a);
              iVar4 = 0x55015591;
              if (local_98 != 0) {
                iVar4 = 0x17737ece;
              }
            }
            else {
              iVar4 = iVar6;
              if (iVar6 == 0x89dfc27) {
                iVar4 = -0x5478bc13;
              }
            }
          }
        }
      }
      if (0x55015590 < iVar6) break;
      if (iVar6 < 0x1f79c217) {
        if (iVar6 == 0x17737ece) {
          iVar4 = 0x55015591;
          if (unaff_x25 != 0) {
            iVar4 = -0x491ad063;
          }
        }
        else if (iVar6 == 0x1d242667) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_1);
          unaff_x20 = 0;
          iVar4 = -0x5478bc13;
        }
      }
      else if (iVar6 == 0x1f79c217) {
LAB_00166788:
        unaff_x20 = 0;
        iVar4 = 0x6b8c1d30;
      }
      else {
        iVar4 = iVar2;
        if ((iVar6 != 0x29cef0cd) && (iVar4 = iVar6, iVar6 == 0x41ee1e68)) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_1);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_1,unaff_x26);
          unaff_x20 = 0;
          iVar4 = -0x6044a01f;
        }
      }
    }
    if (0x5900f8a2 < iVar6) {
      if (iVar6 == 0x5900f8a3) goto LAB_00166788;
      if (iVar6 == 0x5af9ecda) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                  (&DAT_001fcf6c,0x18,&DAT_002042d0,&DAT_001fcf6c);
        unaff_x26 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae8)])
                              (param_1,&DAT_001fcf6c);
        iVar4 = 0x1d242667;
        if (unaff_x26 != 0) {
          iVar4 = -0x119100d;
        }
      }
      else if (iVar6 == 0x6b8c1d30) {
        return unaff_x20;
      }
      goto LAB_00166794;
    }
    if (iVar6 == 0x55015591) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_1);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_1,unaff_x26);
      unaff_x20 = 0;
      iVar4 = 0x89dfc27;
    }
    else if (iVar6 == 0x56e4893c) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_1,local_70);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_1,unaff_x26);
      unaff_x20 = local_78;
      iVar4 = -0x6044a01f;
    }
  } while( true );
}


