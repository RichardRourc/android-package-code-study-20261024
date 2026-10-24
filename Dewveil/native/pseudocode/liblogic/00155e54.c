// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00155e54; body: [[00155e54, 00156323]]

undefined8 * FUN_00155e54(long *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  short *psVar7;
  char *pcVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined1 uVar12;
  short *psVar13;
  void *pvVar14;
  long *plVar15;
  undefined8 *puVar16;
  size_t sVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  psVar7 = (short *)*param_1;
  psVar13 = (short *)param_1[1];
  if ((ulong)((long)psVar13 - (long)psVar7) < 2) {
    return (undefined8 *)0x0;
  }
  if (*psVar7 == 0x5172) {
    lVar11 = param_1[2];
    lVar2 = param_1[3];
    psVar7 = psVar7 + 1;
    plVar1 = param_1 + 5;
    *param_1 = (long)psVar7;
    while ((psVar7 == psVar13 || ((char)*psVar7 != '_'))) {
      lVar4 = FUN_0014e160(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      plVar15 = (long *)param_1[3];
      if (plVar15 == (long *)param_1[4]) {
        plVar6 = (long *)param_1[2];
        sVar17 = (long)plVar15 - (long)plVar6;
        if (plVar6 == plVar1) {
          pvVar14 = malloc(sVar17 * 2);
          if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar15 != plVar1) {
            memcpy(pvVar14,plVar1,sVar17);
          }
          param_1[2] = (long)pvVar14;
        }
        else {
          pvVar14 = realloc(plVar6,sVar17 * 2);
          param_1[2] = (long)pvVar14;
          if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar15 = (long *)((long)pvVar14 + sVar17);
        param_1[4] = (long)((long)pvVar14 + ((long)sVar17 >> 2) * 8);
      }
      param_1[3] = (long)(plVar15 + 1);
      *plVar15 = lVar4;
      psVar13 = (short *)param_1[1];
      psVar7 = (short *)*param_1;
    }
    *param_1 = (long)((long)psVar7 + 1);
    auVar19 = FUN_00150274(param_1,lVar2 - lVar11 >> 3);
    psVar7 = (short *)*param_1;
    if (psVar7 == (short *)param_1[1]) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (*psVar7 != 0x7172) {
      return (undefined8 *)0x0;
    }
    auVar19 = ZEXT816(0);
    psVar7 = psVar7 + 1;
    *param_1 = (long)psVar7;
    if (psVar7 == psVar13) {
      return (undefined8 *)0x0;
    }
  }
  lVar11 = param_1[2];
  lVar2 = param_1[3];
  plVar1 = param_1 + 5;
  do {
    if ((char)*psVar7 == 'X') {
      *param_1 = (long)((long)psVar7 + 1);
      lVar4 = FUN_00153210(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar8 = (char *)*param_1;
      pcVar3 = (char *)param_1[1];
      if ((pcVar8 == pcVar3) || (*pcVar8 != 'N')) {
        uVar12 = 0;
        if (pcVar8 != pcVar3) goto LAB_001560d4;
LAB_00156100:
        lVar18 = 0;
      }
      else {
        pcVar8 = pcVar8 + 1;
        uVar12 = 1;
        *param_1 = (long)pcVar8;
        if (pcVar8 == pcVar3) goto LAB_00156100;
LAB_001560d4:
        if (*pcVar8 != 'R') goto LAB_00156100;
        *param_1 = (long)(pcVar8 + 1);
        lVar18 = FUN_0014f6a0(param_1,0);
        if (lVar18 == 0) {
          return (undefined8 *)0x0;
        }
      }
      pvVar14 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar14 + 8);
      puVar5 = pvVar14;
      if (lVar9 - 0xfc0U < 0xfffffffffffff010) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) goto LAB_00156314;
        lVar9 = 0;
        *puVar5 = pvVar14;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar9 + 0x30;
      puVar16 = (undefined8 *)((long)puVar5 + lVar9 + 0x10);
      *puVar16 = &PTR_FUN_00172568;
      *(undefined1 *)((long)puVar5 + lVar9 + 0x18) = 0x54;
      *(long *)((long)puVar5 + lVar9 + 0x20) = lVar4;
      *(undefined1 *)((long)puVar5 + lVar9 + 0x28) = uVar12;
      *(ushort *)((long)puVar5 + lVar9 + 0x19) =
           *(ushort *)((long)puVar5 + lVar9 + 0x19) & 0xf000 | 0x540;
      *(long *)((long)puVar5 + lVar9 + 0x30) = lVar18;
    }
    else {
      if ((char)*psVar7 == 'T') {
        *param_1 = (long)((long)psVar7 + 1);
        lVar4 = FUN_0014e160(param_1);
        if (lVar4 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar14 = (void *)param_1[0x266];
        lVar18 = *(long *)((long)pvVar14 + 8);
        puVar16 = pvVar14;
        if (lVar18 - 0xfd0U < 0xfffffffffffff010) {
          puVar16 = malloc(0x1000);
          if (puVar16 == (void *)0x0) goto LAB_00156314;
          lVar18 = 0;
          *puVar16 = pvVar14;
          puVar16[1] = 0;
          param_1[0x266] = (long)puVar16;
        }
        lVar9 = (long)puVar16 + lVar18;
        ppuVar10 = &PTR_FUN_001725d8;
        *(long *)((long)puVar16 + 8) = lVar18 + 0x20;
        uVar12 = 0x55;
      }
      else {
        if ((char)*psVar7 != 'Q') {
          return (undefined8 *)0x0;
        }
        *param_1 = (long)((long)psVar7 + 1);
        lVar4 = FUN_00153210(param_1);
        if (lVar4 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar14 = (void *)param_1[0x266];
        lVar18 = *(long *)((long)pvVar14 + 8);
        puVar16 = pvVar14;
        if (lVar18 - 0xfd0U < 0xfffffffffffff010) {
          puVar16 = malloc(0x1000);
          if (puVar16 == (void *)0x0) goto LAB_00156314;
          lVar18 = 0;
          *puVar16 = pvVar14;
          puVar16[1] = 0;
          param_1[0x266] = (long)puVar16;
        }
        lVar9 = (long)puVar16 + lVar18;
        ppuVar10 = &PTR_FUN_00172648;
        *(long *)((long)puVar16 + 8) = lVar18 + 0x20;
        uVar12 = 0x56;
      }
      puVar16 = (undefined8 *)(lVar9 + 0x10);
      *puVar16 = ppuVar10;
      *(undefined1 *)(lVar9 + 0x18) = uVar12;
      *(ushort *)(lVar9 + 0x19) = *(ushort *)(lVar9 + 0x19) & 0xf000 | 0x540;
      *(long *)(lVar9 + 0x20) = lVar4;
    }
    plVar15 = (long *)param_1[3];
    if (plVar15 == (long *)param_1[4]) {
      plVar6 = (long *)param_1[2];
      sVar17 = (long)plVar15 - (long)plVar6;
      if (plVar6 == plVar1) {
        pvVar14 = malloc(sVar17 * 2);
        if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar15 != plVar1) {
          memcpy(pvVar14,plVar1,sVar17);
        }
        param_1[2] = (long)pvVar14;
      }
      else {
        pvVar14 = realloc(plVar6,sVar17 * 2);
        param_1[2] = (long)pvVar14;
        if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      plVar15 = (long *)((long)pvVar14 + sVar17);
      param_1[4] = (long)((long)pvVar14 + ((long)sVar17 >> 2) * 8);
    }
    param_1[3] = (long)(plVar15 + 1);
    *plVar15 = (long)puVar16;
    psVar7 = (short *)*param_1;
    if ((psVar7 != (short *)param_1[1]) && ((char)*psVar7 == 'E')) {
      *param_1 = (long)((long)psVar7 + 1);
      auVar20 = FUN_00150274(param_1,lVar2 - lVar11 >> 3);
      pvVar14 = (void *)param_1[0x266];
      lVar11 = *(long *)((long)pvVar14 + 8);
      puVar16 = pvVar14;
      if (lVar11 - 0xfc0U < 0xfffffffffffff010) {
        puVar16 = malloc(0x1000);
        if (puVar16 == (void *)0x0) {
LAB_00156314:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar11 = 0;
        *puVar16 = pvVar14;
        puVar16[1] = 0;
        param_1[0x266] = (long)puVar16;
      }
      *(long *)((long)puVar16 + 8) = lVar11 + 0x30;
      puVar5 = (undefined8 *)((long)puVar16 + lVar11 + 0x10);
      *puVar5 = &PTR_FUN_001726b8;
      *(undefined1 *)((long)puVar16 + lVar11 + 0x18) = 0x53;
      *(undefined1 (*) [16])((long)puVar16 + lVar11 + 0x30) = auVar20;
      *(undefined1 (*) [16])((long)puVar16 + lVar11 + 0x20) = auVar19;
      *(ushort *)((long)puVar16 + lVar11 + 0x19) =
           *(ushort *)((long)puVar16 + lVar11 + 0x19) & 0xf000 | 0x540;
      return puVar5;
    }
    if (psVar7 == (short *)param_1[1]) {
      return (undefined8 *)0x0;
    }
  } while( true );
}


