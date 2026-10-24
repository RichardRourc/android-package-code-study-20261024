// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00138aac; body: [[00138aac, 00138d4f]]

void FUN_00138aac(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong unaff_x22;
  byte unaff_w23;
  byte unaff_w25;
  
  uVar4 = 0;
  iVar3 = 0x27f0b95a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 < 0xc202cca) {
            if (iVar3 < -0x4924d840) {
              if (iVar3 == -0x7c72d367) {
                uVar4 = uVar4 + 1;
                iVar3 = 0x27f0b95a;
              }
              else if (iVar3 == -0x49fe4ba5) {
                unaff_x22 = unaff_x22 - 1;
                iVar3 = 0x55a447bb;
              }
            }
            else if (iVar3 == -0x4924d840) {
              iVar3 = -0x49fe4ba5;
              if ((unaff_w25 & 1) == 0) {
                iVar3 = 0xc202cca;
              }
            }
            else if (iVar3 == -0x185bda77) {
              pbVar1 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371fb)])
                                         (param_2,uVar4);
              unaff_w23 = *pbVar1 < 0x21;
              iVar3 = 0x907c0f1;
            }
            else if (iVar3 == 0x907c0f1) {
              iVar3 = -0x7c72d367;
              if ((unaff_w23 & 1) == 0) {
                iVar3 = 0x66fdfb41;
              }
            }
          }
          if (iVar3 < 0x66fdfb41) break;
          if (iVar3 == 0x66fdfb41) {
            unaff_x22 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719f)])(param_2);
            iVar3 = 0x55a447bb;
          }
          else if (iVar3 == 0x741ad593) {
            pbVar1 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371fb)])
                                       (param_2,unaff_x22 - 1);
            unaff_w25 = *pbVar1 < 0x21;
            iVar3 = -0x4924d840;
          }
        }
        if (iVar3 != 0x27f0b95a) break;
        uVar2 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719f)])(param_2);
        unaff_w23 = 0;
        iVar3 = -0x185bda77;
        if (uVar2 <= uVar4) {
          iVar3 = 0x907c0f1;
        }
      }
      if (iVar3 != 0x55a447bb) break;
      unaff_w25 = 0;
      iVar3 = 0x741ad593;
      if (unaff_x22 <= uVar4) {
        iVar3 = -0x4924d840;
      }
    }
  } while (iVar3 != 0xc202cca);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371fc)])
            (param_1,param_2,uVar4,unaff_x22 - uVar4);
  return;
}


