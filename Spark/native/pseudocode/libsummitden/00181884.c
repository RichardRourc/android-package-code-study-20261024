// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00181884; body: [[00181884, 00181957]]

undefined8 FUN_00181884(undefined8 param_1,long param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = 0x64b1762c;
  if (param_2 != 0) {
    iVar1 = -0x7b4ed6b8;
  }
  uVar3 = param_1;
  iVar2 = -0x6877f871;
  do {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == -0x6877f871);
    if (iVar4 == -0x7b4ed6b8) {
      uVar3 = (*(code *)(&PTR_FUN_001ff1c0)[(long)DAT_001ff630 ^ 0x419d8ac])
                        (param_1,*param_3,param_2);
    }
    else {
      if (iVar4 == 0x48788b4) {
        return uVar3;
      }
      uVar3 = 0;
    }
    iVar2 = 0x48788b4;
  } while( true );
}


