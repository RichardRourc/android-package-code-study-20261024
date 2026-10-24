// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00143e88; body: [[00143e88, 00143ff7]]

void FUN_00143e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_78;
  undefined1 uStack_69;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371a3)])(&local_78,param_1);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371e0)])(&uStack_69,local_78);
  iVar1 = -0x1de3d82b;
  if (param_4 != 0) {
    iVar1 = 0x4646a702;
  }
  iVar3 = 0x1104ead0;
  while( true ) {
    do {
      iVar4 = iVar3;
      iVar3 = iVar1;
    } while (iVar4 == 0x1104ead0);
    if (iVar4 != 0x4646a702) break;
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371e3)])(param_1,param_4);
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370f4)])
              (param_1,param_2,param_3,param_4);
    iVar3 = -0x1de3d82b;
  }
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371e5)])(&uStack_69);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371e4)])(&uStack_69);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


