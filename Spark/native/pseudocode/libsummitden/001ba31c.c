// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ba31c; body: [[001ba31c, 001ba8fb]]

int FUN_001ba31c(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                undefined4 param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  int unaff_w25;
  long unaff_x26;
  uint unaff_w27;
  uint unaff_w28;
  long local_90;
  undefined4 local_88;
  int local_84;
  char local_6c [4];
  long local_68;
  
  lVar2 = tpidr_el0;
  uVar8 = 0x2026b0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_6c[0] = '\x01';
  uVar4 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                    (param_1,param_2,param_3 + 4,local_6c);
  iVar5 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                    (param_1,param_2,param_3 + 8,local_6c);
  iVar1 = 0x7fcadaa0;
  if (local_6c[0] == '\0') {
    iVar1 = -0x7d79e498;
  }
  uVar7 = param_1;
  iVar3 = -0x5b5546d8;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar6 = iVar3, iVar3 = iVar6, -0x256fd4d8 < iVar6) {
            if (iVar6 < 0x318d3a21) {
              if (iVar6 < -0x18aae7eb) {
                if (iVar6 == -0x256fd4d7) {
                  iVar3 = -0x692b923c;
                  unaff_w28 = unaff_w27;
                }
                else if (iVar6 == -0x2256bb33) {
                  unaff_w25 = 0;
                  uVar7 = 1;
                  iVar3 = 0x7363f51c;
                }
                else if (iVar6 == -0x1dd56ea8) {
                  uVar7 = 0;
                  iVar3 = 0x73749f67;
                }
              }
              else {
                iVar3 = -0x369b32f0;
                if (iVar6 != -0x18aae7eb) {
                  if (iVar6 == -0xf02bfb5) {
                    iVar3 = -0x2d4c0788;
                    if (unaff_w28 <= uVar8) {
                      iVar3 = -0x2256bb33;
                    }
                  }
                  else {
                    iVar3 = iVar6;
                    if (iVar6 == -0x818f832) {
                      unaff_x26 = 0;
                      iVar3 = -0x4fb37436;
                    }
                  }
                }
              }
            }
            else if (iVar6 < 0x7363f51c) {
              if (iVar6 == 0x318d3a21) {
                local_88 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                                     (param_1,param_2,param_3,local_6c);
                iVar3 = -0x70ec75f2;
                if (local_6c[0] == '\0') {
                  iVar3 = -0x818f832;
                }
              }
              else if (iVar6 == 0x330c3adb) {
                unaff_w25 = 0;
                uVar7 = 1;
                iVar3 = -0x18aae7eb;
              }
              else if (iVar6 == 0x4b9cf2f5) {
                iVar3 = -0x256fd4d7;
                if (local_84 < 1) {
                  iVar3 = -0x3d3a6484;
                }
              }
            }
            else {
              iVar3 = -0x6640dbea;
              if (((iVar6 != 0x7363f51c) && (iVar3 = -0x18aae7eb, iVar6 != 0x73749f67)) &&
                 (iVar3 = iVar6, iVar6 == 0x7fcadaa0)) {
                uVar8 = 0;
                iVar3 = -0xf02bfb5;
                unaff_w28 = uVar4;
              }
            }
          }
          if (iVar6 < -0x56c61cb6) break;
          if (iVar6 < -0x369b32f0) {
            if (iVar6 == -0x56c61cb6) {
              unaff_w25 = 0;
              uVar7 = 1;
              iVar3 = -0x369b32f0;
            }
            else if (iVar6 == -0x4fb37436) {
              iVar3 = 0x330c3adb;
              local_90 = unaff_x26;
              if (unaff_x26 != 0) {
                iVar3 = -0x31e0de7c;
              }
            }
            else if (iVar6 == -0x3d3a6484) {
              uVar7 = 1;
              iVar3 = 0x73749f67;
              unaff_w25 = param_3;
            }
          }
          else if (iVar6 == -0x369b32f0) {
            iVar3 = -0xf02bfb5;
            if ((int)uVar7 != 0) {
              iVar3 = -0x6640dbea;
            }
          }
          else if (iVar6 == -0x31e0de7c) {
            local_84 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caaca)])
                                 (local_90,param_4,param_5);
            iVar3 = -0x7f7b9113;
            if (-1 < local_84) {
              iVar3 = 0x4b9cf2f5;
            }
          }
          else if (iVar6 == -0x2d4c0788) {
            unaff_w27 = unaff_w28 + uVar8 >> 1;
            param_3 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                                (param_1,param_2,iVar5 + unaff_w27 * 4,local_6c);
            iVar3 = 0x318d3a21;
            if (local_6c[0] == '\0') {
              iVar3 = -0x56c61cb6;
            }
          }
        }
        if (-0x692b923d < iVar6) break;
        if (iVar6 == -0x7f7b9113) {
          uVar8 = unaff_w27 + 1;
          iVar3 = -0x1dd56ea8;
        }
        else if (iVar6 == -0x7d79e498) {
          uVar7 = 1;
          iVar3 = -0x6640dbea;
          unaff_w25 = 0;
        }
        else if (iVar6 == -0x70ec75f2) {
          unaff_x26 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2c)])
                                (param_1,param_2,local_88);
          iVar3 = -0x4fb37436;
        }
      }
      if (iVar6 < -0x61495e76) break;
      iVar3 = -0xf02bfb5;
      if ((iVar6 != -0x61495e76) && (iVar3 = iVar6, iVar6 == -0x5b5546d8)) {
        iVar3 = iVar1;
      }
    }
    iVar3 = -0x1dd56ea8;
  } while ((iVar6 == -0x692b923c) || (iVar3 = iVar6, iVar6 != -0x6640dbea));
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_w25;
}


