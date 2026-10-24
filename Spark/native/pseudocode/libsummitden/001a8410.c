// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a8410; body: [[001a8410, 001a8827]]

uint FUN_001a8410(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  
  iVar1 = 0x59203adb;
  uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_0020020c,10,&DAT_002047d0,&DAT_0020020c);
  pcVar7 = (code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)];
  iVar6 = -0x407ce27f;
LAB_001a851c:
  while (0x317f1baa < iVar6) {
    if (iVar6 < 0x525350d4) {
      if (iVar6 == 0x317f1bab) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_002002fb,0xb,&DAT_00204820,&DAT_002002fb);
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                          (param_1,&DAT_002002fb);
        bVar2 = (uVar4 & 1) == 0;
        iVar5 = 0x4656410a;
        goto LAB_001a8518;
      }
      if (iVar6 == 0x4656410a) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_0020022c,0xb,&DAT_002047dc,&DAT_0020022c);
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                          (param_1,&DAT_0020022c);
        uVar3 = 1;
        iVar6 = iVar1;
        if ((uVar4 & 1) == 0) {
          iVar6 = 0x29355bbd;
        }
      }
    }
    else {
      if (iVar6 == 0x525350d4) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_00200216,0xb,&DAT_002047d4,&DAT_00200216);
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                          (param_1,&DAT_00200216);
        bVar2 = (uVar4 & 1) == 0;
        iVar5 = 0x29cfb291;
        goto LAB_001a8518;
      }
      if (iVar6 == 0x6cb81b38) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_002002db,0x10,&DAT_00204818,&DAT_002002db);
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                          (param_1,&DAT_002002db);
        bVar2 = (uVar4 & 1) == 0;
        iVar5 = 0x1686cd39;
        goto LAB_001a8518;
      }
      if (iVar6 == 0x59203adb) {
        return uVar3 & 1;
      }
    }
  }
  if (iVar6 < 0x29355bbd) {
    if (iVar6 != -0x407ce27f) {
      if (iVar6 == 0x1686cd39) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_002002eb,0x10,&DAT_0020481c,&DAT_002002eb);
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                          (param_1,&DAT_002002eb);
        uVar3 = 1;
        iVar6 = iVar1;
        if ((uVar4 & 1) == 0) {
          iVar6 = 0x317f1bab;
        }
      }
      goto LAB_001a851c;
    }
    uVar4 = (*pcVar7)(param_1,&DAT_0020020c);
    bVar2 = (uVar4 & 1) == 0;
    iVar5 = 0x525350d4;
  }
  else {
    if (iVar6 == 0x29355bbd) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_0020023e,0x10,&DAT_002047e4,&DAT_0020023e);
      uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                        (param_1,&DAT_0020023e);
      iVar6 = 0x59203adb;
      goto LAB_001a851c;
    }
    if (iVar6 != 0x29cfb291) goto LAB_001a851c;
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
              (&DAT_00200221,0xb,&DAT_002047d8,&DAT_00200221);
    uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])(param_1,&DAT_00200221);
    bVar2 = (uVar4 & 1) == 0;
    iVar5 = 0x6cb81b38;
  }
LAB_001a8518:
  uVar3 = 1;
  iVar6 = iVar1;
  if (bVar2) {
    iVar6 = iVar5;
  }
  goto LAB_001a851c;
}


