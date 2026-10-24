// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ca664; body: [[001ca664, 001ca7eb]]

void FUN_001ca664(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,6);
  lVar7 = 0;
  do {
    iVar1 = -0x559ed708;
    if (6 < lVar7 + 1U) {
      iVar1 = 0x40dc8e8c;
    }
    iVar3 = -0x45d7ea8;
    while( true ) {
      do {
        while (iVar6 = iVar3, iVar6 < -0x45d7ea8) {
          if (iVar6 == -0x559ed708) {
            bVar2 = *(byte *)(param_2 + lVar7);
            bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])
                              (0x4952278c,lVar7);
            pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                       (param_1,lVar7);
            *pbVar5 = bVar4 ^ bVar2;
            iVar3 = -0x276dad6;
          }
          else {
            if (iVar6 != -0x30685a2b) {
              return;
            }
            iVar3 = -0x78beb39;
          }
        }
        iVar3 = iVar1;
      } while (iVar6 == -0x45d7ea8);
      if (iVar6 != 0x40dc8e8c) break;
      iVar3 = -0x30685a2b;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


