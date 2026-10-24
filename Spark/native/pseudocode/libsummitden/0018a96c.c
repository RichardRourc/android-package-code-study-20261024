// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0018a96c; body: [[0018a96c, 0018aa2f]]

byte FUN_0018a96c(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  byte in_w9;
  byte bVar5;
  
  iVar1 = -0x2ce6196d;
  if (param_2 != 0) {
    iVar1 = -0x6082b4eb;
  }
  iVar2 = -0x64210944;
  while( true ) {
    do {
      bVar5 = in_w9;
      iVar4 = iVar2;
      iVar2 = iVar1;
      in_w9 = 0;
    } while (iVar4 == -0x64210944);
    if (iVar4 != -0x6082b4eb) break;
    lVar3 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b5eb])(param_1,param_2,0);
    iVar2 = -0x2ce6196d;
    in_w9 = lVar3 != -1;
  }
  return bVar5 & 1;
}


