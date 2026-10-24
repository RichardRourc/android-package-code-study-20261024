// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001409e0; body: [[001409e0, 00140b97]]

undefined ** FUN_001409e0(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  
  ppuVar5 = &PTR_FUN_001fb000;
  uVar2 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370ad)])();
  iVar3 = 0x3b4a814a;
  if (param_2 <= uVar2) {
    iVar3 = 0x7eb94a08;
  }
  iVar1 = 0x581a28e0;
  do {
    iVar4 = iVar1;
    iVar1 = iVar3;
  } while (iVar4 == 0x581a28e0);
  if (iVar4 != 0x7eb94a08) {
    auVar7 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37117)])();
    pcVar6 = (code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37109)];
    do {
      uVar2 = (*pcVar6)(auVar7._8_8_);
      iVar3 = -0x4ac6dd4f;
      if ((uVar2 & 1) == 0) {
        iVar3 = -0x51f62b40;
      }
    } while (iVar3 == 0x3f72c541);
    do {
      if (iVar3 == -0x51f62b40) {
        ppuVar5 = (undefined **)
                  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3710b)])(auVar7._0_8_);
      }
      else {
        if (iVar3 != -0x4ac6dd4f) {
          return ppuVar5;
        }
        ppuVar5 = (undefined **)
                  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37108)])
                            (auVar7._0_8_,auVar7._8_8_);
      }
      iVar3 = 0x51ab5b9f;
    } while( true );
  }
                    /* WARNING: Could not recover jumptable at 0x00140a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar5 = (undefined **)
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc370a5)])(param_2,1);
  return ppuVar5;
}


