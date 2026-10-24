// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d3028; body: [[001d3028, 001d335f]]

undefined8 * FUN_001d3028(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined1 uVar10;
  byte *pbVar11;
  size_t __n;
  long *__ptr;
  long *plVar12;
  undefined1 auVar13 [16];
  
  pbVar7 = (byte *)*param_1;
  pbVar11 = (byte *)param_1[1];
  if (pbVar11 == pbVar7) {
    uVar6 = 0xffffffb6;
  }
  else {
    uVar6 = *pbVar7 - 0x4a;
  }
  uVar6 = uVar6 >> 1 | uVar6 << 0x1f;
  if ((int)uVar6 < 5) {
    if (uVar6 == 0) {
      lVar8 = param_1[2];
      lVar5 = param_1[3];
      pbVar7 = pbVar7 + 1;
      *param_1 = (long)pbVar7;
      while ((pbVar7 == pbVar11 || (*pbVar7 != 0x45))) {
        lVar2 = FUN_001d3028(param_1);
        if (lVar2 == 0) {
          return (undefined8 *)0x0;
        }
        plVar12 = (long *)param_1[3];
        if (plVar12 == (long *)param_1[4]) {
          __ptr = (long *)param_1[2];
          __n = (long)plVar12 - (long)__ptr;
          if (__ptr == param_1 + 5) {
            pvVar3 = malloc(__n * 2);
            if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar12 != param_1 + 5) {
              memmove(pvVar3,__ptr,__n);
            }
            param_1[2] = (long)pvVar3;
          }
          else {
            pvVar3 = realloc(__ptr,__n * 2);
            param_1[2] = (long)pvVar3;
            if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar12 = (long *)((long)pvVar3 + __n);
          param_1[4] = (long)((long)pvVar3 + ((long)__n >> 2) * 8);
        }
        pbVar7 = (byte *)*param_1;
        pbVar11 = (byte *)param_1[1];
        *plVar12 = lVar2;
        param_1[3] = (long)(plVar12 + 1);
      }
      *param_1 = (long)(pbVar7 + 1);
      auVar13 = FUN_001d34d4(param_1,lVar5 - lVar8 >> 3);
      pvVar3 = (void *)param_1[0x266];
      lVar8 = *(long *)((long)pvVar3 + 8);
      puVar1 = pvVar3;
      if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
        puVar1 = malloc(0x1000);
        if (puVar1 == (void *)0x0) {
LAB_001d335c:
                    /* WARNING: Subroutine does not return */
          FUN_001cee20();
        }
        lVar8 = 0;
        *puVar1 = pvVar3;
        puVar1[1] = 0;
        param_1[0x266] = (long)puVar1;
      }
      lVar5 = (long)puVar1 + lVar8;
      ppuVar9 = &PTR_FUN_001f5d88;
      *(long *)((long)puVar1 + 8) = lVar8 + 0x20;
      uVar10 = 0x29;
LAB_001d3260:
      *(undefined8 *)(lVar5 + 0x10) = ppuVar9;
      *(undefined1 *)(lVar5 + 0x18) = uVar10;
      *(undefined1 (*) [16])(lVar5 + 0x20) = auVar13;
      *(ushort *)(lVar5 + 0x19) = *(ushort *)(lVar5 + 0x19) & 0xf000 | 0x540;
      return (undefined8 *)(lVar5 + 0x10);
    }
    if (uVar6 == 1) {
      if (((ulong)((long)pbVar11 - (long)pbVar7) < 2) || (pbVar7[1] != 0x5a)) {
        puVar1 = (undefined8 *)FUN_001d7e24(param_1);
        return puVar1;
      }
      *param_1 = (long)(pbVar7 + 2);
      puVar1 = (undefined8 *)FUN_001d03cc(param_1);
joined_r0x001d30c8:
      if (puVar1 != (undefined8 *)0x0) {
        pcVar4 = (char *)*param_1;
        if ((pcVar4 == (char *)param_1[1]) || (*pcVar4 != 'E')) {
          puVar1 = (undefined8 *)0x0;
        }
        else {
          *param_1 = (long)(pcVar4 + 1);
        }
      }
      return puVar1;
    }
  }
  else if (uVar6 == 5) {
    if ((pbVar11 != pbVar7) && (*pbVar7 == 0x54)) {
      if ((ulong)((long)pbVar11 - (long)pbVar7) < 2) {
        uVar6 = 0;
      }
      else {
        uVar6 = (uint)pbVar7[1];
      }
      pcVar4 = memchr("yptnk",uVar6,5);
      if ((pcVar4 != (char *)0x0) && (pcVar4 != "")) {
        lVar8 = FUN_001de15c(param_1,0);
        if (lVar8 == 0) {
          return (undefined8 *)0x0;
        }
        lVar5 = FUN_001d3028(param_1);
        auVar13._8_8_ = lVar5;
        auVar13._0_8_ = lVar8;
        if (lVar5 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar3 = (void *)param_1[0x266];
        lVar8 = *(long *)((long)pvVar3 + 8);
        puVar1 = pvVar3;
        if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
          puVar1 = malloc(0x1000);
          if (puVar1 == (void *)0x0) goto LAB_001d335c;
          lVar8 = 0;
          *puVar1 = pvVar3;
          puVar1[1] = 0;
          param_1[0x266] = (long)puVar1;
        }
        lVar5 = (long)puVar1 + lVar8;
        ppuVar9 = &PTR_FUN_001f5e00;
        *(long *)((long)puVar1 + 8) = lVar8 + 0x20;
        uVar10 = 0x22;
        goto LAB_001d3260;
      }
    }
  }
  else if (uVar6 == 7) {
    *param_1 = (long)(pbVar7 + 1);
    puVar1 = (undefined8 *)FUN_001d642c(param_1);
    goto joined_r0x001d30c8;
  }
  puVar1 = (undefined8 *)FUN_001d0f90(param_1);
  return puVar1;
}


