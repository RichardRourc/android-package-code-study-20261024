// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0014ab5c; body: [[0014ab5c, 0014d75b]]

long FUN_0014ab5c(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  byte local_1f8;
  undefined4 local_1f4;
  long local_1f0;
  int local_1e4;
  long local_1d0;
  long local_1c8;
  char local_1bc;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  byte local_120;
  int local_11c;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  int local_b4;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar1 = 0x9300dc2;
  if (param_2 != 0) {
    iVar1 = 0x320e656e;
  }
  iVar2 = 0x9300dc2;
  if (param_1 != 0) {
    iVar2 = -0x551603e8;
  }
  iVar9 = 0x2ca6abf6;
LAB_0014ac28:
  while (iVar5 = iVar9, iVar9 = iVar5, iVar5 < -0x250206c) {
    if (iVar5 < -0x411872f0) {
      if (iVar5 < -0x5eba0fb3) {
        if (iVar5 < -0x6b1e4a58) {
          if (iVar5 < -0x742874d9) {
            if (iVar5 < -0x756c4c23) {
              if (iVar5 == -0x7b627ac8) {
                iVar9 = 0x62f8067f;
                if (local_c0 != 0) {
                  iVar9 = -0x239a04ea;
                }
              }
              else if (iVar5 == -0x797f9ae4) {
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_110);
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b26)])(auStack_80);
                iVar9 = -0x6e49fbee;
              }
            }
            else if (iVar5 == -0x756c4c23) {
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                        (&DAT_001fbff2,9,&DAT_002042b0,&DAT_001fbff2);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                        (&DAT_001fbffb,5,&DAT_002042b4,&DAT_001fbffb);
              local_190 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba4)])
                                    (param_1,local_128,&DAT_001fbff2,&DAT_001fbffb);
              iVar9 = 0x53b78251;
            }
            else if (iVar5 == -0x7489cc6a) {
              cVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
              iVar9 = -0x28fcf28;
              if (cVar4 != '\0') {
                iVar9 = 0x3ce89306;
              }
            }
          }
          else if (iVar5 < -0x6e16467e) {
            if (iVar5 == -0x742874d9) {
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bad)])
                        (auStack_80,auStack_98);
              iVar9 = 0x530e065f;
            }
            else if (iVar5 == -0x6e49fbee) {
              iVar9 = -0x1c915ad9;
            }
          }
          else if (iVar5 == -0x6e16467e) {
            local_170 = 0;
            iVar9 = 0xa32f2f8;
          }
          else if (iVar5 == -0x6d641337) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_c8);
            iVar9 = -0xce0b0f0;
          }
        }
        else if (iVar5 < -0x6351f529) {
          if (iVar5 < -0x672b03fe) {
            if (iVar5 == -0x6b1e4a58) {
              cVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8baf)])
                                (param_1,local_140,local_e8);
              local_120 = cVar4 != '\0';
              iVar9 = 0x1ffe0a75;
            }
            else if (iVar5 == -0x69456d82) {
              iVar9 = 0xd861ed6;
              if (local_1a8 != 0) {
                iVar9 = -0x9ea8d2e;
              }
            }
          }
          else {
            iVar9 = -0x2472bb1f;
            if ((iVar5 != -0x672b03fe) && (iVar9 = iVar5, iVar5 == -0x651d46a9)) {
              cVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8baf)])
                                (param_1,local_138,local_e8);
              local_120 = 0;
              iVar9 = 0x1ffe0a75;
              if (cVar4 != '\0') {
                iVar9 = -0x6b1e4a58;
              }
            }
          }
        }
        else if (iVar5 < -0x6249a9a1) {
          if (iVar5 == -0x6351f529) {
            iVar9 = 0x703b19dc;
            if (local_e8 != 0) {
              iVar9 = 0x1fde06d4;
            }
          }
          else if (iVar5 == -0x6261a2f8) goto LAB_0014cd54;
        }
        else if (iVar5 == -0x6249a9a1) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_c8);
          local_b4 = 4;
          iVar9 = 0x29a16b56;
        }
        else if (iVar5 == -0x605ca8dd) {
          iVar9 = 0x298fc0be;
          if (local_130 != 0) {
            iVar9 = 0x79b64a75;
          }
        }
        else if (iVar5 == -0x5fffcd21) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
          iVar9 = -0x15b979b3;
          if (local_110 != 0) {
            iVar9 = -0x35b3c5af;
          }
        }
      }
      else if (iVar5 < -0x4f3e6204) {
        if (iVar5 < -0x594154c0) {
          if (iVar5 < -0x5aae4275) {
            if (iVar5 == -0x5eba0fb3) {
              uVar8 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b30)])(param_3);
              local_148 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b31)])
                                    (param_1,uVar8);
              iVar9 = 0x27c544c1;
              if (local_148 != 0) {
                iVar9 = 0x43262065;
              }
            }
            else if (iVar5 == -0x5ccff8a9) {
              local_178 = 0;
              iVar9 = 0x1681748e;
            }
          }
          else if (iVar5 == -0x5aae4275) {
            iVar9 = -0x306e9b42;
            if (local_c0 != 0) {
              iVar9 = 0x7bb3245e;
            }
          }
          else if (iVar5 == -0x597dc436) {
            cVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
            iVar9 = 0x1a2ed90c;
            if (cVar4 != '\0') {
              iVar9 = -0x1fbe103e;
            }
          }
        }
        else if (iVar5 < -0x551603e8) {
          if (iVar5 == -0x594154c0) {
            local_160 = 0;
            iVar9 = -0xdd7febe;
          }
          else if (iVar5 == -0x58c3f07a) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_e0);
            iVar9 = -0x7b627ac8;
          }
        }
        else {
          iVar9 = iVar1;
          if ((iVar5 != -0x551603e8) && (iVar9 = iVar5, iVar5 == -0x4faaccc3)) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b26)])(auStack_98);
            iVar9 = 0x610726ec;
          }
        }
      }
      else if (iVar5 < -0x46dfb471) {
        if (iVar5 < -0x48ba0030) {
          if (iVar5 == -0x4f3e6204) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
            iVar9 = 0x4d4baf89;
            if (local_1bc != '\x01') {
              iVar9 = -0x2d1fddc4;
            }
          }
          else if (iVar5 == -0x4d71d18f) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
            iVar9 = 0x4e8630c8;
            if (local_d8 != 0) {
              iVar9 = 0x704f0434;
            }
          }
        }
        else {
          iVar9 = -0x3c32319b;
          if ((iVar5 != -0x48ba0030) && (iVar9 = iVar5, iVar5 == -0x47983cb6)) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_150);
            iVar9 = -0x597dc436;
          }
        }
      }
      else if (iVar5 < -0x43f3f240) {
        if (iVar5 == -0x46dfb471) {
LAB_0014c538:
          iVar9 = 0x66cd5e7f;
        }
        else if (iVar5 == -0x446830cb) {
          local_120 = 0;
          iVar9 = 0x1ffe0a75;
          if (local_140 != 0) {
            iVar9 = 0x568e5edf;
          }
        }
      }
      else if (iVar5 == -0x43f3f240) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_140);
        iVar9 = 0x36d05bfa;
      }
      else if (iVar5 == -0x42c8c25f) {
        local_120 = 0;
        iVar9 = 0x1ffe0a75;
        if (local_138 != 0) {
          iVar9 = -0x446830cb;
        }
      }
      else if (iVar5 == -0x42c34fb5) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_108);
        iVar9 = 0x20b97dca;
      }
    }
    else if (iVar5 < -0x1cf7c2d2) {
      if (iVar5 < -0x2d1fddc4) {
        if (iVar5 < -0x3693be8d) {
          if (iVar5 < -0x3dc815b0) {
            if (iVar5 == -0x411872f0) {
              iVar9 = -0x4d71d18f;
              if (local_d8 != 0) {
                iVar9 = 0x25b42d85;
              }
            }
            else if (iVar5 == -0x40cff33e) {
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                        (&DAT_001fbc0e,4,&DAT_002041d4,&DAT_001fbc0e);
              (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                        (&DAT_001fbfd2,0xd,&DAT_002042a4,&DAT_001fbfd2);
              local_178 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                                    (param_1,local_d0,&DAT_001fbfd2,&DAT_001fbc0e);
              iVar9 = 0x1681748e;
            }
          }
          else if (iVar5 == -0x3dc815b0) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_f0);
            iVar9 = 0x47faec38;
          }
          else if (iVar5 == -0x3c054aa2) {
            iVar9 = 0x4197aca9;
            if (local_1e4 <= local_11c) {
              iVar9 = -0x1cf7c2d2;
            }
          }
          else if (iVar5 == -0x3c32319b) {
            if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return local_100;
          }
        }
        else if (iVar5 < -0x33a18acc) {
          if (iVar5 == -0x3693be8d) {
            iVar9 = 0x703b19dc;
            if (local_f0 != 0) {
              iVar9 = -0x6351f529;
            }
          }
          else if (iVar5 == -0x35b3c5af) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_110);
            iVar9 = -0x15b979b3;
          }
        }
        else if (iVar5 == -0x33a18acc) {
          iVar9 = -0x5fffcd21;
          if (local_110 != 0) {
            iVar9 = -0x7178d1a;
          }
        }
        else if (iVar5 == -0x306e9b42) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
          iVar9 = -0x7b627ac8;
          if (local_e0 != 0) {
            iVar9 = -0x58c3f07a;
          }
        }
      }
      else if (iVar5 < -0x2390c26c) {
        if (iVar5 < -0x2472bb1f) {
          if (iVar5 == -0x2d1fddc4) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_c8);
            local_b4 = 4;
            iVar9 = -0x4faaccc3;
          }
          else if (iVar5 == -0x2889b9ef) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbfab,0x12,&DAT_0020429c,&DAT_001fbfab);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbfbd,0x15,&DAT_002042a0,&DAT_001fbfbd);
            local_188 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                                  (param_1,local_d0,&DAT_001fbfab,&DAT_001fbfbd);
            iVar9 = 0x536268a5;
          }
        }
        else if (iVar5 == -0x2472bb1f) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_108);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_f0);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_e8);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_d8);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_e0);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_c0);
          local_100 = local_f8;
          local_b4 = 1;
          iVar9 = -0x250206c;
        }
        else if (iVar5 == -0x239a04ea) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_c0);
          iVar9 = 0x62f8067f;
        }
      }
      else if (iVar5 < -0x227eeba1) {
        if (iVar5 == -0x2390c26c) {
          local_158 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bab)])
                                (param_1,local_118,0);
          local_138 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bab)])
                                (param_1,local_118,1);
          local_140 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bab)])
                                (param_1,local_118,2);
          local_120 = 0;
          iVar9 = 0x1ffe0a75;
          if (local_158 != 0) {
            iVar9 = -0x42c8c25f;
          }
        }
        else if (iVar5 == -0x23248ed6) {
          local_190 = 0;
          iVar9 = 0x53b78251;
        }
      }
      else if (iVar5 == -0x227eeba1) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                  (&DAT_001fbfdf,0xe,&DAT_002042a8,&DAT_001fbfdf);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                  (&DAT_001fbfed,5,&DAT_002042ac,&DAT_001fbfed);
        local_180 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                              (param_1,local_d0,&DAT_001fbfdf,&DAT_001fbfed);
        iVar9 = 0x71a0d64a;
      }
      else {
        iVar9 = -0x797f9ae4;
        if ((iVar5 != -0x2243e8bc) && (iVar9 = iVar5, iVar5 == -0x1fbe103e)) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
          iVar9 = 0x58593472;
          if (local_f8 != 0) {
            iVar9 = 0x7aefcb30;
          }
        }
      }
    }
    else if (iVar5 < -0xdd7febe) {
      if (iVar5 < -0x1626184d) {
        if (iVar5 < -0x1aab0541) {
          if (iVar5 == -0x1cf7c2d2) {
            local_b4 = 2;
            iVar9 = -0x46dfb471;
          }
          else if (iVar5 == -0x1c915ad9) {
            iVar9 = 0x189a64cd;
            if (local_d0 != 0) {
              iVar9 = -0xd84103e;
            }
          }
        }
        else if (iVar5 == -0x1aab0541) {
          iVar9 = 0xd861ed6;
          if (local_1a0 != 0) {
            iVar9 = -0x69456d82;
          }
        }
        else if (iVar5 == -0x17b603f5) {
          iVar9 = 0xd861ed6;
          if (local_1b8 != 0) {
            iVar9 = 0x32beb5e4;
          }
        }
      }
      else if (iVar5 < -0x120ab127) {
        if (iVar5 == -0x1626184d) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (0x1fc000,2,&DAT_002042b8,0x1fc000);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bac)])(auStack_80,0x1fc000);
          iVar9 = -0x742874d9;
        }
        else if (iVar5 == -0x15b979b3) {
          iVar9 = -0x6e49fbee;
        }
      }
      else if (iVar5 == -0x120ab127) {
        local_1bc = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bae)])
                              (param_1,local_128,local_1b8,local_1f4);
        iVar9 = -0x4f3e6204;
      }
      else if (iVar5 == -0x11e3f99a) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_128);
        iVar9 = -0x672b03fe;
      }
    }
    else if (iVar5 < -0x7178d1a) {
      if (iVar5 < -0xce0b0f0) {
        if (iVar5 == -0xdd7febe) {
          iVar9 = -0x597dc436;
          if (local_150 != 0) {
            iVar9 = -0x47983cb6;
          }
          local_f8 = local_160;
        }
        else if (iVar5 == -0xd84103e) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_d0);
          iVar9 = 0x189a64cd;
        }
      }
      else if (iVar5 == -0xce0b0f0) {
        local_b4 = 4;
        iVar9 = 0x610726ec;
      }
      else if (iVar5 == -0x9ea8d2e) {
        iVar9 = 0xd861ed6;
        if (local_1b0 != 0) {
          iVar9 = -0x17b603f5;
        }
      }
    }
    else if (iVar5 < -0x56a6eff) {
      if (iVar5 == -0x7178d1a) {
        local_1e4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8baa)])
                              (param_1,local_110);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b23)])(auStack_80);
        local_11c = 0;
        iVar9 = -0x3c054aa2;
      }
      else if (iVar5 == -0x70711be) {
        local_160 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b34)])
                              (param_1,local_d8,local_1c8,local_150,local_108);
        iVar9 = -0xdd7febe;
      }
    }
    else if (iVar5 == -0x56a6eff) {
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba9)])(param_1,local_108,0,local_f0)
      ;
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba9)])(param_1,local_108,1,local_e8)
      ;
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba9)])(param_1,local_108,2,local_e8)
      ;
      cVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
      iVar9 = 0x40605510;
      if (cVar4 != '\0') {
        iVar9 = 0x2611304;
      }
    }
    else {
      iVar9 = -0x48ba0030;
      if ((iVar5 != -0x3d8cc91) && (iVar9 = iVar5, iVar5 == -0x28fcf28)) {
        iVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8baa)])(param_1,local_118);
        iVar9 = -0x2390c26c;
        if (iVar5 != 3) {
          iVar9 = 0x6db4a687;
        }
      }
    }
  }
  if (iVar5 < 0x43262065) {
    if (iVar5 < 0x20b97dca) {
      if (iVar5 < 0xd58e905) {
        if (iVar5 < 0xa0ab97c) {
          if (iVar5 < 0x2611304) {
            iVar9 = 0x33697741;
            if ((iVar5 != -0x250206c) && (iVar9 = iVar5, iVar5 == -0x1e6f522)) {
              iVar9 = 0x36d05bfa;
              if (local_140 != 0) {
                iVar9 = -0x43f3f240;
              }
            }
          }
          else if (iVar5 == 0x2611304) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_108);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_f0);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_e8);
LAB_0014cd54:
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_d8);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_e0);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_c0);
            local_100 = 0;
            local_b4 = 1;
            iVar9 = -0x250206c;
          }
          else if (iVar5 == 0x9300dc2) {
            local_100 = 0;
            iVar9 = -0x3c32319b;
          }
        }
        else if (iVar5 < 0xb9d1040) {
          if (iVar5 == 0xa0ab97c) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_148);
            iVar9 = -0x411872f0;
          }
          else if (iVar5 == 0xa32f2f8) {
            iVar9 = 0x718ce1ee;
            if (local_d0 != 0) {
              iVar9 = -0x2889b9ef;
            }
            local_198 = local_170;
          }
        }
        else if (iVar5 == 0xb9d1040) {
          local_130 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b34)])
                                (param_1,local_c8,local_198);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b23)])(auStack_98);
          cVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
          iVar9 = -0x605ca8dd;
          if (cVar4 != '\0') {
            iVar9 = 0x298fc0be;
          }
        }
        else if (iVar5 == 0xd2a35fe) {
          local_108 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba8)])
                                (param_1,3,local_c0,0);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbf18,0x15,&DAT_00204280,&DAT_001fbf18);
          local_f0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2c)])
                               (param_1,&DAT_001fbf18);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbf2d,0x11,&DAT_00204284,&DAT_001fbf2d);
          local_e8 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2c)])
                               (param_1,&DAT_001fbf2d);
          iVar9 = 0x703b19dc;
          if (local_108 != 0) {
            iVar9 = -0x3693be8d;
          }
        }
      }
      else if (iVar5 < 0x189e2ead) {
        if (iVar5 < 0x1681748e) {
          if (iVar5 == 0xd58e905) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_118);
            iVar9 = 0x189e2ead;
          }
          else if (iVar5 == 0xd861ed6) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
            iVar9 = -0x1c915ad9;
          }
        }
        else if (iVar5 == 0x1681748e) {
          iVar9 = 0x65e528d7;
          if (local_d0 != 0) {
            iVar9 = -0x227eeba1;
          }
          local_1a8 = local_178;
        }
        else if (iVar5 == 0x189a64cd) {
          iVar9 = -0x672b03fe;
          if (local_128 != 0) {
            iVar9 = -0x11e3f99a;
          }
        }
      }
      else if (iVar5 < 0x1a2ed90c) {
        if (iVar5 == 0x189e2ead) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_c8);
          local_b4 = 4;
          iVar9 = 0x45f0f916;
        }
        else if (iVar5 == 0x19d5043b) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
          iVar9 = -0xce0b0f0;
          if (local_c8 != 0) {
            iVar9 = -0x6d641337;
          }
        }
      }
      else if (iVar5 == 0x1a2ed90c) {
        iVar9 = -0x1fbe103e;
        if (local_f8 != 0) {
          iVar9 = -0x2472bb1f;
        }
      }
      else if (iVar5 == 0x1fde06d4) {
        cVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
        iVar9 = -0x56a6eff;
        if (cVar4 != '\0') {
          iVar9 = 0x703b19dc;
        }
      }
      else if (iVar5 == 0x1ffe0a75) {
        iVar9 = 0x6aac5c24;
        local_1f8 = local_120;
        if (local_158 != 0) {
          iVar9 = 0x6a9fc8a0;
        }
      }
    }
    else {
      if (iVar5 < 0x2eef63b9) {
        if (iVar5 < 0x298fc0be) {
          if (iVar5 < 0x25b42d85) {
            if (iVar5 == 0x20b97dca) {
              iVar9 = 0x47faec38;
              if (local_f0 != 0) {
                iVar9 = -0x3dc815b0;
              }
            }
            else if (iVar5 == 0x21e5f10f) {
              iVar9 = 0x52a726dc;
              if (local_1c8 != 0) {
                iVar9 = -0x5eba0fb3;
              }
            }
          }
          else if (iVar5 == 0x25b42d85) {
            cVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
            iVar9 = 0xd2a35fe;
            if (cVar4 != '\0') {
              iVar9 = -0x4d71d18f;
            }
          }
          else if (iVar5 == 0x27c544c1) {
            local_168 = 0;
            iVar9 = 0x4f4e0d64;
          }
        }
        else if (iVar5 < 0x2bbdf524) {
          if (iVar5 == 0x298fc0be) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
            iVar9 = 0x46db823f;
            if (local_130 != 0) {
              iVar9 = 0x5cf2385e;
            }
          }
          else if (iVar5 == 0x29a16b56) {
            iVar9 = 0x4a611335;
          }
        }
        else if (iVar5 == 0x2bbdf524) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbc7c,0x15,&DAT_002041ec,&DAT_001fbc7c);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbce2,8,&DAT_0020420c,&DAT_001fbce2);
          local_170 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                                (param_1,local_d0,&DAT_001fbce2,&DAT_001fbc7c);
          iVar9 = 0xa32f2f8;
        }
        else if (iVar5 == 0x2ca6abf6) {
          iVar9 = iVar2;
        }
        goto LAB_0014ac28;
      }
      if (iVar5 < 0x36d05bfa) {
        if (iVar5 < 0x32beb5e4) {
          if (iVar5 == 0x2eef63b9) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_138);
            iVar9 = -0x1e6f522;
          }
          else if (iVar5 == 0x320e656e) {
            uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b20)])(param_3);
            iVar9 = 0x9300dc2;
            if ((uVar6 & 1) == 0) {
              iVar9 = 0x3e7386cf;
            }
          }
        }
        else if (iVar5 == 0x32beb5e4) {
          local_110 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b34)])
                                (param_1,local_d8,local_1d0);
          cVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
          iVar9 = -0x33a18acc;
          if (cVar4 != '\0') {
            iVar9 = -0x5fffcd21;
          }
        }
        else if (iVar5 == 0x33697741) {
          iVar9 = -0x3d8cc91;
        }
      }
      else {
        if (0x3e7386ce < iVar5) {
          if (iVar5 == 0x3e7386cf) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbe87,0x16,&DAT_0020426c,&DAT_001fbe87);
            lVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2c)])
                              (param_1,&DAT_001fbe87);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbcb5,0x10,&DAT_00204200,&DAT_001fbcb5);
            local_c0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2c)])
                                 (param_1,&DAT_001fbcb5);
            iVar9 = -0x306e9b42;
            iVar5 = -0x5aae4275;
            local_e0 = lVar7;
          }
          else {
            if (iVar5 != 0x40605510) {
              if (iVar5 == 0x4197aca9) {
                local_c8 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bab)])
                                     (param_1,local_110,local_11c);
                iVar9 = 0x19d5043b;
                if (local_c8 != 0) {
                  iVar9 = 0x6104d60d;
                }
              }
              goto LAB_0014ac28;
            }
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbf3e,8,&DAT_00204288,&DAT_001fbf3e);
            lVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b31)])
                              (param_1,&DAT_001fbf3e);
            iVar9 = -0x594154c0;
            iVar5 = -0x70711be;
            local_150 = lVar7;
          }
          if (lVar7 != 0) {
            iVar9 = iVar5;
          }
          goto LAB_0014ac28;
        }
        if (iVar5 == 0x36d05bfa) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_118);
          iVar9 = 0x557b5afc;
          if ((local_1f8 & 1) == 0) {
            iVar9 = -0x6249a9a1;
          }
        }
        else if (iVar5 == 0x3ce89306) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
          iVar9 = 0x189e2ead;
          if (local_118 != 0) {
            iVar9 = 0xd58e905;
          }
        }
      }
    }
    goto LAB_0014ac28;
  }
  if (iVar5 < 0x6104d60d) {
    if (iVar5 < 0x4faa85ac) {
      if (iVar5 < 0x4a611335) {
        if (iVar5 < 0x46db823f) {
          if (iVar5 == 0x43262065) {
            local_168 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b34)])
                                  (param_1,param_2,local_1f0,local_148);
            iVar9 = 0x4f4e0d64;
          }
          else if (iVar5 == 0x45f0f916) {
            iVar9 = -0x4faaccc3;
          }
        }
        else if (iVar5 == 0x46db823f) {
          iVar9 = 0x7c8a733a;
          if (9 < local_11c) {
            iVar9 = 0x530e065f;
          }
        }
        else if (iVar5 == 0x47faec38) {
          iVar9 = -0x6261a2f8;
          if (local_e8 != 0) {
            iVar9 = 0x4faa85ac;
          }
        }
      }
      else if (iVar5 < 0x4e8630c8) {
        iVar9 = 0x45f0f916;
        if ((iVar5 != 0x4a611335) && (iVar9 = iVar5, iVar5 == 0x4d4baf89)) {
          local_118 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b34)])
                                (param_1,local_c8,local_1a0);
          iVar9 = 0x3ce89306;
          if (local_118 != 0) {
            iVar9 = -0x7489cc6a;
          }
        }
      }
      else if (iVar5 == 0x4e8630c8) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_e0);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_c0);
        local_100 = 0;
        local_b4 = 1;
        iVar9 = 0x33697741;
      }
      else if (iVar5 == 0x4f4e0d64) {
        iVar9 = -0x411872f0;
        if (local_148 != 0) {
          iVar9 = 0xa0ab97c;
        }
        local_d8 = local_168;
      }
    }
    else if (iVar5 < 0x53b78251) {
      if (iVar5 < 0x530e065f) {
        if (iVar5 == 0x4faa85ac) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_e8);
          iVar9 = -0x6261a2f8;
        }
        else if (iVar5 == 0x52a726dc) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_e0);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_c0);
          local_100 = 0;
          local_b4 = 1;
          iVar9 = -0x3d8cc91;
        }
      }
      else if (iVar5 == 0x530e065f) {
        local_1f4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b35)])
                              (param_1,local_c8,local_1a8);
        cVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
        local_1bc = '\0';
        iVar9 = -0x120ab127;
        if (cVar4 != '\0') {
          iVar9 = -0x4f3e6204;
        }
      }
      else if (iVar5 == 0x536268a5) {
        iVar9 = -0x5ccff8a9;
        if (local_d0 != 0) {
          iVar9 = -0x40cff33e;
        }
        local_1a0 = local_188;
      }
    }
    else if (iVar5 < 0x568e5edf) {
      if (iVar5 == 0x53b78251) {
        iVar9 = 0xd861ed6;
        if (local_1d0 != 0) {
          iVar9 = 0x7312a380;
        }
        local_1b8 = local_190;
      }
      else if (iVar5 == 0x557b5afc) {
        local_f8 = local_c8;
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bb0)])
                  (param_1,local_c8,local_1b0,1);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
        local_b4 = 2;
        iVar9 = 0x29a16b56;
      }
    }
    else if (iVar5 == 0x568e5edf) {
      cVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8baf)])
                        (param_1,local_158,local_f0);
      local_120 = 0;
      iVar9 = 0x1ffe0a75;
      if (cVar4 != '\0') {
        iVar9 = -0x651d46a9;
      }
    }
    else if (iVar5 == 0x58593472) {
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                (&DAT_001fbf46,0x19,&DAT_0020428c,&DAT_001fbf46);
      local_d0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2c)])
                           (param_1,&DAT_001fbf46);
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                (&DAT_001fbf5f,0x1b,&DAT_00204290,&DAT_001fbf5f);
      local_128 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2c)])
                            (param_1,&DAT_001fbf5f);
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                (&DAT_001fbf7a,0x13,&DAT_00204294,&DAT_001fbf7a);
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                (&DAT_001fbf8d,0x1e,&DAT_00204298,&DAT_001fbf8d);
      local_1d0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                            (param_1,local_c0,&DAT_001fbf7a,&DAT_001fbf8d);
      iVar9 = -0x6e16467e;
      if (local_d0 != 0) {
        iVar9 = 0x2bbdf524;
      }
    }
    else if (iVar5 == 0x5cf2385e) {
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_130);
      iVar9 = 0x46db823f;
    }
    goto LAB_0014ac28;
  }
  if (iVar5 < 0x704f0434) {
    if (0x66cd5e7e < iVar5) {
      if (iVar5 < 0x6aac5c24) {
        if (iVar5 == 0x66cd5e7f) {
          iVar9 = -0x2243e8bc;
          if (local_f8 != 0) {
            iVar9 = -0x797f9ae4;
          }
        }
        else if (iVar5 == 0x6a9fc8a0) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_158);
          iVar9 = 0x6aac5c24;
        }
      }
      else if (iVar5 == 0x6aac5c24) {
        iVar9 = -0x1e6f522;
        if (local_138 != 0) {
          iVar9 = 0x2eef63b9;
        }
      }
      else if (iVar5 == 0x6db4a687) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_118);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_c8);
        local_b4 = 4;
        iVar9 = 0x4a611335;
      }
      else if (iVar5 == 0x703b19dc) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
        iVar9 = 0x20b97dca;
        if (local_108 != 0) {
          iVar9 = -0x42c34fb5;
        }
      }
      goto LAB_0014ac28;
    }
    if (0x62f8067e < iVar5) {
      if (iVar5 == 0x62f8067f) {
        local_100 = 0;
        local_b4 = 1;
        iVar9 = -0x48ba0030;
      }
      else if (iVar5 == 0x65e528d7) {
        local_180 = 0;
        iVar9 = 0x71a0d64a;
      }
      goto LAB_0014ac28;
    }
    if (iVar5 == 0x6104d60d) {
      cVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
      iVar9 = 0xb9d1040;
      if (cVar4 != '\0') {
        iVar9 = 0x19d5043b;
      }
      goto LAB_0014ac28;
    }
    if (iVar5 != 0x610726ec) goto LAB_0014ac28;
    if (local_b4 != 4) goto LAB_0014c538;
  }
  else {
    if (iVar5 < 0x757dfaca) {
      if (iVar5 < 0x71a0d64a) {
        if (iVar5 == 0x704f0434) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_d8);
          iVar9 = 0x4e8630c8;
        }
        else if (iVar5 == 0x718ce1ee) {
          local_188 = 0;
          iVar9 = 0x536268a5;
        }
      }
      else if (iVar5 == 0x71a0d64a) {
        iVar9 = -0x23248ed6;
        if (local_128 != 0) {
          iVar9 = -0x756c4c23;
        }
        local_1b0 = local_180;
      }
      else if (iVar5 == 0x7312a380) {
        iVar9 = 0xd861ed6;
        if (local_198 != 0) {
          iVar9 = -0x1aab0541;
        }
      }
      goto LAB_0014ac28;
    }
    if (0x7aefcb2f < iVar5) {
      if (iVar5 == 0x7aefcb30) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_f8);
        local_f8 = 0;
        iVar9 = 0x58593472;
      }
      else if (iVar5 == 0x7bb3245e) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                  (&DAT_001fbe9d,10,&DAT_00204270,&DAT_001fbe9d);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                  (&DAT_001fbea7,0x26,&DAT_00204274,&DAT_001fbea7);
        local_1f0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                              (param_1,local_e0,&DAT_001fbe9d,&DAT_001fbea7);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                  (&DAT_001fbecd,10,&DAT_00204278,&DAT_001fbecd);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                  (&DAT_001fbed7,0x41,&DAT_0020427c,&DAT_001fbed7);
        local_1c8 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                              (param_1,local_c0,&DAT_001fbecd,&DAT_001fbed7);
        iVar9 = 0x52a726dc;
        if (local_1f0 != 0) {
          iVar9 = 0x21e5f10f;
        }
      }
      else if (iVar5 == 0x7c8a733a) {
        uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b20)])(auStack_80);
        iVar9 = -0x742874d9;
        if ((uVar6 & 1) == 0) {
          iVar9 = -0x1626184d;
        }
      }
      goto LAB_0014ac28;
    }
    if (iVar5 != 0x757dfaca) {
      if (iVar5 == 0x79b64a75) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b36)])
                  (auStack_b0,param_1,local_130);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b39)])(auStack_98,auStack_b0);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b26)])(auStack_b0);
        iVar9 = 0x298fc0be;
      }
      goto LAB_0014ac28;
    }
  }
  local_11c = local_11c + 1;
  iVar9 = -0x3c054aa2;
  goto LAB_0014ac28;
}


