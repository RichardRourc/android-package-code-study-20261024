// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00136b2c; body: [[00136b2c, 0013723f]]

void FUN_00136b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  int iVar10;
  ulong unaff_x22;
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [112];
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [112];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_d8[0] = 0;
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371bd)])(auStack_180,0x40,local_d8);
  uVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(param_2);
  iVar1 = 0x19bfe2ee;
  if (uVar5 < 0x41) {
    iVar1 = -0x4a0ad7d5;
  }
  iVar4 = -0x508dc365;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar10 = iVar4, iVar4 = iVar10, iVar10 < -0x10af50cf) {
            if (iVar10 < -0x4e4e6f0f) {
              if (iVar10 == -0x65e1e013) {
                iVar4 = -0x35b73557;
                if (0x3f < unaff_x22) {
                  iVar4 = -0x4e4e6f0f;
                }
              }
              else if (iVar10 == -0x5ea52c6e) {
                (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d2)])(auStack_168);
                uVar6 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371bf)])
                                  (auStack_1b0);
                uVar7 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])
                                  (auStack_1b0);
                (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d4)])
                          (auStack_168,uVar6,uVar7);
                uVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371bc)])(param_3);
                iVar4 = 0x4beb72f4;
                if ((uVar5 & 1) == 0) {
                  iVar4 = 0x7dc08d88;
                }
              }
              else if (iVar10 == -0x508dc365) {
                iVar4 = iVar1;
              }
            }
            else if (iVar10 == -0x4e4e6f0f) {
              iVar4 = -0x5ea52c6e;
            }
            else if (iVar10 == -0x4a0ad7d5) {
              uVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371bc)])(param_2);
              iVar4 = -0xb50bcc4;
              if ((uVar5 & 1) == 0) {
                iVar4 = -0x10af50cf;
              }
            }
            else if (iVar10 == -0x35b73557) {
              pbVar9 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719c)])
                                         (auStack_180,unaff_x22);
              bVar2 = *pbVar9;
              pbVar9 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719c)])
                                         (auStack_198,unaff_x22);
              *pbVar9 = *pbVar9 ^ bVar2;
              pbVar9 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719c)])
                                         (auStack_180,unaff_x22);
              bVar2 = *pbVar9;
              pbVar9 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719c)])
                                         (auStack_1b0,unaff_x22);
              *pbVar9 = *pbVar9 ^ bVar2;
              iVar4 = 0x4c8cbf47;
            }
          }
          if (0x467db1bc < iVar10) break;
          if (iVar10 == -0x10af50cf) {
            uVar6 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d8)])(param_2);
            uVar7 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371db)])(param_2);
            uVar8 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37196)])(auStack_180);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c9)])(uVar6,uVar7,uVar8);
            iVar4 = -0xb50bcc4;
          }
          else {
            iVar4 = 0x467db1bd;
            if ((iVar10 != -0xb50bcc4) && (iVar4 = iVar10, iVar10 == 0x19bfe2ee)) {
              (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d2)])(local_d8);
              uVar6 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d5)])(param_2);
              uVar7 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(param_2);
              (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d4)])(local_d8,uVar6,uVar7)
              ;
              (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d7)])(auStack_f8,local_d8);
              uVar6 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37187)])(auStack_f8);
              uVar7 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371a6)])(auStack_f8);
              uVar8 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37196)])(auStack_180);
              (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d6)])(uVar6,uVar7,uVar8);
              iVar4 = 0x467db1bd;
            }
          }
        }
        if (iVar10 < 0x4c8cbf47) break;
        if (iVar10 == 0x4c8cbf47) {
          unaff_x22 = unaff_x22 + 1;
          iVar4 = -0x65e1e013;
        }
        else if (iVar10 == 0x7dc08d88) {
          uVar6 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d5)])(param_3);
          uVar7 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(param_3);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d4)])(auStack_168,uVar6,uVar7);
          iVar4 = 0x4beb72f4;
        }
      }
      if (iVar10 != 0x467db1bd) break;
      local_d8[0] = 0x5c;
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371bd)])(auStack_198,0x40,local_d8);
      local_d8[0] = 0x36;
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371bd)])(auStack_1b0,0x40,local_d8);
      unaff_x22 = 0;
      iVar4 = -0x65e1e013;
    }
  } while (iVar10 != 0x4beb72f4);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d7)])(auStack_f8,auStack_168);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d2)])(local_d8);
  uVar6 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371bf)])(auStack_198);
  uVar7 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(auStack_198);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d4)])(local_d8,uVar6,uVar7);
  uVar6 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c8)])(auStack_f8);
  uVar7 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371cb)])(auStack_f8);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d4)])(local_d8,uVar6,uVar7);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d7)])(param_1,local_d8);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(auStack_1b0);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(auStack_198);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(auStack_180);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


