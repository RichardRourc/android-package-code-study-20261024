// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00135460; body: [[00135460, 0013560b]]

void FUN_00135460(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_90 [40];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371b5)])();
  iVar1 = -0x3a8c7da8;
  if (param_2 <= uVar4) {
    iVar1 = -0x2be8427b;
  }
  iVar3 = 0x5cfdaa5f;
  do {
    while (iVar6 = iVar3, iVar6 < -0x2be8427b) {
      if (iVar6 == -0x63a4fd36) {
        uVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(param_1);
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371b6)])
                  (auStack_90,param_2,uVar5,param_1 + 0x10);
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371a9)])(param_1,auStack_90);
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371a8)])(auStack_90);
        iVar3 = -0x2be8427b;
      }
      else {
        uVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371b4)])(param_1);
        iVar3 = 0x6076de9c;
        if (param_2 <= uVar4) {
          iVar3 = -0x63a4fd36;
        }
      }
    }
    iVar3 = iVar1;
  } while (iVar6 == 0x5cfdaa5f);
  if (iVar6 == -0x2be8427b) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371b7)])();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


