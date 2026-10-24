// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001506f0; body: [[001506f0, 00150a1f]]

void FUN_001506f0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  int unaff_w22;
  
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b00)])(param_1);
  iVar1 = -0x3aebec87;
  if (param_2 != 0) {
    iVar1 = -0x5162a839;
  }
  iVar2 = -0x3aebec87;
  if (param_3 != 0) {
    iVar2 = 0x21ac21d;
  }
  bVar3 = false;
  iVar4 = -0x7142bb9a;
  do {
    while( true ) {
      while (iVar7 = iVar4, iVar4 = iVar7, 0x21ac21c < iVar7) {
        if (iVar7 < 0x68c06d22) {
          if (iVar7 == 0x21ac21d) {
            unaff_w22 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8baa)])
                                  (param_2,param_3);
            iVar4 = 0xf5ba06;
            if (0 < unaff_w22) {
              iVar4 = -0x7b5ee6bc;
            }
          }
          else {
            if (iVar7 == 0x3298f7b5) goto LAB_001507b4;
            if (iVar7 == 0x29e9bf4f) {
              return;
            }
          }
        }
        else if (iVar7 == 0x68c06d22) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b06)])(param_1);
          iVar4 = 0x29e9bf4f;
        }
        else if (iVar7 == 0x6ab66940) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_2);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b52)])(param_1);
          iVar4 = 0x3298f7b5;
        }
        else if ((iVar7 == 0x75cb6f27) && (iVar4 = 0x29e9bf4f, !bVar3)) {
          iVar4 = 0x68c06d22;
        }
      }
      if (-0x3aebec88 < iVar7) break;
      if (iVar7 == -0x7b5ee6bc) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b8e)])(param_1,(long)unaff_w22);
        uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b8f)])(param_1);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b90)])
                  (param_2,param_3,0,unaff_w22,uVar6);
        cVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_2);
        iVar4 = 0x3298f7b5;
        if (cVar5 != '\0') {
          iVar4 = 0x6ab66940;
        }
      }
      else {
        iVar4 = iVar1;
        if ((iVar7 != -0x7142bb9a) && (iVar4 = iVar7, iVar7 == -0x5162a839)) {
          iVar4 = iVar2;
        }
      }
    }
    if (iVar7 == -0x3aebec87) {
      bVar3 = true;
      iVar4 = 0x75cb6f27;
    }
    else {
      iVar4 = 0x75cb6f27;
      if ((iVar7 != -0xd5477e2) && (iVar4 = iVar7, iVar7 == 0xf5ba06)) {
LAB_001507b4:
        bVar3 = true;
        iVar4 = -0xd5477e2;
      }
    }
  } while( true );
}


