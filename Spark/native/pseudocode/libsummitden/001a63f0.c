// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a63f0; body: [[001a63f0, 001a64e7]]

ulong FUN_001a63f0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  uVar5 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b572])();
  iVar1 = -0x35371619;
  if (*(long *)(uVar5 + 0x38) != 0) {
    iVar1 = 0x2d00b875;
  }
  iVar2 = -0x35371619;
  if (param_1 != 0) {
    iVar2 = -0x2738b165;
  }
  uVar6 = uVar5;
  iVar3 = -0x31e103b9;
  while( true ) {
    do {
      while (iVar7 = iVar3, iVar7 < -0x2738b165) {
        uVar4 = (uint)uVar6;
        if (iVar7 != -0x31e103b9) {
          uVar4 = 0xffffffff;
        }
        uVar6 = (ulong)uVar4;
        iVar3 = iVar1;
        if (iVar7 != -0x31e103b9) {
          iVar3 = 0x37282dae;
        }
      }
      iVar3 = iVar2;
    } while (iVar7 == 0x2d00b875);
    if (iVar7 != -0x2738b165) break;
    uVar6 = (**(code **)(uVar5 + 0x38))(param_1);
    iVar3 = 0x37282dae;
  }
  return uVar6;
}


