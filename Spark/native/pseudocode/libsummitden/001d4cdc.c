// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d4cdc; body: [[001d4cdc, 001d519f]]

undefined8 * FUN_001d4cdc(long *param_1,ulong param_2)

{
  ushort uVar1;
  long lVar2;
  char cVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  void *pvVar12;
  long lVar13;
  undefined8 *puVar14;
  ushort uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  char *pcVar19;
  char *pcVar20;
  size_t sVar21;
  long *plVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  
  pcVar19 = (char *)*param_1;
  pcVar20 = (char *)param_1[1];
  if ((pcVar19 == pcVar20) || (*pcVar19 != 'I')) {
    return (undefined8 *)0x0;
  }
  pcVar19 = pcVar19 + 1;
  *param_1 = (long)pcVar19;
  if ((param_2 & 1) != 0) {
    plVar10 = (long *)param_1[0x53];
    param_1[0x54] = (long)plVar10;
    if (plVar10 == (long *)param_1[0x55]) {
      if (plVar10 == param_1 + 0x56) {
        plVar10 = malloc(0);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        param_1[0x53] = (long)plVar10;
      }
      else {
        plVar10 = realloc(plVar10,0);
        param_1[0x53] = (long)plVar10;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pcVar19 = (char *)*param_1;
        pcVar20 = (char *)param_1[1];
      }
      param_1[0x55] = (long)plVar10;
    }
    lVar17 = param_1[0x48];
    *plVar10 = (long)(param_1 + 0x48);
    param_1[0x54] = (long)(plVar10 + 1);
    param_1[0x49] = lVar17;
  }
  lVar17 = param_1[2];
  lVar2 = param_1[3];
  plVar10 = param_1 + 5;
LAB_001d4dac:
  if ((pcVar19 == pcVar20) || (*pcVar19 != 'E')) {
    puVar11 = (undefined8 *)FUN_001d3028(param_1);
    if ((param_2 & 1) == 0) {
      if (puVar11 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      plVar23 = (long *)param_1[3];
      if (plVar23 == (long *)param_1[4]) {
        plVar22 = (long *)param_1[2];
        sVar21 = (long)plVar23 - (long)plVar22;
        if (plVar22 == plVar10) {
          pvVar12 = malloc(sVar21 * 2);
          if (pvVar12 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar23 != plVar10) {
            memmove(pvVar12,plVar22,sVar21);
          }
          param_1[2] = (long)pvVar12;
        }
        else {
          pvVar12 = realloc(plVar22,sVar21 * 2);
          param_1[2] = (long)pvVar12;
          if (pvVar12 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar23 = (long *)((long)pvVar12 + sVar21);
        param_1[4] = (long)((long)pvVar12 + ((long)sVar21 >> 2) * 8);
      }
      *plVar23 = (long)puVar11;
      param_1[3] = (long)(plVar23 + 1);
      goto LAB_001d506c;
    }
    if (puVar11 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    plVar23 = (long *)param_1[3];
    if (plVar23 == (long *)param_1[4]) {
      plVar22 = (long *)param_1[2];
      sVar21 = (long)plVar23 - (long)plVar22;
      if (plVar22 == plVar10) {
        pvVar12 = malloc(sVar21 * 2);
        if (pvVar12 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar23 != plVar10) {
          memmove(pvVar12,plVar22,sVar21);
        }
        param_1[2] = (long)pvVar12;
      }
      else {
        pvVar12 = realloc(plVar22,sVar21 * 2);
        param_1[2] = (long)pvVar12;
        if (pvVar12 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      plVar23 = (long *)((long)pvVar12 + sVar21);
      param_1[4] = (long)((long)pvVar12 + ((long)sVar21 >> 2) * 8);
    }
    cVar3 = *(char *)(puVar11 + 1);
    *plVar23 = (long)puVar11;
    param_1[3] = (long)(plVar23 + 1);
    if (cVar3 != ')') {
      if (cVar3 == '\"') {
        puVar11 = (undefined8 *)puVar11[3];
      }
      goto LAB_001d4fa8;
    }
    pvVar12 = (void *)param_1[0x266];
    plVar23 = (long *)puVar11[2];
    lVar13 = puVar11[3];
    lVar16 = *(long *)((long)pvVar12 + 8);
    puVar14 = pvVar12;
    if (lVar16 - 0xfd0U < 0xfffffffffffff010) {
      puVar14 = malloc(0x1000);
      if (puVar14 == (void *)0x0) goto LAB_001d5188;
      lVar16 = 0;
      *puVar14 = pvVar12;
      puVar14[1] = 0;
      param_1[0x266] = (long)puVar14;
    }
    *(long *)((long)puVar14 + 8) = lVar16 + 0x20;
    lVar18 = lVar13 << 3;
    puVar11 = (undefined8 *)((long)puVar14 + lVar16 + 0x10);
    *puVar11 = &PTR_FUN_001f5c20;
    *(undefined1 *)((long)puVar14 + lVar16 + 0x18) = 0x28;
    uVar1 = *(ushort *)((long)puVar14 + lVar16 + 0x19) & 0xf000;
    *(long **)((long)puVar14 + lVar16 + 0x20) = plVar23;
    *(long *)((long)puVar14 + lVar16 + 0x28) = lVar13;
    uVar15 = uVar1 | 0xa80;
    *(ushort *)((long)puVar14 + lVar16 + 0x19) = uVar15;
    plVar22 = plVar23;
    lVar5 = lVar18;
    lVar8 = lVar13;
    while (plVar7 = plVar23, lVar6 = lVar18, lVar9 = lVar13, lVar8 != 0) {
      if ((*(ushort *)(*plVar22 + 9) & 0x300) != 0x100) goto joined_r0x001d4f40;
      plVar22 = plVar22 + 1;
      lVar5 = lVar5 + -8;
      lVar8 = lVar5;
    }
    uVar15 = uVar1 | 0x980;
    *(ushort *)((long)puVar14 + lVar16 + 0x19) = uVar15;
joined_r0x001d4f40:
    do {
      if (lVar9 == 0) goto LAB_001d4f6c;
      if ((*(ushort *)(*plVar7 + 9) & 0xc00) != 0x400) goto joined_r0x001d4f78;
      lVar6 = lVar6 + -8;
      plVar7 = plVar7 + 1;
      lVar9 = lVar6;
    } while( true );
  }
  lVar13 = 0;
  goto LAB_001d50f0;
LAB_001d4f6c:
  uVar15 = uVar15 & 0xf3ff | 0x400;
  *(ushort *)((long)puVar14 + lVar16 + 0x19) = uVar15;
joined_r0x001d4f78:
  do {
    if (lVar13 == 0) break;
    if ((*(ushort *)(*plVar23 + 9) & 0xc0) != 0x40) goto LAB_001d4fa8;
    lVar18 = lVar18 + -8;
    plVar23 = plVar23 + 1;
    lVar13 = lVar18;
  } while( true );
  *(ushort *)((long)puVar14 + lVar16 + 0x19) = uVar15 & 0xff7f | 0x40;
LAB_001d4fa8:
  plVar23 = (long *)param_1[0x49];
  if (plVar23 == (long *)param_1[0x4a]) {
    plVar22 = (long *)param_1[0x48];
    sVar21 = (long)plVar23 - (long)plVar22;
    if (plVar22 == param_1 + 0x4b) {
      pvVar12 = malloc(sVar21 * 2);
      if (pvVar12 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar23 != param_1 + 0x4b) {
        memmove(pvVar12,plVar22,sVar21);
      }
      param_1[0x48] = (long)pvVar12;
    }
    else {
      pvVar12 = realloc(plVar22,sVar21 * 2);
      param_1[0x48] = (long)pvVar12;
      if (pvVar12 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    plVar23 = (long *)((long)pvVar12 + sVar21);
    param_1[0x4a] = (long)((long)pvVar12 + ((long)sVar21 >> 2) * 8);
  }
  *plVar23 = (long)puVar11;
  param_1[0x49] = (long)(plVar23 + 1);
LAB_001d506c:
  pcVar19 = (char *)*param_1;
  pcVar20 = (char *)param_1[1];
  if ((pcVar19 != pcVar20) && (*pcVar19 == 'Q')) {
    uVar4 = *(undefined1 *)((long)param_1 + 0x30a);
    *param_1 = (long)(pcVar19 + 1);
    *(undefined1 *)((long)param_1 + 0x30a) = 1;
    lVar13 = FUN_001d642c(param_1);
    *(undefined1 *)((long)param_1 + 0x30a) = uVar4;
    if (lVar13 == 0) {
      return (undefined8 *)0x0;
    }
    pcVar19 = (char *)*param_1;
    if (pcVar19 == (char *)param_1[1]) {
      return (undefined8 *)0x0;
    }
    if (*pcVar19 != 'E') {
      return (undefined8 *)0x0;
    }
LAB_001d50f0:
    *param_1 = (long)(pcVar19 + 1);
    auVar24 = FUN_001d34d4(param_1,lVar2 - lVar17 >> 3);
    pvVar12 = (void *)param_1[0x266];
    lVar17 = *(long *)((long)pvVar12 + 8);
    puVar11 = pvVar12;
    if (lVar17 - 0xfc0U < 0xfffffffffffff010) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (void *)0x0) {
LAB_001d5188:
                    /* WARNING: Subroutine does not return */
        FUN_001cee20();
      }
      lVar17 = 0;
      *puVar11 = pvVar12;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    *(long *)((long)puVar11 + 8) = lVar17 + 0x30;
    puVar14 = (undefined8 *)((long)puVar11 + lVar17 + 0x10);
    *puVar14 = &PTR_FUN_001f5c98;
    *(undefined1 *)((long)puVar11 + lVar17 + 0x18) = 0x2b;
    *(undefined1 (*) [16])((long)puVar11 + lVar17 + 0x20) = auVar24;
    *(long *)((long)puVar11 + lVar17 + 0x30) = lVar13;
    *(ushort *)((long)puVar11 + lVar17 + 0x19) =
         *(ushort *)((long)puVar11 + lVar17 + 0x19) & 0xf000 | 0x540;
    return puVar14;
  }
  goto LAB_001d4dac;
}


