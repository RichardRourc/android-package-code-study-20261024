// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016800c; body: [[0016800c, 00168267]]

void FUN_0016800c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long unaff_x20;
  long unaff_x21;
  
  uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ba0)])();
  iVar1 = 0xf14aa59;
  if (1 < uVar3) {
    iVar1 = -0x4dbc811a;
  }
  iVar2 = 0xe293f3f;
  do {
    while( true ) {
      while (iVar7 = iVar2, iVar2 = iVar7, iVar7 < 0xf14aa59) {
        if (iVar7 < -0x27cacb76) {
          if (iVar7 == -0x56ecbbfd) {
            iVar2 = 0x3928c1d3;
          }
          else if (iVar7 == -0x4dbc811a) {
            lVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ba0)])(param_1);
            unaff_x21 = lVar6 + -1;
            iVar2 = 0x70893061;
          }
        }
        else {
          if (iVar7 == -0x1e33581c) goto LAB_001680a4;
          iVar2 = iVar1;
          if ((iVar7 != 0xe293f3f) && (iVar2 = iVar7, iVar7 == -0x27cacb76)) {
            return;
          }
        }
      }
      if (iVar7 < 0x3928c1d3) break;
      if (iVar7 == 0x3928c1d3) {
        unaff_x21 = unaff_x21 + -1;
        iVar2 = 0x70893061;
      }
      else if (iVar7 == 0x5f2b56d3) {
        unaff_x20 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aae)])(unaff_x21 + 1);
        iVar2 = -0x56ecbbfd;
        if (unaff_x21 != unaff_x20) {
          iVar2 = 0x37c9ca35;
        }
      }
      else if ((iVar7 == 0x70893061) && (iVar2 = -0x1e33581c, unaff_x21 != 0)) {
        iVar2 = 0x5f2b56d3;
      }
    }
    if (iVar7 == 0xf14aa59) {
LAB_001680a4:
      iVar2 = -0x27cacb76;
    }
    else if (iVar7 == 0x37c9ca35) {
      uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a95)])(param_1,unaff_x21);
      uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a95)])(param_1,unaff_x20);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ba1)])(uVar4,uVar5);
      iVar2 = -0x56ecbbfd;
    }
  } while( true );
}


