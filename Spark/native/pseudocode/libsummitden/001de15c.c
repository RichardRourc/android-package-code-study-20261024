// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001de15c; body: [[001de15c, 001dea77]]

undefined8 * FUN_001de15c(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ushort uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  undefined1 uVar10;
  char *pcVar11;
  size_t sVar12;
  long *plVar13;
  void *pvVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined1 auVar17 [16];
  long *local_c8;
  ulong uStack_c0;
  undefined8 *local_b8;
  undefined8 *puStack_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  psVar1 = (short *)*param_1;
  if ((ulong)(param_1[1] - (long)psVar1) < 2) {
LAB_001de190:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if (*psVar1 == 0x7954) {
      lVar9 = param_1[99];
      pvVar14 = (void *)param_1[0x266];
      *param_1 = (long)(psVar1 + 1);
      *(int *)(param_1 + 99) = (int)lVar9 + 1;
      lVar7 = *(long *)((long)pvVar14 + 8);
      puVar4 = pvVar14;
      if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_001dea38;
        lVar7 = 0;
        *puVar4 = pvVar14;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
      puVar16 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
      *puVar16 = &PTR_FUN_001f4a50;
      *(undefined4 *)((long)puVar4 + lVar7 + 0x1c) = 0;
      *(int *)((long)puVar4 + lVar7 + 0x20) = (int)lVar9;
      *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 0x21;
      *(ushort *)((long)puVar4 + lVar7 + 0x19) =
           *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0x540;
      if (param_2 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)param_2[1];
        if (puVar4 == (undefined8 *)param_2[2]) {
          puVar3 = (undefined8 *)*param_2;
          sVar12 = (long)puVar4 - (long)puVar3;
          if (puVar3 == param_2 + 3) {
            pvVar14 = malloc(sVar12 * 2);
            if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (puVar4 != puVar3) {
              memmove(pvVar14,puVar3,sVar12);
            }
            *param_2 = pvVar14;
          }
          else {
            pvVar14 = realloc(puVar3,sVar12 * 2);
            *param_2 = pvVar14;
            if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          puVar4 = (undefined8 *)((long)pvVar14 + sVar12);
          param_2[2] = (void *)((long)pvVar14 + ((long)sVar12 >> 2) * 8);
        }
        *puVar4 = puVar16;
        param_2[1] = puVar4 + 1;
      }
      pvVar14 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar14 + 8);
      puVar4 = pvVar14;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) {
LAB_001dea38:
                    /* WARNING: Subroutine does not return */
          FUN_001cee20();
        }
        lVar9 = 0;
        *puVar4 = pvVar14;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
      puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
      *puVar3 = &PTR_FUN_001f4ac8;
      uVar6 = *(ushort *)((long)puVar4 + lVar9 + 0x19);
      uVar10 = 0x23;
      *(undefined8 **)((long)puVar4 + lVar9 + 0x20) = puVar16;
    }
    else {
      if (*psVar1 == 0x6b54) {
        uVar10 = *(undefined1 *)((long)param_1 + 0x30a);
        *param_1 = (long)(psVar1 + 1);
        *(undefined1 *)((long)param_1 + 0x30a) = 1;
        lVar9 = FUN_001d2908(param_1,0);
        if (lVar9 == 0) {
          *(undefined1 *)((long)param_1 + 0x30a) = uVar10;
          return (undefined8 *)0x0;
        }
        lVar7 = param_1[99];
        pvVar14 = (void *)param_1[0x266];
        *(int *)(param_1 + 99) = (int)lVar7 + 1;
        lVar5 = *(long *)((long)pvVar14 + 8);
        puVar4 = pvVar14;
        if (lVar5 - 0xfd0U < 0xfffffffffffff010) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_001dea38;
          lVar5 = 0;
          *puVar4 = pvVar14;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar5 + 0x20;
        puVar16 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
        *puVar16 = &PTR_FUN_001f4a50;
        *(undefined4 *)((long)puVar4 + lVar5 + 0x1c) = 0;
        *(int *)((long)puVar4 + lVar5 + 0x20) = (int)lVar7;
        *(undefined1 *)((long)puVar4 + lVar5 + 0x18) = 0x21;
        *(ushort *)((long)puVar4 + lVar5 + 0x19) =
             *(ushort *)((long)puVar4 + lVar5 + 0x19) & 0xf000 | 0x540;
        if (param_2 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)param_2[1];
          if (puVar4 == (undefined8 *)param_2[2]) {
            puVar3 = (undefined8 *)*param_2;
            sVar12 = (long)puVar4 - (long)puVar3;
            if (puVar3 == param_2 + 3) {
              pvVar14 = malloc(sVar12 * 2);
              if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (puVar4 != param_2 + 3) {
                memmove(pvVar14,puVar3,sVar12);
              }
              *param_2 = pvVar14;
            }
            else {
              pvVar14 = realloc(puVar3,sVar12 * 2);
              *param_2 = pvVar14;
              if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            puVar4 = (undefined8 *)((long)pvVar14 + sVar12);
            param_2[2] = (void *)((long)pvVar14 + ((long)sVar12 >> 2) * 8);
          }
          *puVar4 = puVar16;
          param_2[1] = puVar4 + 1;
        }
        pvVar14 = (void *)param_1[0x266];
        lVar7 = *(long *)((long)pvVar14 + 8);
        puVar4 = pvVar14;
        if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_001dea38;
          lVar7 = 0;
          *puVar4 = pvVar14;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
        puVar3 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
        *puVar3 = &PTR_FUN_001f4b40;
        *(long *)((long)puVar4 + lVar7 + 0x20) = lVar9;
        *(undefined8 **)((long)puVar4 + lVar7 + 0x28) = puVar16;
        *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 0x24;
        *(ushort *)((long)puVar4 + lVar7 + 0x19) =
             *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0x500;
        *(undefined1 *)((long)param_1 + 0x30a) = uVar10;
        return puVar3;
      }
      if (*psVar1 != 0x6e54) {
        if (*psVar1 == 0x7454) {
          lVar9 = param_1[100];
          pvVar14 = (void *)param_1[0x266];
          *param_1 = (long)(psVar1 + 1);
          *(int *)(param_1 + 100) = (int)lVar9 + 1;
          lVar7 = *(long *)((long)pvVar14 + 8);
          puVar4 = pvVar14;
          if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
            puVar4 = malloc(0x1000);
            if (puVar4 == (void *)0x0) goto LAB_001dea38;
            lVar7 = 0;
            *puVar4 = pvVar14;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
          puVar16 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
          *puVar16 = &PTR_FUN_001f4a50;
          *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 0x21;
          *(undefined4 *)((long)puVar4 + lVar7 + 0x1c) = 2;
          *(int *)((long)puVar4 + lVar7 + 0x20) = (int)lVar9;
          *(ushort *)((long)puVar4 + lVar7 + 0x19) =
               *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0x540;
          if (param_2 != (undefined8 *)0x0) {
            puVar4 = (undefined8 *)param_2[1];
            if (puVar4 == (undefined8 *)param_2[2]) {
              puVar3 = (undefined8 *)*param_2;
              sVar12 = (long)puVar4 - (long)puVar3;
              if (puVar3 == param_2 + 3) {
                pvVar14 = malloc(sVar12 * 2);
                if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                if (puVar4 != param_2 + 3) {
                  memmove(pvVar14,puVar3,sVar12);
                }
                *param_2 = pvVar14;
              }
              else {
                pvVar14 = realloc(puVar3,sVar12 * 2);
                *param_2 = pvVar14;
                if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
              }
              puVar4 = (undefined8 *)((long)pvVar14 + sVar12);
              param_2[2] = (void *)((long)pvVar14 + ((long)sVar12 >> 2) * 8);
            }
            *puVar4 = puVar16;
            param_2[1] = puVar4 + 1;
          }
          plVar15 = (long *)param_1[0x54];
          plVar13 = (long *)param_1[0x53];
          local_a8 = &stack0xffffffffffffffa0;
          sVar12 = (long)plVar15 - (long)plVar13;
          lVar9 = param_1[2];
          lVar7 = param_1[3];
          uStack_c0 = (long)sVar12 >> 3;
          uStack_98 = 0;
          local_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_78 = 0;
          local_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          local_c8 = param_1;
          local_b8 = &local_a0;
          puStack_b0 = &local_a0;
          if (plVar15 == (long *)param_1[0x55]) {
            if (plVar13 == param_1 + 0x56) {
              pvVar14 = malloc(sVar12 * 2);
              if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar15 != plVar13) {
                memmove(pvVar14,plVar13,sVar12);
              }
              param_1[0x53] = (long)pvVar14;
            }
            else {
              pvVar14 = realloc(plVar13,sVar12 * 2);
              param_1[0x53] = (long)pvVar14;
              if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            plVar15 = (long *)((long)pvVar14 + sVar12);
            param_1[0x55] = (long)((long)pvVar14 + ((long)sVar12 >> 2) * 8);
          }
          *plVar15 = (long)&local_b8;
          pcVar8 = (char *)*param_1;
          pcVar11 = (char *)param_1[1];
          param_1[0x54] = (long)(plVar15 + 1);
          do {
            if ((pcVar8 != pcVar11) && (*pcVar8 == 'E')) {
              lVar5 = 0;
              goto LAB_001de950;
            }
            lVar5 = FUN_001de15c(param_1,&local_b8);
            puVar4 = (undefined8 *)0x0;
            if (lVar5 == 0) goto LAB_001de9d8;
            plVar15 = (long *)param_1[3];
            if (plVar15 == (long *)param_1[4]) {
              plVar13 = (long *)param_1[2];
              sVar12 = (long)plVar15 - (long)plVar13;
              if (plVar13 == param_1 + 5) {
                pvVar14 = malloc(sVar12 * 2);
                if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                if (plVar15 != param_1 + 5) {
                  memmove(pvVar14,plVar13,sVar12);
                }
                param_1[2] = (long)pvVar14;
              }
              else {
                pvVar14 = realloc(plVar13,sVar12 * 2);
                param_1[2] = (long)pvVar14;
                if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
              }
              plVar15 = (long *)((long)pvVar14 + sVar12);
              param_1[4] = (long)((long)pvVar14 + ((long)sVar12 >> 2) * 8);
            }
            *plVar15 = lVar5;
            pcVar8 = (char *)*param_1;
            pcVar11 = (char *)param_1[1];
            param_1[3] = (long)(plVar15 + 1);
          } while ((pcVar8 == pcVar11) || (*pcVar8 != 'Q'));
          uVar10 = *(undefined1 *)((long)param_1 + 0x30a);
          *param_1 = (long)(pcVar8 + 1);
          *(undefined1 *)((long)param_1 + 0x30a) = 1;
          lVar5 = FUN_001d642c(param_1);
          *(undefined1 *)((long)param_1 + 0x30a) = uVar10;
          if ((lVar5 == 0) ||
             ((pcVar8 = (char *)*param_1, pcVar8 == (char *)param_1[1] || (*pcVar8 != 'E')))) {
            puVar4 = (undefined8 *)0x0;
          }
          else {
LAB_001de950:
            *param_1 = (long)(pcVar8 + 1);
            auVar17 = FUN_001d34d4(param_1,lVar7 - lVar9 >> 3);
            pvVar14 = (void *)param_1[0x266];
            lVar9 = *(long *)((long)pvVar14 + 8);
            puVar3 = pvVar14;
            if (lVar9 - 0xfc0U < 0xfffffffffffff010) {
              puVar3 = malloc(0x1000);
              if (puVar3 == (void *)0x0) goto LAB_001dea38;
              lVar9 = 0;
              *puVar3 = pvVar14;
              puVar3[1] = 0;
              param_1[0x266] = (long)puVar3;
            }
            *(long *)((long)puVar3 + 8) = lVar9 + 0x30;
            puVar4 = (undefined8 *)((long)puVar3 + lVar9 + 0x10);
            *puVar4 = &PTR_FUN_001f4c30;
            *(undefined1 *)((long)puVar3 + lVar9 + 0x18) = 0x26;
            *(undefined8 **)((long)puVar3 + lVar9 + 0x20) = puVar16;
            *(undefined1 (*) [16])((long)puVar3 + lVar9 + 0x28) = auVar17;
            *(long *)((long)puVar3 + lVar9 + 0x38) = lVar5;
            *(ushort *)((long)puVar3 + lVar9 + 0x19) =
                 *(ushort *)((long)puVar3 + lVar9 + 0x19) & 0xf000 | 0x500;
          }
LAB_001de9d8:
          if ((ulong)(local_c8[0x54] - local_c8[0x53] >> 3) < uStack_c0) {
                    /* WARNING: Subroutine does not return */
            FUN_001cf218("%s:%d: %s","75h2tvbqqiyelu6ergavx69288j4fh21moacaekj9a5g1ychamkwv5wxa",
                         0xac7,&DAT_0011dd07);
          }
          local_c8[0x54] = local_c8[0x53] + uStack_c0 * 8;
          if (local_b8 == &local_a0) {
            return puVar4;
          }
          free(local_b8);
          return puVar4;
        }
        if (*psVar1 == 0x7054) {
          *param_1 = (long)(psVar1 + 1);
          local_c8 = (long *)FUN_001de15c(param_1,param_2);
          if (local_c8 == (long *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar4 = (undefined8 *)FUN_001dee04(param_1,&local_c8);
          return puVar4;
        }
        goto LAB_001de190;
      }
      iVar2 = *(int *)((long)param_1 + 0x31c);
      pvVar14 = (void *)param_1[0x266];
      *param_1 = (long)(psVar1 + 1);
      *(int *)((long)param_1 + 0x31c) = iVar2 + 1;
      lVar9 = *(long *)((long)pvVar14 + 8);
      puVar4 = pvVar14;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_001dea38;
        lVar9 = 0;
        *puVar4 = pvVar14;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
      puVar16 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
      *puVar16 = &PTR_FUN_001f4a50;
      *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 0x21;
      *(undefined4 *)((long)puVar4 + lVar9 + 0x1c) = 1;
      *(int *)((long)puVar4 + lVar9 + 0x20) = iVar2;
      *(ushort *)((long)puVar4 + lVar9 + 0x19) =
           *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
      if (param_2 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)param_2[1];
        if (puVar4 == (undefined8 *)param_2[2]) {
          puVar3 = (undefined8 *)*param_2;
          sVar12 = (long)puVar4 - (long)puVar3;
          if (puVar3 == param_2 + 3) {
            pvVar14 = malloc(sVar12 * 2);
            if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (puVar4 != param_2 + 3) {
              memmove(pvVar14,puVar3,sVar12);
            }
            *param_2 = pvVar14;
          }
          else {
            pvVar14 = realloc(puVar3,sVar12 * 2);
            *param_2 = pvVar14;
            if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          puVar4 = (undefined8 *)((long)pvVar14 + sVar12);
          param_2[2] = (void *)((long)pvVar14 + ((long)sVar12 >> 2) * 8);
        }
        *puVar4 = puVar16;
        param_2[1] = puVar4 + 1;
      }
      lVar9 = FUN_001d0f90(param_1);
      if (lVar9 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar14 = (void *)param_1[0x266];
      lVar7 = *(long *)((long)pvVar14 + 8);
      puVar4 = pvVar14;
      if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_001dea38;
        lVar7 = 0;
        *puVar4 = pvVar14;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
      puVar3 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
      *puVar3 = &PTR_FUN_001f4bb8;
      uVar6 = *(ushort *)((long)puVar4 + lVar7 + 0x19);
      uVar10 = 0x25;
      *(undefined8 **)((long)puVar4 + lVar7 + 0x20) = puVar16;
      *(long *)((long)puVar4 + lVar7 + 0x28) = lVar9;
    }
    *(undefined1 *)(puVar3 + 1) = uVar10;
    *(ushort *)((long)puVar3 + 9) = uVar6 & 0xf000 | 0x500;
  }
  return puVar3;
}


