// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d8b6c; body: [[001d8b6c, 001d8dc7]]

void FUN_001d8b6c(long *param_1)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  
  pcVar1 = (char *)*param_1;
  if ((((char *)param_1[1] != pcVar1) && (1 < (ulong)(param_1[1] - (long)pcVar1))) &&
     (*pcVar1 == 'd')) {
    cVar2 = pcVar1[1];
    if (cVar2 == 'X') {
      *param_1 = (long)(pcVar1 + 2);
      lVar4 = FUN_001d642c();
      if (lVar4 == 0) {
        return;
      }
      lVar5 = FUN_001d642c(param_1);
      if (lVar5 == 0) {
        return;
      }
      lVar8 = FUN_001d8b6c(param_1);
      if (lVar8 == 0) {
        return;
      }
      pvVar10 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar10 + 8);
      puVar6 = pvVar10;
      if (lVar9 - 0xfc0U < 0xfffffffffffff010) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) {
LAB_001d8dc4:
                    /* WARNING: Subroutine does not return */
          FUN_001cee20();
        }
        lVar9 = 0;
        *puVar6 = pvVar10;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar9 + 0x30;
      puVar7 = (undefined8 *)((long)puVar6 + lVar9 + 0x10);
      *puVar7 = &PTR_FUN_001f5068;
      uVar3 = *(ushort *)((long)puVar6 + lVar9 + 0x19);
      *(undefined1 *)((long)puVar6 + lVar9 + 0x18) = 0x52;
      *(long *)((long)puVar6 + lVar9 + 0x20) = lVar4;
      *(long *)((long)puVar6 + lVar9 + 0x28) = lVar5;
      *(long *)((long)puVar6 + lVar9 + 0x30) = lVar8;
    }
    else {
      if (cVar2 == 'x') {
        *param_1 = (long)(pcVar1 + 2);
        lVar4 = FUN_001d642c();
        if (lVar4 == 0) {
          return;
        }
        lVar5 = FUN_001d8b6c(param_1);
        if (lVar5 == 0) {
          return;
        }
        pvVar10 = (void *)param_1[0x266];
        lVar8 = *(long *)((long)pvVar10 + 8);
        puVar6 = pvVar10;
        if (lVar8 - 0xfc0U < 0xfffffffffffff010) {
          puVar6 = malloc(0x1000);
          if (puVar6 == (void *)0x0) goto LAB_001d8dc4;
          lVar8 = 0;
          *puVar6 = pvVar10;
          puVar6[1] = 0;
          param_1[0x266] = (long)puVar6;
        }
        *(long *)((long)puVar6 + 8) = lVar8 + 0x30;
        *(undefined ***)((long)puVar6 + lVar8 + 0x10) = &PTR_FUN_001f4ff0;
        *(undefined1 *)((long)puVar6 + lVar8 + 0x18) = 0x51;
        *(long *)((long)puVar6 + lVar8 + 0x20) = lVar4;
        *(long *)((long)puVar6 + lVar8 + 0x28) = lVar5;
        *(ushort *)((long)puVar6 + lVar8 + 0x19) =
             *(ushort *)((long)puVar6 + lVar8 + 0x19) & 0xf000 | 0x540;
        *(undefined1 *)((long)puVar6 + lVar8 + 0x30) = 1;
        return;
      }
      if (cVar2 != 'i') goto LAB_001d8c54;
      *param_1 = (long)(pcVar1 + 2);
      lVar4 = FUN_001d4604();
      if (lVar4 == 0) {
        return;
      }
      lVar5 = FUN_001d8b6c(param_1);
      if (lVar5 == 0) {
        return;
      }
      pvVar10 = (void *)param_1[0x266];
      lVar8 = *(long *)((long)pvVar10 + 8);
      puVar6 = pvVar10;
      if (lVar8 - 0xfc0U < 0xfffffffffffff010) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_001d8dc4;
        lVar8 = 0;
        *puVar6 = pvVar10;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar8 + 0x30;
      puVar7 = (undefined8 *)((long)puVar6 + lVar8 + 0x10);
      *puVar7 = &PTR_FUN_001f4ff0;
      uVar3 = *(ushort *)((long)puVar6 + lVar8 + 0x19);
      *(undefined1 *)((long)puVar6 + lVar8 + 0x18) = 0x51;
      *(long *)((long)puVar6 + lVar8 + 0x20) = lVar4;
      *(long *)((long)puVar6 + lVar8 + 0x28) = lVar5;
      *(undefined1 *)((long)puVar6 + lVar8 + 0x30) = 0;
    }
    *(ushort *)((long)puVar7 + 9) = uVar3 & 0xf000 | 0x540;
    return;
  }
LAB_001d8c54:
  FUN_001d642c();
  return;
}


