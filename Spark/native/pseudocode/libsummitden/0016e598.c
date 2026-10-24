// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016e598; body: [[0016e598, 0016e87f]]

long FUN_0016e598(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long unaff_x22;
  long unaff_x23;
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = 0x219f31a9;
  if (param_1 != param_2) {
    iVar1 = 0x21bed365;
  }
  iVar4 = 0x144faa01;
  local_70 = param_1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar4 < 0x15d167e9) {
            if (iVar4 < -0xb706c1a) {
              if (iVar4 == -0x713342b3) {
                iVar4 = 0x4a0de945;
              }
              else if (iVar4 == -0x2bf6cc20) {
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])
                          (&local_78,&local_70);
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b55)])
                          (local_70,param_4,unaff_x23,local_70);
                iVar4 = -0x713342b3;
              }
            }
            else if (iVar4 == -0xb706c1a) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b2a)])
                        (local_70,param_2,param_4);
              unaff_x22 = local_78;
              iVar4 = 0x15d167e9;
            }
            else if (iVar4 == -0x5856959) {
              uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                                (param_4,local_78,local_70);
              iVar4 = -0x2bf6cc20;
              if ((uVar3 & 1) == 0) {
                iVar4 = -0x713342b3;
              }
            }
            else if (iVar4 == 0x144faa01) {
              iVar4 = iVar1;
            }
          }
          if (iVar4 < 0x4a0de945) break;
          if (iVar4 == 0x4a0de945) {
            local_78 = local_78 + 0x18;
            iVar4 = 0x625bc3e2;
          }
          else if ((iVar4 == 0x625bc3e2) && (iVar4 = -0xb706c1a, local_78 != param_3)) {
            iVar4 = -0x5856959;
          }
        }
        if (iVar4 != 0x219f31a9) break;
        unaff_x22 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b43)])
                              (param_2,param_3);
        iVar4 = 0x15d167e9;
      }
      if (iVar4 != 0x21bed365) break;
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b54)])(local_70,param_2,param_4);
      unaff_x23 = (param_2 - local_70 >> 3) * -0x5555555555555555;
      iVar4 = 0x625bc3e2;
      local_78 = param_2;
    }
  } while (iVar4 != 0x15d167e9);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_x22;
}


