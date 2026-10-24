// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00150bb4; body: [[00150bb4, 00150d77]]

void FUN_00150bb4(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_90 [40];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = -0x6045485d;
  if (param_2 <= (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8))) {
    iVar1 = -0x22a051e3;
  }
  iVar7 = -0xa5cb8f4;
  do {
    while (iVar7 < -0xa5cb8f4) {
      if (iVar7 == -0x6045485d) {
        lVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])(param_1);
        uVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b98)])
                          (param_1,lVar4 + param_2);
        uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])(param_1);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b99)])
                  (auStack_90,uVar5,uVar6,(long *)(param_1 + 0x10));
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b9a)])(auStack_90,param_2);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b9b)])(param_1,auStack_90);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b9c)])(auStack_90);
      }
      else {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b97)])(param_1,param_2);
      }
      iVar7 = 0x25e4ea25;
    }
    bVar3 = iVar7 == -0xa5cb8f4;
    iVar7 = iVar1;
  } while (bVar3);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


