// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00153210; body: [[00153210, 0015459f]]

undefined8 * FUN_00153210(long *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  size_t sVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long **pplVar15;
  ushort uVar16;
  int iVar17;
  byte *pbVar18;
  ushort uVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  long *plVar27;
  byte *pbVar28;
  size_t sVar29;
  undefined1 uVar30;
  undefined1 auVar31 [16];
  byte local_9c [4];
  undefined1 local_98 [16];
  long *local_88;
  size_t sStack_80;
  long local_78;
  undefined1 local_70 [16];
  undefined1 local_48 [4];
  int local_44;
  
  pbVar18 = (byte *)*param_1;
  pbVar28 = (byte *)param_1[1];
  uVar21 = (long)pbVar28 - (long)pbVar18;
  if (uVar21 < 2) goto LAB_00153244;
  sVar3 = *(short *)pbVar18;
  if (sVar3 == 0x7367) {
    pbVar18 = pbVar18 + 2;
    uVar30 = 1;
    uVar21 = (long)pbVar28 - (long)pbVar18;
    *param_1 = (long)pbVar18;
    local_48[0] = 1;
    if (uVar21 < 2) goto LAB_00153244;
  }
  else {
    uVar30 = 0;
    local_48[0] = 0;
  }
  uVar22 = 0;
  pbVar20 = pbVar18 + 1;
  bVar1 = *pbVar18;
  uVar23 = 0x3d;
  do {
    uVar24 = uVar22 + uVar23 >> 1;
    if ((byte)(&UNK_00171228)[uVar24 * 0x10] < bVar1) {
      uVar22 = uVar24 + 1;
      uVar24 = uVar23;
    }
    else if (((&UNK_00171228)[uVar24 * 0x10] == bVar1) &&
            ((byte)(&UNK_00171229)[uVar24 * 0x10] < *pbVar20)) {
      uVar22 = uVar24 + 1;
      uVar24 = uVar23;
    }
    uVar23 = uVar24;
  } while (uVar24 != uVar22);
  lVar13 = uVar22 * 0x10;
  if (((&UNK_00171228)[lVar13] != bVar1) || ((&UNK_00171229)[lVar13] != *pbVar20)) {
    if (bVar1 == 0x66) {
      if ((*pbVar20 == 0x70) ||
         (((uVar21 != 2 && (*pbVar20 == 0x4c)) && (0xfffffff5 < pbVar18[2] - 0x3a)))) {
        puVar6 = (undefined8 *)FUN_00155564(param_1);
        return puVar6;
      }
      if ((pbVar18 != pbVar28) && (*param_1 = (long)pbVar20, pbVar28 != pbVar20)) {
        bVar1 = *pbVar20;
        if (bVar1 < 0x6c) {
          if (bVar1 == 0x4c) {
            bVar5 = true;
            bVar4 = true;
          }
          else {
            if (bVar1 != 0x52) {
              return (undefined8 *)0x0;
            }
            bVar5 = false;
            bVar4 = true;
          }
        }
        else if (bVar1 == 0x6c) {
          bVar4 = false;
          bVar5 = true;
        }
        else {
          if (bVar1 != 0x72) {
            return (undefined8 *)0x0;
          }
          bVar5 = false;
          bVar4 = false;
        }
        *param_1 = (long)(pbVar18 + 2);
        if (1 < (ulong)((long)pbVar28 - (long)(pbVar18 + 2))) {
          bVar1 = pbVar18[2];
          uVar21 = 0;
          uVar22 = 0x3d;
          do {
            uVar23 = uVar21 + uVar22 >> 1;
            if ((byte)(&UNK_00171228)[uVar23 * 0x10] < bVar1) {
              uVar21 = uVar23 + 1;
              uVar23 = uVar22;
            }
            else if (((&UNK_00171228)[uVar23 * 0x10] == bVar1) &&
                    ((byte)(&UNK_00171229)[uVar23 * 0x10] < pbVar18[3])) {
              uVar21 = uVar23 + 1;
              uVar23 = uVar22;
            }
            uVar22 = uVar23;
          } while (uVar23 != uVar21);
          lVar13 = uVar21 * 0x10;
          if (((&UNK_00171228)[lVar13] == bVar1) && ((&UNK_00171229)[lVar13] == pbVar18[3])) {
            cVar2 = (&UNK_0017122a)[lVar13];
            *param_1 = (long)(pbVar18 + 4);
            if ((cVar2 == '\x02') ||
               ((cVar2 == '\x04' &&
                (pcVar26 = *(char **)(&UNK_00171230 + lVar13), sVar29 = strlen(pcVar26),
                pcVar26[sVar29 - 1] == '*')))) {
              lVar11 = FUN_00153210(param_1);
              if (lVar11 == 0) {
                return (undefined8 *)0x0;
              }
              if (bVar4) {
                lVar12 = FUN_00153210(param_1);
                if (lVar12 == 0) {
                  return (undefined8 *)0x0;
                }
                lVar8 = lVar12;
                if (!bVar5) {
                  lVar8 = lVar11;
                  lVar11 = lVar12;
                }
              }
              else {
                lVar8 = lVar11;
                lVar11 = 0;
              }
              plVar27 = *(long **)(&UNK_00171230 + lVar13);
              sVar29 = strlen((char *)plVar27);
              if ((sVar29 < 8) || (*plVar27 != 0x726f74617265706f)) goto LAB_00154548;
              lVar13 = sVar29 - 8;
              plVar25 = plVar27 + 1;
              if ((lVar13 != 0) && ((char)*plVar25 == ' ')) {
                plVar25 = (long *)((long)plVar27 + 9);
                lVar13 = sVar29 - 9;
              }
              pvVar10 = (void *)param_1[0x266];
              lVar12 = *(long *)((long)pvVar10 + 8);
              puVar6 = pvVar10;
              if (lVar12 - 0xfb0U < 0xfffffffffffff010) {
                puVar6 = malloc(0x1000);
                if (puVar6 == (void *)0x0) goto LAB_00154588;
                lVar12 = 0;
                *puVar6 = pvVar10;
                puVar6[1] = 0;
                param_1[0x266] = (long)puVar6;
              }
              *(long *)((long)puVar6 + 8) = lVar12 + 0x40;
              puVar14 = (undefined8 *)((long)puVar6 + lVar12 + 0x10);
              *puVar14 = &PTR_FUN_001722c8;
              *(undefined1 *)((long)puVar6 + lVar12 + 0x18) = 0x47;
              *(long *)((long)puVar6 + lVar12 + 0x20) = lVar8;
              *(long *)((long)puVar6 + lVar12 + 0x28) = lVar11;
              *(long **)((long)puVar6 + lVar12 + 0x30) = plVar25;
              *(long *)((long)puVar6 + lVar12 + 0x38) = lVar13;
              *(ushort *)((long)puVar6 + lVar12 + 0x19) =
                   *(ushort *)((long)puVar6 + lVar12 + 0x19) & 0xf000 | 0x540;
              *(bool *)((long)puVar6 + lVar12 + 0x40) = bVar5;
              return puVar14;
            }
          }
        }
      }
      goto LAB_00153244;
    }
    if (bVar1 == 0x54) {
      puVar6 = (undefined8 *)FUN_00151fd0(param_1);
      return puVar6;
    }
    if (bVar1 == 0x4c) {
      puVar6 = (undefined8 *)FUN_00154be4(param_1);
      return puVar6;
    }
    if (*(short *)pbVar18 == 0x6c69) {
      lVar13 = param_1[2];
      lVar11 = param_1[3];
      pbVar18 = pbVar18 + 2;
      plVar27 = param_1 + 5;
      *param_1 = (long)pbVar18;
      while ((pbVar18 == pbVar28 || (*pbVar18 != 0x45))) {
        lVar8 = FUN_00155920(param_1);
        if (lVar8 == 0) {
          return (undefined8 *)0x0;
        }
        plVar25 = (long *)param_1[3];
        if (plVar25 == (long *)param_1[4]) {
          plVar9 = (long *)param_1[2];
          sVar29 = (long)plVar25 - (long)plVar9;
          if (plVar9 == plVar27) {
            pvVar10 = malloc(sVar29 * 2);
            if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar25 != plVar27) {
              memcpy(pvVar10,plVar27,sVar29);
            }
            param_1[2] = (long)pvVar10;
          }
          else {
            pvVar10 = realloc(plVar9,sVar29 * 2);
            param_1[2] = (long)pvVar10;
            if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar25 = (long *)((long)pvVar10 + sVar29);
          param_1[3] = (long)plVar25;
          param_1[4] = (long)((long)pvVar10 + ((long)sVar29 >> 2) * 8);
        }
        param_1[3] = (long)(plVar25 + 1);
        *plVar25 = lVar8;
        pbVar28 = (byte *)param_1[1];
        pbVar18 = (byte *)*param_1;
      }
      *param_1 = (long)(pbVar18 + 1);
      local_70 = FUN_00150274(param_1,lVar11 - lVar13 >> 3);
      puVar6 = (undefined8 *)FUN_00155b88(param_1,local_70);
      return puVar6;
    }
    uVar21 = (long)pbVar28 - (long)pbVar18;
    if (1 < uVar21) {
      if (*(short *)pbVar18 == 0x636d) {
        *param_1 = (long)(pbVar18 + 2);
        puVar6 = (undefined8 *)FUN_00155c2c(param_1);
        return puVar6;
      }
      if (*(short *)pbVar18 == 0x786e) {
        *param_1 = (long)(pbVar18 + 2);
        local_70._0_8_ = FUN_00153210(param_1);
        if (local_70._0_8_ != 0) {
          local_88 = (long *)CONCAT44(local_88._4_4_,2);
          puVar6 = (undefined8 *)FUN_00155d94(param_1,local_70,&local_88);
          return puVar6;
        }
        return (undefined8 *)0x0;
      }
    }
    if (((pbVar28 == pbVar18) || (uVar21 < 2)) || (bVar1 != 0x72)) {
      if (1 < uVar21) goto LAB_001536a8;
    }
    else {
      if ((*pbVar20 | 0x20) == 0x71) {
        puVar6 = (undefined8 *)FUN_00155e54(param_1);
        return puVar6;
      }
LAB_001536a8:
      if (*(short *)pbVar18 == 0x6f73) {
        *param_1 = (long)(pbVar18 + 2);
        puVar6 = (undefined8 *)FUN_00156324(param_1);
        return puVar6;
      }
    }
    uVar21 = FUN_0014d5ac(param_1,&DAT_001372a3,2);
    if ((uVar21 & 1) != 0) {
      local_70._0_8_ = FUN_00153210(param_1);
      if (local_70._0_8_ != 0) {
        puVar6 = (undefined8 *)FUN_00156678(param_1,local_70);
        return puVar6;
      }
      return (undefined8 *)0x0;
    }
    uVar21 = FUN_0014d5ac(param_1,&DAT_00136881,2);
    if ((uVar21 & 1) != 0) {
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'T')) {
        local_70._0_8_ = FUN_00151fd0(param_1);
        if (local_70._0_8_ != 0) {
          puVar6 = (undefined8 *)FUN_00156718(param_1,local_70);
          return puVar6;
        }
        return (undefined8 *)0x0;
      }
      local_70._0_8_ = FUN_00155564(param_1);
      if (local_70._0_8_ == 0) {
        return (undefined8 *)0x0;
      }
LAB_0015425c:
      puVar6 = (undefined8 *)FUN_001567b8(param_1,local_70);
      return puVar6;
    }
    uVar21 = FUN_0014d5ac(param_1,&DAT_00136b28,2);
    if ((uVar21 & 1) != 0) {
      lVar13 = param_1[2];
      lVar11 = param_1[3];
      plVar27 = param_1 + 5;
      while ((pcVar26 = (char *)*param_1, pcVar26 == (char *)param_1[1] || (*pcVar26 != 'E'))) {
        lVar8 = FUN_0014fdd4(param_1);
        if (lVar8 == 0) {
          return (undefined8 *)0x0;
        }
        plVar25 = (long *)param_1[3];
        if (plVar25 == (long *)param_1[4]) {
          plVar9 = (long *)param_1[2];
          sVar29 = (long)plVar25 - (long)plVar9;
          if (plVar9 == plVar27) {
            pvVar10 = malloc(sVar29 * 2);
            if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar25 != plVar27) {
              memcpy(pvVar10,plVar27,sVar29);
            }
            param_1[2] = (long)pvVar10;
          }
          else {
            pvVar10 = realloc(plVar9,sVar29 * 2);
            param_1[2] = (long)pvVar10;
            if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar25 = (long *)((long)pvVar10 + sVar29);
          param_1[3] = (long)plVar25;
          param_1[4] = (long)((long)pvVar10 + ((long)sVar29 >> 2) * 8);
        }
        param_1[3] = (long)(plVar25 + 1);
        *plVar25 = lVar8;
      }
      *param_1 = (long)(pcVar26 + 1);
      local_70 = FUN_00150274(param_1,lVar11 - lVar13 >> 3);
      lVar13 = FUN_0015686c(param_1,local_70);
      local_70._0_8_ = lVar13;
      goto LAB_0015425c;
    }
    uVar21 = FUN_0014d5ac(param_1,&DAT_001377e3,2);
    if ((uVar21 & 1) != 0) {
      local_88 = (long *)FUN_0014e160(param_1);
      if (local_88 == (long *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar13 = param_1[2];
      lVar11 = param_1[3];
      while ((pcVar26 = (char *)*param_1, pcVar26 == (char *)param_1[1] || (*pcVar26 != 'E'))) {
        local_70._0_8_ = FUN_00155920(param_1);
        if (local_70._0_8_ == 0) {
          return (undefined8 *)0x0;
        }
        FUN_001500fc(param_1 + 2,local_70);
      }
      *param_1 = (long)(pcVar26 + 1);
      local_70 = FUN_00150274(param_1,lVar11 - lVar13 >> 3);
      puVar6 = (undefined8 *)FUN_00156908(param_1,&local_88,local_70);
      return puVar6;
    }
    uVar21 = FUN_0014d5ac(param_1,&DAT_0013767f,2);
    if ((uVar21 & 1) != 0) {
      puVar6 = (undefined8 *)FUN_001569b4(param_1,"throw");
      return puVar6;
    }
    uVar21 = FUN_0014d5ac(param_1,&DAT_001377ec,2);
    if ((uVar21 & 1) != 0) {
      local_70._0_8_ = FUN_00153210(param_1);
      if (local_70._0_8_ != 0) {
        puVar6 = (undefined8 *)FUN_00156a60(param_1,local_70);
        return puVar6;
      }
      return (undefined8 *)0x0;
    }
    pcVar26 = (char *)*param_1;
    if ((pcVar26 == (char *)param_1[1]) || (*pcVar26 != 'u')) {
      puVar6 = (undefined8 *)FUN_00156b00(param_1,sVar3 == 0x7367);
      return puVar6;
    }
    *param_1 = (long)(pcVar26 + 1);
    local_88 = (long *)FUN_00151444(param_1);
    if (local_88 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    auVar31 = (**(code **)(*local_88 + 0x30))();
    if (((auVar31._8_8_ == 8) && (*auVar31._0_8_ == 0x666f646975755f5f)) &&
       (pcVar26 = (char *)*param_1, pcVar26 != (char *)param_1[1])) {
      if (*pcVar26 == 'z') {
        *param_1 = (long)(pcVar26 + 1);
        local_98._0_8_ = FUN_00153210(param_1);
      }
      else {
        if (*pcVar26 != 't') goto LAB_00154354;
        *param_1 = (long)(pcVar26 + 1);
        local_98._0_8_ = FUN_0014e160(param_1);
      }
      if ((long *)local_98._0_8_ == (long *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar13 = param_1[3] - param_1[2];
      FUN_001500fc(param_1 + 2,local_98);
    }
    else {
LAB_00154354:
      lVar13 = param_1[3] - param_1[2];
      while( true ) {
        pcVar26 = (char *)*param_1;
        if ((pcVar26 != (char *)param_1[1]) && (*pcVar26 == 'E')) break;
        local_70._0_8_ = FUN_0014fdd4(param_1);
        if (local_70._0_8_ == 0) {
          return (undefined8 *)0x0;
        }
        FUN_001500fc(param_1 + 2,local_70);
      }
      *param_1 = (long)(pcVar26 + 1);
    }
    local_70 = FUN_00150274(param_1,lVar13 >> 3);
    iVar17 = 1;
    pplVar15 = &local_88;
LAB_00154178:
    local_78 = CONCAT44(local_78._4_4_,iVar17);
    puVar6 = (undefined8 *)FUN_001548d4(param_1,pplVar15,local_70,&local_78);
    return puVar6;
  }
  plVar25 = *(long **)(&UNK_00171230 + lVar13);
  pbVar20 = pbVar18 + 2;
  *param_1 = (long)pbVar20;
  sVar7 = strlen((char *)plVar25);
  plVar27 = plVar25;
  sVar29 = sVar7;
  if ((byte)(&UNK_0017122a)[lVar13] < 0xb) {
    if ((sVar7 < 8) || (*plVar25 != 0x726f74617265706f)) {
LAB_00154548:
                    /* WARNING: Subroutine does not return */
      FUN_0014ce10("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xb49,
                   "operator name does not start with \'operator\'");
    }
    sVar29 = sVar7 - 8;
    plVar27 = plVar25 + 1;
    if ((sVar29 != 0) && ((char)*plVar27 == ' ')) {
      plVar27 = (long *)((long)plVar25 + 9);
      sVar29 = sVar7 - 9;
    }
  }
  puVar6 = (undefined8 *)0x0;
  local_88 = plVar27;
  sStack_80 = sVar29;
  local_70._0_8_ = plVar27;
  local_70._8_8_ = sVar29;
  switch((&UNK_0017122a)[lVar13]) {
  case 0:
    bVar1 = (&UNK_0017122b)[lVar13];
    lVar13 = FUN_00153210(param_1);
    if (lVar13 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar10 = (void *)param_1[0x266];
    lVar11 = *(long *)((long)pvVar10 + 8);
    puVar14 = pvVar10;
    if (lVar11 - 0xfc0U < 0xfffffffffffff010) {
      puVar14 = malloc(0x1000);
      if (puVar14 == (void *)0x0) {
LAB_00154588:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar11 = 0;
      *puVar14 = pvVar10;
      puVar14[1] = 0;
      param_1[0x266] = (long)puVar14;
    }
    *(long *)((long)puVar14 + 8) = lVar11 + 0x30;
    puVar6 = (undefined8 *)((long)puVar14 + lVar11 + 0x10);
    *puVar6 = &PTR_FUN_00171688;
    *(undefined1 *)((long)puVar14 + lVar11 + 0x18) = 0x42;
    uVar19 = bVar1 >> 1 | 0x540;
    *(long **)((long)puVar14 + lVar11 + 0x20) = plVar27;
    *(size_t *)((long)puVar14 + lVar11 + 0x28) = sVar29;
    uVar16 = *(ushort *)((long)puVar14 + lVar11 + 0x19) & 0xf000;
    goto LAB_00153e04;
  case 1:
    if ((pbVar20 == pbVar28) || (*pbVar20 != 0x5f)) {
      local_70._0_8_ = FUN_00153210(param_1);
      puVar6 = (undefined8 *)0x0;
      if (local_70._0_8_ != 0) {
        local_98._0_4_ = (int)(char)(&UNK_0017122b)[lVar13] >> 1;
        puVar6 = (undefined8 *)FUN_001545a0(param_1,local_70,&local_88,local_98);
      }
    }
    else {
      cVar2 = (&UNK_0017122b)[lVar13];
      *param_1 = (long)(pbVar18 + 3);
      local_78 = CONCAT44(local_78._4_4_,(int)cVar2 >> 1);
      local_98._0_8_ = FUN_00153210(param_1);
      puVar6 = (undefined8 *)0x0;
      if ((long *)local_98._0_8_ != (long *)0x0) {
        puVar6 = (undefined8 *)FUN_00157754(param_1,local_70,local_98,&local_78);
      }
    }
    break;
  case 2:
    local_44 = (int)(char)(&UNK_0017122b)[lVar13] >> 1;
    local_98._0_8_ = FUN_00153210(param_1);
    puVar6 = (undefined8 *)0x0;
    if ((long *)local_98._0_8_ != (long *)0x0) {
      local_78 = FUN_00153210(param_1);
      puVar6 = (undefined8 *)0x0;
      if (local_78 != 0) {
        puVar6 = (undefined8 *)FUN_00157174(param_1,local_98,local_70,&local_78,&local_44);
      }
    }
    break;
  case 3:
    local_70._0_8_ = FUN_00153210(param_1);
    puVar6 = (undefined8 *)0x0;
    if (local_70._0_8_ != 0) {
      local_98._0_8_ = FUN_00153210(param_1);
      puVar6 = (undefined8 *)0x0;
      if ((long *)local_98._0_8_ != (long *)0x0) {
        local_78 = CONCAT44(local_78._4_4_,(int)(char)(&UNK_0017122b)[lVar13] >> 1);
        puVar6 = (undefined8 *)FUN_00154660(param_1,local_70,local_98,&local_78);
      }
    }
    break;
  case 4:
    local_70._0_8_ = FUN_00153210(param_1);
    puVar6 = (undefined8 *)0x0;
    if (local_70._0_8_ != 0) {
      local_98._0_8_ = FUN_00153210(param_1);
      puVar6 = (undefined8 *)0x0;
      if ((long *)local_98._0_8_ != (long *)0x0) {
        local_78 = CONCAT44(local_78._4_4_,(int)(char)(&UNK_0017122b)[lVar13] >> 1);
        puVar6 = (undefined8 *)FUN_0015471c(param_1,local_70,&local_88,local_98,&local_78);
      }
    }
    break;
  case 5:
    lVar11 = param_1[2];
    lVar8 = param_1[3];
    plVar27 = param_1 + 5;
    while ((pbVar20 == pbVar28 || (*pbVar20 != 0x5f))) {
      lVar12 = FUN_00153210(param_1);
      if (lVar12 == 0) {
        return (undefined8 *)0x0;
      }
      plVar25 = (long *)param_1[3];
      if (plVar25 == (long *)param_1[4]) {
        plVar9 = (long *)param_1[2];
        sVar29 = (long)plVar25 - (long)plVar9;
        if (plVar9 == plVar27) {
          pvVar10 = malloc(sVar29 * 2);
          if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar25 != plVar27) {
            memcpy(pvVar10,plVar27,sVar29);
          }
          param_1[2] = (long)pvVar10;
        }
        else {
          pvVar10 = realloc(plVar9,sVar29 * 2);
          param_1[2] = (long)pvVar10;
          if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar25 = (long *)((long)pvVar10 + sVar29);
        param_1[3] = (long)plVar25;
        param_1[4] = (long)((long)pvVar10 + ((long)sVar29 >> 2) * 8);
      }
      param_1[3] = (long)(plVar25 + 1);
      *plVar25 = lVar12;
      pbVar28 = (byte *)param_1[1];
      pbVar20 = (byte *)*param_1;
    }
    *param_1 = (long)(pbVar20 + 1);
    local_70 = FUN_00150274(param_1,lVar8 - lVar11 >> 3);
    local_78 = FUN_0014e160(param_1);
    if (local_78 == 0) {
      return (undefined8 *)0x0;
    }
    uVar21 = FUN_0014d5ac(param_1,&DAT_0013716e,2);
    lVar11 = param_1[2];
    lVar8 = param_1[3];
    while( true ) {
      pcVar26 = (char *)*param_1;
      if ((pcVar26 != (char *)param_1[1]) && (*pcVar26 == 'E')) {
        *param_1 = (long)(pcVar26 + 1);
        local_98 = FUN_00150274(param_1,lVar8 - lVar11 >> 3);
        local_9c[0] = (&UNK_0017122b)[lVar13] & 1;
        local_44 = (int)(char)(&UNK_0017122b)[lVar13] >> 1;
        puVar6 = (undefined8 *)
                 FUN_001547e8(param_1,local_70,&local_78,local_98,local_48,local_9c,&local_44);
        return puVar6;
      }
      if ((uVar21 & 1) == 0) break;
      lVar12 = FUN_00153210(param_1);
      if (lVar12 == 0) {
        return (undefined8 *)0x0;
      }
      plVar25 = (long *)param_1[3];
      if (plVar25 == (long *)param_1[4]) {
        plVar9 = (long *)param_1[2];
        sVar29 = (long)plVar25 - (long)plVar9;
        if (plVar9 == plVar27) {
          pvVar10 = malloc(sVar29 * 2);
          if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar25 != plVar27) {
            memcpy(pvVar10,plVar27,sVar29);
          }
          param_1[2] = (long)pvVar10;
        }
        else {
          pvVar10 = realloc(plVar9,sVar29 * 2);
          param_1[2] = (long)pvVar10;
          if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar25 = (long *)((long)pvVar10 + sVar29);
        param_1[3] = (long)plVar25;
        param_1[4] = (long)((long)pvVar10 + ((long)sVar29 >> 2) * 8);
      }
      param_1[3] = (long)(plVar25 + 1);
      *plVar25 = lVar12;
    }
    goto LAB_00153244;
  case 6:
    lVar11 = FUN_00153210(param_1);
    puVar6 = (undefined8 *)0x0;
    if (lVar11 != 0) {
      pvVar10 = (void *)param_1[0x266];
      bVar1 = (&UNK_0017122b)[lVar13];
      lVar13 = *(long *)((long)pvVar10 + 8);
      puVar14 = pvVar10;
      if (lVar13 - 0xfd0U < 0xfffffffffffff010) {
        puVar14 = malloc(0x1000);
        if (puVar14 == (void *)0x0) goto LAB_00154588;
        lVar13 = 0;
        *puVar14 = pvVar10;
        puVar14[1] = 0;
        param_1[0x266] = (long)puVar14;
      }
      *(long *)((long)puVar14 + 8) = lVar13 + 0x20;
      puVar6 = (undefined8 *)((long)puVar14 + lVar13 + 0x10);
      *puVar6 = &PTR_FUN_001718b8;
      *(undefined1 *)((long)puVar14 + lVar13 + 0x18) = 0x41;
      *(long *)((long)puVar14 + lVar13 + 0x20) = lVar11;
      *(undefined1 *)((long)puVar14 + lVar13 + 0x28) = uVar30;
      *(ushort *)((long)puVar14 + lVar13 + 0x19) =
           *(ushort *)((long)puVar14 + lVar13 + 0x19) & 0xf000 | bVar1 >> 1 | 0x540;
      *(byte *)((long)puVar14 + lVar13 + 0x29) = bVar1 & 1;
    }
    break;
  case 7:
    local_98._0_8_ = FUN_00153210(param_1);
    puVar6 = (undefined8 *)0x0;
    if ((long *)local_98._0_8_ != (long *)0x0) {
      lVar11 = param_1[2];
      lVar8 = param_1[3];
      plVar27 = param_1 + 5;
      while( true ) {
        pcVar26 = (char *)*param_1;
        if ((pcVar26 != (char *)param_1[1]) && (*pcVar26 == 'E')) {
          *param_1 = (long)(pcVar26 + 1);
          local_70 = FUN_00150274(param_1,lVar8 - lVar11 >> 3);
          pplVar15 = (long **)local_98;
          iVar17 = (int)(char)(&UNK_0017122b)[lVar13] >> 1;
          goto LAB_00154178;
        }
        lVar12 = FUN_00153210(param_1);
        puVar6 = (undefined8 *)0x0;
        if (lVar12 == 0) break;
        plVar25 = (long *)param_1[3];
        if (plVar25 == (long *)param_1[4]) {
          plVar9 = (long *)param_1[2];
          sVar29 = (long)plVar25 - (long)plVar9;
          if (plVar9 == plVar27) {
            pvVar10 = malloc(sVar29 * 2);
            if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar25 != plVar27) {
              memcpy(pvVar10,plVar27,sVar29);
            }
            param_1[2] = (long)pvVar10;
          }
          else {
            pvVar10 = realloc(plVar9,sVar29 * 2);
            param_1[2] = (long)pvVar10;
            if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar25 = (long *)((long)pvVar10 + sVar29);
          param_1[3] = (long)plVar25;
          param_1[4] = (long)((long)pvVar10 + ((long)sVar29 >> 2) * 8);
        }
        param_1[3] = (long)(plVar25 + 1);
        *plVar25 = lVar12;
      }
    }
    break;
  case 8:
    lVar11 = param_1[0x61];
    *(undefined1 *)(param_1 + 0x61) = 0;
    local_98._0_8_ = FUN_0014e160(param_1);
    *(char *)(param_1 + 0x61) = (char)lVar11;
    if ((long *)local_98._0_8_ == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar26 = (char *)*param_1;
    lVar11 = param_1[3] - param_1[2] >> 3;
    if ((pcVar26 == (char *)param_1[1]) || (*pcVar26 != '_')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
      *param_1 = (long)(pcVar26 + 1);
    }
    plVar27 = param_1 + 5;
    do {
      pcVar26 = (char *)*param_1;
      if ((pcVar26 != (char *)param_1[1]) && (*pcVar26 == 'E')) {
        *param_1 = (long)(pcVar26 + 1);
        local_70 = FUN_00150274(param_1,lVar11);
        if (!bVar4) goto LAB_00154208;
        goto LAB_00154210;
      }
      lVar8 = FUN_00153210(param_1);
      if (lVar8 == 0) {
        return (undefined8 *)0x0;
      }
      plVar25 = (long *)param_1[3];
      if (plVar25 == (long *)param_1[4]) {
        plVar9 = (long *)param_1[2];
        sVar29 = (long)plVar25 - (long)plVar9;
        if (plVar9 == plVar27) {
          pvVar10 = malloc(sVar29 * 2);
          if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar25 != plVar27) {
            memcpy(pvVar10,plVar27,sVar29);
          }
          param_1[2] = (long)pvVar10;
        }
        else {
          pvVar10 = realloc(plVar9,sVar29 * 2);
          param_1[2] = (long)pvVar10;
          if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar25 = (long *)((long)pvVar10 + sVar29);
        param_1[3] = (long)plVar25;
        param_1[4] = (long)((long)pvVar10 + ((long)sVar29 >> 2) * 8);
      }
      param_1[3] = (long)(plVar25 + 1);
      *plVar25 = lVar8;
    } while (bVar4);
    local_70 = FUN_00150274(param_1,lVar11);
LAB_00154208:
    if (local_70._8_8_ == 1) {
LAB_00154210:
      local_78 = CONCAT44(local_78._4_4_,(int)(char)(&UNK_0017122b)[lVar13] >> 1);
      puVar6 = (undefined8 *)FUN_00154994(param_1,local_98,local_70,&local_78);
      return puVar6;
    }
LAB_00153244:
    puVar6 = (undefined8 *)0x0;
    break;
  case 9:
    local_70._0_8_ = FUN_00153210(param_1);
    puVar6 = (undefined8 *)0x0;
    if (local_70._0_8_ != 0) {
      local_98._0_8_ = FUN_00153210(param_1);
      puVar6 = (undefined8 *)0x0;
      if ((long *)local_98._0_8_ != (long *)0x0) {
        local_78 = FUN_00153210(param_1);
        puVar6 = (undefined8 *)0x0;
        if (local_78 != 0) {
          local_44 = (int)(char)(&UNK_0017122b)[lVar13] >> 1;
          puVar6 = (undefined8 *)FUN_00154a54(param_1,local_70,local_98,&local_78,&local_44);
        }
      }
    }
    break;
  case 10:
    break;
  case 0xb:
    local_70._0_8_ = FUN_0014e160(param_1);
    puVar6 = (undefined8 *)0x0;
    if (local_70._0_8_ != 0) {
      local_98._0_8_ = FUN_00153210(param_1);
      puVar6 = (undefined8 *)0x0;
      if ((long *)local_98._0_8_ != (long *)0x0) {
        local_78 = CONCAT44(local_78._4_4_,(int)(char)(&UNK_0017122b)[lVar13] >> 1);
        puVar6 = (undefined8 *)FUN_00154b1c(param_1,&local_88,local_70,local_98,&local_78);
      }
    }
    break;
  case 0xc:
    bVar1 = (&UNK_0017122b)[lVar13];
    if ((bVar1 & 1) == 0) {
      lVar13 = FUN_00153210(param_1);
    }
    else {
      lVar13 = FUN_0014e160(param_1);
    }
    if (lVar13 == 0) goto LAB_00153244;
    pvVar10 = (void *)param_1[0x266];
    lVar11 = *(long *)((long)pvVar10 + 8);
    puVar14 = pvVar10;
    if (lVar11 - 0xfb0U < 0xfffffffffffff010) {
      puVar14 = malloc(0x1000);
      if (puVar14 == (void *)0x0) goto LAB_00154588;
      lVar11 = 0;
      *puVar14 = pvVar10;
      puVar14[1] = 0;
      param_1[0x266] = (long)puVar14;
    }
    *(long *)((long)puVar14 + 8) = lVar11 + 0x40;
    puVar6 = (undefined8 *)((long)puVar14 + lVar11 + 0x10);
    *puVar6 = &PTR_FUN_00171ae8;
    *(undefined1 *)((long)puVar14 + lVar11 + 0x18) = 0x3c;
    uVar19 = 0x540;
    *(long **)((long)puVar14 + lVar11 + 0x20) = plVar27;
    *(size_t *)((long)puVar14 + lVar11 + 0x28) = sVar29;
    uVar16 = *(ushort *)((long)puVar14 + lVar11 + 0x19) & 0xf000 | (ushort)(bVar1 >> 1);
    *(undefined8 *)((long)puVar14 + lVar11 + 0x38) = 0;
    *(undefined8 *)((long)puVar14 + lVar11 + 0x40) = 0;
LAB_00153e04:
    puVar6[4] = lVar13;
    *(ushort *)((long)puVar6 + 9) = uVar16 | uVar19;
    break;
  default:
    *(char *)(param_1 + 0x61) = (char)plVar25;
                    /* WARNING: Subroutine does not return */
    FUN_00168c3c();
  }
  return puVar6;
}


