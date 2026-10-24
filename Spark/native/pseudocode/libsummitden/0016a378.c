// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016a378; body: [[0016a378, 0016a43f]]

long FUN_0016a378(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar1 = 0x3605e114;
  if (param_1 != 0) {
    iVar1 = 0x5e4dd722;
  }
  lVar3 = param_1;
  iVar2 = 0x17185937;
  do {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == 0x17185937);
    if (iVar4 == 0x3605e114) {
      lVar3 = 0;
    }
    else {
      if (iVar4 == 0x3c566d96) {
        return lVar3;
      }
      iVar2 = (*(code *)(&PTR_FUN_001fda20)[(long)DAT_001fed20 ^ 0x1fffffff98a52b72])(param_1);
      lVar3 = 0x3f - (long)iVar2;
    }
    iVar2 = 0x3c566d96;
  } while( true );
}


