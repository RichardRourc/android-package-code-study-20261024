// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b9dc0; body: [[001b9dc0, 001b9f83]]

void FUN_001b9dc0(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  
  (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
  (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa6a)])(param_1,0x21);
  lVar7 = 0;
  do {
    iVar1 = 0x620ef3aa;
    if (0x21 < lVar7 + 1U) {
      iVar1 = -0xf0b858;
    }
    iVar3 = -0x73da1f5e;
    do {
      while (iVar6 = iVar3, -0xf0b859 < iVar6) {
        if (iVar6 < 0x612c5c41) {
          if (iVar6 != -0xf0b858) {
            return;
          }
          iVar3 = -0x5baf90a3;
        }
        else if (iVar6 == 0x612c5c41) {
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa01)])(param_1);
          iVar3 = 0x4fd60cd4;
        }
        else {
          bVar2 = *(byte *)(param_2 + lVar7);
          bVar4 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa69)])(0x1c24bf84,lVar7)
          ;
          pbVar5 = (byte *)(*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa68)])
                                     (param_1,lVar7);
          *pbVar5 = bVar4 ^ bVar2;
          iVar3 = -0x57f877b4;
        }
      }
      iVar3 = iVar1;
    } while ((iVar6 == -0x73da1f5e) || (iVar3 = 0x4fd60cd4, iVar6 == -0x5baf90a3));
    lVar7 = lVar7 + 1;
  } while( true );
}


