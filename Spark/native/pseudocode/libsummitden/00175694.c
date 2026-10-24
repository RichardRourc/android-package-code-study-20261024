// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00175694; body: [[00175694, 00175a97]]

void FUN_00175694(long param_1,long param_2,undefined8 param_3)

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
  long local_a8;
  undefined1 auStack_a0 [48];
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = 0x4d632db4;
  if (param_1 != param_2) {
    iVar1 = 0x5cfe4956;
  }
  iVar3 = 0x73e42fbc;
  do {
    while( true ) {
      while( true ) {
        while (iVar6 = iVar3, lVar7 = unaff_x22, unaff_x22 = lVar7, iVar3 = iVar6,
              iVar6 < 0x24c96c7a) {
          if (iVar6 < -0x339fff00) {
            if (iVar6 == -0x5b582f9c) {
              iVar3 = 0x8f2722c;
              if (local_70 != param_2) {
                iVar3 = -0x3f60b5c0;
              }
            }
            else if (iVar6 == -0x3ff9a52e) {
              local_a8 = local_a8 + -0x30;
              uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                                (param_3,auStack_a0);
              unaff_x23 = uVar5 & 0xffffffff;
              iVar3 = -0x339fff00;
            }
            else if (iVar6 == -0x3f60b5c0) {
              unaff_x22 = local_70 + -0x30;
              uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                                (param_3,local_70,unaff_x22);
              iVar3 = -0x2741d891;
              if ((uVar5 & 1) == 0) {
                iVar3 = -0x23847abb;
              }
            }
          }
          else if (iVar6 < -0x23847abb) {
            if (iVar6 == -0x339fff00) {
              iVar3 = 0x28e4dd91;
              if ((unaff_x23 & 1) == 0) {
                iVar3 = 0x24c96c7a;
              }
            }
            else if (iVar6 == -0x2741d891) {
              uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_70);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528f4)])(auStack_a0,uVar4);
              unaff_x22 = local_70;
              iVar3 = 0x28e4dd91;
              local_a8 = lVar7;
            }
          }
          else if (iVar6 == -0x23847abb) {
            iVar3 = 0x47df2cf0;
          }
          else if (iVar6 == 0x8f2722c) {
            iVar3 = 0x5ad85d35;
          }
        }
        if (iVar6 < 0x4d632db4) break;
        if (iVar6 < 0x5cfe4956) {
          iVar3 = 0x5ad85d35;
          if ((iVar6 != 0x4d632db4) && (iVar3 = iVar6, iVar6 == 0x5ad85d35)) {
            if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
        }
        else {
          lVar7 = param_1;
          if (iVar6 == 0x5cfe4956) goto LAB_00175a18;
          if (iVar6 == 0x73e42fbc) {
            iVar3 = iVar1;
          }
        }
      }
      if (0x47355888 < iVar6) break;
      if (iVar6 == 0x24c96c7a) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(lVar7,auStack_a0);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa5)])(auStack_a0);
        iVar3 = -0x23847abb;
      }
      else if (iVar6 == 0x28e4dd91) {
        uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_a8);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(lVar7,uVar4);
        unaff_x22 = local_a8;
        iVar3 = 0x47355889;
      }
    }
    if (iVar6 == 0x47355889) {
      unaff_x23 = 0;
      iVar3 = -0x339fff00;
      if (lVar7 != param_1) {
        iVar3 = -0x3ff9a52e;
      }
    }
    else {
      lVar7 = local_70;
      if (iVar6 == 0x47df2cf0) {
LAB_00175a18:
        local_70 = lVar7 + 0x30;
        iVar3 = -0x5b582f9c;
      }
    }
  } while( true );
}


