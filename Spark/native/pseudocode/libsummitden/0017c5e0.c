// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017c5e0; body: [[0017c5e0, 0017cba3]]

uint FUN_0017c5e0(uint param_1)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  uint local_64;
  
  uVar5 = param_1 ^ 0xfd4ab574 ^ *(uint *)(&DAT_0011ef18 + (ulong)((param_1 ^ 0xfd4ab574) % 10) * 4)
  ;
  uVar2 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c3b)])(uVar5);
  local_64 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c3a)])
                       ((uVar5 ^ uVar2) + 0x355337a9);
  iVar4 = -0x30e4b7a7;
  if ((local_64 & 1) != 0) {
    iVar4 = 0x3cc41f08;
  }
  iVar3 = 0x542420a0;
LAB_0017c714:
  do {
    while (iVar6 = iVar3, iVar3 = iVar6, 0x34f01822 < iVar6) {
      if (iVar6 < 0x542420a0) {
        if (iVar6 == 0x34f01823) {
          pcVar7 = (code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c38)];
          local_64 = local_64 ^ 0xe06c5b58;
LAB_0017c9e4:
          local_64 = (*pcVar7)(local_64);
          iVar3 = -0x13585197;
        }
        else if (iVar6 == 0x3cc41f08) {
          pcVar7 = (code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c39)];
          local_64 = local_64 ^ 0x1254e2c0;
LAB_0017cae4:
          local_64 = (*pcVar7)(local_64);
          iVar3 = 0x57376844;
        }
        else if (iVar6 == 0x466ff33b) {
          iVar3 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c31)])
                            (local_64 + 0x5a33aff8);
          local_64 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c32)])
                               (iVar3 + -0x7e7d9102);
          iVar3 = -0x6330b405;
          if ((local_64 & 3) != 1) {
            iVar3 = -0x2c327190;
          }
        }
      }
      else {
        iVar3 = iVar4;
        if (iVar6 != 0x542420a0) {
          if (iVar6 == 0x57376844) {
            uVar5 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c3f)])
                              (local_64 + 0x43c772f0);
            uVar1 = (ulong)((uVar5 >> 3) % 0xc);
            iVar3 = (*(code *)(&PTR_FUN_001f3738)[uVar1 * 2])
                              (*(uint *)(&DAT_001f3730 + uVar1 * 0x10) ^ uVar5);
            local_64 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c3e)])
                                 (iVar3 + 0x5bdeebf0);
            iVar3 = 0x34f01823;
            if ((local_64 & 0xf) != 6) {
              iVar3 = -0x165008ef;
            }
          }
          else {
            iVar3 = iVar6;
            if (iVar6 == 0x63711ec0) {
              pcVar7 = (code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c32)];
              local_64 = local_64 + 0xb34bb9e4;
LAB_0017c928:
              local_64 = (*pcVar7)(local_64);
              iVar3 = 0x466ff33b;
            }
          }
        }
      }
    }
    if (-0x2c327191 < iVar6) {
      if (iVar6 == -0x2c327190) {
        local_64 = local_64 + 0x7cb1c62e;
        pcVar7 = (code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c31)];
LAB_0017c98c:
        local_64 = (*pcVar7)(local_64);
        iVar3 = -0x4fdc7c80;
      }
      else {
        if (iVar6 == -0x165008ef) {
          pcVar7 = (code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c3d)];
          local_64 = local_64 + 0x3fff914;
          goto LAB_0017c9e4;
        }
        if (iVar6 == -0x13585197) {
          iVar3 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c3c)])
                            (local_64 + 0x740f05e);
          uVar5 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c3d)])
                            (iVar3 + -0x5e9d04f8);
          uVar1 = (ulong)((uVar5 >> 3) % 0xc);
          local_64 = (*(code *)(&PTR_FUN_001f3738)[uVar1 * 2])
                               (*(uint *)(&DAT_001f3730 + uVar1 * 0x10) ^ uVar5);
          iVar3 = -0x2f79bc84;
          if ((local_64 & 7) != 1) {
            iVar3 = 0x63711ec0;
          }
        }
      }
      goto LAB_0017c714;
    }
    if (iVar6 < -0x30e4b7a7) {
      if (iVar6 == -0x6330b405) {
        pcVar7 = (code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c30)];
        local_64 = local_64 ^ 0x1d2601da;
        goto LAB_0017c98c;
      }
      if (iVar6 == -0x4fdc7c80) {
        uVar1 = (ulong)((local_64 >> 3) % 0xc);
        iVar4 = (*(code *)(&PTR_FUN_001f3738)[uVar1 * 2])
                          (*(uint *)(&DAT_001f3730 + uVar1 * 0x10) ^ local_64);
        uVar5 = (*(code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c37)])(iVar4 + 0x3f8a119);
        return uVar5 ^ 0x550281f9;
      }
    }
    else {
      if (iVar6 == -0x30e4b7a7) {
        pcVar7 = (code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c38)];
        local_64 = local_64 + 0xf9dfc510;
        goto LAB_0017cae4;
      }
      if (iVar6 == -0x2f79bc84) {
        pcVar7 = (code *)(&PTR_FUN_001fed90)[(int)(DAT_001fee00 ^ 0x4af49c33)];
        local_64 = local_64 ^ 0x89a9795a;
        goto LAB_0017c928;
      }
    }
  } while( true );
}


