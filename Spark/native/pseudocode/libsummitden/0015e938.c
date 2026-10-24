// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015e938; body: [[0015e938, 0015fd13]]

void FUN_0015e938(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong *puVar14;
  int iVar15;
  code *pcVar16;
  code *pcVar17;
  undefined8 local_1a0;
  int local_194;
  byte local_190;
  byte local_18c;
  ulong local_180;
  ulong local_178;
  ulong local_170;
  ulong local_168;
  ulong local_160;
  ulong local_158;
  ulong local_150;
  ulong local_140;
  int local_134;
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
  pcVar16 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af1)];
  iVar1 = -0x675ad50f;
  uVar6 = 0x98a52af1;
  iVar5 = -0x719131a1;
LAB_0015e9f4:
  do {
    while (iVar5 < -0x1b51750c) {
      if (iVar5 < -0x527664e9) {
        if (iVar5 < -0x639e19c2) {
          if (iVar5 < -0x719131a1) {
            if (iVar5 == -0x7bd39b55) {
              uVar12 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a96)])(auStack_e0);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a63)])(auStack_128,uVar12);
              local_158 = 0;
              iVar5 = 0x6ac503f0;
            }
            else if (iVar5 == -0x73e412ff) {
              iVar5 = -0xcf76294;
              if (local_178 < 0x181) {
                iVar5 = 0x6264cef2;
              }
            }
            else if (iVar5 == -0x71b1332c) {
              local_158 = local_158 + 1;
              iVar5 = 0x6ac503f0;
            }
          }
          else if (iVar5 < -0x6b432116) {
            if (iVar5 == -0x719131a1) {
              uVar8 = (*pcVar16)(param_2);
              bVar4 = (uVar8 & 1) == 0;
              iVar15 = -0x2a992df6;
              iVar5 = 0x101e4942;
LAB_0015e9f0:
              if (bVar4) {
                iVar5 = iVar15;
              }
            }
            else if (iVar5 == -0x6dd487a9) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(param_1);
              iVar5 = 0x3163a314;
            }
          }
          else if (iVar5 == -0x6b432116) {
            local_134 = local_134 + 1;
            iVar5 = 0x5f56570a;
          }
          else if (iVar5 == -0x63fb54d5) {
            uVar12 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a6f)])
                               (auStack_c8,local_170);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a6c)])(auStack_e0,uVar12);
            uVar12 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a6f)])
                               (auStack_80,local_170);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                      (&DAT_001fd782,2,&DAT_00204370,&DAT_001fd782);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aca)])
                      (auStack_110,&DAT_001fd782,uVar12);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                      (&DAT_001fd782,2,&DAT_00204370,&DAT_001fd782);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52acb)])
                      (auStack_98,auStack_110,&DAT_001fd782);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a97)])(auStack_f8,auStack_98);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_98);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_110);
            iVar5 = 0x40eb2750;
          }
        }
        else if (iVar5 < -0x59f6f4c6) {
          if (iVar5 == -0x639e19c2) {
            iVar5 = 0x5632e2f;
            if (local_140 <= local_178) {
              iVar5 = -0x59f6f4c6;
            }
          }
          else if (iVar5 == -0x62ab39e3) {
            uVar12 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a68)])(auStack_c8);
            uVar13 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a69)])(auStack_c8);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a6e)])(uVar12,uVar13);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a91)])(auStack_e0);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a91)])(auStack_f8);
            lVar10 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a96)])(auStack_80);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a6b)])(auStack_e0,lVar10 + 6);
            lVar10 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a96)])(auStack_80);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a6b)])(auStack_f8,lVar10 + 6);
            local_170 = 0;
            iVar5 = 0x5bd31a62;
          }
          else if (iVar5 == -0x5f02dbbf) {
            iVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aae)])(5);
            local_194 = iVar5 + 2;
            local_134 = 0;
            iVar5 = 0x5f56570a;
          }
        }
        else if (iVar5 < -0x5932ec25) {
          if (iVar5 == -0x59f6f4c6) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa7)])
                      (auStack_98,param_2,local_150,local_140);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a97)])(auStack_80,auStack_98);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_98);
            local_150 = local_140 + local_150;
            iVar5 = 0x709606ac;
          }
          else if (iVar5 == -0x59ed3520) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a64)])(param_1,0x2c);
            iVar5 = -0x197e17f2;
          }
        }
        else if (iVar5 == -0x5932ec25) {
          uVar8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a96)])(auStack_80);
          iVar5 = 0x2687814d;
          if (uVar8 <= local_160) {
            iVar5 = 0x5b1424d9;
          }
        }
        else if (iVar5 == -0x538eb46a) {
          iVar5 = -0x6b432116;
        }
      }
      else if (iVar5 < -0x3665f50f) {
        if (iVar5 < -0x4308290f) {
          if (iVar5 == -0x527664e9) {
            iVar5 = 0x191cb3b;
            bVar4 = (local_18c & 1) == 0;
            iVar15 = -0x42b76ee0;
            goto LAB_0015e9f0;
          }
          if (iVar5 == -0x4ed5da36) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a64)])(param_1,0x7d);
            iVar5 = 0x3163a314;
          }
          else if (iVar5 == -0x4b40d7b1) {
            iVar5 = 0x4f35e037;
          }
        }
        else if (iVar5 < -0x3ec4face) {
          if (iVar5 == -0x4308290f) {
            local_160 = local_160 + 1;
            iVar5 = -0x5932ec25;
          }
          else if (iVar5 == -0x42b76ee0) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a94)])(auStack_b0,0x6f);
            iVar1 = 0;
            iVar5 = 0x5f886baa;
          }
        }
        else if (iVar5 == -0x3ec4face) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a6a)])(auStack_b0);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a91)])(auStack_c8);
          uVar12 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a96)])(auStack_80);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a6b)])(auStack_c8,uVar12);
          local_160 = 0;
          iVar5 = -0x5932ec25;
        }
        else if (iVar5 == -0x3a4df642) {
          iVar5 = -0x3ec4face;
        }
      }
      else if (iVar5 < -0x2671b4e3) {
        if (iVar5 < -0x2a992df6) {
          if (iVar5 == -0x342c5fc3) {
            uVar8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a96)])(auStack_80);
            local_18c = uVar8 < 0x60;
            iVar5 = -0x527664e9;
          }
          else if (iVar5 == -0x3665f50f) {
            if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
        }
        else if (iVar5 == -0x2a992df6) {
          local_180 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad9)])(param_2);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a91)])(auStack_80);
          local_150 = 0;
          iVar5 = 0x709606ac;
        }
        else if (iVar5 == -0x28175e08) {
LAB_0015ed64:
          pcVar17 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a62)];
          uVar7 = uVar6 % 999 + 1;
          goto LAB_0015fc88;
        }
      }
      else if (iVar5 == -0x2671b4e3) {
        puVar14 = (ulong *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a61)])
                                     (auStack_128,local_158);
        *puVar14 = local_158;
        iVar5 = -0x71b1332c;
      }
      else if (iVar5 == -0x24d94c04) {
        lVar10 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a96)])(auStack_80);
        local_190 = (ulong)(lVar10 + local_134) < 0x6f;
        iVar5 = 0x1e0b2b0a;
      }
      else if (iVar5 == -0x1ccfce53) {
LAB_0015fc54:
        pcVar17 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a62)];
        uVar7 = uVar6 % 0x26ac + 100;
LAB_0015fc88:
        (*pcVar17)(auStack_98,uVar7);
        goto LAB_0015fc8c;
      }
    }
    if (0x40eb274f < iVar5) {
      if (iVar5 < 0x5f886baa) {
        if (iVar5 < 0x57bf7dcb) {
          if (iVar5 == 0x40eb2750) {
            local_170 = local_170 + 1;
            iVar5 = 0x5bd31a62;
          }
          else if (iVar5 == 0x4f35e037) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a66)])(auStack_128);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
            lVar10 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a96)])(auStack_e0);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a67)])
                      (param_1,local_180 + lVar10 * 0x18 + 2);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a64)])(param_1,0x7b);
            local_168 = 0;
            iVar5 = -0xa0dbe3b;
          }
          else if (iVar5 == 0x51e3c811) {
            iVar5 = -0x5f02dbbf;
          }
        }
        else if (iVar5 < 0x5bd31a62) {
          if (iVar5 == 0x57bf7dcb) {
            local_168 = local_168 + 1;
            iVar5 = -0xa0dbe3b;
          }
          else if (iVar5 == 0x5b1424d9) {
            iVar5 = -0x62ab39e3;
          }
        }
        else if (iVar5 == 0x5bd31a62) {
          uVar8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a96)])(auStack_80);
          iVar5 = -0x63fb54d5;
          if (uVar8 <= local_170) {
            iVar5 = 0x51e3c811;
          }
        }
        else if (iVar5 == 0x5f56570a) {
          local_190 = 0;
          iVar5 = -0x24d94c04;
          if (local_194 <= local_134) {
            iVar5 = 0x1e0b2b0a;
          }
        }
      }
      else {
        if (iVar5 < 0x6b2dc2eb) {
          if (iVar5 == 0x5f886baa) {
            iVar5 = 0x6b2dc2eb;
            if (0x6e < iVar1) {
              iVar5 = -0x3a4df642;
            }
          }
          else if (iVar5 == 0x6264cef2) {
            iVar5 = 0x5632e2f;
            if (local_140 != 0) {
              iVar5 = -0x639e19c2;
            }
          }
          else if (iVar5 == 0x6ac503f0) {
            uVar8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a60)])(auStack_128);
            iVar5 = -0x2671b4e3;
            if (uVar8 <= local_158) {
              iVar5 = -0x4b40d7b1;
            }
          }
          goto LAB_0015e9f4;
        }
        if (0x7a29c018 < iVar5) {
          if (iVar5 != 0x7a29c019) {
            if (iVar5 != 0x7e2eeea7) goto LAB_0015e9f4;
            uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a6d)])();
            lVar10 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a96)])(auStack_80);
            piVar11 = (int *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a95)])
                                       (auStack_b0,lVar10 + local_134);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])
                      (auStack_98,(&PTR_DAT_001f33b8)[*piVar11]);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a97)])(auStack_e0,auStack_98);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_98);
            if (1 < (uVar6 & 3)) {
              if ((uVar6 & 3) == 2) goto LAB_0015ed64;
              goto LAB_0015fc54;
            }
            if ((uVar6 & 3) != 0) goto LAB_0015f464;
          }
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                    (&DAT_001fd784,5,&DAT_00204374,&DAT_001fd784);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                    (&DAT_001fd789,6,&DAT_00204378,&DAT_001fd789);
          puVar2 = &DAT_001fd789;
          if ((uVar6 & 0x100) != 0) {
            puVar2 = &DAT_001fd784;
          }
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])(auStack_98,puVar2);
LAB_0015fc8c:
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a97)])(auStack_f8,auStack_98);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_98);
          iVar5 = -0x538eb46a;
          goto LAB_0015e9f4;
        }
        if (iVar5 == 0x6b2dc2eb) {
          piVar11 = (int *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a95)])
                                     (auStack_b0,(long)iVar1);
          *piVar11 = iVar1;
          iVar5 = -0x156b0957;
        }
        else if (iVar5 == 0x709606ac) {
          local_18c = 0;
          iVar5 = -0x342c5fc3;
          if (local_180 <= local_150) {
            iVar5 = -0x527664e9;
          }
        }
      }
      goto LAB_0015e9f4;
    }
    if (iVar5 < 0xf2482e8) {
      if (iVar5 < -0xcf76294) {
        if (iVar5 == -0x1b51750c) {
          iVar5 = -0x4ed5da36;
        }
        else if (iVar5 == -0x197e17f2) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a64)])(param_1,0x22);
          uVar12 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a6f)])
                             (auStack_e0,local_1a0);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52abc)])(param_1,uVar12);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                    (&DAT_001fd78f,3,&DAT_0020437c,&DAT_001fd78f);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a65)])(param_1,&DAT_001fd78f);
          uVar12 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a6f)])
                             (auStack_f8,local_1a0);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52abc)])(param_1,uVar12);
          iVar5 = 0x57bf7dcb;
        }
        else if (iVar5 == -0x156b0957) {
          iVar1 = iVar1 + 1;
          iVar5 = 0x5f886baa;
        }
      }
      else if (iVar5 < 0x191cb3b) {
        if (iVar5 == -0xcf76294) {
          lVar10 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aae)])(0x101);
          local_140 = lVar10 + 0x80;
          iVar5 = 0x6264cef2;
        }
        else if (iVar5 == -0xa0dbe3b) {
          uVar8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a60)])(auStack_128);
          iVar5 = 0x2ab07236;
          if (uVar8 <= local_168) {
            iVar5 = -0x1b51750c;
          }
        }
      }
      else if (iVar5 == 0x191cb3b) {
        local_178 = local_180 - local_150;
        lVar10 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a96)])(auStack_80);
        iVar5 = -0x73e412ff;
        local_140 = local_178;
        if (0x5f < lVar10 + 1U) {
          iVar5 = 0x6264cef2;
        }
      }
      else if (iVar5 == 0x5632e2f) {
        local_140 = local_178;
        iVar5 = -0x59f6f4c6;
      }
    }
    else if (iVar5 < 0x2687814d) {
      if (iVar5 == 0xf2482e8) {
        iVar5 = -0x7bd39b55;
      }
      else if (iVar5 == 0x101e4942) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                  (&DAT_001fd4e5,3,&DAT_0020436c,&DAT_001fd4e5);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])(param_1,&DAT_001fd4e5);
        iVar5 = -0x3665f50f;
      }
      else if (iVar5 == 0x1e0b2b0a) {
        iVar5 = 0x7e2eeea7;
        bVar4 = (local_190 & 1) == 0;
        iVar15 = 0xf2482e8;
        goto LAB_0015e9f0;
      }
    }
    else if (iVar5 < 0x2c26144e) {
      if (iVar5 == 0x2687814d) {
        piVar11 = (int *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a95)])
                                   (auStack_b0,local_160);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])
                  (auStack_98,(&PTR_DAT_001f33b8)[*piVar11]);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a97)])(auStack_c8,auStack_98);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_98);
        iVar5 = -0x4308290f;
      }
      else if (iVar5 == 0x2ab07236) {
        puVar9 = (undefined8 *)
                 (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a61)])
                           (auStack_128,local_168);
        local_1a0 = *puVar9;
        iVar5 = -0x197e17f2;
        if (local_168 != 0) {
          iVar5 = -0x59ed3520;
        }
      }
    }
    else {
      if (iVar5 == 0x2c26144e) {
LAB_0015f464:
        uVar7 = uVar6 % 10;
        pcVar17 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a62)];
        goto LAB_0015fc88;
      }
      if (iVar5 == 0x3163a314) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7a)])(auStack_128);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7b)])(auStack_f8);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7b)])(auStack_e0);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7b)])(auStack_c8);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a78)])(auStack_b0);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7b)])(auStack_80);
        iVar5 = -0x3665f50f;
      }
    }
  } while( true );
}


