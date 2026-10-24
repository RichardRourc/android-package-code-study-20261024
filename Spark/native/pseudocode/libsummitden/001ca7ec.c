// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ca7ec; body: [[001ca7ec, 001ca96b]]

void FUN_001ca7ec(undefined8 param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,0xe);
  lVar7 = 0;
  do {
    uVar1 = 0x6280c508;
    if (0xe < lVar7 + 1U) {
      uVar1 = 0x3a31773d;
    }
    uVar3 = 0x23e52878;
    while( true ) {
      while( true ) {
        while (uVar6 = uVar3, uVar6 < 0x60deee1b) {
          uVar3 = uVar1;
          if (uVar6 != 0x23e52878) {
            if (uVar6 != 0x3a31773d) {
              return;
            }
            uVar3 = 0x656c79cf;
          }
        }
        if (uVar6 != 0x6280c508) break;
        bVar2 = *(byte *)(param_2 + lVar7);
        bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])(0xf4e56435,lVar7);
        pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                   (param_1,lVar7);
        *pbVar5 = bVar4 ^ bVar2;
        uVar3 = 0x60deee1b;
      }
      if (uVar6 != 0x656c79cf) break;
      uVar3 = 0x2250dbc5;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


