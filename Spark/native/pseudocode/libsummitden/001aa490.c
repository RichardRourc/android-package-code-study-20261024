// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001aa490; body: [[001aa490, 001aaa77]]

uint FUN_001aa490(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  
  iVar1 = -0x19ac6e71;
  uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_0020026a,4,&DAT_002047f4,&DAT_0020026a);
  pcVar7 = (code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)];
  iVar6 = -0x445e49e8;
LAB_001aa59c:
  if (iVar6 < 0x39a097df) {
    if (iVar6 < 0x9eb1724) {
      if (iVar6 < -0x19ac6e71) {
        if (iVar6 == -0x5463a336) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_002002fb,0xb,&DAT_00204820,&DAT_002002fb);
          uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                            (param_1,&DAT_002002fb);
          iVar6 = -0x19ac6e71;
        }
        else if (iVar6 == -0x445e49e8) {
          uVar4 = (*pcVar7)(param_1,&DAT_0020026a);
          bVar2 = (uVar4 & 1) == 0;
          iVar5 = 0x9eb1724;
          goto LAB_001aa598;
        }
      }
      else if (iVar6 == 0x6e4b69d) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_002002ba,0x11,&DAT_00204810,&DAT_002002ba);
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                          (param_1,&DAT_002002ba);
        uVar3 = 1;
        iVar6 = iVar1;
        if ((uVar4 & 1) == 0) {
          iVar6 = 0x39a097df;
        }
      }
      else if (iVar6 == -0x19ac6e71) {
        return uVar3 & 1;
      }
      goto LAB_001aa59c;
    }
    if (iVar6 == 0x9eb1724) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_0020026e,8,&DAT_002047f8,&DAT_0020026e);
      uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                        (param_1,&DAT_0020026e);
      bVar2 = (uVar4 & 1) == 0;
      iVar5 = 0x56ee874c;
    }
    else {
      if (iVar6 == 0x32889965) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_00200291,0xd,&DAT_00204804,&DAT_00200291);
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                          (param_1,&DAT_00200291);
        bVar2 = (uVar4 & 1) == 0;
        iVar5 = 0x37b0e453;
        goto LAB_001aa598;
      }
      if (iVar6 != 0x37b0e453) goto LAB_001aa59c;
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_0020029e,0xd,&DAT_00204808,&DAT_0020029e);
      uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                        (param_1,&DAT_0020029e);
      bVar2 = (uVar4 & 1) == 0;
      iVar5 = 0x3e23fd10;
    }
  }
  else if (iVar6 < 0x6beb6cb5) {
    if (iVar6 == 0x39a097df) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_002002cb,0x10,&DAT_00204814,&DAT_002002cb);
      uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                        (param_1,&DAT_002002cb);
      uVar3 = 1;
      iVar6 = iVar1;
      if ((uVar4 & 1) == 0) {
        iVar6 = 0x6beb6cb5;
      }
      goto LAB_001aa59c;
    }
    if (iVar6 == 0x3e23fd10) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_002002ab,0xf,&DAT_0020480c,&DAT_002002ab);
      uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                        (param_1,&DAT_002002ab);
      bVar2 = (uVar4 & 1) == 0;
      iVar5 = 0x6e4b69d;
    }
    else {
      if (iVar6 != 0x56ee874c) goto LAB_001aa59c;
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_00200276,10,&DAT_002047fc,&DAT_00200276);
      uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                        (param_1,&DAT_00200276);
      bVar2 = (uVar4 & 1) == 0;
      iVar5 = 0x74131421;
    }
  }
  else if (iVar6 == 0x6beb6cb5) {
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
              (&DAT_002002db,0x10,&DAT_00204818,&DAT_002002db);
    uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])(param_1,&DAT_002002db);
    bVar2 = (uVar4 & 1) == 0;
    iVar5 = 0x71030424;
  }
  else if (iVar6 == 0x71030424) {
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
              (&DAT_002002eb,0x10,&DAT_0020481c,&DAT_002002eb);
    uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])(param_1,&DAT_002002eb);
    bVar2 = (uVar4 & 1) == 0;
    iVar5 = -0x5463a336;
  }
  else {
    if (iVar6 != 0x74131421) goto LAB_001aa59c;
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
              (&DAT_00200280,0x11,&DAT_00204800,&DAT_00200280);
    uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])(param_1,&DAT_00200280);
    bVar2 = (uVar4 & 1) == 0;
    iVar5 = 0x32889965;
  }
LAB_001aa598:
  uVar3 = 1;
  iVar6 = iVar1;
  if (bVar2) {
    iVar6 = iVar5;
  }
  goto LAB_001aa59c;
}


