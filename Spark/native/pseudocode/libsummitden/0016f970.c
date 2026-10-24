// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016f970; body: [[0016f970, 0016fa73]]

/* WARNING: Removing unreachable block (ram,0x0016fa14) */

void FUN_0016f970(long param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = 0;
  do {
    iVar1 = -0x310f5ba0;
    if (0x3f < uVar5) {
      iVar1 = -0x3eab1375;
    }
    iVar4 = 0x5f17e0f4;
    while( true ) {
      do {
        if (iVar4 != 0x5f17e0f4) {
          return;
        }
        iVar4 = iVar1;
      } while (-0x2cced147 < iVar1);
      if (iVar1 != -0x3eab1375) break;
      iVar4 = -0x2cced146;
    }
    uVar3 = (*(code *)(&PTR_FUN_001fda20)[(long)DAT_001fed20 ^ 0x1fffffff98a52b73])
                      (param_2,param_1,param_3);
    param_1 = param_1 + -0x18;
    uVar2 = uVar5 & 0x3f;
    uVar5 = uVar5 + 1;
    *param_4 = (uVar3 & 1) << uVar2 | *param_4;
  } while( true );
}


