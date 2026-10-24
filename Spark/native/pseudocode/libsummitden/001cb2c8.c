// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cb2c8; body: [[001cb2c8, 001cb44f]]

void FUN_001cb2c8(undefined8 param_1,long param_2)

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
    uVar1 = 0x428b8509;
    if (0xe < lVar7 + 1U) {
      uVar1 = 0x68e5a964;
    }
    uVar3 = 0x71fc1e8;
    while( true ) {
      do {
        while (uVar6 = uVar3, 0x58a2a949 < uVar6) {
          if (uVar6 == 0x58a2a94a) {
            uVar3 = 0x5dee7b53;
          }
          else {
            if (uVar6 != 0x68e5a964) {
              return;
            }
            uVar3 = 0x58a2a94a;
          }
        }
        uVar3 = uVar1;
      } while (uVar6 == 0x71fc1e8);
      if (uVar6 != 0x428b8509) break;
      bVar2 = *(byte *)(param_2 + lVar7);
      bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])(0x8339f213,lVar7);
      pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                 (param_1,lVar7);
      *pbVar5 = bVar4 ^ bVar2;
      uVar3 = 0x1d6df7b9;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


