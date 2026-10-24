// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00177d20; body: [[00177d20, 00178007]]

long FUN_00177d20(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long unaff_x22;
  long unaff_x23;
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = 0x4062b7a9;
  if (param_1 != param_2) {
    iVar1 = -0x3dbc071f;
  }
  iVar3 = 0x24591ff6;
  local_70 = param_1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar5 = iVar3, iVar3 = iVar5, iVar5 < 0x24591ff6) {
            if (iVar5 < -0x506374ef) {
              if (iVar5 == -0x6edd68a2) {
                local_78 = local_78 + 0x30;
                iVar3 = -0xace03d2;
              }
              else if (iVar5 == -0x64563ea1) {
                iVar3 = -0x6edd68a2;
              }
            }
            else if (iVar5 == -0x506374ef) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&local_78,&local_70);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528bc)])
                        (local_70,param_4,unaff_x23,local_70);
              iVar3 = -0x64563ea1;
            }
            else if (iVar5 == -0x3dbc071f) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528bf)])
                        (local_70,param_2,param_4);
              unaff_x23 = (param_2 - local_70 >> 4) * -0x5555555555555555;
              iVar3 = -0xace03d2;
              local_78 = param_2;
            }
            else if (iVar5 == -0xace03d2) {
              iVar3 = 0x4a8408cf;
              if (local_78 != param_3) {
                iVar3 = 0x2632a837;
              }
            }
          }
          if (0x29e75fe1 < iVar5) break;
          iVar3 = iVar1;
          if ((iVar5 != 0x24591ff6) && (iVar3 = iVar5, iVar5 == 0x2632a837)) {
            uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                              (param_4,local_78,local_70);
            iVar3 = -0x506374ef;
            if ((uVar4 & 1) == 0) {
              iVar3 = -0x64563ea1;
            }
          }
        }
        if (iVar5 != 0x4062b7a9) break;
        unaff_x22 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a0)])
                              (param_2,param_3);
        iVar3 = 0x29e75fe2;
      }
      if (iVar5 != 0x4a8408cf) break;
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528bd)])(local_70,param_2,param_4);
      unaff_x22 = local_78;
      iVar3 = 0x29e75fe2;
    }
  } while (iVar5 != 0x29e75fe2);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_x22;
}


