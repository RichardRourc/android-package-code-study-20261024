// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e998c; body: [[001e998c, 001e9aef]]

ushort * FUN_001e998c(long param_1)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  ulong uVar8;
  ushort *puVar9;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00205c68);
  if (DAT_00205c90 == (ushort *)0x0) {
    DAT_00205c90 = (ushort *)&DAT_00205cac;
    DAT_00205cac = 0x7d0080;
  }
  else if (DAT_00205c90 == (ushort *)&DAT_00205ea0) goto LAB_001e9a48;
  uVar5 = param_1 + 3U >> 2;
  uVar1 = uVar5 + 1;
  puVar4 = (ushort *)0x0;
  puVar6 = DAT_00205c90;
  do {
    puVar9 = puVar6 + 2;
    if (((ulong)puVar9 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001cf218("%s:%d: %s","pbdxg72p25643fzdhxmd7kukj6wpdouzuw0s1zywmiol2y26mz",0x92,
                   &DAT_0011dd07);
    }
    uVar2 = puVar6[1];
    uVar8 = (ulong)uVar2;
    uVar7 = (ulong)((uint)uVar2 - (int)uVar1 & 3);
    if (uVar8 <= uVar1) {
      uVar7 = 0;
    }
    if (uVar7 + uVar1 < uVar8) {
      uVar3 = (ushort)(uVar7 + uVar1);
      uVar2 = uVar2 - uVar3;
      puVar4 = puVar6 + (ulong)uVar2 * 2;
      puVar6[1] = uVar2;
      puVar9 = puVar4 + 2;
      *puVar4 = 0;
      puVar4[1] = uVar3;
      if (((ulong)puVar9 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_001cf218("%s:%d: %s","pbdxg72p25643fzdhxmd7kukj6wpdouzuw0s1zywmiol2y26mz",0xa7,
                     &DAT_0011dd07);
      }
      goto code_r0x001e9ab4;
    }
    if (uVar5 < uVar8) {
      if (puVar4 == (ushort *)0x0) {
        DAT_00205c90 = (ushort *)(&DAT_00205ca0 + (ulong)*puVar6 * 4);
        *puVar6 = 0;
      }
      else {
        *puVar4 = *puVar6;
        *puVar6 = 0;
      }
      goto code_r0x001e9ab4;
    }
    uVar2 = *puVar6;
    puVar4 = puVar6;
    puVar6 = (ushort *)(&DAT_00205ca0 + (ulong)uVar2 * 4);
  } while ((ulong)uVar2 != 0x80);
LAB_001e9a48:
  puVar9 = (ushort *)0x0;
code_r0x001e9ab4:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00205c68);
  return puVar9;
}


