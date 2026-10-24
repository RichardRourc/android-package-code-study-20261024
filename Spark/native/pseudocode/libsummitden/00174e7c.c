// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00174e7c; body: [[00174e7c, 001751bb]]

uint FUN_00174e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  code *pcVar4;
  uint unaff_w25;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar4 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)];
  iVar3 = -0x1648f8be;
  local_80 = param_3;
  local_78 = param_2;
  uStack_70 = param_1;
LAB_00174f34:
  while( true ) {
    while (iVar3 < 0x472e582) {
      if (iVar3 < -0x48eb2cc9) {
        if (iVar3 == -0x6a77eef2) {
          uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                            (param_4,local_80,local_78);
          iVar3 = 0x63387b2b;
          if ((uVar2 & 1) == 0) {
            iVar3 = -0x560eceb7;
          }
        }
        else if (iVar3 == -0x560eceb7) {
          unaff_w25 = 0;
          iVar3 = -0x48eb2cc9;
        }
        else if (iVar3 == -0x49fdc6a9) goto LAB_00174f28;
      }
      else if (iVar3 == -0x472cbc08) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&uStack_70,&local_78);
        iVar3 = -0x49fdc6a9;
      }
      else if (iVar3 == -0x1648f8be) {
        uVar2 = (*pcVar4)(param_4,param_2,param_1);
        iVar3 = 0x2bf2d645;
        if ((uVar2 & 1) == 0) {
          iVar3 = -0x6a77eef2;
        }
      }
      else if (iVar3 == -0x48eb2cc9) {
        if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return unaff_w25 & 1;
      }
    }
    if (0x5bac3d8b < iVar3) break;
    if (iVar3 == 0x472e582) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&local_78,&local_80);
      iVar3 = 0x5bac3d8c;
    }
    else if (iVar3 == 0x227a3f01) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&uStack_70,&local_78);
      uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                        (param_4,local_80,local_78);
      iVar3 = 0x472e582;
      if ((uVar2 & 1) == 0) {
        iVar3 = 0x5bac3d8c;
      }
    }
    else if (iVar3 == 0x2bf2d645) {
      uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                        (param_4,local_80,local_78);
      iVar3 = 0x7fc3743a;
      if ((uVar2 & 1) == 0) {
        iVar3 = 0x227a3f01;
      }
    }
  }
  if (iVar3 != 0x5bac3d8c) {
    if (iVar3 == 0x63387b2b) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&local_78,&local_80);
      uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                        (param_4,local_78,uStack_70);
      iVar3 = -0x472cbc08;
      if ((uVar2 & 1) == 0) {
        iVar3 = -0x49fdc6a9;
      }
      goto LAB_00174f34;
    }
    if (iVar3 != 0x7fc3743a) goto LAB_00174f34;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&uStack_70,&local_80);
  }
LAB_00174f28:
  unaff_w25 = 1;
  iVar3 = -0x48eb2cc9;
  goto LAB_00174f34;
}


