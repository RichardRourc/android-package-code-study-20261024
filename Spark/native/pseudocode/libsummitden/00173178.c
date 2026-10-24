// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00173178; body: [[00173178, 001732d7]]

undefined8 FUN_00173178(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [16];
  long local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528e0)])();
  uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528f3)])(param_1,lVar2 + 1);
  uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528e0)])(param_1);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528f0)])
            (auStack_70,uVar3,uVar4,param_1 + 0x10);
  uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528e4)])(local_60);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528fd)])(param_1 + 0x10,uVar3,param_2);
  local_60 = local_60 + 0x30;
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528f1)])(param_1,auStack_70);
  uVar3 = *(undefined8 *)(param_1 + 8);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528f6)])(auStack_70);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


