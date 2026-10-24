// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ba1f8; body: [[001ba1f8, 001ba31b]]

/* WARNING: Removing unreachable block (ram,0x001ba288) */

void FUN_001ba1f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  uVar3 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])();
  uVar6 = uVar3 & 0xffffffff;
  iVar2 = 0x230978e7;
  while( true ) {
    do {
      iVar4 = iVar2;
      iVar2 = 0x374ea5ad;
    } while (iVar4 == 0x230978e7);
    if (iVar4 == 0xc9a386a) break;
    if (iVar4 == 0x374ea5ad) {
      uVar3 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa26)])
                        (param_1,param_2,uVar6);
    }
    else {
      uVar3 = 0;
    }
    iVar2 = 0xc9a386a;
  }
  if (*(long *)(lVar1 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


