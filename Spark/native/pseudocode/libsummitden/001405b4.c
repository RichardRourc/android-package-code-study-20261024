// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001405b4; body: [[001405b4, 0014061f]]

long FUN_001405b4(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371ec)])
            (&DAT_001fae7f,0x42,&DAT_002041a8,&DAT_001fae7f);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37114)])(&DAT_001fae7f,param_1);
  uVar3 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370ad)])();
  uVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370ac)])();
  iVar1 = 0x19af4a22;
  if (uVar3 <= uVar4 >> 1) {
    iVar1 = -0x4da94891;
  }
  iVar2 = 0x1cfcf328;
  while( true ) {
    do {
      while (iVar5 = iVar2, 0x1cfcf327 < iVar5) {
        iVar2 = iVar1;
        if (iVar5 != 0x1cfcf328) {
          if (iVar5 == 0x42c92fb5) {
            iVar2 = 0x62082c20;
          }
          else {
            iVar2 = -0x7cdd3a20;
          }
        }
      }
      iVar2 = 0x42c92fb5;
    } while (iVar5 == 0x19af4a22);
    if (iVar5 == -0x7cdd3a20) break;
    iVar2 = -0x7cdd3a20;
  }
  return uVar3 - 8;
}


