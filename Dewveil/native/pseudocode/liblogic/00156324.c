// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00156324; body: [[00156324, 00156677]]

undefined8 * FUN_00156324(long *param_1)

{
  long *__src;
  long lVar1;
  long lVar2;
  long lVar3;
  long *__ptr;
  undefined8 *puVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  undefined1 uVar13;
  byte *pbVar14;
  size_t __n;
  long lVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  
  lVar2 = FUN_0014e160();
  if ((lVar2 != 0) && (lVar3 = FUN_00153210(param_1), lVar3 != 0)) {
    pbVar16 = (byte *)*param_1;
    pbVar5 = (byte *)param_1[1];
    pbVar14 = pbVar16;
    if ((pbVar16 != pbVar5) && (*pbVar16 == 0x6e)) {
      pbVar14 = pbVar16 + 1;
      *param_1 = (long)pbVar14;
    }
    if (pbVar5 != pbVar14) {
      if (*pbVar14 - 0x3a < 0xfffffff6) {
        pbVar16 = (byte *)0x0;
        lVar10 = 0;
      }
      else {
        do {
          pbVar8 = pbVar14;
          if (*pbVar14 - 0x3a < 0xfffffff6) break;
          pbVar14 = pbVar14 + 1;
          *param_1 = (long)pbVar14;
          pbVar8 = pbVar5;
        } while (pbVar14 != pbVar5);
        lVar10 = (long)pbVar8 - (long)pbVar16;
        pbVar14 = pbVar8;
      }
      if (pbVar14 != pbVar5) {
        lVar7 = param_1[2];
        lVar1 = param_1[3];
        __src = param_1 + 5;
        do {
          if (*pbVar14 != 0x5f) {
            if ((pbVar14 == pbVar5) || (*pbVar14 != 0x70)) {
              uVar13 = 0;
            }
            else {
              pbVar14 = pbVar14 + 1;
              uVar13 = 1;
              *param_1 = (long)pbVar14;
            }
            if (pbVar14 == pbVar5) {
              return (undefined8 *)0x0;
            }
            if (*pbVar14 != 0x45) {
              return (undefined8 *)0x0;
            }
            *param_1 = (long)(pbVar14 + 1);
            auVar18 = FUN_00150274(param_1,lVar1 - lVar7 >> 3);
            pvVar12 = (void *)param_1[0x266];
            lVar7 = *(long *)((long)pvVar12 + 8);
            puVar4 = pvVar12;
            if (lVar7 - 4000U < 0xfffffffffffff010) {
              puVar4 = malloc(0x1000);
              if (puVar4 == (void *)0x0) goto LAB_0015666c;
              lVar7 = 0;
              *puVar4 = pvVar12;
              puVar4[1] = 0;
              param_1[0x266] = (long)puVar4;
            }
            *(long *)((long)puVar4 + 8) = lVar7 + 0x50;
            puVar17 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
            *puVar17 = &PTR_FUN_00172728;
            *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 0x3b;
            *(undefined1 (*) [16])((long)puVar4 + lVar7 + 0x40) = auVar18;
            *(undefined1 *)((long)puVar4 + lVar7 + 0x50) = uVar13;
            *(ushort *)((long)puVar4 + lVar7 + 0x19) =
                 *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0x540;
            *(long *)((long)puVar4 + lVar7 + 0x20) = lVar2;
            *(long *)((long)puVar4 + lVar7 + 0x28) = lVar3;
            *(byte **)((long)puVar4 + lVar7 + 0x30) = pbVar16;
            *(long *)((long)puVar4 + lVar7 + 0x38) = lVar10;
            return puVar17;
          }
          pbVar14 = pbVar14 + 1;
          *param_1 = (long)pbVar14;
          if ((pbVar5 == pbVar14) || (pbVar8 = pbVar14, *pbVar14 - 0x3a < 0xfffffff6)) {
            pbVar14 = (byte *)0x0;
            lVar15 = 0;
          }
          else {
            do {
              pbVar9 = pbVar8;
              if (*pbVar8 - 0x3a < 0xfffffff6) break;
              pbVar8 = pbVar8 + 1;
              *param_1 = (long)pbVar8;
              pbVar9 = pbVar5;
            } while (pbVar8 != pbVar5);
            lVar15 = (long)pbVar9 - (long)pbVar14;
          }
          pvVar12 = (void *)param_1[0x266];
          lVar6 = *(long *)((long)pvVar12 + 8);
          puVar4 = pvVar12;
          if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
            puVar4 = malloc(0x1000);
            if (puVar4 == (void *)0x0) {
LAB_0015666c:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar6 = 0;
            *puVar4 = pvVar12;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          *(long *)((long)puVar4 + 8) = lVar6 + 0x20;
          puVar17 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
          *puVar17 = &PTR_FUN_001710e8;
          *(byte **)((long)puVar4 + lVar6 + 0x20) = pbVar14;
          *(undefined1 *)((long)puVar4 + lVar6 + 0x18) = 8;
          *(long *)((long)puVar4 + lVar6 + 0x28) = lVar15;
          *(ushort *)((long)puVar4 + lVar6 + 0x19) =
               *(ushort *)((long)puVar4 + lVar6 + 0x19) & 0xf000 | 0x540;
          plVar11 = (long *)param_1[3];
          if (plVar11 == (long *)param_1[4]) {
            __ptr = (long *)param_1[2];
            __n = (long)plVar11 - (long)__ptr;
            if (__ptr == __src) {
              pvVar12 = malloc(__n * 2);
              if (pvVar12 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar11 != __src) {
                memcpy(pvVar12,__src,__n);
              }
              param_1[2] = (long)pvVar12;
            }
            else {
              pvVar12 = realloc(__ptr,__n * 2);
              param_1[2] = (long)pvVar12;
              if (pvVar12 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            plVar11 = (long *)((long)pvVar12 + __n);
            param_1[4] = (long)((long)pvVar12 + ((long)__n >> 2) * 8);
          }
          param_1[3] = (long)(plVar11 + 1);
          *plVar11 = (long)puVar17;
          pbVar14 = (byte *)*param_1;
          pbVar5 = (byte *)param_1[1];
        } while (pbVar14 != pbVar5);
      }
    }
  }
  return (undefined8 *)0x0;
}


