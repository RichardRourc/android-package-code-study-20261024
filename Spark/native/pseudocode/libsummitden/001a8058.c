// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a8058; body: [[001a8058, 001a840f]]

void FUN_001a8058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  int iVar8;
  uint local_74;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar7 = (code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4ed)];
  local_74 = 0x1873b516;
  iVar2 = -0x1ebc64c2;
LAB_001a8148:
  do {
    while (iVar8 = iVar2, iVar2 = iVar8, -0x17cc29b8 < iVar8) {
      if (iVar8 < 0x1648923b) {
        iVar2 = -0x4091640e;
        if ((iVar8 != -0x17cc29b7) && (iVar2 = iVar8, iVar8 == 0x639b4fe)) {
          uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f3)])(param_2);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b516)])(param_1,uVar5,param_3);
          iVar2 = -0x17cc29b7;
        }
      }
      else if (iVar8 == 0x1648923b) {
        uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f3)])(param_2);
        uVar5 = param_3;
        uVar3 = local_74;
LAB_001a83a0:
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ uVar3)])(param_1,uVar6,uVar5);
        iVar2 = -0x2a1b85eb;
      }
      else if (iVar8 == 0x23318601) {
        local_70 = 0;
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5c0)])(param_3,&local_70);
        iVar2 = -0x53341e06;
        if ((uVar4 & 1) == 0) {
          iVar2 = 0x1648923b;
        }
      }
      else if (iVar8 == 0x52ca2de6) {
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b4e2)])(param_2);
        iVar2 = 0x23318601;
        if ((uVar4 & 1) == 0) {
          iVar2 = 0x639b4fe;
        }
      }
    }
    if (iVar8 < -0x4091640e) {
      if (iVar8 == -0x64543608) {
        uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f3)])(param_2);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_001ff7b9,2,&DAT_0020452c,&DAT_001ff7b9);
        uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                          (param_3,&DAT_001ff7b9);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b514)])(param_1,uVar5,uVar3 & 1);
        iVar2 = -0x4091640e;
      }
      else if (iVar8 == -0x53341e06) {
        uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f3)])(param_2);
        uVar3 = 0x1873b517;
        uVar5 = local_70;
        goto LAB_001a83a0;
      }
      goto LAB_001a8148;
    }
    if (iVar8 == -0x2a1b85eb) {
      iVar2 = -0x17cc29b7;
    }
    else if (iVar8 == -0x1ebc64c2) {
      uVar4 = (*pcVar7)(param_2);
      iVar2 = -0x64543608;
      if ((uVar4 & 1) == 0) {
        iVar2 = 0x52ca2de6;
      }
    }
    else if (iVar8 == -0x4091640e) {
      if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


