// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00169c34; body: [[00169c34, 00169d9b]]

void FUN_00169c34(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_80 [8];
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b6d)])(auStack_80,param_1,param_2);
  do {
    lVar3 = local_78;
    iVar1 = 0x4143e6b6;
    if (local_78 != lStack_70) {
      iVar1 = 0x4be2ab38;
    }
    iVar6 = -0x2a8f0bbb;
    while( true ) {
      while( true ) {
        while (iVar6 < 0x4143e6b6) {
          bVar4 = iVar6 != -0x2a8f0bbb;
          iVar6 = iVar1;
          if (bVar4) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b60)])(auStack_80);
            if (*(long *)(lVar2 + 0x28) == local_68) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
        if (iVar6 != 0x4143e6b6) break;
        iVar6 = 0x36e9a09d;
      }
      if (iVar6 != 0x4be2ab38) break;
      uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b62)])(lVar3);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b63)])(param_1 + 0x10,uVar5);
      iVar6 = 0x6b830f40;
    }
    local_78 = lVar3 + 4;
  } while( true );
}


