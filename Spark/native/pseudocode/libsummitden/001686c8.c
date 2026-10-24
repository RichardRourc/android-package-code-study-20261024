// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001686c8; body: [[001686c8, 00168927]]

void FUN_001686c8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long unaff_x20;
  long unaff_x21;
  
  uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a60)])();
  iVar1 = -0x4558df62;
  if (1 < uVar3) {
    iVar1 = -0x2e08e7d7;
  }
  iVar2 = -0x3c06c86b;
  do {
    while( true ) {
      while (iVar7 = iVar2, iVar2 = iVar7, -0x200fe753 < iVar7) {
        if (iVar7 < -0xfd8a1f8) {
          if (iVar7 == -0x200fe752) {
            uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a61)])
                              (param_1,unaff_x20);
            uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a61)])
                              (param_1,unaff_x21);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bb7)])(uVar5,uVar6);
            iVar2 = 0x491e897b;
          }
          else if (iVar7 == -0xff00bdb) {
            unaff_x20 = unaff_x20 + -1;
            iVar2 = -0x573485d8;
          }
        }
        else if (iVar7 == 0x11f37a66) {
          unaff_x21 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aae)])
                                (unaff_x20 + 1);
          iVar2 = 0x491e897b;
          if (unaff_x20 != unaff_x21) {
            iVar2 = -0x200fe752;
          }
        }
        else if (iVar7 == 0x491e897b) {
          iVar2 = -0xff00bdb;
        }
        else if (iVar7 == -0xfd8a1f8) {
          return;
        }
      }
      if (-0x4558df63 < iVar7) break;
      if (iVar7 == -0x573485d8) {
        iVar2 = -0x47351047;
        if (unaff_x20 != 0) {
          iVar2 = 0x11f37a66;
        }
      }
      else if (iVar7 == -0x47351047) {
LAB_00168774:
        iVar2 = -0xfd8a1f8;
      }
    }
    if (iVar7 == -0x4558df62) goto LAB_00168774;
    iVar2 = iVar1;
    if ((iVar7 != -0x3c06c86b) && (iVar2 = iVar7, iVar7 == -0x2e08e7d7)) {
      lVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a60)])(param_1);
      unaff_x20 = lVar4 + -1;
      iVar2 = -0x573485d8;
    }
  } while( true );
}


