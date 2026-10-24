// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c2928; body: [[001c2928, 001c2aeb]]

void FUN_001c2928(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc2)])(param_1);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba7)])(param_1,0x11);
  lVar7 = 0;
  do {
    iVar1 = -0x3a2a2f98;
    if (0x11 < lVar7 + 1U) {
      iVar1 = 0xb037441;
    }
    iVar3 = 0x57334668;
    while( true ) {
      do {
        while (iVar6 = iVar3, -0x3304eca4 < iVar6) {
          if (iVar6 < 0x4c3d2b34) {
            if (iVar6 == -0x3304eca3) {
              (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(param_1);
              iVar3 = 0x4c3d2b34;
            }
            else {
              iVar3 = -0x76ba2663;
            }
          }
          else {
            iVar3 = iVar1;
            if (iVar6 != 0x57334668) {
              return;
            }
          }
        }
        iVar3 = 0x4c3d2b34;
      } while (iVar6 == -0x76ba2663);
      if (iVar6 != -0x3a2a2f98) break;
      bVar2 = *(byte *)(param_2 + lVar7);
      bVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba6)])(0xcdbca1b0,lVar7);
      pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bba5)])
                                 (param_1,lVar7);
      *pbVar5 = bVar4 ^ bVar2;
      iVar3 = -0x612fb072;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}


