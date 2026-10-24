// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015d33c; body: [[0015d33c, 0015d4b3]]

void FUN_0015d33c(int param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long unaff_x19;
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  iVar1 = 0x123f67a4;
  if (0 < param_1) {
    iVar1 = 0x472f5a48;
  }
  local_68 = *(long *)(lVar2 + 0x28);
  iVar3 = -0x7cfea137;
  while( true ) {
    while( true ) {
      while (iVar4 = iVar3, iVar4 < -0x53d26c7c) {
        iVar3 = iVar1;
        if (iVar4 != -0x7cfea137) {
          iVar3 = -0x39bb2a75;
        }
      }
      if (iVar4 < -0x23e164b3) break;
      iVar3 = -0x23e164b3;
      if (iVar4 != 0x123f67a4) {
        if (iVar4 == -0x23e164b3) goto LAB_0015d480;
        unaff_x19 = (*(code *)(&PTR_FUN_001fda20)[(long)DAT_001fed20 ^ 0x1fffffff98a52a9c])();
        iVar3 = -0x6589545a;
        if (*(long *)(unaff_x19 + 0x48) != 0) {
          iVar3 = -0x53d26c7c;
        }
      }
    }
    if (iVar4 != -0x53d26c7c) break;
    local_78 = (long)(param_1 / 1000);
    lStack_70 = (long)((param_1 % 1000) * 1000000);
    (**(code **)(unaff_x19 + 0x48))(&local_78,0);
    iVar3 = -0x39bb2a75;
  }
LAB_0015d480:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


