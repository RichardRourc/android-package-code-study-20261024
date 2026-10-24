// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015881c; body: [[0015881c, 00159517]]

void FUN_0015881c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **local_2c8;
  undefined **local_2c0;
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [24];
  undefined *apuStack_268 [3];
  undefined *apuStack_250 [3];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined *apuStack_1f0 [3];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined *apuStack_1a8 [3];
  undefined1 auStack_190 [24];
  undefined *apuStack_178 [3];
  undefined1 auStack_160 [24];
  undefined *apuStack_148 [3];
  undefined *local_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ace)])(auStack_208);
  uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52acf)])
                    (auStack_208,0x94d049bb133111eb);
  puStack_a8 = PTR_DAT_001f2fa0;
  local_b0 = PTR_DAT_001f2f98;
  puStack_98 = PTR_DAT_001f2fb0;
  puStack_a0 = PTR_DAT_001f2fa8;
  puStack_88 = PTR_DAT_001f2fc0;
  local_90 = PTR_DAT_001f2fb8;
  puStack_78 = PTR_DAT_001f2fd0;
  puStack_80 = PTR_DAT_001f2fc8;
  puStack_e8 = PTR_DAT_001f2f60;
  local_f0 = PTR_DAT_001f2f58;
  puStack_d8 = PTR_DAT_001f2f70;
  puStack_e0 = PTR_DAT_001f2f68;
  puStack_c8 = PTR_DAT_001f2f80;
  local_d0 = PTR_DAT_001f2f78;
  puStack_b8 = PTR_DAT_001f2f90;
  puStack_c0 = PTR_DAT_001f2f88;
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52acc)])(apuStack_1f0,&local_f0,0x10);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52acd)])
            (auStack_220,auStack_208,0x53c4a9e1,apuStack_1f0);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac2)])(apuStack_1f0);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(auStack_238);
  uVar7 = (uVar2 >> 2) % 5;
  uVar9 = uVar2 % 6;
  iVar6 = 0x183da16c;
LAB_00158ae0:
  do {
    while (0x17c03b8e < iVar6) {
      if (iVar6 < 0x34a97792) {
        if (iVar6 < 0x28ec8828) {
          if (iVar6 == 0x17c03b8f) {
            local_2c8 = local_2c8 + -3;
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(local_2c8);
            iVar6 = -0x4773d971;
            if (local_2c8 != apuStack_1a8) {
              iVar6 = 0x17c03b8f;
            }
          }
          else {
            if (iVar6 == 0x183da16c) {
              if (uVar9 < 2) {
                if (uVar9 == 0) goto LAB_00158a74;
                if (uVar9 == 1) goto LAB_00158bb0;
              }
              else {
                if (uVar9 == 2) goto code_r0x00158f9c;
                if (uVar9 == 3) goto LAB_00159024;
                if (uVar9 == 4) goto LAB_00158c88;
              }
code_r0x00159360:
              puStack_128 = PTR_DAT_001f2fe0;
              local_130 = PTR_DAT_001f2fd8;
              puStack_118 = PTR_DAT_001f2ff0;
              puStack_120 = PTR_DAT_001f2fe8;
              puStack_108 = PTR_DAT_001f3000;
              local_110 = PTR_DAT_001f2ff8;
              puStack_f8 = PTR_DAT_001f3010;
              puStack_100 = PTR_DAT_001f3008;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52acc)])
                        (apuStack_268,&local_130,8);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52acd)])
                        (apuStack_250,auStack_208,0x58,apuStack_268);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac2)])(apuStack_268);
              uVar5 = 0x59;
              uVar8 = uVar2 >> 10;
LAB_001593e4:
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac3)])
                        (apuStack_268,auStack_208,(uVar8 & 3) + 3,uVar5,2);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac0)])
                        (&local_130,apuStack_250,apuStack_268);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])
                        (auStack_238,&local_130);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(&local_130);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(apuStack_268);
              ppuVar3 = apuStack_250;
              goto LAB_00158ac4;
            }
            if (iVar6 == 0x18810af9) {
              unaff_x26 = unaff_x26 + -3;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(unaff_x26);
              iVar6 = 0x37dfb1f7;
              if (unaff_x26 != &local_f0) {
                iVar6 = 0x18810af9;
              }
            }
          }
        }
        else if (iVar6 == 0x28ec8828) {
          iVar6 = -0x13c1ab6d;
        }
        else if (iVar6 == 0x317bdb2a) {
LAB_00158a74:
          uVar5 = 0x51;
          lVar4 = (uVar2 >> 5) % 5 + 6;
LAB_00158a90:
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac3)])
                    (&local_130,auStack_208,lVar4,uVar5,2);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(auStack_238,&local_130);
          ppuVar3 = &local_130;
LAB_00158ac4:
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(ppuVar3);
          iVar6 = 0x31c3bc2c;
        }
        else if (iVar6 == 0x31c3bc2c) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac6)])(auStack_298,auStack_208);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac3)])
                    (auStack_2b0,auStack_208,(uVar2 >> 3) % 3 + 1,0x5a,2);
          if (uVar7 < 2) {
            if (uVar7 == 0) goto LAB_00158e94;
            if (uVar7 == 1) goto LAB_00158d68;
          }
          else {
            if (uVar7 == 2) goto LAB_00159238;
            if (uVar7 == 3) goto LAB_001591a4;
          }
LAB_001592b8:
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac7)])(apuStack_1f0,auStack_2b0)
          ;
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac7)])(auStack_1d8,auStack_220);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac7)])(auStack_1c0,auStack_238);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac4)])
                    (param_1,auStack_298,apuStack_1f0,3);
          unaff_x27 = apuStack_1a8;
          iVar6 = 0x6a3373aa;
        }
      }
      else if (iVar6 < 0x5941238a) {
        if (iVar6 == 0x34a97792) {
LAB_00159238:
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac7)])(apuStack_1a8,auStack_2b0)
          ;
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac7)])(auStack_190,auStack_238);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac4)])
                    (param_1,auStack_298,apuStack_1a8,2);
          iVar6 = 0x17c03b8f;
          local_2c8 = apuStack_178;
        }
        else if (iVar6 == 0x37dfb1f7) {
LAB_00158e88:
          iVar6 = -0x13c1ab6d;
        }
        else if (iVar6 == 0x3c33e640) {
          unaff_x25 = unaff_x25 + -3;
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(unaff_x25);
          iVar6 = -0x328f1b1a;
          if (unaff_x25 != apuStack_178) {
            iVar6 = 0x3c33e640;
          }
        }
      }
      else if (iVar6 == 0x5941238a) {
LAB_001591a4:
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac7)])(&local_f0,auStack_220);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac7)])(&puStack_d8,auStack_2b0);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac7)])(&puStack_c0,auStack_238);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac4)])
                  (param_1,auStack_298,&local_f0,3);
        unaff_x26 = &puStack_a8;
        iVar6 = 0x18810af9;
      }
      else if (iVar6 == 0x6a3373aa) {
        unaff_x27 = unaff_x27 + -3;
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(unaff_x27);
        iVar6 = -0x1d27aa93;
        if (unaff_x27 != apuStack_1f0) {
          iVar6 = 0x6a3373aa;
        }
      }
      else if (iVar6 == 0x6a667fd4) {
LAB_00158d68:
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac7)])(apuStack_178,auStack_220);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac7)])(auStack_160,auStack_238);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac4)])
                  (param_1,auStack_298,apuStack_178,2);
        unaff_x25 = apuStack_148;
        iVar6 = 0x3c33e640;
      }
    }
    if (iVar6 < -0x31c4150f) {
      if (iVar6 < -0x4773d971) {
        if (iVar6 == -0x6a906b0a) goto LAB_001592b8;
        if (iVar6 == -0x5bf04fbc) goto code_r0x00159360;
        if (iVar6 == -0x54b95035) {
LAB_00158bb0:
          uVar5 = 0x53;
          uVar8 = uVar2 >> 7 & 3;
LAB_00158c9c:
          lVar4 = uVar8 + 5;
          goto LAB_00158a90;
        }
      }
      else {
        if (iVar6 == -0x4773d971) goto LAB_00158e88;
        if (iVar6 == -0x33d753d6) {
LAB_00159024:
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac3)])
                    (apuStack_268,auStack_208,uVar2 >> 6 & 3 | 4,0x55,2);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                    (&DAT_001fd054,2,&DAT_002042f0,&DAT_001fd054);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52acb)])
                    (apuStack_250,apuStack_268,&DAT_001fd054);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac3)])
                    (auStack_280,auStack_208,(uVar2 >> 0xb) % 5 + 4,0x56,2);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac1)])
                    (&local_130,apuStack_250,auStack_280);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(auStack_238,&local_130);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(&local_130);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_280);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(apuStack_250);
          ppuVar3 = apuStack_268;
          goto LAB_00158ac4;
        }
        if (iVar6 == -0x328f1b1a) {
          iVar6 = -0x13c1ab6d;
        }
      }
      goto LAB_00158ae0;
    }
    if (iVar6 < -0x13c1ab6d) {
      if (iVar6 == -0x31c4150f) {
LAB_00158e94:
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac7)])(apuStack_148,auStack_238);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac4)])
                  (param_1,auStack_298,apuStack_148,1);
        iVar6 = 0x11889de2;
        local_2c0 = &local_130;
      }
      else if (iVar6 == -0x1d27aa93) {
        iVar6 = -0x13c1ab6d;
      }
      else if (iVar6 == -0x19dc78e6) {
LAB_00158c88:
        uVar5 = 0x57;
        uVar8 = (uVar2 >> 8) % 6;
        goto LAB_00158c9c;
      }
    }
    else {
      if (iVar6 == -0x5e38e7f) {
code_r0x00158f9c:
        puStack_128 = PTR_DAT_001f2fe0;
        local_130 = PTR_DAT_001f2fd8;
        puStack_118 = PTR_DAT_001f2ff0;
        puStack_120 = PTR_DAT_001f2fe8;
        puStack_108 = PTR_DAT_001f3000;
        local_110 = PTR_DAT_001f2ff8;
        puStack_f8 = PTR_DAT_001f3010;
        puStack_100 = PTR_DAT_001f3008;
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52acc)])(apuStack_268,&local_130,8);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52acd)])
                  (apuStack_250,auStack_208,0x54,apuStack_268);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac2)])(apuStack_268);
        uVar5 = 0x52;
        uVar8 = uVar2 >> 9;
        goto LAB_001593e4;
      }
      if (iVar6 == 0x11889de2) {
        local_2c0 = local_2c0 + -3;
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(local_2c0);
        iVar6 = 0x28ec8828;
        if (local_2c0 != apuStack_148) {
          iVar6 = 0x11889de2;
        }
      }
      else if (iVar6 == -0x13c1ab6d) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_2b0);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_298);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_238);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_220);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_208);
        if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  } while( true );
}


