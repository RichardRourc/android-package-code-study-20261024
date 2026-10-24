// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017c428; body: [[0017c428, 0017c5c7]]

undefined8 FUN_0017c428(void)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = -0x4c260c3c;
  if (DAT_00204428 != 0) {
    iVar1 = 0x6f316f6a;
  }
  iVar5 = 0x1b47861c;
  do {
    while( true ) {
      while (0x69c4e431 < iVar5) {
        if (iVar5 == 0x69c4e432) {
          iVar5 = 0x1407a348;
        }
        else if (iVar5 == 0x6cecf898) {
          (*(code *)(&PTR_FUN_001fed30)[(int)(DAT_001fed88 ^ 0xdc30b66e)])(local_70,&DAT_00204430);
          (*(code *)(&PTR_FUN_001fed30)[(int)(DAT_001fed88 ^ 0xdc30b66d)])(DAT_00204428);
          iVar5 = 0x69c4e432;
        }
        else {
          local_70 = 0;
          iVar4 = (*(code *)(&PTR_FUN_001fed30)[(int)(DAT_001fed88 ^ 0xdc30b66f)])
                            (DAT_00204428,&local_70,0);
          iVar5 = -0x272bf51a;
          if (iVar4 != 0) {
            iVar5 = 0x69c4e432;
          }
        }
      }
      if (0x1407a347 < iVar5) break;
      bVar3 = iVar5 != -0x4c260c3c;
      iVar5 = 0x1407a348;
      if ((bVar3) && (iVar5 = 0x69c4e432, local_70 != 0)) {
        iVar5 = 0x6cecf898;
      }
    }
    bVar3 = iVar5 == 0x1b47861c;
    iVar5 = iVar1;
  } while (bVar3);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


