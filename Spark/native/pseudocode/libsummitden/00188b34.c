// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00188b34; body: [[00188b34, 00189043]]

void FUN_00188b34(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  int iVar6;
  uint unaff_w26;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b592)])(param_1);
  lVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b581)])(param_2);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b593)])(param_1,lVar3 + 8);
  local_70 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b586)])(param_2);
  local_78 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b587)])(param_2);
  iVar2 = -0x1e92467b;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar6 = iVar2, iVar2 = iVar6, iVar6 < -0x1a31ebce) {
            if (iVar6 < -0x37ccfe77) {
              if (iVar6 < -0x40fb5f27) {
                if (iVar6 == -0x6847fb58) {
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001fffed,3,&DAT_00204748,&DAT_001fffed);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b591)])
                            (param_1,&DAT_001fffed);
                  iVar2 = 0x55a3f145;
                }
                else if (iVar6 == -0x5992db7a) {
                  iVar2 = -0x6847fb58;
                  if ((unaff_w26 & 0xff) != 0x5c) {
                    iVar2 = 0x5581a3d8;
                  }
                }
              }
              else if (iVar6 == -0x40fb5f27) {
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(param_1);
                iVar2 = -0xbff329b;
              }
              else if (iVar6 == -0x3c8b4ea8) {
                iVar2 = -0x1afd9bc7;
              }
            }
            else if (iVar6 < -0x1e92467b) {
              iVar2 = 0x240c86c8;
              if ((iVar6 != -0x37ccfe77) && (iVar2 = iVar6, iVar6 == -0x29dc093b)) {
                iVar2 = 0x74e6ac17;
                if ((unaff_w26 & 0xff) != 0xd) {
                  iVar2 = -0x5992db7a;
                }
              }
            }
            else if (iVar6 == -0x1e92467b) {
              uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b584)])
                                (&local_70,&local_78);
              iVar2 = -0x4c8a53;
              if ((uVar4 & 1) == 0) {
                iVar2 = -0x3c8b4ea8;
              }
            }
            else if (iVar6 == -0x1afd9bc7) {
              iVar2 = -0xbff329b;
            }
          }
          if (iVar6 < 0x4dd03039) break;
          if (iVar6 < 0x55a3f145) {
            if (iVar6 == 0x4dd03039) {
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5fb)])(&local_70);
              iVar2 = -0x1e92467b;
            }
            else if (iVar6 == 0x5581a3d8) {
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5fa)])(param_1,unaff_w26);
              iVar2 = 0x55a3f145;
            }
          }
          else {
            iVar2 = -0x37ccfe77;
            if ((iVar6 != 0x55a3f145) && (iVar2 = iVar6, iVar6 == 0x74e6ac17)) {
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                        (&DAT_001fffea,3,&DAT_00204744,&DAT_001fffea);
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b591)])
                        (param_1,&DAT_001fffea);
              iVar2 = -0x37ccfe77;
            }
          }
        }
        if (iVar6 < -0x4c8a53) break;
        if (iVar6 == -0x4c8a53) {
          pbVar5 = (byte *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b585)])
                                     (&local_70);
          unaff_w26 = (uint)*pbVar5;
          iVar2 = -0x1a31ebce;
          if (*pbVar5 != 10) {
            iVar2 = -0x29dc093b;
          }
        }
        else if (iVar6 == 0x240c86c8) {
          iVar2 = 0x4dd03039;
        }
      }
      if (iVar6 != -0x1a31ebce) break;
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_001fffe7,3,&DAT_00204740,&DAT_001fffe7);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b591)])(param_1,&DAT_001fffe7);
      iVar2 = 0x240c86c8;
    }
  } while (iVar6 != -0xbff329b);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


