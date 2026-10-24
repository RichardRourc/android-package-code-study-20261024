// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bc8c4; body: [[001bc8c4, 001bca1b]]

uint FUN_001bc8c4(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fce)])
            (&DAT_00202fb4,2,&DAT_00205c3c,&DAT_00202fb4);
  lVar3 = (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fc9)])(param_1,&DAT_00202fb4);
  uVar5 = 0x5a376f3d;
  uVar1 = uVar5;
  if (lVar3 != 0) {
    uVar1 = 0x10796ce;
  }
  uVar2 = 0x77d51236;
  while( true ) {
    do {
      uVar6 = uVar2;
      uVar2 = uVar1;
    } while (uVar6 == 0x77d51236);
    if (uVar6 == 0xd8663c30) break;
    if (uVar6 == 0x10796ce) {
      lVar4 = (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fca)])
                        (param_2,1,param_3 + -1,lVar3);
      (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fcb)])(lVar3);
      *(undefined1 *)(param_2 + lVar4) = 0;
      uVar5 = (uint)(lVar4 != 0);
    }
    else {
      uVar5 = 0;
    }
    uVar2 = 0xd8663c30;
  }
  return uVar5 & 1;
}


