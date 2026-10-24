// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00175e24; body: [[00175e24, 00175f5f]]

undefined8 FUN_00175e24(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_x23;
  
  iVar1 = -0x28143ad0;
  if (param_1 != param_2) {
    iVar1 = 0xf1f88a5;
  }
  iVar2 = 0x425908e6;
  do {
    do {
      iVar3 = iVar2;
      iVar2 = iVar1;
    } while (iVar3 == 0x425908e6);
    if (iVar3 == -0x28143ad0) {
      unaff_x23 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a0)])(param_2,param_3);
    }
    else {
      if (iVar3 != 0xf1f88a5) {
        return unaff_x23;
      }
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a1)])(param_1,param_3);
      unaff_x23 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a6)])
                            (param_1,param_2,param_3,param_4);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a1)])(param_2,param_3);
    }
    iVar2 = 0x5e013f1b;
  } while( true );
}


