// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00151a58; body: [[00151a58, 00151f1f]]

undefined8 * FUN_00151a58(long *param_1,ulong param_2)

{
  long *__src;
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
  long *plVar12;
  void *pvVar13;
  long lVar14;
  undefined8 *puVar15;
  ushort uVar16;
  long lVar17;
  char *pcVar18;
  long lVar19;
  char *pcVar20;
  long lVar21;
  size_t sVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  
  pcVar18 = (char *)*param_1;
  pcVar20 = (char *)param_1[1];
  if ((pcVar18 == pcVar20) || (*pcVar18 != 'I')) {
    return (undefined8 *)0x0;
  }
  pcVar18 = pcVar18 + 1;
  *param_1 = (long)pcVar18;
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
      }
      param_1[0x54] = (long)plVar10;
      param_1[0x55] = (long)plVar10;
    }
    param_1[0x54] = (long)(plVar10 + 1);
    *plVar10 = (long)(param_1 + 0x48);
    pcVar18 = (char *)*param_1;
    pcVar20 = (char *)param_1[1];
    param_1[0x49] = param_1[0x48];
  }
  lVar19 = param_1[2];
  lVar2 = param_1[3];
  plVar10 = param_1 + 5;
  __src = param_1 + 0x4b;
LAB_00151b30:
  if ((pcVar18 == pcVar20) || (*pcVar18 != 'E')) {
    puVar11 = (undefined8 *)FUN_0014fdd4(param_1);
    if ((param_2 & 1) == 0) {
      if (puVar11 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      plVar23 = (long *)param_1[3];
      if (plVar23 == (long *)param_1[4]) {
        plVar12 = (long *)param_1[2];
        sVar22 = (long)plVar23 - (long)plVar12;
        if (plVar12 == plVar10) {
          pvVar13 = malloc(sVar22 * 2);
          if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar23 != plVar10) {
            memcpy(pvVar13,plVar10,sVar22);
          }
          param_1[2] = (long)pvVar13;
        }
        else {
          pvVar13 = realloc(plVar12,sVar22 * 2);
          param_1[2] = (long)pvVar13;
          if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar23 = (long *)((long)pvVar13 + sVar22);
        param_1[3] = (long)plVar23;
        param_1[4] = (long)((long)pvVar13 + ((long)sVar22 >> 2) * 8);
      }
      param_1[3] = (long)(plVar23 + 1);
      goto LAB_00151dec;
    }
    if (puVar11 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    plVar23 = (long *)param_1[3];
    if (plVar23 == (long *)param_1[4]) {
      plVar12 = (long *)param_1[2];
      sVar22 = (long)plVar23 - (long)plVar12;
      if (plVar12 == plVar10) {
        pvVar13 = malloc(sVar22 * 2);
        if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar23 != plVar10) {
          memcpy(pvVar13,plVar10,sVar22);
        }
        param_1[2] = (long)pvVar13;
      }
      else {
        pvVar13 = realloc(plVar12,sVar22 * 2);
        param_1[2] = (long)pvVar13;
        if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      plVar23 = (long *)((long)pvVar13 + sVar22);
      param_1[3] = (long)plVar23;
      param_1[4] = (long)((long)pvVar13 + ((long)sVar22 >> 2) * 8);
    }
    cVar3 = *(char *)(puVar11 + 1);
    param_1[3] = (long)(plVar23 + 1);
    *plVar23 = (long)puVar11;
    if (cVar3 != ')') {
      if (cVar3 == '\"') {
        puVar11 = (undefined8 *)puVar11[3];
      }
      goto LAB_00151d28;
    }
    pvVar13 = (void *)param_1[0x266];
    plVar23 = (long *)puVar11[2];
    lVar14 = puVar11[3];
    lVar17 = *(long *)((long)pvVar13 + 8);
    puVar15 = pvVar13;
    if (lVar17 - 0xfd0U < 0xfffffffffffff010) {
      puVar15 = malloc(0x1000);
      if (puVar15 == (void *)0x0) goto LAB_00151f0c;
      lVar17 = 0;
      *puVar15 = pvVar13;
      puVar15[1] = 0;
      param_1[0x266] = (long)puVar15;
    }
    *(long *)((long)puVar15 + 8) = lVar17 + 0x20;
    lVar21 = lVar14 << 3;
    puVar11 = (undefined8 *)((long)puVar15 + lVar17 + 0x10);
    *puVar11 = &PTR_FUN_00172f08;
    *(undefined1 *)((long)puVar15 + lVar17 + 0x18) = 0x28;
    uVar1 = *(ushort *)((long)puVar15 + lVar17 + 0x19) & 0xf000;
    *(long **)((long)puVar15 + lVar17 + 0x20) = plVar23;
    *(long *)((long)puVar15 + lVar17 + 0x28) = lVar14;
    uVar16 = uVar1 | 0xa80;
    *(ushort *)((long)puVar15 + lVar17 + 0x19) = uVar16;
    plVar12 = plVar23;
    lVar5 = lVar21;
    lVar8 = lVar14;
    while (plVar7 = plVar23, lVar6 = lVar21, lVar9 = lVar14, lVar8 != 0) {
      if ((*(ushort *)(*plVar12 + 9) & 0x300) != 0x100) goto joined_r0x00151cc0;
      plVar12 = plVar12 + 1;
      lVar5 = lVar5 + -8;
      lVar8 = lVar5;
    }
    uVar16 = uVar1 | 0x980;
    *(ushort *)((long)puVar15 + lVar17 + 0x19) = uVar16;
joined_r0x00151cc0:
    do {
      if (lVar9 == 0) goto LAB_00151cec;
      if ((*(ushort *)(*plVar7 + 9) & 0xc00) != 0x400) goto joined_r0x00151cf8;
      lVar6 = lVar6 + -8;
      plVar7 = plVar7 + 1;
      lVar9 = lVar6;
    } while( true );
  }
  lVar14 = 0;
  goto LAB_00151e74;
LAB_00151cec:
  uVar16 = uVar16 & 0xf3ff | 0x400;
  *(ushort *)((long)puVar15 + lVar17 + 0x19) = uVar16;
joined_r0x00151cf8:
  do {
    if (lVar14 == 0) break;
    if ((*(ushort *)(*plVar23 + 9) & 0xc0) != 0x40) goto LAB_00151d28;
    lVar21 = lVar21 + -8;
    plVar23 = plVar23 + 1;
    lVar14 = lVar21;
  } while( true );
  *(ushort *)((long)puVar15 + lVar17 + 0x19) = uVar16 & 0xff7f | 0x40;
LAB_00151d28:
  plVar23 = (long *)param_1[0x49];
  if (plVar23 == (long *)param_1[0x4a]) {
    plVar12 = (long *)param_1[0x48];
    sVar22 = (long)plVar23 - (long)plVar12;
    if (plVar12 == __src) {
      pvVar13 = malloc(sVar22 * 2);
      if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar23 != __src) {
        memcpy(pvVar13,__src,sVar22);
      }
      param_1[0x48] = (long)pvVar13;
    }
    else {
      pvVar13 = realloc(plVar12,sVar22 * 2);
      param_1[0x48] = (long)pvVar13;
      if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    plVar23 = (long *)((long)pvVar13 + sVar22);
    param_1[0x49] = (long)plVar23;
    param_1[0x4a] = (long)((long)pvVar13 + ((long)sVar22 >> 2) * 8);
  }
  param_1[0x49] = (long)(plVar23 + 1);
LAB_00151dec:
  *plVar23 = (long)puVar11;
  pcVar18 = (char *)*param_1;
  pcVar20 = (char *)param_1[1];
  if ((pcVar18 != pcVar20) && (*pcVar18 == 'Q')) {
    uVar4 = *(undefined1 *)((long)param_1 + 0x30a);
    *param_1 = (long)(pcVar18 + 1);
    *(undefined1 *)((long)param_1 + 0x30a) = 1;
    lVar14 = FUN_00153210(param_1);
    *(undefined1 *)((long)param_1 + 0x30a) = uVar4;
    if (lVar14 == 0) {
      return (undefined8 *)0x0;
    }
    pcVar18 = (char *)*param_1;
    if (pcVar18 == (char *)param_1[1]) {
      return (undefined8 *)0x0;
    }
    if (*pcVar18 != 'E') {
      return (undefined8 *)0x0;
    }
LAB_00151e74:
    *param_1 = (long)(pcVar18 + 1);
    auVar24 = FUN_00150274(param_1,lVar2 - lVar19 >> 3);
    pvVar13 = (void *)param_1[0x266];
    lVar19 = *(long *)((long)pvVar13 + 8);
    puVar11 = pvVar13;
    if (lVar19 - 0xfc0U < 0xfffffffffffff010) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (void *)0x0) {
LAB_00151f0c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar19 = 0;
      *puVar11 = pvVar13;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    *(long *)((long)puVar11 + 8) = lVar19 + 0x30;
    puVar15 = (undefined8 *)((long)puVar11 + lVar19 + 0x10);
    *puVar15 = &PTR_FUN_00172f78;
    *(undefined1 *)((long)puVar11 + lVar19 + 0x18) = 0x2b;
    *(undefined1 (*) [16])((long)puVar11 + lVar19 + 0x20) = auVar24;
    *(long *)((long)puVar11 + lVar19 + 0x30) = lVar14;
    *(ushort *)((long)puVar11 + lVar19 + 0x19) =
         *(ushort *)((long)puVar11 + lVar19 + 0x19) & 0xf000 | 0x540;
    return puVar15;
  }
  goto LAB_00151b30;
}


