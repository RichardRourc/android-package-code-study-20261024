// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ac74c; body: [[001ac74c, 001ad8f7]]

void FUN_001ac74c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  undefined *puVar10;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  ulong local_208;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  undefined1 auStack_1d0 [24];
  undefined auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_00201020,0x18,&DAT_00204b58,&DAT_00201020);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])(auStack_80,&DAT_00201020);
  uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_80);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_80);
  iVar1 = 0x7c15202d;
  if ((uVar5 & 1) == 0) {
    iVar1 = -0x1d21f5bf;
  }
  iVar2 = 0x5a064e37;
LAB_001ac8d4:
  iVar9 = iVar2;
  iVar2 = iVar9;
  if (iVar9 < -0x1487ac0b) {
    if (iVar9 < -0x48fef581) {
      if (-0x5bc680bc < iVar9) {
        if (iVar9 < -0x4f44f15e) {
          if (iVar9 == -0x5bc680bb) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_98);
            iVar2 = -0x48fef581;
            if ((local_214 & 1) == 0) {
              iVar2 = -0x27f6cbd3;
            }
          }
          else if (iVar9 == -0x5a87c4c3) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_b0);
            iVar2 = 0x5e3c73d7;
          }
          else if (iVar9 == -0x58445889) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_140);
            iVar2 = -0x427bac6;
            if ((local_21c & 1) == 0) {
              iVar2 = -0x72c8e7ad;
            }
          }
        }
        else if (iVar9 == -0x4f44f15e) {
          iVar2 = -0x4d1b7720;
        }
        else if (iVar9 == -0x4d1b7720) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_f8);
          iVar2 = -0x7f496ca3;
          if ((local_218 & 1) == 0) {
            iVar2 = -0x60049d36;
          }
        }
        else if (iVar9 == -0x4c851e0a) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_110);
          iVar2 = 0x43acbd24;
        }
        goto LAB_001ac8d4;
      }
      if (-0x72c8e7ae < iVar9) {
        if (iVar9 == -0x72c8e7ad) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_001ffa75,0x18,&DAT_002045dc,&DAT_001ffa75);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                    (auStack_1a0,&DAT_001ffa75);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ac)])(auStack_188,auStack_1a0);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_1a0);
          uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_188);
          iVar2 = -0x1fdbef13;
          if ((uVar5 & 1) == 0) {
            iVar2 = 0x28cb1e4;
          }
        }
        else if (iVar9 == -0x6b46b1f9) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_170);
          iVar2 = 0x47057516;
        }
        else if (iVar9 == -0x60049d36) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_002010df,0x17,&DAT_00204b84,&DAT_002010df);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                    (auStack_128,&DAT_002010df);
          uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_128);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_128);
          iVar2 = -0x3888b19f;
          if ((uVar5 & 1) == 0) {
            iVar2 = -0x7daf3e52;
          }
        }
        goto LAB_001ac8d4;
      }
      if (iVar9 == -0x7fe2477d) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_188);
        iVar2 = 0x75465a78;
        goto LAB_001ac8d4;
      }
      if (iVar9 != -0x7f496ca3) {
        if (iVar9 == -0x7daf3e52) {
          puVar10 = &DAT_002010f6;
          puVar6 = &DAT_002010f6;
          uVar7 = 6;
          puVar8 = &DAT_00204b88;
          goto LAB_001ad5c0;
        }
        goto LAB_001ac8d4;
      }
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_002010da,5,&DAT_00204b80,&DAT_002010da);
      puVar10 = &DAT_002010da;
      goto LAB_001ad5e4;
    }
    if (iVar9 < -0x2da39fb2) {
      if (-0x3888b1a0 < iVar9) {
        if (iVar9 == -0x3888b19f) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_002010fc,0x15,&DAT_00204b8c,&DAT_002010fc);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                    (auStack_128,&DAT_002010fc);
          uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_128);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_128);
          iVar2 = 0x2c3a2ac7;
          if ((uVar5 & 1) == 0) {
            iVar2 = 0x6691bfda;
          }
        }
        else if (iVar9 == -0x36c1ec8e) {
          iVar2 = -0x5a87c4c3;
          if ((local_1f4 & 1) == 0) {
            iVar2 = 0x5e3c73d7;
          }
          local_214 = local_1ec;
        }
        else if (iVar9 == -0x348200a5) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_e0);
          iVar2 = -0x2da39fb2;
        }
        goto LAB_001ac8d4;
      }
      if (iVar9 != -0x48fef581) {
        if (iVar9 == -0x3f316bbc) {
          iVar2 = 0x3994252d;
          if ((local_20c & 1) == 0) {
            iVar2 = 0x12146967;
          }
          local_21c = local_1f8;
        }
        else if (iVar9 == -0x3ad0b221) {
          iVar2 = -0x4c851e0a;
          if ((local_200 & 1) == 0) {
            iVar2 = 0x43acbd24;
          }
          local_218 = local_1e0;
        }
        goto LAB_001ac8d4;
      }
      puVar10 = &DAT_0020106e;
      puVar6 = &DAT_0020106e;
      uVar7 = 5;
      puVar8 = &DAT_00204b68;
    }
    else {
      if (iVar9 < -0x1fdbef13) {
        if (iVar9 == -0x2da39fb2) {
          iVar2 = 0x7e307414;
          if ((local_1e8 & 1) == 0) {
            iVar2 = 0x5835c89b;
          }
        }
        else if (iVar9 == -0x2884e150) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_00201150,0x14,&DAT_00204ba0,&DAT_00201150);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                    (auStack_170,&DAT_00201150);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ac)])(auStack_158,auStack_170);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_00201164,6,&DAT_00204ba4,&DAT_00201164);
          local_1f8 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ad)])
                                (auStack_158,&DAT_00201164);
          local_208 = 0x100000001;
          local_20c = 1;
          iVar2 = -0x3f316bbc;
        }
        else if (iVar9 == -0x27f6cbd3) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_00201073,0x19,&DAT_00204b6c,&DAT_00201073);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])(auStack_c8,&DAT_00201073)
          ;
          uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_c8);
          local_1fc = 0;
          iVar2 = 0x5900a5dc;
          if ((uVar5 & 1) == 0) {
            iVar2 = -0x1105f304;
          }
          local_1e8 = 0;
          local_1e4 = 1;
        }
        goto LAB_001ac8d4;
      }
      if (-0x169d7152 < iVar9) {
        if (iVar9 == -0x169d7151) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_002010be,0x1c,&DAT_00204b7c,&DAT_002010be);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                    (auStack_110,&DAT_002010be);
          uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_110);
          local_1f0 = 1;
          local_1e0 = uVar4 ^ 1;
          local_200 = 1;
          iVar2 = -0x3ad0b221;
        }
        else if (iVar9 == -0x15fbcc3c) {
          uVar4 = 0x1873b5e2;
          puVar6 = auStack_1b8;
LAB_001ad3cc:
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ uVar4)])(param_1,puVar6);
          iVar2 = 0x7418ae15;
        }
        goto LAB_001ac8d4;
      }
      if (iVar9 == -0x1fdbef13) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_001ffa14,0x11,&DAT_002045c0,&DAT_001ffa14);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])(auStack_1d0,&DAT_001ffa14);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ac)])(auStack_1b8,auStack_1d0);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_1d0);
        uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_1b8);
        iVar2 = 0x196d0e75;
        if ((uVar5 & 1) == 0) {
          iVar2 = -0x15fbcc3c;
        }
        goto LAB_001ac8d4;
      }
      if (iVar9 != -0x1d21f5bf) goto LAB_001ac8d4;
      puVar10 = &DAT_00201038;
      puVar6 = &DAT_00201038;
      uVar7 = 5;
      puVar8 = &DAT_00204b5c;
    }
  }
  else {
    if (0x3994252c < iVar9) {
      if (iVar9 < 0x5a064e37) {
        if (iVar9 < 0x47057516) {
          if (iVar9 == 0x3994252d) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_158);
            iVar2 = 0x12146967;
          }
          else if (iVar9 == 0x43acbd24) {
            iVar2 = -0x4f44f15e;
            if ((local_1f0 & 1) == 0) {
              iVar2 = -0x4d1b7720;
            }
          }
          else if (iVar9 == 0x44fc7ac1) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_00201053,0x1b,&DAT_00204b64,&DAT_00201053);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                      (auStack_b0,&DAT_00201053);
            uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_b0);
            local_1dc = 1;
            local_1ec = uVar4 ^ 1;
            local_1f4 = 1;
            iVar2 = -0x36c1ec8e;
          }
        }
        else if (iVar9 == 0x47057516) {
          iVar2 = 0x2175af2f;
          if ((local_208 & 0x100000000) == 0) {
            iVar2 = -0x58445889;
          }
        }
        else if (iVar9 == 0x5835c89b) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_c8);
          iVar2 = 0x21456907;
          if ((local_210 & 1) == 0) {
            iVar2 = 0x3560bb53;
          }
        }
        else if (iVar9 == 0x5900a5dc) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_0020108c,0x1a,&DAT_00204b70,&DAT_0020108c);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])(auStack_e0,&DAT_0020108c)
          ;
          uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_e0);
          local_1e4 = uVar4 ^ 1;
          local_1e8 = 1;
          local_1fc = 1;
          iVar2 = -0x1105f304;
        }
      }
      else if (iVar9 < 0x7418ae15) {
        iVar2 = iVar1;
        if (iVar9 != 0x5a064e37) {
          if (iVar9 == 0x5e3c73d7) {
            iVar2 = 0x22b052d0;
            if ((local_1dc & 1) == 0) {
              iVar2 = -0x5bc680bb;
            }
          }
          else {
            iVar2 = iVar9;
            if (iVar9 == 0x6691bfda) {
              puVar10 = &DAT_00201111;
              puVar6 = &DAT_00201111;
              uVar7 = 10;
              puVar8 = &DAT_00204b90;
              goto LAB_001ad5c0;
            }
          }
        }
      }
      else if (iVar9 < 0x7c15202d) {
        if (iVar9 == 0x7418ae15) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_1b8);
          iVar2 = -0x7fe2477d;
        }
        else if (iVar9 == 0x75465a78) {
          if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      else if (iVar9 == 0x7c15202d) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_0020103d,0x16,&DAT_00204b60,&DAT_0020103d);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])(auStack_98,&DAT_0020103d);
        uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_98);
        local_1dc = 0;
        iVar2 = 0x44fc7ac1;
        if ((uVar5 & 1) == 0) {
          iVar2 = -0x36c1ec8e;
        }
        local_1f4 = 0;
        local_1ec = 1;
      }
      else if (iVar9 == 0x7e307414) {
        iVar2 = 0x5835c89b;
      }
      goto LAB_001ac8d4;
    }
    if (iVar9 < 0x196d0e75) {
      if (0x28cb1e3 < iVar9) {
        if (iVar9 == 0x28cb1e4) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5e2)])(param_1,auStack_188);
          iVar2 = -0x7fe2477d;
        }
        else {
          if (iVar9 == 0x7dce261) {
            puVar10 = &DAT_00201133;
            puVar6 = &DAT_00201133;
            uVar7 = 6;
            puVar8 = &DAT_00204b98;
            goto LAB_001ad5c0;
          }
          if (iVar9 == 0x12146967) {
            iVar2 = -0x6b46b1f9;
            if ((local_208 & 1) == 0) {
              iVar2 = 0x47057516;
            }
          }
        }
        goto LAB_001ac8d4;
      }
      if (iVar9 == -0x1487ac0b) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_00201139,0x17,&DAT_00204b9c,&DAT_00201139);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])(auStack_140,&DAT_00201139);
        uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_140);
        local_208 = 0;
        iVar2 = -0x2884e150;
        if ((uVar5 & 1) == 0) {
          iVar2 = -0x3f316bbc;
        }
        local_20c = 0;
        local_1f8 = 1;
        goto LAB_001ac8d4;
      }
      if (iVar9 == -0x1105f304) {
        iVar2 = -0x348200a5;
        if ((local_1fc & 1) == 0) {
          iVar2 = -0x2da39fb2;
        }
        local_210 = local_1e4;
        goto LAB_001ac8d4;
      }
      if (iVar9 != -0x427bac6) goto LAB_001ac8d4;
      puVar10 = &DAT_00201164;
      puVar6 = &DAT_00201164;
      uVar7 = 6;
      puVar8 = &DAT_00204ba4;
    }
    else {
      if (0x22b052cf < iVar9) {
        if (iVar9 == 0x22b052d0) {
          iVar2 = -0x5bc680bb;
        }
        else if (iVar9 == 0x2c3a2ac7) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_0020111b,0x18,&DAT_00204b94,&DAT_0020111b);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                    (auStack_128,&DAT_0020111b);
          uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_128);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_128);
          iVar2 = -0x1487ac0b;
          if ((uVar5 & 1) == 0) {
            iVar2 = 0x7dce261;
          }
        }
        else if (iVar9 == 0x3560bb53) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_002010ab,0x13,&DAT_00204b78,&DAT_002010ab);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])(auStack_f8,&DAT_002010ab)
          ;
          uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_f8);
          local_1f0 = 0;
          iVar2 = -0x169d7151;
          if ((uVar5 & 1) == 0) {
            iVar2 = -0x3ad0b221;
          }
          local_200 = 0;
          local_1e0 = 1;
        }
        goto LAB_001ac8d4;
      }
      if (iVar9 == 0x196d0e75) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_002001b3,8,&DAT_002047ac,&DAT_002001b3);
        uVar4 = 0x1873b59f;
        puVar6 = &DAT_002001b3;
        goto LAB_001ad3cc;
      }
      if (iVar9 != 0x21456907) {
        if (iVar9 == 0x2175af2f) {
          iVar2 = -0x58445889;
        }
        goto LAB_001ac8d4;
      }
      puVar10 = &DAT_002010a6;
      puVar6 = &DAT_002010a6;
      uVar7 = 5;
      puVar8 = &DAT_00204b74;
    }
  }
LAB_001ad5c0:
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])(puVar6,uVar7,puVar8,puVar10);
LAB_001ad5e4:
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])(param_1,puVar10);
  iVar2 = 0x75465a78;
  goto LAB_001ac8d4;
}


