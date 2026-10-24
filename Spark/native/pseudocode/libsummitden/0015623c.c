// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015623c; body: [[0015623c, 0015644b]]

void FUN_0015623c(undefined8 param_1,uint param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined1 uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  uVar7 = 0x283c8a44;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a44)])(param_1,0x10);
  local_70 = uVar5 ^ param_2 ^ 0x686472763200ff5a;
  iVar1 = -0x69fd554a;
  if ((uVar5 ^ param_2) != 0x686472763200ff5a) {
    iVar1 = -0x4accac9a;
  }
  iVar3 = 0x490bed23;
  do {
    while( true ) {
      while( true ) {
        while (iVar6 = iVar3, iVar3 = iVar6, iVar6 < 0x490bed23) {
          if (iVar6 < -0x2bbaa183) {
            if (iVar6 == -0x69fd554a) {
              local_70 = 0xa5a55a5af0f00f0f;
              iVar3 = -0x4accac9a;
            }
            else if (iVar6 == -0x4accac9a) {
              uVar7 = 0;
              iVar3 = -0x2bbaa183;
            }
          }
          else if (iVar6 == -0x2bbaa183) {
            iVar3 = 0x6ee487e1;
            if (0xb < uVar7) {
              iVar3 = 0x558f0a33;
            }
          }
          else if (iVar6 == -0x1a083ef8) {
            uVar7 = uVar7 + 1;
            iVar3 = -0x2bbaa183;
          }
        }
        if (0x6ee487e0 < iVar6) break;
        iVar3 = iVar1;
        if ((iVar6 != 0x490bed23) && (iVar3 = iVar6, iVar6 == 0x558f0a33)) {
          iVar3 = 0x71c37b0c;
        }
      }
      if (iVar6 != 0x6ee487e1) break;
      uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a45)])(&local_70);
      *(undefined1 *)(param_3 + uVar7) = uVar4;
      iVar3 = -0x1a083ef8;
    }
  } while (iVar6 != 0x71c37b0c);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


