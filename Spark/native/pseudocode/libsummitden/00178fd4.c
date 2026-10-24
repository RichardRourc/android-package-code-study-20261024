// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00178fd4; body: [[00178fd4, 001790db]]

void FUN_00178fd4(long param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = 0;
  do {
    iVar4 = -0x75003139;
    if (0x3f < uVar5) {
      iVar4 = 0x4ed852e5;
    }
    iVar3 = -0x5ae0ac6e;
    while (iVar3 == -0x5ae0ac6e) {
      iVar3 = iVar4;
      if (0x4ed852e4 < iVar4) {
        while (iVar4 == 0x4ed852e5) {
          iVar4 = 0x7cbf575d;
        }
        return;
      }
    }
    uVar2 = (*(code *)(&PTR_FUN_001fda20)[(long)DAT_001fed20 ^ 0x1fffffff98a528d0])
                      (param_2,param_1,param_3);
    param_1 = param_1 + 0x30;
    uVar1 = uVar5 & 0x3f;
    uVar5 = uVar5 + 1;
    *param_4 = ((ulong)~uVar2 & 1) << uVar1 | *param_4;
  } while( true );
}


