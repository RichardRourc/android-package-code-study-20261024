// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d2908; body: [[001d2908, 001d300f]]

undefined8 * FUN_001d2908(long *param_1,long param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  undefined1 uVar11;
  uint uVar12;
  long lVar13;
  size_t sVar14;
  void *pvVar15;
  long *plVar16;
  long *plVar17;
  long local_110;
  ulong local_108 [19];
  long local_70 [2];
  
  pbVar2 = (byte *)*param_1;
  pbVar10 = (byte *)param_1[1];
  if (pbVar10 == pbVar2) {
LAB_001d2988:
    local_108[0] = local_108[0] & 0xffffffffffffff00;
    puVar5 = (undefined8 *)FUN_001d4b6c(param_1,param_2,local_108);
    if (puVar5 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (((char *)param_1[1] == (char *)*param_1) || (*(char *)*param_1 != 'I')) {
      if ((char)local_108[0] == '\0') {
        return puVar5;
      }
      return (undefined8 *)0x0;
    }
    if ((local_108[0] & 1) == 0) {
      plVar17 = (long *)param_1[0x26];
      if (plVar17 == (long *)param_1[0x27]) {
        plVar16 = (long *)param_1[0x25];
        sVar14 = (long)plVar17 - (long)plVar16;
        if (plVar16 == param_1 + 0x28) {
          pvVar15 = malloc(sVar14 * 2);
          if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar17 != param_1 + 0x28) {
            memmove(pvVar15,plVar16,sVar14);
          }
          param_1[0x25] = (long)pvVar15;
        }
        else {
          pvVar15 = realloc(plVar16,sVar14 * 2);
          param_1[0x25] = (long)pvVar15;
          if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar17 = (long *)((long)pvVar15 + sVar14);
        param_1[0x27] = (long)((long)pvVar15 + ((long)sVar14 >> 2) * 8);
      }
      *plVar17 = (long)puVar5;
      param_1[0x26] = (long)(plVar17 + 1);
    }
    lVar13 = FUN_001d4cdc(param_1,param_2 != 0);
    if (lVar13 == 0) {
      return (undefined8 *)0x0;
    }
    if (param_2 != 0) {
      *(undefined1 *)(param_2 + 1) = 1;
    }
    puVar7 = (undefined8 *)param_1[0x266];
    lVar9 = *(long *)((long)puVar7 + 8);
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar6 = malloc(0x1000);
      if (puVar6 == (void *)0x0) {
LAB_001d3008:
                    /* WARNING: Subroutine does not return */
        FUN_001cee20();
      }
      lVar9 = 0;
      *puVar6 = puVar7;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
      puVar7 = puVar6;
    }
    *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
    puVar6 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
    *puVar6 = &PTR_FUN_001f5d10;
    *(undefined8 **)((long)puVar7 + lVar9 + 0x20) = puVar5;
    *(long *)((long)puVar7 + lVar9 + 0x28) = lVar13;
    *(undefined1 *)((long)puVar7 + lVar9 + 0x18) = 0x2d;
    *(ushort *)((long)puVar7 + lVar9 + 0x19) =
         *(ushort *)((long)puVar7 + lVar9 + 0x19) & 0xf000 | 0x540;
    return puVar6;
  }
  if (*pbVar2 == 0x5a) {
    *param_1 = (long)(pbVar2 + 1);
    local_70[0] = FUN_001d03cc(param_1);
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
      lVar13 = FUN_001e3b20();
      *param_1 = lVar13;
      local_108[0] = FUN_001e3bd0(param_1,"string literal");
      puVar5 = (undefined8 *)FUN_001e3c7c(param_1,local_70,local_108);
      return puVar5;
    }
    FUN_001d2744(local_108,param_1);
    pcVar3 = (char *)*param_1;
    if ((pcVar3 == (char *)param_1[1]) || (*pcVar3 != 'd')) {
      local_110 = FUN_001d2908(param_1,param_2);
      if (local_110 != 0) {
        lVar13 = FUN_001e3b20(*param_1,param_1[1]);
        *param_1 = lVar13;
LAB_001d2ec0:
        puVar5 = (undefined8 *)FUN_001e3c7c(param_1,local_70,&local_110);
        goto LAB_001d2edc;
      }
    }
    else {
      *param_1 = (long)(pcVar3 + 1);
      FUN_001d0e50(param_1,1);
      pcVar3 = (char *)*param_1;
      if ((pcVar3 != (char *)param_1[1]) && (*pcVar3 == '_')) {
        *param_1 = (long)(pcVar3 + 1);
        local_110 = FUN_001d2908(param_1,param_2);
        if (local_110 != 0) goto LAB_001d2ec0;
      }
    }
    puVar5 = (undefined8 *)0x0;
LAB_001d2edc:
    FUN_001d3630(local_108);
    return puVar5;
  }
  if (*pbVar2 != 0x4e) goto LAB_001d2988;
  pbVar8 = pbVar2 + 1;
  *param_1 = (long)pbVar8;
  if (pbVar8 == pbVar10) {
LAB_001d2ab0:
    uVar12 = 0;
LAB_001d2ab4:
    if ((pbVar8 != pbVar10) && (*pbVar8 == 0x56)) {
      pbVar8 = pbVar8 + 1;
      uVar12 = uVar12 | 2;
      *param_1 = (long)pbVar8;
    }
    if ((pbVar8 != pbVar10) && (*pbVar8 == 0x4b)) {
      pbVar8 = pbVar8 + 1;
      uVar12 = uVar12 | 1;
      *param_1 = (long)pbVar8;
    }
    if (param_2 != 0) {
      *(uint *)(param_2 + 4) = uVar12;
    }
    if (pbVar8 == pbVar10) {
LAB_001d2b44:
      if (param_2 == 0) goto LAB_001d2b54;
      uVar11 = 0;
    }
    else if (*pbVar8 == 0x4f) {
      pbVar8 = pbVar8 + 1;
      *param_1 = (long)pbVar8;
      if (param_2 == 0) goto LAB_001d2b54;
      uVar11 = 2;
    }
    else {
      if (*pbVar8 != 0x52) goto LAB_001d2b44;
      pbVar8 = pbVar8 + 1;
      *param_1 = (long)pbVar8;
      if (param_2 == 0) goto LAB_001d2b54;
      uVar11 = 1;
    }
    lVar13 = 8;
  }
  else {
    if (*pbVar8 != 0x48) {
      if (*pbVar8 != 0x72) goto LAB_001d2ab0;
      pbVar8 = pbVar2 + 2;
      uVar12 = 4;
      *param_1 = (long)pbVar8;
      goto LAB_001d2ab4;
    }
    pbVar8 = pbVar2 + 2;
    *param_1 = (long)pbVar8;
    if (param_2 == 0) goto LAB_001d2b54;
    uVar11 = 1;
    lVar13 = 0x18;
  }
  *(undefined1 *)(param_2 + lVar13) = uVar11;
LAB_001d2b54:
  puVar5 = (undefined8 *)0x0;
LAB_001d2b6c:
  do {
    if ((pbVar8 != pbVar10) && (*pbVar8 == 0x45)) {
      *param_1 = (long)(pbVar8 + 1);
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
    if (pbVar10 == pbVar8) {
LAB_001d2c8c:
      puVar7 = (undefined8 *)0x0;
LAB_001d2c90:
      puVar7 = (undefined8 *)FUN_001d5a1c(param_1,param_2,puVar5,puVar7);
LAB_001d2ca0:
      if (puVar7 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
    }
    else {
      bVar4 = *pbVar8;
      puVar7 = (undefined8 *)0x0;
      if (0x52 < bVar4) {
        if (bVar4 != 0x53) {
          if (bVar4 != 0x54) goto LAB_001d2c90;
          if (puVar5 != (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar7 = (undefined8 *)FUN_001d5250(param_1);
          goto LAB_001d2ca0;
        }
        if (((ulong)((long)pbVar10 - (long)pbVar8) < 2) || (pbVar8[1] != 0x74)) {
          puVar7 = (undefined8 *)FUN_001d5748(param_1);
          if (puVar7 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          if (*(char *)(puVar7 + 1) == '\x1b') goto LAB_001d2c90;
        }
        else {
          pvVar15 = (void *)param_1[0x266];
          *param_1 = (long)(pbVar8 + 2);
          lVar13 = *(long *)((long)pvVar15 + 8);
          puVar6 = pvVar15;
          if (lVar13 - 0xfd0U < 0xfffffffffffff010) {
            puVar6 = malloc(0x1000);
            if (puVar6 == (void *)0x0) goto LAB_001d3008;
            lVar13 = 0;
            *puVar6 = pvVar15;
            puVar6[1] = 0;
            param_1[0x266] = (long)puVar6;
          }
          *(long *)((long)puVar6 + 8) = lVar13 + 0x20;
          puVar7 = (undefined8 *)((long)puVar6 + lVar13 + 0x10);
          *puVar7 = &PTR_FUN_001f3c10;
          *(undefined1 *)((long)puVar6 + lVar13 + 0x18) = 8;
          *(ushort *)((long)puVar6 + lVar13 + 0x19) =
               *(ushort *)((long)puVar6 + lVar13 + 0x19) & 0xf000 | 0x540;
          *(undefined **)((long)puVar6 + lVar13 + 0x20) = &DAT_0011e867;
          *(undefined8 *)((long)puVar6 + lVar13 + 0x28) = 3;
        }
        if (puVar5 != (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        pbVar8 = (byte *)*param_1;
        pbVar10 = (byte *)param_1[1];
        puVar5 = puVar7;
        goto LAB_001d2b6c;
      }
      if (bVar4 == 0x44) {
        if ((1 < (ulong)((long)pbVar10 - (long)pbVar8)) && ((pbVar8[1] | 0x20) == 0x74)) {
          if (puVar5 != (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar7 = (undefined8 *)FUN_001d5618(param_1);
          goto LAB_001d2ca0;
        }
        goto LAB_001d2c8c;
      }
      if (bVar4 != 0x49) goto LAB_001d2c90;
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar13 = FUN_001d4cdc(param_1,param_2 != 0);
      if (lVar13 == 0) {
        return (undefined8 *)0x0;
      }
      if (*(char *)(puVar5 + 1) == '-') {
        return (undefined8 *)0x0;
      }
      if (param_2 != 0) {
        *(undefined1 *)(param_2 + 1) = 1;
      }
      pvVar15 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar15 + 8);
      puVar6 = pvVar15;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_001d3008;
        lVar9 = 0;
        *puVar6 = pvVar15;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar9 + 0x20;
      puVar7 = (undefined8 *)((long)puVar6 + lVar9 + 0x10);
      *puVar7 = &PTR_FUN_001f5d10;
      *(undefined8 **)((long)puVar6 + lVar9 + 0x20) = puVar5;
      *(long *)((long)puVar6 + lVar9 + 0x28) = lVar13;
      *(undefined1 *)((long)puVar6 + lVar9 + 0x18) = 0x2d;
      *(ushort *)((long)puVar6 + lVar9 + 0x19) =
           *(ushort *)((long)puVar6 + lVar9 + 0x19) & 0xf000 | 0x540;
    }
    plVar17 = (long *)param_1[0x26];
    if (plVar17 == (long *)param_1[0x27]) {
      plVar16 = (long *)param_1[0x25];
      sVar14 = (long)plVar17 - (long)plVar16;
      if (plVar16 == param_1 + 0x28) {
        pvVar15 = malloc(sVar14 * 2);
        if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar17 != param_1 + 0x28) {
          memmove(pvVar15,plVar16,sVar14);
        }
        param_1[0x25] = (long)pvVar15;
      }
      else {
        pvVar15 = realloc(plVar16,sVar14 * 2);
        param_1[0x25] = (long)pvVar15;
        if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      plVar17 = (long *)((long)pvVar15 + sVar14);
      param_1[0x27] = (long)((long)pvVar15 + ((long)sVar14 >> 2) * 8);
    }
    *plVar17 = (long)puVar7;
    pbVar8 = (byte *)*param_1;
    pbVar2 = (byte *)param_1[1];
    param_1[0x26] = (long)(plVar17 + 1);
    pbVar10 = pbVar8;
    puVar5 = puVar7;
    if ((pbVar8 != pbVar2) && (pbVar10 = pbVar2, *pbVar8 == 0x4d)) {
      pbVar8 = pbVar8 + 1;
      *param_1 = (long)pbVar8;
    }
  } while( true );
}


