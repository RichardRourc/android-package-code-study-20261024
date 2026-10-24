// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001675b0; body: [[001675b0, 00167713]]

ushort * FUN_001675b0(long param_1)

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
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00178d98);
  if (DAT_00178dc0 == (ushort *)0x0) {
    DAT_00178dc0 = (ushort *)&DAT_00178ddc;
    DAT_00178ddc = 0x7d0080;
  }
  else if (DAT_00178dc0 == (ushort *)&DAT_00178fd0) goto LAB_0016766c;
  uVar5 = param_1 + 3U >> 2;
  uVar1 = uVar5 + 1;
  puVar4 = (ushort *)0x0;
  puVar6 = DAT_00178dc0;
  do {
    puVar9 = puVar6 + 2;
    if (((ulong)puVar9 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0014ce10("%s:%d: %s","out/llvm-project/libcxxabi/src/fallback_malloc.cpp",0x92,
                   &DAT_00136b27);
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
        FUN_0014ce10("%s:%d: %s","out/llvm-project/libcxxabi/src/fallback_malloc.cpp",0xa7,
                     &DAT_00136b27);
      }
      goto code_r0x001676d8;
    }
    if (uVar5 < uVar8) {
      if (puVar4 == (ushort *)0x0) {
        DAT_00178dc0 = (ushort *)(&DAT_00178dd0 + (ulong)*puVar6 * 4);
        *puVar6 = 0;
      }
      else {
        *puVar4 = *puVar6;
        *puVar6 = 0;
      }
      goto code_r0x001676d8;
    }
    uVar2 = *puVar6;
    puVar4 = puVar6;
    puVar6 = (ushort *)(&DAT_00178dd0 + (ulong)uVar2 * 4);
  } while ((ulong)uVar2 != 0x80);
LAB_0016766c:
  puVar9 = (ushort *)0x0;
code_r0x001676d8:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00178d98);
  return puVar9;
}


