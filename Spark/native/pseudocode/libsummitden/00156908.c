// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00156908; body: [[00156908, 00156a7b]]

uint FUN_00156908(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint local_64;
  
  iVar1 = 0x44b9dccb;
  if (param_2 != 0) {
    iVar1 = 0x5527f635;
  }
  iVar2 = 0x44b9dccb;
  if (param_3 != 0) {
    iVar2 = -0x17d6b3a;
  }
  iVar3 = -0x20ce350b;
  while( true ) {
    do {
      while (iVar6 = iVar3, 0x44515c40 < iVar6) {
        iVar3 = iVar2;
        if (iVar6 != 0x5527f635) {
          if (iVar6 == 0x44515c41) {
            uVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a33)])(param_1);
            local_64 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a9c)])
                                 (param_2,param_2 + param_3,uVar5);
            iVar3 = -0x66242d3c;
          }
          else {
            local_64 = 0;
            iVar3 = -0x66242d3c;
          }
        }
      }
      iVar3 = iVar1;
    } while (iVar6 == -0x20ce350b);
    if (iVar6 != -0x17d6b3a) break;
    uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])(param_1);
    iVar3 = 0x44b9dccb;
    if (param_3 <= uVar4) {
      iVar3 = 0x44515c41;
    }
  }
  return local_64 & 1;
}


