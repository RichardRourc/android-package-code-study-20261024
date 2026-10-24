// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001550c4; body: [[001550c4, 0015522f]]

void FUN_001550c4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_80 [8];
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a59)])(auStack_80,param_1,param_2);
  while( true ) {
    lVar3 = local_78;
    iVar1 = -0xfdf01c9;
    if (local_78 != lStack_70) {
      iVar1 = -0x29080858;
    }
    iVar4 = 0x43fa2a51;
    do {
      while (iVar6 = iVar4, iVar6 < -0xfc75ecc) {
        if (iVar6 == -0x29080858) {
          uVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a5a)])(lVar3);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a5b)])(param_1 + 0x10,uVar5);
          iVar4 = -0xfc75ecc;
        }
        else {
          iVar4 = 0x11ccbc3b;
        }
      }
      iVar4 = iVar1;
    } while (iVar6 == 0x43fa2a51);
    if (iVar6 != -0xfc75ecc) break;
    local_78 = lVar3 + 4;
  }
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a5c)])(auStack_80);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


