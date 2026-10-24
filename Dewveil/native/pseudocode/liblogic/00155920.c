// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00155920; body: [[00155920, 00155b87]]

void FUN_00155920(long *param_1)

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
      lVar4 = FUN_00153210();
      if (lVar4 == 0) {
        return;
      }
      lVar5 = FUN_00153210(param_1);
      if (lVar5 == 0) {
        return;
      }
      lVar8 = FUN_00155920(param_1);
      if (lVar8 == 0) {
        return;
      }
      pvVar10 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar10 + 8);
      puVar6 = pvVar10;
      if (lVar9 - 0xfc0U < 0xfffffffffffff010) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) {
LAB_00155b84:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar9 = 0;
        *puVar6 = pvVar10;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar9 + 0x30;
      puVar7 = (undefined8 *)((long)puVar6 + lVar9 + 0x10);
      *puVar7 = &PTR_FUN_00172418;
      uVar3 = *(ushort *)((long)puVar6 + lVar9 + 0x19);
      *(undefined1 *)((long)puVar6 + lVar9 + 0x18) = 0x52;
      *(long *)((long)puVar6 + lVar9 + 0x20) = lVar4;
      *(long *)((long)puVar6 + lVar9 + 0x28) = lVar5;
      *(long *)((long)puVar6 + lVar9 + 0x30) = lVar8;
    }
    else {
      if (cVar2 == 'x') {
        *param_1 = (long)(pcVar1 + 2);
        lVar4 = FUN_00153210();
        if (lVar4 == 0) {
          return;
        }
        lVar5 = FUN_00155920(param_1);
        if (lVar5 == 0) {
          return;
        }
        pvVar10 = (void *)param_1[0x266];
        lVar8 = *(long *)((long)pvVar10 + 8);
        puVar6 = pvVar10;
        if (lVar8 - 0xfc0U < 0xfffffffffffff010) {
          puVar6 = malloc(0x1000);
          if (puVar6 == (void *)0x0) goto LAB_00155b84;
          lVar8 = 0;
          *puVar6 = pvVar10;
          puVar6[1] = 0;
          param_1[0x266] = (long)puVar6;
        }
        *(long *)((long)puVar6 + 8) = lVar8 + 0x30;
        *(undefined ***)((long)puVar6 + lVar8 + 0x10) = &PTR_FUN_001723a8;
        *(undefined1 *)((long)puVar6 + lVar8 + 0x18) = 0x51;
        *(long *)((long)puVar6 + lVar8 + 0x20) = lVar4;
        *(long *)((long)puVar6 + lVar8 + 0x28) = lVar5;
        *(ushort *)((long)puVar6 + lVar8 + 0x19) =
             *(ushort *)((long)puVar6 + lVar8 + 0x19) & 0xf000 | 0x540;
        *(undefined1 *)((long)puVar6 + lVar8 + 0x30) = 1;
        return;
      }
      if (cVar2 != 'i') goto LAB_00155a0c;
      *param_1 = (long)(pcVar1 + 2);
      lVar4 = FUN_00151444();
      if (lVar4 == 0) {
        return;
      }
      lVar5 = FUN_00155920(param_1);
      if (lVar5 == 0) {
        return;
      }
      pvVar10 = (void *)param_1[0x266];
      lVar8 = *(long *)((long)pvVar10 + 8);
      puVar6 = pvVar10;
      if (lVar8 - 0xfc0U < 0xfffffffffffff010) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_00155b84;
        lVar8 = 0;
        *puVar6 = pvVar10;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar8 + 0x30;
      puVar7 = (undefined8 *)((long)puVar6 + lVar8 + 0x10);
      *puVar7 = &PTR_FUN_001723a8;
      uVar3 = *(ushort *)((long)puVar6 + lVar8 + 0x19);
      *(undefined1 *)((long)puVar6 + lVar8 + 0x18) = 0x51;
      *(long *)((long)puVar6 + lVar8 + 0x20) = lVar4;
      *(long *)((long)puVar6 + lVar8 + 0x28) = lVar5;
      *(undefined1 *)((long)puVar6 + lVar8 + 0x30) = 0;
    }
    *(ushort *)((long)puVar7 + 9) = uVar3 & 0xf000 | 0x540;
    return;
  }
LAB_00155a0c:
  FUN_00153210();
  return;
}


