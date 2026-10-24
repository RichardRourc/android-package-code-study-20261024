// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00103884; body: [[00103884, 00103c83]]

void FUN_00103884(void *param_1,long param_2)

{
  undefined2 *puVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  char cVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  byte *pbVar13;
  ulong *puVar14;
  undefined2 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined2 *__s;
  long lVar19;
  byte *pbVar20;
  long lVar21;
  long lVar22;
  
  lVar22 = *(long *)(param_2 + 0x38);
  if (lVar22 == 0) goto LAB_00103a5c;
  pvVar9 = *(void **)(param_2 + 0x48);
  lVar21 = *(long *)(param_2 + 8);
  pcVar10 = (char *)(*(long *)(param_2 + 0x40) + lVar22 * 0x18);
  cVar3 = *pcVar10;
  cVar6 = pcVar10[-0x18];
  lVar19 = *(long *)(lVar21 + 0x58);
  iVar2 = *(int *)(pcVar10 + 0x10);
  if ((cVar3 == '\x03' || cVar6 == '\x03') && (pvVar9 == (void *)0x0)) {
    pvVar9 = calloc(*(long *)(lVar21 + 8) * (ulong)*(uint *)(param_2 + 0x8c),4);
    *(void **)(param_2 + 0x48) = pvVar9;
    if (pvVar9 == (void *)0x0) {
      *(undefined4 *)(lVar21 + 0x60) = 0x6d;
      goto LAB_00103a5c;
    }
  }
  lVar11 = lVar22 + -1;
  puVar14 = (ulong *)(lVar19 + lVar11 * 0x30);
  pvVar7 = param_1;
  pvVar8 = pvVar9;
  if (iVar2 == -1) {
    uVar16 = *(ulong *)(lVar19 + lVar22 * 0x30);
    uVar18 = *puVar14;
    if ((uVar18 < uVar16) ||
       (*(long *)(lVar19 + lVar22 * 0x30 + 0x10) + uVar16 <
        *(long *)(lVar19 + lVar11 * 0x30 + 0x10) + uVar18)) goto LAB_00103990;
    uVar16 = *(ulong *)(lVar19 + lVar22 * 0x30 + 8);
    uVar18 = *(ulong *)(lVar19 + lVar11 * 0x30 + 8);
    if ((uVar18 < uVar16) ||
       (*(long *)(lVar19 + lVar22 * 0x30 + 0x18) + uVar16 <
        *(long *)(lVar19 + lVar11 * 0x30 + 0x18) + uVar18)) goto LAB_00103990;
  }
  else {
LAB_00103990:
    if ((cVar6 == '\x02') || ((lVar22 == 1 && (cVar6 == '\x03')))) {
      lVar22 = *(long *)(lVar19 + lVar11 * 0x30 + 0x18);
      if (lVar22 != 0) {
        lVar19 = lVar19 + lVar11 * 0x30;
        pvVar9 = (void *)((long)param_1 +
                         *puVar14 * 4 + *(long *)(lVar19 + 8) * (ulong)*(uint *)(param_2 + 0x8c) * 4
                         );
        do {
          memset(pvVar9,0,*(long *)(lVar19 + 0x10) << 2);
          lVar22 = lVar22 + -1;
          pvVar9 = (void *)((long)pvVar9 + (ulong)*(uint *)(param_2 + 0x8c) * 4);
        } while (lVar22 != 0);
      }
    }
    else {
      pvVar7 = pvVar9;
      pvVar8 = param_1;
      if (cVar6 != '\x03' || cVar3 != '\x03') {
        pvVar7 = param_1;
        pvVar8 = pvVar9;
      }
    }
  }
  if (cVar3 == '\x03') {
    memcpy(pvVar8,pvVar7,(ulong)*(uint *)(param_2 + 0x8c) * *(long *)(lVar21 + 8) * 4);
  }
LAB_00103a5c:
  lVar21 = *(long *)(param_2 + 0x38);
  lVar19 = *(long *)(*(long *)(param_2 + 8) + 0x58);
  lVar22 = *(long *)(lVar19 + lVar21 * 0x30 + 0x28);
  if ((lVar22 == 0) && (lVar22 = *(long *)(*(long *)(param_2 + 8) + 0x18), lVar22 == 0)) {
    lVar22 = FUN_00106780();
  }
  pbVar20 = *(byte **)(param_2 + 0x58);
  if (pbVar20 != (byte *)0x0) {
    plVar12 = (long *)(lVar19 + lVar21 * 0x30);
    lVar19 = plVar12[2];
    lVar21 = plVar12[3];
    iVar2 = *(int *)(*(long *)(param_2 + 0x40) + *(long *)(param_2 + 0x38) * 0x18 + 0x10);
    __s = (undefined2 *)
          ((long)param_1 + *plVar12 * 4 + plVar12[1] * (ulong)*(uint *)(param_2 + 0x8c) * 4);
    lVar11 = (ulong)*(uint *)(param_2 + 0x8c) - lVar19;
    if (*(char *)(param_2 + 0x98) == '\0') {
      if (iVar2 == -1) {
        if (lVar21 != 0) {
          do {
            memset(__s,0xff,lVar19 << 2);
            pbVar13 = pbVar20;
            puVar15 = __s;
            lVar17 = lVar19;
            if (lVar19 != 0) {
              do {
                lVar17 = lVar17 + -1;
                puVar1 = (undefined2 *)(*(long *)(lVar22 + 0x10) + (ulong)*pbVar13 * 3);
                uVar5 = *puVar1;
                *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(puVar1 + 1);
                *puVar15 = uVar5;
                pbVar13 = pbVar13 + 1;
                puVar15 = puVar15 + 2;
              } while (lVar17 != 0);
              pbVar20 = pbVar20 + lVar19;
              __s = __s + lVar19 * 2;
            }
            lVar21 = lVar21 + -1;
            __s = __s + lVar11 * 2;
          } while (lVar21 != 0);
        }
      }
      else {
        for (; lVar21 != 0; lVar21 = lVar21 + -1) {
          pbVar13 = pbVar20;
          puVar15 = __s;
          lVar17 = lVar19;
          if (lVar19 != 0) {
            do {
              if ((ulong)*pbVar13 != (long)iVar2) {
                puVar1 = (undefined2 *)(*(long *)(lVar22 + 0x10) + (ulong)*pbVar13 * 3);
                uVar4 = *(undefined1 *)(puVar1 + 1);
                uVar5 = *puVar1;
                *(undefined1 *)((long)puVar15 + 3) = 0xff;
                *(undefined1 *)(puVar15 + 1) = uVar4;
                *puVar15 = uVar5;
              }
              lVar17 = lVar17 + -1;
              pbVar13 = pbVar13 + 1;
              puVar15 = puVar15 + 2;
            } while (lVar17 != 0);
            pbVar20 = pbVar20 + lVar19;
            __s = __s + lVar19 * 2;
          }
          __s = __s + lVar11 * 2;
        }
      }
    }
    else if (iVar2 == -1) {
      for (; lVar21 != 0; lVar21 = lVar21 + -1) {
        pbVar13 = pbVar20;
        puVar15 = __s;
        lVar17 = lVar19;
        if (lVar19 != 0) {
          do {
            lVar17 = lVar17 + -1;
            puVar1 = (undefined2 *)(*(long *)(lVar22 + 0x10) + (ulong)*pbVar13 * 3);
            uVar5 = *puVar1;
            *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(puVar1 + 1);
            *puVar15 = uVar5;
            pbVar13 = pbVar13 + 1;
            puVar15 = puVar15 + 2;
          } while (lVar17 != 0);
          pbVar20 = pbVar20 + lVar19;
          __s = __s + lVar19 * 2;
        }
        __s = __s + lVar11 * 2;
      }
    }
    else {
      for (; lVar21 != 0; lVar21 = lVar21 + -1) {
        pbVar13 = pbVar20;
        puVar15 = __s;
        lVar17 = lVar19;
        if (lVar19 != 0) {
          do {
            if ((ulong)*pbVar13 != (long)iVar2) {
              puVar1 = (undefined2 *)(*(long *)(lVar22 + 0x10) + (ulong)*pbVar13 * 3);
              uVar5 = *puVar1;
              *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(puVar1 + 1);
              *puVar15 = uVar5;
            }
            lVar17 = lVar17 + -1;
            pbVar13 = pbVar13 + 1;
            puVar15 = puVar15 + 2;
          } while (lVar17 != 0);
          pbVar20 = pbVar20 + lVar19;
          __s = __s + lVar19 * 2;
        }
        __s = __s + lVar11 * 2;
      }
    }
  }
  return;
}


