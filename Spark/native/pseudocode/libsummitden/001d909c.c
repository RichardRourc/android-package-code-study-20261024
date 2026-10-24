// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d909c; body: [[001d909c, 001d956b]]

undefined8 * FUN_001d909c(long *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  short *psVar5;
  char *pcVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined1 uVar10;
  short *psVar11;
  undefined8 *puVar12;
  void *pvVar13;
  long *plVar14;
  size_t sVar15;
  long lVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  psVar5 = (short *)*param_1;
  psVar11 = (short *)param_1[1];
  if ((ulong)((long)psVar11 - (long)psVar5) < 2) {
    return (undefined8 *)0x0;
  }
  if (*psVar5 == 0x5172) {
    lVar9 = param_1[2];
    lVar1 = param_1[3];
    psVar5 = psVar5 + 1;
    *param_1 = (long)psVar5;
    while ((psVar5 == psVar11 || ((char)*psVar5 != '_'))) {
      lVar3 = FUN_001d0f90(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      plVar14 = (long *)param_1[3];
      if (plVar14 == (long *)param_1[4]) {
        plVar17 = (long *)param_1[2];
        sVar15 = (long)plVar14 - (long)plVar17;
        if (plVar17 == param_1 + 5) {
          pvVar13 = malloc(sVar15 * 2);
          if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar14 != param_1 + 5) {
            memmove(pvVar13,plVar17,sVar15);
          }
          param_1[2] = (long)pvVar13;
        }
        else {
          pvVar13 = realloc(plVar17,sVar15 * 2);
          param_1[2] = (long)pvVar13;
          if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar14 = (long *)((long)pvVar13 + sVar15);
        param_1[4] = (long)((long)pvVar13 + ((long)sVar15 >> 2) * 8);
      }
      psVar5 = (short *)*param_1;
      psVar11 = (short *)param_1[1];
      *plVar14 = lVar3;
      param_1[3] = (long)(plVar14 + 1);
    }
    *param_1 = (long)((long)psVar5 + 1);
    auVar18 = FUN_001d34d4(param_1,lVar1 - lVar9 >> 3);
    psVar5 = (short *)*param_1;
    if (psVar5 == (short *)param_1[1]) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (*psVar5 != 0x7172) {
      return (undefined8 *)0x0;
    }
    auVar18 = ZEXT816(0);
    psVar5 = psVar5 + 1;
    *param_1 = (long)psVar5;
    if (psVar5 == psVar11) {
      return (undefined8 *)0x0;
    }
  }
  lVar9 = param_1[2];
  lVar1 = param_1[3];
  do {
    if ((char)*psVar5 == 'X') {
      *param_1 = (long)((long)psVar5 + 1);
      lVar3 = FUN_001d642c(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar6 = (char *)*param_1;
      pcVar2 = (char *)param_1[1];
      if ((pcVar6 == pcVar2) || (*pcVar6 != 'N')) {
        uVar10 = 0;
        if (pcVar6 != pcVar2) goto LAB_001d931c;
LAB_001d9348:
        lVar16 = 0;
      }
      else {
        pcVar6 = pcVar6 + 1;
        uVar10 = 1;
        *param_1 = (long)pcVar6;
        if (pcVar6 == pcVar2) goto LAB_001d9348;
LAB_001d931c:
        if (*pcVar6 != 'R') goto LAB_001d9348;
        *param_1 = (long)(pcVar6 + 1);
        lVar16 = FUN_001d2908(param_1,0);
        if (lVar16 == 0) {
          return (undefined8 *)0x0;
        }
      }
      pvVar13 = (void *)param_1[0x266];
      lVar7 = *(long *)((long)pvVar13 + 8);
      puVar4 = pvVar13;
      if (lVar7 - 0xfc0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_001d955c;
        lVar7 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar7 + 0x30;
      puVar12 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
      *puVar12 = &PTR_FUN_001f51d0;
      *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 0x54;
      *(long *)((long)puVar4 + lVar7 + 0x20) = lVar3;
      *(undefined1 *)((long)puVar4 + lVar7 + 0x28) = uVar10;
      *(ushort *)((long)puVar4 + lVar7 + 0x19) =
           *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0x540;
      *(long *)((long)puVar4 + lVar7 + 0x30) = lVar16;
    }
    else {
      if ((char)*psVar5 == 'T') {
        *param_1 = (long)((long)psVar5 + 1);
        lVar3 = FUN_001d0f90(param_1);
        if (lVar3 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar13 = (void *)param_1[0x266];
        lVar16 = *(long *)((long)pvVar13 + 8);
        puVar12 = pvVar13;
        if (lVar16 - 0xfd0U < 0xfffffffffffff010) {
          puVar12 = malloc(0x1000);
          if (puVar12 == (void *)0x0) goto LAB_001d955c;
          lVar16 = 0;
          *puVar12 = pvVar13;
          puVar12[1] = 0;
          param_1[0x266] = (long)puVar12;
        }
        lVar7 = (long)puVar12 + lVar16;
        ppuVar8 = &PTR_FUN_001f5248;
        *(long *)((long)puVar12 + 8) = lVar16 + 0x20;
        uVar10 = 0x55;
      }
      else {
        if ((char)*psVar5 != 'Q') {
          return (undefined8 *)0x0;
        }
        *param_1 = (long)((long)psVar5 + 1);
        lVar3 = FUN_001d642c(param_1);
        if (lVar3 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar13 = (void *)param_1[0x266];
        lVar16 = *(long *)((long)pvVar13 + 8);
        puVar12 = pvVar13;
        if (lVar16 - 0xfd0U < 0xfffffffffffff010) {
          puVar12 = malloc(0x1000);
          if (puVar12 == (void *)0x0) goto LAB_001d955c;
          lVar16 = 0;
          *puVar12 = pvVar13;
          puVar12[1] = 0;
          param_1[0x266] = (long)puVar12;
        }
        lVar7 = (long)puVar12 + lVar16;
        ppuVar8 = &PTR_FUN_001f52c0;
        *(long *)((long)puVar12 + 8) = lVar16 + 0x20;
        uVar10 = 0x56;
      }
      puVar12 = (undefined8 *)(lVar7 + 0x10);
      *puVar12 = ppuVar8;
      *(undefined1 *)(lVar7 + 0x18) = uVar10;
      *(ushort *)(lVar7 + 0x19) = *(ushort *)(lVar7 + 0x19) & 0xf000 | 0x540;
      *(long *)(lVar7 + 0x20) = lVar3;
    }
    plVar14 = (long *)param_1[3];
    if (plVar14 == (long *)param_1[4]) {
      plVar17 = (long *)param_1[2];
      sVar15 = (long)plVar14 - (long)plVar17;
      if (plVar17 == param_1 + 5) {
        pvVar13 = malloc(sVar15 * 2);
        if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar14 != param_1 + 5) {
          memmove(pvVar13,plVar17,sVar15);
        }
        param_1[2] = (long)pvVar13;
      }
      else {
        pvVar13 = realloc(plVar17,sVar15 * 2);
        param_1[2] = (long)pvVar13;
        if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      plVar14 = (long *)((long)pvVar13 + sVar15);
      param_1[4] = (long)((long)pvVar13 + ((long)sVar15 >> 2) * 8);
    }
    psVar5 = (short *)*param_1;
    psVar11 = (short *)param_1[1];
    *plVar14 = (long)puVar12;
    param_1[3] = (long)(plVar14 + 1);
    if ((psVar5 != psVar11) && ((char)*psVar5 == 'E')) {
      *param_1 = (long)((long)psVar5 + 1);
      auVar19 = FUN_001d34d4(param_1,lVar1 - lVar9 >> 3);
      pvVar13 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar13 + 8);
      puVar12 = pvVar13;
      if (lVar9 - 0xfc0U < 0xfffffffffffff010) {
        puVar12 = malloc(0x1000);
        if (puVar12 == (void *)0x0) {
LAB_001d955c:
                    /* WARNING: Subroutine does not return */
          FUN_001cee20();
        }
        lVar9 = 0;
        *puVar12 = pvVar13;
        puVar12[1] = 0;
        param_1[0x266] = (long)puVar12;
      }
      *(long *)((long)puVar12 + 8) = lVar9 + 0x30;
      puVar4 = (undefined8 *)((long)puVar12 + lVar9 + 0x10);
      *puVar4 = &PTR_FUN_001f5338;
      *(undefined1 *)((long)puVar12 + lVar9 + 0x18) = 0x53;
      *(undefined1 (*) [16])((long)puVar12 + lVar9 + 0x30) = auVar19;
      *(undefined1 (*) [16])((long)puVar12 + lVar9 + 0x20) = auVar18;
      *(ushort *)((long)puVar12 + lVar9 + 0x19) =
           *(ushort *)((long)puVar12 + lVar9 + 0x19) & 0xf000 | 0x540;
      return puVar4;
    }
    if (psVar5 == psVar11) {
      return (undefined8 *)0x0;
    }
  } while( true );
}


