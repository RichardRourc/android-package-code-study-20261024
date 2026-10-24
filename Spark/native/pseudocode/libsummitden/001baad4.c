// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001baad4; body: [[001baad4, 001bac47]]

void FUN_001baad4(undefined8 param_1,ulong param_2,undefined4 param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = -0x690b2235;
  if (param_2 != 0xffffffffffffffff) {
    iVar1 = -0x515c84cb;
  }
  iVar2 = -0x364aa909;
  if (param_4 <= param_2) {
    iVar2 = -0x690b2235;
  }
  iVar3 = -0x6d75719;
  while( true ) {
    do {
      while (iVar4 = iVar3, iVar4 < -0x6d75719) {
        if (iVar4 == -0x690b2235) {
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caacd)])(param_1,param_3,param_4);
          iVar3 = 0x1642228d;
        }
        else if (iVar4 == -0x515c84cb) {
          iVar3 = -0x364aa909;
        }
        else {
          iVar3 = iVar4;
          if (iVar4 == -0x364aa909) {
            (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caacc)])
                      (param_1,param_3,param_4,param_2);
            iVar3 = 0x1642228d;
          }
        }
      }
      iVar3 = iVar1;
    } while (iVar4 == -0x6d75719);
    if (iVar4 == 0x1642228d) break;
    iVar3 = iVar4;
    if (iVar4 == 0x79f0c209) {
      iVar3 = iVar2;
    }
  }
  return;
}


