// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e6180; body: [[001e6180, 001e62cb]]

undefined8 * FUN_001e6180(long *param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  void *pvVar8;
  
  psVar1 = (short *)*param_1;
  if ((ulong)(param_1[1] - (long)psVar1) < 2) {
LAB_001e61a8:
    puVar2 = (undefined8 *)FUN_001d2908(param_1,0);
    return puVar2;
  }
  if (*psVar1 == 0x7354) {
    pcVar6 = "struct";
    uVar7 = 6;
  }
  else if (*psVar1 == 0x7554) {
    pcVar6 = "union";
    uVar7 = 5;
  }
  else {
    if (*psVar1 != 0x6554) goto LAB_001e61a8;
    pcVar6 = "enum";
    uVar7 = 4;
  }
  *param_1 = (long)(psVar1 + 1);
  lVar3 = FUN_001d2908(param_1,0);
  puVar2 = (undefined8 *)0x0;
  if (lVar3 != 0) {
    pvVar8 = (void *)param_1[0x266];
    lVar5 = *(long *)((long)pvVar8 + 8);
    puVar4 = pvVar8;
    if (lVar5 - 0xfc0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_001cee20();
      }
      lVar5 = 0;
      *puVar4 = pvVar8;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar5 + 0x30;
    puVar2 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
    *puVar2 = &PTR_FUN_001f66e8;
    *(undefined1 *)((long)puVar4 + lVar5 + 0x18) = 6;
    *(long *)((long)puVar4 + lVar5 + 0x30) = lVar3;
    *(char **)((long)puVar4 + lVar5 + 0x20) = pcVar6;
    *(undefined8 *)((long)puVar4 + lVar5 + 0x28) = uVar7;
    *(ushort *)((long)puVar4 + lVar5 + 0x19) =
         *(ushort *)((long)puVar4 + lVar5 + 0x19) & 0xf000 | 0x540;
  }
  return puVar2;
}


