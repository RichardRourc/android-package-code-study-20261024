// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001527a4; body: [[001527a4, 00152d63]]

undefined8 * FUN_001527a4(long *param_1,undefined1 *param_2,undefined8 *param_3,long param_4)

{
  long *__src;
  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *__ptr;
  bool bVar10;
  byte *pbVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  byte *pbVar15;
  undefined **ppuVar16;
  undefined1 uVar17;
  byte *pbVar18;
  void *pvVar19;
  size_t __n;
  long *plVar20;
  undefined1 auVar21 [16];
  long local_68;
  undefined8 *local_60;
  undefined1 local_58 [4];
  int local_54;
  
  local_68 = param_4;
  local_60 = param_3;
  uVar5 = FUN_00150fd8(param_1,&local_68);
  if ((uVar5 & 1) != 0) goto LAB_001527e0;
  pbVar11 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  puVar7 = param_3;
  if (param_3 == (undefined8 *)0x0) {
LAB_0015281c:
    bVar1 = true;
joined_r0x00152824:
    if (pbVar11 == pbVar15) goto LAB_00152988;
    if (*pbVar11 == 0x4c) {
      pbVar11 = pbVar11 + 1;
      *param_1 = (long)pbVar11;
    }
    if ((pbVar15 != pbVar11) && (bVar4 = *pbVar11, 0x30 < bVar4)) {
      if (bVar4 < 0x3a) {
        puVar6 = (undefined8 *)FUN_00151444(param_1);
      }
      else {
        if (bVar4 != 0x55) goto LAB_00152884;
        puVar6 = (undefined8 *)FUN_001599b4(param_1,param_2);
      }
      goto LAB_00152998;
    }
LAB_00152884:
    if ((1 < (ulong)((long)pbVar15 - (long)pbVar11)) && (*(short *)pbVar11 == 0x4344)) {
      lVar14 = param_1[2];
      lVar12 = param_1[3];
      *param_1 = (long)(pbVar11 + 2);
      lVar9 = FUN_00151444(param_1);
      if (lVar9 == 0) {
        return (undefined8 *)0x0;
      }
      __src = param_1 + 5;
      while( true ) {
        plVar20 = (long *)param_1[3];
        if (plVar20 == (long *)param_1[4]) {
          __ptr = (long *)param_1[2];
          __n = (long)plVar20 - (long)__ptr;
          if (__ptr == __src) {
            pvVar19 = malloc(__n * 2);
            if (pvVar19 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar20 != __src) {
              memcpy(pvVar19,__src,__n);
            }
            param_1[2] = (long)pvVar19;
          }
          else {
            pvVar19 = realloc(__ptr,__n * 2);
            param_1[2] = (long)pvVar19;
            if (pvVar19 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar20 = (long *)((long)pvVar19 + __n);
          param_1[4] = (long)((long)pvVar19 + ((long)__n >> 2) * 8);
        }
        param_1[3] = (long)(plVar20 + 1);
        *plVar20 = lVar9;
        pcVar2 = (char *)*param_1;
        if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'E')) break;
        lVar9 = FUN_00151444(param_1);
        if (lVar9 == 0) {
          return (undefined8 *)0x0;
        }
      }
      *param_1 = (long)(pcVar2 + 1);
      auVar21 = FUN_00150274(param_1,lVar12 - lVar14 >> 3);
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar8 = pvVar19;
      if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) goto LAB_00152d58;
        lVar14 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar14 + 0x20;
      puVar6 = (undefined8 *)((long)puVar8 + lVar14 + 0x10);
      *puVar6 = &PTR_FUN_00172c68;
      *(undefined1 (*) [16])((long)puVar8 + lVar14 + 0x20) = auVar21;
      *(undefined1 *)((long)puVar8 + lVar14 + 0x18) = 0x35;
      *(ushort *)((long)puVar8 + lVar14 + 0x19) =
           *(ushort *)((long)puVar8 + lVar14 + 0x19) & 0xf000 | 0x540;
      goto LAB_00152998;
    }
    if ((pbVar15 == pbVar11) || (1 < *pbVar11 - 0x43)) goto LAB_00152988;
    if (param_3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (local_68 != 0) {
      return (undefined8 *)0x0;
    }
    if (*(char *)(param_3 + 1) == '0') {
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar7 = pvVar19;
      if (lVar14 - 0xfe0U < 0xfffffffffffff010) {
        puVar7 = malloc(0x1000);
        if (puVar7 == (void *)0x0) goto LAB_00152d58;
        lVar14 = 0;
        *puVar7 = pvVar19;
        puVar7[1] = 0;
        param_1[0x266] = (long)puVar7;
      }
      *(long *)((long)puVar7 + 8) = lVar14 + 0x10;
      puVar7 = (undefined8 *)(lVar14 + 0x10 + (long)puVar7);
      uVar3 = *(undefined4 *)((long)param_3 + 0xc);
      *(undefined1 *)(puVar7 + 1) = 0x2f;
      *puVar7 = &PTR_FUN_00172ba0;
      *(undefined4 *)((long)puVar7 + 0xc) = uVar3;
      *(ushort *)((long)puVar7 + 9) = *(ushort *)((long)puVar7 + 9) & 0xf000 | 0x540;
      pbVar11 = (byte *)*param_1;
      pbVar15 = (byte *)param_1[1];
      local_60 = puVar7;
    }
    if (pbVar11 != pbVar15) {
      if (*pbVar11 == 0x43) {
        pbVar18 = pbVar11 + 1;
        *param_1 = (long)pbVar18;
        if (pbVar18 == pbVar15) {
          bVar10 = false;
          pbVar18 = pbVar15;
        }
        else if (*pbVar18 == 0x49) {
          bVar10 = true;
          *param_1 = (long)(pbVar11 + 2);
          pbVar18 = pbVar11 + 2;
        }
        else {
          bVar10 = false;
        }
        if ((pbVar15 == pbVar18) || (4 < *pbVar18 - 0x31)) goto LAB_001527e0;
        local_54 = *pbVar18 - 0x30;
        *param_1 = (long)(pbVar18 + 1);
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
        if ((bVar10) && (lVar14 = FUN_0014f6a0(param_1,param_2), lVar14 == 0)) {
          puVar6 = (undefined8 *)0x0;
          goto LAB_00152998;
        }
        local_58[0] = 0;
      }
      else {
        if ((ulong)((long)pbVar15 - (long)pbVar11) < 2) {
          return (undefined8 *)0x0;
        }
        if (*pbVar11 != 0x44) {
          return (undefined8 *)0x0;
        }
        bVar4 = pbVar11[1];
        if (0x35 < bVar4) {
          return (undefined8 *)0x0;
        }
        if ((1L << ((ulong)bVar4 & 0x3f) & 0x37000000000000U) == 0) {
          return (undefined8 *)0x0;
        }
        local_54 = bVar4 - 0x30;
        *param_1 = (long)(pbVar11 + 2);
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
        local_58[0] = 1;
      }
      puVar6 = (undefined8 *)FUN_0015ff98(param_1,&local_60,local_58,&local_54);
      goto LAB_00152998;
    }
LAB_001527e0:
    puVar6 = (undefined8 *)0x0;
  }
  else {
    if (pbVar11 != pbVar15) {
      if (*pbVar11 != 0x46) goto LAB_0015281c;
      bVar1 = false;
      pbVar11 = pbVar11 + 1;
      *param_1 = (long)pbVar11;
      goto joined_r0x00152824;
    }
    bVar1 = true;
LAB_00152988:
    puVar6 = (undefined8 *)FUN_0015eff0(param_1,param_2);
LAB_00152998:
    lVar14 = local_68;
    if ((puVar6 == (undefined8 *)0x0) || (local_68 == 0)) {
      if (puVar6 == (undefined8 *)0x0) goto LAB_001527e0;
    }
    else {
      pvVar19 = (void *)param_1[0x266];
      lVar12 = *(long *)((long)pvVar19 + 8);
      puVar8 = pvVar19;
      if (lVar12 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) goto LAB_00152d58;
        lVar12 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar12 + 0x20;
      puVar13 = (undefined8 *)((long)puVar8 + lVar12 + 0x10);
      *puVar13 = &PTR_FUN_00172d48;
      *(long *)((long)puVar8 + lVar12 + 0x20) = lVar14;
      *(undefined8 **)((long)puVar8 + lVar12 + 0x28) = puVar6;
      *(undefined1 *)((long)puVar8 + lVar12 + 0x18) = 0x1c;
      *(ushort *)((long)puVar8 + lVar12 + 0x19) =
           *(ushort *)((long)puVar8 + lVar12 + 0x19) & 0xf000 | 0x540;
      puVar6 = puVar13;
    }
    puVar8 = (undefined8 *)FUN_0015f6bc(param_1,puVar6);
    if (puVar8 == (undefined8 *)0x0) {
      bVar1 = true;
    }
    if (bVar1) {
      if (puVar7 == (undefined8 *)0x0) {
        return puVar8;
      }
      if (puVar8 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar6 = pvVar19;
      if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) {
LAB_00152d58:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar14 = 0;
        *puVar6 = pvVar19;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      lVar12 = (long)puVar6 + lVar14;
      uVar17 = 0x18;
      *(long *)((long)puVar6 + 8) = lVar14 + 0x20;
      ppuVar16 = &PTR_FUN_00172e28;
    }
    else {
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar6 = pvVar19;
      if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_00152d58;
        lVar14 = 0;
        *puVar6 = pvVar19;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      lVar12 = (long)puVar6 + lVar14;
      uVar17 = 0x19;
      *(long *)((long)puVar6 + 8) = lVar14 + 0x20;
      ppuVar16 = &PTR_FUN_00172db8;
    }
    puVar6 = (undefined8 *)(lVar12 + 0x10);
    *puVar6 = ppuVar16;
    *(undefined8 **)(lVar12 + 0x20) = puVar7;
    *(undefined8 **)(lVar12 + 0x28) = puVar8;
    *(undefined1 *)(lVar12 + 0x18) = uVar17;
    *(ushort *)(lVar12 + 0x19) = *(ushort *)(lVar12 + 0x19) & 0xf000 | 0x540;
  }
  return puVar6;
}


