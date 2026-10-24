// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001afb70; body: [[001afb70, 001afd9b]]

void FUN_001afb70(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar4 = 0;
  uVar1 = 0x39441fa1;
  if (param_2 < 0x1000000000000000) {
    uVar1 = 0xd5b0bec;
  }
  uVar3 = 0x1c13ee5c;
  do {
    while( true ) {
      while( true ) {
        while (uVar5 = uVar3, uVar3 = uVar5, uVar5 < 0x39441fa1) {
          if (uVar5 < 0x1c13ee5c) {
            uVar3 = 0x79de3a03;
            if (((uVar5 != 0xd5b0bec) && (uVar3 = uVar5, uVar5 == 0x1b779317)) &&
               (lVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b44f)])
                                  (param_2 << 3,PTR_DAT_001f6ae8), uVar3 = 0x642b8230, lVar4 != 0))
            {
              uVar3 = 0x1ccb84b6;
            }
          }
          else {
            uVar3 = uVar1;
            if ((uVar5 != 0x1c13ee5c) && (uVar3 = uVar5, uVar5 == 0x1ccb84b6)) {
              uVar3 = 0x7f68542e;
            }
          }
        }
        if (0x79de3a02 < uVar5) break;
        if (uVar5 == 0x39441fa1) {
          param_2 = 0xfffffffffffffff;
          uVar3 = 0xd5b0bec;
        }
        else if (uVar5 == 0x642b8230) {
          param_2 = param_2 / 2;
          uVar3 = 0x79de3a03;
        }
      }
      if (uVar5 != 0x79de3a03) break;
      uVar3 = 0x1b779317;
      if (param_2 < 1) {
        uVar3 = 0x7f68542e;
      }
    }
  } while (uVar5 != 0x7f68542e);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b44c)])(auStack_70,param_2);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b44d)])(param_1,lVar4,auStack_70);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


