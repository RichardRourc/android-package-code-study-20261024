// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013a518; body: [[0013a518, 0013a61b]]

undefined8 FUN_0013a518(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined8 unaff_x21;
  code *pcVar4;
  undefined1 local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pcVar4 = (code *)(&PTR_FUN_001faed0)[(long)DAT_001fbb18 ^ 0x1fffffffdcc37115];
  local_5c[0] = param_3;
  iVar3 = -0x2a34ec25;
  while( true ) {
    while( true ) {
      while (iVar3 == -0x2a34ec25) {
        uVar2 = (*pcVar4)(local_5c,param_2,param_1);
        iVar3 = -0x4b3b7028;
        if ((uVar2 & 1) == 0) {
          iVar3 = 0x61c3c70b;
        }
      }
      if (iVar3 != -0x4b3b7028) break;
      unaff_x21 = param_2;
      iVar3 = 0x18474742;
    }
    if (iVar3 == 0x18474742) break;
    unaff_x21 = param_1;
    iVar3 = 0x18474742;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_x21;
}


