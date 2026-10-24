// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cfcd4; body: [[001cfcd4, 001d027f]]

void * FUN_001cfcd4(byte *param_1,void *param_2,ulong *param_3,undefined4 *param_4)

{
  byte bVar1;
  void *pvVar2;
  long *plVar3;
  bool bVar4;
  size_t sVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  void *local_13d8;
  ulong local_13d0;
  size_t local_13c8;
  undefined8 local_13c0;
  undefined4 local_13b8;
  byte *local_13b0;
  byte *local_13a8;
  undefined8 *local_13a0;
  undefined8 *puStack_1398;
  undefined8 **local_1390;
  undefined8 local_1388;
  undefined8 uStack_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  undefined8 uStack_1340;
  undefined8 local_1338;
  undefined8 uStack_1330;
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined8 local_12e8;
  undefined8 uStack_12e0;
  undefined8 local_12d8;
  undefined8 uStack_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 local_12b8;
  undefined8 uStack_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 *local_1288;
  undefined8 *puStack_1280;
  undefined8 **local_1278;
  undefined8 local_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 local_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 local_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 local_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 local_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 local_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 local_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 *local_1170;
  undefined8 *local_1168;
  undefined8 **local_1160;
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 *local_1118;
  undefined8 *local_1110;
  undefined8 **local_1108;
  undefined8 local_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 *local_10e0;
  undefined8 *local_10d8;
  undefined2 *local_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined2 local_10a8;
  undefined1 local_10a6;
  undefined8 local_10a0;
  undefined8 local_1098;
  undefined4 local_1090;
  long local_1080;
  undefined8 uStack_1078;
  long *local_80;
  
  if ((param_1 == (byte *)0x0) || ((param_2 != (void *)0x0 && (param_3 == (ulong *)0x0)))) {
    if (param_4 == (undefined4 *)0x0) {
      return (void *)0x0;
    }
    *param_4 = 0xfffffffd;
    return (void *)0x0;
  }
  sVar5 = strlen((char *)param_1);
  local_13a8 = param_1 + sVar5;
  local_1390 = &local_1288;
  local_1278 = &local_1170;
  local_1160 = &local_1118;
  local_1108 = &local_10e0;
  local_10d0 = &local_10a8;
  local_10a8 = 1;
  uStack_12a0 = 0;
  local_12a8 = 0;
  uStack_1290 = 0;
  uStack_1298 = 0;
  uStack_1380 = 0;
  local_1388 = 0;
  uStack_1370 = 0;
  local_1378 = 0;
  uStack_1360 = 0;
  local_1368 = 0;
  uStack_1350 = 0;
  local_1358 = 0;
  uStack_1340 = 0;
  local_1348 = 0;
  uStack_1330 = 0;
  local_1338 = 0;
  uStack_1320 = 0;
  local_1328 = 0;
  uStack_1310 = 0;
  local_1318 = 0;
  uStack_1300 = 0;
  local_1308 = 0;
  uStack_12f0 = 0;
  local_12f8 = 0;
  uStack_12e0 = 0;
  local_12e8 = 0;
  uStack_12d0 = 0;
  local_12d8 = 0;
  uStack_12c0 = 0;
  local_12c8 = 0;
  uStack_12b0 = 0;
  local_12b8 = 0;
  uStack_1268 = 0;
  local_1270 = 0;
  uStack_1258 = 0;
  uStack_1260 = 0;
  uStack_1248 = 0;
  local_1250 = 0;
  uStack_1238 = 0;
  uStack_1240 = 0;
  uStack_1228 = 0;
  local_1230 = 0;
  uStack_1218 = 0;
  uStack_1220 = 0;
  uStack_1208 = 0;
  local_1210 = 0;
  uStack_11f8 = 0;
  uStack_1200 = 0;
  uStack_11e8 = 0;
  local_11f0 = 0;
  uStack_11d8 = 0;
  uStack_11e0 = 0;
  uStack_11c8 = 0;
  local_11d0 = 0;
  uStack_11b8 = 0;
  uStack_11c0 = 0;
  uStack_11a8 = 0;
  local_11b0 = 0;
  uStack_1198 = 0;
  uStack_11a0 = 0;
  uStack_1188 = 0;
  local_1190 = 0;
  uStack_1178 = 0;
  uStack_1180 = 0;
  uStack_1150 = 0;
  local_1158 = 0;
  uStack_1140 = 0;
  uStack_1148 = 0;
  uStack_1130 = 0;
  local_1138 = 0;
  uStack_1120 = 0;
  uStack_1128 = 0;
  uStack_10f8 = 0;
  local_1100 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  uStack_10c0 = 0;
  local_10c8 = 0;
  uStack_10b0 = 0;
  uStack_10b8 = 0;
  local_10a6 = 0;
  local_10a0 = 0xffffffffffffffff;
  local_1090 = 0;
  local_1098 = 0;
  uStack_1078 = 0;
  local_1080 = 0;
  local_13a0 = &local_1388;
  puStack_1398 = &local_1388;
  local_1288 = &local_1270;
  puStack_1280 = &local_1270;
  local_1170 = &local_1158;
  local_1168 = &local_1158;
  local_1118 = &local_1100;
  local_1110 = &local_1100;
  local_10e0 = &local_10c8;
  local_10d8 = &local_10c8;
  local_80 = &local_1080;
  if (sVar5 < 2) {
LAB_001cfeb8:
    local_13b0 = param_1;
    plVar6 = (long *)FUN_001d0f90(&local_13b0);
    if (local_13a8 == local_13b0) {
LAB_001d0184:
      if (plVar6 != (long *)0x0) goto LAB_001d0188;
    }
LAB_001cfecc:
    uVar8 = 0xfffffffe;
    pvVar2 = (void *)0x0;
    uVar12 = local_13d0;
  }
  else {
    if (*(short *)param_1 != 0x5a5f) {
      if (sVar5 == 2) goto LAB_001cfeb8;
      if (*(short *)param_1 == 0x5f5f && param_1[2] == 0x5a) {
        lVar10 = 3;
        goto LAB_001cff9c;
      }
      if (sVar5 < 4) goto LAB_001cfeb8;
      if (*(int *)param_1 == 0x5a5f5f5f) {
        lVar10 = 4;
      }
      else {
        if ((sVar5 == 4) || (*(int *)param_1 != 0x5f5f5f5f || param_1[4] != 0x5a))
        goto LAB_001cfeb8;
        lVar10 = 5;
      }
      local_13b0 = param_1 + lVar10;
      local_13d8 = (void *)FUN_001d03cc(&local_13b0);
      plVar6 = (long *)0x0;
      if (local_13d8 != (void *)0x0) {
        if ((0xc < (ulong)((long)local_13a8 - (long)local_13b0)) &&
           (*(long *)local_13b0 == 0x695f6b636f6c625f &&
            *(long *)(local_13b0 + 5) == 0x656b6f766e695f6b)) {
          pbVar11 = local_13b0 + 0xd;
          if ((pbVar11 == local_13a8) || (*pbVar11 != 0x5f)) {
            bVar1 = 0;
          }
          else {
            pbVar11 = local_13b0 + 0xe;
            bVar1 = 1;
          }
          local_13b0 = pbVar11;
          if ((local_13a8 == pbVar11) || (*pbVar11 - 0x3a < 0xfffffff6)) {
            bVar4 = true;
          }
          else {
            do {
              pbVar13 = local_13b0;
              if (*local_13b0 - 0x3a < 0xfffffff6) break;
              local_13b0 = local_13b0 + 1;
              pbVar13 = local_13a8;
            } while (local_13b0 != local_13a8);
            bVar4 = pbVar13 == pbVar11;
          }
          if (!(bool)(bVar1 & bVar4)) {
            if (local_13a8 != local_13b0) {
              if (*local_13b0 != 0x2e) goto LAB_001d0180;
              local_13b0 = local_13a8;
            }
            plVar6 = (long *)FUN_001d0edc(&local_13b0,"invocation function for block in ",
                                          &local_13d8);
            goto LAB_001d0184;
          }
        }
LAB_001d0180:
        plVar6 = (long *)0x0;
      }
      goto LAB_001d0184;
    }
    lVar10 = 2;
LAB_001cff9c:
    local_13b0 = param_1 + lVar10;
    plVar7 = (long *)FUN_001d03cc(&local_13b0);
    plVar3 = local_80;
    pbVar11 = local_13b0;
    if (plVar7 == (long *)0x0) goto LAB_001cfecc;
    lVar10 = (long)local_13a8 - (long)local_13b0;
    plVar6 = plVar7;
    if (lVar10 != 0) {
      if (*local_13b0 != 0x2e) goto LAB_001cfecc;
      lVar9 = local_80[1];
      if (lVar9 - 0xfc0U < 0xfffffffffffff010) {
        plVar6 = malloc(0x1000);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_001cee20();
        }
        lVar9 = 0;
        *plVar6 = (long)plVar3;
        plVar6[1] = 0;
        local_80 = plVar6;
      }
      local_80[1] = lVar9 + 0x30;
      plVar6 = (long *)((long)local_80 + lVar9 + 0x10);
      *plVar6 = (long)&PTR_FUN_001f5fe0;
      *(long **)((long)local_80 + lVar9 + 0x20) = plVar7;
      *(byte **)((long)local_80 + lVar9 + 0x28) = pbVar11;
      *(undefined1 *)((long)local_80 + lVar9 + 0x18) = 1;
      *(long *)((long)local_80 + lVar9 + 0x30) = lVar10;
      *(ushort *)((long)local_80 + lVar9 + 0x19) =
           *(ushort *)((long)local_80 + lVar9 + 0x19) & 0xf000 | 0x540;
      local_13b0 = local_13a8;
    }
LAB_001d0188:
    if (param_2 == (void *)0x0) {
      local_13c8 = 0;
    }
    else {
      local_13c8 = *param_3;
    }
    local_13d0 = 0;
    local_13b8 = 1;
    local_13c0 = 0xffffffffffffffff;
    local_13d8 = param_2;
    if (local_10e0 != local_10d8) {
                    /* WARNING: Subroutine does not return */
      FUN_001cf218("%s:%d: %s","uufyaz92c10y1p2t8g2wkdf3j653362m1vp2v3djdi8cpcc",0x18c,&DAT_0011dd07
                  );
    }
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_13d8);
    if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar6 + 0x28))(plVar6,&local_13d8);
    }
    uVar12 = local_13d0 + 1;
    if (local_13c8 < uVar12) {
      local_13c8 = local_13c8 * 2;
      uVar12 = local_13d0 + 0x3e1;
      if (local_13c8 < uVar12 || local_13c8 - uVar12 == 0) {
        local_13c8 = uVar12;
      }
      local_13d8 = realloc(local_13d8,local_13c8);
      if (local_13d8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar12 = local_13d0 + 1;
    }
    *(undefined1 *)((long)local_13d8 + local_13d0) = 0;
    if (param_3 != (ulong *)0x0) {
      *param_3 = uVar12;
    }
    uVar8 = 0;
    pvVar2 = local_13d8;
  }
  local_13d0 = uVar12;
  plVar6 = local_80;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar8;
  }
  while (local_80 = plVar6, local_80 != (long *)0x0) {
    while (plVar6 = (long *)*local_80, local_80 != &local_1080) {
      plVar6 = local_80;
      local_80 = (long *)*local_80;
      free(plVar6);
      if (local_80 == (long *)0x0) goto LAB_001cff0c;
    }
  }
LAB_001cff0c:
  local_1080 = 0;
  uStack_1078 = 0;
  local_80 = &local_1080;
  if (local_10e0 != &local_10c8) {
    free(local_10e0);
  }
  if (local_1118 != &local_1100) {
    free(local_1118);
  }
  if (local_1170 != &local_1158) {
    free(local_1170);
  }
  if (local_1288 != &local_1270) {
    free(local_1288);
  }
  if (local_13a0 != &local_1388) {
    free(local_13a0);
  }
  return pvVar2;
}


