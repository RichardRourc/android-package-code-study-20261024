// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ab9ec; body: [[001ab9ec, 001abacf]]

void FUN_001ab9ec(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b41e)])();
  iVar1 = -0x2be8116;
  if (*param_1 != 0) {
    iVar1 = 0x639dcb1a;
  }
  iVar2 = -0x218c740c;
  while( true ) {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == -0x218c740c);
    if (iVar4 != 0x639dcb1a) break;
    lVar5 = param_1[4];
    lVar6 = *param_1;
    uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b41f)])(param_1);
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b41c)])(lVar5,lVar6,uVar3);
    iVar2 = -0x2be8116;
  }
  return;
}


