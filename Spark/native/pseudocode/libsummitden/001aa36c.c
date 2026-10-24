// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001aa36c; body: [[001aa36c, 001aa48f]]

void FUN_001aa36c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_0020024e,5,&DAT_002047e8,&DAT_0020024e);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_00200253,6,&DAT_002047ec,&DAT_00200253);
  puVar1 = &DAT_0020024e;
  if ((param_3 & 1) == 0) {
    puVar1 = &DAT_00200253;
  }
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])(auStack_70,puVar1);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b503)])(param_1,param_2,auStack_70);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


