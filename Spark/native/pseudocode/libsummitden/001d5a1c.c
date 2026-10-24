// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d5a1c; body: [[001d5a1c, 001d5f7f]]

undefined8 * FUN_001d5a1c(long *param_1,undefined1 *param_2,long param_3,long param_4)

{
  bool bVar1;
  char *pcVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  bool bVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  byte *pbVar13;
  undefined **ppuVar14;
  undefined1 uVar15;
  byte *pbVar16;
  void *pvVar17;
  size_t __n;
  long *__src;
  long *plVar18;
  undefined1 auVar19 [16];
  long local_78;
  long local_70;
  undefined1 local_64 [4];
  long local_48;
  
  local_78 = param_4;
  local_70 = param_3;
  uVar4 = FUN_001d4184(param_1,&local_78);
  if ((uVar4 & 1) != 0) {
    return (undefined8 *)0x0;
  }
  pbVar9 = (byte *)*param_1;
  pbVar13 = (byte *)param_1[1];
  if (param_3 == 0) {
LAB_001d5a98:
    bVar1 = true;
joined_r0x001d5aa0:
    if ((pbVar9 != pbVar13) && (*pbVar9 == 0x4c)) {
      pbVar9 = pbVar9 + 1;
      *param_1 = (long)pbVar9;
    }
    if (pbVar13 == pbVar9) goto LAB_001d5ba0;
    bVar3 = *pbVar9;
    if (bVar3 < 0x31) {
LAB_001d5b00:
      if (((ulong)((long)pbVar13 - (long)pbVar9) < 2) || (*(short *)pbVar9 != 0x4344)) {
        if (1 < *pbVar9 - 0x43) goto LAB_001d5ba0;
        if (param_3 == 0) {
          return (undefined8 *)0x0;
        }
        if (local_78 != 0) {
          return (undefined8 *)0x0;
        }
        if (*(char *)(param_3 + 8) == '0') {
          local_48 = param_3;
          param_3 = FUN_001e352c(param_1,&local_48);
          pbVar9 = (byte *)*param_1;
          pbVar13 = (byte *)param_1[1];
          local_70 = param_3;
        }
        if (pbVar9 == pbVar13) {
          return (undefined8 *)0x0;
        }
        if (*pbVar9 == 0x43) {
          pbVar16 = pbVar9 + 1;
          *param_1 = (long)pbVar16;
          if ((pbVar16 == pbVar13) || (*pbVar16 != 0x49)) {
            bVar8 = false;
          }
          else {
            pbVar16 = pbVar9 + 2;
            bVar8 = true;
            *param_1 = (long)pbVar16;
          }
          if (pbVar13 == pbVar16) {
            return (undefined8 *)0x0;
          }
          if (4 < *pbVar16 - 0x31) {
            return (undefined8 *)0x0;
          }
          local_48 = CONCAT44(local_48._4_4_,*pbVar16 - 0x30);
          *param_1 = (long)(pbVar16 + 1);
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = 1;
          }
          if ((bVar8) && (lVar12 = FUN_001d2908(param_1,param_2), lVar12 == 0)) {
            puVar5 = (undefined8 *)0x0;
            goto LAB_001d5bb0;
          }
          local_64[0] = 0;
        }
        else {
          if ((ulong)((long)pbVar13 - (long)pbVar9) < 2) {
            return (undefined8 *)0x0;
          }
          if (*pbVar9 != 0x44) {
            return (undefined8 *)0x0;
          }
          bVar3 = pbVar9[1];
          if (0x35 < bVar3) {
            return (undefined8 *)0x0;
          }
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x37000000000000U) == 0) {
            return (undefined8 *)0x0;
          }
          local_48 = CONCAT44(local_48._4_4_,bVar3 - 0x30);
          *param_1 = (long)(pbVar9 + 2);
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = 1;
          }
          local_64[0] = 1;
        }
        puVar5 = (undefined8 *)FUN_001e35d0(param_1,&local_70,local_64,&local_48);
      }
      else {
        lVar12 = param_1[2];
        lVar10 = param_1[3];
        *param_1 = (long)(pbVar9 + 2);
        lVar7 = FUN_001d4604(param_1);
        if (lVar7 == 0) {
          return (undefined8 *)0x0;
        }
        while( true ) {
          plVar18 = (long *)param_1[3];
          if (plVar18 == (long *)param_1[4]) {
            __src = (long *)param_1[2];
            __n = (long)plVar18 - (long)__src;
            if (__src == param_1 + 5) {
              pvVar17 = malloc(__n * 2);
              if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar18 != param_1 + 5) {
                memmove(pvVar17,__src,__n);
              }
              param_1[2] = (long)pvVar17;
            }
            else {
              pvVar17 = realloc(__src,__n * 2);
              param_1[2] = (long)pvVar17;
              if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            plVar18 = (long *)((long)pvVar17 + __n);
            param_1[4] = (long)((long)pvVar17 + ((long)__n >> 2) * 8);
          }
          *plVar18 = lVar7;
          pcVar2 = (char *)*param_1;
          param_1[3] = (long)(plVar18 + 1);
          if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'E')) break;
          lVar7 = FUN_001d4604(param_1);
          if (lVar7 == 0) {
            return (undefined8 *)0x0;
          }
        }
        *param_1 = (long)(pcVar2 + 1);
        auVar19 = FUN_001d34d4(param_1,lVar10 - lVar12 >> 3);
        pvVar17 = (void *)param_1[0x266];
        lVar12 = *(long *)((long)pvVar17 + 8);
        puVar6 = pvVar17;
        if (lVar12 - 0xfd0U < 0xfffffffffffff010) {
          puVar6 = malloc(0x1000);
          if (puVar6 == (void *)0x0) goto LAB_001d5f74;
          lVar12 = 0;
          *puVar6 = pvVar17;
          puVar6[1] = 0;
          param_1[0x266] = (long)puVar6;
        }
        *(long *)((long)puVar6 + 8) = lVar12 + 0x20;
        puVar5 = (undefined8 *)((long)puVar6 + lVar12 + 0x10);
        *puVar5 = &PTR_FUN_001f5950;
        *(undefined1 (*) [16])((long)puVar6 + lVar12 + 0x20) = auVar19;
        *(undefined1 *)((long)puVar6 + lVar12 + 0x18) = 0x35;
        *(ushort *)((long)puVar6 + lVar12 + 0x19) =
             *(ushort *)((long)puVar6 + lVar12 + 0x19) & 0xf000 | 0x540;
      }
    }
    else if (bVar3 < 0x3a) {
      puVar5 = (undefined8 *)FUN_001d4604(param_1);
    }
    else {
      if (bVar3 != 0x55) goto LAB_001d5b00;
      puVar5 = (undefined8 *)FUN_001dccc0(param_1,param_2);
    }
  }
  else {
    if (pbVar9 != pbVar13) {
      if (*pbVar9 != 0x46) goto LAB_001d5a98;
      bVar1 = false;
      pbVar9 = pbVar9 + 1;
      *param_1 = (long)pbVar9;
      goto joined_r0x001d5aa0;
    }
    bVar1 = true;
LAB_001d5ba0:
    puVar5 = (undefined8 *)FUN_001e2588(param_1,param_2);
  }
LAB_001d5bb0:
  lVar12 = local_78;
  if ((puVar5 == (undefined8 *)0x0) || (local_78 == 0)) {
    if (puVar5 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  else {
    pvVar17 = (void *)param_1[0x266];
    lVar10 = *(long *)((long)pvVar17 + 8);
    puVar6 = pvVar17;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar6 = malloc(0x1000);
      if (puVar6 == (void *)0x0) goto LAB_001d5f74;
      lVar10 = 0;
      *puVar6 = pvVar17;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
    }
    *(long *)((long)puVar6 + 8) = lVar10 + 0x20;
    puVar11 = (undefined8 *)((long)puVar6 + lVar10 + 0x10);
    *puVar11 = &PTR_FUN_001f5a40;
    *(long *)((long)puVar6 + lVar10 + 0x20) = lVar12;
    *(undefined8 **)((long)puVar6 + lVar10 + 0x28) = puVar5;
    *(undefined1 *)((long)puVar6 + lVar10 + 0x18) = 0x1c;
    *(ushort *)((long)puVar6 + lVar10 + 0x19) =
         *(ushort *)((long)puVar6 + lVar10 + 0x19) & 0xf000 | 0x540;
    puVar5 = puVar11;
  }
  puVar5 = (undefined8 *)FUN_001e2c58(param_1,puVar5);
  if (puVar5 == (undefined8 *)0x0) {
    bVar1 = true;
  }
  if (bVar1) {
    if (param_3 == 0) {
      return puVar5;
    }
    if (puVar5 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar6 = (undefined8 *)param_1[0x266];
    lVar12 = puVar6[1];
    if (0xfffffffffffff00f < lVar12 - 0xfd0U) {
      ppuVar14 = &PTR_FUN_001f5b30;
      uVar15 = 0x18;
      goto LAB_001d5cf0;
    }
    puVar11 = malloc(0x1000);
    if (puVar11 == (void *)0x0) {
LAB_001d5f74:
                    /* WARNING: Subroutine does not return */
      FUN_001cee20();
    }
    ppuVar14 = &PTR_FUN_001f5b30;
    uVar15 = 0x18;
    *puVar11 = puVar6;
    puVar11[1] = 0;
  }
  else {
    puVar6 = (undefined8 *)param_1[0x266];
    lVar12 = puVar6[1];
    if (0xfffffffffffff00f < lVar12 - 0xfd0U) {
      ppuVar14 = &PTR_FUN_001f5ab8;
      uVar15 = 0x19;
      goto LAB_001d5cf0;
    }
    puVar11 = malloc(0x1000);
    if (puVar11 == (undefined8 *)0x0) goto LAB_001d5f74;
    *puVar11 = puVar6;
    puVar11[1] = 0;
    ppuVar14 = &PTR_FUN_001f5ab8;
    uVar15 = 0x19;
  }
  lVar12 = 0;
  param_1[0x266] = (long)puVar11;
  puVar6 = puVar11;
LAB_001d5cf0:
  puVar6[1] = lVar12 + 0x20;
  puVar11 = (undefined8 *)((long)puVar6 + lVar12 + 0x10);
  *puVar11 = ppuVar14;
  *(long *)((long)puVar6 + lVar12 + 0x20) = param_3;
  *(undefined8 **)((long)puVar6 + lVar12 + 0x28) = puVar5;
  *(undefined1 *)((long)puVar6 + lVar12 + 0x18) = uVar15;
  *(ushort *)((long)puVar6 + lVar12 + 0x19) =
       *(ushort *)((long)puVar6 + lVar12 + 0x19) & 0xf000 | 0x540;
  return puVar11;
}


