// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00167838; body: [[00167838, 00167cbb]]

byte FUN_00167838(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long unaff_x23;
  long unaff_x25;
  undefined8 uVar10;
  byte local_74;
  long local_70;
  byte local_68;
  
  uVar9 = *(undefined8 *)*param_1;
  iVar1 = -0x6aa1c9c6;
  if (param_2 != (undefined8 *)0x0) {
    iVar1 = 0x5737f0d7;
  }
  puVar2 = param_1;
  iVar3 = -0x2af1a75e;
LAB_001678ec:
  iVar8 = iVar3;
  puVar5 = puVar2;
  puVar2 = puVar5;
  iVar3 = iVar8;
  if (iVar8 < 0x7960b9f) {
    if (iVar8 < -0x4ecd054f) {
      if (iVar8 < -0x68e8e3d6) {
        if (iVar8 == -0x7c053840) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])
                    (*(undefined8 *)*param_1,unaff_x23);
          iVar7 = 0x1e4b0786;
          goto LAB_001678e8;
        }
        if (iVar8 == -0x6aa1c9c6) {
          puVar2 = (undefined8 *)&DAT_0011dd07;
          iVar3 = 0x617edf86;
        }
      }
      else {
        if (iVar8 == -0x67731682) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(*(undefined8 *)*param_1);
          iVar7 = 0x1e4b0786;
          if (unaff_x23 != 0) {
            iVar7 = -0x7c053840;
          }
          goto LAB_001678e8;
        }
        if (iVar8 == -0x68e8e3d6) {
          return local_68 & 1;
        }
      }
      goto LAB_001678ec;
    }
    if (iVar8 == -0x4ecd054f) {
      iVar7 = -0x67731682;
      if (unaff_x25 != 0) {
        iVar7 = -0x3b157f3e;
      }
    }
    else {
      if (iVar8 == -0x3b157f3e) {
        local_70 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aec)])
                             (*(undefined8 *)*param_1,*(undefined8 *)param_1[1],
                              *(undefined8 *)param_1[2],unaff_x23,unaff_x25);
        cVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])
                          (*(undefined8 *)*param_1);
        local_74 = cVar4 == '\0';
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(*(undefined8 *)*param_1);
        iVar7 = 0x7b8c6677;
        if (local_70 != 0) {
          iVar7 = 0x7960b9f;
        }
        goto LAB_001678e8;
      }
      iVar7 = iVar1;
      if (iVar8 != -0x2af1a75e) goto LAB_001678ec;
    }
  }
  else if (iVar8 < 0x5737f0d7) {
    if (iVar8 == 0x7960b9f) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])
                (*(undefined8 *)*param_1,local_70);
      iVar7 = 0x7b8c6677;
    }
    else if (iVar8 == 0xabd4d53) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])
                (*(undefined8 *)*param_1,unaff_x25);
      iVar7 = 0x6e9cd057;
    }
    else {
      if (iVar8 != 0x1e4b0786) goto LAB_001678ec;
      iVar7 = 0x6e9cd057;
      if (unaff_x25 != 0) {
        iVar7 = 0xabd4d53;
      }
    }
  }
  else if (iVar8 < 0x6e9cd057) {
    puVar2 = param_2;
    iVar3 = 0x617edf86;
    if ((iVar8 == 0x5737f0d7) || (puVar2 = puVar5, iVar3 = iVar8, iVar8 != 0x617edf86))
    goto LAB_001678ec;
    unaff_x23 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad8)])(uVar9,puVar5);
    uVar10 = *(undefined8 *)*param_1;
    uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad4)])(param_3);
    unaff_x25 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad8)])(uVar10,uVar6);
    iVar7 = -0x67731682;
    if (unaff_x23 != 0) {
      iVar7 = -0x4ecd054f;
    }
  }
  else if (iVar8 == 0x6e9cd057) {
    local_68 = 0;
    iVar7 = -0x68e8e3d6;
  }
  else {
    if (iVar8 != 0x7b8c6677) goto LAB_001678ec;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])
              (*(undefined8 *)*param_1,unaff_x23);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])
              (*(undefined8 *)*param_1,unaff_x25);
    iVar7 = -0x68e8e3d6;
    local_68 = local_74;
  }
LAB_001678e8:
  puVar2 = puVar5;
  iVar3 = iVar7;
  goto LAB_001678ec;
}


