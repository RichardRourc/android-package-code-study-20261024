// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00143cbc; body: [[00143cbc, 00143e17]]

void FUN_00143cbc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  long local_80;
  long lStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3715c)])(&local_80,param_1 + 0x10);
  iVar3 = -0x73ec42c9;
  while( true ) {
    while (iVar3 < 0x1798980e) {
      if (iVar3 == -0x73ec42c9) {
        iVar3 = 0x7e294399;
        if (local_80 != lStack_78) {
          iVar3 = 0x1798980e;
        }
      }
      else {
        param_2 = param_2 + 1;
        local_80 = local_80 + 1;
        iVar3 = -0x73ec42c9;
      }
    }
    if (iVar3 != 0x1798980e) break;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371f5)])(local_80);
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370ef)])(uVar4,uVar2,param_2);
    iVar3 = -0x356b0c28;
  }
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3715f)])(&local_80);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


