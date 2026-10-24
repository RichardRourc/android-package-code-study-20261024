// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001dccc0; body: [[001dccc0, 001dd403]]

undefined8 * FUN_001dccc0(long *param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  uint __c;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  void *pvVar17;
  size_t sVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  short *psVar22;
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
  psVar22 = (short *)*param_1;
  pbVar14 = (byte *)param_1[1];
  if ((ulong)((long)pbVar14 - (long)psVar22) < 2) {
    return (undefined8 *)0x0;
  }
  if (*psVar22 == 0x7455) {
    pbVar10 = (byte *)(psVar22 + 1);
    *param_1 = (long)pbVar10;
    pbVar12 = pbVar10;
    if ((pbVar14 == pbVar10) || (*pbVar10 - 0x3a < 0xfffffff6)) {
      lVar11 = 0;
      pbVar10 = (byte *)0x0;
    }
    else {
      pbVar15 = (byte *)(psVar22 + 1);
      do {
        pbVar16 = pbVar15;
        if (*pbVar12 - 0x3a < 0xfffffff6) break;
        pbVar12 = pbVar12 + 1;
        pbVar15 = pbVar15 + 1;
        *param_1 = (long)pbVar12;
        pbVar16 = pbVar14;
      } while (pbVar12 != pbVar14);
      lVar11 = (long)pbVar16 - (long)pbVar10;
    }
    if (pbVar12 == pbVar14) {
      return (undefined8 *)0x0;
    }
    if (*pbVar12 != 0x5f) {
      return (undefined8 *)0x0;
    }
    pvVar17 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar12 + 1);
    lVar19 = *(long *)((long)pvVar17 + 8);
    puVar4 = pvVar17;
    if (lVar19 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) {
LAB_001dd3d8:
                    /* WARNING: Subroutine does not return */
        FUN_001cee20();
      }
      lVar19 = 0;
      *puVar4 = pvVar17;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar19 + 0x20;
    puVar5 = (undefined8 *)((long)puVar4 + lVar19 + 0x10);
    *puVar5 = &PTR_FUN_001f49d8;
    *(byte **)((long)puVar4 + lVar19 + 0x20) = pbVar10;
    *(long *)((long)puVar4 + lVar19 + 0x28) = lVar11;
    *(undefined1 *)((long)puVar4 + lVar19 + 0x18) = 0x33;
    *(ushort *)((long)puVar4 + lVar19 + 0x19) =
         *(ushort *)((long)puVar4 + lVar19 + 0x19) & 0xf000 | 0x540;
    return puVar5;
  }
  if (*psVar22 != 0x6c55) {
    if (*psVar22 != 0x6255) {
      return (undefined8 *)0x0;
    }
    pbVar10 = (byte *)(psVar22 + 1);
    *param_1 = (long)pbVar10;
    if ((pbVar14 != pbVar10) && (0xfffffff5 < *pbVar10 - 0x3a)) {
      do {
        if (*pbVar10 - 0x3a < 0xfffffff6) break;
        pbVar10 = pbVar10 + 1;
        *param_1 = (long)pbVar10;
      } while (pbVar10 != pbVar14);
    }
    if (pbVar10 == pbVar14) {
      return (undefined8 *)0x0;
    }
    if (*pbVar10 != 0x5f) {
      return (undefined8 *)0x0;
    }
    pvVar17 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar10 + 1);
    lVar11 = *(long *)((long)pvVar17 + 8);
    puVar4 = pvVar17;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001dd3d8;
      lVar11 = 0;
      *puVar4 = pvVar17;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar5 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar5 = &PTR_FUN_001f3c10;
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    *(ushort *)((long)puVar4 + lVar11 + 0x19) =
         *(ushort *)((long)puVar4 + lVar11 + 0x19) & 0xf000 | 0x540;
    *(char **)((long)puVar4 + lVar11 + 0x20) = "\'block-literal\'";
    *(undefined8 *)((long)puVar4 + lVar11 + 0x28) = 0xf;
    return puVar5;
  }
  plVar21 = (long *)param_1[0x54];
  plVar20 = (long *)param_1[0x53];
  psVar22 = psVar22 + 1;
  sVar18 = (long)plVar21 - (long)plVar20;
  uStack_c8 = (long)sVar18 >> 3;
  lVar11 = param_1[0x62];
  *param_1 = (long)psVar22;
  param_1[0x62] = uStack_c8;
  local_b0 = auStack_68;
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
  if (plVar21 == (long *)param_1[0x55]) {
    if (plVar20 == param_1 + 0x56) {
      pvVar17 = malloc(sVar18 * 2);
      if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar21 != plVar20) {
        memmove(pvVar17,plVar20,sVar18);
      }
      param_1[0x53] = (long)pvVar17;
    }
    else {
      pvVar17 = realloc(plVar20,sVar18 * 2);
      param_1[0x53] = (long)pvVar17;
      if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      psVar22 = (short *)*param_1;
      pbVar14 = (byte *)param_1[1];
    }
    plVar21 = (long *)((long)pvVar17 + sVar18);
    param_1[0x55] = (long)((long)pvVar17 + ((long)sVar18 >> 2) * 8);
  }
  lVar19 = param_1[2];
  lVar8 = param_1[3];
  *plVar21 = (long)&local_c0;
  param_1[0x54] = (long)(plVar21 + 1);
  uVar9 = (long)pbVar14 - (long)psVar22;
  if (uVar9 != 0) {
    while ((char)*psVar22 == 'T') {
      if (uVar9 < 2) {
        __c = 0;
      }
      else {
        __c = (uint)*(byte *)((long)psVar22 + 1);
      }
      pcVar6 = memchr("yptnk",__c,5);
      if ((pcVar6 == (char *)0x0) || (pcVar6 == "")) break;
      lVar7 = FUN_001de15c(param_1,&local_c0);
      puVar4 = (undefined8 *)0x0;
      if (lVar7 == 0) goto LAB_001dd35c;
      plVar21 = (long *)param_1[3];
      if (plVar21 == (long *)param_1[4]) {
        plVar20 = (long *)param_1[2];
        sVar18 = (long)plVar21 - (long)plVar20;
        if (plVar20 == param_1 + 5) {
          pvVar17 = malloc(sVar18 * 2);
          if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar21 != param_1 + 5) {
            memmove(pvVar17,plVar20,sVar18);
          }
          param_1[2] = (long)pvVar17;
        }
        else {
          pvVar17 = realloc(plVar20,sVar18 * 2);
          param_1[2] = (long)pvVar17;
          if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar21 = (long *)((long)pvVar17 + sVar18);
        param_1[4] = (long)((long)pvVar17 + ((long)sVar18 >> 2) * 8);
      }
      psVar22 = (short *)*param_1;
      lVar1 = param_1[1];
      *plVar21 = lVar7;
      param_1[3] = (long)(plVar21 + 1);
      uVar9 = lVar1 - (long)psVar22;
      if (uVar9 == 0) break;
    }
  }
  lVar19 = lVar8 - lVar19 >> 3;
  local_e0 = FUN_001d34d4(param_1,lVar19);
  if (local_e0._8_8_ == 0) {
    if (param_1[0x54] == param_1[0x53]) {
                    /* WARNING: Subroutine does not return */
      FUN_001cf218("%s:%d: %s","75h2tvbqqiyelu6ergavx69288j4fh21moacaekj9a5g1ychamkwv5wxa",0x81,
                   "Popping empty vector!");
    }
    param_1[0x54] = param_1[0x54] + -8;
  }
  pcVar6 = (char *)*param_1;
  pcVar13 = (char *)param_1[1];
  local_e8 = 0;
  if (pcVar6 == pcVar13) {
LAB_001dd194:
    do {
      lVar8 = FUN_001d0f90(param_1);
      puVar4 = (undefined8 *)0x0;
      if (lVar8 == 0) goto LAB_001dd35c;
      plVar21 = (long *)param_1[3];
      if (plVar21 == (long *)param_1[4]) {
        plVar20 = (long *)param_1[2];
        sVar18 = (long)plVar21 - (long)plVar20;
        if (plVar20 == param_1 + 5) {
          pvVar17 = malloc(sVar18 * 2);
          if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar21 != param_1 + 5) {
            memmove(pvVar17,plVar20,sVar18);
          }
          param_1[2] = (long)pvVar17;
        }
        else {
          pvVar17 = realloc(plVar20,sVar18 * 2);
          param_1[2] = (long)pvVar17;
          if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar21 = (long *)((long)pvVar17 + sVar18);
        param_1[4] = (long)((long)pvVar17 + ((long)sVar18 >> 2) * 8);
      }
      pcVar6 = (char *)*param_1;
      pcVar13 = (char *)param_1[1];
      *plVar21 = lVar8;
      param_1[3] = (long)(plVar21 + 1);
    } while ((pcVar13 == pcVar6) || ((cVar3 = *pcVar6, cVar3 != 'Q' && (cVar3 != 'E'))));
  }
  else {
    if (*pcVar6 == 'Q') {
      uVar2 = *(undefined1 *)((long)param_1 + 0x30a);
      *param_1 = (long)(pcVar6 + 1);
      *(undefined1 *)((long)param_1 + 0x30a) = 1;
      local_e8 = FUN_001d642c(param_1);
      *(undefined1 *)((long)param_1 + 0x30a) = uVar2;
      puVar4 = (undefined8 *)0x0;
      if (local_e8 == 0) goto LAB_001dd35c;
      pcVar6 = (char *)*param_1;
      pcVar13 = (char *)param_1[1];
    }
    if ((pcVar13 == pcVar6) || (*pcVar6 != 'v')) goto LAB_001dd194;
    *param_1 = (long)(pcVar6 + 1);
  }
  local_f8 = FUN_001d34d4(param_1,lVar19);
  pbVar14 = (byte *)*param_1;
  pbVar10 = (byte *)param_1[1];
  local_100 = 0;
  if (pbVar14 != pbVar10) {
    if (*pbVar14 == 0x51) {
      uVar2 = *(undefined1 *)((long)param_1 + 0x30a);
      *param_1 = (long)(pbVar14 + 1);
      *(undefined1 *)((long)param_1 + 0x30a) = 1;
      local_100 = FUN_001d642c(param_1);
      *(undefined1 *)((long)param_1 + 0x30a) = uVar2;
      puVar4 = (undefined8 *)0x0;
      if (local_100 == 0) goto LAB_001dd35c;
      pbVar14 = (byte *)*param_1;
      pbVar10 = (byte *)param_1[1];
    }
    if ((pbVar14 != pbVar10) && (*pbVar14 == 0x45)) {
      local_110 = pbVar14 + 1;
      *param_1 = (long)local_110;
      pbVar14 = local_110;
      if ((pbVar10 == local_110) || (*local_110 - 0x3a < 0xfffffff6)) {
        lStack_108 = 0;
        local_110 = (byte *)0x0;
      }
      else {
        do {
          pbVar12 = pbVar14;
          if (*pbVar14 - 0x3a < 0xfffffff6) break;
          pbVar14 = pbVar14 + 1;
          *param_1 = (long)pbVar14;
          pbVar12 = pbVar10;
        } while (pbVar14 != pbVar10);
        lStack_108 = (long)pbVar12 - (long)local_110;
      }
      if ((pbVar14 != pbVar10) && (*pbVar14 == 0x5f)) {
        *param_1 = (long)(pbVar14 + 1);
        puVar4 = (undefined8 *)
                 FUN_001deaa8(param_1,local_e0,&local_e8,local_f8,&local_100,&local_110);
        goto LAB_001dd35c;
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_001dd35c:
  if ((ulong)(local_d0[0x54] - local_d0[0x53] >> 3) < uStack_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_001cf218("%s:%d: %s","75h2tvbqqiyelu6ergavx69288j4fh21moacaekj9a5g1ychamkwv5wxa",0xac7,
                 &DAT_0011dd07);
  }
  local_d0[0x54] = local_d0[0x53] + uStack_c8 * 8;
  if (local_c0 != &local_a8) {
    free(local_c0);
  }
  param_1[0x62] = lVar11;
  return puVar4;
}


