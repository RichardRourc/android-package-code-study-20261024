// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00189044; body: [[00189044, 001895ab]]

long FUN_00189044(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  int unaff_w23;
  long unaff_x27;
  long local_130;
  long local_128;
  long local_120;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [128];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_130 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b58b)])(0x60);
  iVar1 = 0x3620fa0f;
  if (0 < local_130) {
    iVar1 = 0x422f9e3e;
  }
  local_128 = -1;
  iVar3 = 0x3908022f;
LAB_00189110:
  do {
    while (iVar4 = iVar3, iVar3 = iVar4, iVar4 < 0x3908022f) {
      if (iVar4 < -0x34444891) {
        if (iVar4 < -0x5c1a0069) {
          if (iVar4 == -0x771f86b3) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5fd)])
                      (auStack_e8,0x80,0x80,0x1ffff0,unaff_x27);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b598)])(auStack_100,auStack_e8)
            ;
            uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_100);
            iVar3 = 0x143ce557;
            if ((uVar6 & 1) == 0) {
              iVar3 = 0x4914aad0;
            }
          }
          else if (iVar4 == -0x5caffcc2) {
            local_120 = -1;
            uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f3)])(auStack_100);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_00200060,5,&DAT_00204754,&DAT_00200060);
            iVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f0)])
                              (uVar5,&DAT_00200060,&local_120);
            iVar3 = 0x4417aa61;
            if (iVar4 != 1) {
              iVar3 = -0x34444891;
            }
          }
        }
        else if (iVar4 == -0x5c1a0069) {
          local_128 = local_120;
          iVar3 = 0x3a100a9a;
        }
        else if (iVar4 == -0x4d7476e0) {
          unaff_w23 = 2;
          iVar3 = 0x2f32b3a;
        }
      }
      else if (iVar4 < 0x2ace3cdb) {
        if (iVar4 == -0x34444891) {
          unaff_w23 = 0;
          iVar3 = 0x5586c6cc;
        }
        else if (iVar4 == 0x143ce557) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5fd)])
                    (auStack_e8,0x80,0x80,&DAT_00200028,unaff_x27);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b598)])(auStack_118,auStack_e8);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f2)])(auStack_100,auStack_118);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_118);
          iVar3 = 0x4914aad0;
        }
        else if (iVar4 == 0x2f32b3a) {
          if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return local_128;
        }
      }
      else if (iVar4 == 0x2ace3cdb) {
LAB_00189108:
        iVar3 = 0x7a549ee7;
      }
      else if (iVar4 == 0x3620fa0f) {
        local_130 = 1;
        iVar3 = 0x422f9e3e;
      }
    }
    if (iVar4 < 0x4417aa61) {
      if (iVar4 < 0x3cfb3f50) {
        iVar3 = iVar1;
        if ((iVar4 != 0x3908022f) && (iVar3 = iVar4, iVar4 == 0x3a100a9a)) {
          iVar3 = -0x34444891;
        }
      }
      else if (iVar4 == 0x3cfb3f50) {
        unaff_w23 = 4;
        iVar3 = 0x5586c6cc;
      }
      else if (iVar4 == 0x422f9e3e) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (0x1ffff0,0x38,&DAT_0020474c,0x1ffff0);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_00200028,0x38,&DAT_00204750,&DAT_00200028);
        unaff_x27 = 0;
        iVar3 = 0x5519c6b1;
      }
      goto LAB_00189110;
    }
    if (0x5519c6b0 < iVar4) {
      if (iVar4 != 0x5519c6b1) {
        if (iVar4 == 0x5586c6cc) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_100);
          if (unaff_w23 == 0) goto LAB_00189108;
        }
        else if (iVar4 != 0x7a549ee7) goto LAB_00189110;
        unaff_x27 = unaff_x27 + 1;
        iVar3 = 0x5519c6b1;
        goto LAB_00189110;
      }
      iVar3 = -0x771f86b3;
      if (local_130 <= unaff_x27) {
        iVar3 = -0x4d7476e0;
      }
      goto LAB_00189110;
    }
    if (iVar4 == 0x4417aa61) {
      iVar3 = -0x5c1a0069;
      if (local_120 <= local_128) {
        iVar3 = 0x3a100a9a;
      }
    }
    else if (iVar4 == 0x4914aad0) {
      uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_100);
      iVar3 = 0x3cfb3f50;
      if ((uVar6 & 1) == 0) {
        iVar3 = -0x5caffcc2;
      }
    }
  } while( true );
}


