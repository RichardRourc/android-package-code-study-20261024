// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001aec94; body: [[001aec94, 001af33b]]

void FUN_001aec94(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int unaff_w21;
  ulong unaff_x28;
  uint local_28c;
  ulong local_288;
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [512];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001fffdc,2,&DAT_00204738,&DAT_001fffdc);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_0020116a,0x18,&DAT_00204ba8,&DAT_0020116a);
  lVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b588)])
                    (&DAT_0020116a,&DAT_001fffdc);
  iVar1 = -0x76478ce0;
  if (lVar4 != 0) {
    iVar1 = -0x5d0c70f0;
  }
  iVar3 = -0x1dca05a0;
LAB_001aedfc:
  do {
    while (iVar7 = iVar3, iVar3 = iVar7, iVar7 < 0x272e5743) {
      if (iVar7 < -0x56c2afc9) {
        if (iVar7 < -0x76478ce0) {
          iVar3 = -0x621ad324;
          if ((iVar7 != -0x7c6f66e5) && (iVar3 = iVar7, iVar7 == -0x7c4f7f68)) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b580)])(lVar4);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b594)])(param_1,0x5d);
            unaff_w21 = 1;
            iVar3 = 0x5c8863de;
          }
        }
        else if (iVar7 == -0x76478ce0) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_00200319,3,&DAT_00204838,&DAT_00200319);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])(param_1,&DAT_00200319);
          unaff_w21 = 1;
          iVar3 = 0x5033917c;
        }
        else if (iVar7 == -0x621ad324) {
          iVar3 = 0x6ac71786;
          if (unaff_w21 != 0) {
LAB_001af0f0:
            lVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b589)])
                              (auStack_268,0x200,lVar4);
            iVar3 = -0x7c4f7f68;
            if (lVar5 != 0) {
              iVar3 = -0x56c2afc9;
            }
          }
        }
        else if (iVar7 == -0x5d0c70f0) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_002004b4,2,&DAT_002048b8,&DAT_002004b4);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])(param_1,&DAT_002004b4);
          local_28c = 1;
          iVar3 = 0x6ac71786;
        }
      }
      else if (iVar7 < -0x1dca05a0) {
        if (iVar7 == -0x56c2afc9) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_00201182,10,&DAT_00204bac,&DAT_00201182);
          unaff_x28 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b47e)])
                                (auStack_268,&DAT_00201182);
          iVar3 = 0x7cdfb3e6;
          if (unaff_x28 != 0) {
            iVar3 = 0x7baaa311;
          }
        }
        else if (iVar7 == -0x5211dd59) {
          unaff_w21 = 2;
          iVar3 = -0x7c6f66e5;
        }
      }
      else {
        iVar3 = iVar1;
        if (iVar7 != -0x1dca05a0) {
          if (iVar7 == 0x770cda7) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b594)])(param_1,0x22);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b52d)])(param_1,auStack_280);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b594)])(param_1,0x22);
            unaff_w21 = 0;
            local_28c = 0;
            iVar3 = 0x7248c2a3;
          }
          else {
            iVar3 = iVar7;
            if (iVar7 == 0x23724a3c) {
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(param_1);
              iVar3 = 0x5c8863de;
            }
          }
        }
      }
    }
    if (0x5e2e876b < iVar7) {
      if (iVar7 < 0x7248c2a3) {
        if (iVar7 == 0x5e2e876c) {
          iVar3 = 0x3e8403b9;
          if (local_288 <= unaff_x28) {
            iVar3 = -0x5211dd59;
          }
        }
        else if (iVar7 == 0x6ac71786) goto LAB_001af0f0;
      }
      else if (iVar7 == 0x7248c2a3) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_280);
        iVar3 = -0x7c6f66e5;
      }
      else if (iVar7 == 0x7baaa311) {
        unaff_x28 = unaff_x28 + 9;
        local_288 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b47f)])
                              (unaff_x28,0xffffffffffffffff,0x22);
        iVar3 = -0x5211dd59;
        if (local_288 != 0) {
          iVar3 = 0x5e2e876c;
        }
      }
      else if (iVar7 == 0x7cdfb3e6) {
        unaff_w21 = 2;
        iVar3 = -0x621ad324;
      }
      goto LAB_001aedfc;
    }
    if (iVar7 < 0x5033917c) {
      if (iVar7 == 0x272e5743) {
        iVar3 = 0x770cda7;
        if ((local_28c & 1) == 0) {
          iVar3 = 0x4aa807bc;
        }
      }
      else if (iVar7 == 0x3e8403b9) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b47c)])
                  (auStack_280,unaff_x28,local_288 - unaff_x28);
        uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_280);
        iVar3 = 0x5229598b;
        if ((uVar6 & 1) == 0) {
          iVar3 = 0x272e5743;
        }
      }
      else if (iVar7 == 0x4aa807bc) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b594)])(param_1,0x2c);
        iVar3 = 0x770cda7;
      }
    }
    else if (iVar7 == 0x5229598b) {
      unaff_w21 = 2;
      iVar3 = 0x7248c2a3;
    }
    else {
      iVar3 = 0x5033917c;
      if ((iVar7 != 0x5c8863de) && (iVar3 = iVar7, iVar7 == 0x5033917c)) {
        if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  } while( true );
}


