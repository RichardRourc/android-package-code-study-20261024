// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00168268; body: [[00168268, 00168413]]

void FUN_00168268(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_90 [40];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ba6)])();
  iVar1 = 0x390fdfdd;
  if (param_2 <= uVar4) {
    iVar1 = 0x42e37589;
  }
  iVar6 = 0x3622f176;
  do {
    while( true ) {
      while (0x390fdfdc < iVar6) {
        if (iVar6 != 0x390fdfdd) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
            return;
          }
          goto LAB_00168410;
        }
        uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ba7)])(param_1);
        iVar6 = -0x38580302;
        if (param_2 <= uVar4) {
          iVar6 = -0x794aa13c;
        }
      }
      if (iVar6 != -0x794aa13c) break;
      uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a96)])(param_1);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ba5)])
                (auStack_90,param_2,uVar5,param_1 + 0x10);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bba)])(param_1,auStack_90);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bbb)])(auStack_90);
      iVar6 = 0x42e37589;
    }
    bVar3 = iVar6 == 0x3622f176;
    iVar6 = iVar1;
  } while (bVar3);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ba4)])();
LAB_00168410:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


