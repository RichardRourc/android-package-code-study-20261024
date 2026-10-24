// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013a6ac; body: [[0013a6ac, 0013a763]]

undefined8 FUN_0013a6ac(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  
  uVar2 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3711c)])();
  iVar4 = 0x1ebcb5a6;
  if (param_2 <= uVar2) {
    iVar4 = -0x785039d7;
  }
  iVar1 = 0x1acbeec9;
  do {
    iVar5 = iVar1;
    iVar1 = iVar4;
  } while (iVar5 == 0x1acbeec9);
  if (iVar5 != -0x785039d7) {
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37117)])();
    uVar3 = 0xdcc37114;
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371ec)])
              (&DAT_001fae3a,0x38,&DAT_002041a0,&DAT_001fae3a);
    auVar7 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37114)])(&DAT_001fae3a);
    pcVar6 = (code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37109)];
    do {
      uVar2 = (*pcVar6)(auVar7._8_8_);
      iVar4 = 0x6376efaa;
      if ((uVar2 & 1) == 0) {
        iVar4 = -0x7b6bd5d8;
      }
    } while (iVar4 == -0xd0fb5af);
    do {
      if (iVar4 == -0x7b6bd5d8) {
        uVar3 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3710b)])(auVar7._0_8_);
      }
      else {
        if (iVar4 == -0x48b3ddc4) {
          return uVar3;
        }
        uVar3 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37108)])
                          (auVar7._0_8_,auVar7._8_8_);
      }
      iVar4 = -0x48b3ddc4;
    } while( true );
  }
                    /* WARNING: Could not recover jumptable at 0x0013a74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37116)])(param_2,1);
  return uVar3;
}


