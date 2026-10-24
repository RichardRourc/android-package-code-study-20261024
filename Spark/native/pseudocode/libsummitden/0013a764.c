// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013a764; body: [[0013a764, 0013a8cf]]

undefined8 FUN_0013a764(void)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  
  uVar3 = 0xdcc37114;
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371ec)])
            (&DAT_001fae3a,0x38,&DAT_002041a0,&DAT_001fae3a);
  auVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37114)])(&DAT_001fae3a);
  pcVar4 = (code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37109)];
  do {
    uVar1 = (*pcVar4)(auVar5._8_8_);
    iVar2 = 0x6376efaa;
    if ((uVar1 & 1) == 0) {
      iVar2 = -0x7b6bd5d8;
    }
  } while (iVar2 == -0xd0fb5af);
  do {
    if (iVar2 == -0x7b6bd5d8) {
      uVar3 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3710b)])(auVar5._0_8_);
    }
    else {
      if (iVar2 == -0x48b3ddc4) {
        return uVar3;
      }
      uVar3 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37108)])
                        (auVar5._0_8_,auVar5._8_8_);
    }
    iVar2 = -0x48b3ddc4;
  } while( true );
}


