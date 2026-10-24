// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00163690; body: [[00163690, 00163877]]

void FUN_00163690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long unaff_x23;
  code *pcVar7;
  
  pcVar7 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a29)];
  iVar6 = -0x415c2a51;
  do {
    while( true ) {
      while (iVar6 < -0x2e19e971) {
        if (iVar6 == -0x6d0b277f) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])(param_1,unaff_x23);
          iVar6 = -0x2e19e971;
        }
        else if (iVar6 == -0x4cb8adbc) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
          iVar6 = 0x2cae7f4f;
        }
        else {
          uVar2 = (*pcVar7)(param_4);
          iVar6 = -0x4cb8adbc;
          if ((uVar2 & 1) == 0) {
            iVar6 = 0x49f9feef;
          }
        }
      }
      if (iVar6 < 0x49f9feef) break;
      if (iVar6 == 0x7d8dfe43) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
        iVar6 = -0x2e19e971;
      }
      else {
        uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52acf)])(param_2,param_3);
        uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a2e)])(param_4);
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar3 / uVar4;
        }
        plVar5 = (long *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a2f)])
                                   (param_4,uVar3 - uVar2 * uVar4);
        unaff_x23 = *plVar5;
        iVar6 = 0x7d8dfe43;
        if (unaff_x23 != 0) {
          iVar6 = -0x6d0b277f;
        }
      }
    }
    bVar1 = iVar6 == -0x2e19e971;
    iVar6 = 0x2cae7f4f;
  } while (bVar1);
  return;
}


