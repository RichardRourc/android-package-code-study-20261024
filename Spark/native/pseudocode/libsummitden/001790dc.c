// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001790dc; body: [[001790dc, 001791df]]

void FUN_001790dc(long param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = 0;
  do {
    iVar4 = -0xc2d85aa;
    if (0x3f < uVar5) {
      iVar4 = 0x5a0686bf;
    }
    iVar3 = -0x2e4631a7;
    while (iVar3 == -0x2e4631a7) {
      iVar3 = iVar4;
      if (0x50785958 < iVar4) {
        while (iVar4 == 0x5a0686bf) {
          iVar4 = 0x50785959;
        }
        return;
      }
    }
    uVar2 = (*(code *)(&PTR_FUN_001fda20)[(long)DAT_001fed20 ^ 0x1fffffff98a528d0])
                      (param_2,param_1,param_3);
    param_1 = param_1 + -0x30;
    uVar1 = uVar5 & 0x3f;
    uVar5 = uVar5 + 1;
    *param_4 = (uVar2 & 1) << uVar1 | *param_4;
  } while( true );
}


