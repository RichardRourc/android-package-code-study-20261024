// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00156a88; body: [[00156a88, 00156b97]]

/* WARNING: Removing unreachable block (ram,0x00156b2c) */

ulong FUN_00156a88(undefined8 param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  
  uVar5 = 0;
  iVar6 = 0;
LAB_00156ae8:
  iVar4 = -0x6be53138;
  do {
    iVar1 = -0x3bc74b6b;
    if (7 < iVar6) {
      iVar1 = -0x2311ca51;
    }
    do {
      if (-0x2311ca52 < iVar4) goto LAB_00156b14;
      bVar2 = iVar4 == -0x6be53138;
      iVar4 = iVar1;
    } while (bVar2);
    pbVar3 = (byte *)(*(code *)(&PTR_FUN_001fc070)[(long)DAT_001fcf68 ^ 0x283c8ba1])
                               (param_1,param_2 + iVar6);
    uVar5 = (ulong)*pbVar3 << ((ulong)(uint)(iVar6 << 3) & 0x3f) | uVar5;
    iVar4 = 0x3da3ac13;
  } while( true );
LAB_00156b14:
  while (iVar4 == -0x2311ca51) {
    iVar4 = -0x5fa9d8d;
  }
  if (iVar4 == -0x5fa9d8d) {
    return uVar5;
  }
  iVar6 = iVar6 + 1;
  goto LAB_00156ae8;
}


