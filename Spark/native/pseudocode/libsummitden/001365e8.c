// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001365e8; body: [[001365e8, 0013693f]]

/* WARNING: Type propagation algorithm not settling */

void FUN_001365e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  ulong uVar10;
  ulong unaff_x22;
  ulong unaff_x24;
  int iVar11;
  long local_b8 [2];
  undefined1 local_a8 [64];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])();
  local_a8[0] = 0;
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371bd)])(param_1,uVar5,local_a8);
  uVar10 = 0;
  iVar4 = 0x28bd1547;
  iVar11 = 1;
  do {
    while( true ) {
      while( true ) {
        while (iVar9 = iVar4, iVar4 = iVar9, -0x33c6fe1e < iVar9) {
          if (iVar9 < 0x28bd1547) {
            if (iVar9 == -0x33c6fe1d) {
              iVar4 = -0x7a976ff5;
              if (unaff_x22 <= unaff_x24) {
                iVar4 = -0xf7517cc;
              }
            }
            else if (iVar9 == -0xf7517cc) {
              iVar4 = -0x50ba0dc6;
            }
          }
          else if (iVar9 == 0x28bd1547) {
            uVar7 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(param_2);
            iVar4 = 0x4eeb5234;
            if (uVar7 <= uVar10) {
              iVar4 = -0x625edf3f;
            }
          }
          else if (iVar9 == 0x4eeb5234) {
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371dc)])
                      (local_a8,param_3,param_4,iVar11);
            local_b8[1] = 0x40;
            local_b8[0] = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(param_2);
            local_b8[0] = local_b8[0] - uVar10;
            puVar6 = (ulong *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371df)])
                                        (local_b8 + 1,local_b8);
            unaff_x22 = *puVar6;
            unaff_x24 = 0;
            iVar4 = -0x33c6fe1d;
            iVar11 = iVar11 + 1;
          }
          else if (iVar9 == 0x634278c9) {
            unaff_x24 = unaff_x24 + 1;
            iVar4 = -0x33c6fe1d;
          }
        }
        if (iVar9 < -0x52854c17) break;
        if (iVar9 == -0x52854c17) {
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(param_1);
          iVar4 = -0x7801e87d;
        }
        else if (iVar9 == -0x50ba0dc6) {
          uVar10 = unaff_x22 + uVar10;
          iVar4 = 0x28bd1547;
        }
      }
      if (iVar9 != -0x7a976ff5) break;
      pbVar8 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371de)])
                                 (param_2,unaff_x24 + uVar10);
      bVar1 = *pbVar8;
      pbVar8 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d1)])
                                 (local_a8,unaff_x24);
      bVar2 = *pbVar8;
      pbVar8 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719c)])
                                 (param_1,unaff_x24 + uVar10);
      *pbVar8 = bVar2 ^ bVar1;
      iVar4 = 0x634278c9;
    }
    iVar4 = -0x7801e87d;
  } while ((iVar9 == -0x625edf3f) || (iVar4 = iVar9, iVar9 != -0x7801e87d));
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


