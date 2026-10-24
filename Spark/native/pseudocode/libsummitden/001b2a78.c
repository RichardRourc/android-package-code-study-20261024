// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b2a78; body: [[001b2a78, 001b2f6b]]

void FUN_001b2a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auStack_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = param_3;
  local_70 = param_2;
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b445)])(auStack_80,0);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7ba)])(auStack_90,param_7,auStack_80);
  iVar1 = 0x1d9181e1;
  if ((long)param_5 <= (long)param_6) {
    iVar1 = -0x23d71fd;
  }
  iVar3 = 0x64ede73d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar6 = iVar3, iVar3 = iVar6, 0x28cd9fd8 < iVar6) {
            if (iVar6 < 0x64ede73d) {
              if (iVar6 == 0x28cd9fd9) {
                puVar5 = (undefined8 *)
                         (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(&local_a0)
                ;
                *param_6 = *puVar5;
                iVar3 = -0x2aec238f;
              }
              else if (iVar6 == 0x3d640c4a) {
                uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b507)])
                                  (&local_98,&local_70);
                iVar3 = -0xe47c5f2;
                if ((uVar4 & 1) == 0) {
                  iVar3 = 0x6f0bdf6c;
                }
              }
              else if (iVar6 == 0x4ae494fb) {
                uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b507)])
                                  (&local_a0,&local_78);
                iVar3 = 0x28cd9fd9;
                if ((uVar4 & 1) == 0) {
                  iVar3 = 0x7fc5777b;
                }
              }
            }
            else if (iVar6 < 0x6f0ef831) {
              iVar3 = iVar1;
              if ((iVar6 != 0x64ede73d) && (iVar3 = iVar6, iVar6 == 0x6f0bdf6c)) {
                iVar3 = -0x58469f39;
              }
            }
            else if (iVar6 == 0x6f0ef831) {
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b79f)])(&local_b0,param_6);
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b79f)])(&local_c0,param_7);
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b79c)])(&local_d0,local_70);
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b79c)])(&local_e0,param_1);
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b79c)])(&local_f0,local_78);
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b79d)])(auStack_f8,param_4);
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b792)])
                        (local_b0,uStack_a8,local_c0,uStack_b8,local_d0,uStack_c8,local_e0,uStack_d8
                         ,local_f0,uStack_e8,auStack_f8);
              iVar3 = -0x36a2d6a7;
            }
            else if (iVar6 == 0x7fc5777b) {
              iVar3 = 0x6f0ef831;
            }
          }
          if (iVar6 < -0xe47c5f2) break;
          if (iVar6 == -0xe47c5f2) {
            puVar5 = (undefined8 *)
                     (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(&local_98);
            *param_5 = *puVar5;
            iVar3 = -0x3347ddfb;
          }
          else if (iVar6 == -0x23d71fd) {
            param_5 = param_7;
            iVar3 = 0x3d640c4a;
            local_98 = param_1;
          }
          else if (iVar6 == 0x1d9181e1) {
            local_a0 = local_70;
            param_6 = param_7;
            iVar3 = 0x4ae494fb;
          }
        }
        if (iVar6 < -0x3347ddfb) break;
        if (iVar6 == -0x3347ddfb) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7aa)])(auStack_80);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57a)])(&local_98);
          param_5 = param_5 + 1;
          iVar3 = 0x3d640c4a;
        }
        else if (iVar6 == -0x2aec238f) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7aa)])(auStack_80);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57a)])(&local_a0);
          param_6 = param_6 + 1;
          iVar3 = 0x4ae494fb;
        }
      }
      if (iVar6 != -0x58469f39) break;
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b79e)])
                (param_7,param_5,local_70,local_78,param_1,param_4);
      iVar3 = -0x36a2d6a7;
    }
  } while (iVar6 != -0x36a2d6a7);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7be)])(auStack_90);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


