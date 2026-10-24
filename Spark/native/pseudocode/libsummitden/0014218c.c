// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0014218c; body: [[0014218c, 0014230b]]

long FUN_0014218c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_98 [31];
  undefined1 uStack_79;
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = param_4;
  local_70 = param_4;
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3714c)])
            (auStack_98,param_1,&local_78,&local_70);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3714f)])(&uStack_79,auStack_98);
  while( true ) {
    iVar1 = 0x57f2048d;
    if (param_2 != param_3) {
      iVar1 = -0x3a8d67ae;
    }
    iVar4 = -0x89af2d6;
    do {
      iVar6 = iVar4;
      iVar4 = iVar1;
    } while (iVar6 == -0x89af2d6);
    if (iVar6 != -0x3a8d67ae) break;
    uVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371f5)])(local_70);
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370c8)])(param_1,uVar5,param_2);
    param_2 = param_2 + 1;
    local_70 = local_70 + 1;
  }
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3714e)])(&uStack_79);
  lVar3 = local_70;
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37141)])(&uStack_79);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


