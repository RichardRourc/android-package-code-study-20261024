// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ad904; body: [[001ad904, 001ad9df]]

void FUN_001ad904(long param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  
  iVar1 = -0x493c7f0e;
  if (param_1 != 0) {
    iVar1 = 0x7e1bc6ac;
  }
  iVar4 = -0x3d22fdcb;
  do {
    while (-0x261ebcd7 < iVar4) {
      if (iVar4 == -0x261ebcd6) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b402)])(param_1);
        iVar4 = -0x493c7f0e;
      }
      else {
        cVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b53c)])(param_1);
        iVar4 = -0x493c7f0e;
        if (cVar3 != '\0') {
          iVar4 = -0x261ebcd6;
        }
      }
    }
    bVar2 = iVar4 == -0x3d22fdcb;
    iVar4 = iVar1;
  } while (bVar2);
  return;
}


