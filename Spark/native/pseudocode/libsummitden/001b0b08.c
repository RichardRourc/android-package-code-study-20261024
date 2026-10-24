// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b0b08; body: [[001b0b08, 001b0fcf]]

void FUN_001b0b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                 )

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar8 = param_4 / 2;
  iVar1 = 0x1cbe150c;
  if (8 < param_4) {
    iVar1 = -0x1537d123;
  }
  iVar3 = 0x5f842e2a;
  local_78 = param_2;
  local_70 = param_1;
LAB_001b0c00:
  do {
    while (iVar7 = iVar3, iVar3 = iVar7, iVar7 < 0x1d226d34) {
      if (iVar7 < -0x1537d123) {
        if (iVar7 == -0x705d43d8) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7ab)])(auStack_90);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7be)])(auStack_90);
          iVar3 = 0x2ca57cc0;
        }
        else if (iVar7 == -0x56af317e) {
          uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(&local_78);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b5)])(param_5,uVar4);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7aa)])(auStack_80);
          puVar5 = &local_70;
LAB_001b0d14:
          param_5 = param_5 + 8;
          uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(puVar5);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b5)])(param_5,uVar4);
          iVar3 = -0x705d43d8;
        }
      }
      else if (iVar7 == -0x1537d123) {
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b444)])(&local_70,lVar8);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b44b)])
                  (local_70,uVar4,param_3,lVar8,param_5,lVar8);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b44b)])
                  (uVar4,local_78,param_3,param_4 - lVar8,param_5 + lVar8 * 8,param_4 - lVar8);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7a9)])
                  (local_70,uVar4,uVar4,local_78,param_5,param_3);
        iVar3 = 0x2ca57cc0;
      }
      else if (iVar7 == 0x1cbe150c) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7a8)])
                  (local_70,local_78,param_5,param_3);
        iVar3 = 0x2ca57cc0;
      }
    }
    if (0x2ca57cbf < iVar7) {
      if (iVar7 == 0x5f842e2a) {
        if (param_4 == 2) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b445)])(auStack_80,0);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7ba)])
                    (auStack_90,param_5,auStack_80);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b440)])(&local_78);
          puVar5 = (undefined8 *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])();
          uVar4 = *puVar5;
          puVar5 = (undefined8 *)
                   (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&local_70);
          uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b441)])
                            (param_3,uVar4,*puVar5);
          iVar3 = -0x56af317e;
          if ((uVar6 & 1) == 0) {
            iVar3 = 0x2752a6eb;
          }
        }
        else if (param_4 == 1) {
          uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(&local_70);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b5)])(param_5,uVar4);
          iVar3 = 0x2ca57cc0;
        }
        else {
          iVar3 = 0x2ca57cc0;
          if (param_4 != 0) {
            iVar3 = iVar1;
          }
        }
      }
      else if (iVar7 == 0x2ca57cc0) {
        if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      goto LAB_001b0c00;
    }
    iVar3 = iVar1;
    if ((iVar7 != 0x1d226d34) && (iVar3 = iVar7, iVar7 == 0x2752a6eb)) {
      uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(&local_70);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b5)])(param_5,uVar4);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7aa)])(auStack_80);
      puVar5 = &local_78;
      goto LAB_001b0d14;
    }
  } while( true );
}


