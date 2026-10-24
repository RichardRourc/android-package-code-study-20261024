// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00171238; body: [[00171238, 001712ef]]

undefined8 FUN_00171238(undefined8 param_1,ulong param_2)

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
  uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b31)])();
  iVar3 = 0x25ddf3b8;
  if (param_2 <= uVar2) {
    iVar3 = -0x7ae18887;
  }
  iVar1 = 0x28669163;
  do {
    iVar4 = iVar1;
    iVar1 = iVar3;
  } while (iVar4 == 0x28669163);
  if (iVar4 != -0x7ae18887) {
    auVar8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5e)])();
    pcVar7 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5c)];
    lVar5 = auVar8._0_8_ << 3;
    do {
      uVar2 = (*pcVar7)(auVar8._8_8_);
      iVar3 = -0x29908cce;
      if ((uVar2 & 1) == 0) {
        iVar3 = -0x2850a055;
      }
    } while (iVar3 == 0x1a138e87);
    do {
      if (iVar3 == -0x29908cce) {
        uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a5d)])(lVar5,auVar8._8_8_)
        ;
      }
      else {
        if (iVar3 != -0x2850a055) {
          return uVar6;
        }
        uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a52)])(lVar5);
      }
      iVar3 = -0xf1045fd;
    } while( true );
  }
                    /* WARNING: Could not recover jumptable at 0x001712dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b34)])(param_2,8);
  return uVar6;
}


