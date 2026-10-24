// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00154c38; body: [[00154c38, 00154d83]]

void FUN_00154c38(long *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a4e)])();
  iVar1 = 0x6465be09;
  if (uVar4 <= param_2) {
    iVar1 = 0x79e328d7;
  }
  iVar2 = -0x2aa6d854;
  if (uVar4 > param_2 || param_2 - uVar4 == 0) {
    iVar2 = 0x45ae0a2b;
  }
  iVar3 = -0x6a2f364b;
  while( true ) {
    do {
      while (iVar5 = iVar3, 0x45ae0a2a < iVar5) {
        iVar3 = iVar1;
        if ((iVar5 != 0x45ae0a2b) && (iVar3 = 0x4561da1f, iVar5 == 0x6465be09)) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a50)])
                    (param_1,*param_1 + param_2 * 4);
          iVar3 = 0x79e328d7;
        }
      }
      iVar3 = iVar2;
    } while (iVar5 == -0x6a2f364b);
    if (iVar5 != -0x2aa6d854) break;
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a4f)])(param_1,param_2 - uVar4);
    iVar3 = 0x4561da1f;
  }
  return;
}


