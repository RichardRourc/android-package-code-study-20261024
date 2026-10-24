// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a985c; body: [[001a985c, 001a993f]]

void FUN_001a985c(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4cc)])();
  iVar1 = 0x609fbb4a;
  if (*param_1 != 0) {
    iVar1 = 0x3c44b56f;
  }
  iVar2 = -0x26710fad;
  while( true ) {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == -0x26710fad);
    if (iVar4 != 0x3c44b56f) break;
    lVar5 = param_1[4];
    lVar6 = *param_1;
    uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4cd)])(param_1);
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4c2)])(lVar5,lVar6,uVar3);
    iVar2 = 0x609fbb4a;
  }
  return;
}


