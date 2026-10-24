// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00140550; body: [[00140550, 001405b3]]

long FUN_00140550(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371ec)])
            (&DAT_001fae72,0xd,&DAT_002041a4,&DAT_001fae72);
  uVar3 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370bf)])(&DAT_001fae72);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371ec)])
            (&DAT_001fae7f,0x42,&DAT_002041a8,&DAT_001fae7f);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37114)])(&DAT_001fae7f,uVar3);
  uVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370ad)])();
  uVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370ac)])();
  iVar1 = 0x19af4a22;
  if (uVar4 <= uVar5 >> 1) {
    iVar1 = -0x4da94891;
  }
  iVar2 = 0x1cfcf328;
  while( true ) {
    do {
      while (iVar6 = iVar2, 0x1cfcf327 < iVar6) {
        iVar2 = iVar1;
        if (iVar6 != 0x1cfcf328) {
          if (iVar6 == 0x42c92fb5) {
            iVar2 = 0x62082c20;
          }
          else {
            iVar2 = -0x7cdd3a20;
          }
        }
      }
      iVar2 = 0x42c92fb5;
    } while (iVar6 == 0x19af4a22);
    if (iVar6 == -0x7cdd3a20) break;
    iVar2 = -0x7cdd3a20;
  }
  return uVar4 - 8;
}


