// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b9fe4; body: [[001b9fe4, 001ba0e7]]

void FUN_001b9fe4(ulong param_1,ulong param_2,uint param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar2 = -0x413bb093;
  if (param_3 + 4 <= param_2) {
    iVar2 = 0xdda4ddd;
  }
  lVar1 = param_1 + param_3;
  iVar4 = 0x5dab043e;
  do {
    do {
      iVar5 = iVar4;
      iVar4 = iVar2;
    } while (iVar5 == 0x5dab043e);
    if (iVar5 == -0x413bb093) {
      param_1 = 0;
      *param_4 = 0;
    }
    else {
      if (iVar5 != 0xdda4ddd) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(param_1);
      }
      (*(code *)(&PTR_FUN_002026b0)[(long)DAT_00202f98 ^ 0x1ffffffff28caab5])(&local_6c,4,lVar1,4);
      param_1 = (ulong)local_6c;
    }
    iVar4 = 0x5440d722;
  } while( true );
}


