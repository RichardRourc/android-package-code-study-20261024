// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013c82c; body: [[0013c82c, 0013c90f]]

void FUN_0013c82c(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37153)])();
  iVar1 = -0x2a64dfaa;
  if (*param_1 != 0) {
    iVar1 = 0x4177810e;
  }
  iVar2 = -0x10308d3a;
  while( true ) {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == -0x10308d3a);
    if (iVar4 != 0x4177810e) break;
    lVar5 = param_1[4];
    lVar6 = *param_1;
    uVar3 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37152)])(param_1);
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37155)])(lVar5,lVar6,uVar3);
    iVar2 = -0x2a64dfaa;
  }
  return;
}


