// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00144318; body: [[00144318, 0014446f]]

long FUN_00144318(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  int iVar4;
  undefined1 local_7c [4];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_78 = param_2;
  uStack_70 = param_1;
  do {
    iVar4 = 0x5d47b105;
    while( true ) {
      while (0x5d47b104 < iVar4) {
        if (iVar4 != 0x5d47b105) {
          if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return param_3;
        }
        uVar3 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3701e)])
                          (&uStack_70,&local_78);
        iVar4 = -0x144ae58a;
        if ((uVar3 & 1) == 0) {
          iVar4 = 0x6638bee1;
        }
      }
      if (iVar4 == -0x27df9121) break;
      puVar2 = (undefined1 *)
               (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370ec)])(&uStack_70);
      local_7c[0] = *puVar2;
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370aa)])(param_3,local_7c);
      param_3 = param_3 + 1;
      iVar4 = -0x27df9121;
    }
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370ee)])(&uStack_70);
  } while( true );
}


