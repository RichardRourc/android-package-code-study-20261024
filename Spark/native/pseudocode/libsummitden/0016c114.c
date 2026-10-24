// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016c114; body: [[0016c114, 0016c80f]]

ulong FUN_0016c114(ulong param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  uint unaff_w23;
  ulong local_98;
  undefined1 auStack_90 [24];
  ulong local_78;
  ulong local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_78 = param_2;
  local_70 = param_1;
  uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_70);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aad)])(auStack_90,uVar4);
  lVar9 = local_78 - 0x18;
  pcVar7 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)];
  iVar8 = 0x25669cea;
LAB_0016c228:
  do {
    while (iVar6 = iVar8, iVar8 = iVar6, iVar6 < 0x32c572d9) {
      if (iVar6 < -0x14a0c006) {
        if (iVar6 < -0x477ffbfe) {
          if (iVar6 == -0x73edee32) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&local_70,&local_78);
            iVar8 = -0x344d39c9;
          }
          else if (iVar6 == -0x610ac62c) {
            local_78 = local_78 - 0x18;
            iVar8 = 0x56c7f6f8;
          }
          else if (iVar6 == -0x56b9c8e2) {
            iVar8 = 0x7e8cd3c7;
          }
        }
        else if (iVar6 < -0x25bb2144) {
          if (iVar6 == -0x477ffbfe) {
            iVar8 = 0x125a0f86;
            if (local_78 <= local_70) {
              iVar8 = 0x7e8cd3c7;
            }
          }
          else if (iVar6 == -0x344d39c9) {
            local_70 = local_70 + 0x18;
            iVar8 = 0x33c80c6c;
          }
        }
        else if (iVar6 == -0x25bb2144) {
LAB_0016c568:
          iVar8 = -0x477ffbfe;
        }
        else if (iVar6 == -0x215b4489) goto LAB_0016c4e8;
      }
      else if (iVar6 < 0x15e3715f) {
        if (iVar6 == -0x14a0c006) {
          iVar8 = -0x73edee32;
          if (local_78 <= local_70) {
            iVar8 = 0x15e3715f;
          }
        }
        else if (iVar6 == -0x125bb0b9) {
LAB_0016c220:
          iVar8 = -0x14a0c006;
        }
        else if (iVar6 == 0x125a0f86) {
          iVar8 = -0x610ac62c;
        }
      }
      else if (iVar6 < 0x2e241267) {
        if (iVar6 == 0x15e3715f) {
          local_98 = local_70 - 0x18;
          iVar8 = 0x3c56ce2f;
          if (param_1 != local_98) {
            iVar8 = 0x2e843f50;
          }
        }
        else if (iVar6 == 0x25669cea) {
          uVar5 = (*pcVar7)(param_3,auStack_90,lVar9);
          bVar2 = (uVar5 & 1) == 0;
          iVar6 = 0x54232926;
          iVar8 = 0x2e241267;
LAB_0016c6e4:
          if (bVar2) {
            iVar8 = iVar6;
          }
        }
      }
      else {
        iVar8 = 0x32c572d9;
        if ((iVar6 != 0x2e241267) && (iVar8 = iVar6, iVar6 == 0x2e843f50)) {
          uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_98);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(param_1,uVar4);
          iVar8 = 0x3c56ce2f;
        }
      }
    }
    if (iVar6 < 0x54232926) {
      if (iVar6 < 0x3c56ce2f) {
        if (iVar6 == 0x32c572d9) {
          local_70 = local_70 + 0x18;
          iVar8 = 0x5d181cd3;
        }
        else {
          if (iVar6 == 0x33c80c6c) {
            uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                              (param_3,auStack_90,local_70);
            bVar2 = (uVar5 & 1) == 0;
            iVar6 = -0x344d39c9;
            iVar8 = 0x3505cf6a;
            goto LAB_0016c6e4;
          }
          if (iVar6 == 0x3505cf6a) {
            iVar8 = 0x64067595;
          }
        }
      }
      else if (iVar6 < 0x472fab4b) {
        if (iVar6 == 0x3dc5caa9) {
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                            (param_3,auStack_90,local_78);
          iVar8 = 0x64067595;
          if ((uVar5 & 1) == 0) {
            iVar8 = -0x125bb0b9;
          }
        }
        else if (iVar6 == 0x3c56ce2f) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(local_98,auStack_90);
          uVar5 = local_70;
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_90);
          if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return uVar5;
        }
      }
      else if (iVar6 == 0x472fab4b) {
        uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                          (param_3,auStack_90,local_70);
        unaff_w23 = uVar3 ^ 1;
        iVar8 = 0x4c06ce9a;
      }
      else if (iVar6 == 0x4c06ce9a) {
        iVar8 = -0x215b4489;
        if ((unaff_w23 & 1) == 0) {
          iVar8 = 0x616a35c0;
        }
      }
      goto LAB_0016c228;
    }
    if (iVar6 < 0x5de44299) {
      if (iVar6 == 0x54232926) {
LAB_0016c4e8:
        iVar8 = 0x5de44299;
      }
      else if (iVar6 == 0x56c7f6f8) {
        uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                          (param_3,auStack_90,local_78);
        iVar8 = -0x610ac62c;
        if ((uVar5 & 1) == 0) {
          iVar8 = -0x56b9c8e2;
        }
      }
      else if (iVar6 == 0x5d181cd3) {
        uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                          (param_3,auStack_90,local_70);
        bVar2 = (uVar5 & 1) == 0;
        iVar6 = 0x32c572d9;
        iVar8 = -0x25bb2144;
        goto LAB_0016c6e4;
      }
    }
    else if (iVar6 < 0x64067595) {
      if (iVar6 == 0x5de44299) {
        unaff_w23 = 0;
        local_70 = local_70 + 0x18;
        iVar8 = 0x472fab4b;
        if (local_78 <= local_70) {
          iVar8 = 0x4c06ce9a;
        }
      }
      else if (iVar6 == 0x616a35c0) goto LAB_0016c568;
    }
    else if (iVar6 == 0x64067595) {
      local_78 = local_78 - 0x18;
      iVar8 = 0x3dc5caa9;
    }
    else if (iVar6 == 0x7e8cd3c7) goto LAB_0016c220;
  } while( true );
}


