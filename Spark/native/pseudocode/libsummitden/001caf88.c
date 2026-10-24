// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001caf88; body: [[001caf88, 001cb147]]

void FUN_001caf88(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef4)])(param_1);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e80)])(param_1,0x1a);
  lVar7 = 0;
  while( true ) {
    iVar1 = -0x7ad37a03;
    if (0x1a < lVar7 + 1U) {
      iVar1 = 0x68036ba6;
    }
    iVar3 = 0x1b292e9b;
    do {
      while( true ) {
        while (iVar6 = iVar3, 0x1aee8b80 < iVar6) {
          if (iVar6 == 0x1aee8b81) {
            (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1edc)])(param_1);
            iVar3 = -0x225ae01c;
          }
          else {
            iVar3 = iVar1;
            if (iVar6 != 0x1b292e9b) {
              iVar3 = -0x465bb6f5;
            }
          }
        }
        if (-0x465bb6f6 < iVar6) break;
        bVar2 = *(byte *)(param_2 + lVar7);
        bVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebf)])(0xad47e27b,lVar7);
        pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ebe)])
                                   (param_1,lVar7);
        *pbVar5 = bVar4 ^ bVar2;
        iVar3 = 0x195dcdf3;
      }
      iVar3 = -0x225ae01c;
    } while (iVar6 == -0x465bb6f5);
    if (iVar6 == -0x225ae01c) break;
    lVar7 = lVar7 + 1;
  }
  return;
}


