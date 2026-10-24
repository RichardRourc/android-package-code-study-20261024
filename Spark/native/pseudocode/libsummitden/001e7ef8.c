// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e7ef8; body: [[001e7ef8, 001e86af]]

undefined8 FUN_001e7ef8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  size_t sVar8;
  long lVar9;
  ulong uVar10;
  undefined2 uVar11;
  long lVar12;
  byte *pbVar13;
  long *plVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (((*(char *)(lVar7 + 8) == '\b') && (*(long *)(lVar7 + 0x18) == 4)) &&
     (**(int **)(lVar7 + 0x10) == 0x72616863)) {
    lVar7 = param_2[1];
    pvVar6 = (void *)*param_2;
    uVar17 = lVar7 + 1;
    lVar12 = lVar7;
    if ((ulong)param_2[2] < uVar17) {
      sVar8 = param_2[2] * 2;
      uVar17 = lVar7 + 0x3e1;
      if (sVar8 < uVar17 || sVar8 - uVar17 == 0) {
        sVar8 = uVar17;
      }
      param_2[2] = sVar8;
      pvVar6 = realloc(pvVar6,sVar8);
      *param_2 = pvVar6;
      if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar17 = param_2[1] + 1;
      lVar12 = param_2[1];
    }
    param_2[1] = uVar17;
    *(undefined1 *)((long)pvVar6 + lVar12) = 0x22;
    if (param_3[1] != 0) {
      plVar14 = (long *)*param_3;
      bVar4 = false;
      plVar1 = plVar14 + param_3[1];
      do {
        lVar12 = *plVar14;
        if (*(char *)(lVar12 + 8) != 'M') {
LAB_001e8608:
          param_2[1] = lVar7;
          return 0;
        }
        lVar9 = *(long *)(lVar12 + 0x28);
        if (lVar9 == 0) {
          uVar17 = 0;
          if (bVar4) goto LAB_001e8054;
LAB_001e80e4:
          if (10 < (int)uVar17) goto LAB_001e80ec;
LAB_001e8160:
          iVar15 = (int)uVar17;
          if (iVar15 < 9) {
            if (iVar15 != 7) {
              if (iVar15 != 8) goto LAB_001e842c;
              lVar12 = param_2[1];
              pvVar6 = (void *)*param_2;
              if ((ulong)param_2[2] < lVar12 + 2U) {
                sVar8 = param_2[2] * 2;
                uVar17 = lVar12 + 0x3e2;
                if (sVar8 < uVar17 || sVar8 - uVar17 == 0) {
                  sVar8 = uVar17;
                }
                param_2[2] = sVar8;
                pvVar6 = realloc(pvVar6,sVar8);
                *param_2 = pvVar6;
                if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                lVar12 = param_2[1];
              }
              uVar11 = 0x625c;
              goto LAB_001e840c;
            }
            lVar12 = param_2[1];
            pvVar6 = (void *)*param_2;
            if ((ulong)param_2[2] < lVar12 + 2U) {
              sVar8 = param_2[2] * 2;
              uVar17 = lVar12 + 0x3e2;
              if (sVar8 < uVar17 || sVar8 - uVar17 == 0) {
                sVar8 = uVar17;
              }
              param_2[2] = sVar8;
              pvVar6 = realloc(pvVar6,sVar8);
              *param_2 = pvVar6;
              if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar12 = param_2[1];
            }
            *(undefined2 *)((long)pvVar6 + lVar12) = 0x615c;
          }
          else {
            if (iVar15 == 9) {
              lVar12 = param_2[1];
              pvVar6 = (void *)*param_2;
              if ((ulong)param_2[2] < lVar12 + 2U) {
                sVar8 = param_2[2] * 2;
                uVar17 = lVar12 + 0x3e2;
                if (sVar8 < uVar17 || sVar8 - uVar17 == 0) {
                  sVar8 = uVar17;
                }
                param_2[2] = sVar8;
                pvVar6 = realloc(pvVar6,sVar8);
                *param_2 = pvVar6;
                if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                lVar12 = param_2[1];
              }
              uVar11 = 0x745c;
            }
            else {
              if (iVar15 != 10) goto LAB_001e842c;
              lVar12 = param_2[1];
              pvVar6 = (void *)*param_2;
              if ((ulong)param_2[2] < lVar12 + 2U) {
                sVar8 = param_2[2] * 2;
                uVar17 = lVar12 + 0x3e2;
                if (sVar8 < uVar17 || sVar8 - uVar17 == 0) {
                  sVar8 = uVar17;
                }
                param_2[2] = sVar8;
                pvVar6 = realloc(pvVar6,sVar8);
                *param_2 = pvVar6;
                if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                lVar12 = param_2[1];
              }
              uVar11 = 0x6e5c;
            }
LAB_001e840c:
            *(undefined2 *)((long)pvVar6 + lVar12) = uVar11;
          }
LAB_001e8410:
          bVar4 = false;
          param_2[1] = param_2[1] + 2;
        }
        else {
          pbVar13 = *(byte **)(lVar12 + 0x20);
          uVar17 = 0;
          do {
            if ((0x19 < (int)uVar17) || (bVar2 = *pbVar13, 9 < bVar2 - 0x30)) goto LAB_001e8608;
            lVar9 = lVar9 + -1;
            pbVar13 = pbVar13 + 1;
            uVar16 = ((uint)bVar2 + (int)uVar17 * 10) - 0x30;
            uVar17 = (ulong)uVar16;
          } while (lVar9 != 0);
          if (0xff < (int)uVar16) goto LAB_001e8608;
          if (!bVar4) goto LAB_001e80e4;
LAB_001e8054:
          iVar15 = (int)uVar17;
          if (iVar15 - 0x30U < 10) {
LAB_001e8080:
            lVar12 = param_2[1];
            pvVar6 = (void *)*param_2;
            if ((ulong)param_2[2] < lVar12 + 2U) {
              sVar8 = param_2[2] * 2;
              uVar10 = lVar12 + 0x3e2;
              if (sVar8 < uVar10 || sVar8 - uVar10 == 0) {
                sVar8 = uVar10;
              }
              param_2[2] = sVar8;
              pvVar6 = realloc(pvVar6,sVar8);
              *param_2 = pvVar6;
              if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar12 = param_2[1];
            }
            *(undefined2 *)((long)pvVar6 + lVar12) = 0x2222;
            param_2[1] = param_2[1] + 2;
            if (iVar15 < 0xb) goto LAB_001e8160;
LAB_001e80ec:
            iVar15 = (int)uVar17;
            if (iVar15 < 0xd) {
LAB_001e82c0:
              if ((int)uVar17 == 0xb) {
                lVar12 = param_2[1];
                pvVar6 = (void *)*param_2;
                if ((ulong)param_2[2] < lVar12 + 2U) {
                  sVar8 = param_2[2] * 2;
                  uVar17 = lVar12 + 0x3e2;
                  if (sVar8 < uVar17 || sVar8 - uVar17 == 0) {
                    sVar8 = uVar17;
                  }
                  param_2[2] = sVar8;
                  pvVar6 = realloc(pvVar6,sVar8);
                  *param_2 = pvVar6;
                  if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  lVar12 = param_2[1];
                }
                uVar11 = 0x765c;
              }
              else {
                if ((int)uVar17 != 0xc) goto LAB_001e842c;
                lVar12 = param_2[1];
                pvVar6 = (void *)*param_2;
                if ((ulong)param_2[2] < lVar12 + 2U) {
                  sVar8 = param_2[2] * 2;
                  uVar17 = lVar12 + 0x3e2;
                  if (sVar8 < uVar17 || sVar8 - uVar17 == 0) {
                    sVar8 = uVar17;
                  }
                  param_2[2] = sVar8;
                  pvVar6 = realloc(pvVar6,sVar8);
                  *param_2 = pvVar6;
                  if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  lVar12 = param_2[1];
                }
                uVar11 = 0x665c;
              }
            }
            else {
              if (iVar15 != 0xd) {
                if (iVar15 != 0x22) goto LAB_001e8104;
LAB_001e8378:
                lVar12 = param_2[1];
                pvVar6 = (void *)*param_2;
                if ((ulong)param_2[2] < lVar12 + 2U) {
                  sVar8 = param_2[2] * 2;
                  uVar17 = lVar12 + 0x3e2;
                  if (sVar8 < uVar17 || sVar8 - uVar17 == 0) {
                    sVar8 = uVar17;
                  }
                  param_2[2] = sVar8;
                  pvVar6 = realloc(pvVar6,sVar8);
                  *param_2 = pvVar6;
                  if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  lVar12 = param_2[1];
                }
                *(undefined2 *)((long)pvVar6 + lVar12) = 0x225c;
                goto LAB_001e8410;
              }
LAB_001e83c4:
              lVar12 = param_2[1];
              pvVar6 = (void *)*param_2;
              if ((ulong)param_2[2] < lVar12 + 2U) {
                sVar8 = param_2[2] * 2;
                uVar17 = lVar12 + 0x3e2;
                if (sVar8 < uVar17 || sVar8 - uVar17 == 0) {
                  sVar8 = uVar17;
                }
                param_2[2] = sVar8;
                pvVar6 = realloc(pvVar6,sVar8);
                *param_2 = pvVar6;
                if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                lVar12 = param_2[1];
              }
              uVar11 = 0x725c;
            }
            goto LAB_001e840c;
          }
          if (iVar15 < 0x41) {
            if (iVar15 < 0xb) goto LAB_001e8160;
            if (iVar15 < 0xd) goto LAB_001e82c0;
            if (iVar15 == 0xd) goto LAB_001e83c4;
            if (iVar15 == 0x22) goto LAB_001e8378;
          }
          else {
            if ((iVar15 - 0x41U < 6) || (iVar15 - 0x61U < 6)) goto LAB_001e8080;
LAB_001e8104:
            if ((int)uVar17 == 0x5c) {
              lVar12 = param_2[1];
              pvVar6 = (void *)*param_2;
              if ((ulong)param_2[2] < lVar12 + 2U) {
                sVar8 = param_2[2] * 2;
                uVar17 = lVar12 + 0x3e2;
                if (sVar8 < uVar17 || sVar8 - uVar17 == 0) {
                  sVar8 = uVar17;
                }
                param_2[2] = sVar8;
                pvVar6 = realloc(pvVar6,sVar8);
                *param_2 = pvVar6;
                if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                lVar12 = param_2[1];
              }
              *(undefined2 *)((long)pvVar6 + lVar12) = 0x5c5c;
              goto LAB_001e8410;
            }
          }
LAB_001e842c:
          uVar16 = (uint)uVar17;
          if (((int)uVar16 < 0x20) || (uVar16 == 0x7f)) {
            lVar12 = param_2[1];
            pvVar6 = (void *)*param_2;
            uVar10 = lVar12 + 1;
            if ((ulong)param_2[2] < uVar10) {
              sVar8 = param_2[2] * 2;
              uVar10 = lVar12 + 0x3e1;
              if (sVar8 < uVar10 || sVar8 - uVar10 == 0) {
                sVar8 = uVar10;
              }
              param_2[2] = sVar8;
              pvVar6 = realloc(pvVar6,sVar8);
              *param_2 = pvVar6;
              if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar12 = param_2[1];
              uVar10 = lVar12 + 1;
            }
            param_2[1] = uVar10;
            *(undefined1 *)((long)pvVar6 + lVar12) = 0x5c;
            if (7 < (int)uVar16) {
              lVar12 = param_2[1];
              pvVar6 = (void *)*param_2;
              uVar10 = lVar12 + 1;
              if ((ulong)param_2[2] < uVar10) {
                sVar8 = param_2[2] * 2;
                uVar10 = lVar12 + 0x3e1;
                if (sVar8 < uVar10 || sVar8 - uVar10 == 0) {
                  sVar8 = uVar10;
                }
                param_2[2] = sVar8;
                pvVar6 = realloc(pvVar6,sVar8);
                *param_2 = pvVar6;
                if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                lVar12 = param_2[1];
                uVar10 = lVar12 + 1;
              }
              param_2[1] = uVar10;
              *(undefined1 *)((long)pvVar6 + lVar12) = 0x78;
              if (0xf < uVar16) {
                lVar12 = param_2[1];
                pvVar6 = (void *)*param_2;
                uVar10 = lVar12 + 1;
                cVar3 = "0123456789ABCDEF"[uVar17 >> 4];
                if ((ulong)param_2[2] < uVar10) {
                  sVar8 = param_2[2] * 2;
                  uVar10 = lVar12 + 0x3e1;
                  if (sVar8 < uVar10 || sVar8 - uVar10 == 0) {
                    sVar8 = uVar10;
                  }
                  param_2[2] = sVar8;
                  pvVar6 = realloc(pvVar6,sVar8);
                  *param_2 = pvVar6;
                  if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  lVar12 = param_2[1];
                  uVar10 = lVar12 + 1;
                }
                param_2[1] = uVar10;
                *(char *)((long)pvVar6 + lVar12) = cVar3;
              }
            }
            lVar12 = param_2[1];
            pvVar6 = (void *)*param_2;
            cVar3 = "0123456789ABCDEF"[uVar17 & 0xf];
            uVar17 = lVar12 + 1;
            if ((ulong)param_2[2] < uVar17) {
              sVar8 = param_2[2] * 2;
              uVar17 = lVar12 + 0x3e1;
              if (sVar8 < uVar17 || sVar8 - uVar17 == 0) {
                sVar8 = uVar17;
              }
              param_2[2] = sVar8;
              pvVar6 = realloc(pvVar6,sVar8);
              *param_2 = pvVar6;
              if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar12 = param_2[1];
              uVar17 = lVar12 + 1;
            }
            param_2[1] = uVar17;
            bVar4 = true;
            *(char *)((long)pvVar6 + lVar12) = cVar3;
          }
          else {
            lVar12 = param_2[1];
            pvVar6 = (void *)*param_2;
            uVar10 = lVar12 + 1;
            if ((ulong)param_2[2] < uVar10) {
              sVar8 = param_2[2] * 2;
              uVar10 = lVar12 + 0x3e1;
              if (sVar8 < uVar10 || sVar8 - uVar10 == 0) {
                sVar8 = uVar10;
              }
              param_2[2] = sVar8;
              pvVar6 = realloc(pvVar6,sVar8);
              *param_2 = pvVar6;
              if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar12 = param_2[1];
              uVar10 = lVar12 + 1;
            }
            bVar4 = false;
            param_2[1] = uVar10;
            *(char *)((long)pvVar6 + lVar12) = (char)uVar17;
          }
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar1);
    }
    lVar7 = param_2[1];
    pvVar6 = (void *)*param_2;
    uVar17 = lVar7 + 1;
    if ((ulong)param_2[2] < uVar17) {
      sVar8 = param_2[2] * 2;
      uVar17 = lVar7 + 0x3e1;
      if (sVar8 < uVar17 || sVar8 - uVar17 == 0) {
        sVar8 = uVar17;
      }
      param_2[2] = sVar8;
      pvVar6 = realloc(pvVar6,sVar8);
      *param_2 = pvVar6;
      if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = param_2[1];
      uVar17 = lVar7 + 1;
    }
    param_2[1] = uVar17;
    *(undefined1 *)((long)pvVar6 + lVar7) = 0x22;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


