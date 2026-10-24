// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015450c; body: [[0015450c, 00154977]]

void FUN_0015450c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a43)])(param_3,param_1);
  uVar2 = 0xdc99fc1a;
  if (1 < param_1) {
    uVar2 = 0x8b094c65;
  }
  uVar13 = 0;
  uVar7 = (ulong)uVar2;
  uVar8 = 0x86fd1bfd;
  do {
    while( true ) {
      while( true ) {
        while (uVar12 = uVar8, uVar11 = uVar7, uVar7 = uVar11, uVar8 = uVar12,
              (int)uVar12 < 0x3445665) {
          if ((int)uVar12 < -0x3657f899) {
            if (uVar12 == 0x86fd1bfd) {
              uVar8 = 0x448562c8;
              if (param_1 <= uVar13) {
                uVar8 = 0x2d4c207a;
              }
            }
            else if (uVar12 == 0x8b094c65) {
              uVar11 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a44)])
                                 (param_2,0x10);
              local_70 = uVar11 ^ 0x7061636b73686631;
              uVar8 = 0x480e9685;
              if (uVar11 != 0x7061636b73686631) {
                uVar8 = 0x21dcc4a2;
              }
            }
            else if (uVar12 == 0x8b0a739c) {
              uVar8 = 0xa7618b6;
              if (uVar11 != 0) {
                uVar8 = 0xd90808e9;
              }
            }
          }
          else if ((int)uVar12 < -0x236603e6) {
            if (uVar12 == 0xc9a80767) {
              uVar8 = 0x1b05a7ad;
            }
            else if (uVar12 == 0xd90808e9) {
              uVar10 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a45)])(&local_70);
              uVar1 = uVar11 + 1;
              uVar5 = 0;
              if (uVar1 != 0) {
                uVar5 = uVar10 / uVar1;
              }
              lVar14 = uVar10 - uVar5 * uVar1;
              puVar9 = (undefined4 *)
                       (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a2c)])
                                 (param_3,uVar11);
              uVar3 = *puVar9;
              puVar9 = (undefined4 *)
                       (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a2c)])
                                 (param_3,lVar14);
              uVar4 = *puVar9;
              puVar9 = (undefined4 *)
                       (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a2c)])
                                 (param_3,uVar11);
              *puVar9 = uVar4;
              puVar9 = (undefined4 *)
                       (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a2c)])
                                 (param_3,lVar14);
              *puVar9 = uVar3;
              uVar8 = 0xde049488;
            }
          }
          else {
            uVar8 = 0x1b05a7ad;
            if ((uVar12 != 0xdc99fc1a) && (uVar8 = uVar12, uVar12 == 0xde049488)) {
              uVar7 = uVar11 - 1;
              uVar8 = 0x8b0a739c;
            }
          }
        }
        if ((int)uVar12 < 0x2d4c207a) break;
        if ((int)uVar12 < 0x480e9685) {
          if (uVar12 == 0x2d4c207a) {
            uVar8 = 0x3445665;
          }
          else if (uVar12 == 0x448562c8) {
            puVar9 = (undefined4 *)
                     (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a2c)])
                               (param_3,uVar13);
            *puVar9 = (int)uVar13;
            uVar8 = 0x79daa16d;
          }
        }
        else if (uVar12 == 0x480e9685) {
          local_70 = 0xa5a55a5af0f00f0f;
          uVar8 = 0x21dcc4a2;
        }
        else if (uVar12 == 0x79daa16d) {
          uVar13 = uVar13 + 1;
          uVar8 = 0x86fd1bfd;
        }
      }
      if (0x1b05a7ac < (int)uVar12) break;
      uVar8 = uVar2;
      if ((uVar12 != 0x3445665) && (uVar8 = uVar12, uVar12 == 0xa7618b6)) {
        uVar8 = 0xc9a80767;
      }
    }
    uVar7 = param_1 - 1;
    uVar8 = 0x8b0a739c;
  } while ((uVar12 == 0x21dcc4a2) || (uVar7 = uVar11, uVar8 = uVar12, uVar12 != 0x1b05a7ad));
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


