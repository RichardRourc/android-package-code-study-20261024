// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00139994; body: [[00139994, 00139b17]]

void FUN_00139994(undefined8 *param_1,long param_2,undefined8 param_3)

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
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371b2)])();
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371a3)])(&local_78,param_1);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371e0)])(&uStack_69,local_78);
  iVar1 = 0x37c6085a;
  if (param_2 != 0) {
    iVar1 = 0x531a0d34;
  }
  iVar3 = -0x366ecb58;
  while( true ) {
    do {
      iVar4 = iVar3;
      iVar3 = iVar1;
    } while (iVar4 == -0x366ecb58);
    if (iVar4 != 0x531a0d34) break;
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371e3)])(param_1,param_2);
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371e2)])(param_1,param_2,param_3);
    iVar3 = 0x37c6085a;
  }
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371e5)])(&uStack_69);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371e4)])(&uStack_69);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


