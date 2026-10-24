// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015b7bc; body: [[0015b7bc, 0015c687]]

void FUN_0015b7bc(undefined8 param_1,undefined1 *param_2)

{
  long lVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int unaff_w21;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  byte local_12c;
  undefined1 *local_128;
  byte local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  ulong *local_a8;
  ulong *puStack_a0;
  undefined1 *local_98;
  ulong local_90;
  ulong uStack_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa3)])(auStack_80);
  uStack_88 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad9)])(param_2);
  local_a8 = &local_90;
  puStack_a0 = &uStack_88;
  local_90 = 0;
  iVar9 = -0x338efef8;
  local_98 = param_2;
LAB_0015b894:
  iVar8 = iVar9;
  iVar9 = iVar8;
  if (iVar8 < -0x6854aa4) {
    if (iVar8 < -0x43d6d02d) {
      if (iVar8 < -0x62eebebe) {
        if (-0x67e179a8 < iVar8) {
          if (iVar8 < -0x64240d84) {
            iVar9 = -0xe767f88;
            if ((iVar8 != -0x67e179a7) && (iVar9 = iVar8, iVar8 == -0x67d11677)) {
              pcVar3 = (char *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa0)])
                                         (param_2,local_90);
              iVar9 = 0x4ecfcd8f;
              if (*pcVar3 != ':') {
                iVar9 = 0x49463a0f;
              }
            }
          }
          else if (iVar8 == -0x64240d84) {
            unaff_w21 = 0;
            iVar9 = -0x690564f5;
          }
          else if (iVar8 == -0x6361b0e5) {
            iVar9 = -0xe767f88;
          }
          goto LAB_0015b894;
        }
        if (iVar8 == -0x7ecbb4ec) {
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af1)])(auStack_108);
          iVar9 = 0x71b1a5c2;
          if ((uVar5 & 1) == 0) {
            iVar9 = -0x6854aa4;
          }
          goto LAB_0015b894;
        }
        iVar9 = -0x15b2854d;
        if ((iVar8 == -0x7afdabe4) || (iVar9 = iVar8, iVar8 != -0x690564f5)) goto LAB_0015b894;
      }
      else {
        if (iVar8 < -0x55317393) {
          if (iVar8 == -0x62eebebe) {
            uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52abb)])(auStack_80);
            uVar7 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ab8)])(auStack_80);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ab9)])(uVar6,uVar7);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(auStack_108);
            local_110 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52abb)])(auStack_80)
            ;
            local_118 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ab8)])(auStack_80)
            ;
            iVar9 = -0x53481634;
          }
          else {
            if (iVar8 == -0x5fd0ddaa) goto LAB_0015c148;
            if (iVar8 == -0x5c6b6e5e) {
              lVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52abf)])(&local_110);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52abc)])
                        (auStack_108,lVar4 + 0x18);
              iVar9 = 0x6d864d54;
            }
          }
          goto LAB_0015b894;
        }
        if (-0x5011ac0e < iVar8) {
          if (iVar8 == -0x5011ac0d) {
            unaff_w21 = 5;
            iVar9 = -0x55317393;
          }
          else if (iVar8 == -0x4c7cb7a6) {
            local_11c = 0;
            bVar2 = uStack_88 <= local_90;
            iVar8 = 0x4719c761;
            iVar9 = 0x4e43bbd3;
            goto LAB_0015b890;
          }
          goto LAB_0015b894;
        }
        if (iVar8 != -0x55317393) {
          if (iVar8 == -0x53481634) {
            uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52abe)])
                              (&local_110,&local_118);
            iVar9 = -0x5c6b6e5e;
            if ((uVar5 & 1) == 0) {
              iVar9 = -0x29ddf078;
            }
          }
          goto LAB_0015b894;
        }
        iVar9 = -0x15b2854d;
        if (unaff_w21 == 0) goto LAB_0015b894;
      }
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_c0);
      iVar9 = 0x13402416;
      goto LAB_0015b894;
    }
    if (iVar8 < -0x29ddf078) {
      if (iVar8 < -0x338efef8) {
        if (iVar8 == -0x43d6d02d) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac7)])(auStack_f0,auStack_c0);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa7)])
                    (auStack_d8,param_2,local_140,local_150 - local_140);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa4)])(auStack_80,auStack_f0);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa5)])(auStack_f0);
          local_90 = local_150 + 1;
          unaff_w21 = 0;
          iVar9 = -0x55317393;
          goto LAB_0015b894;
        }
        if (iVar8 == -0x427d9980) {
          local_90 = local_90 + 1;
          iVar9 = -0x4c7cb7a6;
          goto LAB_0015b894;
        }
        if (iVar8 != -0x3fb7b8e8) goto LAB_0015b894;
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa1)])(&local_a8);
        bVar2 = uStack_88 <= local_90;
        iVar8 = 0x6447394f;
        iVar9 = 0x56710fdf;
      }
      else {
        if (-0x2e6a33fa < iVar8) {
          if (iVar8 == -0x2e6a33f9) {
            pcVar3 = (char *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa0)])
                                       (param_2,local_90);
            local_12c = *pcVar3 != '{';
            iVar9 = 0x76807b8f;
          }
          else if (iVar8 == -0x2e198f3d) {
LAB_0015bfa0:
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac7)])(param_1,param_2);
            goto LAB_0015c128;
          }
          goto LAB_0015b894;
        }
        if (iVar8 != -0x338efef8) {
          if (iVar8 == -0x2f3ccbeb) {
            iVar9 = -0x15b2854d;
          }
          goto LAB_0015b894;
        }
        local_12c = 0;
        bVar2 = uStack_88 <= local_90;
        iVar8 = 0x76807b8f;
        iVar9 = -0x2e6a33f9;
      }
    }
    else if (iVar8 < -0x2110e5ba) {
      if (iVar8 == -0x29ddf078) {
        unaff_w21 = 8;
        iVar9 = -0x7ecbb4ec;
        goto LAB_0015b894;
      }
      if (iVar8 != -0x28378489) {
        if (iVar8 == -0x2121d077) {
          unaff_w21 = 5;
          iVar9 = 0x13402416;
        }
        goto LAB_0015b894;
      }
      bVar2 = uStack_88 <= local_90;
      iVar8 = 0xc951cb9;
      iVar9 = 0x57b9c543;
    }
    else {
      if (-0xf416081 < iVar8) {
        if (iVar8 == -0xf416080) {
          pcVar3 = (char *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa0)])
                                     (param_2,local_90);
          iVar9 = -0x5fd0ddaa;
          if (*pcVar3 != '}') {
            iVar9 = -0x64240d84;
          }
        }
        else if (iVar8 == -0xe767f88) {
LAB_0015c274:
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aba)])(auStack_80);
          iVar9 = -0x2e198f3d;
          if ((uVar5 & 1) == 0) {
            iVar9 = -0x62eebebe;
          }
        }
        goto LAB_0015b894;
      }
      if (iVar8 != -0x2110e5ba) {
        if (iVar8 == -0x15b2854d) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa1)])(&local_a8);
          iVar9 = 0x58541331;
          if (uStack_88 <= local_90) {
            iVar9 = -0x2110e5ba;
          }
        }
        goto LAB_0015b894;
      }
      bVar2 = uStack_88 <= local_90;
      iVar8 = -0x64240d84;
      iVar9 = -0xf416080;
    }
  }
  else {
    if (iVar8 < 0x49463a0f) {
      if (iVar8 < 0x2b810a52) {
        if (iVar8 < 0xc951cb9) {
          if (iVar8 == -0x6854aa4) {
            local_128 = auStack_108;
            iVar9 = 0x787a0d7d;
          }
          else if (iVar8 == 0x3aeb227) {
            pcVar3 = (char *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa0)])
                                       (param_2,local_90);
            iVar9 = 0x99da950;
            if (*pcVar3 != '\"') {
              iVar9 = -0x67e179a7;
            }
          }
          else if (iVar8 == 0x99da950) {
            local_138 = local_90 + 1;
            local_148 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa6)])
                                  (param_2,0x22);
            iVar9 = -0x2121d077;
            if (local_148 != -1) {
              iVar9 = 0x67a47ff2;
            }
          }
        }
        else if (iVar8 < 0x13402416) {
          if (iVar8 == 0xc951cb9) goto LAB_0015bfa0;
          if (iVar8 == 0xfdd62ab) {
            iVar9 = -0x4c7cb7a6;
          }
        }
        else if (iVar8 == 0x13402416) {
          if (unaff_w21 == 5) goto LAB_0015c274;
          iVar9 = 0x4d2045ac;
          if (unaff_w21 != 0) goto LAB_0015c25c;
        }
        else if (iVar8 == 0x18517313) {
          pcVar3 = (char *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa0)])
                                     (param_2,local_90);
          local_11c = *pcVar3 != '}';
          iVar9 = 0x4719c761;
        }
      }
      else if (iVar8 < 0x4181bc51) {
        if (iVar8 < 0x3609bccf) {
          if (iVar8 == 0x2b810a52) {
            local_90 = local_90 + 1;
            iVar9 = -0x338efef8;
          }
          else if (iVar8 == 0x2d60c631) {
            pcVar3 = (char *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa0)])
                                       (param_2,local_90);
            iVar9 = 0x45f07274;
            if (*pcVar3 != '\"') {
              iVar9 = 0xfdd62ab;
            }
          }
        }
        else {
          if (iVar8 == 0x3dee6e57) goto LAB_0015c148;
          if (iVar8 == 0x3609bccf) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ab2)])(auStack_80);
            if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
        }
      }
      else {
        iVar9 = 0x4d2045ac;
        if (iVar8 != 0x4181bc51) {
          if (iVar8 == 0x45f07274) {
            local_140 = local_90 + 1;
            local_150 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa6)])
                                  (param_2,0x22);
            iVar9 = -0x5011ac0d;
            if (local_150 != -1) {
              iVar9 = -0x43d6d02d;
            }
          }
          else {
            iVar9 = iVar8;
            if (iVar8 == 0x4719c761) {
              iVar9 = -0x427d9980;
              if ((local_11c & 1) == 0) {
                iVar9 = -0x7afdabe4;
              }
            }
          }
        }
      }
      goto LAB_0015b894;
    }
    if (iVar8 < 0x6447394f) {
      if (iVar8 < 0x4ecfcd8f) {
        if (iVar8 == 0x49463a0f) {
LAB_0015c148:
          unaff_w21 = 5;
          iVar9 = -0x690564f5;
        }
        else if (iVar8 == 0x4d2045ac) {
LAB_0015c25c:
          iVar9 = -0x3fb7b8e8;
          if (uStack_88 <= local_90) {
            iVar9 = -0xe767f88;
          }
        }
        else if (iVar8 == 0x4e43bbd3) {
          pcVar3 = (char *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa0)])
                                     (param_2,local_90);
          local_11c = 0;
          iVar9 = 0x4719c761;
          if (*pcVar3 != ',') {
            iVar9 = 0x18517313;
          }
        }
      }
      else if (iVar8 < 0x57b9c543) {
        if (iVar8 == 0x4ecfcd8f) {
          local_90 = local_90 + 1;
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa1)])(&local_a8);
          iVar9 = 0x2d60c631;
          if (uStack_88 <= local_90) {
            iVar9 = 0x3dee6e57;
          }
        }
        else if (iVar8 == 0x56710fdf) {
          pcVar3 = (char *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa0)])
                                     (param_2,local_90);
          iVar9 = -0x6361b0e5;
          if (*pcVar3 != '}') {
            iVar9 = 0x6447394f;
          }
        }
      }
      else if (iVar8 == 0x57b9c543) {
        local_90 = local_90 + 1;
        iVar9 = 0x4d2045ac;
      }
      else if (iVar8 == 0x58541331) {
        pcVar3 = (char *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa0)])
                                   (param_2,local_90);
        iVar9 = 0x69aed9a5;
        if (*pcVar3 != ',') {
          iVar9 = -0x2110e5ba;
        }
      }
      goto LAB_0015b894;
    }
    if (0x6d864d53 < iVar8) {
      if (iVar8 < 0x76807b8f) {
        if (iVar8 == 0x6d864d54) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52abd)])(&local_110);
          iVar9 = -0x53481634;
        }
        else if (iVar8 == 0x71b1a5c2) {
          iVar9 = 0x787a0d7d;
          local_128 = param_2;
        }
      }
      else if (iVar8 == 0x76807b8f) {
        iVar9 = 0x2b810a52;
        if ((local_12c & 1) == 0) {
          iVar9 = -0x28378489;
        }
      }
      else if (iVar8 == 0x787a0d7d) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac7)])(param_1,local_128);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_108);
LAB_0015c128:
        unaff_w21 = 1;
        iVar9 = 0x3609bccf;
      }
      goto LAB_0015b894;
    }
    if (iVar8 == 0x6447394f) {
      bVar2 = uStack_88 <= local_90;
      iVar8 = -0x67e179a7;
      iVar9 = 0x3aeb227;
      goto LAB_0015b890;
    }
    if (iVar8 != 0x67a47ff2) {
      if (iVar8 == 0x69aed9a5) {
        unaff_w21 = 4;
        local_90 = local_90 + 1;
        iVar9 = -0x690564f5;
      }
      goto LAB_0015b894;
    }
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa7)])
              (auStack_c0,param_2,local_138,local_148 - local_138);
    local_90 = local_148 + 1;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa1)])(&local_a8);
    bVar2 = uStack_88 <= local_90;
    iVar8 = 0x49463a0f;
    iVar9 = -0x67d11677;
  }
LAB_0015b890:
  if (bVar2) {
    iVar9 = iVar8;
  }
  goto LAB_0015b894;
}


