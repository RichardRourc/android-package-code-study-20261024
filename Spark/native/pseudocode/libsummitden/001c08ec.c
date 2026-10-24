// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c08ec; body: [[001c08ec, 001c0aa7]]

void FUN_001c08ec(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc2)])(param_1);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba7)])(param_1,5);
  lVar7 = 0;
  while( true ) {
    iVar1 = -0x50084ad1;
    if (5 < lVar7 + 1U) {
      iVar1 = 0x5298bf30;
    }
    iVar3 = -0x3d34ac53;
    do {
      while( true ) {
        while (iVar6 = iVar3, 0x5298bf2f < iVar6) {
          if (iVar6 == 0x5298bf30) {
            iVar3 = 0x7d6568ec;
          }
          else {
            iVar3 = 0x182e6497;
            if (iVar6 == 0x57ae6123) {
              (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(param_1);
              iVar3 = 0x182e6497;
            }
          }
        }
        if (-0x3d34ac54 < iVar6) break;
        bVar2 = *(byte *)(param_2 + lVar7);
        bVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba6)])(0x56ac0075,lVar7);
        pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba5)])
                                   (param_1,lVar7);
        *pbVar5 = bVar4 ^ bVar2;
        iVar3 = 0x45af5990;
      }
      iVar3 = iVar1;
    } while (iVar6 == -0x3d34ac53);
    if (iVar6 == 0x182e6497) break;
    lVar7 = lVar7 + 1;
  }
  return;
}


