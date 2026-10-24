// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00173a40; body: [[00173a40, 00173afb]]

undefined8 FUN_00173a40(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  
  uVar6 = 0x1fe000;
  uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528cd)])();
  iVar3 = 0x1bb5d1ac;
  if (param_2 <= uVar2) {
    iVar3 = 0x553601d3;
  }
  iVar1 = 0x7528037c;
  do {
    iVar4 = iVar1;
    iVar1 = iVar3;
  } while (iVar4 == 0x7528037c);
  if (iVar4 != 0x553601d3) {
    auVar8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5e)])();
    lVar5 = auVar8._0_8_ * 0x30;
    pcVar7 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5c)];
    do {
      uVar2 = (*pcVar7)(auVar8._8_8_);
      iVar3 = 0x39c6d9e5;
      if ((uVar2 & 1) == 0) {
        iVar3 = -0x600cc143;
      }
    } while (iVar3 == 0x6e9f0e2b);
    do {
      if (iVar3 == -0x600cc143) {
        uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a52)])(lVar5);
      }
      else {
        if (iVar3 == -0x5dd930c9) {
          return uVar6;
        }
        uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5d)])(lVar5,auVar8._8_8_)
        ;
      }
      iVar3 = -0x5dd930c9;
    } while( true );
  }
                    /* WARNING: Could not recover jumptable at 0x00173ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528c0)])(param_2,8);
  return uVar6;
}


