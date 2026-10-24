// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d642c; body: [[001d642c, 001d77d3]]

undefined8 * FUN_001d642c(long *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  size_t sVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long **pplVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  char *pcVar23;
  size_t sVar24;
  long *plVar25;
  byte *pbVar26;
  long *plVar27;
  undefined1 uVar28;
  undefined1 auVar29 [16];
  byte local_9c [4];
  undefined1 local_98 [16];
  long *local_88;
  size_t sStack_80;
  long local_78;
  undefined1 local_70 [16];
  undefined1 local_48 [4];
  uint local_44;
  
  pbVar16 = (byte *)*param_1;
  pbVar26 = (byte *)param_1[1];
  uVar18 = (long)pbVar26 - (long)pbVar16;
  if (uVar18 < 2) goto LAB_001d6460;
  sVar3 = *(short *)pbVar16;
  if (sVar3 == 0x7367) {
    pbVar16 = pbVar16 + 2;
    uVar28 = 1;
    uVar18 = (long)pbVar26 - (long)pbVar16;
    *param_1 = (long)pbVar16;
    local_48[0] = 1;
    if (uVar18 < 2) goto LAB_001d6460;
  }
  else {
    uVar28 = 0;
    local_48[0] = 0;
  }
  uVar19 = 0;
  pbVar17 = pbVar16 + 1;
  bVar1 = *pbVar16;
  uVar20 = 0x3e;
  do {
    uVar21 = uVar19 + uVar20 >> 1;
    if ((byte)(&UNK_001f3d68)[uVar21 * 0x10] < bVar1) {
      uVar19 = uVar21 + 1;
      uVar21 = uVar20;
    }
    else if (((&UNK_001f3d68)[uVar21 * 0x10] == bVar1) &&
            ((byte)(&UNK_001f3d69)[uVar21 * 0x10] < *pbVar17)) {
      uVar19 = uVar21 + 1;
      uVar21 = uVar20;
    }
    uVar20 = uVar21;
  } while (uVar21 != uVar19);
  lVar12 = uVar19 * 0x10;
  if (((&UNK_001f3d68)[lVar12] != bVar1) || ((&UNK_001f3d69)[lVar12] != *pbVar17)) {
    if (bVar1 != 0x66) {
      if (bVar1 == 0x54) {
        puVar6 = (undefined8 *)FUN_001d5250(param_1);
        return puVar6;
      }
      if (bVar1 == 0x4c) {
        puVar6 = (undefined8 *)FUN_001d7e24(param_1);
        return puVar6;
      }
      if (*(short *)pbVar16 == 0x6c69) {
        lVar12 = param_1[2];
        lVar10 = param_1[3];
        pbVar16 = pbVar16 + 2;
        *param_1 = (long)pbVar16;
        while ((pbVar16 == pbVar26 || (*pbVar16 != 0x45))) {
          lVar8 = FUN_001d8b6c(param_1);
          if (lVar8 == 0) {
            return (undefined8 *)0x0;
          }
          plVar25 = (long *)param_1[3];
          if (plVar25 == (long *)param_1[4]) {
            plVar22 = (long *)param_1[2];
            sVar24 = (long)plVar25 - (long)plVar22;
            if (plVar22 == param_1 + 5) {
              pvVar9 = malloc(sVar24 * 2);
              if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar25 != param_1 + 5) {
                memmove(pvVar9,plVar22,sVar24);
              }
              param_1[2] = (long)pvVar9;
            }
            else {
              pvVar9 = realloc(plVar22,sVar24 * 2);
              param_1[2] = (long)pvVar9;
              if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            plVar25 = (long *)((long)pvVar9 + sVar24);
            param_1[4] = (long)((long)pvVar9 + ((long)sVar24 >> 2) * 8);
          }
          *plVar25 = lVar8;
          pbVar16 = (byte *)*param_1;
          pbVar26 = (byte *)param_1[1];
          param_1[3] = (long)(plVar25 + 1);
        }
        *param_1 = (long)(pbVar16 + 1);
        local_70 = FUN_001d34d4(param_1,lVar10 - lVar12 >> 3);
        puVar6 = (undefined8 *)FUN_001d8dc8(param_1,local_70);
        return puVar6;
      }
      uVar18 = (long)pbVar26 - (long)pbVar16;
      if (1 < uVar18) {
        if (*(short *)pbVar16 == 0x636d) {
          *param_1 = (long)(pbVar16 + 2);
          puVar6 = (undefined8 *)FUN_001d8e6c(param_1);
          return puVar6;
        }
        if (*(short *)pbVar16 == 0x786e) {
          *param_1 = (long)(pbVar16 + 2);
          local_70._0_8_ = FUN_001d642c(param_1);
          if (local_70._0_8_ != 0) {
            local_88 = (long *)CONCAT44(local_88._4_4_,2);
            puVar6 = (undefined8 *)FUN_001d8fdc(param_1,local_70,&local_88);
            return puVar6;
          }
          return (undefined8 *)0x0;
        }
      }
      if (pbVar26 != pbVar16) {
        if ((uVar18 < 2) || (bVar1 != 0x72)) {
          if (uVar18 < 2) goto LAB_001d6904;
        }
        else if ((*pbVar17 | 0x20) == 0x71) {
          puVar6 = (undefined8 *)FUN_001d909c(param_1);
          return puVar6;
        }
        if (*(short *)pbVar16 == 0x6f73) {
          *param_1 = (long)(pbVar16 + 2);
          puVar6 = (undefined8 *)FUN_001d956c(param_1);
          return puVar6;
        }
      }
LAB_001d6904:
      uVar18 = FUN_001d036c(param_1,&DAT_0011e530,2);
      if ((uVar18 & 1) != 0) {
        local_70._0_8_ = FUN_001d642c(param_1);
        if (local_70._0_8_ != 0) {
          puVar6 = (undefined8 *)FUN_001d98c4(param_1,local_70);
          return puVar6;
        }
        return (undefined8 *)0x0;
      }
      uVar18 = FUN_001d036c(param_1,&DAT_0011da21,2);
      if ((uVar18 & 1) != 0) {
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'T')) {
          local_70._0_8_ = FUN_001d5250(param_1);
          if (local_70._0_8_ != 0) {
            puVar6 = (undefined8 *)FUN_001d9964(param_1,local_70);
            return puVar6;
          }
          return (undefined8 *)0x0;
        }
        local_70._0_8_ = FUN_001d87a8(param_1);
        if (local_70._0_8_ == 0) {
          return (undefined8 *)0x0;
        }
LAB_001d748c:
        puVar6 = (undefined8 *)FUN_001d9a04(param_1,local_70);
        return puVar6;
      }
      uVar18 = FUN_001d036c(param_1,&DAT_0011dd0f,2);
      if ((uVar18 & 1) != 0) {
        lVar12 = param_1[2];
        lVar10 = param_1[3];
        while ((pcVar23 = (char *)*param_1, pcVar23 == (char *)param_1[1] || (*pcVar23 != 'E'))) {
          lVar8 = FUN_001d3028(param_1);
          if (lVar8 == 0) {
            return (undefined8 *)0x0;
          }
          plVar25 = (long *)param_1[3];
          if (plVar25 == (long *)param_1[4]) {
            plVar22 = (long *)param_1[2];
            sVar24 = (long)plVar25 - (long)plVar22;
            if (plVar22 == param_1 + 5) {
              pvVar9 = malloc(sVar24 * 2);
              if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar25 != param_1 + 5) {
                memmove(pvVar9,plVar22,sVar24);
              }
              param_1[2] = (long)pvVar9;
            }
            else {
              pvVar9 = realloc(plVar22,sVar24 * 2);
              param_1[2] = (long)pvVar9;
              if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            plVar25 = (long *)((long)pvVar9 + sVar24);
            param_1[4] = (long)((long)pvVar9 + ((long)sVar24 >> 2) * 8);
          }
          *plVar25 = lVar8;
          param_1[3] = (long)(plVar25 + 1);
        }
        *param_1 = (long)(pcVar23 + 1);
        local_70 = FUN_001d34d4(param_1,lVar10 - lVar12 >> 3);
        lVar12 = FUN_001d9ab8(param_1,local_70);
        local_70._0_8_ = lVar12;
        goto LAB_001d748c;
      }
      uVar18 = FUN_001d036c(param_1,&DAT_0011eab6,2);
      if ((uVar18 & 1) != 0) {
        local_88 = (long *)FUN_001d0f90(param_1);
        if (local_88 == (long *)0x0) {
          return (undefined8 *)0x0;
        }
        lVar12 = param_1[2];
        lVar10 = param_1[3];
        while ((pcVar23 = (char *)*param_1, pcVar23 == (char *)param_1[1] || (*pcVar23 != 'E'))) {
          local_70._0_8_ = FUN_001d8b6c(param_1);
          if (local_70._0_8_ == 0) {
            return (undefined8 *)0x0;
          }
          FUN_001d3360(param_1 + 2,local_70);
        }
        *param_1 = (long)(pcVar23 + 1);
        local_70 = FUN_001d34d4(param_1,lVar10 - lVar12 >> 3);
        puVar6 = (undefined8 *)FUN_001d9b54(param_1,&local_88,local_70);
        return puVar6;
      }
      uVar18 = FUN_001d036c(param_1,&DAT_0011e937,2);
      if ((uVar18 & 1) != 0) {
        puVar6 = (undefined8 *)FUN_001d9c00(param_1,"throw");
        return puVar6;
      }
      uVar18 = FUN_001d036c(param_1,&DAT_0011eabf,2);
      if ((uVar18 & 1) != 0) {
        local_70._0_8_ = FUN_001d642c(param_1);
        if (local_70._0_8_ != 0) {
          puVar6 = (undefined8 *)FUN_001d9cac(param_1,local_70);
          return puVar6;
        }
        return (undefined8 *)0x0;
      }
      pcVar23 = (char *)*param_1;
      if ((pcVar23 == (char *)param_1[1]) || (*pcVar23 != 'u')) {
        puVar6 = (undefined8 *)FUN_001d9d4c(param_1,sVar3 == 0x7367);
        return puVar6;
      }
      *param_1 = (long)(pcVar23 + 1);
      local_88 = (long *)FUN_001d4604(param_1);
      if (local_88 == (long *)0x0) {
        return (undefined8 *)0x0;
      }
      auVar29 = (**(code **)(*local_88 + 0x38))();
      if (((auVar29._8_8_ == 8) && (*auVar29._0_8_ == 0x666f646975755f5f)) &&
         (pcVar23 = (char *)*param_1, pcVar23 != (char *)param_1[1])) {
        if (*pcVar23 == 'z') {
          *param_1 = (long)(pcVar23 + 1);
          local_98._0_8_ = FUN_001d642c(param_1);
        }
        else {
          if (*pcVar23 != 't') goto LAB_001d7584;
          *param_1 = (long)(pcVar23 + 1);
          local_98._0_8_ = FUN_001d0f90(param_1);
        }
        if ((long *)local_98._0_8_ == (long *)0x0) {
          return (undefined8 *)0x0;
        }
        lVar12 = param_1[3] - param_1[2];
        FUN_001d3360(param_1 + 2,local_98);
      }
      else {
LAB_001d7584:
        lVar12 = param_1[3] - param_1[2];
        while( true ) {
          pcVar23 = (char *)*param_1;
          if ((pcVar23 != (char *)param_1[1]) && (*pcVar23 == 'E')) break;
          local_70._0_8_ = FUN_001d3028(param_1);
          if (local_70._0_8_ == 0) {
            return (undefined8 *)0x0;
          }
          FUN_001d3360(param_1 + 2,local_70);
        }
        *param_1 = (long)(pcVar23 + 1);
      }
      local_70 = FUN_001d34d4(param_1,lVar12 >> 3);
      iVar15 = 1;
      pplVar14 = &local_88;
      local_44 = local_44 & 0xffffff00;
LAB_001d73a4:
      local_78 = CONCAT44(local_78._4_4_,iVar15);
      puVar6 = (undefined8 *)FUN_001d7b08(param_1,pplVar14,local_70,&local_44,&local_78);
      return puVar6;
    }
    if ((*pbVar17 == 0x70) ||
       (((uVar18 != 2 && (*pbVar17 == 0x4c)) && (0xfffffff5 < pbVar16[2] - 0x3a)))) {
      puVar6 = (undefined8 *)FUN_001d87a8(param_1);
      return puVar6;
    }
    if ((pbVar16 != pbVar26) && (*param_1 = (long)pbVar17, pbVar26 != pbVar17)) {
      bVar1 = *pbVar17;
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
      *param_1 = (long)(pbVar16 + 2);
      if (1 < (ulong)((long)pbVar26 - (long)(pbVar16 + 2))) {
        bVar1 = pbVar16[2];
        uVar18 = 0;
        uVar19 = 0x3e;
        do {
          uVar20 = uVar18 + uVar19 >> 1;
          if ((byte)(&UNK_001f3d68)[uVar20 * 0x10] < bVar1) {
            uVar18 = uVar20 + 1;
            uVar20 = uVar19;
          }
          else if (((&UNK_001f3d68)[uVar20 * 0x10] == bVar1) &&
                  ((byte)(&UNK_001f3d69)[uVar20 * 0x10] < pbVar16[3])) {
            uVar18 = uVar20 + 1;
            uVar20 = uVar19;
          }
          uVar19 = uVar20;
        } while (uVar20 != uVar18);
        lVar12 = uVar18 * 0x10;
        if (((&UNK_001f3d68)[lVar12] == bVar1) && ((&UNK_001f3d69)[lVar12] == pbVar16[3])) {
          cVar2 = (&UNK_001f3d6a)[lVar12];
          *param_1 = (long)(pbVar16 + 4);
          if ((cVar2 == '\x02') ||
             ((cVar2 == '\x04' &&
              (pcVar23 = *(char **)(&UNK_001f3d70 + lVar12), sVar24 = strlen(pcVar23),
              pcVar23[sVar24 - 1] == '*')))) {
            lVar10 = FUN_001d642c(param_1);
            if (lVar10 == 0) {
              return (undefined8 *)0x0;
            }
            if (bVar4) {
              lVar11 = FUN_001d642c(param_1);
              if (lVar11 == 0) {
                return (undefined8 *)0x0;
              }
              lVar8 = lVar11;
              if (!bVar5) {
                lVar8 = lVar10;
                lVar10 = lVar11;
              }
            }
            else {
              lVar8 = lVar10;
              lVar10 = 0;
            }
            plVar25 = *(long **)(&UNK_001f3d70 + lVar12);
            sVar24 = strlen((char *)plVar25);
            if ((sVar24 < 8) || (*plVar25 != 0x726f74617265706f)) goto LAB_001d777c;
            lVar12 = sVar24 - 8;
            plVar22 = plVar25 + 1;
            if ((lVar12 != 0) && ((char)*plVar22 == ' ')) {
              plVar22 = (long *)((long)plVar25 + 9);
              lVar12 = sVar24 - 9;
            }
            pvVar9 = (void *)param_1[0x266];
            lVar11 = *(long *)((long)pvVar9 + 8);
            puVar6 = pvVar9;
            if (lVar11 - 0xfb0U < 0xfffffffffffff010) {
              puVar6 = malloc(0x1000);
              if (puVar6 == (void *)0x0) goto LAB_001d77c0;
              lVar11 = 0;
              *puVar6 = pvVar9;
              puVar6[1] = 0;
              param_1[0x266] = (long)puVar6;
            }
            *(long *)((long)puVar6 + 8) = lVar11 + 0x40;
            puVar13 = (undefined8 *)((long)puVar6 + lVar11 + 0x10);
            *puVar13 = &PTR_FUN_001f4f00;
            *(undefined1 *)((long)puVar6 + lVar11 + 0x18) = 0x47;
            *(long *)((long)puVar6 + lVar11 + 0x20) = lVar8;
            *(long *)((long)puVar6 + lVar11 + 0x28) = lVar10;
            *(long **)((long)puVar6 + lVar11 + 0x30) = plVar22;
            *(long *)((long)puVar6 + lVar11 + 0x38) = lVar12;
            *(ushort *)((long)puVar6 + lVar11 + 0x19) =
                 *(ushort *)((long)puVar6 + lVar11 + 0x19) & 0xf000 | 0x540;
            *(bool *)((long)puVar6 + lVar11 + 0x40) = bVar5;
            return puVar13;
          }
        }
      }
    }
    goto LAB_001d6460;
  }
  plVar22 = *(long **)(&UNK_001f3d70 + lVar12);
  pbVar17 = pbVar16 + 2;
  *param_1 = (long)pbVar17;
  sVar7 = strlen((char *)plVar22);
  plVar25 = plVar22;
  sVar24 = sVar7;
  if ((byte)(&UNK_001f3d6a)[lVar12] < 0xb) {
    if ((sVar7 < 8) || (*plVar22 != 0x726f74617265706f)) {
LAB_001d777c:
                    /* WARNING: Subroutine does not return */
      FUN_001cf218("%s:%d: %s","75h2tvbqqiyelu6ergavx69288j4fh21moacaekj9a5g1ychamkwv5wxa",0xbc1,
                   "operator name does not start with \'operator\'");
    }
    sVar24 = sVar7 - 8;
    plVar25 = plVar22 + 1;
    if ((sVar24 != 0) && ((char)*plVar25 == ' ')) {
      plVar25 = (long *)((long)plVar22 + 9);
      sVar24 = sVar7 - 9;
    }
  }
  puVar6 = (undefined8 *)0x0;
  local_88 = plVar25;
  sStack_80 = sVar24;
  local_70._0_8_ = plVar25;
  local_70._8_8_ = sVar24;
  switch((&UNK_001f3d6a)[lVar12]) {
  case 0:
    bVar1 = (&UNK_001f3d6b)[lVar12];
    lVar12 = FUN_001d642c(param_1);
    puVar6 = (undefined8 *)0x0;
    if (lVar12 != 0) {
      pvVar9 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar9 + 8);
      puVar13 = pvVar9;
      if (lVar10 - 0xfc0U < 0xfffffffffffff010) {
        puVar13 = malloc(0x1000);
        if (puVar13 == (void *)0x0) {
LAB_001d77c0:
                    /* WARNING: Subroutine does not return */
          FUN_001cee20();
        }
        lVar10 = 0;
        *puVar13 = pvVar9;
        puVar13[1] = 0;
        param_1[0x266] = (long)puVar13;
      }
      *(long *)((long)puVar13 + 8) = lVar10 + 0x30;
      puVar6 = (undefined8 *)((long)puVar13 + lVar10 + 0x10);
      *puVar6 = &PTR_FUN_001f41e0;
      *(undefined1 *)((long)puVar13 + lVar10 + 0x18) = 0x42;
      *(long **)((long)puVar13 + lVar10 + 0x20) = plVar25;
      *(size_t *)((long)puVar13 + lVar10 + 0x28) = sVar24;
      *(long *)((long)puVar13 + lVar10 + 0x30) = lVar12;
      *(ushort *)((long)puVar13 + lVar10 + 0x19) =
           *(ushort *)((long)puVar13 + lVar10 + 0x19) & 0xf000 | bVar1 >> 1 | 0x540;
    }
    break;
  case 1:
    if ((pbVar17 == pbVar26) || (*pbVar17 != 0x5f)) {
      local_70._0_8_ = FUN_001d642c(param_1);
      puVar6 = (undefined8 *)0x0;
      if (local_70._0_8_ != 0) {
        local_98._0_4_ = (int)(char)(&UNK_001f3d6b)[lVar12] >> 1;
        puVar6 = (undefined8 *)FUN_001d77d4(param_1,local_70,&local_88,local_98);
      }
    }
    else {
      cVar2 = (&UNK_001f3d6b)[lVar12];
      *param_1 = (long)(pbVar16 + 3);
      local_78 = CONCAT44(local_78._4_4_,(int)cVar2 >> 1);
      local_98._0_8_ = FUN_001d642c(param_1);
      puVar6 = (undefined8 *)0x0;
      if ((long *)local_98._0_8_ != (long *)0x0) {
        puVar6 = (undefined8 *)FUN_001da958(param_1,local_70,local_98,&local_78);
      }
    }
    break;
  case 2:
    local_44 = (int)(char)(&UNK_001f3d6b)[lVar12] >> 1;
    local_98._0_8_ = FUN_001d642c(param_1);
    puVar6 = (undefined8 *)0x0;
    if ((long *)local_98._0_8_ != (long *)0x0) {
      local_78 = FUN_001d642c(param_1);
      puVar6 = (undefined8 *)0x0;
      if (local_78 != 0) {
        puVar6 = (undefined8 *)FUN_001da374(param_1,local_98,local_70,&local_78,&local_44);
      }
    }
    break;
  case 3:
    local_70._0_8_ = FUN_001d642c(param_1);
    puVar6 = (undefined8 *)0x0;
    if (local_70._0_8_ != 0) {
      local_98._0_8_ = FUN_001d642c(param_1);
      puVar6 = (undefined8 *)0x0;
      if ((long *)local_98._0_8_ != (long *)0x0) {
        local_78 = CONCAT44(local_78._4_4_,(int)(char)(&UNK_001f3d6b)[lVar12] >> 1);
        puVar6 = (undefined8 *)FUN_001d7894(param_1,local_70,local_98,&local_78);
      }
    }
    break;
  case 4:
    local_70._0_8_ = FUN_001d642c(param_1);
    puVar6 = (undefined8 *)0x0;
    if (local_70._0_8_ != 0) {
      local_98._0_8_ = FUN_001d642c(param_1);
      puVar6 = (undefined8 *)0x0;
      if ((long *)local_98._0_8_ != (long *)0x0) {
        local_78 = CONCAT44(local_78._4_4_,(int)(char)(&UNK_001f3d6b)[lVar12] >> 1);
        puVar6 = (undefined8 *)FUN_001d7950(param_1,local_70,&local_88,local_98,&local_78);
      }
    }
    break;
  case 5:
    lVar10 = param_1[2];
    lVar8 = param_1[3];
    plVar25 = param_1 + 5;
    while ((pbVar17 == pbVar26 || (*pbVar17 != 0x5f))) {
      lVar11 = FUN_001d642c(param_1);
      if (lVar11 == 0) {
        return (undefined8 *)0x0;
      }
      plVar22 = (long *)param_1[3];
      if (plVar22 == (long *)param_1[4]) {
        plVar27 = (long *)param_1[2];
        sVar24 = (long)plVar22 - (long)plVar27;
        if (plVar27 == plVar25) {
          pvVar9 = malloc(sVar24 * 2);
          if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar22 != plVar25) {
            memmove(pvVar9,plVar27,sVar24);
          }
          param_1[2] = (long)pvVar9;
        }
        else {
          pvVar9 = realloc(plVar27,sVar24 * 2);
          param_1[2] = (long)pvVar9;
          if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar22 = (long *)((long)pvVar9 + sVar24);
        param_1[4] = (long)((long)pvVar9 + ((long)sVar24 >> 2) * 8);
      }
      *plVar22 = lVar11;
      pbVar17 = (byte *)*param_1;
      pbVar26 = (byte *)param_1[1];
      param_1[3] = (long)(plVar22 + 1);
    }
    *param_1 = (long)(pbVar17 + 1);
    local_70 = FUN_001d34d4(param_1,lVar8 - lVar10 >> 3);
    local_78 = FUN_001d0f90(param_1);
    if (local_78 == 0) {
      return (undefined8 *)0x0;
    }
    uVar18 = FUN_001d036c(param_1,&DAT_0011e3da,2);
    lVar10 = param_1[2];
    lVar8 = param_1[3];
    while( true ) {
      pcVar23 = (char *)*param_1;
      if ((pcVar23 != (char *)param_1[1]) && (*pcVar23 == 'E')) {
        *param_1 = (long)(pcVar23 + 1);
        local_98 = FUN_001d34d4(param_1,lVar8 - lVar10 >> 3);
        local_9c[0] = (&UNK_001f3d6b)[lVar12] & 1;
        local_44 = (int)(char)(&UNK_001f3d6b)[lVar12] >> 1;
        puVar6 = (undefined8 *)
                 FUN_001d7a1c(param_1,local_70,&local_78,local_98,local_48,local_9c,&local_44);
        return puVar6;
      }
      if ((uVar18 & 1) == 0) break;
      lVar11 = FUN_001d642c(param_1);
      if (lVar11 == 0) {
        return (undefined8 *)0x0;
      }
      plVar22 = (long *)param_1[3];
      if (plVar22 == (long *)param_1[4]) {
        plVar27 = (long *)param_1[2];
        sVar24 = (long)plVar22 - (long)plVar27;
        if (plVar27 == plVar25) {
          pvVar9 = malloc(sVar24 * 2);
          if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar22 != plVar25) {
            memmove(pvVar9,plVar27,sVar24);
          }
          param_1[2] = (long)pvVar9;
        }
        else {
          pvVar9 = realloc(plVar27,sVar24 * 2);
          param_1[2] = (long)pvVar9;
          if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar22 = (long *)((long)pvVar9 + sVar24);
        param_1[4] = (long)((long)pvVar9 + ((long)sVar24 >> 2) * 8);
      }
      *plVar22 = lVar11;
      param_1[3] = (long)(plVar22 + 1);
    }
    goto LAB_001d6460;
  case 6:
    lVar10 = FUN_001d642c(param_1);
    puVar6 = (undefined8 *)0x0;
    if (lVar10 != 0) {
      pvVar9 = (void *)param_1[0x266];
      bVar1 = (&UNK_001f3d6b)[lVar12];
      lVar12 = *(long *)((long)pvVar9 + 8);
      puVar13 = pvVar9;
      if (lVar12 - 0xfd0U < 0xfffffffffffff010) {
        puVar13 = malloc(0x1000);
        if (puVar13 == (void *)0x0) goto LAB_001d77c0;
        lVar12 = 0;
        *puVar13 = pvVar9;
        puVar13[1] = 0;
        param_1[0x266] = (long)puVar13;
      }
      *(long *)((long)puVar13 + 8) = lVar12 + 0x20;
      puVar6 = (undefined8 *)((long)puVar13 + lVar12 + 0x10);
      *puVar6 = &PTR_FUN_001f4438;
      *(undefined1 *)((long)puVar13 + lVar12 + 0x18) = 0x41;
      *(long *)((long)puVar13 + lVar12 + 0x20) = lVar10;
      *(undefined1 *)((long)puVar13 + lVar12 + 0x28) = uVar28;
      *(ushort *)((long)puVar13 + lVar12 + 0x19) =
           *(ushort *)((long)puVar13 + lVar12 + 0x19) & 0xf000 | bVar1 >> 1 | 0x540;
      *(byte *)((long)puVar13 + lVar12 + 0x29) = bVar1 & 1;
    }
    break;
  case 7:
    local_98._0_8_ = FUN_001d642c(param_1);
    puVar6 = (undefined8 *)0x0;
    if ((long *)local_98._0_8_ != (long *)0x0) {
      lVar10 = param_1[2];
      lVar8 = param_1[3];
      while( true ) {
        pcVar23 = (char *)*param_1;
        if ((pcVar23 != (char *)param_1[1]) && (*pcVar23 == 'E')) {
          *param_1 = (long)(pcVar23 + 1);
          local_70 = FUN_001d34d4(param_1,lVar8 - lVar10 >> 3);
          pplVar14 = (long **)local_98;
          iVar15 = (int)(char)(&UNK_001f3d6b)[lVar12] >> 1;
          local_44 = CONCAT31(local_44._1_3_,(&UNK_001f3d6b)[lVar12]) & 0xffffff01;
          goto LAB_001d73a4;
        }
        lVar11 = FUN_001d642c(param_1);
        puVar6 = (undefined8 *)0x0;
        if (lVar11 == 0) break;
        plVar25 = (long *)param_1[3];
        if (plVar25 == (long *)param_1[4]) {
          plVar22 = (long *)param_1[2];
          sVar24 = (long)plVar25 - (long)plVar22;
          if (plVar22 == param_1 + 5) {
            pvVar9 = malloc(sVar24 * 2);
            if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar25 != param_1 + 5) {
              memmove(pvVar9,plVar22,sVar24);
            }
            param_1[2] = (long)pvVar9;
          }
          else {
            pvVar9 = realloc(plVar22,sVar24 * 2);
            param_1[2] = (long)pvVar9;
            if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar25 = (long *)((long)pvVar9 + sVar24);
          param_1[4] = (long)((long)pvVar9 + ((long)sVar24 >> 2) * 8);
        }
        *plVar25 = lVar11;
        param_1[3] = (long)(plVar25 + 1);
      }
    }
    break;
  case 8:
    lVar10 = param_1[0x61];
    *(undefined1 *)(param_1 + 0x61) = 0;
    local_98._0_8_ = FUN_001d0f90(param_1);
    *(char *)(param_1 + 0x61) = (char)lVar10;
    if ((long *)local_98._0_8_ == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar23 = (char *)*param_1;
    lVar10 = param_1[3] - param_1[2] >> 3;
    if ((pcVar23 == (char *)param_1[1]) || (*pcVar23 != '_')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
      *param_1 = (long)(pcVar23 + 1);
    }
    do {
      pcVar23 = (char *)*param_1;
      if ((pcVar23 != (char *)param_1[1]) && (*pcVar23 == 'E')) {
        *param_1 = (long)(pcVar23 + 1);
        local_70 = FUN_001d34d4(param_1,lVar10);
        if (!bVar4) goto LAB_001d7438;
        goto LAB_001d7440;
      }
      lVar8 = FUN_001d642c(param_1);
      if (lVar8 == 0) {
        return (undefined8 *)0x0;
      }
      plVar25 = (long *)param_1[3];
      if (plVar25 == (long *)param_1[4]) {
        plVar22 = (long *)param_1[2];
        sVar24 = (long)plVar25 - (long)plVar22;
        if (plVar22 == param_1 + 5) {
          pvVar9 = malloc(sVar24 * 2);
          if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar25 != param_1 + 5) {
            memmove(pvVar9,plVar22,sVar24);
          }
          param_1[2] = (long)pvVar9;
        }
        else {
          pvVar9 = realloc(plVar22,sVar24 * 2);
          param_1[2] = (long)pvVar9;
          if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar25 = (long *)((long)pvVar9 + sVar24);
        param_1[4] = (long)((long)pvVar9 + ((long)sVar24 >> 2) * 8);
      }
      *plVar25 = lVar8;
      param_1[3] = (long)(plVar25 + 1);
    } while (bVar4);
    local_70 = FUN_001d34d4(param_1,lVar10);
LAB_001d7438:
    if (local_70._8_8_ == 1) {
LAB_001d7440:
      local_78 = CONCAT44(local_78._4_4_,(int)(char)(&UNK_001f3d6b)[lVar12] >> 1);
      puVar6 = (undefined8 *)FUN_001d7bd4(param_1,local_98,local_70,&local_78);
      return puVar6;
    }
    goto LAB_001d6460;
  case 9:
    local_70._0_8_ = FUN_001d642c(param_1);
    puVar6 = (undefined8 *)0x0;
    if (local_70._0_8_ != 0) {
      local_98._0_8_ = FUN_001d642c(param_1);
      puVar6 = (undefined8 *)0x0;
      if ((long *)local_98._0_8_ != (long *)0x0) {
        local_78 = FUN_001d642c(param_1);
        puVar6 = (undefined8 *)0x0;
        if (local_78 != 0) {
          local_44 = (int)(char)(&UNK_001f3d6b)[lVar12] >> 1;
          puVar6 = (undefined8 *)FUN_001d7c94(param_1,local_70,local_98,&local_78,&local_44);
        }
      }
    }
    break;
  case 10:
    break;
  case 0xb:
    local_70._0_8_ = FUN_001d0f90(param_1);
    puVar6 = (undefined8 *)0x0;
    if (local_70._0_8_ != 0) {
      local_98._0_8_ = FUN_001d642c(param_1);
      puVar6 = (undefined8 *)0x0;
      if ((long *)local_98._0_8_ != (long *)0x0) {
        local_78 = CONCAT44(local_78._4_4_,(int)(char)(&UNK_001f3d6b)[lVar12] >> 1);
        puVar6 = (undefined8 *)FUN_001d7d5c(param_1,&local_88,local_70,local_98,&local_78);
      }
    }
    break;
  case 0xc:
    bVar1 = (&UNK_001f3d6b)[lVar12];
    if ((bVar1 & 1) == 0) {
      lVar12 = FUN_001d642c(param_1);
    }
    else {
      lVar12 = FUN_001d0f90(param_1);
    }
    if (lVar12 != 0) {
      pvVar9 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar9 + 8);
      puVar6 = pvVar9;
      if (lVar10 - 0xfb0U < 0xfffffffffffff010) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) goto LAB_001d77c0;
        lVar10 = 0;
        *puVar6 = pvVar9;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar10 + 0x40;
      puVar13 = (undefined8 *)((long)puVar6 + lVar10 + 0x10);
      *puVar13 = &PTR_FUN_001f4690;
      *(undefined1 *)((long)puVar6 + lVar10 + 0x18) = 0x3c;
      *(long **)((long)puVar6 + lVar10 + 0x20) = plVar25;
      *(size_t *)((long)puVar6 + lVar10 + 0x28) = sVar24;
      *(undefined8 *)((long)puVar6 + lVar10 + 0x38) = 0;
      *(undefined8 *)((long)puVar6 + lVar10 + 0x40) = 0;
      *(long *)((long)puVar6 + lVar10 + 0x30) = lVar12;
      *(ushort *)((long)puVar6 + lVar10 + 0x19) =
           *(ushort *)((long)puVar6 + lVar10 + 0x19) & 0xf000 | bVar1 >> 1 | 0x540;
      return puVar13;
    }
LAB_001d6460:
    puVar6 = (undefined8 *)0x0;
    break;
  default:
    *(char *)(param_1 + 0x61) = (char)plVar22;
                    /* WARNING: Subroutine does not return */
    FUN_001eaec0();
  }
  return puVar6;
}


