// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00163d9c; body: [[00163d9c, 0016423b]]

void FUN_00163d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int unaff_w24;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_78 = param_3;
  uStack_70 = param_4;
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a3b)])(auStack_90);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a38)])(auStack_a8,auStack_90);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac7)])(param_1,auStack_90);
  lVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a39)])(&local_78);
  lVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a3e)])(&local_78);
  bVar2 = true;
  lVar7 = 0x98a52ae3;
  iVar6 = 0x1cab507a;
LAB_00163eb0:
  do {
    while (0x10108587 < iVar6) {
      if (iVar6 < 0x39e23ba5) {
        if (iVar6 < 0x335401d2) {
          if (iVar6 == 0x10108588) {
            unaff_w24 = 2;
            iVar6 = 0x9577af0;
          }
          else if (iVar6 == 0x1cab507a) {
            iVar6 = 0x10108588;
            if (lVar3 != lVar4) {
              iVar6 = -0x64576eb8;
            }
          }
        }
        else if (iVar6 == 0x335401d2) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52abc)])(param_1,lVar7);
          bVar2 = false;
          unaff_w24 = 0;
          iVar6 = -0x71ddef50;
        }
        else if (iVar6 == 0x37aeef45) {
LAB_0016404c:
          iVar6 = 0x5d0200a6;
        }
      }
      else if (iVar6 < 0x5d0200a6) {
        if (iVar6 == 0x39e23ba5) {
          iVar6 = 0x335401d2;
          if (!bVar2) {
            iVar6 = -0x308931a8;
          }
        }
        else if (iVar6 == 0x42fb2713) {
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a3f)])(lVar7,auStack_a8)
          ;
          iVar6 = -0x24c41a77;
          if ((uVar5 & 1) == 0) {
            iVar6 = 0x39e23ba5;
          }
        }
      }
      else if (iVar6 == 0x5d0200a6) {
LAB_00163ea4:
        lVar3 = lVar3 + 0x18;
        iVar6 = 0x1cab507a;
      }
      else if (iVar6 == 0x7be24d59) {
LAB_00164078:
        unaff_w24 = 3;
        iVar6 = -0x71ddef50;
      }
    }
    if (iVar6 < -0x5d10b922) {
      if (iVar6 < -0x6d3ed250) {
        if (iVar6 == -0x764c6026) {
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af1)])(auStack_a8);
          iVar6 = 0x39e23ba5;
          if ((uVar5 & 1) == 0) {
            iVar6 = 0x42fb2713;
          }
        }
        else if (iVar6 == -0x71ddef50) {
          if (unaff_w24 != 0) goto LAB_00163ea4;
          goto LAB_0016404c;
        }
      }
      else if (iVar6 == -0x6d3ed250) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(param_1);
        iVar6 = -0x5d10b922;
      }
      else if (iVar6 == -0x64576eb8) {
        uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af1)])(lVar3);
        lVar7 = lVar3;
        iVar6 = 0x7be24d59;
        if ((uVar5 & 1) == 0) {
          iVar6 = 0x90a55bc;
        }
      }
      goto LAB_00163eb0;
    }
    if (iVar6 < 0x90a55bc) {
      if (iVar6 == -0x308931a8) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a64)])(param_1,0x2f);
        iVar6 = 0x335401d2;
      }
      else {
        if (iVar6 == -0x24c41a77) goto LAB_00164078;
        if (iVar6 == -0x5d10b922) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_a8);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_90);
          if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    }
    else if (iVar6 == 0x90a55bc) {
      iVar6 = -0x764c6026;
      if (!bVar2) {
        iVar6 = 0x39e23ba5;
      }
    }
    else if (iVar6 == 0x9577af0) {
      unaff_w24 = 1;
      iVar6 = -0x5d10b922;
    }
  } while( true );
}


