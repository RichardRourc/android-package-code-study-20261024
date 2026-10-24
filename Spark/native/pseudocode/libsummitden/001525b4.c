// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001525b4; body: [[001525b4, 001527d7]]

void FUN_001525b4(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  ulong uVar9;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a28)])(auStack_80);
  uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])(param_1);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a29)])(uVar4,param_2,auStack_80);
  uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])(param_1);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a2a)])(auStack_98,uVar4);
  uVar9 = 0;
  while( true ) {
    iVar8 = 0x5e4d78ed;
    while( true ) {
      while (0x4d16180d < iVar8) {
        bVar3 = iVar8 != 0x4d16180e;
        iVar8 = -0x16e5e3a9;
        if ((bVar3) &&
           (uVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])(param_1),
           iVar8 = 0x4fcaba8, uVar5 <= uVar9)) {
          iVar8 = 0x4d16180e;
        }
      }
      if (iVar8 != 0x4fcaba8) break;
      puVar6 = (undefined1 *)
               (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a2b)])(param_1,uVar9);
      uVar1 = *puVar6;
      puVar7 = (undefined4 *)
               (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a2c)])(auStack_80,uVar9);
      puVar6 = (undefined1 *)
               (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a2b)])(auStack_98,*puVar7);
      *puVar6 = uVar1;
      iVar8 = -0x3440df09;
    }
    if (iVar8 != -0x3440df09) break;
    uVar9 = uVar9 + 1;
  }
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a2d)])(param_1,auStack_98);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b06)])(auStack_98);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a2e)])(auStack_80);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


