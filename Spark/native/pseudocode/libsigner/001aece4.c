// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001aece4; body: [[001aece4, 001af2d7]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_001aece4(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int *__ptr;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong unaff_x23;
  int unaff_w24;
  int *unaff_x25;
  undefined4 unaff_w28;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong local_b8;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  __ptr = calloc(1,0x30);
  lVar1 = 0x78ac43fddd7c64db;
  if (__ptr != (int *)0x0) {
    lVar1 = 0x7ffb850a0e6ed38d;
  }
  lVar2 = -0x1f81af14a263eaa3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar7 = lVar2, lVar2 = lVar7, 0x57cabee7967ab663 < lVar7) {
            if (lVar7 < 0x6230bf87be098d5d) {
              if (lVar7 < 0x5ebfca74eead21cf) {
                if (lVar7 == 0x57cabee7967ab664) {
                  lVar2 = 0x6230bf87be098d5d;
                  if (DAT_0021fa89 == '\0') {
                    lVar2 = 0x5ad71f292518d033;
                  }
                }
                else if (lVar7 == 0x5ad71f292518d033) {
                  DAT_0021e7e0 = DAT_0021e7e0 ^ 0xca;
                  DAT_0021e7e1 = DAT_0021e7e1 ^ 0xca;
                  _DAT_0021e7c0 = _DAT_0021e7c0 ^ 0xcacacacacacacaca;
                  uRam000000000021e7c8 = uRam000000000021e7c8 ^ 0xcacacacacacacaca;
                  _DAT_0021e7d0 = _DAT_0021e7d0 ^ 0xcacacacacacacaca;
                  uRam000000000021e7d8 = uRam000000000021e7d8 ^ 0xcacacacacacacaca;
                  DAT_0021fa89 = '\x01';
                  lVar2 = -0x2d23be9e4092ee55;
                }
              }
              else if (lVar7 == 0x5ebfca74eead21cf) {
                *(ulong *)(__ptr + 4) = unaff_x23;
                puVar5 = mmap((void *)0x0,unaff_x23,1,2,unaff_w24,0);
                uVar9 = puVar5[1];
                uVar8 = *puVar5;
                uVar6 = puVar5[2];
                *(undefined8 **)(__ptr + 2) = puVar5;
                *(undefined8 *)(__ptr + 8) = uVar9;
                *(undefined8 *)(__ptr + 6) = uVar8;
                *(undefined8 *)(__ptr + 10) = uVar6;
                lVar2 = 0x3485297baf428faf;
                unaff_x25 = __ptr;
              }
              else if (lVar7 == 0x61d9685814f9d681) {
                lVar2 = -0x5eedd7c897c0ed2a;
                unaff_x23 = local_b8;
                if (0x17 < local_b8) {
                  lVar2 = 0x5ebfca74eead21cf;
                }
              }
            }
            else if (lVar7 < 0x727aabeac1ff5013) {
              lVar2 = -0x2d23be9e4092ee55;
              if ((lVar7 != 0x6230bf87be098d5d) && (lVar2 = lVar7, lVar7 == 0x6bbc6b8cc56478f1)) {
                iVar4 = FUN_00212730(0,1,&DAT_0021fa88);
                lVar2 = 0x57cabee7967ab664;
                if (iVar4 != 0) {
                  lVar2 = -0x3180ec1dafce7d52;
                }
              }
            }
            else if (lVar7 == 0x727aabeac1ff5013) {
              *param_1 = unaff_w28;
              FUN_001f3aa0(unaff_w24);
              lVar2 = -0x3ea1661ac6a1c4db;
            }
            else if (lVar7 == 0x78ac43fddd7c64db) {
              *param_1 = 2;
              lVar2 = 0x3485297baf428faf;
              unaff_x25 = (int *)0x0;
            }
            else if (lVar7 == 0x7ffb850a0e6ed38d) {
              lVar2 = 0x6bbc6b8cc56478f1;
            }
          }
          if (-0x3180ec1dafce7d53 < lVar7) break;
          if (lVar7 < -0x4c94198a9ad36397) {
            if (lVar7 == -0x797daf6592e4222d) {
              *param_1 = 8;
              lVar2 = -0x3ea1661ac6a1c4db;
            }
            else if (lVar7 == -0x5eedd7c897c0ed2a) {
              unaff_w28 = 0xc;
              lVar2 = 0x727aabeac1ff5013;
            }
          }
          else if (lVar7 == -0x4c94198a9ad36397) {
            unaff_w28 = 10;
            lVar2 = 0x727aabeac1ff5013;
          }
          else if (lVar7 == -0x3ea1661ac6a1c4db) {
            free(__ptr);
            unaff_x25 = (int *)0x0;
            lVar2 = 0x3485297baf428faf;
          }
        }
        if (-0x21c44217ce61bec9 < lVar7) break;
        lVar2 = 0x6bbc6b8cc56478f1;
        if ((lVar7 != -0x3180ec1dafce7d52) && (lVar2 = lVar7, lVar7 == -0x2d23be9e4092ee55)) {
          DAT_0021fa88 = 0;
          unaff_w24 = FUN_001f351c(&DAT_0021e7c0,0);
          lVar2 = -0x797daf6592e4222d;
          if (-1 < unaff_w24) {
            lVar2 = -0x21c44217ce61bec8;
          }
          *__ptr = unaff_w24;
        }
      }
      if (lVar7 != -0x21c44217ce61bec8) break;
      iVar4 = fstat(unaff_w24,(stat *)&stack0xffffffffffffff18);
      lVar2 = 0x61d9685814f9d681;
      if (iVar4 != 0) {
        lVar2 = -0x4c94198a9ad36397;
      }
    }
    lVar2 = lVar1;
  } while ((lVar7 == -0x1f81af14a263eaa3) || (lVar2 = lVar7, lVar7 != 0x3485297baf428faf));
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_x25;
}


