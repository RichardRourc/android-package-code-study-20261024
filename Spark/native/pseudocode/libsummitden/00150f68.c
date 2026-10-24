// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00150f68; body: [[00150f68, 001510bb]]

void FUN_00150f68(long param_1,undefined8 param_2)

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
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8be5)])(&local_80,param_1 + 0x10,param_2)
  ;
  do {
    iVar3 = -0x2c920d;
    while( true ) {
      while (iVar3 < 0x3f1d912c) {
        if (iVar3 != -0x2c920d) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8be6)])(&local_80);
          if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        iVar3 = -0x2b5b5d10;
        if (local_80 != lStack_78) {
          iVar3 = 0x6974f0b0;
        }
      }
      if (iVar3 == 0x3f1d912c) break;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b92)])(local_80);
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b9e)])(uVar4,uVar2);
      iVar3 = 0x3f1d912c;
    }
    local_80 = local_80 + 1;
  } while( true );
}


