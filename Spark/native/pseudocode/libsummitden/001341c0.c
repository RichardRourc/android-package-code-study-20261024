// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001341c0; body: [[001341c0, 00135027]]

void FUN_001341c0(undefined1 *param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  code *pcVar12;
  int iVar13;
  ulong unaff_x22;
  int unaff_w23;
  undefined1 auVar14 [16];
  undefined4 local_21c;
  ulong local_218;
  undefined8 local_208;
  code *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined8 local_128;
  undefined1 auStack_120 [24];
  undefined8 local_108;
  undefined1 auStack_100 [28];
  byte local_e4 [4];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  long local_98 [4];
  undefined1 local_78 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pcVar12 = (code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37199)];
  iVar3 = 0x639d96f1;
  local_1f8 = pcVar12;
LAB_00134284:
  do {
    while (iVar13 = iVar3, iVar3 = iVar13, iVar13 < 0x442d716b) {
      if (iVar13 < -0x1020798e) {
        if (iVar13 < -0x70318444) {
          if (iVar13 == -0x7c885dd2) {
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(auStack_120);
            iVar3 = 0x442d716b;
            if (unaff_w23 != 0) {
LAB_00134268:
              (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(auStack_100);
              iVar3 = 0x67154bc3;
            }
          }
          else if (iVar13 == -0x73f59335) {
            uVar11 = DAT_001fbb18 ^ 0xdcc37198;
            puVar6 = param_1;
LAB_00134f9c:
            (*(code *)(&PTR_FUN_001faed0)[(int)uVar11])(puVar6);
            unaff_w23 = 1;
            iVar3 = 0x33505020;
          }
          else if (iVar13 == -0x7238ab92) {
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3718e)])
                      (auStack_188,auStack_158,auStack_170,auStack_b0);
            lVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(auStack_188);
            iVar3 = -0x4a2a4860;
            if (lVar5 != 0x20) {
              iVar3 = -0x73f59335;
            }
          }
        }
        else if (iVar13 < -0x4e9b4436) {
          iVar3 = 0x442d716b;
          if ((iVar13 != -0x70318444) && (iVar3 = iVar13, iVar13 == -0x5f27b943)) {
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37198)])(param_1);
            unaff_w23 = 1;
            iVar3 = 0x64f32f8f;
          }
        }
        else if (iVar13 == -0x4e9b4436) {
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719a)])(auStack_c8,1);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719a)])(auStack_e0,1);
          lVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(auStack_c8);
          iVar3 = -0x1020798e;
          if (lVar5 != 1) {
            iVar3 = 0x186e825c;
          }
        }
        else if (iVar13 == -0x4a2a4860) {
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3718c)])(auStack_158);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37181)])
                    (auStack_1a0,auStack_100,auStack_170,auStack_b0);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719e)])(auStack_1b8);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37191)])(auStack_1b8,0x10);
          local_98[0]._0_1_ = 0x31;
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37180)])(auStack_1b8,local_98);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37183)])(auStack_1b8,local_e4);
          local_98[0]._0_1_ = 0;
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37180)])(auStack_1b8,local_98);
          local_98[0] = (ulong)local_98[0]._1_7_ << 8;
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37180)])(auStack_1b8,local_98);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37182)])(auStack_1b8,local_208);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37190)])(auStack_1b8,local_21c);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719e)])(auStack_1d0);
          lVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(auStack_1a0);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37191)])(auStack_1d0,lVar5 + 0x2c)
          ;
          local_98[0] = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37193)])
                                  (auStack_1d0);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37192)])(&local_1d8,local_98);
          uVar8 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37196)])(auStack_b0);
          uVar9 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37193)])(auStack_b0);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37189)])
                    (auStack_1d0,local_1d8,uVar8,uVar9);
          local_1f8 = (code *)0x0;
          iVar3 = 0x6a7a6d34;
        }
      }
      else if (iVar13 < 0x1256a0fc) {
        if (iVar13 == -0x1020798e) {
          lVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(auStack_e0);
          iVar3 = 0x71cb4fbc;
          if (lVar5 != 1) {
            iVar3 = 0x186e825c;
          }
        }
        else if (iVar13 == -0xe97930c) {
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37198)])(param_1);
          unaff_w23 = 1;
          iVar3 = -0x7c885dd2;
        }
        else if (iVar13 == -0xa698aec) {
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719a)])(auStack_120,unaff_x22);
          uVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(auStack_120);
          iVar3 = 0x634f5c5b;
          if (uVar4 != unaff_x22) {
            iVar3 = -0xe97930c;
          }
        }
      }
      else if (iVar13 < 0x33505020) {
        if (iVar13 == 0x1256a0fc) {
          unaff_w23 = 2;
          iVar3 = 0x4bd5004d;
        }
        else if (iVar13 == 0x186e825c) {
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37198)])(param_1);
          unaff_w23 = 1;
          iVar3 = 0x67154bc3;
        }
      }
      else if (iVar13 == 0x33505020) {
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(auStack_188);
        iVar3 = 0x64f32f8f;
      }
      else if (iVar13 == 0x43c66bfa) {
        uVar11 = DAT_001fbb18 ^ 0xdcc37198;
        puVar6 = param_1;
LAB_00134aa0:
        (*(code *)(&PTR_FUN_001faed0)[(int)uVar11])(puVar6);
        iVar3 = 0x7bcd06f1;
      }
    }
    iVar10 = (int)local_1f8;
    if (iVar13 < 0x634f5c5b) {
      if (iVar13 < 0x4c19ab62) {
        if (iVar13 == 0x442d716b) {
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3718b)])(auStack_140);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3718a)])
                    (auStack_158,auStack_140,local_e4[0]);
          auVar14 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3718d)])
                              (auStack_140,auStack_b0);
          local_78 = auVar14;
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3718c)])(auStack_140);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3718f)])
                    (auStack_170,auStack_158,auStack_b0,local_208,local_218 & 0xffffffff,local_e4[0]
                    );
          lVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(auStack_170);
          local_21c = (undefined4)local_218;
          iVar3 = -0x7238ab92;
          if (lVar5 != 0x20) {
            iVar3 = -0x5f27b943;
          }
        }
        else {
          if (iVar13 == 0x470668ef) goto LAB_00134268;
          if (iVar13 == 0x4bd5004d) {
            local_98[0] = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37193)])
                                    (auStack_1d0);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37192)])(&local_1e0,local_98);
            uVar8 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37196)])(auStack_1a0);
            uVar9 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37193)])(auStack_1a0);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37189)])
                      (auStack_1d0,local_1e0,uVar8,uVar9);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37184)])
                      (local_98,auStack_188,auStack_1d0);
            local_1f0 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37193)])
                                  (auStack_1d0);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37192)])(&local_1e8,&local_1f0);
            uVar8 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37187)])(local_98);
            lVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37187)])(local_98);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37186)])
                      (auStack_1d0,local_1e8,uVar8,lVar5 + 0x10);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371b9)])(param_1,auStack_1d0);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(auStack_1d0);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(auStack_1b8);
            uVar11 = DAT_001fbb18 ^ 0xdcc37188;
            puVar6 = auStack_1a0;
            goto LAB_00134f9c;
          }
        }
      }
      else if (iVar13 < 0x5072a7f6) {
        if (iVar13 == 0x4c19ab62) {
          pbVar7 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719c)])
                                     (auStack_1b8,(long)iVar10);
          bVar1 = *pbVar7;
          pbVar7 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37185)])
                                     (local_78,(long)iVar10);
          local_98[0] = CONCAT71(local_98[0]._1_7_,*pbVar7 ^ bVar1);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37180)])(auStack_1d0,local_98);
          iVar3 = 0x4d7012f5;
        }
        else if (iVar13 == 0x4d7012f5) {
          local_1f8 = (code *)(ulong)(iVar10 + 1);
          iVar3 = 0x6a7a6d34;
        }
      }
      else if (iVar13 == 0x5072a7f6) {
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37198)])(param_1);
        unaff_w23 = 1;
        iVar3 = 0x6c5adb1b;
      }
      else if (iVar13 == 0x55e456a2) {
        local_208 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719b)])();
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719a)])(auStack_b0,0xc);
        lVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(auStack_b0);
        iVar3 = -0x4e9b4436;
        if (lVar5 != 0xc) {
          iVar3 = 0x5072a7f6;
        }
      }
      goto LAB_00134284;
    }
    if (iVar13 < 0x6a7a6d34) {
      if (iVar13 < 0x64f32f8f) {
        if (iVar13 == 0x634f5c5b) {
          local_98[0] = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37193)])
                                  (auStack_100);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37192)])(&local_128,local_98);
          uVar8 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37196)])(auStack_120);
          uVar9 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37193)])(auStack_120);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37189)])
                    (auStack_100,local_128,uVar8,uVar9);
          unaff_w23 = 0;
          iVar3 = -0x7c885dd2;
        }
        else if (iVar13 == 0x639d96f1) {
          uVar4 = (*pcVar12)(param_2);
          iVar3 = 0x43c66bfa;
          if ((uVar4 & 1) == 0) {
            iVar3 = 0x55e456a2;
          }
        }
      }
      else if (iVar13 == 0x64f32f8f) {
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(auStack_170);
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(auStack_158);
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(auStack_140);
        iVar3 = 0x470668ef;
      }
      else if (iVar13 == 0x67154bc3) {
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(auStack_e0);
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37188)])(auStack_c8);
        iVar3 = 0x6c5adb1b;
      }
    }
    else if (iVar13 < 0x71cb4fbc) {
      if (iVar13 == 0x6a7a6d34) {
        iVar3 = 0x4c19ab62;
        if (0xf < iVar10) {
          iVar3 = 0x1256a0fc;
        }
      }
      else if (iVar13 == 0x6c5adb1b) {
        uVar11 = DAT_001fbb18 ^ 0xdcc37188;
        puVar6 = auStack_b0;
        goto LAB_00134aa0;
      }
    }
    else if (iVar13 == 0x71cb4fbc) {
      pbVar7 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719c)])
                                 (auStack_c8,0);
      local_e4[0] = *pbVar7 & 0xf;
      pbVar7 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719c)])
                                 (auStack_e0,0);
      bVar1 = *pbVar7;
      uVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719f)])(param_2);
      unaff_x22 = (ulong)(0xc - (int)uVar4) & 0xf | ((ulong)bVar1 & 3) << 4;
      local_218 = uVar4 + unaff_x22 + 4;
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719e)])(auStack_100);
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37191)])(auStack_100,local_218);
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37190)])
                (auStack_100,uVar4 & 0xffffffff);
      local_98[0] = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37193)])(auStack_100);
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37192)])(&local_108,local_98);
      uVar8 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37195)])(param_2);
      uVar9 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37194)])(param_2);
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37197)])
                (auStack_100,local_108,uVar8,uVar9);
      iVar3 = 0x442d716b;
      if (unaff_x22 != 0) {
        iVar3 = -0xa698aec;
      }
    }
    else if (iVar13 == 0x7bcd06f1) {
      if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


