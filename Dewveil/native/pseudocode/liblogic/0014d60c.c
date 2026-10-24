// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014d60c; body: [[0014d60c, 0014dfe7]]

undefined8 * FUN_0014d60c(long *param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long extraout_x1;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  char *pcVar19;
  char *pcVar20;
  byte *pbVar21;
  ushort uVar22;
  byte bVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  ulong uVar29;
  void *pvVar30;
  size_t sVar31;
  long *plVar32;
  undefined1 auVar33 [16];
  long local_150;
  long local_148;
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined1 local_118 [8];
  ulong local_110;
  char local_108;
  undefined1 auStack_100 [160];
  
  FUN_0014f4f8(auStack_100,param_1);
  auVar8._8_8_ = local_140._8_8_;
  auVar8._0_8_ = local_140._0_8_;
  auVar33._8_8_ = local_140._8_8_;
  auVar33._0_8_ = local_140._0_8_;
  pcVar19 = (char *)*param_1;
  pcVar20 = (char *)param_1[1];
  if (pcVar20 == pcVar19) {
LAB_0014d6d4:
    local_120 = (local_120 >> 0x10 & 0xffff) << 0x10;
    local_110 = param_1[0x5b] - param_1[0x5a] >> 3;
    local_118[0] = 0;
    local_108 = '\0';
    puVar13 = (undefined8 *)FUN_0014f6a0(param_1,&local_120);
    auVar33._8_8_ = local_140._8_8_;
    auVar33._0_8_ = local_140._0_8_;
    auVar4._8_8_ = local_140._8_8_;
    auVar4._0_8_ = local_140._0_8_;
    local_128 = puVar13;
    if (puVar13 == (undefined8 *)0x0) goto LAB_0014df58;
    lVar16 = param_1[0x5a];
    uVar12 = param_1[0x5b] - lVar16 >> 3;
    if (local_110 < uVar12) {
      puVar24 = (undefined8 *)param_1[0x53];
      if ((puVar24 != (undefined8 *)param_1[0x54]) &&
         (plVar27 = (long *)*puVar24, plVar27 != (long *)0x0)) {
        lVar26 = *(long *)(lVar16 + local_110 * 8);
        lVar17 = *plVar27;
        uVar28 = *(ulong *)(lVar26 + 0x10);
        uVar29 = local_110;
        if (uVar28 < (ulong)(plVar27[1] - lVar17 >> 3)) {
          do {
            uVar29 = uVar29 + 1;
            *(undefined8 *)(lVar26 + 0x18) = *(undefined8 *)(lVar17 + uVar28 * 8);
            if (uVar12 == uVar29) goto LAB_0014d860;
            plVar27 = (long *)*puVar24;
            if (plVar27 == (long *)0x0) break;
            lVar26 = *(long *)(lVar16 + uVar29 * 8);
            lVar17 = *plVar27;
            uVar28 = *(ulong *)(lVar26 + 0x10);
          } while (uVar28 < (ulong)(plVar27[1] - lVar17 >> 3));
          if (uVar12 <= uVar29) goto LAB_0014d868;
        }
      }
    }
    else {
      if (uVar12 < local_110) {
                    /* WARNING: Subroutine does not return */
        FUN_0014ce10("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x87,
                     "shrinkToSize() can\'t expand!");
      }
LAB_0014d860:
      param_1[0x5b] = lVar16 + local_110 * 8;
LAB_0014d868:
      pbVar18 = (byte *)*param_1;
      pbVar21 = (byte *)param_1[1];
      local_140 = auVar4;
      if ((pbVar21 == pbVar18) ||
         ((local_140 = auVar33, *pbVar18 - 0x2e < 0x32 &&
          ((1L << ((ulong)(*pbVar18 - 0x2e) & 0x3f) & 0x2000000800001U) != 0)))) goto LAB_0014df58;
      local_130 = 0;
      if (((ulong)((long)pbVar21 - (long)pbVar18) < 0xd) ||
         (*(long *)pbVar18 != 0x6c62616e65396155 || *(long *)(pbVar18 + 5) != 0x4966695f656c6261)) {
LAB_0014d8e0:
        local_148 = 0;
        if (((local_120 & 1) == 0) && (local_120._1_1_ != '\0')) {
          local_148 = FUN_0014e160(param_1);
          auVar33 = local_140;
          if (local_148 == 0) goto LAB_0014df54;
        }
        pcVar19 = (char *)*param_1;
        pcVar20 = (char *)param_1[1];
        local_140._0_8_ = 0;
        local_140._8_8_ = 0;
        auVar33 = ZEXT816(0);
        if ((pcVar19 == pcVar20) || (*pcVar19 != 'v')) {
          lVar16 = param_1[2];
          lVar17 = param_1[3];
          plVar27 = param_1 + 5;
          do {
            puVar13 = (undefined8 *)FUN_0014e160(param_1);
            auVar33._8_8_ = local_140._8_8_;
            auVar33._0_8_ = local_140._0_8_;
            if (puVar13 == (undefined8 *)0x0) goto LAB_0014df54;
            plVar32 = (long *)param_1[3];
            puVar24 = puVar13;
            if ((local_108 != '\0') && (lVar17 - lVar16 == (long)plVar32 - param_1[2])) {
              pvVar30 = (void *)param_1[0x266];
              lVar26 = *(long *)((long)pvVar30 + 8);
              puVar14 = pvVar30;
              if (lVar26 - 0xfd0U < 0xfffffffffffff010) {
                puVar14 = malloc(0x1000);
                if (puVar14 == (void *)0x0) goto LAB_0014dfd4;
                lVar26 = 0;
                *puVar14 = pvVar30;
                puVar14[1] = 0;
                param_1[0x266] = (long)puVar14;
              }
              *(long *)((long)puVar14 + 8) = lVar26 + 0x20;
              puVar24 = (undefined8 *)((long)puVar14 + lVar26 + 0x10);
              *puVar24 = &PTR_FUN_001731a8;
              *(undefined1 *)((long)puVar14 + lVar26 + 0x18) = 0x57;
              *(undefined8 **)((long)puVar14 + lVar26 + 0x20) = puVar13;
              *(ushort *)((long)puVar14 + lVar26 + 0x19) =
                   *(ushort *)((long)puVar14 + lVar26 + 0x19) & 0xf000 | 0x540;
              plVar32 = (long *)param_1[3];
            }
            if (plVar32 == (long *)param_1[4]) {
              plVar15 = (long *)param_1[2];
              sVar31 = (long)plVar32 - (long)plVar15;
              if (plVar15 == plVar27) {
                pvVar30 = malloc(sVar31 * 2);
                if (pvVar30 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                if (plVar32 != plVar27) {
                  memcpy(pvVar30,plVar27,sVar31);
                }
                param_1[2] = (long)pvVar30;
              }
              else {
                pvVar30 = realloc(plVar15,sVar31 * 2);
                param_1[2] = (long)pvVar30;
                if (pvVar30 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
              }
              plVar32 = (long *)((long)pvVar30 + sVar31);
              param_1[3] = (long)plVar32;
              param_1[4] = (long)((long)pvVar30 + ((long)sVar31 >> 2) * 8);
            }
            param_1[3] = (long)(plVar32 + 1);
            *plVar32 = (long)puVar24;
          } while (((byte *)param_1[1] != (byte *)*param_1) &&
                  ((uVar3 = *(byte *)*param_1 - 0x2e, 0x31 < uVar3 ||
                   ((1L << ((ulong)uVar3 & 0x3f) & 0x2000800800001U) == 0))));
          auVar33 = FUN_00150274(param_1,lVar17 - lVar16 >> 3);
          pcVar19 = (char *)*param_1;
          pcVar20 = (char *)param_1[1];
        }
        else {
          pcVar19 = pcVar19 + 1;
          *param_1 = (long)pcVar19;
        }
        local_150 = 0;
        local_140 = auVar33;
        if ((pcVar19 != pcVar20) && (*pcVar19 == 'Q')) {
          uVar2 = *(undefined1 *)((long)param_1 + 0x30a);
          *param_1 = (long)(pcVar19 + 1);
          *(undefined1 *)((long)param_1 + 0x30a) = 1;
          local_150 = FUN_00153210(param_1);
          *(undefined1 *)((long)param_1 + 0x30a) = uVar2;
          auVar33 = local_140;
          if (local_150 == 0) goto LAB_0014df54;
        }
        puVar13 = (undefined8 *)
                  FUN_001503d0(param_1,&local_148,&local_128,local_140,&local_130,&local_150,
                               (ulong)&local_120 | 4,local_118);
        goto LAB_0014df58;
      }
      lVar16 = param_1[2];
      lVar17 = param_1[3];
      pbVar18 = pbVar18 + 0xd;
      plVar27 = param_1 + 5;
      *param_1 = (long)pbVar18;
      while( true ) {
        if ((pbVar18 != pbVar21) && (*pbVar18 == 0x45)) {
          *param_1 = (long)(pbVar18 + 1);
          local_140 = FUN_00150274(param_1,lVar17 - lVar16 >> 3);
          local_130 = FUN_001501d4(param_1,local_140);
          goto LAB_0014d8e0;
        }
        lVar26 = FUN_0014fdd4(param_1);
        auVar33._8_8_ = local_140._8_8_;
        auVar33._0_8_ = local_140._0_8_;
        if (lVar26 == 0) break;
        plVar32 = (long *)param_1[3];
        if (plVar32 == (long *)param_1[4]) {
          plVar15 = (long *)param_1[2];
          sVar31 = (long)plVar32 - (long)plVar15;
          if (plVar15 == plVar27) {
            pvVar30 = malloc(sVar31 * 2);
            if (pvVar30 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar32 != plVar27) {
              memcpy(pvVar30,plVar27,sVar31);
            }
            param_1[2] = (long)pvVar30;
          }
          else {
            pvVar30 = realloc(plVar15,sVar31 * 2);
            param_1[2] = (long)pvVar30;
            if (pvVar30 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar32 = (long *)((long)pvVar30 + sVar31);
          param_1[3] = (long)plVar32;
          param_1[4] = (long)((long)pvVar30 + ((long)sVar31 >> 2) * 8);
        }
        param_1[3] = (long)(plVar32 + 1);
        *plVar32 = lVar26;
        pbVar18 = (byte *)*param_1;
        pbVar21 = (byte *)param_1[1];
      }
    }
  }
  else if (*pcVar19 == 'G') {
    if (1 < (ulong)((long)pcVar20 - (long)pcVar19)) {
      cVar1 = pcVar19[1];
      if (cVar1 == 'I') {
        *param_1 = (long)(pcVar19 + 2);
        local_120 = 0;
        uVar29 = FUN_00150fd8(param_1,&local_120);
        uVar12 = local_120;
        auVar5._8_8_ = local_140._8_8_;
        auVar5._0_8_ = local_140._0_8_;
        puVar13 = (undefined8 *)0x0;
        if (((uVar29 & 1) != 0) || (local_140 = auVar5, local_120 == 0)) goto LAB_0014df58;
        pvVar30 = (void *)param_1[0x266];
        lVar16 = *(long *)((long)pvVar30 + 8);
        puVar24 = pvVar30;
        if (lVar16 - 0xfc0U < 0xfffffffffffff010) {
          puVar24 = malloc(0x1000);
          if (puVar24 == (void *)0x0) {
LAB_0014dfd4:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar16 = 0;
          *puVar24 = pvVar30;
          puVar24[1] = 0;
          param_1[0x266] = (long)puVar24;
        }
        *(long *)((long)puVar24 + 8) = lVar16 + 0x30;
        puVar13 = (undefined8 *)((long)puVar24 + lVar16 + 0x10);
        *puVar13 = &PTR_FUN_00170ff8;
        uVar22 = *(ushort *)((long)puVar24 + lVar16 + 0x19);
        uVar25 = 0x17;
        *(ulong *)((long)puVar24 + lVar16 + 0x30) = uVar12;
        *(undefined1 *)((long)puVar24 + lVar16 + 0x18) = 0x15;
        pcVar19 = "initializer for module ";
LAB_0014daf8:
        puVar13[2] = pcVar19;
        puVar13[3] = uVar25;
        *(ushort *)((long)puVar13 + 9) = uVar22 & 0xf000 | 0x540;
        goto LAB_0014df58;
      }
      if (cVar1 == 'R') {
        *param_1 = (long)(pcVar19 + 2);
        local_120 = FUN_0014f6a0(param_1,0);
        auVar10._8_8_ = local_140._8_8_;
        auVar10._0_8_ = local_140._0_8_;
        auVar9._8_8_ = local_140._8_8_;
        auVar9._0_8_ = local_140._0_8_;
        auVar33._8_8_ = local_140._8_8_;
        auVar33._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          pbVar18 = (byte *)*param_1;
          pbVar21 = (byte *)param_1[1];
          if (pbVar21 == pbVar18) {
LAB_0014da58:
            puVar13 = (undefined8 *)FUN_00150f28(param_1,&local_120);
            goto LAB_0014df58;
          }
          bVar23 = *pbVar18;
          if ((bVar23 < 0x30) || ((0x39 < bVar23 && (0x19 < bVar23 - 0x41)))) {
            bVar11 = true;
            if (pbVar18 != pbVar21) {
LAB_0014da04:
              if (bVar23 == 0x5f) {
                *param_1 = (long)(pbVar18 + 1);
                goto LAB_0014da58;
              }
            }
LAB_0014da54:
            auVar33 = auVar9;
            if (bVar11) goto LAB_0014da58;
          }
          else {
            do {
              bVar23 = *pbVar18;
              if ((bVar23 < 0x30) || ((0x39 < bVar23 && (0x19 < bVar23 - 0x41)))) {
                bVar11 = false;
                if (pbVar18 == pbVar21) goto LAB_0014da54;
                goto LAB_0014da04;
              }
              pbVar18 = pbVar18 + 1;
              *param_1 = (long)pbVar18;
              auVar33 = auVar10;
            } while (pbVar18 != pbVar21);
          }
        }
      }
      else {
        auVar33 = auVar8;
        if (cVar1 == 'V') {
          *param_1 = (long)(pcVar19 + 2);
          lVar16 = FUN_0014f6a0(param_1,0);
          auVar33._8_8_ = local_140._8_8_;
          auVar33._0_8_ = local_140._0_8_;
          if (lVar16 != 0) {
            pvVar30 = (void *)param_1[0x266];
            lVar17 = *(long *)((long)pvVar30 + 8);
            puVar24 = pvVar30;
            if (lVar17 - 0xfc0U < 0xfffffffffffff010) {
              puVar24 = malloc(0x1000);
              if (puVar24 == (void *)0x0) goto LAB_0014dfd4;
              lVar17 = 0;
              *puVar24 = pvVar30;
              puVar24[1] = 0;
              param_1[0x266] = (long)puVar24;
            }
            *(long *)((long)puVar24 + 8) = lVar17 + 0x30;
            puVar13 = (undefined8 *)((long)puVar24 + lVar17 + 0x10);
            *puVar13 = &PTR_FUN_00170ff8;
            uVar22 = *(ushort *)((long)puVar24 + lVar17 + 0x19);
            uVar25 = 0x13;
            *(long *)((long)puVar24 + lVar17 + 0x30) = lVar16;
            *(undefined1 *)((long)puVar24 + lVar17 + 0x18) = 0x15;
            pcVar19 = "guard variable for ";
            goto LAB_0014daf8;
          }
        }
      }
    }
  }
  else {
    if (*pcVar19 != 'T') goto LAB_0014d6d4;
    if ((ulong)((long)pcVar20 - (long)pcVar19) < 2) {
LAB_0014db7c:
      pcVar19 = pcVar19 + 1;
      *param_1 = (long)pcVar19;
      if (pcVar20 == pcVar19) {
        bVar11 = false;
      }
      else {
        bVar11 = *pcVar19 == 'v';
      }
      uVar12 = FUN_00150a14(param_1);
      auVar33._8_8_ = local_140._8_8_;
      auVar33._0_8_ = local_140._0_8_;
      if ((uVar12 & 1) == 0) {
        local_120 = FUN_0014d60c(param_1);
        auVar33._8_8_ = local_140._8_8_;
        auVar33._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          if (bVar11) {
            puVar13 = (undefined8 *)FUN_00150dcc();
          }
          else {
            puVar13 = (undefined8 *)FUN_00150e7c(param_1,&local_120);
          }
          goto LAB_0014df58;
        }
      }
    }
    else {
      bVar23 = pcVar19[1];
      if (bVar23 < 0x53) {
        if (bVar23 < 0x48) {
          if (bVar23 == 0x41) {
            *param_1 = (long)(pcVar19 + 2);
            local_120 = FUN_0014fdd4(param_1);
            auVar33._8_8_ = local_140._8_8_;
            auVar33._0_8_ = local_140._0_8_;
            if (local_120 != 0) {
              puVar13 = (undefined8 *)FUN_001506a4(param_1,&local_120);
              goto LAB_0014df58;
            }
          }
          else {
            if (bVar23 != 0x43) goto LAB_0014db7c;
            *param_1 = (long)(pcVar19 + 2);
            local_120 = FUN_0014e160(param_1);
            auVar33._8_8_ = local_140._8_8_;
            auVar33._0_8_ = local_140._0_8_;
            if (local_120 != 0) {
              FUN_0014e020(param_1,1);
              auVar7._8_8_ = local_140._8_8_;
              auVar7._0_8_ = local_140._0_8_;
              auVar6._8_8_ = local_140._8_8_;
              auVar6._0_8_ = local_140._0_8_;
              auVar33._8_8_ = local_140._8_8_;
              auVar33._0_8_ = local_140._0_8_;
              if (((extraout_x1 != 0) &&
                  (pcVar19 = (char *)*param_1, auVar33 = auVar6, pcVar19 != (char *)param_1[1])) &&
                 (auVar33 = auVar7, *pcVar19 == '_')) {
                *param_1 = (long)(pcVar19 + 1);
                local_140._0_8_ = FUN_0014e160(param_1);
                auVar33._8_8_ = local_140._8_8_;
                auVar33._0_8_ = local_140._0_8_;
                if (local_140._0_8_ != 0) {
                  puVar13 = (undefined8 *)FUN_00150c74(param_1,local_140,&local_120);
                  goto LAB_0014df58;
                }
              }
            }
          }
        }
        else if (bVar23 == 0x48) {
          *param_1 = (long)(pcVar19 + 2);
          local_120 = FUN_0014f6a0(param_1,0);
          auVar33._8_8_ = local_140._8_8_;
          auVar33._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_00150d1c(param_1,&local_120);
            goto LAB_0014df58;
          }
        }
        else {
          if (bVar23 != 0x49) goto LAB_0014db7c;
          *param_1 = (long)(pcVar19 + 2);
          local_120 = FUN_0014e160(param_1);
          auVar33._8_8_ = local_140._8_8_;
          auVar33._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_001508b4(param_1,&local_120);
            goto LAB_0014df58;
          }
        }
      }
      else if (bVar23 < 0x56) {
        if (bVar23 == 0x53) {
          *param_1 = (long)(pcVar19 + 2);
          local_120 = FUN_0014e160(param_1);
          auVar33._8_8_ = local_140._8_8_;
          auVar33._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_00150964(param_1,&local_120);
            goto LAB_0014df58;
          }
        }
        else {
          if (bVar23 != 0x54) goto LAB_0014db7c;
          *param_1 = (long)(pcVar19 + 2);
          local_120 = FUN_0014e160(param_1);
          auVar33._8_8_ = local_140._8_8_;
          auVar33._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_00150804(param_1,&local_120);
            goto LAB_0014df58;
          }
        }
      }
      else if (bVar23 == 0x56) {
        *param_1 = (long)(pcVar19 + 2);
        local_120 = FUN_0014e160(param_1);
        auVar33._8_8_ = local_140._8_8_;
        auVar33._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          puVar13 = (undefined8 *)FUN_00150754(param_1,&local_120);
          goto LAB_0014df58;
        }
      }
      else if (bVar23 == 0x57) {
        *param_1 = (long)(pcVar19 + 2);
        local_120 = FUN_0014f6a0(param_1,0);
        auVar33._8_8_ = local_140._8_8_;
        auVar33._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          puVar13 = (undefined8 *)
                    FUN_0014e0ac(param_1,"thread-local wrapper routine for ",&local_120);
          goto LAB_0014df58;
        }
      }
      else {
        if (bVar23 != 99) goto LAB_0014db7c;
        *param_1 = (long)(pcVar19 + 2);
        uVar12 = FUN_00150a14(param_1);
        auVar33._8_8_ = local_140._8_8_;
        auVar33._0_8_ = local_140._0_8_;
        if ((uVar12 & 1) == 0) {
          uVar12 = FUN_00150a14(param_1);
          auVar33._8_8_ = local_140._8_8_;
          auVar33._0_8_ = local_140._0_8_;
          if ((uVar12 & 1) == 0) {
            local_120 = FUN_0014d60c(param_1);
            auVar33._8_8_ = local_140._8_8_;
            auVar33._0_8_ = local_140._0_8_;
            if (local_120 != 0) {
              puVar13 = (undefined8 *)FUN_00150bc4(param_1,&local_120);
              goto LAB_0014df58;
            }
          }
        }
      }
    }
  }
LAB_0014df54:
  puVar13 = (undefined8 *)0x0;
  local_140 = auVar33;
LAB_0014df58:
  FUN_001504c4(auStack_100);
  return puVar13;
}


