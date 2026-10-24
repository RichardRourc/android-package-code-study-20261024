// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017d9a0; body: [[0017d9a0, 0017db33]]

long FUN_0017d9a0(undefined8 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long unaff_x22;
  int iVar6;
  long local_68;
  
  iVar6 = 0;
  iVar5 = -0x4cf6bed1;
  bVar2 = false;
  do {
    while( true ) {
      iVar1 = 0x3f39279c;
      if (param_2 <= iVar6) {
        iVar1 = 0x90ce0f4;
      }
      while( true ) {
        while (iVar5 < -0x4cf6bed1) {
          bVar4 = iVar5 != -0x77c65b49;
          iVar5 = iVar1;
          if (bVar4) {
            iVar5 = -0x4cf6bed1;
          }
        }
        if (0x90ce0f3 < iVar5) break;
        if (iVar5 == -0xeb5d9b5) {
          iVar5 = -0x4cf6bed1;
          if (!bVar2) {
            return local_68;
          }
        }
        else {
          unaff_x22 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e5)])(param_1);
          iVar5 = -0x77c65b49;
          if (unaff_x22 != 0) {
            iVar5 = 0x1a9389dc;
          }
        }
      }
      if (iVar5 != 0x90ce0f4) break;
      local_68 = 0;
      lVar3 = local_68;
LAB_0017db00:
      local_68 = lVar3;
      bVar2 = false;
      iVar5 = -0xeb5d9b5;
    }
    lVar3 = unaff_x22;
    if (iVar5 == 0x1a9389dc) goto LAB_0017db00;
    (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e4)])(100000);
    iVar6 = iVar6 + 100;
    bVar2 = true;
    iVar5 = -0xeb5d9b5;
  } while( true );
}


