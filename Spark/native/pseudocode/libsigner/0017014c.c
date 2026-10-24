// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0017014c; body: [[0017014c, 001706d7]]

void FUN_0017014c(int *param_1,long *param_2,long param_3,undefined8 *param_4,size_t *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int unaff_w19;
  size_t unaff_x24;
  int unaff_w25;
  void *unaff_x26;
  
  lVar1 = -0x7ad67c16664e25fa;
  if (param_3 != 0) {
    lVar1 = -0x23395a9e9c848352;
  }
  lVar2 = 0x4d5d50fcdd4992d2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (lVar3 = lVar2, lVar2 = lVar3, 0x1552bb494d897f7d < lVar3) {
              if (lVar3 < 0x4d5d50fcdd4992d2) {
                if (lVar3 < 0x2352f2d6b10786ab) {
                  if (lVar3 == 0x1552bb494d897f7e) {
                    lVar2 = -0x73716f9563fa402;
                    if (*param_1 != 0) {
                      lVar2 = -0x503101e48cc58732;
                    }
                  }
                  else if (lVar3 == 0x1b91058c21da9ca7) {
                    (**(code **)(*param_2 + 0x80))(param_2);
                    (**(code **)(*param_2 + 0x88))(param_2);
                    unaff_w19 = 0x1b;
                    lVar2 = 0x3c2595d6266c5998;
                  }
                }
                else if (lVar3 == 0x2352f2d6b10786ab) {
                  unaff_w19 = 2;
                  lVar2 = 0x3c2595d6266c5998;
                }
                else if (lVar3 == 0x3c2595d6266c5998) {
                  *param_1 = unaff_w19;
                  lVar2 = -0xf8d0ba03b2e0b85;
                }
              }
              else if (lVar3 < 0x5f1d0a7f6212d984) {
                lVar2 = lVar1;
                if ((lVar3 != 0x4d5d50fcdd4992d2) && (lVar2 = lVar3, lVar3 == 0x5127e420c2beb41f)) {
                  lVar2 = 0x5f1d0a7f6212d984;
                }
              }
              else if (lVar3 == 0x5f1d0a7f6212d984) {
                *param_4 = 0;
                *param_5 = 0;
                free(unaff_x26);
                lVar2 = 0x2ea5ec9aa4903e5;
              }
              else if (lVar3 == 0x719dbab015af25c6) {
                (**(code **)(*param_2 + 0x80))(param_2);
                (**(code **)(*param_2 + 0x88))(param_2);
                *param_1 = 0x1b;
                lVar2 = 0x5f1d0a7f6212d984;
              }
            }
            if (-0x22526e95d7366020 < lVar3) break;
            if (lVar3 < -0x38b0832f7743f2b8) {
              if (lVar3 == -0x7ad67c16664e25fa) {
                unaff_w19 = 3;
                lVar2 = 0x3c2595d6266c5998;
              }
              else if (lVar3 == -0x503101e48cc58732) {
                lVar2 = -0xf8d0ba03b2e0b85;
              }
            }
            else {
              lVar2 = 0x2ea5ec9aa4903e5;
              if ((lVar3 != -0x38b0832f7743f2b8) && (lVar2 = lVar3, lVar3 == -0x23395a9e9c848352)) {
                unaff_w25 = (**(code **)(*param_2 + 0x558))(param_2,param_3);
                lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
                lVar2 = 0x1552bb494d897f7e;
                if (lVar3 != 0) {
                  lVar2 = 0x1b91058c21da9ca7;
                }
              }
            }
          }
          if (-0x73716f9563fa403 < lVar3) break;
          if (lVar3 == -0x22526e95d736601f) {
            (**(code **)(*param_2 + 0x640))(param_2,param_3,0,unaff_w25,unaff_x26);
            lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar2 = 0xf8f9546f45fbb47;
            if (lVar3 != 0) {
              lVar2 = 0x719dbab015af25c6;
            }
          }
          else if (lVar3 == -0xf8d0ba03b2e0b85) {
            *param_4 = 0;
            *param_5 = 0;
            lVar2 = 0x2ea5ec9aa4903e5;
          }
        }
        if (lVar3 != -0x73716f9563fa402) break;
        unaff_x24 = (size_t)unaff_w25;
        unaff_x26 = calloc(unaff_x24,1);
        lVar2 = 0x2352f2d6b10786ab;
        if (unaff_x26 != (void *)0x0) {
          lVar2 = -0x22526e95d736601f;
        }
      }
      if (lVar3 != 0xf8f9546f45fbb47) break;
      *param_4 = unaff_x26;
      *param_5 = unaff_x24;
      lVar2 = -0x38b0832f7743f2b8;
      if (*param_1 != 0) {
        lVar2 = 0x5127e420c2beb41f;
      }
    }
  } while (lVar3 != 0x2ea5ec9aa4903e5);
  return;
}


