// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00150e00; body: [[00150e00, 00150f67]]

void FUN_00150e00(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_80 [8];
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b9d)])(auStack_80,param_1,param_2);
  while( true ) {
    lVar3 = local_78;
    iVar1 = 0x47d5e98d;
    if (local_78 != lStack_70) {
      iVar1 = 0x3b7b9e3;
    }
    iVar6 = -0x290eb881;
    while( true ) {
      while (iVar6 < 0xb77b805) {
        bVar4 = iVar6 != -0x290eb881;
        iVar6 = iVar1;
        if (bVar4) {
          uVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b92)])(lVar3);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b9e)])(param_1 + 0x10,uVar5);
          iVar6 = 0x7fb3ea83;
        }
      }
      if (iVar6 != 0x47d5e98d) break;
      iVar6 = 0xb77b805;
    }
    if (iVar6 == 0xb77b805) break;
    local_78 = lVar3 + 1;
  }
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b9f)])(auStack_80);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


