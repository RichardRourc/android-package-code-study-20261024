// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013f1b4; body: [[0013f1b4, 0013f7b3]]

void FUN_0013f1b4(uint *param_1,long param_2)

{
  uint uVar1;
  uint unaff_10000080;
  uint unaff_10000088;
  uint unaff_10000090;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint in_w9;
  uint in_w10;
  uint in_w11;
  int unaff_w19;
  uint auStack_1a8 [2];
  long local_1a0;
  long local_198;
  uint *local_190;
  uint local_184 [4];
  uint local_174;
  uint local_170 [66];
  long local_68;
  
  local_198 = param_2;
  local_190 = param_1;
  local_170[0] = 0;
  local_1a0 = tpidr_el0;
  local_68 = *(long *)(local_1a0 + 0x28);
  do {
    iVar5 = 0x5f8123dd;
    uVar3 = in_w11;
    uVar7 = in_w10;
    uVar1 = in_w9;
    uVar2 = unaff_10000080;
    uVar4 = unaff_10000088;
    uVar6 = unaff_10000090;
LAB_0013f244:
    while( true ) {
      while( true ) {
        while (unaff_10000090 = uVar6, unaff_10000088 = uVar4, unaff_10000080 = uVar2, in_w9 = uVar1
              , in_w10 = uVar7, in_w11 = uVar3, uVar3 = in_w11, uVar7 = in_w10, uVar1 = in_w9,
              uVar2 = unaff_10000080, uVar4 = unaff_10000088, uVar6 = unaff_10000090,
              iVar5 < 0x978f32) {
          if (iVar5 < -0x3d96cc23) {
            if (iVar5 == -0x72973209) {
              local_170[1] = 0;
              local_184[1] = *local_190;
              local_184[2] = local_190[2];
              local_184[3] = local_190[1];
              local_174 = local_190[3];
              local_184[0] = local_190[7];
              iVar5 = 0x75f31fae;
              uVar3 = local_190[6];
              uVar7 = local_190[5];
              uVar1 = local_190[4];
              uVar2 = local_190[6];
              uVar4 = local_190[5];
              uVar6 = local_190[4];
            }
            else if (iVar5 == -0x612b2c7d) {
              uVar8 = *(uint *)(local_198 + (long)(int)local_170[0] * 4);
              uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
              local_170[(long)(int)local_170[0] + 2] = uVar8 >> 0x10 | uVar8 << 0x10;
              iVar5 = 0x54da90ae;
            }
            else {
              uVar3 = unaff_10000080;
              uVar7 = unaff_10000088;
              uVar1 = unaff_10000090;
              if (iVar5 == -0x40de29bd) {
                iVar5 = 0x23207439;
                uVar3 = in_w11;
                uVar7 = in_w10;
                uVar1 = in_w9;
              }
            }
          }
          else if (iVar5 < -0x266158a3) {
            if (iVar5 == -0x3d96cc23) {
              unaff_w19 = unaff_w19 + 1;
              goto LAB_0013f694;
            }
            uVar3 = unaff_10000080;
            uVar7 = unaff_10000088;
            uVar1 = unaff_10000090;
            if (iVar5 == -0x307ab73a) {
              uVar3 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709a)])(in_w9,0x1a);
              uVar7 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709a)])(in_w9,0x15);
              uVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709a)])(in_w9,7);
              uVar1 = local_170[1];
              iVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37092)])(local_170[1])
              ;
              uVar2 = local_184[1];
              iVar5 = (in_w11 & (in_w9 ^ 0xffffffff) | in_w10 & in_w9) + local_184[0] + iVar5 +
                      local_170[(long)(int)uVar1 + 2] + (uVar7 ^ uVar3 ^ uVar4);
              uVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709a)])
                                (local_184[1],0x1e);
              uVar6 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709a)])(uVar2,0x13);
              uVar8 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709a)])(uVar2,10);
              uVar1 = local_174;
              local_174 = local_184[2];
              uVar7 = local_184[3] ^ local_184[2];
              uVar3 = local_184[3] & local_184[2];
              local_184[2] = local_184[3];
              local_184[3] = uVar2;
              uVar1 = iVar5 + uVar1;
              local_184[0] = in_w11;
              local_184[1] = iVar5 + (uVar2 & uVar7 ^ uVar3) + (uVar6 ^ uVar4 ^ uVar8);
              iVar5 = 0x978f32;
              uVar3 = in_w10;
              uVar7 = in_w9;
              uVar2 = in_w10;
              uVar4 = in_w9;
              uVar6 = uVar1;
            }
          }
          else if (iVar5 == -0x266158a3) {
            iVar5 = -0x72973209;
          }
          else {
            uVar3 = unaff_10000080;
            uVar7 = unaff_10000088;
            uVar1 = unaff_10000090;
            if (iVar5 == -0x150a67f8) {
              iVar5 = 0x4c53f026;
              uVar3 = in_w11;
              uVar7 = in_w10;
              uVar1 = in_w9;
              if (0x3f < unaff_w19) {
                iVar5 = -0x266158a3;
              }
            }
          }
        }
        if (0x54da90ad < iVar5) break;
        if (iVar5 < 0x3b609988) {
          if (iVar5 == 0x978f32) {
            local_170[1] = local_170[1] + 1;
            iVar5 = 0x75f31fae;
            uVar3 = unaff_10000080;
            uVar7 = unaff_10000088;
            uVar1 = unaff_10000090;
          }
          else {
            uVar3 = unaff_10000080;
            uVar7 = unaff_10000088;
            uVar1 = unaff_10000090;
            if (iVar5 == 0x23207439) {
              *local_190 = *local_190 + local_184[1];
              local_190[1] = local_190[1] + local_184[3];
              local_190[2] = local_190[2] + local_184[2];
              local_190[3] = local_190[3] + local_174;
              local_190[4] = local_190[4] + in_w9;
              local_190[5] = local_190[5] + in_w10;
              local_190[6] = local_190[6] + in_w11;
              local_190[7] = local_190[7] + local_184[0];
              if (*(long *)(local_1a0 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
          }
        }
        else if (iVar5 == 0x3b609988) {
          iVar5 = 0x64290f7f;
        }
        else {
          uVar3 = unaff_10000080;
          uVar7 = unaff_10000088;
          uVar1 = unaff_10000090;
          if (iVar5 == 0x4c53f026) {
            uVar1 = auStack_1a8[(long)unaff_w19 + 1];
            uVar7 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709a)])(uVar1,0x19);
            uVar8 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709a)])(uVar1,0xe);
            uVar3 = local_170[unaff_w19];
            uVar9 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709a)])(uVar3,0xf);
            uVar10 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709a)])(uVar3,0xd);
            local_170[(long)unaff_w19 + 2] =
                 auStack_1a8[unaff_w19] + local_184[unaff_w19] + (uVar7 ^ uVar1 >> 3 ^ uVar8) +
                 (uVar9 ^ uVar3 >> 10 ^ uVar10);
            iVar5 = -0x3d96cc23;
            uVar3 = in_w11;
            uVar7 = in_w10;
            uVar1 = in_w9;
          }
        }
      }
      if (iVar5 < 0x64290f7f) break;
      if (iVar5 == 0x64290f7f) {
        unaff_w19 = 0x10;
LAB_0013f694:
        iVar5 = -0x150a67f8;
        uVar3 = unaff_10000080;
        uVar7 = unaff_10000088;
        uVar1 = unaff_10000090;
      }
      else {
        uVar3 = unaff_10000080;
        uVar7 = unaff_10000088;
        uVar1 = unaff_10000090;
        if (iVar5 == 0x75f31fae) {
          iVar5 = -0x307ab73a;
          uVar3 = in_w11;
          uVar7 = in_w10;
          uVar1 = in_w9;
          if (0x3f < (int)local_170[1]) {
            iVar5 = -0x40de29bd;
          }
        }
      }
    }
    if (iVar5 != 0x54da90ae) {
      uVar2 = in_w11;
      uVar4 = in_w10;
      uVar6 = in_w9;
      if (iVar5 == 0x5f8123dd) {
        iVar5 = -0x612b2c7d;
        uVar2 = unaff_10000080;
        uVar4 = unaff_10000088;
        uVar6 = unaff_10000090;
        if (0xf < (int)local_170[0]) {
          iVar5 = 0x3b609988;
        }
      }
      goto LAB_0013f244;
    }
    local_170[0] = local_170[0] + 1;
  } while( true );
}


