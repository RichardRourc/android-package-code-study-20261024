// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017744c; body: [[0017744c, 00177b7b]]

byte FUN_0017744c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  long unaff_x21;
  long lVar9;
  byte unaff_w24;
  int unaff_w29;
  uint local_c0;
  int local_bc;
  long local_b8;
  undefined1 auStack_b0 [48];
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar1 = param_2 - param_1;
  uVar8 = lVar1 - 0x60U >> 4 | lVar1 << 0x3c;
  iVar4 = -0x35196cf9;
  local_78 = param_2;
  local_70 = param_1;
LAB_00177518:
  iVar7 = iVar4;
  lVar9 = unaff_x21;
  lVar3 = local_70;
  unaff_x21 = lVar9;
  iVar4 = iVar7;
  if (iVar7 < 0x11183b5b) {
    if (-0x4e3b076c < iVar7) {
      if (iVar7 < -0x35196cf9) {
        if (iVar7 == -0x4e3b076b) {
          uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_b8);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(lVar9,uVar6);
          unaff_x21 = local_b8;
          iVar4 = 0x75b96f1f;
          goto LAB_00177518;
        }
        if (iVar7 != -0x3db1c679) {
          if (iVar7 == -0x37d8baba) {
LAB_00177724:
            local_78 = local_78 + -0x30;
            uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                              (param_3,local_78,local_70);
            iVar4 = 0x44d6169c;
            if ((uVar5 & 1) == 0) {
              iVar4 = 0x601cb353;
            }
          }
          goto LAB_00177518;
        }
      }
      else {
        if (0x1a65483 < iVar7) {
          if (iVar7 == 0x1a65484) {
LAB_001774e0:
            local_78 = local_78 + -0x30;
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d7)])
                      (local_70,local_70 + 0x30,local_70 + 0x60,local_78,param_3);
            goto LAB_0017750c;
          }
          if (iVar7 == 0x104b6670) {
            local_b8 = local_b8 + -0x30;
            local_c0 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                                 (param_3,auStack_b0);
            iVar4 = 0x1823001;
          }
          goto LAB_00177518;
        }
        if (iVar7 != -0x35196cf9) {
          if ((iVar7 == 0x1823001) && (iVar4 = -0x4e3b076b, (local_c0 & 1) == 0)) {
            iVar4 = 0x6cd3bcb7;
          }
          goto LAB_00177518;
        }
        if (lVar1 == 0 || lVar1 == 0x30) goto LAB_0017750c;
        if ((long)uVar8 < 6) {
          if (uVar8 == 0) goto LAB_00177724;
          if (uVar8 == 3) goto LAB_0017796c;
        }
        else {
          if (uVar8 == 6) goto LAB_001774e0;
          if (uVar8 == 9) goto LAB_00177aac;
        }
      }
      lVar9 = local_70 + 0x60;
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d6)])
                (local_70,local_70 + 0x30,lVar9,param_3);
      local_80 = lVar3 + 0x90;
      local_bc = 0;
LAB_00177b1c:
      unaff_x21 = lVar9;
      iVar4 = 0x7ed236d3;
      goto LAB_00177518;
    }
    if (-0x602fdadb < iVar7) {
      if (iVar7 < -0x59e81b1f) {
        if (iVar7 == -0x602fdada) {
LAB_001779f8:
          unaff_w24 = 1;
          unaff_w29 = 1;
          iVar4 = -0x59357c45;
        }
        else if (iVar7 == -0x5c2bc627) goto LAB_001779e8;
      }
      else if (iVar7 == -0x59e81b1f) {
        unaff_w29 = 0;
        iVar4 = 0x43ab34d5;
      }
      else if (iVar7 == -0x59357c45) {
        iVar4 = 0x74157b51;
      }
      goto LAB_00177518;
    }
    if (iVar7 != -0x753894ed) {
      iVar4 = 0x2172669d;
      if ((iVar7 != -0x71ef3495) && (iVar4 = iVar7, iVar7 == -0x6a63df33)) {
        uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                          (param_3,local_80,lVar9);
        iVar4 = 0x6153069f;
        if ((uVar5 & 1) == 0) {
          iVar4 = 0x2172669d;
        }
      }
      goto LAB_00177518;
    }
LAB_0017796c:
    local_78 = local_78 + -0x30;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d6)])
              (local_70,local_70 + 0x30,local_78,param_3);
  }
  else {
    if (0x5a9680f3 < iVar7) {
      if (iVar7 < 0x6cd3bcb7) {
        if (iVar7 == 0x5a9680f4) {
          unaff_w29 = 1;
          local_80 = local_80 + 0x30;
          unaff_w24 = local_80 == local_78;
          iVar4 = 0x43ab34d5;
        }
        else {
          if (iVar7 == 0x601cb353) goto LAB_0017750c;
          if (iVar7 == 0x6153069f) {
            uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_80);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528f4)])(auStack_b0,uVar6);
            unaff_x21 = local_80;
            iVar4 = -0x4e3b076b;
            local_b8 = lVar9;
          }
        }
      }
      else if (iVar7 < 0x75b96f1f) {
        if (iVar7 == 0x6cd3bcb7) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(lVar9,auStack_b0);
          local_bc = local_bc + 1;
          iVar4 = 0x5a9680f4;
          if (local_bc != 8) {
            iVar4 = -0x59e81b1f;
          }
        }
        else if (iVar7 == 0x74157b51) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
            return unaff_w24 & 1;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
      else if (iVar7 == 0x75b96f1f) {
        local_c0 = 0;
        iVar4 = 0x1823001;
        if (lVar9 != local_70) {
          iVar4 = 0x104b6670;
        }
      }
      else if (iVar7 == 0x7ed236d3) {
        iVar4 = 0x19f0d180;
        if (local_80 != local_78) {
          iVar4 = -0x6a63df33;
        }
      }
      goto LAB_00177518;
    }
    if (0x2172669c < iVar7) {
      if (iVar7 < 0x43ab34d5) {
        if (iVar7 == 0x2172669d) {
          unaff_x21 = local_80;
          iVar4 = 0x138c0513;
        }
        else if (iVar7 == 0x2e5500a2) goto LAB_0017750c;
      }
      else if (iVar7 == 0x43ab34d5) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa5)])(auStack_b0);
        iVar4 = 0x2172669d;
        if (unaff_w29 != 0) {
LAB_001779e8:
          iVar4 = 0x74157b51;
          if (unaff_w29 == 3) goto LAB_001779f8;
        }
      }
      else if (iVar7 == 0x44d6169c) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&local_70,&local_78);
        iVar4 = 0x601cb353;
      }
      goto LAB_00177518;
    }
    if (iVar7 != 0x11183b5b) {
      if (iVar7 == 0x138c0513) {
        local_80 = local_80 + 0x30;
        goto LAB_00177b1c;
      }
      if (iVar7 == 0x19f0d180) {
        unaff_w29 = 3;
        iVar4 = -0x5c2bc627;
      }
      goto LAB_00177518;
    }
LAB_00177aac:
    local_78 = local_78 + -0x30;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d4)])
              (local_70,local_70 + 0x30,local_70 + 0x60,local_70 + 0x90,local_78,param_3);
  }
LAB_0017750c:
  unaff_w24 = 1;
  iVar4 = 0x74157b51;
  goto LAB_00177518;
}


