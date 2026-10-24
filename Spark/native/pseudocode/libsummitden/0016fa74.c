// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016fa74; body: [[0016fa74, 0016fc57]]

/* WARNING: Removing unreachable block (ram,0x0016fbd0) */

void FUN_0016fa74(long param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte in_w9;
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar3 = 0x3ce8a7d6;
  do {
    iVar4 = -0x1022f892;
    if ((in_w9 & 1) == 0) {
      iVar4 = -0x602f69f2;
    }
    while (iVar3 < -0x1022f892) {
      bVar2 = iVar3 != -0x7962957d;
      iVar3 = iVar4;
      if (bVar2) {
        if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    while (iVar3 == -0x1022f892) {
      iVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b2e)])(*param_3);
      lVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b2f)])(*param_3);
      *param_3 = lVar5;
      iVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b2e)])(*param_4);
      lVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b2f)])(*param_4);
      *param_4 = lVar5;
      lStack_70 = param_1 + (long)iVar3 * 0x18;
      local_78 = param_2 + (long)iVar4 * -0x18;
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b2c)])(&lStack_70,&local_78);
      iVar3 = 0x3ce8a7d6;
    }
    if (iVar3 == 0x3ce8a7d6) {
      in_w9 = 0;
      iVar3 = -0x7962957d;
      if (*param_3 != 0) {
        iVar3 = 0x6cad3b01;
      }
    }
    else {
      in_w9 = *param_4 != 0;
      iVar3 = -0x7962957d;
    }
  } while( true );
}


