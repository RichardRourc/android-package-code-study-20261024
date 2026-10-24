// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001be764; body: [[001be764, 001bea77]]

bool FUN_001be764(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  int local_84;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_84 = 0;
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbe5)])(auStack_80);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbe4)])(auStack_80);
  pcVar4 = (code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbfb)];
  iVar2 = -0x2c5607fa;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar5 = iVar2, iVar2 = iVar5, 0x27efba6d < iVar5) {
            if (iVar5 < 0x308f1f35) {
              iVar2 = -0x4133f00f;
              if (((iVar5 != 0x27efba6e) && (iVar2 = iVar5, iVar5 == 0x29c9b7db)) &&
                 (uVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbff)])
                                    (auStack_80), iVar2 = -0x650b92a4, (uVar3 & 1) == 0)) {
                iVar2 = 0x27efba6e;
              }
            }
            else if (iVar5 == 0x308f1f35) {
              local_84 = local_84 + 0x2d5;
              iVar2 = 0x29c9b7db;
            }
            else if (iVar5 == 0x39e3984d) {
              uVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbfa)])(auStack_80);
              iVar2 = -0x4133f00f;
              if ((uVar3 & 1) == 0) {
                iVar2 = 0x4fbe018a;
              }
            }
            else if (iVar5 == 0x4fbe018a) {
              uVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbf9)])(auStack_80);
              iVar2 = 0x1a87171c;
              if ((uVar3 & 1) == 0) {
                iVar2 = -0x6e5e83ae;
              }
            }
          }
          if (-0x4133f010 < iVar5) break;
          if (iVar5 == -0x6e5e83ae) {
            uVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbf8)])(auStack_80);
            iVar2 = 0x308f1f35;
            if ((uVar3 & 1) == 0) {
              iVar2 = 0x29c9b7db;
            }
          }
          else if (iVar5 == -0x650b92a4) {
            local_84 = local_84 + 0x486;
            iVar2 = 0x27efba6e;
          }
          else if (iVar5 == -0x4626dd2d) {
            local_84 = local_84 + 0x39;
            iVar2 = 0x39e3984d;
          }
        }
        if (iVar5 != -0x2c5607fa) break;
        uVar3 = (*pcVar4)();
        iVar2 = -0x4626dd2d;
        if ((uVar3 & 1) == 0) {
          iVar2 = 0x39e3984d;
        }
      }
      if (iVar5 != 0x1a87171c) break;
      local_84 = local_84 + 0x1be;
      iVar2 = -0x6e5e83ae;
    }
  } while (iVar5 != -0x4133f00f);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbfe)])(auStack_80);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_84 != 0;
}


