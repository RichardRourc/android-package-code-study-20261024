// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a5984; body: [[001a5984, 001a5a73]]

ulong FUN_001a5984(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  uVar5 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b572])();
  iVar1 = -0x775513ec;
  if (param_1 != 0) {
    iVar1 = 0x754f1ee4;
  }
  iVar2 = -0x775513ec;
  if (*(long *)(uVar5 + 0x20) != 0) {
    iVar2 = -0x2818d805;
  }
  uVar6 = uVar5;
  iVar3 = -0x6f9e7c61;
  while( true ) {
    do {
      while (iVar7 = iVar3, iVar7 < -0x57653045) {
        uVar4 = (uint)uVar6;
        if (iVar7 != -0x6f9e7c61) {
          uVar4 = 0xffffffff;
        }
        uVar6 = (ulong)uVar4;
        iVar3 = iVar2;
        if (iVar7 != -0x6f9e7c61) {
          iVar3 = -0x57653045;
        }
      }
      iVar3 = iVar1;
    } while (iVar7 == -0x2818d805);
    if (iVar7 == -0x57653045) break;
    uVar6 = (**(code **)(uVar5 + 0x20))(param_1);
    iVar3 = -0x57653045;
  }
  return uVar6;
}


