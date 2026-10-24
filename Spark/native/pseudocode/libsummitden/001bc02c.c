// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bc02c; body: [[001bc02c, 001bc14b]]

undefined8 FUN_001bc02c(undefined8 param_1,uint param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar1 = -0x268a615;
  if (param_4 <= param_2) {
    iVar1 = -0x5438520c;
  }
  iVar2 = -0x25b08aac;
  if (param_2 <= param_4) {
    iVar2 = 0x3f9cd2ef;
  }
  uVar4 = param_1;
  iVar3 = 0x16054baa;
  while( true ) {
    do {
      while (iVar5 = iVar3, iVar5 < 0xf6e9cc4) {
        iVar3 = iVar2;
        if (iVar5 != -0x5438520c) {
          iVar3 = 0xf6e9cc4;
          if (iVar5 == -0x25b08aac) {
            uVar4 = 1;
          }
          else {
            uVar4 = 0xffffffff;
          }
        }
      }
      iVar3 = iVar1;
    } while (iVar5 == 0x16054baa);
    if (iVar5 == 0xf6e9cc4) break;
    uVar4 = (*(code *)(&PTR_FUN_002026b0)[(long)DAT_00202f98 ^ 0x1ffffffff28caa23])
                      (param_1,param_3,param_2);
    iVar3 = 0xf6e9cc4;
  }
  return uVar4;
}


