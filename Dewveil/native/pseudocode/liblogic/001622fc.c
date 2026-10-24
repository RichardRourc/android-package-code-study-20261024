// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 001622fc; body: [[001622fc, 001625b7]]

undefined8 * FUN_001622fc(long *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  short *psVar3;
  char *pcVar4;
  byte *pbVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ushort uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  void *pvVar16;
  long local_40;
  undefined8 *local_38;
  
  psVar3 = (short *)*param_1;
  pbVar5 = (byte *)param_1[1];
  if (((ulong)((long)pbVar5 - (long)psVar3) < 2) || (*psVar3 != 0x7644)) {
LAB_00162334:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    pbVar1 = (byte *)(psVar3 + 1);
    *param_1 = (long)pbVar1;
    if ((pbVar5 == pbVar1) || (bVar6 = *pbVar1, bVar6 < 0x31)) {
LAB_001624e8:
      lVar13 = FUN_00153210();
      if (lVar13 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar4 = (char *)*param_1;
      if ((pcVar4 == (char *)param_1[1]) || (*pcVar4 != '_')) goto LAB_00162334;
      *param_1 = (long)(pcVar4 + 1);
      lVar10 = FUN_0014e160(param_1);
      if (lVar10 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar16 = (void *)param_1[0x266];
      lVar11 = *(long *)((long)pvVar16 + 8);
      puVar8 = pvVar16;
      if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) {
LAB_001625b4:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar11 = 0;
        *puVar8 = pvVar16;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar11 + 0x20;
      puVar7 = (undefined8 *)((long)puVar8 + lVar11 + 0x10);
      *puVar7 = &PTR_FUN_001737c8;
      uVar9 = *(ushort *)((long)puVar8 + lVar11 + 0x19);
      *(long *)((long)puVar8 + lVar11 + 0x20) = lVar10;
      *(long *)((long)puVar8 + lVar11 + 0x28) = lVar13;
    }
    else {
      if (bVar6 < 0x3a) {
        pbVar14 = (byte *)(psVar3 + 1);
        pbVar12 = pbVar1;
        do {
          pbVar15 = pbVar14;
          if (*pbVar12 - 0x3a < 0xfffffff6) break;
          pbVar12 = pbVar12 + 1;
          pbVar14 = pbVar14 + 1;
          *param_1 = (long)pbVar12;
          pbVar15 = pbVar5;
        } while (pbVar12 != pbVar5);
        pvVar16 = (void *)param_1[0x266];
        lVar13 = *(long *)((long)pvVar16 + 8);
        puVar7 = pvVar16;
        if (lVar13 - 0xfd0U < 0xfffffffffffff010) {
          puVar7 = malloc(0x1000);
          if (puVar7 == (void *)0x0) goto LAB_001625b4;
          lVar13 = 0;
          *puVar7 = pvVar16;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar13 + 0x20;
        local_38 = (undefined8 *)((long)puVar7 + lVar13 + 0x10);
        *local_38 = &PTR_FUN_001710e8;
        *(byte **)((long)puVar7 + lVar13 + 0x20) = pbVar1;
        *(undefined1 *)((long)puVar7 + lVar13 + 0x18) = 8;
        *(long *)((long)puVar7 + lVar13 + 0x28) = (long)pbVar15 - (long)pbVar1;
        *(ushort *)((long)puVar7 + lVar13 + 0x19) =
             *(ushort *)((long)puVar7 + lVar13 + 0x19) & 0xf000 | 0x540;
        pcVar4 = (char *)*param_1;
        if ((pcVar4 != (char *)param_1[1]) && (*pcVar4 == '_')) {
          pcVar2 = pcVar4 + 1;
          *param_1 = (long)pcVar2;
          if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'p')) {
            *param_1 = (long)(pcVar4 + 2);
            puVar7 = (undefined8 *)FUN_00163cc4(param_1,&local_38);
            return puVar7;
          }
          local_40 = FUN_0014e160();
          if (local_40 == 0) {
            return (undefined8 *)0x0;
          }
          puVar7 = (undefined8 *)FUN_00163d64(param_1,&local_40,&local_38);
          return puVar7;
        }
        goto LAB_00162334;
      }
      if (bVar6 != 0x5f) goto LAB_001624e8;
      *param_1 = (long)psVar3 + 3;
      lVar13 = FUN_0014e160();
      if (lVar13 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar16 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar16 + 8);
      puVar8 = pvVar16;
      if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) goto LAB_001625b4;
        lVar10 = 0;
        *puVar8 = pvVar16;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar10 + 0x20;
      puVar7 = (undefined8 *)((long)puVar8 + lVar10 + 0x10);
      *puVar7 = &PTR_FUN_001737c8;
      uVar9 = *(ushort *)((long)puVar8 + lVar10 + 0x19);
      *(long *)((long)puVar8 + lVar10 + 0x20) = lVar13;
      *(undefined8 *)((long)puVar8 + lVar10 + 0x28) = 0;
    }
    *(undefined1 *)(puVar7 + 1) = 0x1d;
    *(ushort *)((long)puVar7 + 9) = uVar9 & 0xf000 | 0x540;
  }
  return puVar7;
}


