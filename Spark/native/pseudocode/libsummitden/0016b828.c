// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016b828; body: [[0016b828, 0016bc13]]

void FUN_0016b828(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  long unaff_x22;
  long lVar7;
  ulong unaff_x23;
  long local_90;
  undefined1 auStack_88 [24];
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = 0x639f09a2;
  if (param_1 != param_2) {
    iVar1 = 0xf46d442;
  }
  iVar3 = -0x71f49f7c;
  do {
    while( true ) {
      while( true ) {
        while (iVar6 = iVar3, lVar7 = unaff_x22, unaff_x22 = lVar7, iVar3 = iVar6,
              0x23428b21 < iVar6) {
          if (iVar6 < 0x5a2f4095) {
            if (iVar6 == 0x23428b22) {
              unaff_x23 = 0;
              iVar3 = -0x60f290d6;
              if (lVar7 != param_1) {
                iVar3 = 0x428a5bab;
              }
            }
            else if (iVar6 == 0x3c7a9c20) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(lVar7,auStack_88);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_88);
              iVar3 = -0x29351726;
            }
            else if (iVar6 == 0x428a5bab) {
              local_90 = local_90 + -0x18;
              uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                                (param_3,auStack_88);
              unaff_x23 = uVar5 & 0xffffffff;
              iVar3 = -0x60f290d6;
            }
          }
          else if (iVar6 < 0x6a3b8cb8) {
            if (iVar6 == 0x5a2f4095) {
              uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_90);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(lVar7,uVar4);
              unaff_x22 = local_90;
              iVar3 = 0x23428b22;
            }
            else if (iVar6 == 0x639f09a2) {
              iVar3 = -0x634c70dd;
            }
          }
          else if (iVar6 == 0x6a3b8cb8) {
            iVar3 = -0x634c70dd;
          }
          else if (iVar6 == 0x7ffa3229) {
            uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_70);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aad)])(auStack_88,uVar4);
            unaff_x22 = local_70;
            iVar3 = 0x5a2f4095;
            local_90 = lVar7;
          }
        }
        if (-0x2f5041d7 < iVar6) break;
        if (iVar6 < -0x60f290d6) {
          iVar3 = iVar1;
          if ((iVar6 != -0x71f49f7c) && (iVar3 = iVar6, iVar6 == -0x634c70dd)) {
            if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
        }
        else if (iVar6 == -0x60f290d6) {
          iVar3 = 0x5a2f4095;
          if ((unaff_x23 & 1) == 0) {
            iVar3 = 0x3c7a9c20;
          }
        }
        else {
          lVar7 = local_70;
          if (iVar6 == -0x440efba9) goto LAB_0016ba84;
        }
      }
      if (-0x1ea70024 < iVar6) break;
      if (iVar6 == -0x2f5041d6) {
        iVar3 = 0x6a3b8cb8;
        if (local_70 != param_2) {
          iVar3 = -0x1ea70023;
        }
      }
      else if (iVar6 == -0x29351726) {
        iVar3 = -0x440efba9;
      }
    }
    if (iVar6 == -0x1ea70023) {
      unaff_x22 = local_70 + -0x18;
      uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                        (param_3,local_70,unaff_x22);
      iVar3 = 0x7ffa3229;
      if ((uVar5 & 1) == 0) {
        iVar3 = -0x29351726;
      }
    }
    else {
      lVar7 = param_1;
      if (iVar6 == 0xf46d442) {
LAB_0016ba84:
        local_70 = lVar7 + 0x18;
        iVar3 = -0x2f5041d6;
      }
    }
  } while( true );
}


