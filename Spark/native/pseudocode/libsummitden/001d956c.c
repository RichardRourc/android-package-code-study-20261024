// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d956c; body: [[001d956c, 001d98c3]]

undefined8 * FUN_001d956c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  void *pvVar11;
  byte *pbVar12;
  size_t __n;
  long lVar13;
  long *__src;
  undefined1 uVar14;
  long *plVar15;
  byte *pbVar16;
  long lVar17;
  undefined1 auVar18 [16];
  
  lVar2 = FUN_001d0f90();
  if ((lVar2 != 0) && (lVar3 = FUN_001d642c(param_1), lVar3 != 0)) {
    pbVar16 = (byte *)*param_1;
    pbVar5 = (byte *)param_1[1];
    pbVar12 = pbVar16;
    if ((pbVar16 != pbVar5) && (*pbVar16 == 0x6e)) {
      pbVar12 = pbVar16 + 1;
      *param_1 = (long)pbVar12;
    }
    if ((pbVar5 == pbVar12) || (*pbVar12 - 0x3a < 0xfffffff6)) {
      pbVar16 = (byte *)0x0;
      lVar17 = 0;
    }
    else {
      do {
        pbVar8 = pbVar12;
        if (*pbVar12 - 0x3a < 0xfffffff6) break;
        pbVar12 = pbVar12 + 1;
        *param_1 = (long)pbVar12;
        pbVar8 = pbVar5;
      } while (pbVar12 != pbVar5);
      lVar17 = (long)pbVar8 - (long)pbVar16;
    }
    lVar7 = param_1[2];
    lVar1 = param_1[3];
    if (pbVar12 == pbVar5) {
LAB_001d97ac:
      if ((pbVar12 == pbVar5) || (*pbVar12 != 0x70)) {
        uVar14 = 0;
      }
      else {
        pbVar12 = pbVar12 + 1;
        uVar14 = 1;
        *param_1 = (long)pbVar12;
      }
      if ((pbVar12 != pbVar5) && (*pbVar12 == 0x45)) {
        *param_1 = (long)(pbVar12 + 1);
        auVar18 = FUN_001d34d4(param_1,lVar1 - lVar7 >> 3);
        pvVar11 = (void *)param_1[0x266];
        lVar7 = *(long *)((long)pvVar11 + 8);
        puVar4 = pvVar11;
        if (lVar7 - 4000U < 0xfffffffffffff010) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) {
LAB_001d98b8:
                    /* WARNING: Subroutine does not return */
            FUN_001cee20();
          }
          lVar7 = 0;
          *puVar4 = pvVar11;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar7 + 0x50;
        puVar10 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
        *puVar10 = &PTR_FUN_001f53b0;
        *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 0x3b;
        *(byte **)((long)puVar4 + lVar7 + 0x30) = pbVar16;
        *(long *)((long)puVar4 + lVar7 + 0x38) = lVar17;
        *(long *)((long)puVar4 + lVar7 + 0x20) = lVar2;
        *(long *)((long)puVar4 + lVar7 + 0x28) = lVar3;
        *(ushort *)((long)puVar4 + lVar7 + 0x19) =
             *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0x540;
        *(undefined1 (*) [16])((long)puVar4 + lVar7 + 0x40) = auVar18;
        *(undefined1 *)((long)puVar4 + lVar7 + 0x50) = uVar14;
        return puVar10;
      }
    }
    else {
      do {
        if (*pbVar12 != 0x5f) goto LAB_001d97ac;
        pbVar12 = pbVar12 + 1;
        *param_1 = (long)pbVar12;
        if ((pbVar5 == pbVar12) || (pbVar8 = pbVar12, *pbVar12 - 0x3a < 0xfffffff6)) {
          pbVar12 = (byte *)0x0;
          lVar13 = 0;
        }
        else {
          do {
            pbVar9 = pbVar8;
            if (*pbVar8 - 0x3a < 0xfffffff6) break;
            pbVar8 = pbVar8 + 1;
            *param_1 = (long)pbVar8;
            pbVar9 = pbVar5;
          } while (pbVar8 != pbVar5);
          lVar13 = (long)pbVar9 - (long)pbVar12;
        }
        pvVar11 = (void *)param_1[0x266];
        lVar6 = *(long *)((long)pvVar11 + 8);
        puVar4 = pvVar11;
        if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_001d98b8;
          lVar6 = 0;
          *puVar4 = pvVar11;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar6 + 0x20;
        puVar10 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
        *puVar10 = &PTR_FUN_001f3c10;
        *(undefined1 *)((long)puVar4 + lVar6 + 0x18) = 8;
        *(byte **)((long)puVar4 + lVar6 + 0x20) = pbVar12;
        *(long *)((long)puVar4 + lVar6 + 0x28) = lVar13;
        *(ushort *)((long)puVar4 + lVar6 + 0x19) =
             *(ushort *)((long)puVar4 + lVar6 + 0x19) & 0xf000 | 0x540;
        plVar15 = (long *)param_1[3];
        if (plVar15 == (long *)param_1[4]) {
          __src = (long *)param_1[2];
          __n = (long)plVar15 - (long)__src;
          if (__src == param_1 + 5) {
            pvVar11 = malloc(__n * 2);
            if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar15 != param_1 + 5) {
              memmove(pvVar11,__src,__n);
            }
            param_1[2] = (long)pvVar11;
          }
          else {
            pvVar11 = realloc(__src,__n * 2);
            param_1[2] = (long)pvVar11;
            if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar15 = (long *)((long)pvVar11 + __n);
          param_1[4] = (long)((long)pvVar11 + ((long)__n >> 2) * 8);
        }
        pbVar12 = (byte *)*param_1;
        pbVar5 = (byte *)param_1[1];
        *plVar15 = (long)puVar10;
        param_1[3] = (long)(plVar15 + 1);
      } while (pbVar12 != pbVar5);
    }
  }
  return (undefined8 *)0x0;
}


