// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a7f20; body: [[001a7f20, 001a8057]]

void FUN_001a7f20(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_002001fc,3,&DAT_002047c8,&DAT_002001fc);
  lVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5c3)])(param_2,&DAT_002001fc,0);
  iVar1 = 0x27e1b95b;
  if (lVar3 != 0) {
    iVar1 = 0x743f4268;
  }
  iVar4 = -0xa47ca1c;
  while( true ) {
    while (iVar4 < 0x44ae0148) {
      bVar2 = iVar4 != -0xa47ca1c;
      iVar4 = iVar1;
      if (bVar2) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5cd)])
                  (param_1,param_2,2,0xffffffffffffffff);
        iVar4 = 0x44ae0148;
      }
    }
    if (iVar4 != 0x743f4268) break;
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5e4)])(param_1,param_2);
    iVar4 = 0x44ae0148;
  }
  return;
}


