// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0015acc8; body: [[0015acc8, 0015b60b]]

undefined8 * FUN_0015acc8(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *__ptr;
  ushort uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  undefined1 uVar10;
  char *pcVar11;
  size_t sVar12;
  void *pvVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
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
LAB_0015acfc:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if (*psVar1 == 0x7954) {
      lVar9 = param_1[99];
      pvVar13 = (void *)param_1[0x266];
      *param_1 = (long)(psVar1 + 1);
      *(int *)(param_1 + 99) = (int)lVar9 + 1;
      lVar7 = *(long *)((long)pvVar13 + 8);
      puVar4 = pvVar13;
      if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0015b5cc;
        lVar7 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
      puVar17 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
      *puVar17 = &PTR_FUN_00171e68;
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
            pvVar13 = malloc(sVar12 * 2);
            if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (puVar4 != puVar3) {
              memmove(pvVar13,puVar3,sVar12);
            }
            *param_2 = pvVar13;
          }
          else {
            pvVar13 = realloc(puVar3,sVar12 * 2);
            *param_2 = pvVar13;
            if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          puVar4 = (undefined8 *)((long)pvVar13 + sVar12);
          param_2[1] = puVar4;
          param_2[2] = (void *)((long)pvVar13 + ((long)sVar12 >> 2) * 8);
        }
        param_2[1] = puVar4 + 1;
        *puVar4 = puVar17;
      }
      pvVar13 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar13 + 8);
      puVar4 = pvVar13;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) {
LAB_0015b5cc:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar9 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
      puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
      *puVar3 = &PTR_FUN_00171ed8;
      uVar6 = *(ushort *)((long)puVar4 + lVar9 + 0x19);
      uVar10 = 0x23;
      *(undefined8 **)((long)puVar4 + lVar9 + 0x20) = puVar17;
    }
    else if (*psVar1 == 0x6b54) {
      *param_1 = (long)(psVar1 + 1);
      lVar9 = FUN_0014f6a0(param_1,0);
      if (lVar9 == 0) {
        return (undefined8 *)0x0;
      }
      lVar7 = param_1[99];
      pvVar13 = (void *)param_1[0x266];
      *(int *)(param_1 + 99) = (int)lVar7 + 1;
      lVar5 = *(long *)((long)pvVar13 + 8);
      puVar4 = pvVar13;
      if (lVar5 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0015b5cc;
        lVar5 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar5 + 0x20;
      puVar17 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
      *puVar17 = &PTR_FUN_00171e68;
      *(undefined4 *)((long)puVar4 + lVar5 + 0x1c) = 0;
      *(int *)((long)puVar4 + lVar5 + 0x20) = (int)lVar7;
      *(undefined1 *)((long)puVar4 + lVar5 + 0x18) = 0x21;
      *(ushort *)((long)puVar4 + lVar5 + 0x19) =
           *(ushort *)((long)puVar4 + lVar5 + 0x19) & 0xf000 | 0x540;
      if (param_2 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)param_2[1];
        if (puVar4 == (undefined8 *)param_2[2]) {
          puVar15 = param_2 + 3;
          puVar3 = (undefined8 *)*param_2;
          sVar12 = (long)puVar4 - (long)puVar3;
          if (puVar3 == puVar15) {
            pvVar13 = malloc(sVar12 * 2);
            if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (puVar4 != puVar15) {
              memcpy(pvVar13,puVar15,sVar12);
            }
            *param_2 = pvVar13;
          }
          else {
            pvVar13 = realloc(puVar3,sVar12 * 2);
            *param_2 = pvVar13;
            if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          puVar4 = (undefined8 *)((long)pvVar13 + sVar12);
          param_2[1] = puVar4;
          param_2[2] = (void *)((long)pvVar13 + ((long)sVar12 >> 2) * 8);
        }
        param_2[1] = puVar4 + 1;
        *puVar4 = puVar17;
      }
      pvVar13 = (void *)param_1[0x266];
      lVar7 = *(long *)((long)pvVar13 + 8);
      puVar4 = pvVar13;
      if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0015b5cc;
        lVar7 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
      puVar3 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
      *puVar3 = &PTR_FUN_00171f48;
      uVar6 = *(ushort *)((long)puVar4 + lVar7 + 0x19);
      uVar10 = 0x24;
      *(long *)((long)puVar4 + lVar7 + 0x20) = lVar9;
      *(undefined8 **)((long)puVar4 + lVar7 + 0x28) = puVar17;
    }
    else {
      if (*psVar1 != 0x6e54) {
        if (*psVar1 == 0x7454) {
          lVar9 = param_1[100];
          pvVar13 = (void *)param_1[0x266];
          *param_1 = (long)(psVar1 + 1);
          *(int *)(param_1 + 100) = (int)lVar9 + 1;
          lVar7 = *(long *)((long)pvVar13 + 8);
          puVar4 = pvVar13;
          if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
            puVar4 = malloc(0x1000);
            if (puVar4 == (void *)0x0) goto LAB_0015b5cc;
            lVar7 = 0;
            *puVar4 = pvVar13;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
          puVar17 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
          *puVar17 = &PTR_FUN_00171e68;
          *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 0x21;
          *(undefined4 *)((long)puVar4 + lVar7 + 0x1c) = 2;
          *(int *)((long)puVar4 + lVar7 + 0x20) = (int)lVar9;
          *(ushort *)((long)puVar4 + lVar7 + 0x19) =
               *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0x540;
          if (param_2 != (undefined8 *)0x0) {
            puVar4 = (undefined8 *)param_2[1];
            if (puVar4 == (undefined8 *)param_2[2]) {
              puVar15 = param_2 + 3;
              puVar3 = (undefined8 *)*param_2;
              sVar12 = (long)puVar4 - (long)puVar3;
              if (puVar3 == puVar15) {
                pvVar13 = malloc(sVar12 * 2);
                if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                if (puVar4 != puVar15) {
                  memcpy(pvVar13,puVar15,sVar12);
                }
                *param_2 = pvVar13;
              }
              else {
                pvVar13 = realloc(puVar3,sVar12 * 2);
                *param_2 = pvVar13;
                if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
              }
              puVar4 = (undefined8 *)((long)pvVar13 + sVar12);
              param_2[1] = puVar4;
              param_2[2] = (void *)((long)pvVar13 + ((long)sVar12 >> 2) * 8);
            }
            param_2[1] = puVar4 + 1;
            *puVar4 = puVar17;
          }
          plVar16 = (long *)param_1[0x54];
          plVar14 = (long *)param_1[0x53];
          local_a8 = &stack0xffffffffffffffa0;
          sVar12 = (long)plVar16 - (long)plVar14;
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
          if (plVar16 == (long *)param_1[0x55]) {
            if (plVar14 == param_1 + 0x56) {
              pvVar13 = malloc(sVar12 * 2);
              if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar16 != plVar14) {
                memmove(pvVar13,plVar14,sVar12);
              }
              param_1[0x53] = (long)pvVar13;
            }
            else {
              pvVar13 = realloc(plVar14,sVar12 * 2);
              param_1[0x53] = (long)pvVar13;
              if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            plVar16 = (long *)((long)pvVar13 + sVar12);
            param_1[0x54] = (long)plVar16;
            param_1[0x55] = (long)((long)pvVar13 + ((long)sVar12 >> 2) * 8);
          }
          param_1[0x54] = (long)(plVar16 + 1);
          *plVar16 = (long)&local_b8;
          plVar16 = param_1 + 5;
          pcVar8 = (char *)*param_1;
          pcVar11 = (char *)param_1[1];
          do {
            if ((pcVar8 != pcVar11) && (*pcVar8 == 'E')) {
              lVar5 = 0;
              goto LAB_0015b504;
            }
            lVar5 = FUN_0015acc8(param_1,&local_b8);
            puVar4 = (undefined8 *)0x0;
            if (lVar5 == 0) goto LAB_0015b58c;
            plVar14 = (long *)param_1[3];
            if (plVar14 == (long *)param_1[4]) {
              __ptr = (long *)param_1[2];
              sVar12 = (long)plVar14 - (long)__ptr;
              if (__ptr == plVar16) {
                pvVar13 = malloc(sVar12 * 2);
                if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                if (plVar14 != plVar16) {
                  memcpy(pvVar13,plVar16,sVar12);
                }
                param_1[2] = (long)pvVar13;
              }
              else {
                pvVar13 = realloc(__ptr,sVar12 * 2);
                param_1[2] = (long)pvVar13;
                if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
              }
              plVar14 = (long *)((long)pvVar13 + sVar12);
              param_1[3] = (long)plVar14;
              param_1[4] = (long)((long)pvVar13 + ((long)sVar12 >> 2) * 8);
            }
            param_1[3] = (long)(plVar14 + 1);
            *plVar14 = lVar5;
            pcVar8 = (char *)*param_1;
            pcVar11 = (char *)param_1[1];
          } while ((pcVar8 == pcVar11) || (*pcVar8 != 'Q'));
          uVar10 = *(undefined1 *)((long)param_1 + 0x30a);
          *param_1 = (long)(pcVar8 + 1);
          *(undefined1 *)((long)param_1 + 0x30a) = 1;
          lVar5 = FUN_00153210(param_1);
          *(undefined1 *)((long)param_1 + 0x30a) = uVar10;
          if ((lVar5 == 0) ||
             ((pcVar8 = (char *)*param_1, pcVar8 == (char *)param_1[1] || (*pcVar8 != 'E')))) {
            puVar4 = (undefined8 *)0x0;
          }
          else {
LAB_0015b504:
            *param_1 = (long)(pcVar8 + 1);
            auVar18 = FUN_00150274(param_1,lVar7 - lVar9 >> 3);
            pvVar13 = (void *)param_1[0x266];
            lVar9 = *(long *)((long)pvVar13 + 8);
            puVar3 = pvVar13;
            if (lVar9 - 0xfc0U < 0xfffffffffffff010) {
              puVar3 = malloc(0x1000);
              if (puVar3 == (void *)0x0) goto LAB_0015b5cc;
              lVar9 = 0;
              *puVar3 = pvVar13;
              puVar3[1] = 0;
              param_1[0x266] = (long)puVar3;
            }
            *(long *)((long)puVar3 + 8) = lVar9 + 0x30;
            puVar4 = (undefined8 *)((long)puVar3 + lVar9 + 0x10);
            *puVar4 = &PTR_FUN_00172028;
            *(undefined1 *)((long)puVar3 + lVar9 + 0x18) = 0x26;
            *(undefined8 **)((long)puVar3 + lVar9 + 0x20) = puVar17;
            *(undefined1 (*) [16])((long)puVar3 + lVar9 + 0x28) = auVar18;
            *(long *)((long)puVar3 + lVar9 + 0x38) = lVar5;
            *(ushort *)((long)puVar3 + lVar9 + 0x19) =
                 *(ushort *)((long)puVar3 + lVar9 + 0x19) & 0xf000 | 0x500;
          }
LAB_0015b58c:
          if ((ulong)(local_c8[0x54] - local_c8[0x53] >> 3) < uStack_c0) {
                    /* WARNING: Subroutine does not return */
            FUN_0014ce10("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",
                         0xa4f,&DAT_00136b27);
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
          local_c8 = (long *)FUN_0015acc8(param_1);
          if (local_c8 == (long *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar4 = (undefined8 *)FUN_0015b8e0(param_1,&local_c8);
          return puVar4;
        }
        goto LAB_0015acfc;
      }
      iVar2 = *(int *)((long)param_1 + 0x31c);
      pvVar13 = (void *)param_1[0x266];
      *param_1 = (long)(psVar1 + 1);
      *(int *)((long)param_1 + 0x31c) = iVar2 + 1;
      lVar9 = *(long *)((long)pvVar13 + 8);
      puVar4 = pvVar13;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0015b5cc;
        lVar9 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
      puVar17 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
      *puVar17 = &PTR_FUN_00171e68;
      *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 0x21;
      *(undefined4 *)((long)puVar4 + lVar9 + 0x1c) = 1;
      *(int *)((long)puVar4 + lVar9 + 0x20) = iVar2;
      *(ushort *)((long)puVar4 + lVar9 + 0x19) =
           *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
      if (param_2 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)param_2[1];
        if (puVar4 == (undefined8 *)param_2[2]) {
          puVar15 = param_2 + 3;
          puVar3 = (undefined8 *)*param_2;
          sVar12 = (long)puVar4 - (long)puVar3;
          if (puVar3 == puVar15) {
            pvVar13 = malloc(sVar12 * 2);
            if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (puVar4 != puVar15) {
              memcpy(pvVar13,puVar15,sVar12);
            }
            *param_2 = pvVar13;
          }
          else {
            pvVar13 = realloc(puVar3,sVar12 * 2);
            *param_2 = pvVar13;
            if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          puVar4 = (undefined8 *)((long)pvVar13 + sVar12);
          param_2[1] = puVar4;
          param_2[2] = (void *)((long)pvVar13 + ((long)sVar12 >> 2) * 8);
        }
        param_2[1] = puVar4 + 1;
        *puVar4 = puVar17;
      }
      lVar9 = FUN_0014e160(param_1);
      if (lVar9 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar13 = (void *)param_1[0x266];
      lVar7 = *(long *)((long)pvVar13 + 8);
      puVar4 = pvVar13;
      if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0015b5cc;
        lVar7 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
      puVar3 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
      *puVar3 = &PTR_FUN_00171fb8;
      uVar6 = *(ushort *)((long)puVar4 + lVar7 + 0x19);
      uVar10 = 0x25;
      *(undefined8 **)((long)puVar4 + lVar7 + 0x20) = puVar17;
      *(long *)((long)puVar4 + lVar7 + 0x28) = lVar9;
    }
    *(undefined1 *)(puVar3 + 1) = uVar10;
    *(ushort *)((long)puVar3 + 9) = uVar6 & 0xf000 | 0x500;
  }
  return puVar3;
}


