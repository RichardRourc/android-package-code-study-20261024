// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017d358; body: [[0017d358, 0017d99f]]

void FUN_0017d358(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  long unaff_x21;
  long unaff_x22;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar1 = -0x2ec86d39;
  if (param_1 != 0) {
    iVar1 = -0x169f14f1;
  }
  iVar2 = -0x12d8fa28;
  if (param_2 != (char *)0x0) {
    iVar2 = 0x30b36e90;
  }
  iVar4 = 0x49503ee7;
LAB_0017d420:
  do {
    iVar6 = iVar4;
    iVar4 = iVar6;
    if (iVar6 < 0x45793864) {
      if (iVar6 < -0x169f14f1) {
        if (iVar6 < -0x3a10a43d) {
          if (iVar6 == -0x5cf958ac) {
            (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fb)])(auStack_c8);
            (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fb)])(auStack_b0);
            iVar4 = 0x697b5fb8;
          }
          else if (iVar6 == -0x4fb90250) {
            unaff_x22 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8f9)])(param_1);
            iVar4 = 0x32635f84;
            if (unaff_x22 != 0) {
              iVar4 = 0x6ac9b13c;
            }
          }
        }
        else {
          if (iVar6 == -0x3a10a43d) goto LAB_0017d400;
          if (iVar6 == -0x2ec86d39) {
            iVar4 = 0x67a0bca3;
          }
          else if (iVar6 == -0x2b762240) {
            iVar4 = iVar2;
          }
        }
        goto LAB_0017d420;
      }
      if (0x91b89ad < iVar6) {
        if (iVar6 == 0x91b89ae) {
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8f1)])(param_1,unaff_x21);
          iVar4 = -0xf9ad972;
        }
        else if (iVar6 == 0x30b36e90) {
          iVar4 = -0x12d8fa28;
          if (*param_2 != '\0') {
            iVar4 = 0x91b89ae;
          }
        }
        else if (iVar6 == 0x32635f84) {
          iVar4 = 0x6ac9b13c;
        }
        goto LAB_0017d420;
      }
      if (iVar6 == -0x169f14f1) {
        unaff_x21 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8f7)])(param_1,5000);
        iVar4 = 0x63f469dd;
        if (unaff_x21 != 0) {
          iVar4 = -0x2b762240;
        }
        goto LAB_0017d420;
      }
      if (iVar6 == -0x12d8fa28) {
        uVar5 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8f6)])();
        iVar4 = 0x91b89ae;
        if ((uVar5 & 1) == 0) {
          iVar4 = 0x750b91f2;
        }
        goto LAB_0017d420;
      }
      iVar7 = -0xf9ad972;
    }
    else {
      if (iVar6 < 0x63f469dd) {
        if (iVar6 < 0x5d092650) {
          if (iVar6 == 0x45793864) {
            (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8f1)])(param_1,unaff_x21);
            iVar4 = 0x697b5fb8;
          }
          else {
            iVar4 = iVar1;
            if ((iVar6 != 0x49503ee7) && (iVar4 = iVar6, iVar6 == 0x507695f8)) {
              (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fd)])(auStack_b0);
              (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fc)])(auStack_c8,param_1,0);
              uVar5 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8ff)])(auStack_c8);
              iVar4 = 0x5d092650;
              if ((uVar5 & 1) == 0) {
                iVar4 = 0x62de4351;
              }
            }
          }
        }
        else if (iVar6 == 0x5d092650) {
LAB_0017d400:
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8f1)])(param_1,unaff_x21);
          iVar4 = -0x5cf958ac;
        }
        else if (iVar6 == 0x620b532b) {
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8f1)])(param_1,unaff_x21);
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fb)])(auStack_e0);
          iVar4 = -0x5cf958ac;
        }
        else if (iVar6 == 0x62de4351) {
          uVar5 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fe)])(auStack_c8);
          iVar4 = -0x3a10a43d;
          if ((uVar5 & 1) == 0) {
            iVar4 = -0x4fb90250;
          }
        }
        goto LAB_0017d420;
      }
      if (0x6ac9b13b < iVar6) {
        if (iVar6 == 0x6ac9b13c) {
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8f8)])
                    (auStack_e0,param_1,unaff_x22,auStack_98,auStack_b0,auStack_80,auStack_c8);
          iVar4 = 0x620b532b;
          if (unaff_x22 != 0) {
            iVar4 = 0x73bd3e7a;
          }
        }
        else if (iVar6 == 0x73bd3e7a) {
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8f1)])(param_1,unaff_x22);
          iVar4 = 0x620b532b;
        }
        else if (iVar6 == 0x750b91f2) {
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8f0)])
                    (auStack_80,param_1,unaff_x21);
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8f3)])
                    (auStack_98,param_1,unaff_x21,auStack_80);
          uVar5 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8f2)])();
          iVar4 = 0x45793864;
          if ((uVar5 & 1) == 0) {
            iVar4 = 0x507695f8;
          }
        }
        goto LAB_0017d420;
      }
      iVar4 = -0xf9ad972;
      if (iVar6 == 0x63f469dd) goto LAB_0017d420;
      if (iVar6 == 0x697b5fb8) {
        (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fa)])(auStack_98);
        (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fb)])(auStack_80);
        iVar4 = -0xf9ad972;
        goto LAB_0017d420;
      }
      iVar7 = 0x67a0bca3;
    }
    iVar4 = iVar6;
    if (iVar6 == iVar7) {
      if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


