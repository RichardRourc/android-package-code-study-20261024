// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013a1c0; body: [[0013a1c0, 0013a333]]

void FUN_0013a1c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_80 [8];
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3711b)])(auStack_80,param_1,param_2);
  do {
    lVar3 = local_78;
    iVar1 = -0x5782c3c0;
    if (local_78 != lStack_70) {
      iVar1 = -0x7b90c0b;
    }
    iVar4 = -0x24e9f266;
    while( true ) {
      do {
        while (iVar6 = iVar4, iVar6 < -0x24e9f266) {
          if (iVar6 != -0x5782c3c0) {
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3711d)])(auStack_80);
            if (*(long *)(lVar2 + 0x28) == local_68) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          iVar4 = -0x3034d8f0;
        }
        iVar4 = iVar1;
      } while (iVar6 == -0x24e9f266);
      if (iVar6 != -0x7b90c0b) break;
      uVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371f5)])(lVar3);
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3711a)])(param_1 + 0x10,uVar5,param_3)
      ;
      iVar4 = 0x7a0326fd;
    }
    local_78 = lVar3 + 1;
  } while( true );
}


