// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00138f94; body: [[00138f94, 00139097]]

ulong FUN_00138f94(undefined4 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  uVar5 = (*(code *)(&PTR_FUN_001faed0)[(long)DAT_001fbb18 ^ 0x1fffffffdcc371f7])();
  iVar1 = -0x76ba08ed;
  if (param_2 != 0) {
    iVar1 = -0x36e155a7;
  }
  iVar2 = -0x76ba08ed;
  if (*(long *)(uVar5 + 0x40) != 0) {
    iVar2 = 0x54299a96;
  }
  uVar6 = uVar5;
  iVar3 = -0x568c0684;
  while( true ) {
    do {
      while (iVar7 = iVar3, iVar7 < -0x43c17f30) {
        uVar4 = (uint)uVar6;
        if (iVar7 != -0x568c0684) {
          uVar4 = 0xffffffff;
        }
        uVar6 = (ulong)uVar4;
        iVar3 = iVar2;
        if (iVar7 != -0x568c0684) {
          iVar3 = -0x43c17f30;
        }
      }
      iVar3 = iVar1;
    } while (iVar7 == 0x54299a96);
    if (iVar7 == -0x43c17f30) break;
    uVar6 = (**(code **)(uVar5 + 0x40))(param_1,param_2);
    iVar3 = -0x43c17f30;
  }
  return uVar6;
}


