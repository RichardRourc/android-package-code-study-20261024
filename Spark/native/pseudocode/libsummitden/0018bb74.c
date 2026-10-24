// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0018bb74; body: [[0018bb74, 0018bd97]]

uint FUN_0018bb74(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint unaff_w29;
  undefined1 auStack_e0 [8];
  long local_d8;
  long lStack_d0;
  long local_c0;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar1 = 0x71522166;
  if (param_2 != (long *)0x0) {
    iVar1 = 0x5cf686e;
  }
  iVar2 = 0x71522166;
  if (param_1 != (long *)0x0) {
    iVar2 = 0x49cd944b;
  }
  iVar5 = 0x6e217678;
  do {
    while( true ) {
      while( true ) {
        while (iVar5 < 0x59cb2809) {
          if (iVar5 < 0x5cf686e) {
            if (iVar5 == -0x430bd3b7) {
              unaff_w29 = 0;
              iVar5 = -0x2487ee3d;
            }
            else if (iVar5 == -0x2487ee3d) {
              iVar5 = 0x7d290c4a;
            }
          }
          else if (iVar5 == 0x5cf686e) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_002001e1,6,&DAT_002047bc,&DAT_002001e1);
            iVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5e3)])
                              (&DAT_002001e1,auStack_e0);
            iVar5 = 0x59cb2809;
            if (iVar4 != 0) {
              iVar5 = -0x430bd3b7;
            }
          }
          else if (iVar5 == 0x49cd944b) {
            iVar5 = iVar1;
          }
        }
        if (0x71522165 < iVar5) break;
        if (iVar5 == 0x59cb2809) {
          unaff_w29 = 1;
          *param_1 = local_d8 * lStack_d0;
          *param_2 = local_c0 * local_d8;
          iVar5 = -0x2487ee3d;
        }
        else if (iVar5 == 0x6e217678) {
          iVar5 = iVar2;
        }
      }
      if (iVar5 != 0x71522166) break;
      unaff_w29 = 0;
      iVar5 = 0x7d290c4a;
    }
  } while (iVar5 != 0x7d290c4a);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_w29 & 1;
}


