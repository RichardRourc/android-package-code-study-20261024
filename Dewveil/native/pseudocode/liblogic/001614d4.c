// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001614d4; body: [[001614d4, 00161a7b]]

undefined8 * FUN_001614d4(long *param_1)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ushort uVar10;
  short *psVar11;
  long lVar12;
  undefined1 uVar13;
  short *psVar14;
  short *psVar15;
  long *plVar16;
  size_t sVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined1 auVar20 [16];
  
  psVar14 = (short *)*param_1;
  psVar11 = (short *)param_1[1];
  if ((psVar14 == psVar11) || ((char)*psVar14 != 'r')) {
    uVar18 = 0;
  }
  else {
    psVar14 = (short *)((long)psVar14 + 1);
    uVar18 = 4;
    *param_1 = (long)psVar14;
  }
  psVar15 = psVar11;
  if (psVar14 != psVar11) {
    if ((char)*psVar14 == 'V') {
      psVar14 = (short *)((long)psVar14 + 1);
      uVar18 = uVar18 | 2;
      *param_1 = (long)psVar14;
    }
    if ((psVar14 != psVar11) && (psVar15 = psVar14, (char)*psVar14 == 'K')) {
      uVar18 = uVar18 | 1;
      *param_1 = (long)psVar14 + 1;
      psVar15 = (short *)((long)psVar14 + 1);
    }
  }
  if ((ulong)((long)psVar11 - (long)psVar15) < 2) {
LAB_00161584:
    puVar19 = (undefined8 *)0x0;
  }
  else {
    if (*psVar15 == 0x6f44) {
      pvVar7 = (void *)param_1[0x266];
      *param_1 = (long)(psVar15 + 1);
      lVar4 = *(long *)((long)pvVar7 + 8);
      puVar8 = pvVar7;
      if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) {
LAB_00161a78:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar4 = 0;
        *puVar8 = pvVar7;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar4 + 0x20;
      puVar19 = (undefined8 *)((long)puVar8 + lVar4 + 0x10);
      *puVar19 = &PTR_FUN_001710e8;
      *(undefined1 *)((long)puVar8 + lVar4 + 0x18) = 8;
      *(ushort *)((long)puVar8 + lVar4 + 0x19) =
           *(ushort *)((long)puVar8 + lVar4 + 0x19) & 0xf000 | 0x540;
      *(char **)((long)puVar8 + lVar4 + 0x20) = "noexcept";
      *(undefined8 *)((long)puVar8 + lVar4 + 0x28) = 8;
      goto LAB_00161814;
    }
    if (*psVar15 == 0x4f44) {
      *param_1 = (long)(psVar15 + 1);
      lVar4 = FUN_00153210(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar2 = (char *)*param_1;
      if (pcVar2 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      if (*pcVar2 != 'E') {
        return (undefined8 *)0x0;
      }
      pvVar7 = (void *)param_1[0x266];
      *param_1 = (long)(pcVar2 + 1);
      lVar12 = *(long *)((long)pvVar7 + 8);
      puVar8 = pvVar7;
      if (lVar12 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) goto LAB_00161a78;
        lVar12 = 0;
        *puVar8 = pvVar7;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar12 + 0x20;
      puVar19 = (undefined8 *)((long)puVar8 + lVar12 + 0x10);
      *puVar19 = &PTR_FUN_001732f8;
      uVar10 = *(ushort *)((long)puVar8 + lVar12 + 0x19);
      uVar13 = 0x11;
      *(long *)((long)puVar8 + lVar12 + 0x20) = lVar4;
    }
    else {
      if (*psVar15 != 0x7744) goto LAB_00161584;
      lVar4 = param_1[2];
      lVar12 = param_1[3];
      psVar15 = psVar15 + 1;
      plVar1 = param_1 + 5;
      *param_1 = (long)psVar15;
      while ((psVar15 == psVar11 || ((char)*psVar15 != 'E'))) {
        lVar3 = FUN_0014e160(param_1);
        if (lVar3 == 0) {
          return (undefined8 *)0x0;
        }
        plVar16 = (long *)param_1[3];
        if (plVar16 == (long *)param_1[4]) {
          plVar6 = (long *)param_1[2];
          sVar17 = (long)plVar16 - (long)plVar6;
          if (plVar6 == plVar1) {
            pvVar7 = malloc(sVar17 * 2);
            if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar16 != plVar1) {
              memcpy(pvVar7,plVar1,sVar17);
            }
            param_1[2] = (long)pvVar7;
          }
          else {
            pvVar7 = realloc(plVar6,sVar17 * 2);
            param_1[2] = (long)pvVar7;
            if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar16 = (long *)((long)pvVar7 + sVar17);
          param_1[4] = (long)((long)pvVar7 + ((long)sVar17 >> 2) * 8);
        }
        param_1[3] = (long)(plVar16 + 1);
        *plVar16 = lVar3;
        psVar11 = (short *)param_1[1];
        psVar15 = (short *)*param_1;
      }
      *param_1 = (long)((long)psVar15 + 1);
      auVar20 = FUN_00150274(param_1,lVar12 - lVar4 >> 3);
      pvVar7 = (void *)param_1[0x266];
      lVar4 = *(long *)((long)pvVar7 + 8);
      puVar8 = pvVar7;
      if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) goto LAB_00161a78;
        lVar4 = 0;
        *puVar8 = pvVar7;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar4 + 0x20;
      puVar19 = (undefined8 *)((long)puVar8 + lVar4 + 0x10);
      *puVar19 = &PTR_FUN_00173368;
      uVar10 = *(ushort *)((long)puVar8 + lVar4 + 0x19);
      uVar13 = 0x12;
      *(undefined1 (*) [16])((long)puVar8 + lVar4 + 0x20) = auVar20;
    }
    *(undefined1 *)(puVar19 + 1) = uVar13;
    *(ushort *)((long)puVar19 + 9) = uVar10 & 0xf000 | 0x540;
  }
LAB_00161814:
  psVar14 = (short *)*param_1;
  psVar11 = (short *)param_1[1];
  if ((1 < (ulong)((long)psVar11 - (long)psVar14)) && (*psVar14 == 0x7844)) {
    psVar14 = psVar14 + 1;
    *param_1 = (long)psVar14;
  }
  if ((psVar14 == psVar11) || ((char)*psVar14 != 'F')) {
    return (undefined8 *)0x0;
  }
  psVar15 = (short *)((long)psVar14 + 1);
  *param_1 = (long)psVar15;
  if ((psVar15 != psVar11) && (*(char *)psVar15 == 'Y')) {
    *param_1 = (long)(psVar14 + 1);
  }
  lVar4 = FUN_0014e160(param_1);
  if (lVar4 == 0) {
    return (undefined8 *)0x0;
  }
  lVar12 = param_1[2];
  lVar3 = param_1[3];
  plVar1 = param_1 + 5;
  do {
    while( true ) {
      psVar14 = (short *)*param_1;
      if (psVar14 != (short *)param_1[1]) break;
LAB_001618f8:
      if (1 < (ulong)(param_1[1] - (long)psVar14)) {
        if (*psVar14 == 0x4552) {
          uVar13 = 1;
          lVar5 = 2;
          goto LAB_001619d4;
        }
        if (*psVar14 == 0x454f) {
          lVar5 = 2;
          uVar13 = 2;
          goto LAB_001619d4;
        }
      }
      lVar5 = FUN_0014e160(param_1);
      if (lVar5 == 0) {
        return (undefined8 *)0x0;
      }
      plVar16 = (long *)param_1[3];
      if (plVar16 == (long *)param_1[4]) {
        plVar6 = (long *)param_1[2];
        sVar17 = (long)plVar16 - (long)plVar6;
        if (plVar6 == plVar1) {
          pvVar7 = malloc(sVar17 * 2);
          if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar16 != plVar1) {
            memcpy(pvVar7,plVar1,sVar17);
          }
          param_1[2] = (long)pvVar7;
        }
        else {
          pvVar7 = realloc(plVar6,sVar17 * 2);
          param_1[2] = (long)pvVar7;
          if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar16 = (long *)((long)pvVar7 + sVar17);
        param_1[4] = (long)((long)pvVar7 + ((long)sVar17 >> 2) * 8);
      }
      param_1[3] = (long)(plVar16 + 1);
      *plVar16 = lVar5;
    }
    if ((char)*psVar14 == 'E') break;
    if ((char)*psVar14 != 'v') goto LAB_001618f8;
    *param_1 = (long)((long)psVar14 + 1);
  } while( true );
  uVar13 = 0;
  lVar5 = 1;
LAB_001619d4:
  *param_1 = (long)((long)psVar14 + lVar5);
  auVar20 = FUN_00150274(param_1,lVar3 - lVar12 >> 3);
  pvVar7 = (void *)param_1[0x266];
  lVar12 = *(long *)((long)pvVar7 + 8);
  puVar8 = pvVar7;
  if (lVar12 - 0xfb0U < 0xfffffffffffff010) {
    puVar8 = malloc(0x1000);
    if (puVar8 == (void *)0x0) goto LAB_00161a78;
    lVar12 = 0;
    *puVar8 = pvVar7;
    puVar8[1] = 0;
    param_1[0x266] = (long)puVar8;
  }
  *(long *)((long)puVar8 + 8) = lVar12 + 0x40;
  puVar9 = (undefined8 *)((long)puVar8 + lVar12 + 0x10);
  *puVar9 = &PTR_FUN_001733d8;
  *(undefined1 *)((long)puVar8 + lVar12 + 0x18) = 0x10;
  *(long *)((long)puVar8 + lVar12 + 0x20) = lVar4;
  *(undefined1 (*) [16])((long)puVar8 + lVar12 + 0x28) = auVar20;
  *(uint *)((long)puVar8 + lVar12 + 0x38) = uVar18;
  *(ushort *)((long)puVar8 + lVar12 + 0x19) =
       *(ushort *)((long)puVar8 + lVar12 + 0x19) & 0xf000 | 0x100;
  *(undefined1 *)((long)puVar8 + lVar12 + 0x3c) = uVar13;
  *(undefined8 **)((long)puVar8 + lVar12 + 0x40) = puVar19;
  return puVar9;
}


