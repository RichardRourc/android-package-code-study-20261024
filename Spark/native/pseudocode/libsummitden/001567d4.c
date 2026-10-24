// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001567d4; body: [[001567d4, 00156907]]

void FUN_001567d4(void)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  byte *pbVar5;
  int iVar6;
  ulong uVar7;
  undefined4 local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar7 = 0;
  local_6c = 0;
  while( true ) {
    iVar6 = -0x2c9efb3a;
    while( true ) {
      while (iVar6 < -0x1b087813) {
        bVar3 = iVar6 != -0x6743dbcf;
        iVar6 = -0x1b087813;
        if ((bVar3) &&
           (uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a39)])(&local_6c),
           iVar6 = 0x3eb891c5, uVar4 <= uVar7)) {
          iVar6 = -0x6743dbcf;
        }
      }
      if (iVar6 != 0x3eb891c5) break;
      bVar1 = (&DAT_0011eef9)[uVar7];
      pbVar5 = (byte *)(*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a9b)])
                                 (&local_6c,uVar7);
      *pbVar5 = bVar1 ^ 0x5a;
      iVar6 = -0x1564b915;
    }
    if (iVar6 == -0x1b087813) break;
    uVar7 = uVar7 + 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_6c);
  }
  return;
}


