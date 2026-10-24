// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00178008; body: [[00178008, 001781ef]]

void FUN_00178008(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = (param_2 - param_1 >> 4) * -0x5555555555555555;
  iVar1 = 0x1aff2879;
  if (param_2 - param_1 < 0x31) {
    iVar1 = 0x4b57f505;
  }
  uVar2 = 0x4b57f505;
  iVar3 = -0x6447bd2c;
  do {
    while( true ) {
      while (iVar4 = iVar3, uVar6 = uVar2, uVar2 = uVar6, iVar4 < 0x1aff2879) {
        if (iVar4 < -0x3efa1d1b) {
          iVar3 = iVar1;
          if (((iVar4 != -0x6447bd2c) && (iVar3 = iVar4, iVar4 == -0x518d3664)) &&
             (iVar3 = 0x4811d61e, 0x7fffffffffffffff < uVar6)) {
            iVar3 = -0x15ec760f;
          }
        }
        else if (iVar4 == -0x3efa1d1b) {
          uVar2 = uVar6 - 1;
          iVar3 = -0x518d3664;
        }
        else {
          iVar3 = iVar4;
          if (iVar4 == -0x15ec760f) {
            iVar3 = 0x733d5e05;
          }
        }
      }
      if (0x4b57f504 < iVar4) break;
      uVar2 = (lVar5 + -2) / 2;
      iVar3 = -0x518d3664;
      if ((iVar4 != 0x1aff2879) && (uVar2 = uVar6, iVar3 = iVar4, iVar4 == 0x4811d61e)) {
        (*(code *)(&PTR_FUN_001fda20)[(long)DAT_001fed20 ^ 0x1fffffff98a528bc])
                  (param_1,param_3,lVar5,param_1 + uVar6 * 0x30);
        iVar3 = -0x3efa1d1b;
      }
    }
    iVar3 = 0x4b57f505;
  } while ((iVar4 == 0x733d5e05) || (iVar3 = iVar4, iVar4 != 0x4b57f505));
  return;
}


