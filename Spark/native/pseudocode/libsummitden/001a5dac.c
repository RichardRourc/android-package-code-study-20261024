// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a5dac; body: [[001a5dac, 001a5f6f]]

long * FUN_001a5dac(long param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  
  plVar5 = (long *)(*(code *)(&PTR_FUN_00201200)[(long)DAT_00202698 ^ 0x1873b572])();
  iVar1 = 0x6d9644a4;
  if (param_1 != 0) {
    iVar1 = -0x424fdc36;
  }
  iVar2 = 0x4fb29541;
  if (param_2 != (undefined1 *)0x0) {
    iVar2 = -0x38177dda;
  }
  iVar3 = 0x6d9644a4;
  if (param_2 != (undefined1 *)0x0) {
    iVar3 = 0x935ed94;
  }
  plVar6 = plVar5;
  iVar4 = 0x1d6eacc3;
  do {
    while( true ) {
      while( true ) {
        while (iVar7 = iVar4, iVar4 = iVar7, iVar7 < 0x4fb29541) {
          if (iVar7 < 0x935ed94) {
            iVar4 = iVar3;
            if ((iVar7 != -0x424fdc36) && (iVar4 = iVar7, iVar7 == -0x38177dda)) {
              *param_2 = 0;
              iVar4 = 0x4fb29541;
            }
          }
          else if (iVar7 == 0x935ed94) {
            plVar6 = (long *)(*(code *)*plVar5)(param_1,param_2);
            iVar4 = 0x50577076;
          }
          else if (iVar7 == 0x1d6eacc3) {
            iVar4 = iVar2;
          }
        }
        if (iVar7 < 0x53d58eef) break;
        iVar4 = iVar1;
        if ((iVar7 != 0x53d58eef) && (iVar4 = iVar7, iVar7 == 0x6d9644a4)) {
          plVar6 = (long *)0x0;
          iVar4 = 0x50577076;
        }
      }
      if (iVar7 != 0x4fb29541) break;
      iVar4 = 0x6d9644a4;
      if (*plVar5 != 0) {
        iVar4 = 0x53d58eef;
      }
    }
  } while (iVar7 != 0x50577076);
  return plVar6;
}


