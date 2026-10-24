// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a5100; body: [[001a5100, 001a530b]]

void FUN_001a5100(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  long unaff_x20;
  ulong unaff_x25;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)];
  iVar2 = 0x5d887bd3;
  do {
    while( true ) {
      while( true ) {
        while (0x3272188b < iVar2) {
          if (iVar2 < 0x5d887bd3) {
            if (iVar2 == 0x3272188c) {
              unaff_x20 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b582)])
                                    (param_1,0);
              unaff_x25 = 0;
              iVar2 = -0x175d3224;
            }
            else if (iVar2 == 0x44bbba61) {
              unaff_x25 = unaff_x25 + 1;
              iVar2 = -0x175d3224;
            }
          }
          else if (iVar2 == 0x5d887bd3) {
            uVar1 = (*pcVar3)(param_1);
            iVar2 = 0x7fe750c;
            if ((uVar1 & 1) == 0) {
              iVar2 = 0x3272188c;
            }
          }
          else if (iVar2 == 0x60a49c90) {
            iVar2 = 0x7fe750c;
          }
        }
        if (-0x175d3225 < iVar2) break;
        if (iVar2 == -0x644045da) {
          *(undefined1 *)(unaff_x20 + unaff_x25) = 0;
          iVar2 = 0x44bbba61;
        }
        else if (iVar2 == -0x352f4b44) {
          iVar2 = 0x60a49c90;
        }
      }
      if (iVar2 != -0x175d3224) break;
      uVar1 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b581)])(param_1);
      iVar2 = -0x644045da;
      if (uVar1 <= unaff_x25) {
        iVar2 = -0x352f4b44;
      }
    }
  } while (iVar2 != 0x7fe750c);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b511)])(param_1);
  return;
}


