// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014f6a0; body: [[0014f6a0, 0014fdbb]]

undefined8 * FUN_0014f6a0(long *param_1,long param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 uVar13;
  uint uVar14;
  long lVar15;
  size_t sVar16;
  long *plVar17;
  void *pvVar18;
  long *plVar19;
  long local_110;
  ulong local_108 [19];
  long local_70 [2];
  
  pbVar2 = (byte *)*param_1;
  pbVar12 = (byte *)param_1[1];
  if (pbVar12 == pbVar2) {
LAB_0014f720:
    local_108[0] = local_108[0] & 0xffffffffffffff00;
    puVar5 = (undefined8 *)FUN_001518e8(param_1,param_2,local_108);
    if (puVar5 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (((char *)param_1[1] == (char *)*param_1) || (*(char *)*param_1 != 'I')) {
      if ((char)local_108[0] != '\0') {
        return (undefined8 *)0x0;
      }
      return puVar5;
    }
    if ((local_108[0] & 1) == 0) {
      plVar17 = (long *)param_1[0x26];
      if (plVar17 == (long *)param_1[0x27]) {
        plVar7 = (long *)param_1[0x25];
        plVar19 = param_1 + 0x28;
        sVar16 = (long)plVar17 - (long)plVar7;
        if (plVar7 == plVar19) {
          pvVar18 = malloc(sVar16 * 2);
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar17 != plVar19) {
            memcpy(pvVar18,plVar19,sVar16);
          }
          param_1[0x25] = (long)pvVar18;
        }
        else {
          pvVar18 = realloc(plVar7,sVar16 * 2);
          param_1[0x25] = (long)pvVar18;
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar17 = (long *)((long)pvVar18 + sVar16);
        param_1[0x26] = (long)plVar17;
        param_1[0x27] = (long)((long)pvVar18 + ((long)sVar16 >> 2) * 8);
      }
      param_1[0x26] = (long)(plVar17 + 1);
      *plVar17 = (long)puVar5;
    }
    lVar15 = FUN_00151a58(param_1,param_2 != 0);
    if (lVar15 == 0) {
      return (undefined8 *)0x0;
    }
    if (param_2 != 0) {
      *(undefined1 *)(param_2 + 1) = 1;
    }
    puVar8 = (undefined8 *)param_1[0x266];
    lVar10 = *(long *)((long)puVar8 + 8);
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar6 = malloc(0x1000);
      if (puVar6 == (void *)0x0) {
LAB_0014fdb4:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar10 = 0;
      *puVar6 = puVar8;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
      puVar8 = puVar6;
    }
    *(long *)((long)puVar8 + 8) = lVar10 + 0x20;
    puVar6 = (undefined8 *)((long)puVar8 + lVar10 + 0x10);
    *puVar6 = &PTR_FUN_00172fe8;
    *(undefined8 **)((long)puVar8 + lVar10 + 0x20) = puVar5;
    *(long *)((long)puVar8 + lVar10 + 0x28) = lVar15;
    *(undefined1 *)((long)puVar8 + lVar10 + 0x18) = 0x2d;
    *(ushort *)((long)puVar8 + lVar10 + 0x19) =
         *(ushort *)((long)puVar8 + lVar10 + 0x19) & 0xf000 | 0x540;
    return puVar6;
  }
  if (*pbVar2 == 0x5a) {
    *param_1 = (long)(pbVar2 + 1);
    local_70[0] = FUN_0014d60c(param_1);
    if (local_70[0] == 0) {
      return (undefined8 *)0x0;
    }
    pcVar3 = (char *)*param_1;
    if (pcVar3 == (char *)param_1[1]) {
      return (undefined8 *)0x0;
    }
    if (*pcVar3 != 'E') {
      return (undefined8 *)0x0;
    }
    pcVar1 = pcVar3 + 1;
    *param_1 = (long)pcVar1;
    if ((pcVar1 != (char *)param_1[1]) && (*pcVar1 == 's')) {
      *param_1 = (long)(pcVar3 + 2);
      lVar15 = FUN_001604d4();
      *param_1 = lVar15;
      local_108[0] = FUN_00160584(param_1,"string literal");
      puVar5 = (undefined8 *)FUN_00160630(param_1,local_70,local_108);
      return puVar5;
    }
    FUN_0014f4f8(local_108,param_1);
    pcVar3 = (char *)*param_1;
    if ((pcVar3 == (char *)param_1[1]) || (*pcVar3 != 'd')) {
      local_110 = FUN_0014f6a0(param_1,param_2);
      if (local_110 != 0) {
        lVar15 = FUN_001604d4(*param_1,param_1[1]);
        *param_1 = lVar15;
LAB_0014fc68:
        puVar5 = (undefined8 *)FUN_00160630(param_1,local_70,&local_110);
        goto LAB_0014fc84;
      }
    }
    else {
      *param_1 = (long)(pcVar3 + 1);
      FUN_0014e020(param_1,1);
      pcVar3 = (char *)*param_1;
      if ((pcVar3 != (char *)param_1[1]) && (*pcVar3 == '_')) {
        *param_1 = (long)(pcVar3 + 1);
        local_110 = FUN_0014f6a0(param_1,param_2);
        if (local_110 != 0) goto LAB_0014fc68;
      }
    }
    puVar5 = (undefined8 *)0x0;
LAB_0014fc84:
    FUN_001504c4(local_108);
    return puVar5;
  }
  if (*pbVar2 != 0x4e) goto LAB_0014f720;
  pbVar11 = pbVar2 + 1;
  *param_1 = (long)pbVar11;
  pbVar9 = pbVar12;
  if (pbVar11 == pbVar12) {
    uVar14 = 0;
LAB_0014f830:
    if (param_2 != 0) {
      *(uint *)(param_2 + 4) = uVar14;
    }
    if (pbVar9 == pbVar12) {
LAB_0014f8a4:
      if (param_2 == 0) goto LAB_0014f8b4;
      uVar13 = 0;
    }
    else if (*pbVar9 == 0x4f) {
      pbVar9 = pbVar9 + 1;
      *param_1 = (long)pbVar9;
      if (param_2 == 0) goto LAB_0014f8b4;
      uVar13 = 2;
    }
    else {
      if (*pbVar9 != 0x52) goto LAB_0014f8a4;
      pbVar9 = pbVar9 + 1;
      *param_1 = (long)pbVar9;
      if (param_2 == 0) goto LAB_0014f8b4;
      uVar13 = 1;
    }
    lVar15 = 8;
  }
  else {
    if (*pbVar11 != 0x48) {
      if (*pbVar11 == 0x72) {
        pbVar11 = pbVar2 + 2;
        uVar14 = 4;
        *param_1 = (long)pbVar11;
      }
      else {
        uVar14 = 0;
      }
      if (pbVar11 != pbVar12) {
        if (*pbVar11 == 0x56) {
          pbVar11 = pbVar11 + 1;
          uVar14 = uVar14 | 2;
          *param_1 = (long)pbVar11;
        }
        if ((pbVar11 != pbVar12) && (pbVar9 = pbVar11, *pbVar11 == 0x4b)) {
          uVar14 = uVar14 | 1;
          *param_1 = (long)(pbVar11 + 1);
          pbVar9 = pbVar11 + 1;
        }
      }
      goto LAB_0014f830;
    }
    pbVar9 = pbVar2 + 2;
    *param_1 = (long)pbVar9;
    if (param_2 == 0) goto LAB_0014f8b4;
    uVar13 = 1;
    lVar15 = 0x18;
  }
  *(undefined1 *)(param_2 + lVar15) = uVar13;
LAB_0014f8b4:
  plVar17 = param_1 + 0x28;
  puVar5 = (undefined8 *)0x0;
  do {
    while( true ) {
      if ((pbVar9 != pbVar12) && (*pbVar9 == 0x45)) {
        *param_1 = (long)(pbVar9 + 1);
        if (puVar5 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        if (param_1[0x25] == param_1[0x26]) {
          return (undefined8 *)0x0;
        }
        param_1[0x26] = param_1[0x26] + -8;
        return puVar5;
      }
      if (param_2 != 0) {
        *(undefined1 *)(param_2 + 1) = 0;
      }
      if (pbVar12 != pbVar9) break;
LAB_0014f9ec:
      puVar8 = (undefined8 *)0x0;
LAB_0014f9f0:
      puVar8 = (undefined8 *)FUN_001527a4(param_1,param_2,puVar5,puVar8);
LAB_0014fa00:
      if (puVar8 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
LAB_0014fa08:
      plVar19 = (long *)param_1[0x26];
      if (plVar19 == (long *)param_1[0x27]) {
        plVar7 = (long *)param_1[0x25];
        sVar16 = (long)plVar19 - (long)plVar7;
        if (plVar7 == plVar17) {
          pvVar18 = malloc(sVar16 * 2);
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar19 != plVar17) {
            memcpy(pvVar18,plVar17,sVar16);
          }
          param_1[0x25] = (long)pvVar18;
        }
        else {
          pvVar18 = realloc(plVar7,sVar16 * 2);
          param_1[0x25] = (long)pvVar18;
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar19 = (long *)((long)pvVar18 + sVar16);
        param_1[0x26] = (long)plVar19;
        param_1[0x27] = (long)((long)pvVar18 + ((long)sVar16 >> 2) * 8);
      }
      param_1[0x26] = (long)(plVar19 + 1);
      *plVar19 = (long)puVar8;
      pbVar9 = (byte *)*param_1;
      pbVar2 = (byte *)param_1[1];
      pbVar12 = pbVar9;
      puVar5 = puVar8;
      if ((pbVar9 != pbVar2) && (pbVar12 = pbVar2, *pbVar9 == 0x4d)) {
        pbVar9 = pbVar9 + 1;
        *param_1 = (long)pbVar9;
      }
    }
    bVar4 = *pbVar9;
    puVar8 = (undefined8 *)0x0;
    if (bVar4 < 0x53) {
      if (bVar4 == 0x44) {
        if (((ulong)((long)pbVar12 - (long)pbVar9) < 2) || ((pbVar9[1] | 0x20) != 0x74))
        goto LAB_0014f9ec;
        if (puVar5 != (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar8 = (undefined8 *)FUN_00152394(param_1);
        goto LAB_0014fa00;
      }
      if (bVar4 != 0x49) goto LAB_0014f9f0;
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar15 = FUN_00151a58(param_1,param_2 != 0);
      if (lVar15 == 0) {
        return (undefined8 *)0x0;
      }
      if (*(char *)(puVar5 + 1) == '-') {
        return (undefined8 *)0x0;
      }
      if (param_2 != 0) {
        *(undefined1 *)(param_2 + 1) = 1;
      }
      pvVar18 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar18 + 8);
      puVar6 = pvVar18;
      if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_0014fdb4;
        lVar10 = 0;
        *puVar6 = pvVar18;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar10 + 0x20;
      puVar8 = (undefined8 *)((long)puVar6 + lVar10 + 0x10);
      *puVar8 = &PTR_FUN_00172fe8;
      *(undefined8 **)((long)puVar6 + lVar10 + 0x20) = puVar5;
      *(long *)((long)puVar6 + lVar10 + 0x28) = lVar15;
      *(undefined1 *)((long)puVar6 + lVar10 + 0x18) = 0x2d;
      *(ushort *)((long)puVar6 + lVar10 + 0x19) =
           *(ushort *)((long)puVar6 + lVar10 + 0x19) & 0xf000 | 0x540;
      goto LAB_0014fa08;
    }
    if (bVar4 != 0x53) {
      if (bVar4 == 0x54) {
        if (puVar5 != (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar8 = (undefined8 *)FUN_00151fd0(param_1);
        goto LAB_0014fa00;
      }
      goto LAB_0014f9f0;
    }
    if (((ulong)((long)pbVar12 - (long)pbVar9) < 2) || (pbVar9[1] != 0x74)) {
      puVar8 = (undefined8 *)FUN_001524c8(param_1);
      if (puVar8 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      if (*(char *)(puVar8 + 1) == '\x1b') goto LAB_0014f9f0;
    }
    else {
      pvVar18 = (void *)param_1[0x266];
      *param_1 = (long)(pbVar9 + 2);
      lVar15 = *(long *)((long)pvVar18 + 8);
      puVar6 = pvVar18;
      if (lVar15 - 0xfd0U < 0xfffffffffffff010) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_0014fdb4;
        lVar15 = 0;
        *puVar6 = pvVar18;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar15 + 0x20;
      puVar8 = (undefined8 *)((long)puVar6 + lVar15 + 0x10);
      *puVar8 = &PTR_FUN_001710e8;
      *(undefined1 *)((long)puVar6 + lVar15 + 0x18) = 8;
      *(ushort *)((long)puVar6 + lVar15 + 0x19) =
           *(ushort *)((long)puVar6 + lVar15 + 0x19) & 0xf000 | 0x540;
      *(undefined **)((long)puVar6 + lVar15 + 0x20) = &DAT_001375d0;
      *(undefined8 *)((long)puVar6 + lVar15 + 0x28) = 3;
    }
    if (puVar5 != (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    pbVar9 = (byte *)*param_1;
    pbVar12 = (byte *)param_1[1];
    puVar5 = puVar8;
  } while( true );
}


