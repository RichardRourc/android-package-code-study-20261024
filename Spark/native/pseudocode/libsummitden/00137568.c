// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00137568; body: [[00137568, 0013849f]]

void FUN_00137568(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  undefined1 *puVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  code *pcVar16;
  int iVar17;
  int iVar18;
  int unaff_w22;
  undefined1 auVar19 [16];
  ulong local_1d8;
  undefined8 local_1d0;
  code *local_1c0;
  uint local_1b4;
  code *local_1b0;
  ulong local_1a8;
  code *local_1a0;
  undefined8 local_198;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined8 local_160;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 local_e0 [3];
  undefined1 auStack_c8 [28];
  char local_ac [4];
  undefined1 auStack_a8 [32];
  byte local_88 [4];
  byte abStack_84 [8];
  uint local_7c;
  undefined1 local_78 [16];
  long local_68;
  
  local_1d0 = 0;
  local_1d8 = 0;
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pcVar16 = (code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37199)];
  iVar18 = 0xfb31b97;
  local_1b0 = pcVar16;
  local_1a0 = pcVar16;
LAB_00137610:
  while (iVar17 = iVar18, iVar15 = (int)local_1a0, iVar18 = iVar17, 0x3a47136 < iVar17) {
    if (iVar17 < 0x3e90d347) {
      if (iVar17 < 0x19227cc2) {
        if (iVar17 < 0xce3276e) {
          if (iVar17 == 0x3a47137) {
            local_e0[0] = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37196)])
                                    (auStack_190);
            uVar10 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c7)])(local_e0,4);
            local_198 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37196)])
                                  (auStack_190);
            local_160 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c7)])
                                  (&local_198,4);
            uVar11 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c7)])
                               (&local_160,local_1d8);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371f8)])(param_1,uVar10,uVar11);
            iVar18 = 0x405d7034;
          }
          else if (iVar17 == 0x5ec4a8e) {
            puVar7 = (undefined1 *)
                     (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719c)])(auStack_190,0)
            ;
            uVar1 = *puVar7;
            puVar7 = (undefined1 *)
                     (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719c)])(auStack_190,1)
            ;
            uVar2 = *puVar7;
            puVar7 = (undefined1 *)
                     (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719c)])(auStack_190,2)
            ;
            uVar3 = *puVar7;
            puVar7 = (undefined1 *)
                     (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719c)])(auStack_190,3)
            ;
            local_1d8 = (ulong)CONCAT13(*puVar7,CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
            lVar8 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(auStack_190);
            iVar18 = 0x7febcf5e;
            if (local_1d8 <= lVar8 - 4U) {
              iVar18 = 0x3a47137;
            }
          }
        }
        else if (iVar17 == 0xce3276e) {
          unaff_w22 = 0;
          local_1a8 = 0;
          iVar18 = -0x20ce3de4;
        }
        else if (iVar17 == 0xfb31b97) {
          uVar12 = (*pcVar16)(param_2);
          bVar6 = (uVar12 & 1) == 0;
          iVar15 = 0x2db26b8;
          iVar18 = 0x67eb10b5;
LAB_001383dc:
          if (bVar6) {
            iVar18 = iVar15;
          }
        }
        else if (iVar17 == 0x15fdd7e2) {
          iVar18 = -0x3c359eb6;
          if ((int)local_1d0 != 0) {
            iVar18 = 0x3ccd1bf1;
          }
        }
      }
      else if (iVar17 < 0x246cd32b) {
        if (iVar17 == 0x19227cc2) {
          iVar18 = -0x771608bb;
        }
        else if (iVar17 == 0x1c97c7c4) {
          unaff_w22 = unaff_w22 + 1;
          iVar18 = -0x20ce3de4;
        }
        else if (iVar17 == 0x244ba6df) {
          uVar14 = DAT_001fbb18 ^ 0xdcc37198;
          puVar7 = param_1;
LAB_00137834:
          (*(code *)(&PTR_FUN_001faed0)[(int)uVar14])(puVar7);
          iVar18 = -0x181d5d73;
        }
      }
      else if (iVar17 == 0x246cd32b) {
        iVar18 = 0x15fdd7e2;
        if (local_1d0._4_4_ != 0) {
          iVar18 = 0x3ccd1bf1;
        }
      }
      else if (iVar17 == 0x25927ba8) {
        local_1a0 = (code *)(ulong)(iVar15 + 1);
        iVar18 = -0x47ad2955;
      }
      else if (iVar17 == 0x3ccd1bf1) {
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3718c)])(auStack_110);
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37198)])(param_1);
        iVar18 = 0x3e90d347;
      }
    }
    else if (iVar17 < 0x563c7ef7) {
      if (iVar17 < 0x41c2ecd6) {
        if (iVar17 == 0x3e90d347) {
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(auStack_110);
          puVar7 = auStack_f8;
          uVar14 = DAT_001fbb18 ^ 0xdcc37188;
          goto LAB_00137ed0;
        }
        if (iVar17 == 0x405d7034) {
          iVar18 = 0x5427cd80;
        }
      }
      else if (iVar17 == 0x41c2ecd6) {
        iVar18 = -0x353eb3d8;
      }
      else {
        iVar18 = 0x3e90d347;
        if ((iVar17 != 0x5238f936) && (iVar18 = iVar17, iVar17 == 0x5427cd80)) {
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(auStack_190);
          puVar7 = auStack_178;
          uVar14 = DAT_001fbb18 ^ 0xdcc37188;
          goto LAB_00137834;
        }
      }
    }
    else if (iVar17 < 0x6c4214c4) {
      if (iVar17 == 0x563c7ef7) {
        uVar10 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37196)])(auStack_c8);
        local_e0[0] = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37196)])(auStack_c8);
        uVar11 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c7)])(local_e0,0xc);
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c6)])(auStack_f8,uVar10,uVar11);
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3718b)])(auStack_110);
        auVar19 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3718d)])
                            (auStack_110,auStack_f8);
        local_1a0 = (code *)0x0;
        local_78 = auVar19;
        iVar18 = -0x47ad2955;
      }
      else if (iVar17 == 0x5d017a0f) {
        uVar14 = DAT_001fbb18 ^ 0xdcc37198;
        puVar7 = param_1;
LAB_00137ed0:
        (*(code *)(&PTR_FUN_001faed0)[(int)uVar14])(puVar7);
        iVar18 = -0x4c221ab5;
      }
      else if (iVar17 == 0x67eb10b5) {
        uVar14 = DAT_001fbb18 ^ 0xdcc37198;
        puVar7 = param_1;
        goto LAB_00137898;
      }
    }
    else if (iVar17 == 0x6c4214c4) {
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3718e)])
                (auStack_158,auStack_128,auStack_140,auStack_f8);
      lVar8 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(auStack_158);
      iVar18 = -0x5c85249e;
      if (lVar8 != 0x20) {
        iVar18 = -0x67ea4816;
      }
    }
    else if (iVar17 == 0x7febcf5e) {
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37198)])(param_1);
      iVar18 = 0x405d7034;
    }
    else if (iVar17 == 0x6e8f4851) {
      if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  if (iVar17 < -0x4b251cdb) {
    if (iVar17 < -0x6a4b21f1) {
      if (iVar17 < -0x771608bb) {
        if (iVar17 == -0x7ef24d40) {
          local_e0[0] = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37196)])(auStack_c8)
          ;
          uVar10 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c7)])(local_e0,0x1c);
          local_160 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37196)])(auStack_c8);
          uVar11 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c7)])
                             (&local_160,local_1c0);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c6)])
                    (auStack_178,uVar10,uVar11);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37181)])
                    (auStack_190,auStack_178,auStack_140,auStack_f8);
          uVar12 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(auStack_190);
          iVar18 = -0x6a4b21f1;
          if (3 < uVar12) {
            iVar18 = 0x5ec4a8e;
          }
        }
        else if (iVar17 == -0x77c0c63a) {
          local_1c0 = local_1b0 + 0x1c;
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3718a)])
                    (auStack_128,auStack_110,local_1b4);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3718c)])(auStack_110);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3718f)])
                    (auStack_140,auStack_128,auStack_f8,local_1a8,(ulong)local_1b0 & 0xffffffff,
                     local_1b4);
          lVar8 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(auStack_140);
          iVar18 = 0x6c4214c4;
          if (lVar8 != 0x20) {
            iVar18 = -0x4510bd1b;
          }
        }
      }
      else if (iVar17 == -0x771608bb) {
        local_1b4 = (uint)local_88[1];
        local_1d0 = (ulong)CONCAT14(local_88[2],(uint)local_88[3]);
        iVar18 = 0x246cd32b;
        if (local_88[0] != 0x31) {
          iVar18 = 0x3ccd1bf1;
        }
      }
      else if (iVar17 == -0x7712830a) {
        lVar8 = (long)iVar15;
        pbVar9 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719c)])
                                   (auStack_c8,lVar8 + 0xc);
        bVar4 = *pbVar9;
        pbVar9 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37185)])
                                   (local_78,lVar8);
        local_88[lVar8] = *pbVar9 ^ bVar4;
        iVar18 = 0x25927ba8;
      }
      else if (iVar17 == -0x70682774) {
        puVar7 = auStack_158;
        uVar14 = DAT_001fbb18 ^ 0xdcc37188;
LAB_00137eac:
        (*(code *)(&PTR_FUN_001faed0)[(int)uVar14])(puVar7);
        iVar18 = -0x295654a2;
      }
    }
    else if (iVar17 < -0x5ea7f5de) {
      if (iVar17 == -0x6a4b21f1) {
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37198)])(param_1);
        iVar18 = 0x5427cd80;
      }
      else if (iVar17 == -0x67ea4816) {
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37198)])(param_1);
        iVar18 = -0x70682774;
      }
    }
    else if (iVar17 == -0x5ea7f5de) {
      local_1a8 = (ulong)abStack_84[unaff_w22] << ((ulong)(uint)(unaff_w22 << 3) & 0x3f) | local_1a8
      ;
      iVar18 = 0x1c97c7c4;
    }
    else if (iVar17 == -0x5c85249e) {
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3718c)])(auStack_128);
      uVar10 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37196)])(auStack_c8);
      local_160 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37196)])(auStack_c8);
      uVar11 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c7)])
                         (&local_160,local_1c0);
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c6)])(local_e0,uVar10,uVar11);
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37184)])
                (auStack_a8,auStack_158,local_e0);
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(local_e0);
      uVar10 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c8)])(auStack_a8);
      lVar8 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371bf)])(auStack_c8);
      uVar12 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371f9)])
                         (uVar10,local_1c0 + lVar8);
      iVar18 = -0x7ef24d40;
      if ((uVar12 & 1) == 0) {
        iVar18 = 0x244ba6df;
      }
    }
    else if (iVar17 == -0x4c221ab5) {
      puVar7 = auStack_c8;
      uVar14 = DAT_001fbb18 ^ 0xdcc37188;
LAB_00137898:
      (*(code *)(&PTR_FUN_001faed0)[(int)uVar14])(puVar7);
      iVar18 = 0x6e8f4851;
    }
    goto LAB_00137610;
  }
  if (iVar17 < -0x359b37be) {
    if (iVar17 < -0x4510bd1b) {
      if (iVar17 == -0x4b251cdb) {
        uVar12 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(auStack_c8);
        iVar18 = 0x5d017a0f;
        if (0x2b < uVar12) {
          iVar18 = 0x563c7ef7;
        }
      }
      else if (iVar17 == -0x47ad2955) {
        iVar18 = -0x7712830a;
        if (0xf < iVar15) {
          iVar18 = 0x19227cc2;
        }
      }
      goto LAB_00137610;
    }
    if (iVar17 == -0x4510bd1b) {
      uVar14 = DAT_001fbb18 ^ 0xdcc37198;
      puVar7 = param_1;
      goto LAB_00137eac;
    }
    if (iVar17 != -0x3cefc232) {
      if (iVar17 == -0x3c359eb6) {
        iVar18 = 0x3ccd1bf1;
        if ((local_1b4 & 0xf0) == 0) {
          iVar18 = 0xce3276e;
        }
      }
      goto LAB_00137610;
    }
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3718c)])(auStack_110);
    uVar14 = DAT_001fbb18 ^ 0xdcc37198;
    puVar7 = param_1;
  }
  else {
    if (-0x20ce3de5 < iVar17) {
      if (iVar17 == -0x20ce3de4) {
        iVar18 = -0x5ea7f5de;
        if (7 < unaff_w22) {
          iVar18 = 0x41c2ecd6;
        }
      }
      else if (iVar17 == -0x181d5d73) {
        iVar18 = -0x70682774;
      }
      else if (iVar17 == 0x2db26b8) {
        local_ac[0] = '\0';
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c5)])(local_e0,param_2);
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c4)])
                  (auStack_c8,local_e0,local_ac);
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c2)])(local_e0);
        iVar18 = -0x4b251cdb;
        bVar6 = local_ac[0] == '\0';
        iVar15 = 0x5d017a0f;
        goto LAB_001383dc;
      }
      goto LAB_00137610;
    }
    if (iVar17 == -0x359b37be) {
      pcVar13 = (code *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(auStack_c8)
      ;
      iVar18 = -0x77c0c63a;
      if (local_1b0 + 0x2c != pcVar13) {
        iVar18 = -0x3cefc232;
      }
      goto LAB_00137610;
    }
    if (iVar17 == -0x353eb3d8) {
      local_1b0 = (code *)(ulong)local_7c;
      pcVar13 = (code *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(auStack_c8)
      ;
      iVar18 = -0x3cefc232;
      if (local_1b0 <= pcVar13) {
        iVar18 = -0x359b37be;
      }
      goto LAB_00137610;
    }
    if (iVar17 != -0x295654a2) goto LAB_00137610;
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(auStack_140);
    uVar14 = DAT_001fbb18 ^ 0xdcc37188;
    puVar7 = auStack_128;
  }
  (*(code *)(&PTR_FUN_001faed0)[(int)uVar14])(puVar7);
  iVar18 = 0x5238f936;
  goto LAB_00137610;
}


