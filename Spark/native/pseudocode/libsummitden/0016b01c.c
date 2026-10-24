// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016b01c; body: [[0016b01c, 0016b35b]]

uint FUN_0016b01c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  code *pcVar4;
  uint unaff_w24;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar4 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)];
  iVar3 = -0x1a4e4756;
  local_80 = param_3;
  local_78 = param_2;
  uStack_70 = param_1;
LAB_0016b0e0:
  while( true ) {
    while (iVar3 < 0x2537ab6c) {
      if (iVar3 < -0x7d9c9cc) {
        if (iVar3 == -0x78add9fe) {
          uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                            (param_4,local_80,local_78);
          iVar3 = 0xfd05f8c;
          if ((uVar2 & 1) == 0) {
            iVar3 = -0x7d9c9cc;
          }
        }
        else if (iVar3 == -0x1b2e768d) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&uStack_70,&local_78);
          iVar3 = 0x44e2aece;
        }
        else if (iVar3 == -0x1a4e4756) {
          uVar2 = (*pcVar4)(param_4,param_2,param_1);
          iVar3 = 0x38178527;
          if ((uVar2 & 1) == 0) {
            iVar3 = -0x78add9fe;
          }
        }
      }
      else if (iVar3 == -0x7d9c9cc) {
        unaff_w24 = 0;
        iVar3 = 0x2537ab6c;
      }
      else if (iVar3 == 0x33d8c34) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&uStack_70,&local_78);
        uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                          (param_4,local_80,local_78);
        iVar3 = 0x6b495f16;
        if ((uVar2 & 1) == 0) {
          iVar3 = 0x7a939599;
        }
      }
      else if (iVar3 == 0xfd05f8c) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&local_78,&local_80);
        uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                          (param_4,local_78,uStack_70);
        iVar3 = -0x1b2e768d;
        if ((uVar2 & 1) == 0) {
          iVar3 = 0x44e2aece;
        }
      }
    }
    if (0x44e2aecd < iVar3) break;
    if (iVar3 == 0x2ea23622) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&uStack_70,&local_80);
      goto LAB_0016b0d4;
    }
    if (iVar3 == 0x38178527) {
      uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                        (param_4,local_80,local_78);
      iVar3 = 0x2ea23622;
      if ((uVar2 & 1) == 0) {
        iVar3 = 0x33d8c34;
      }
    }
    else if (iVar3 == 0x2537ab6c) {
      if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return unaff_w24 & 1;
    }
  }
  if (iVar3 != 0x44e2aece) {
    if (iVar3 == 0x6b495f16) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&local_78,&local_80);
      iVar3 = 0x7a939599;
      goto LAB_0016b0e0;
    }
    if (iVar3 != 0x7a939599) goto LAB_0016b0e0;
  }
LAB_0016b0d4:
  unaff_w24 = 1;
  iVar3 = 0x2537ab6c;
  goto LAB_0016b0e0;
}


