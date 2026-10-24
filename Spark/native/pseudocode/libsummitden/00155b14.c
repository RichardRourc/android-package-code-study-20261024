// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00155b14; body: [[00155b14, 00155c13]]

undefined8 FUN_00155b14(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 unaff_x21;
  code *pcVar3;
  
  pcVar3 = (code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b7b)];
  do {
    uVar1 = (*pcVar3)(param_2);
    iVar2 = -0x5225e915;
    if ((uVar1 & 1) == 0) {
      iVar2 = -0x62bce37e;
    }
  } while (iVar2 == 0xb34c7d4);
  do {
    if (iVar2 == -0x62bce37e) {
      unaff_x21 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b7d)])(param_1 << 2);
    }
    else {
      if (iVar2 != -0x5225e915) {
        return unaff_x21;
      }
      unaff_x21 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b7c)])
                            (param_1 << 2,param_2);
    }
    iVar2 = 0x1b6d1570;
  } while( true );
}


