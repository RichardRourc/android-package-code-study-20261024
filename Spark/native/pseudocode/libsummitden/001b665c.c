// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b665c; body: [[001b665c, 001b6d0b]]

void FUN_001b665c(undefined1 *param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  long unaff_x24;
  int unaff_w25;
  undefined1 auStack_a8 [31];
  undefined1 uStack_89;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = 0x4a791867;
  if (param_2 != (char *)0x0) {
    iVar1 = -0x444088a9;
  }
  iVar3 = 0x53a30f49;
LAB_001b6780:
  do {
    while (iVar8 = iVar3, iVar3 = iVar8, 0x16ee3b7f < iVar8) {
      if (iVar8 < 0x3eb2ccf4) {
        if (iVar8 < 0x33c5475e) {
          iVar3 = -0x2c05cc2e;
          if ((iVar8 != 0x16ee3b80) && (iVar3 = iVar8, iVar8 == 0x2c174314)) {
            uVar7 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa00)])(unaff_x24);
            iVar3 = 0x9e0dc54;
            if ((uVar7 & 1) == 0) {
              iVar3 = 0x52e1c20d;
            }
          }
        }
        else if (iVar8 == 0x33c5475e) {
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa02)])(&DAT_00204bf8);
          iVar3 = -0x47a428ef;
        }
        else if (iVar8 == 0x398ae169) {
          uVar5 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa07)])(&DAT_00204bf8);
          uVar6 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa06)])(&DAT_00204bf8);
          unaff_w25 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa05)])
                                (uVar5,uVar6,param_2);
          iVar3 = 0x43d78248;
          if (unaff_w25 != -1) {
            iVar3 = 0x3eb2ccf4;
          }
        }
        else if (iVar8 == 0x3c98aead) {
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
          iVar3 = -0x2c05cc2e;
        }
      }
      else if (iVar8 < 0x4d078449) {
        if (iVar8 == 0x3eb2ccf4) {
          uVar5 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa07)])(&DAT_00204bf8);
          uVar6 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa06)])(&DAT_00204bf8);
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa04)])
                    (auStack_a8,uVar5,uVar6,unaff_w25);
          uVar7 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa1b)])(auStack_a8);
          iVar3 = 0x4d078449;
          if ((uVar7 & 1) == 0) {
            iVar3 = -0x7d3059e5;
          }
        }
        else if (iVar8 == 0x43d78248) {
          uVar9 = DAT_00202f98 ^ 0xf28caa0f;
          puVar4 = param_1;
LAB_001b6ba4:
          (*(code *)(&PTR_FUN_002026b0)[(int)uVar9])(puVar4);
          iVar3 = 0x16ee3b80;
        }
        else if (iVar8 == 0x4a791867) {
          uVar9 = DAT_00202f98 ^ 0xf28caa0f;
          puVar4 = param_1;
          goto LAB_001b6adc;
        }
      }
      else if (iVar8 == 0x4d078449) {
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
        iVar3 = -0x158d967d;
      }
      else if (iVar8 == 0x52e1c20d) {
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa19)])(param_1,unaff_x24,param_2);
        iVar3 = -0xe202788;
      }
      else if (iVar8 == 0x53a30f49) {
        iVar3 = iVar1;
      }
    }
    if (iVar8 < -0x2c05cc2e) {
      if (iVar8 < -0x5995de08) {
        if (iVar8 == -0x7d3059e5) {
          unaff_x24 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa1a)])
                                (&DAT_00204bf0,auStack_a8);
          iVar3 = 0x9e0dc54;
          if (unaff_x24 != 0) {
            iVar3 = 0x2c174314;
          }
        }
        else if (iVar8 == -0x5fbb8ca0) {
          uVar7 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa00)])(&DAT_00204bf8);
          iVar3 = 0x3c98aead;
          if ((uVar7 & 1) == 0) {
            iVar3 = 0x398ae169;
          }
        }
        else if (iVar8 == -0x69cd7749) {
          if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      else if (iVar8 == -0x5995de08) {
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0e)])(auStack_70,&DAT_00204bc8);
        iVar3 = -0x5fbb8ca0;
        if (DAT_00204bf0 == '\0') {
          iVar3 = -0x2a047d32;
        }
      }
      else if (iVar8 == -0x47a428ef) {
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa01)])(auStack_88);
        iVar3 = -0x5fbb8ca0;
      }
      else if ((iVar8 == -0x444088a9) && (iVar3 = 0x4a791867, *param_2 != '\0')) {
        iVar3 = -0x5995de08;
      }
      goto LAB_001b6780;
    }
    if (iVar8 < -0x158d967d) {
      if (iVar8 == -0x2c05cc2e) {
        puVar4 = auStack_70;
        uVar9 = DAT_00202f98 ^ 0xf28caa18;
LAB_001b6adc:
        (*(code *)(&PTR_FUN_002026b0)[(int)uVar9])(puVar4);
        iVar3 = -0x69cd7749;
      }
      else if (iVar8 == -0x2a047d32) {
        DAT_00204bf0 = '\x01';
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0d)])(auStack_88,&uStack_89);
        uVar5 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0c)])(auStack_88);
        uVar7 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa03)])
                          (uVar5,&DAT_00204bf8);
        iVar3 = -0x47a428ef;
        if ((uVar7 & 1) == 0) {
          iVar3 = 0x33c5475e;
        }
      }
    }
    else {
      if (iVar8 == -0x158d967d) {
        puVar4 = auStack_a8;
        uVar9 = DAT_00202f98 ^ 0xf28caa01;
        goto LAB_001b6ba4;
      }
      iVar3 = -0x158d967d;
      if ((iVar8 != -0xe202788) && (iVar3 = iVar8, iVar8 == 0x9e0dc54)) {
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
        iVar3 = -0xe202788;
      }
    }
  } while( true );
}


