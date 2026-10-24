// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0016cae0; body: [[0016cae0, 0016d0e7]]

void FUN_0016cae0(int *param_1,long *param_2,undefined8 param_3,size_t *param_4,undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong unaff_x19;
  char *unaff_x23;
  long unaff_x24;
  size_t unaff_x25;
  void *unaff_x26;
  char *local_a8;
  int local_9c;
  int local_7c;
  char *local_78;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_78 = (char *)0x0;
  local_70 = 0;
  local_7c = 0;
  FUN_0016f5c4();
  lVar1 = 0x1db468c64d6a7ed0;
  if (*param_1 != 0) {
    lVar1 = -0x29504ee3cf2d5633;
  }
  lVar2 = 0x483dcbc36ada42c4;
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while (lVar4 = lVar2, lVar2 = lVar4, -0x244c08061ede3ca7 < lVar4) {
              if (lVar4 < 0x483dcbc36ada42c4) {
                if (lVar4 < 0x1db468c64d6a7ed0) {
                  if (lVar4 == -0x244c08061ede3ca6) {
                    lVar2 = -0x59bab4f8732095e2;
                    unaff_x24 = local_70;
                    if (local_70 == 0 || param_2 == (long *)0x0) {
                      lVar2 = 0x4101bf80446bdc20;
                    }
                  }
                  else if (lVar4 == -0x428109008685f48) {
                    FUN_001712c0(param_2,local_70,unaff_x23);
                    lVar2 = -0x244c08061ede3ca6;
                  }
                }
                else if (lVar4 == 0x1db468c64d6a7ed0) {
                  FUN_001707f8(param_1,param_2,local_70,&local_78,&local_7c);
                  lVar2 = 0x54c2b837d86711b8;
                  if (*param_1 != 0) {
                    lVar2 = -0x3cc327df2eecc1c6;
                  }
                }
                else if (lVar4 == 0x4101bf80446bdc20) {
                  lVar2 = 0x54cc8c62117e2258;
                }
              }
              else if (lVar4 < 0x54c2b837d86711b8) {
                lVar2 = lVar1;
                if ((lVar4 != 0x483dcbc36ada42c4) && (lVar2 = lVar4, lVar4 == 0x53e14c28908eeeeb)) {
                  lVar2 = -0x244c08061ede3ca6;
                }
              }
              else if (lVar4 == 0x54c2b837d86711b8) {
                local_9c = local_7c;
                lVar2 = -0x2eb8ff3123f5eabc;
                if (local_7c != 0) {
                  lVar2 = 0x55dcd19dee737a1a;
                }
              }
              else if (lVar4 == 0x54cc8c62117e2258) {
                lVar2 = -0x7447e788f4d32ac9;
                if (*param_1 != 0) {
                  lVar2 = -0x50e54cd80f265318;
                }
              }
              else if (lVar4 == 0x55dcd19dee737a1a) {
                local_a8 = local_78;
                unaff_x19 = (ulong)(*local_78 == '\0');
                unaff_x25 = (size_t)(int)(local_9c - (uint)(*local_78 == '\0'));
                *param_4 = unaff_x25;
                unaff_x26 = calloc(unaff_x25,1);
                lVar2 = -0x5412c5352f1dc37a;
                if (unaff_x26 != (void *)0x0) {
                  lVar2 = -0x2e5d71d46d443370;
                }
                *param_5 = unaff_x26;
              }
            }
            if (-0x3cc327df2eecc1c7 < lVar4) break;
            if (lVar4 < -0x56ad058abb7434bf) {
              lVar2 = -0x359d4e10b3bbbc3c;
              if ((lVar4 != -0x7447e788f4d32ac9) && (lVar2 = lVar4, lVar4 == -0x59bab4f8732095e2)) {
                (**(code **)(*param_2 + 0xb8))(param_2,unaff_x24);
                lVar2 = 0x54cc8c62117e2258;
              }
            }
            else if (lVar4 == -0x56ad058abb7434bf) {
              lVar2 = 0x53e14c28908eeeeb;
              unaff_x23 = local_78;
              if (local_78 != (char *)0x0) {
                lVar2 = -0x428109008685f48;
              }
            }
            else if (lVar4 == -0x5412c5352f1dc37a) {
              *param_1 = 2;
              lVar2 = -0x56ad058abb7434bf;
            }
            else if (lVar4 == -0x50e54cd80f265318) {
              *param_4 = 0;
              *param_5 = 0;
              lVar2 = -0x359d4e10b3bbbc3c;
            }
          }
          if (lVar4 < -0x2e5d71d46d443370) break;
          if (lVar4 == -0x2e5d71d46d443370) {
            memcpy(unaff_x26,local_a8 + (unaff_x19 & 1),unaff_x25);
            lVar2 = -0x56ad058abb7434bf;
          }
          else if (lVar4 == -0x29504ee3cf2d5633) {
            lVar2 = -0x56ad058abb7434bf;
          }
        }
        lVar2 = -0x56ad058abb7434bf;
      } while (lVar4 == -0x3cc327df2eecc1c6);
      if (lVar4 != -0x2eb8ff3123f5eabc) break;
      *param_1 = 0x1b;
      lVar2 = -0x56ad058abb7434bf;
    }
    lVar2 = lVar4;
  } while (lVar4 != -0x359d4e10b3bbbc3c);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


