// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016cfe0; body: [[0016cfe0, 0016d623]]

undefined1  [16] FUN_0016cfe0(ulong param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  uint unaff_w26;
  undefined1 auVar7 [16];
  ulong local_a0;
  undefined1 local_94 [4];
  undefined1 auStack_90 [24];
  ulong local_78;
  ulong local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_78 = param_2;
  local_70 = param_1;
  uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_70);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aad)])(auStack_90,uVar4);
  iVar2 = -0x568d408c;
LAB_0016d0a8:
  do {
    while (iVar6 = iVar2, iVar2 = iVar6, -0x1e1a20f4 < iVar6) {
      if (iVar6 < 0x2487f7f8) {
        if (iVar6 < 0x1515b39e) {
          if (iVar6 == -0x1e1a20f3) {
            uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                              (param_3,local_70,auStack_90);
            iVar2 = -0x79520d4f;
            if ((uVar5 & 1) == 0) {
              iVar2 = -0x31a77e46;
            }
          }
          else if (iVar6 == -0x1c52f43c) {
            local_a0 = local_70 - 0x18;
            iVar2 = -0x4061531b;
            if (param_1 != local_a0) {
              iVar2 = 0x53038d2f;
            }
          }
          else if (iVar6 == 0xec04b82) {
            uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                              (param_3,local_78,auStack_90);
            iVar2 = 0x44411330;
            if ((uVar5 & 1) == 0) {
              iVar2 = -0x4b4a7301;
            }
          }
        }
        else if (iVar6 == 0x1515b39e) {
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                            (param_3,local_78,auStack_90);
          iVar2 = -0x2ed95fb6;
          if ((uVar5 & 1) == 0) {
            iVar2 = -0x20745e34;
          }
        }
        else if (iVar6 == 0x16f60d0b) {
          iVar2 = 0x728af7d9;
          if (param_1 != local_70 - 0x18) {
            iVar2 = -0x75e57839;
          }
        }
        else if (iVar6 == 0x23d50a23) {
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                            (param_3,local_70,auStack_90);
          iVar2 = -0x568d408c;
          if ((uVar5 & 1) == 0) {
            iVar2 = 0x16f60d0b;
          }
        }
      }
      else if (iVar6 < 0x53038d2f) {
        if (iVar6 == 0x2487f7f8) {
LAB_0016d0a0:
          iVar2 = -0x39b3e298;
        }
        else if (iVar6 == 0x2f0bf1a0) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&local_70,&local_78);
          iVar2 = -0x79520d4f;
        }
        else if (iVar6 == 0x44411330) {
          iVar2 = 0x5d521569;
        }
      }
      else if (iVar6 == 0x53038d2f) {
        uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b42)])(&local_a0);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(param_1,uVar4);
        iVar2 = -0x4061531b;
      }
      else if (iVar6 == 0x5d521569) {
        iVar2 = 0x2f0bf1a0;
        if (local_78 <= local_70) {
          iVar2 = -0x1c52f43c;
        }
      }
      else if (iVar6 == 0x728af7d9) {
LAB_0016d3a0:
        iVar2 = -0x72b4b455;
      }
    }
    if (iVar6 < -0x4185615b) {
      if (iVar6 < -0x568d408c) {
        if (iVar6 == -0x79520d4f) {
          local_70 = local_70 + 0x18;
          iVar2 = -0x1e1a20f3;
        }
        else {
          iVar2 = -0x20745e34;
          if ((iVar6 != -0x75e57839) && (iVar2 = iVar6, iVar6 == -0x72b4b455)) {
            unaff_w26 = 0;
            iVar2 = -0x41c2f6fd;
            if (local_78 <= local_70) {
              iVar2 = -0x25a77db2;
            }
          }
        }
      }
      else if (iVar6 == -0x568d408c) {
        local_70 = local_70 + 0x18;
        iVar2 = 0x23d50a23;
      }
      else if (iVar6 == -0x4b4a7301) {
        local_78 = local_78 - 0x18;
        iVar2 = 0xec04b82;
      }
      else if (iVar6 == -0x41c2f6fd) {
        local_78 = local_78 - 0x18;
        uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                          (param_3,local_78,auStack_90);
        unaff_w26 = uVar3 ^ 1;
        iVar2 = -0x25a77db2;
      }
      goto LAB_0016d0a8;
    }
    if (iVar6 < -0x2ed95fb6) {
      if (iVar6 < -0x39b3e298) {
        if (iVar6 == -0x4185615b) goto LAB_0016d3a0;
        if (iVar6 == -0x4061531b) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(local_a0,auStack_90);
          auVar7 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b5b)])
                             (&local_a0,local_94);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_90);
          if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          auVar7._8_8_ = auVar7._8_8_ & 0xff;
          return auVar7;
        }
      }
      else if (iVar6 == -0x39b3e298) {
        local_94[0] = local_78 <= local_70;
        iVar2 = 0x5d521569;
      }
      else if (iVar6 == -0x31a77e46) {
        iVar2 = -0x4b4a7301;
      }
    }
    else {
      if (iVar6 == -0x2ed95fb6) goto LAB_0016d0a0;
      if (iVar6 == -0x25a77db2) {
        iVar2 = -0x4185615b;
        if ((unaff_w26 & 1) == 0) {
          iVar2 = 0x2487f7f8;
        }
      }
      else if (iVar6 == -0x20745e34) {
        local_78 = local_78 - 0x18;
        iVar2 = 0x1515b39e;
      }
    }
  } while( true );
}


