// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00170a80; body: [[00170a80, 00170b77]]

long FUN_00170a80(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  iVar1 = -0x6e8b2ee3;
  if (*(ulong *)(param_1 + 0x10) <= uVar3) {
    iVar1 = 0x646c5546;
  }
  iVar2 = -0x48df9b79;
  do {
    do {
      iVar4 = iVar2;
      iVar2 = iVar1;
    } while (iVar4 == -0x48df9b79);
    if (iVar4 == -0x6e8b2ee3) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b27)])(param_1,param_2);
      uVar3 = uVar3 + 0x18;
    }
    else {
      if (iVar4 == -0x38501ced) {
        *(ulong *)(param_1 + 8) = uVar3;
        return uVar3 - 0x18;
      }
      uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b24)])(param_1,param_2);
    }
    iVar2 = -0x38501ced;
  } while( true );
}


