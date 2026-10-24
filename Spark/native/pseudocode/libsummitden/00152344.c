// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00152344; body: [[00152344, 0015251f]]

uint FUN_00152344(long param_1,ulong param_2,long *param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  uint unaff_w29;
  
  iVar1 = -0x6d0962cd;
  if (7 < param_2) {
    iVar1 = 0xc67163;
  }
  uVar3 = param_1 + 8U;
  iVar2 = 0x2a934fe2;
  do {
    while( true ) {
      while( true ) {
        while (iVar4 = iVar2, iVar2 = iVar4, iVar4 < 0xc67163) {
          if (iVar4 < -0x32a00bbf) {
            if (iVar4 == -0x6d0962cd) {
              unaff_w29 = 0;
              iVar2 = 0x591833d6;
            }
            else if (iVar4 == -0x3666f355) {
              uVar3 = (*(code *)(&PTR_FUN_001fc070)[(long)DAT_001fcf68 ^ 0x283c8a23])(param_1 + 6);
              uVar3 = uVar3 & 0xffff;
              iVar2 = 0x71a70633;
              if (uVar3 + 8 <= param_2) {
                iVar2 = -0x1ec35788;
              }
            }
          }
          else {
            iVar2 = 0x591833d6;
            if ((iVar4 != -0x32a00bbf) && (iVar2 = iVar4, iVar4 == -0x1ec35788)) {
              unaff_w29 = 1;
              *param_3 = param_1 + 8U + uVar3;
              *param_4 = (param_2 - 8) - uVar3;
              iVar2 = -0x32a00bbf;
            }
          }
        }
        if (0x591833d5 < iVar4) break;
        if (iVar4 == 0xc67163) {
          iVar2 = -0x3666f355;
          if (*(char *)(param_1 + 4) != '\x02') {
            iVar2 = -0x6d0962cd;
          }
        }
        else if (iVar4 == 0x2a934fe2) {
          iVar2 = iVar1;
        }
      }
      if (iVar4 != 0x71a70633) break;
      unaff_w29 = 0;
      iVar2 = -0x32a00bbf;
    }
  } while (iVar4 != 0x591833d6);
  return unaff_w29 & 1;
}


