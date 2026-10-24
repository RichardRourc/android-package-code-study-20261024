// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015a8c0; body: [[0015a8c0, 0015b3ff]]

void FUN_0015a8c0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long unaff_x20;
  long unaff_x28;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  iVar3 = -0x32a5981a;
  iVar1 = iVar3;
  if (param_2 != 0) {
    iVar1 = 0x5f24d4db;
  }
  iVar2 = iVar3;
  if (param_3 != 0) {
    iVar2 = -0x579fd4ff;
  }
  if (param_1 != 0) {
    iVar3 = 0x7ee505b7;
  }
  iVar4 = -0x6e10cb35;
LAB_0015a974:
  do {
    while (iVar7 = iVar4, iVar4 = iVar7, 0x221a4867 < iVar7) {
      if (iVar7 < 0x4c05266e) {
        if (iVar7 < 0x3c3f2c8b) {
          if (iVar7 < 0x26782e3b) {
            if (iVar7 == 0x221a4868) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd397,5,&DAT_00204324,&DAT_001fd397);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd39c,0x2d,&DAT_00204328,&DAT_001fd39c);
              local_98 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                   (param_1,unaff_x20,&DAT_001fd397,&DAT_001fd39c);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd3c9,10,&DAT_0020432c,&DAT_001fd3c9);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd3d3,0x51,&DAT_00204330,&DAT_001fd3d3);
              local_80 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                   (param_1,unaff_x28,&DAT_001fd3c9,&DAT_001fd3d3);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd424,6,&DAT_00204334,&DAT_001fd424);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd42a,4,&DAT_00204338,&DAT_001fd42a);
              local_88 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                   (param_1,unaff_x28,&DAT_001fd424,&DAT_001fd42a);
              iVar4 = 0x4c05266e;
              if (local_98 != 0) {
                iVar4 = -0x315cd1a4;
              }
            }
            else if (iVar7 == 0x22dbb077) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_1,local_90);
              iVar4 = -0x13664e3a;
            }
          }
          else {
            iVar4 = 0x76be1ce;
            if ((iVar7 != 0x26782e3b) && (iVar4 = iVar7, iVar7 == 0x2c869f6b)) {
LAB_0015af84:
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_1);
              iVar4 = 0x20195107;
            }
          }
        }
        else if (iVar7 < 0x463b3eba) {
          iVar4 = 0x76be1ce;
          if ((iVar7 != 0x3c3f2c8b) && (iVar4 = iVar7, iVar7 == 0x4488f2db)) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_1,unaff_x20);
            iVar4 = -0x55cf0020;
          }
        }
        else if (iVar7 == 0x463b3eba) {
          local_68 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aec)])
                               (param_1,param_2,local_98);
          cVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(param_1);
          iVar4 = 0x4b210335;
          if (cVar5 != '\0') {
            iVar4 = 0x5c962a01;
          }
        }
        else if (iVar7 == 0x4b210335) {
          iVar4 = 0x5c962a01;
          if (local_68 != 0) {
            iVar4 = 0x506052a4;
          }
        }
      }
      else if (iVar7 < 0x5c962a01) {
        if (iVar7 < 0x506052a4) {
          if (iVar7 == 0x4c05266e) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_1);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_1,unaff_x20);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_1,unaff_x28);
            iVar4 = 0x3c3f2c8b;
          }
          else if (iVar7 == 0x4ed43413) {
            iVar4 = 0x2c869f6b;
            if (local_70 != 0) {
              iVar4 = 0x50dd1d31;
            }
          }
        }
        else if (iVar7 == 0x506052a4) {
          local_78 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad8)])
                               (param_1,param_3);
          uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad4)])(param_4);
          local_70 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad8)])(param_1,uVar6)
          ;
          iVar4 = 0x2c869f6b;
          if (local_78 != 0) {
            iVar4 = 0x4ed43413;
          }
        }
        else if (iVar7 == 0x50dd1d31) {
          local_90 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aec)])
                               (param_1,local_68,local_80,local_78,local_70);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_1);
          iVar4 = -0x13664e3a;
          if (local_90 != 0) {
            iVar4 = 0x22dbb077;
          }
        }
      }
      else if (iVar7 < 0x750a0b17) {
        if (iVar7 == 0x5c962a01) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_1);
LAB_0015b230:
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_1,unaff_x20);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_1,unaff_x28);
          iVar4 = -0x168d6b0b;
        }
        else if (iVar7 == 0x5f24d4db) {
          iVar4 = iVar2;
        }
      }
      else if (iVar7 == 0x750a0b17) {
        iVar4 = -0x37a573f6;
        if (local_70 != 0) {
          iVar4 = -0xc145a5a;
        }
      }
      else if (iVar7 == 0x7ee505b7) {
        iVar4 = iVar1;
      }
    }
    if (iVar7 < -0x315cd1a4) {
      if (-0x55cf0021 < iVar7) {
        if (iVar7 < -0x33a696e9) {
          if (iVar7 == -0x55cf0020) {
            iVar4 = 0x26782e3b;
            if (unaff_x28 != 0) {
              iVar4 = 0xd7dff85;
            }
          }
          else if (iVar7 == -0x37a573f6) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_1,local_68);
            goto LAB_0015b230;
          }
        }
        else if (iVar7 == -0x33a696e9) {
          iVar4 = 0x4c05266e;
          if (local_88 != 0) {
            iVar4 = 0x463b3eba;
          }
        }
        else if (iVar7 == -0x32a5981a) {
          iVar4 = -0x70e0623e;
        }
        goto LAB_0015a974;
      }
      if (-0x6e10cb36 < iVar7) {
        iVar4 = iVar3;
        if ((iVar7 != -0x6e10cb35) && (iVar4 = iVar7, iVar7 == -0x579fd4ff)) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                    (&DAT_001fd25c,0x22,&DAT_00204310,&DAT_001fd25c);
          unaff_x20 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae8)])
                                (param_1,&DAT_001fd25c);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                    (&DAT_001fd36e,0x29,&DAT_00204320,&DAT_001fd36e);
          unaff_x28 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae8)])
                                (param_1,&DAT_001fd36e);
          iVar4 = 0x30d2df4;
          if (unaff_x20 != 0) {
            iVar4 = 0x2213c5f3;
          }
        }
        goto LAB_0015a974;
      }
      if (iVar7 == -0x7e997fda) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_1,local_78);
        iVar4 = 0x750a0b17;
        goto LAB_0015a974;
      }
      iVar8 = -0x70e0623e;
    }
    else {
      if (iVar7 < 0x30d2df4) {
        if (iVar7 < -0x13664e3a) {
          if (iVar7 == -0x315cd1a4) {
            iVar4 = 0x4c05266e;
            if (local_80 != 0) {
              iVar4 = -0x33a696e9;
            }
          }
          else if (iVar7 == -0x168d6b0b) {
            iVar4 = 0x3c3f2c8b;
          }
        }
        else {
          if (iVar7 == -0x13664e3a) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad5)])
                      (param_1,local_68,local_88);
            goto LAB_0015af84;
          }
          if (iVar7 == -0xc145a5a) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_1,local_70);
            iVar4 = -0x37a573f6;
          }
        }
        goto LAB_0015a974;
      }
      if (0x20195106 < iVar7) {
        if (iVar7 == 0x20195107) {
          iVar4 = 0x750a0b17;
          if (local_78 != 0) {
            iVar4 = -0x7e997fda;
          }
        }
        else if (iVar7 == 0x2213c5f3) {
          iVar4 = 0x30d2df4;
          if (unaff_x28 != 0) {
            iVar4 = 0x221a4868;
          }
        }
        goto LAB_0015a974;
      }
      if (iVar7 == 0x30d2df4) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_1);
        iVar4 = -0x55cf0020;
        if (unaff_x20 != 0) {
          iVar4 = 0x4488f2db;
        }
        goto LAB_0015a974;
      }
      if (iVar7 == 0xd7dff85) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_1,unaff_x28);
        iVar4 = 0x26782e3b;
        goto LAB_0015a974;
      }
      iVar8 = 0x76be1ce;
    }
    if (iVar7 == iVar8) {
      return;
    }
  } while( true );
}


