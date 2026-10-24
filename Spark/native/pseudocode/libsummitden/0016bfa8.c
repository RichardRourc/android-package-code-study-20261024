// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016bfa8; body: [[0016bfa8, 0016c0e3]]

undefined8 FUN_0016bfa8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_x23;
  
  iVar1 = 0x5221bf31;
  if (param_1 != param_2) {
    iVar1 = 0x26cd8f61;
  }
  iVar2 = 0x73d10dfc;
  while( true ) {
    do {
      iVar3 = iVar2;
      iVar2 = iVar1;
    } while (iVar3 == 0x73d10dfc);
    if (iVar3 == -0x68864b28) break;
    if (iVar3 == 0x26cd8f61) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b40)])(param_1,param_3);
      unaff_x23 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b41)])
                            (param_1,param_2,param_3,param_4);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b40)])(param_2,param_3);
    }
    else {
      unaff_x23 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b43)])(param_2,param_3);
    }
    iVar2 = -0x68864b28;
  }
  return unaff_x23;
}


