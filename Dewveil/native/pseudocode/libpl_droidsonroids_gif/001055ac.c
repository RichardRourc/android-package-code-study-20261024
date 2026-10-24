// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001055ac; body: [[001055ac, 00105c17]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001055ac(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 (*pauVar26) [16];
  long lVar27;
  long *plVar28;
  ulong uVar29;
  char *pcVar30;
  ulong uVar31;
  undefined1 auVar32 [16];
  byte local_6c [4];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar28 = *(long **)(param_1 + 0x70);
  if (param_3 == 0) {
    param_3 = *(ulong *)(param_1 + 0x38);
  }
  lVar12 = plVar28[10];
  plVar28[10] = lVar12 - param_3;
  if (lVar12 - param_3 < 0xffff0001) {
    iVar10 = (int)plVar28[7];
    if (0xfff < iVar10) {
      uVar8 = 0;
      goto LAB_00105b70;
    }
    lVar12 = plVar28[2];
    iVar3 = (int)plVar28[1];
    uVar11 = *(uint *)(plVar28 + 6);
    if (iVar10 != 0) {
      uVar17 = 0;
      puVar21 = (undefined1 *)((long)plVar28 + (long)iVar10 + 0x15f);
      do {
        if (param_3 <= uVar17) {
          uVar16 = iVar10 - (int)uVar17;
          uVar29 = (ulong)uVar16;
          uVar31 = uVar17;
          uVar5 = _DAT_00107e70;
          uVar8 = _UNK_00107e78;
          goto joined_r0x00105b50;
        }
        uVar31 = uVar17 + 1;
        *(undefined1 *)(param_2 + uVar17) = *puVar21;
        uVar17 = uVar31;
        puVar21 = puVar21 + -1;
      } while (iVar10 != (int)uVar31);
      uVar29 = 0;
      uVar16 = 0;
      uVar5 = _DAT_00107e70;
      uVar8 = _UNK_00107e78;
      goto joined_r0x00105b50;
    }
    uVar29 = 0;
    uVar16 = 0;
    uVar31 = 0;
    uVar8 = _UNK_00107e78;
    uVar5 = _DAT_00107e70;
    if (param_3 != 0) {
      do {
        lVar27 = *(long *)(param_1 + 0x70);
        uVar17 = *(ulong *)(lVar27 + 0x20);
        if (0xc < uVar17) goto LAB_00105bf8;
        uVar13 = *(ulong *)(lVar27 + 0x40);
        if (uVar13 < uVar17) {
          pcVar30 = (char *)(lVar27 + 0x60);
          cVar6 = *pcVar30;
          do {
            if (cVar6 == '\0') {
              cVar6 = (**(code **)(*(long *)(param_1 + 0x70) + 0x58))(param_1,pcVar30,1);
              if (cVar6 != '\x01') goto LAB_00105bf0;
              if (*pcVar30 == '\0') goto LAB_00105bf8;
              cVar6 = (**(code **)(*(long *)(param_1 + 0x70) + 0x58))(param_1,lVar27 + 0x61);
              if (*pcVar30 != cVar6) goto LAB_00105bf0;
              bVar7 = *(byte *)(lVar27 + 0x61);
              *(undefined1 *)(lVar27 + 0x61) = 2;
              uVar13 = *(ulong *)(lVar27 + 0x40);
              uVar17 = *(ulong *)(lVar27 + 0x20);
            }
            else {
              bVar7 = *(byte *)(lVar27 + 0x61);
              *(byte *)(lVar27 + 0x61) = bVar7 + 1;
              bVar7 = *(byte *)(lVar27 + (ulong)bVar7 + 0x60);
            }
            uVar22 = uVar13 & 0x3f;
            uVar13 = uVar13 + 8;
            cVar6 = cVar6 + -1;
            uVar22 = *(ulong *)(lVar27 + 0x48) | (ulong)bVar7 << uVar22;
            *(char *)(lVar27 + 0x60) = cVar6;
            *(ulong *)(lVar27 + 0x40) = uVar13;
            *(ulong *)(lVar27 + 0x48) = uVar22;
          } while (uVar13 < uVar17);
        }
        else {
          uVar22 = *(ulong *)(lVar27 + 0x48);
        }
        uVar14 = uVar22 & *(ushort *)(&DAT_00107e88 + uVar17 * 2);
        *(ulong *)(lVar27 + 0x40) = uVar13 - uVar17;
        *(ulong *)(lVar27 + 0x48) = uVar22 >> (uVar17 & 0x3f);
        if (*(ulong *)(lVar27 + 0x18) < 0x1001) {
          uVar13 = *(ulong *)(lVar27 + 0x18) + 1;
          *(ulong *)(lVar27 + 0x18) = uVar13;
          if ((uVar17 < 0xc) && (*(ulong *)(lVar27 + 0x28) < uVar13)) {
            *(ulong *)(lVar27 + 0x20) = uVar17 + 1;
            *(ulong *)(lVar27 + 0x28) = *(ulong *)(lVar27 + 0x28) << 1;
          }
        }
        iVar10 = (int)uVar14;
        if (iVar10 == (int)lVar12) {
          uVar9 = 0x71;
          goto LAB_0010560c;
        }
        if (iVar10 == iVar3) {
          lVar27 = -0x4000;
          do {
            lVar23 = lVar27 + 0x20;
            *(undefined8 *)((long)plVar28 + lVar27 + 0x6168) = 0x100200001002;
            *(undefined8 *)((long)plVar28 + lVar27 + 0x6160) = 0x100200001002;
            *(undefined8 *)((long)plVar28 + lVar27 + 0x6178) = 0x100200001002;
            *(undefined8 *)((long)plVar28 + lVar27 + 0x6170) = 0x100200001002;
            lVar27 = lVar23;
          } while (lVar23 != 0);
          uVar14 = 0x1002;
          plVar28[3] = plVar28[2] + 1;
          plVar28[4] = *plVar28 + 1;
          plVar28[5] = (long)(1 << (ulong)((uint)(*plVar28 + 1) & 0x1f));
          plVar28[6] = 0x1002;
        }
        else {
          if (iVar3 <= iVar10) {
            uVar16 = (uint)uVar29;
            uVar17 = uVar14;
            if (*(int *)((long)plVar28 + uVar14 * 4 + 0x2160) == 0x1002) {
              if (plVar28[3] - 2U != uVar14) goto LAB_00105bf8;
              uVar15 = uVar11;
              if (iVar3 < (int)uVar11) {
                uVar19 = 1;
                while ((int)uVar15 < 0x1000) {
                  uVar15 = *(uint *)((long)plVar28 + (long)(int)uVar15 * 4 + 0x2160);
                  uVar2 = uVar19;
                  if (iVar3 < (int)uVar15) {
                    uVar2 = uVar19 + 1;
                  }
                  if ((0xfff < uVar19) || (uVar19 = uVar2, (int)uVar15 <= iVar3)) goto LAB_00105998;
                }
                uVar15 = 0x1002;
              }
LAB_00105998:
              *(char *)((long)plVar28 + (long)(int)uVar16 + 0x160) = (char)uVar15;
              uVar16 = uVar16 + 1;
              uVar29 = (ulong)uVar16;
              *(char *)((long)plVar28 + plVar28[3] + 0x115d) = (char)uVar15;
              uVar17 = (ulong)uVar11;
            }
            if ((int)uVar16 < 0xfff) {
              uVar16 = (uint)uVar29;
              lVar27 = uVar29 << 0x20;
              lVar23 = (long)(int)uVar16;
              while( true ) {
                uVar16 = uVar16 + 1;
                iVar20 = (int)uVar17;
                if ((iVar20 <= iVar3) || (0xfff < iVar20)) break;
                lVar1 = lVar23 + 1;
                *(undefined1 *)((long)plVar28 + lVar23 + 0x160) =
                     *(undefined1 *)((long)plVar28 + (long)iVar20 + 0x115f);
                uVar17 = (ulong)*(uint *)((long)plVar28 + (long)iVar20 * 4 + 0x2160);
                lVar27 = lVar27 + 0x100000000;
                uVar29 = (ulong)((int)uVar29 + 1);
                lVar23 = lVar1;
                if (0xffe < lVar1) goto LAB_00105bf8;
              }
              if (iVar20 < 0x1000) {
                uVar13 = uVar31 - param_3;
                *(char *)((long)plVar28 + (lVar27 >> 0x20) + 0x160) = (char)uVar17;
                if ((uVar31 < param_3) && (uVar16 != 0)) {
                  uVar22 = (ulong)~(uint)lVar23 | 0xffffffff00000000;
                  uVar17 = uVar13;
                  if (uVar13 <= uVar22) {
                    uVar17 = uVar22;
                  }
                  uVar17 = -uVar17;
                  uVar22 = (ulong)(int)uVar16;
                  if (0xf < uVar17) {
                    uVar25 = (ulong)~(uint)lVar23 | 0xffffffff00000000;
                    puVar18 = (undefined8 *)(param_2 + uVar31);
                    uVar24 = uVar13;
                    if (uVar13 <= uVar25) {
                      uVar24 = uVar25;
                    }
                    if (((undefined8 *)((long)plVar28 + uVar22 + 0x160) <= puVar18) ||
                       (param_2 + (uVar31 - uVar24) <= (long)plVar28 + uVar24 + uVar22 + 0x160)) {
                      uVar24 = uVar17 & 0x1fffffff0;
                      uVar25 = uVar29 & 0xffffffff;
                      uVar29 = uVar22 - uVar24;
                      if (uVar13 <= ~uVar25) {
                        uVar13 = ~uVar25;
                      }
                      uVar31 = uVar31 + uVar24;
                      uVar13 = -uVar13 & 0xfffffffffffffff0;
                      pauVar26 = (undefined1 (*) [16])((long)plVar28 + uVar22 + 0x150);
                      do {
                        uVar13 = uVar13 - 0x10;
                        auVar32._8_8_ = uVar8;
                        auVar32._0_8_ = uVar5;
                        auVar32 = a64_TBL(ZEXT816(0),*pauVar26,auVar32);
                        puVar18[1] = auVar32._8_8_;
                        *puVar18 = auVar32._0_8_;
                        puVar18 = puVar18 + 2;
                        pauVar26 = pauVar26 + -1;
                      } while (uVar13 != 0);
                      uVar22 = uVar29;
                      if (uVar24 == uVar17) goto joined_r0x00105a60;
                    }
                  }
                  do {
                    uVar29 = uVar22 - 1;
                    *(undefined1 *)(param_2 + uVar31) =
                         *(undefined1 *)((long)plVar28 + uVar22 + 0x15f);
                    uVar31 = uVar31 + 1;
                    if ((int)uVar22 == 1) break;
                    uVar22 = uVar29;
                  } while (uVar31 < param_3);
                }
                else {
                  uVar29 = (ulong)uVar16;
                }
                goto joined_r0x00105a60;
              }
            }
LAB_00105bf8:
            uVar9 = 0x70;
            goto LAB_0010560c;
          }
          *(char *)(param_2 + uVar31) = (char)uVar14;
          uVar31 = uVar31 + 1;
joined_r0x00105a60:
          if (uVar11 != 0x1002) {
            lVar27 = plVar28[3];
            uVar17 = lVar27 - 2;
            if (*(int *)((long)plVar28 + uVar17 * 4 + 0x2160) == 0x1002) {
              *(uint *)((long)plVar28 + uVar17 * 4 + 0x2160) = uVar11;
              if (uVar17 == uVar14) {
                if (iVar3 < (int)uVar11) {
                  uVar16 = 1;
                  while ((int)uVar11 < 0x1000) {
                    uVar11 = *(uint *)((long)plVar28 + (long)(int)uVar11 * 4 + 0x2160);
                    uVar15 = uVar16;
                    if (iVar3 < (int)uVar11) {
                      uVar15 = uVar16 + 1;
                    }
                    if ((0xfff < uVar16) || (uVar16 = uVar15, (int)uVar11 <= iVar3))
                    goto LAB_00105b28;
                  }
                  uVar11 = 0x1002;
                }
LAB_00105b28:
                *(char *)((long)plVar28 + uVar14 + 0x115f) = (char)uVar11;
              }
              else {
                uVar17 = uVar14;
                if (iVar3 < iVar10) {
                  uVar11 = 1;
                  while ((int)uVar17 < 0x1000) {
                    uVar15 = *(uint *)((long)plVar28 + (long)(int)uVar17 * 4 + 0x2160);
                    uVar17 = (ulong)uVar15;
                    uVar16 = uVar11;
                    if (iVar3 < (int)uVar15) {
                      uVar16 = uVar11 + 1;
                    }
                    if ((0xfff < uVar11) || (uVar11 = uVar16, (int)uVar15 <= iVar3))
                    goto LAB_00105b38;
                  }
                  uVar17 = 0x1002;
                }
LAB_00105b38:
                *(char *)((long)plVar28 + lVar27 + 0x115d) = (char)uVar17;
              }
            }
          }
        }
        uVar16 = (uint)uVar29;
        uVar11 = (uint)uVar14;
joined_r0x00105b50:
      } while (uVar31 < param_3);
    }
    plVar28[6] = (long)(int)uVar11;
    plVar28[7] = (long)(int)uVar16;
    if (plVar28[10] != 0) {
LAB_00105b6c:
      uVar8 = 1;
      goto LAB_00105b70;
    }
    do {
      lVar12 = *(long *)(param_1 + 0x70);
      cVar6 = (**(code **)(lVar12 + 0x58))(param_1,local_6c,1);
      if (cVar6 != '\x01') break;
      if (local_6c[0] == 0) {
        *(undefined1 *)(lVar12 + 0x60) = 0;
        *(undefined8 *)(lVar12 + 0x50) = 0;
        goto LAB_00105b6c;
      }
      *(byte *)(lVar12 + 0x60) = local_6c[0];
      bVar7 = (**(code **)(*(long *)(param_1 + 0x70) + 0x58))(param_1,lVar12 + 0x61);
    } while (local_6c[0] == bVar7);
LAB_00105bf0:
    uVar9 = 0x66;
  }
  else {
    uVar9 = 0x6c;
  }
LAB_0010560c:
  uVar8 = 0;
  *(undefined4 *)(param_1 + 0x60) = uVar9;
LAB_00105b70:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


