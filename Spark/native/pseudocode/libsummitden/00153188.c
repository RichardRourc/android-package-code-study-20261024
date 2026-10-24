// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00153188; body: [[00153188, 0015384b]]

uint FUN_00153188(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  ulong unaff_x22;
  ulong local_b0;
  uint local_a4;
  ulong local_a0;
  undefined1 local_94 [4];
  ulong local_90;
  undefined1 auStack_88 [28];
  undefined4 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])();
  iVar1 = -0x5868b750;
  if (7 < uVar7) {
    iVar1 = 0x7eca5b21;
  }
  iVar2 = -0x5868b750;
  if (param_3 != 0) {
    iVar2 = 0x2fa7d306;
  }
  iVar14 = -0x66bba5e4;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (0x2fa7d305 < iVar14) {
              if (iVar14 < 0x3c781956) {
                if (iVar14 < 0x35316769) {
                  if (iVar14 == 0x2fa7d306) {
                    local_6c = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a37)])();
                    uVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])
                                      (param_1);
                    local_a0 = 8;
                    iVar14 = -0xb206bd3;
                    if (uVar7 < 0xc) {
                      iVar14 = 0x660dd42a;
                    }
                  }
                  else if (iVar14 == 0x32ebb19d) {
                    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b06)])(auStack_88);
                    local_a4 = 1;
                    iVar14 = -0x1f0a79a9;
                  }
                }
                else if (iVar14 == 0x35316769) {
                  local_90 = 0xa5a55a5af0f00f0f;
                  iVar14 = -0x278fa942;
                }
                else if (iVar14 == 0x3b01eded) {
                  iVar14 = iVar2;
                }
              }
              else if (iVar14 < 0x7dc37eae) {
                if (iVar14 == 0x3c781956) {
                  iVar14 = -0x21c90a0b;
                  if (local_b0 <= unaff_x22) {
                    iVar14 = -0x397440fb;
                  }
                }
                else if (iVar14 == 0x660dd42a) {
                  uVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])(param_1);
                  iVar14 = -0x7ceef2b5;
                  if (local_a0 <= uVar7) {
                    iVar14 = -0x531ebbdd;
                  }
                }
              }
              else if (iVar14 == 0x7dc37eae) {
                local_a0 = 0xc;
                iVar14 = 0x660dd42a;
              }
              else if (iVar14 == 0x7e392f4a) {
                unaff_x22 = unaff_x22 + 1;
                iVar14 = 0x3c781956;
              }
              else if (iVar14 == 0x7eca5b21) {
                lVar10 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b27)])(param_2);
                iVar14 = 0x3b01eded;
                if (lVar10 != 0x10) {
                  iVar14 = -0x5868b750;
                }
              }
            }
            if (-0x3304dadb < iVar14) break;
            if (iVar14 < -0x5868b750) {
              if (iVar14 == -0x7ceef2b5) {
                local_a4 = 0;
                iVar14 = -0x1f0a79a9;
              }
              else if (iVar14 == -0x66bba5e4) {
                iVar14 = iVar1;
              }
            }
            else if (iVar14 == -0x5868b750) {
              local_a4 = 0;
              iVar14 = -0x3304dada;
            }
            else if (iVar14 == -0x531ebbdd) {
              uVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a3b)])
                                (param_1,local_a0 - 8);
              lVar10 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])(param_1);
              local_b0 = lVar10 - local_a0;
              uVar11 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a3c)])(param_2);
              uVar12 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a3d)])(param_2);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a3e)])
                        (auStack_88,uVar11,uVar12);
              uVar11 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b57)])(auStack_88);
              uVar12 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])(auStack_88);
              uVar13 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a3f)])
                                 (uVar11,uVar12);
              local_90 = uVar13 ^ uVar7 ^ local_b0 * -0x61c8864680b583eb;
              iVar14 = 0x35316769;
              if ((uVar13 ^ uVar7) != local_b0 * -0x61c8864680b583eb) {
                iVar14 = -0x278fa942;
              }
            }
            else if (iVar14 == -0x397440fb) {
              iVar14 = 0x32ebb19d;
            }
          }
          if (iVar14 < -0x1f0a79a9) break;
          if (iVar14 == -0x1f0a79a9) {
            iVar14 = -0x3304dada;
          }
          else if (iVar14 == -0xb206bd3) {
            uVar11 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a38)])(&local_6c);
            uVar12 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a39)])(&local_6c);
            uVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a3a)])
                              (param_1,uVar11,uVar12);
            iVar14 = 0x7dc37eae;
            if ((uVar7 & 1) == 0) {
              iVar14 = 0x660dd42a;
            }
          }
        }
        if (iVar14 != -0x278fa942) break;
        local_94[0] = 0;
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a00)])(param_3,local_b0,local_94);
        unaff_x22 = 0;
        iVar14 = 0x3c781956;
      }
      if (iVar14 != -0x21c90a0b) break;
      bVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a01)])(&local_90);
      uVar13 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])(auStack_88);
      uVar7 = 0;
      if (uVar13 != 0) {
        uVar7 = unaff_x22 / uVar13;
      }
      pbVar8 = (byte *)(*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba1)])
                                 (auStack_88,unaff_x22 - uVar7 * uVar13);
      bVar3 = *pbVar8;
      puVar9 = (undefined1 *)
               (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba1)])
                         (param_1,local_a0 + unaff_x22);
      bVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a02)])
                        (*puVar9,((uint)bVar3 ^ (uint)unaff_x22) & 7);
      pbVar8 = (byte *)(*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a2b)])
                                 (param_3,unaff_x22);
      *pbVar8 = bVar6 ^ bVar5 ^ bVar3;
      iVar14 = 0x7e392f4a;
    }
  } while (iVar14 != -0x3304dada);
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_a4 & 1;
}


