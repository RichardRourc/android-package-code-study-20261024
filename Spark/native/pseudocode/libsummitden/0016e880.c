// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016e880; body: [[0016e880, 0016ea53]]

void FUN_0016e880(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong unaff_x19;
  
  lVar4 = (param_2 - param_1 >> 3) * -0x5555555555555555;
  iVar1 = -0x3b9e386f;
  if (param_2 - param_1 < 0x19) {
    iVar1 = 0x7486951c;
  }
  iVar2 = -0x34f9178;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar2, iVar2 = iVar3, iVar3 < -0x1b9096d) {
          if (iVar3 < -0x38577f5) {
            if (iVar3 == -0x4d921604) {
              unaff_x19 = unaff_x19 - 1;
              iVar2 = 0x14b1a940;
            }
            else if (iVar3 == -0x3b9e386f) {
              unaff_x19 = (lVar4 + -2) / 2;
              iVar2 = 0x14b1a940;
            }
          }
          else if (iVar3 == -0x38577f5) {
            iVar2 = -0x1b9096d;
          }
          else if (iVar3 == -0x34f9178) {
            iVar2 = iVar1;
          }
        }
        if (0x50582137 < iVar3) break;
        iVar2 = 0x7486951c;
        if (((iVar3 != -0x1b9096d) && (iVar2 = iVar3, iVar3 == 0x14b1a940)) &&
           (iVar2 = 0x50582138, 0x7fffffffffffffff < unaff_x19)) {
          iVar2 = -0x38577f5;
        }
      }
      if (iVar3 != 0x50582138) break;
      (*(code *)(&PTR_FUN_001fda20)[(long)DAT_001fed20 ^ 0x1fffffff98a52b55])
                (param_1,param_3,lVar4,param_1 + unaff_x19 * 0x18);
      iVar2 = -0x4d921604;
    }
  } while (iVar3 != 0x7486951c);
  return;
}


