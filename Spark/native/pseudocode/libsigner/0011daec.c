// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0011daec; body: [[0011daec, 0011e7df]]

void FUN_0011daec(int *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long local_d8;
  void *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  int local_9c;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined1 local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_6c = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  local_9c = 0;
  FUN_0011d148();
  puVar1 = (undefined1 *)0xaf48e395b2299f45;
  if (*param_1 != 0) {
    puVar1 = (undefined1 *)0x66d97625bdcfaa84;
  }
  puVar3 = (undefined1 *)0x79de56917a785edc;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar6 = puVar3, puVar3 = puVar6, (long)puVar6 < -0x84c52306e77ef0a) {
            if ((long)puVar6 < -0x3d195e45a87c496a) {
              if ((long)puVar6 < -0x51d504ef14920bb2) {
                if ((long)puVar6 < -0x6d921b62c4f75c37) {
                  puVar3 = (undefined1 *)0xd746c07de834a28d;
                  if ((puVar6 != (undefined1 *)0x8d9cde8a92cc3625) &&
                     (puVar3 = puVar6, puVar6 == (undefined1 *)0x9069f9d096a544a9)) {
                    (**(code **)(*param_2 + 0xb8))(param_2,local_c0);
                    puVar3 = (undefined1 *)0xc0982d9fe51200a2;
                  }
                }
                else if (puVar6 == (undefined1 *)0x926de49d3b08a3c9) {
                  *param_1 = 0x1b;
                  puVar3 = (undefined1 *)0xd746c07de834a28d;
                }
                else {
                  puVar3 = (undefined1 *)0xd746c07de834a28d;
                  if ((puVar6 != (undefined1 *)0x939eea0b05eec05c) &&
                     (puVar3 = puVar6, puVar6 == &DAT_9e2090a1498a3988)) {
                    (**(code **)(*param_2 + 0xb8))(param_2,local_b8);
                    puVar3 = (undefined1 *)0xf237c2013c1c6fa2;
                  }
                }
              }
              else if ((long)puVar6 < -0x4d26439e9e0082d2) {
                if (puVar6 == (undefined1 *)0xae2afb10eb6df44e) {
                  iVar4 = FUN_00212730(0,1,&DAT_0021f1cc);
                  puVar3 = (undefined1 *)0xc2e6a1ba5783b696;
                  if (iVar4 != 0) {
                    puVar3 = (undefined1 *)0xec0931088cffa169;
                  }
                }
                else if (puVar6 == (undefined1 *)0xaf48e395b2299f45) {
                  local_d8 = (**(code **)(*param_2 + 0x568))(param_2,local_78,0);
                  uVar5 = FUN_0016de70(param_2);
                  puVar3 = (undefined1 *)0x926de49d3b08a3c9;
                  if ((uVar5 & 1) == 0 && local_d8 != 0) {
                    puVar3 = (undefined1 *)0x5aba0b6a880053f8;
                  }
                }
              }
              else if (puVar6 == (undefined1 *)0xb2d9bc6161ff7d2e) {
                local_88 = 0;
                local_b8 = local_80;
                puVar3 = &DAT_9e2090a1498a3988;
                if (local_80 == 0 || param_2 == (long *)0x0) {
                  puVar3 = (undefined1 *)0x5ef7b9568d6b3c0a;
                }
              }
              else if (puVar6 == (undefined1 *)0xb5973310192f9ea8) {
                *param_1 = 2;
                puVar3 = (undefined1 *)0xd746c07de834a28d;
              }
              else if (puVar6 == (undefined1 *)0xc0982d9fe51200a2) {
                local_c8 = local_78;
                local_90 = 0;
                puVar3 = (undefined1 *)0x35d73c47b28080e6;
                if (local_78 == 0 || param_2 == (long *)0x0) {
                  puVar3 = (undefined1 *)0xdc9ddaed2293c02d;
                }
              }
            }
            else if ((long)puVar6 < -0x23622512dd6c3fd3) {
              if ((long)puVar6 < -0x3b36a94381d4e3a6) {
                if (puVar6 == (undefined1 *)0xc2e6a1ba5783b696) {
                  puVar3 = (undefined1 *)0x616167e75f9c95a2;
                  if (DAT_0021f1cd == '\0') {
                    puVar3 = (undefined1 *)0x236d10b4e1dc5a1e;
                  }
                }
                else if (puVar6 == (undefined1 *)0xc33d4c2e9c01bfd9) {
                  puVar3 = (undefined1 *)0x5f3fddf8e2fc9ebc;
                  if (local_9c != 0x14) {
                    puVar3 = (undefined1 *)0xe1040badb9b8aca8;
                  }
                }
              }
              else if (puVar6 == &DAT_c4c956bc7e2b1c5a) {
                FUN_0018ce64(param_1,param_2,local_88,local_80);
                puVar3 = (undefined1 *)0xf7b3adcf918810f6;
                if (*param_1 != 0) {
                  puVar3 = (undefined1 *)0x8d9cde8a92cc3625;
                }
              }
              else if (puVar6 == (undefined1 *)0xcbd3ad62bd885e21) {
                FUN_001712c0(param_2,local_90,local_a8);
                puVar3 = (undefined1 *)0x5602aba7b2fd1776;
              }
              else if (puVar6 == (undefined1 *)0xd746c07de834a28d) {
                local_a8 = local_98;
                puVar3 = (undefined1 *)0xfaa36b650a651891;
                if (local_98 != 0) {
                  puVar3 = (undefined1 *)0xcbd3ad62bd885e21;
                }
              }
            }
            else if ((long)puVar6 < -0x13f6cef773005e97) {
              puVar3 = (undefined1 *)0x6b90417ce1ccb7ee;
              if ((puVar6 != (undefined1 *)0xdc9ddaed2293c02d) &&
                 (puVar3 = puVar6, puVar6 == (undefined1 *)0xe1040badb9b8aca8)) {
                *param_1 = 0x13;
                puVar3 = (undefined1 *)0xd746c07de834a28d;
              }
            }
            else {
              puVar3 = (undefined1 *)0xae2afb10eb6df44e;
              if (puVar6 != (undefined1 *)0xec0931088cffa169) {
                if (puVar6 == (undefined1 *)0xf237c2013c1c6fa2) {
                  local_c0 = local_90;
                  local_80 = 0;
                  puVar3 = (undefined1 *)0x9069f9d096a544a9;
                  if (local_90 == 0 || param_2 == (long *)0x0) {
                    puVar3 = (undefined1 *)0x225f8dd9081ebc43;
                  }
                }
                else {
                  puVar3 = puVar6;
                  if (puVar6 == (undefined1 *)0xf57a82b25c35fe2a) {
                    FUN_001707f8(param_1,param_2,local_90,&local_98,&local_9c);
                    puVar3 = (undefined1 *)0xc33d4c2e9c01bfd9;
                    if (*param_1 != 0) {
                      puVar3 = (undefined1 *)0x70aaef16e8748d67;
                    }
                  }
                }
              }
            }
          }
          if (0x5602aba7b2fd1775 < (long)puVar6) break;
          if ((long)puVar6 < 0x236d10b4e1dc5a1e) {
            if ((long)puVar6 < -0x2f698491beb5022) {
              if (puVar6 == (undefined1 *)0xf7b3adcf918810f6) {
                FUN_0018d894(param_1,param_2,local_88,0,&local_90);
                puVar3 = (undefined1 *)0xf57a82b25c35fe2a;
                if (*param_1 != 0) {
                  puVar3 = (undefined1 *)0x1f2c3b62b1679b;
                }
              }
              else if (puVar6 == (undefined1 *)0xfaa36b650a651891) {
                puVar3 = (undefined1 *)0x5602aba7b2fd1776;
              }
            }
            else if (puVar6 == (undefined1 *)0xfd0967b6e414afde) {
              DAT_0021f1cc = 0;
              FUN_0018be4c(param_1,param_2,&DAT_0021c0b4,&local_88);
              puVar3 = &DAT_c4c956bc7e2b1c5a;
              if (*param_1 != 0) {
                puVar3 = (undefined1 *)0x939eea0b05eec05c;
              }
            }
            else {
              puVar3 = (undefined1 *)0xd746c07de834a28d;
              if ((puVar6 != (undefined1 *)0x1f2c3b62b1679b) &&
                 (puVar3 = puVar6, puVar6 == (undefined1 *)0x225f8dd9081ebc43)) {
                puVar3 = (undefined1 *)0xc0982d9fe51200a2;
              }
            }
          }
          else if ((long)puVar6 < 0x332dfd522f05c93c) {
            if (puVar6 == (undefined1 *)0x236d10b4e1dc5a1e) {
              DAT_0021c0b4 = DAT_0021c0b4 ^ 0x38;
              DAT_0021c0b5 = DAT_0021c0b5 ^ 0x38;
              DAT_0021c0b6 = DAT_0021c0b6 ^ 0x38;
              DAT_0021c0b7 = DAT_0021c0b7 ^ 0x38;
              DAT_0021c0b8 = DAT_0021c0b8 ^ 0x38;
              DAT_0021f1cd = '\x01';
              puVar3 = (undefined1 *)0xfd0967b6e414afde;
            }
            else if (puVar6 == (undefined1 *)0x255edd958a6bac09) {
              puVar3 = (undefined1 *)0xb2d9bc6161ff7d2e;
            }
          }
          else if (puVar6 == (undefined1 *)0x332dfd522f05c93c) {
            FUN_00202e44(local_98,0x14,local_d0);
            *param_5 = local_d0;
            *param_6 = 0x28;
            puVar3 = (undefined1 *)0xd746c07de834a28d;
          }
          else if (puVar6 == (undefined1 *)0x35d73c47b28080e6) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_c8);
            puVar3 = (undefined1 *)0x6b90417ce1ccb7ee;
          }
          else if (puVar6 == (undefined1 *)0x4dc5ede807dc3016) {
            puVar3 = (undefined1 *)0xd746c07de834a28d;
          }
        }
        if (0x635f31928f91aac4 < (long)puVar6) break;
        if ((long)puVar6 < 0x5ef7b9568d6b3c0a) {
          if (puVar6 == (undefined1 *)0x5602aba7b2fd1776) {
            local_b0 = local_88;
            puVar3 = (undefined1 *)0x700353e7f52f2541;
            if (local_88 == 0 || param_2 == (long *)0x0) {
              puVar3 = (undefined1 *)0x255edd958a6bac09;
            }
          }
          else if (puVar6 == (undefined1 *)0x5aba0b6a880053f8) {
            FUN_0019e4f0(param_1,param_2,local_d8,&local_80);
            puVar3 = (undefined1 *)0x635f31928f91aac5;
            if (*param_1 != 0) {
              puVar3 = (undefined1 *)0x4dc5ede807dc3016;
            }
          }
        }
        else {
          puVar3 = (undefined1 *)0xf237c2013c1c6fa2;
          if (puVar6 != (undefined1 *)0x5ef7b9568d6b3c0a) {
            if (puVar6 == (undefined1 *)0x5f3fddf8e2fc9ebc) {
              local_d0 = calloc(0x29,1);
              puVar3 = (undefined1 *)0xb5973310192f9ea8;
              if (local_d0 != (void *)0x0) {
                puVar3 = (undefined1 *)0x332dfd522f05c93c;
              }
            }
            else {
              puVar3 = puVar6;
              if (puVar6 == (undefined1 *)0x616167e75f9c95a2) {
                puVar3 = (undefined1 *)0xfd0967b6e414afde;
              }
            }
          }
        }
      }
      if ((long)puVar6 < 0x700353e7f52f2541) break;
      if (puVar6 == (undefined1 *)0x700353e7f52f2541) {
        (**(code **)(*param_2 + 0xb8))(param_2,local_b0);
        puVar3 = (undefined1 *)0xb2d9bc6161ff7d2e;
      }
      else {
        puVar3 = (undefined1 *)0xd746c07de834a28d;
        if ((puVar6 != (undefined1 *)0x70aaef16e8748d67) &&
           (puVar3 = puVar6, puVar6 == (undefined1 *)0x79de56917a785edc)) {
          puVar3 = puVar1;
        }
      }
    }
    puVar3 = (undefined1 *)0xae2afb10eb6df44e;
  } while (((puVar6 == (undefined1 *)0x635f31928f91aac5) ||
           (puVar3 = (undefined1 *)0xd746c07de834a28d, puVar6 == (undefined1 *)0x66d97625bdcfaa84))
          || (puVar3 = puVar6, puVar6 != (undefined1 *)0x6b90417ce1ccb7ee));
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


