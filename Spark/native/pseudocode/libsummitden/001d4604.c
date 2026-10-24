// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d4604; body: [[001d4604, 001d47af]]

undefined8 * FUN_001d4604(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar2 == pbVar1) || (*pbVar1 - 0x3a < 0xfffffff6)) {
    return (undefined8 *)0x0;
  }
  pbVar3 = pbVar1 + 1;
  pbVar1 = pbVar1 + 1;
  uVar8 = 0;
  do {
    uVar7 = uVar8;
    pbVar5 = pbVar1;
    pcVar9 = (char *)pbVar3;
    *param_1 = pbVar5;
    lVar6 = (ulong)pbVar5[-1] + uVar7 * 10;
    uVar8 = lVar6 - 0x30;
    if (pbVar5 == pbVar2) break;
    pbVar3 = (byte *)(pcVar9 + 1);
    pbVar1 = pbVar5 + 1;
  } while (*pbVar5 - 0x30 < 10);
  if ((ulong)((long)pbVar2 - (long)pcVar9) <= lVar6 - 0x31U) {
    return (undefined8 *)0x0;
  }
  *param_1 = pbVar5 + (ulong)pbVar5[-1] + uVar7 * 10 + -0x30;
  if ((uVar8 < 10) || (*(long *)pbVar5 != 0x5f4c41424f4c475f || *(short *)(pbVar5 + 8) != 0x4e5f)) {
    puVar10 = (undefined8 *)param_1[0x266];
    lVar6 = puVar10[1];
    if (0xfffffffffffff00f < lVar6 - 0xfd0U) goto LAB_001d470c;
    puVar4 = malloc(0x1000);
    if (puVar4 == (void *)0x0) goto LAB_001d47ac;
    *puVar4 = puVar10;
    puVar4[1] = 0;
  }
  else {
    puVar10 = (undefined8 *)param_1[0x266];
    lVar6 = puVar10[1];
    if (0xfffffffffffff00f < lVar6 - 0xfd0U) {
      pcVar9 = "(anonymous namespace)";
      uVar8 = 0x15;
      goto LAB_001d470c;
    }
    puVar4 = malloc(0x1000);
    if (puVar4 == (undefined8 *)0x0) {
LAB_001d47ac:
                    /* WARNING: Subroutine does not return */
      FUN_001cee20();
    }
    *puVar4 = puVar10;
    puVar4[1] = 0;
    pcVar9 = "(anonymous namespace)";
    uVar8 = 0x15;
  }
  lVar6 = 0;
  param_1[0x266] = puVar4;
  puVar10 = puVar4;
LAB_001d470c:
  puVar10[1] = lVar6 + 0x20;
  puVar4 = (undefined8 *)((long)puVar10 + lVar6 + 0x10);
  *puVar4 = &PTR_FUN_001f3c10;
  *(char **)((long)puVar10 + lVar6 + 0x20) = pcVar9;
  *(ulong *)((long)puVar10 + lVar6 + 0x28) = uVar8;
  *(undefined1 *)((long)puVar10 + lVar6 + 0x18) = 8;
  *(ushort *)((long)puVar10 + lVar6 + 0x19) =
       *(ushort *)((long)puVar10 + lVar6 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


