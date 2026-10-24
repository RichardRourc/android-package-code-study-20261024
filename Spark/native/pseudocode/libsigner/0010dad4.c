// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0010dad4; body: [[0010dad4, 0010e263]]

void FUN_0010dad4(double *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  double unaff_x20;
  void *unaff_x21;
  double unaff_d8;
  double unaff_d9;
  void *local_a8;
  int local_9c;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar1 = -0x1600a62692a3eebb;
  if (*(char *)(param_1 + 1) != '\0') {
    lVar1 = 0x2ea5ec9aa4903e5;
  }
  local_9c = 0;
  local_a8 = (void *)0x0;
  lVar5 = 0x5f1d0a7f6212d984;
LAB_0010dc08:
  do {
    while (lVar4 = lVar5, lVar5 = lVar4, 0x41a203875b031c2 < lVar4) {
      if (lVar4 < 0x5e955a53164f3d9f) {
        if (lVar4 < 0x242c94bb96617abb) {
          lVar5 = -0x56bb61885886ae54;
          if (lVar4 != 0x41a203875b031c3) {
            if (lVar4 == 0xdc8188db88ec11b) {
              FUN_0011adb8(&local_9c,&local_a8);
              lVar5 = 0x7ededfa0c0eeb47a;
              if (local_9c != 0) {
                lVar5 = -0x220211bfb882d8f5;
              }
            }
            else {
              lVar5 = lVar4;
              if (lVar4 == 0x205d1929c40a5522) {
                FUN_002083ac(param_1 + 4,0x34);
                unaff_x20 = (double)((ulong)param_1[0x47] | 1);
                lVar5 = 0x79de56917a785edc;
              }
            }
          }
        }
        else if (lVar4 == 0x242c94bb96617abb) {
          lVar5 = -0x7f0dc9b3a3765301;
LAB_0010e1b8:
          *(undefined1 *)(param_1 + 1) = 1;
        }
        else if (lVar4 == 0x3132af798d39a4e3) {
          local_88 = 0;
          local_80 = 0;
          FUN_001f3abc(0,&local_88);
          unaff_d8 = (double)local_80 / 1000000.0 + (double)local_88 * 1000.0;
          lVar5 = 0x242c94bb96617abb;
          if (unaff_d8 - *param_1 <= 15000.0) {
            lVar5 = 0x5c75d317cff2739f;
          }
        }
        else if (lVar4 == 0x5c75d317cff2739f) {
          lVar5 = -0x7f0dc9b3a3765301;
        }
      }
      else if (lVar4 < 0x67be2c6e2af44868) {
        if (lVar4 == 0x5e955a53164f3d9f) {
          iVar3 = FUN_001e2ed0(param_1[0x4e],local_a8);
          lVar5 = -0x439fbf751afe062;
          if (iVar3 != 0) {
            lVar5 = -0x2b0b93cebcb1988a;
          }
        }
        else {
          lVar5 = lVar1;
          if ((lVar4 != 0x5f1d0a7f6212d984) && (lVar5 = lVar4, lVar4 == 0x66d97625bdcfaa84)) {
            lVar5 = -0x6d921b62c4f75c37;
          }
        }
      }
      else if (lVar4 == 0x67be2c6e2af44868) {
        lVar5 = -0xd437930309f4927;
        if (local_9c != 0) {
          lVar5 = -0x59acc9f9846a69a9;
        }
      }
      else if (lVar4 == 0x79de56917a785edc) {
        param_1[0x47] = (double)((ulong)unaff_x20 | 0x10000000000200);
        lVar5 = 0x66d97625bdcfaa84;
        unaff_x21 = local_a8;
        if (local_a8 != (void *)0x0) {
          lVar5 = -0x50b71c6a4dd660bb;
        }
      }
      else if (lVar4 == 0x7ededfa0c0eeb47a) {
        lVar5 = 0x3132af798d39a4e3;
        if (*(char *)(param_1 + 1) != '\0') {
          lVar5 = -0x5bdd334f52bdd63b;
        }
      }
    }
    if (lVar4 < -0x220211bfb882d8f5) {
      if (lVar4 < -0x56bb61885886ae54) {
        if (lVar4 < -0x5bdd334f52bdd63b) {
          if (lVar4 == -0x7f0dc9b3a3765301) {
            *param_1 = unaff_d8;
            lVar5 = 0x5e955a53164f3d9f;
          }
          else if (lVar4 == -0x6d921b62c4f75c37) {
            if (*(long *)(lVar2 + 0x28) == local_78) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
        else {
          lVar5 = 0x5e955a53164f3d9f;
          if ((lVar4 != -0x5bdd334f52bdd63b) && (lVar5 = lVar4, lVar4 == -0x59acc9f9846a69a9)) {
            lVar5 = 0x205d1929c40a5522;
          }
        }
      }
      else if (lVar4 == -0x56bb61885886ae54) {
        *param_1 = unaff_d9;
        lVar5 = 0xdc8188db88ec11b;
      }
      else if (lVar4 == -0x50b71c6a4dd660bb) {
        free(unaff_x21);
        lVar5 = -0x6d921b62c4f75c37;
      }
      else if (lVar4 == -0x2b0b93cebcb1988a) {
        FUN_002083ac(param_1 + 4,9);
        param_1[0x47] = (double)((ulong)param_1[0x47] | 1);
        lVar5 = 0x67be2c6e2af44868;
      }
      goto LAB_0010dc08;
    }
    if (lVar4 < -0xd437930309f4927) {
      lVar5 = 0x205d1929c40a5522;
      if (lVar4 != -0x220211bfb882d8f5) {
        if (lVar4 == -0x1d6a050721dd3e21) {
          lVar5 = -0x56bb61885886ae54;
          goto LAB_0010e1b8;
        }
        lVar5 = lVar4;
        if (lVar4 == -0x1600a62692a3eebb) {
          local_98 = 0;
          local_90 = 0;
          FUN_001f3abc(0,&local_98);
          unaff_d9 = (double)local_90 / 1000000.0 + (double)local_98 * 1000.0;
          lVar5 = -0x1d6a050721dd3e21;
          if (unaff_d9 - *param_1 <= 15000.0) {
            lVar5 = 0x41a203875b031c3;
          }
        }
      }
    }
    else if (lVar4 == -0xd437930309f4927) {
      unaff_x20 = param_1[0x47];
      lVar5 = 0x79de56917a785edc;
    }
    else {
      lVar5 = 0x67be2c6e2af44868;
      if ((lVar4 != -0x439fbf751afe062) && (lVar5 = lVar4, lVar4 == 0x2ea5ec9aa4903e5)) {
        lVar5 = 0xdc8188db88ec11b;
      }
    }
  } while( true );
}


