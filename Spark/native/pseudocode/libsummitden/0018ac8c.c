// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0018ac8c; body: [[0018ac8c, 0018b40b]]

void FUN_0018ac8c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  int iVar10;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar10 = 0x1fffdc;
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001fffdc,2,&DAT_00204738,&DAT_001fffdc);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_0020015d,0x18,&DAT_00204794,&DAT_0020015d);
  lVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b588)])
                    (&DAT_0020015d,&DAT_001fffdc);
  iVar1 = -0x35016052;
  if (lVar6 != 0) {
    iVar1 = -0x25a6626c;
  }
  iVar4 = 0x134e461f;
LAB_0018ae18:
  while (iVar5 = iVar4, iVar4 = iVar5, iVar5 < -0x9a10c3b) {
    if (iVar5 < -0x25a6626c) {
      if (iVar5 < -0x35016052) {
        if (iVar5 == -0x3b98b970) {
          iVar4 = -0x35016052;
          if (iVar10 != 0) {
LAB_0018b3d4:
            if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
        }
        else if (iVar5 == -0x37349fa2) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_00200175,10,&DAT_00204798,&DAT_00200175);
          uVar8 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                            (auStack_88,&DAT_00200175);
          iVar4 = 0xe9b16a4;
          if ((uVar8 & 1) == 0) {
            iVar4 = -0x34e7618e;
          }
        }
      }
      else if (iVar5 == -0x35016052) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_0020018a,0x11,&DAT_002047a0,&DAT_0020018a);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])(auStack_88,&DAT_0020018a);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_001ff7b9,2,&DAT_0020452c,&DAT_001ff7b9);
        uVar8 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                          (auStack_88,&DAT_001ff7b9);
        iVar4 = 0xe9b16a4;
        if ((uVar8 & 1) == 0) {
          iVar4 = -0x37349fa2;
        }
      }
      else if (iVar5 == -0x34e7618e) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_0020015b,2,&DAT_00204790,&DAT_0020015b);
        uVar8 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                          (auStack_88,&DAT_0020015b);
        iVar4 = 0x7b762456;
        if ((uVar8 & 1) == 0) {
          iVar4 = 0x50f1b778;
        }
      }
    }
    else if (iVar5 < -0x155f7f27) {
      if (iVar5 == -0x25a6626c) {
        local_70 = 0;
        lVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b589)])(&local_70,8,lVar6);
        iVar4 = -0x1304eba2;
        if (lVar7 != 0) {
          iVar4 = -0x155f7f27;
        }
      }
      else if (iVar5 == -0x1f3ab92e) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_002001ab,8,&DAT_002047a8,&DAT_002001ab);
        puVar9 = &DAT_002001ab;
        goto LAB_0018ae00;
      }
    }
    else if (iVar5 == -0x155f7f27) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b580)])(lVar6);
      cVar3 = (char)local_70;
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_00200175,10,&DAT_00204798,&DAT_00200175);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_0020017f,0xb,&DAT_0020479c,&DAT_0020017f);
      puVar9 = &DAT_00200175;
      if (cVar3 != '1') {
        puVar9 = &DAT_0020017f;
      }
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])(param_1,puVar9);
      iVar10 = 1;
      iVar4 = -0x3b98b970;
    }
    else if (iVar5 == -0x1304eba2) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b580)])(lVar6);
      iVar10 = 0;
      iVar4 = -0x3b98b970;
    }
  }
  if (iVar5 < 0x50f1b778) {
    if (0x134e461e < iVar5) {
      iVar4 = iVar1;
      if ((iVar5 != 0x134e461f) && (iVar4 = iVar5, iVar5 == 0x287fcb21)) {
        iVar4 = -0x35016052;
      }
      goto LAB_0018ae18;
    }
    if (iVar5 == -0x9a10c3b) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_002001b3,8,&DAT_002047ac,&DAT_002001b3);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])(param_1,&DAT_002001b3);
      iVar10 = 0;
      iVar4 = 0x5a8e25f6;
      goto LAB_0018ae18;
    }
    if (iVar5 != 0xe9b16a4) goto LAB_0018ae18;
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
              (&DAT_00200175,10,&DAT_00204798,&DAT_00200175);
    puVar9 = &DAT_00200175;
  }
  else {
    if (iVar5 < 0x6ca3cd36) {
      if (iVar5 == 0x50f1b778) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_0020017f,0xb,&DAT_0020479c,&DAT_0020017f);
        uVar8 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                          (auStack_88,&DAT_0020017f);
        iVar4 = 0x7b762456;
        if ((uVar8 & 1) == 0) {
          iVar4 = 0x6ca3cd36;
        }
      }
      else if (iVar5 == 0x5a8e25f6) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_88);
        iVar4 = 0x7dc3a016;
      }
      else if (iVar5 == 0x516748e2) goto LAB_0018b3d4;
      goto LAB_0018ae18;
    }
    if (iVar5 == 0x6ca3cd36) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_0020019b,0x10,&DAT_002047a4,&DAT_0020019b);
      iVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f1)])(&DAT_0020019b,0);
      iVar4 = -0x1f3ab92e;
      if (iVar5 != 0) {
        iVar4 = -0x9a10c3b;
      }
      goto LAB_0018ae18;
    }
    if (iVar5 != 0x7b762456) {
      if (iVar5 == 0x7dc3a016) goto LAB_0018b3d4;
      goto LAB_0018ae18;
    }
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
              (&DAT_0020017f,0xb,&DAT_0020479c,&DAT_0020017f);
    puVar9 = &DAT_0020017f;
  }
LAB_0018ae00:
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])(param_1,puVar9);
  iVar10 = 1;
  iVar4 = 0x5a8e25f6;
  goto LAB_0018ae18;
}


