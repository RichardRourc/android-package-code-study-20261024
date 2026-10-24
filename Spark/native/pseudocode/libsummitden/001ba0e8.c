// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ba0e8; body: [[001ba0e8, 001ba1cb]]

uint FUN_001ba0e8(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte local_1c [4];
  long local_18;
  
  lVar2 = tpidr_el0;
  local_18 = *(long *)(lVar2 + 0x28);
  local_1c[0] = 1;
  uVar4 = (*(code *)(&PTR_FUN_002026b0)[(long)DAT_00202f98 ^ 0x1ffffffff28caa2f])
                    (param_1,param_2,param_3 + 8,local_1c);
  iVar1 = 0x45508b89;
  if (local_1c[0] == 0) {
    iVar1 = -0x3a575827;
  }
  iVar3 = -0x11d79554;
  uVar5 = (uint)local_1c[0];
  while( true ) {
    while( true ) {
      do {
        iVar6 = iVar3;
        iVar3 = iVar1;
      } while (iVar6 == -0x11d79554);
      if (iVar6 != -0x3a575827) break;
      uVar5 = 0xffffffff;
      iVar3 = -0xc9b138d;
    }
    if (iVar6 == -0xc9b138d) break;
    iVar3 = -0xc9b138d;
    uVar5 = uVar4;
  }
  if (*(long *)(lVar2 + 0x28) == local_18) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


