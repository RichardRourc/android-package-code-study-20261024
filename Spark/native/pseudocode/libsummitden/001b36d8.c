// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b36d8; body: [[001b36d8, 001b39f7]]

void FUN_001b36d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_b8 = param_9;
  uStack_b0 = param_10;
  iVar5 = -0x4afe2135;
  local_a8 = param_7;
  uStack_a0 = param_8;
  local_98 = param_5;
  uStack_90 = param_6;
  local_88 = param_3;
  uStack_80 = param_4;
  local_78 = param_1;
  uStack_70 = param_2;
LAB_001b37e8:
  do {
    while (iVar5 < 0x6e56023) {
      if (iVar5 < -0x5bacc267) {
        if (iVar5 == -0x7ad28dc4) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b78d)])
                    (auStack_d8,local_78,uStack_70,local_88,uStack_80,local_b8,uStack_b0);
          iVar5 = 0x50069a62;
        }
        else if (iVar5 == -0x5db7ffc7) {
          puVar4 = (undefined8 *)
                   (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b787)])(&local_78);
          uVar7 = *puVar4;
          puVar4 = (undefined8 *)
                   (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b782)])(&local_b8);
          *puVar4 = uVar7;
          uVar6 = 0x1873b784;
          puVar4 = &local_78;
LAB_001b3994:
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ uVar6)])(puVar4);
          iVar5 = 0x230ebf6d;
        }
      }
      else if (iVar5 == -0x5bacc267) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b786)])(&local_b8);
        iVar5 = -0x4afe2135;
      }
      else if (iVar5 == -0x4afe2135) {
        uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b78f)])
                          (&local_78,&local_88);
        iVar5 = 0x7e84f601;
        if ((uVar3 & 1) == 0) {
          iVar5 = 0x50069a62;
        }
      }
    }
    if (iVar5 < 0x50069a62) {
      if (iVar5 == 0x6e56023) {
        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b782)])(&local_98);
        uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b783)])(&local_78);
        uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b780)])
                          (param_11,uVar7,uVar2);
        iVar5 = 0x71ac2380;
        if ((uVar3 & 1) == 0) {
          iVar5 = -0x5db7ffc7;
        }
      }
      else if (iVar5 == 0x230ebf6d) {
        iVar5 = -0x5bacc267;
      }
      goto LAB_001b37e8;
    }
    if (iVar5 == 0x71ac2380) {
      puVar4 = (undefined8 *)
               (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b781)])(&local_98);
      uVar7 = *puVar4;
      puVar4 = (undefined8 *)
               (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b782)])(&local_b8);
      *puVar4 = uVar7;
      uVar6 = 0x1873b786;
      puVar4 = &local_98;
      goto LAB_001b3994;
    }
    if (iVar5 == 0x7e84f601) {
      uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b78c)])(&local_98,&local_a8);
      iVar5 = -0x7ad28dc4;
      if ((uVar3 & 1) == 0) {
        iVar5 = 0x6e56023;
      }
    }
    else if (iVar5 == 0x50069a62) {
      if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


