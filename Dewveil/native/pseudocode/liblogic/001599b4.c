// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001599b4; body: [[001599b4, 0015a0f7]]

undefined8 * FUN_001599b4(long *param_1,long param_2)

{
  short *psVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  uint __c;
  char cVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  void *pvVar18;
  byte *pbVar19;
  size_t sVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  byte *local_110;
  long lStack_108;
  long local_100;
  undefined1 local_f8 [16];
  long local_e8;
  undefined1 local_e0 [16];
  long *local_d0;
  ulong uStack_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  if (param_2 != 0) {
    param_1[0x54] = param_1[0x53];
  }
  psVar1 = (short *)*param_1;
  pbVar14 = (byte *)param_1[1];
  if ((ulong)((long)pbVar14 - (long)psVar1) < 2) {
    return (undefined8 *)0x0;
  }
  if (*psVar1 == 0x7455) {
    pbVar11 = (byte *)(psVar1 + 1);
    *param_1 = (long)pbVar11;
    if (pbVar14 == pbVar11) {
      return (undefined8 *)0x0;
    }
    if (*pbVar11 - 0x3a < 0xfffffff6) {
      pbVar19 = (byte *)0x0;
      lVar10 = 0;
    }
    else {
      pbVar19 = (byte *)(psVar1 + 1);
      pbVar15 = pbVar11;
      do {
        pbVar16 = pbVar19;
        pbVar17 = pbVar15;
        if (*pbVar15 - 0x3a < 0xfffffff6) break;
        pbVar15 = pbVar15 + 1;
        pbVar19 = pbVar19 + 1;
        *param_1 = (long)pbVar15;
        pbVar16 = pbVar14;
        pbVar17 = pbVar14;
      } while (pbVar15 != pbVar14);
      lVar10 = (long)pbVar16 - (long)pbVar11;
      pbVar19 = pbVar11;
      pbVar11 = pbVar17;
    }
    if (pbVar11 == pbVar14) {
      return (undefined8 *)0x0;
    }
    if (*pbVar11 != 0x5f) {
      return (undefined8 *)0x0;
    }
    pvVar18 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar11 + 1);
    lVar21 = *(long *)((long)pvVar18 + 8);
    puVar3 = pvVar18;
    if (lVar21 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) {
LAB_0015a0f0:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar21 = 0;
      *puVar3 = pvVar18;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar21 + 0x20;
    puVar4 = (undefined8 *)((long)puVar3 + lVar21 + 0x10);
    *puVar4 = &PTR_FUN_00171df8;
    *(byte **)((long)puVar3 + lVar21 + 0x20) = pbVar19;
    *(long *)((long)puVar3 + lVar21 + 0x28) = lVar10;
    *(undefined1 *)((long)puVar3 + lVar21 + 0x18) = 0x33;
    *(ushort *)((long)puVar3 + lVar21 + 0x19) =
         *(ushort *)((long)puVar3 + lVar21 + 0x19) & 0xf000 | 0x540;
    return puVar4;
  }
  if (*psVar1 != 0x6c55) {
    if (*psVar1 != 0x6255) {
      return (undefined8 *)0x0;
    }
    pbVar11 = (byte *)(psVar1 + 1);
    *param_1 = (long)pbVar11;
    if (pbVar14 == pbVar11) {
      return (undefined8 *)0x0;
    }
    if (0xfffffff5 < *pbVar11 - 0x3a) {
      while (0xfffffff5 < *pbVar11 - 0x3a) {
        pbVar11 = pbVar11 + 1;
        *param_1 = (long)pbVar11;
        if (pbVar11 == pbVar14) {
          return (undefined8 *)0x0;
        }
      }
    }
    if (pbVar11 == pbVar14) {
      return (undefined8 *)0x0;
    }
    if (*pbVar11 != 0x5f) {
      return (undefined8 *)0x0;
    }
    pvVar18 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar11 + 1);
    lVar10 = *(long *)((long)pvVar18 + 8);
    puVar3 = pvVar18;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0015a0f0;
      lVar10 = 0;
      *puVar3 = pvVar18;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar4 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar4 = &PTR_FUN_001710e8;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    *(char **)((long)puVar3 + lVar10 + 0x20) = "\'block-literal\'";
    *(undefined8 *)((long)puVar3 + lVar10 + 0x28) = 0xf;
    return puVar4;
  }
  plVar23 = (long *)param_1[0x54];
  plVar22 = (long *)param_1[0x53];
  *param_1 = (long)(psVar1 + 1);
  lVar10 = param_1[0x62];
  sVar20 = (long)plVar23 - (long)plVar22;
  uStack_c8 = (long)sVar20 >> 3;
  local_b0 = auStack_68;
  param_1[0x62] = uStack_c8;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = 0;
  local_d0 = param_1;
  local_c0 = &local_a8;
  puStack_b8 = &local_a8;
  if (plVar23 == (long *)param_1[0x55]) {
    if (plVar22 == param_1 + 0x56) {
      pvVar18 = malloc(sVar20 * 2);
      if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar23 != plVar22) {
        memmove(pvVar18,plVar22,sVar20);
      }
      param_1[0x53] = (long)pvVar18;
    }
    else {
      pvVar18 = realloc(plVar22,sVar20 * 2);
      param_1[0x53] = (long)pvVar18;
      if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    plVar23 = (long *)((long)pvVar18 + sVar20);
    param_1[0x54] = (long)plVar23;
    param_1[0x55] = (long)((long)pvVar18 + ((long)sVar20 >> 2) * 8);
  }
  param_1[0x54] = (long)(plVar23 + 1);
  *plVar23 = (long)&local_c0;
  pcVar5 = (char *)*param_1;
  lVar21 = param_1[2];
  lVar8 = param_1[3];
  uVar12 = param_1[1] - (long)pcVar5;
  if (uVar12 != 0) {
    plVar23 = param_1 + 5;
    while (*pcVar5 == 'T') {
      if (uVar12 < 2) {
        __c = 0;
      }
      else {
        __c = (uint)(byte)pcVar5[1];
      }
      pcVar5 = memchr("yptnk",__c,5);
      if ((pcVar5 == (char *)0x0) || (pcVar5 == "")) break;
      lVar6 = FUN_0015acc8(param_1,&local_c0);
      puVar3 = (undefined8 *)0x0;
      if (lVar6 == 0) goto LAB_0015a058;
      plVar22 = (long *)param_1[3];
      if (plVar22 == (long *)param_1[4]) {
        plVar7 = (long *)param_1[2];
        sVar20 = (long)plVar22 - (long)plVar7;
        if (plVar7 == plVar23) {
          pvVar18 = malloc(sVar20 * 2);
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar22 != plVar23) {
            memcpy(pvVar18,plVar23,sVar20);
          }
          param_1[2] = (long)pvVar18;
        }
        else {
          pvVar18 = realloc(plVar7,sVar20 * 2);
          param_1[2] = (long)pvVar18;
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar22 = (long *)((long)pvVar18 + sVar20);
        param_1[3] = (long)plVar22;
        param_1[4] = (long)((long)pvVar18 + ((long)sVar20 >> 2) * 8);
      }
      param_1[3] = (long)(plVar22 + 1);
      *plVar22 = lVar6;
      pcVar5 = (char *)*param_1;
      uVar12 = param_1[1] - (long)pcVar5;
      if (uVar12 == 0) break;
    }
  }
  lVar21 = lVar8 - lVar21 >> 3;
  local_e0 = FUN_00150274(param_1,lVar21);
  if (local_e0._8_8_ == 0) {
    if (param_1[0x54] == param_1[0x53]) {
                    /* WARNING: Subroutine does not return */
      FUN_0014ce10("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x82,
                   "Popping empty vector!");
    }
    param_1[0x54] = param_1[0x54] + -8;
  }
  pcVar5 = (char *)*param_1;
  pcVar13 = (char *)param_1[1];
  local_e8 = 0;
  if (pcVar5 == pcVar13) {
LAB_00159e90:
    plVar23 = param_1 + 5;
    do {
      lVar8 = FUN_0014e160(param_1);
      puVar3 = (undefined8 *)0x0;
      if (lVar8 == 0) goto LAB_0015a058;
      plVar22 = (long *)param_1[3];
      if (plVar22 == (long *)param_1[4]) {
        plVar7 = (long *)param_1[2];
        sVar20 = (long)plVar22 - (long)plVar7;
        if (plVar7 == plVar23) {
          pvVar18 = malloc(sVar20 * 2);
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar22 != plVar23) {
            memcpy(pvVar18,plVar23,sVar20);
          }
          param_1[2] = (long)pvVar18;
        }
        else {
          pvVar18 = realloc(plVar7,sVar20 * 2);
          param_1[2] = (long)pvVar18;
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar22 = (long *)((long)pvVar18 + sVar20);
        param_1[3] = (long)plVar22;
        param_1[4] = (long)((long)pvVar18 + ((long)sVar20 >> 2) * 8);
      }
      param_1[3] = (long)(plVar22 + 1);
      *plVar22 = lVar8;
      if ((char *)param_1[1] == (char *)*param_1) {
        cVar9 = '\0';
      }
      else {
        cVar9 = *(char *)*param_1;
        if (cVar9 == 'E') break;
      }
    } while (cVar9 != 'Q');
  }
  else {
    if (*pcVar5 == 'Q') {
      uVar2 = *(undefined1 *)((long)param_1 + 0x30a);
      *param_1 = (long)(pcVar5 + 1);
      *(undefined1 *)((long)param_1 + 0x30a) = 1;
      local_e8 = FUN_00153210(param_1);
      *(undefined1 *)((long)param_1 + 0x30a) = uVar2;
      puVar3 = (undefined8 *)0x0;
      if (local_e8 == 0) goto LAB_0015a058;
      pcVar5 = (char *)*param_1;
      pcVar13 = (char *)param_1[1];
    }
    if ((pcVar13 == pcVar5) || (*pcVar5 != 'v')) goto LAB_00159e90;
    *param_1 = (long)(pcVar5 + 1);
  }
  local_f8 = FUN_00150274(param_1,lVar21);
  pbVar14 = (byte *)*param_1;
  pbVar11 = (byte *)param_1[1];
  local_100 = 0;
  if (pbVar14 != pbVar11) {
    if (*pbVar14 == 0x51) {
      uVar2 = *(undefined1 *)((long)param_1 + 0x30a);
      *param_1 = (long)(pbVar14 + 1);
      *(undefined1 *)((long)param_1 + 0x30a) = 1;
      local_100 = FUN_00153210(param_1);
      *(undefined1 *)((long)param_1 + 0x30a) = uVar2;
      puVar3 = (undefined8 *)0x0;
      if (local_100 == 0) goto LAB_0015a058;
      pbVar14 = (byte *)*param_1;
      pbVar11 = (byte *)param_1[1];
    }
    if ((pbVar14 != pbVar11) && (*pbVar14 == 0x45)) {
      pbVar14 = pbVar14 + 1;
      *param_1 = (long)pbVar14;
      if (pbVar11 != pbVar14) {
        pbVar19 = pbVar14;
        if (*pbVar14 - 0x3a < 0xfffffff6) {
          lStack_108 = 0;
          pbVar15 = pbVar14;
          pbVar14 = (byte *)0x0;
        }
        else {
          do {
            pbVar15 = pbVar19;
            if (*pbVar19 - 0x3a < 0xfffffff6) break;
            pbVar19 = pbVar19 + 1;
            *param_1 = (long)pbVar19;
            pbVar15 = pbVar11;
          } while (pbVar19 != pbVar11);
          lStack_108 = (long)pbVar15 - (long)pbVar14;
        }
        local_110 = pbVar14;
        if ((pbVar15 != pbVar11) && (*pbVar15 == 0x5f)) {
          *param_1 = (long)(pbVar15 + 1);
          puVar3 = (undefined8 *)
                   FUN_0015b634(param_1,local_e0,&local_e8,local_f8,&local_100,&local_110);
          goto LAB_0015a058;
        }
      }
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_0015a058:
  if ((ulong)(local_d0[0x54] - local_d0[0x53] >> 3) < uStack_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_0014ce10("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xa4f,
                 &DAT_00136b27);
  }
  local_d0[0x54] = local_d0[0x53] + uStack_c8 * 8;
  if (local_c0 != &local_a8) {
    free(local_c0);
  }
  param_1[0x62] = lVar10;
  return puVar3;
}


