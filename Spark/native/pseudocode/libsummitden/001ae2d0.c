// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ae2d0; body: [[001ae2d0, 001ae61f]]

void FUN_001ae2d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
            (&DAT_00200394,0x15,&DAT_00204860,&DAT_00200394);
  lVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b53e)])
                    (lVar10,uVar9,param_2,&DAT_00200394);
  iVar1 = -0x38a9ea1;
  if (lVar5 != 0) {
    iVar1 = 0x7a2c17e3;
  }
  iVar3 = 0x24e12591;
LAB_001ae3e0:
  do {
    while (iVar7 = iVar3, iVar3 = iVar7, 0x24e12590 < iVar7) {
      if (iVar7 < 0x6ab4fddf) {
        iVar3 = iVar1;
        if (((iVar7 != 0x24e12591) && (iVar3 = iVar7, iVar7 == 0x596f8697)) &&
           (iVar3 = -0x5ed0b187, lVar10 != 0)) {
          iVar3 = 0x6e2c961f;
        }
      }
      else if (iVar7 == 0x6ab4fddf) {
        iVar3 = 0x127c0b5e;
        if (lVar10 != 0) {
          iVar3 = -0x9577be5;
        }
      }
      else if (iVar7 == 0x6e2c961f) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b532)])
                  (auStack_80,*(undefined8 *)*param_1,lVar10);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f2)])(param_3,auStack_80);
        puVar6 = auStack_80;
        uVar8 = DAT_00202698 ^ 0x1873b5b4;
LAB_001ae594:
        (*(code *)(&PTR_FUN_00201200)[(int)uVar8])(puVar6);
        iVar3 = 0x6ab4fddf;
      }
      else if (iVar7 == 0x7a2c17e3) {
        lVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b53d)])
                           (*(undefined8 *)*param_1,*(undefined8 *)param_1[2],lVar5);
        cVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b53c)])
                          (*(undefined8 *)*param_1);
        iVar3 = 0x596f8697;
        if (cVar4 != '\0') {
          iVar3 = -0x5ed0b187;
        }
      }
    }
    if (-0x38a9ea2 < iVar7) {
      if (iVar7 == -0x38a9ea1) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b53b)])(*(undefined8 *)*param_1);
        iVar3 = 0x20afdbd2;
      }
      else {
        iVar3 = 0x20afdbd2;
        if ((iVar7 != 0x127c0b5e) && (iVar3 = iVar7, iVar7 == 0x20afdbd2)) {
          if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      goto LAB_001ae3e0;
    }
    if (iVar7 == -0x5ed0b187) {
      puVar6 = *(undefined1 **)*param_1;
      uVar8 = DAT_00202698 ^ 0x1873b53b;
      goto LAB_001ae594;
    }
    if (iVar7 == -0x9577be5) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b531)])
                (*(undefined8 *)*param_1,lVar10);
      iVar3 = 0x127c0b5e;
    }
  } while( true );
}


