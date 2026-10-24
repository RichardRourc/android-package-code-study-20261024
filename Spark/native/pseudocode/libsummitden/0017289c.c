// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017289c; body: [[0017289c, 00172ad7]]

void FUN_0017289c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined8 local_68;
  
  pcVar6 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ab6)];
  iVar4 = -0x7229feea;
  while( true ) {
    while (iVar4 < 0x5849eada) {
      if (iVar4 == -0x7229feea) {
        uVar1 = (*pcVar6)(param_3);
        iVar4 = -0x8bb6df3;
        if ((uVar1 & 1) == 0) {
          iVar4 = 0x61885cf1;
        }
      }
      else {
        if (iVar4 == -0x68586e2d) {
          lVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a4a)])(param_3);
          auVar7 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a4b)])
                             (param_1,lVar2 + 1);
          local_68 = auVar7._0_8_;
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a48)])();
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a49)])(param_1,local_68);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a4e)])(param_1,auVar7._8_8_);
          uVar5 = 0x98a52a4f;
        }
        else {
          local_68 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a75)])(param_1);
          uVar5 = 0x98a52a74;
        }
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ uVar5)])(param_1,param_3);
        iVar4 = 0x6a487b7c;
      }
    }
    if (iVar4 != 0x61885cf1) break;
    uVar1 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a76)])(param_1);
    iVar4 = 0x5849eada;
    if (param_3 <= uVar1) {
      iVar4 = -0x68586e2d;
    }
  }
  if (iVar4 != 0x6a487b7c) {
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a77)])();
                    /* WARNING: Could not recover jumptable at 0x00172afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_001fda20)[(long)(int)DAT_001fed20 ^ 0x1fffffff98a528ef])();
    return;
  }
  uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a4c)])(local_68);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a4d)])(uVar3,param_2,param_3 + 1);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae1)])(param_1,param_3);
  return;
}


