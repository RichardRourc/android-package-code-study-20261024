// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00155a5c; body: [[00155a5c, 00155b13]]

undefined8 FUN_00155a5c(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  
  uVar6 = 0x283c8aab;
  uVar2 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8aab)])();
  iVar3 = 0x78a13d35;
  if (param_2 <= uVar2) {
    iVar3 = -0x456a7d6;
  }
  iVar1 = -0x69e5bb70;
  do {
    iVar4 = iVar1;
    iVar1 = iVar3;
  } while (iVar4 == -0x69e5bb70);
  if (iVar4 != -0x456a7d6) {
    auVar8 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b79)])();
    lVar5 = auVar8._0_8_ << 2;
    pcVar7 = (code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b7b)];
    do {
      uVar2 = (*pcVar7)(auVar8._8_8_);
      iVar3 = -0x5225e915;
      if ((uVar2 & 1) == 0) {
        iVar3 = -0x62bce37e;
      }
    } while (iVar3 == 0xb34c7d4);
    do {
      if (iVar3 == -0x62bce37e) {
        uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b7d)])(lVar5);
      }
      else {
        if (iVar3 != -0x5225e915) {
          return uVar6;
        }
        uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b7c)])(lVar5,auVar8._8_8_)
        ;
      }
      iVar3 = 0x1b6d1570;
    } while( true );
  }
                    /* WARNING: Could not recover jumptable at 0x00155afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8aae)])(param_2,4);
  return uVar6;
}


