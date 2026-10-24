// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001afe60; body: [[001afe60, 001b0313]]

void FUN_001afe60(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 long param_5,long param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 unaff_x27;
  undefined8 uVar11;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar10 = (long)param_4 / 2;
  iVar2 = 0x59d1e81f;
  if ((long)param_4 <= param_6) {
    iVar2 = -0xaeb5175;
  }
  iVar3 = 0x79cc0bdb;
  if (0x80 < (long)param_4) {
    iVar3 = -0x7105f34d;
  }
  lVar8 = param_4 - lVar10;
  lVar1 = param_5 + lVar10 * 8;
  iVar7 = -0x71b821e0;
  local_78 = param_2;
  local_70 = param_1;
LAB_001affa0:
  if (0x2859c447 < iVar7) {
    if (iVar7 < 0x59d1e81f) {
      if (iVar7 == 0x2859c448) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b446)])(&local_70,&local_78);
        iVar7 = 0x3900c5ec;
      }
      else if (iVar7 == 0x3900c5ec) {
        iVar7 = 0x65e21950;
      }
    }
    else {
      if (iVar7 < 0x7405058a) {
        if (iVar7 == 0x59d1e81f) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b44b)])
                    (local_70,unaff_x27,param_3,lVar10,param_5,param_6);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b44b)])
                    (unaff_x27,local_78,param_3,lVar8,param_5,param_6);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7bf)])
                    (local_70,unaff_x27,local_78,param_3,lVar10,lVar8,param_5,param_6);
          iVar7 = 0x7405058a;
          goto LAB_001affa0;
        }
        iVar9 = 0x65e21950;
      }
      else {
        if (iVar7 == 0x79cc0bdb) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b447)])
                    (local_70,local_78,param_3);
          iVar7 = 0x65e21950;
          goto LAB_001affa0;
        }
        iVar9 = 0x7405058a;
      }
      if (iVar7 == iVar9) {
        if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    goto LAB_001affa0;
  }
  if (-0x7105f34e < iVar7) {
    if (iVar7 == -0x7105f34d) {
      unaff_x27 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b444)])(&local_70,lVar10)
      ;
      iVar7 = iVar2;
    }
    else if (iVar7 == -0xaeb5175) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b445)])(auStack_80,0);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7ba)])
                (auStack_90,param_5,auStack_80);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7bb)])
                (local_70,unaff_x27,param_3,lVar10,param_5);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b8)])(auStack_80,lVar10,0);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7bb)])
                (unaff_x27,local_78,param_3,lVar8,lVar1);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b8)])(auStack_80,param_4,0);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b9)])
                (param_5,lVar1,lVar1,param_5 + param_4 * 8,local_70,param_3);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7be)])(auStack_90);
      iVar7 = 0x7405058a;
    }
    else if (iVar7 == 0x3d3b4f0) {
      iVar7 = 0x65e21950;
    }
    goto LAB_001affa0;
  }
  if (iVar7 != -0x7574c0f7) {
    if (iVar7 != -0x71b821e0) goto LAB_001affa0;
    iVar7 = 0x65e21950;
    if ((param_4 < 2) || (iVar7 = iVar3, param_4 != 2)) goto LAB_001affa0;
  }
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b440)])(&local_78);
  puVar5 = (undefined8 *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])();
  uVar11 = *puVar5;
  puVar5 = (undefined8 *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&local_70)
  ;
  uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b441)])(param_3,uVar11,*puVar5);
  iVar7 = 0x2859c448;
  if ((uVar6 & 1) == 0) {
    iVar7 = 0x3900c5ec;
  }
  goto LAB_001affa0;
}


