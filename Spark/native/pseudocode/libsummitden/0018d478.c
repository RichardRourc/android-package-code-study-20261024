// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0018d478; body: [[0018d478, 0018dc53]]

void FUN_0018d478(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [48];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar10 = 0x42b5c97e;
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5d8)])(auStack_98);
  iVar1 = iVar10;
  if (param_3 != 0) {
    iVar1 = -0x16087750;
  }
  bVar3 = false;
  uVar9 = 0;
  iVar7 = 0x7ac20aed;
LAB_0018d564:
  while( true ) {
    while( true ) {
      iVar6 = iVar7;
      iVar8 = -0x1415f552;
      iVar7 = iVar6;
      if (iVar6 < -0x1415f552) break;
      if (iVar6 < 0x42b5c97e) {
        if (iVar6 < 0x19d29ced) {
          if (iVar6 == -0x1415f552) {
            iVar10 = 0;
            iVar7 = 0x19d29ced;
          }
          else if (iVar6 == -0x6294f8d) {
            unaff_x28 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b581)])(param_2);
            iVar7 = -0x45b31595;
          }
          else if (iVar6 == -0x37d856a) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5c7)])
                      (param_1,auStack_b0,auStack_c8);
            uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5c4)])(auStack_b0);
            iVar7 = 0x2a5eae56;
            if ((uVar4 & 1) == 0) {
              iVar7 = 0x299369c1;
            }
          }
        }
        else {
          if (iVar6 == 0x19d29ced) {
            iVar7 = -0x20dc8938;
            goto joined_r0x0018d530;
          }
          if (iVar6 == 0x299369c1) {
            iVar10 = 0;
            iVar7 = -0x77704085;
          }
          else if (iVar6 == 0x2a5eae56) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5c7)])
                      (auStack_98,auStack_b0,auStack_c8);
            bVar3 = true;
            iVar7 = 0x299369c1;
          }
        }
      }
      else if (iVar6 < 0x78e3b362) {
        if (iVar6 < 0x47b92c86) {
          if (iVar6 == 0x42b5c97e) {
            uVar9 = unaff_x28 + 1;
            iVar10 = 2;
            iVar7 = -0x77704085;
          }
          else if (iVar6 == 0x4409c391) {
            iVar7 = -0x7b6b4147;
            if (!bVar3) {
              iVar7 = 0x47b92c86;
            }
          }
        }
        else {
          iVar7 = -0x20dc8938;
          if ((iVar6 != 0x761f5bde) && (iVar7 = iVar6, iVar6 == 0x47b92c86)) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5cb)])(auStack_98);
            if (*(long *)(lVar2 + 0x28) == local_68) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
      }
      else if (iVar6 == 0x78e3b362) {
        local_e8 = 0;
        iVar7 = iVar1;
      }
      else {
        if (iVar6 == 0x7ac20aed) goto LAB_0018d534;
        if (iVar6 == 0x7bb6db5e) {
          unaff_x28 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5cc)])
                                (param_2,10,uVar9);
          iVar7 = -0x6294f8d;
          if (unaff_x28 != 0xffffffffffffffff) {
            iVar7 = -0x45b31595;
          }
        }
      }
    }
    if (iVar6 < -0x4ae70227) break;
    if (iVar6 < -0x29c3836a) {
      if (iVar6 == -0x4ae70227) {
        iVar7 = -0x78738277;
        if (unaff_x28 <= unaff_x27) {
          iVar7 = iVar8;
        }
      }
      else if (iVar6 == -0x45b31595) {
        iVar7 = -0x40b9750f;
        if (unaff_x28 <= uVar9) {
          iVar7 = -0x20dc8938;
        }
      }
      else if (iVar6 == -0x40b9750f) {
        unaff_x27 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5cc)])
                              (param_2,0x3d,uVar9);
        iVar7 = iVar8;
        if (unaff_x27 != 0xffffffffffffffff) {
          iVar7 = -0x29c3836a;
        }
      }
    }
    else if (iVar6 < -0x20178d4e) {
      if (iVar6 == -0x29c3836a) {
        iVar7 = -0x4ae70227;
        if (unaff_x27 <= uVar9) {
          iVar7 = iVar8;
        }
      }
      else if (iVar6 == -0x20dc8938) {
        iVar10 = 0;
        uVar9 = unaff_x28 + 1;
        iVar7 = -0x6a254700;
      }
    }
    else {
      iVar7 = -0x1415f552;
      if ((iVar6 != -0x20178d4e) && (iVar7 = iVar6, iVar6 == -0x16087750)) {
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5c0)])
                          (auStack_c8,&local_e8);
        iVar7 = -0x76db159d;
        if ((uVar4 & 1) == 0) {
          iVar7 = 0x42b5c97e;
        }
      }
    }
  }
  if (iVar6 < -0x76db159d) {
    if (iVar6 == -0x7b6b4147) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5d7)])(auStack_e0,auStack_98);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_002001ff,0xd,&DAT_002047cc,&DAT_002001ff);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5d6)])
                (param_1,&DAT_002001ff,auStack_e0);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_e0);
      iVar7 = 0x47b92c86;
      goto LAB_0018d564;
    }
    if (iVar6 == -0x78738277) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5cd)])
                (auStack_b0,param_2,uVar9,unaff_x27 - uVar9);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5cd)])
                (auStack_e0,param_2,unaff_x27 + 1,unaff_x28 + ~unaff_x27);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5c2)])(auStack_c8,auStack_e0);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_e0);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_002001fc,3,&DAT_002047c8,&DAT_002001fc);
      lVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5c3)])
                        (auStack_b0,&DAT_002001fc,0);
      iVar7 = 0x78e3b362;
      if (lVar5 != 0) {
        iVar7 = -0x37d856a;
      }
      goto LAB_0018d564;
    }
    if (iVar6 != -0x77704085) goto LAB_0018d564;
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_c8);
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_b0);
    iVar7 = -0x1415f552;
  }
  else {
    if (iVar6 == -0x76db159d) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5c1)])(auStack_e0,auStack_b0);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5c6)])(param_3,auStack_e0,&local_e8)
      ;
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_e0);
      iVar7 = 0x42b5c97e;
      goto LAB_0018d564;
    }
    if (iVar6 != -0x6a254700) {
      if (iVar6 == -0x65c072bc) {
        iVar7 = 0x7ac20aed;
      }
      goto LAB_0018d564;
    }
    iVar7 = 0x7ac20aed;
  }
joined_r0x0018d530:
  if (iVar10 != 0) {
LAB_0018d534:
    uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b581)])(param_2);
    iVar7 = 0x7bb6db5e;
    if (uVar4 <= uVar9) {
      iVar7 = 0x4409c391;
    }
  }
  goto LAB_0018d564;
}


