// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001addd8; body: [[001addd8, 001ae117]]

void FUN_001addd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar10 = *(long *)*param_1;
  uVar9 = *(undefined8 *)param_1[1];
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_0020088d,0x13,&DAT_00204958,&DAT_0020088d);
  lVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b536)])
                    (lVar10,uVar9,param_2,&DAT_0020088d);
  iVar1 = -0x46230ca8;
  if (lVar5 != 0) {
    iVar1 = -0x777a459a;
  }
  iVar3 = 0x4c6ad045;
LAB_001adf44:
  do {
    while (iVar7 = iVar3, iVar3 = iVar7, iVar7 < -0x75afc59) {
      if (iVar7 < -0x58260be6) {
        if (iVar7 == -0x777a459a) {
          lVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b535)])
                             (*(undefined8 *)*param_1,*(undefined8 *)param_1[1],lVar5);
          cVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b53c)])
                            (*(undefined8 *)*param_1);
          iVar3 = 0xe7121bf;
          if (cVar4 != '\0') {
            iVar3 = -0x75afc59;
          }
        }
        else if (iVar7 == -0x5b40c56e) {
          iVar3 = 0x5440293a;
        }
      }
      else if (iVar7 == -0x58260be6) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b532)])
                  (auStack_80,*(undefined8 *)*param_1,lVar10);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f2)])(param_3,auStack_80);
        puVar6 = auStack_80;
        uVar8 = DAT_00202698 ^ 0x1873b5b4;
LAB_001ae0b4:
        (*(code *)(&PTR_FUN_00201200)[(int)uVar8])(puVar6);
        iVar3 = -0x50806518;
      }
      else if (iVar7 == -0x50806518) {
        iVar3 = -0x5b40c56e;
        if (lVar10 != 0) {
          iVar3 = 0x4d5df7b5;
        }
      }
      else if (iVar7 == -0x46230ca8) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b53b)])(*(undefined8 *)*param_1);
        iVar3 = 0x5440293a;
      }
    }
    if (iVar7 < 0x4c6ad045) {
      if (iVar7 == -0x75afc59) {
        puVar6 = *(undefined1 **)*param_1;
        uVar8 = DAT_00202698 ^ 0x1873b53b;
        goto LAB_001ae0b4;
      }
      if ((iVar7 == 0xe7121bf) && (iVar3 = -0x75afc59, lVar10 != 0)) {
        iVar3 = -0x58260be6;
      }
      goto LAB_001adf44;
    }
    iVar3 = iVar1;
    if (iVar7 != 0x4c6ad045) {
      if (iVar7 == 0x4d5df7b5) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b531)])
                  (*(undefined8 *)*param_1,lVar10);
        iVar3 = -0x5b40c56e;
      }
      else {
        iVar3 = iVar7;
        if (iVar7 == 0x5440293a) {
          if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    }
  } while( true );
}


