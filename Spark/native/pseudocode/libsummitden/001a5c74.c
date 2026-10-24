// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a5c74; body: [[001a5c74, 001a5d73]]

ulong FUN_001a5c74(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  uVar5 = (*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b572])();
  iVar1 = -0x2711c22f;
  if (*(long *)(uVar5 + 0x28) != 0) {
    iVar1 = -0x67dc8480;
  }
  iVar2 = -0x2711c22f;
  if (param_1 != 0) {
    iVar2 = 0x69aa899b;
  }
  uVar6 = uVar5;
  iVar3 = 0x5f51fb5b;
  while( true ) {
    do {
      while (iVar7 = iVar3, iVar7 < 0x5f51fb5b) {
        uVar4 = (uint)uVar6;
        if (iVar7 != -0x67dc8480) {
          uVar4 = 0xffffffff;
        }
        uVar6 = (ulong)uVar4;
        iVar3 = iVar2;
        if (iVar7 != -0x67dc8480) {
          iVar3 = 0x6df7fde8;
        }
      }
      iVar3 = iVar1;
    } while (iVar7 == 0x5f51fb5b);
    if (iVar7 != 0x69aa899b) break;
    uVar6 = (**(code **)(uVar5 + 0x28))(param_1,param_2);
    iVar3 = 0x6df7fde8;
  }
  return uVar6;
}


