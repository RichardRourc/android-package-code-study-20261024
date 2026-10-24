// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00156b00; body: [[00156b00, 00157173]]

undefined8 * FUN_00156b00(long *param_1,ulong param_2)

{
  byte *pbVar1;
  short *psVar2;
  char *pcVar3;
  ushort uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  long local_70;
  undefined8 *local_68;
  
  psVar2 = (short *)*param_1;
  uVar11 = param_1[1] - (long)psVar2;
  if (uVar11 < 3) {
    if (uVar11 == 2) goto LAB_00156b64;
  }
  else {
    if (*psVar2 == 0x7273 && (char)psVar2[1] == 'N') {
      *param_1 = (long)psVar2 + 3;
      puVar8 = (undefined8 *)FUN_0015eabc(param_1);
      if (puVar8 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar5 = puVar8;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        lVar7 = FUN_00151a58(param_1,0);
        if (lVar7 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar12 = (void *)param_1[0x266];
        lVar10 = *(long *)((long)pvVar12 + 8);
        puVar6 = pvVar12;
        if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
          puVar6 = malloc(0x1000);
          if (puVar6 == (void *)0x0) goto LAB_00157170;
          lVar10 = 0;
          *puVar6 = pvVar12;
          puVar6[1] = 0;
          param_1[0x266] = (long)puVar6;
        }
        *(long *)((long)puVar6 + 8) = lVar10 + 0x20;
        puVar5 = (undefined8 *)((long)puVar6 + lVar10 + 0x10);
        *puVar5 = &PTR_FUN_00172fe8;
        *(undefined8 **)((long)puVar6 + lVar10 + 0x20) = puVar8;
        *(long *)((long)puVar6 + lVar10 + 0x28) = lVar7;
        *(undefined1 *)((long)puVar6 + lVar10 + 0x18) = 0x2d;
        *(ushort *)((long)puVar6 + lVar10 + 0x19) =
             *(ushort *)((long)puVar6 + lVar10 + 0x19) & 0xf000 | 0x540;
      }
      while ((pcVar3 = (char *)*param_1, pcVar3 == (char *)param_1[1] || (*pcVar3 != 'E'))) {
        puVar8 = (undefined8 *)FUN_00151444(param_1);
        if (puVar8 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar6 = puVar8;
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          lVar7 = FUN_00151a58(param_1,0);
          if (lVar7 == 0) {
            return (undefined8 *)0x0;
          }
          pvVar12 = (void *)param_1[0x266];
          lVar10 = *(long *)((long)pvVar12 + 8);
          puVar9 = pvVar12;
          if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
            puVar9 = malloc(0x1000);
            if (puVar9 == (void *)0x0) goto LAB_00157170;
            lVar10 = 0;
            *puVar9 = pvVar12;
            puVar9[1] = 0;
            param_1[0x266] = (long)puVar9;
          }
          *(long *)((long)puVar9 + 8) = lVar10 + 0x20;
          puVar6 = (undefined8 *)((long)puVar9 + lVar10 + 0x10);
          *puVar6 = &PTR_FUN_00172fe8;
          *(undefined8 **)((long)puVar9 + lVar10 + 0x20) = puVar8;
          *(long *)((long)puVar9 + lVar10 + 0x28) = lVar7;
          *(undefined1 *)((long)puVar9 + lVar10 + 0x18) = 0x2d;
          *(ushort *)((long)puVar9 + lVar10 + 0x19) =
               *(ushort *)((long)puVar9 + lVar10 + 0x19) & 0xf000 | 0x540;
        }
        pvVar12 = (void *)param_1[0x266];
        lVar7 = *(long *)((long)pvVar12 + 8);
        puVar8 = pvVar12;
        if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
          puVar8 = malloc(0x1000);
          if (puVar8 == (void *)0x0) goto LAB_00157170;
          lVar7 = 0;
          *puVar8 = pvVar12;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        *(long *)((long)puVar8 + 8) = lVar7 + 0x20;
        puVar9 = (undefined8 *)((long)puVar8 + lVar7 + 0x10);
        *puVar9 = &PTR_FUN_001728e8;
        *(undefined1 *)((long)puVar8 + lVar7 + 0x18) = 0x17;
        *(undefined8 **)((long)puVar8 + lVar7 + 0x20) = puVar5;
        *(undefined8 **)((long)puVar8 + lVar7 + 0x28) = puVar6;
        *(ushort *)((long)puVar8 + lVar7 + 0x19) =
             *(ushort *)((long)puVar8 + lVar7 + 0x19) & 0xf000 | 0x540;
        puVar5 = puVar9;
      }
      *param_1 = (long)(pcVar3 + 1);
      lVar7 = FUN_0015ec40(param_1);
      if (lVar7 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar12 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar12 + 8);
      puVar8 = pvVar12;
      if (0xfffffffffffff00f < lVar10 - 0xfd0U) {
LAB_001570a0:
        *(long *)((long)puVar8 + 8) = lVar10 + 0x20;
        puVar6 = (undefined8 *)((long)puVar8 + lVar10 + 0x10);
        *puVar6 = &PTR_FUN_001728e8;
        uVar4 = *(ushort *)((long)puVar8 + lVar10 + 0x19);
        *(undefined1 *)((long)puVar8 + lVar10 + 0x18) = 0x17;
        *(undefined8 **)((long)puVar8 + lVar10 + 0x20) = puVar5;
        *(long *)((long)puVar8 + lVar10 + 0x28) = lVar7;
        goto LAB_00157144;
      }
      puVar8 = malloc(0x1000);
      if (puVar8 != (void *)0x0) {
        lVar10 = 0;
        *puVar8 = pvVar12;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
        goto LAB_001570a0;
      }
      goto LAB_00157170;
    }
LAB_00156b64:
    if (*psVar2 == 0x7273) {
      pbVar1 = (byte *)(psVar2 + 1);
      *param_1 = (long)pbVar1;
      if (((byte *)param_1[1] != pbVar1) && (0xfffffff5 < *pbVar1 - 0x3a)) {
        puVar5 = (undefined8 *)FUN_00151444(param_1);
        if (puVar5 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        local_68 = puVar5;
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          local_70 = FUN_00151a58(param_1,0);
          if (local_70 == 0) {
            return (undefined8 *)0x0;
          }
          puVar5 = (undefined8 *)FUN_00151f28(param_1,&local_68,&local_70);
        }
        puVar6 = (undefined8 *)0x0;
        do {
          puVar8 = puVar5;
          if (puVar6 == (undefined8 *)0x0) {
            if ((param_2 & 1) != 0) {
              pvVar12 = (void *)param_1[0x266];
              lVar7 = *(long *)((long)pvVar12 + 8);
              puVar5 = pvVar12;
              if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
                puVar5 = malloc(0x1000);
                if (puVar5 == (void *)0x0) goto LAB_00157170;
                lVar7 = 0;
                *puVar5 = pvVar12;
                puVar5[1] = 0;
                param_1[0x266] = (long)puVar5;
              }
              *(long *)((long)puVar5 + 8) = lVar7 + 0x20;
              puVar9 = (undefined8 *)((long)puVar5 + lVar7 + 0x10);
              *puVar9 = &PTR_FUN_00172aa8;
              *(undefined1 *)((long)puVar5 + lVar7 + 0x18) = 0x2e;
              *(ushort *)((long)puVar5 + lVar7 + 0x19) =
                   *(ushort *)((long)puVar5 + lVar7 + 0x19) & 0xf000 | 0x540;
              puVar5 = (undefined8 *)((long)puVar5 + lVar7 + 0x20);
              goto LAB_00156fc0;
            }
          }
          else {
            pvVar12 = (void *)param_1[0x266];
            lVar7 = *(long *)((long)pvVar12 + 8);
            puVar5 = pvVar12;
            if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
              puVar5 = malloc(0x1000);
              if (puVar5 == (void *)0x0) goto LAB_00157170;
              lVar7 = 0;
              *puVar5 = pvVar12;
              puVar5[1] = 0;
              param_1[0x266] = (long)puVar5;
            }
            *(long *)((long)puVar5 + 8) = lVar7 + 0x20;
            puVar9 = (undefined8 *)((long)puVar5 + lVar7 + 0x10);
            *puVar9 = &PTR_FUN_001728e8;
            *(undefined1 *)((long)puVar5 + lVar7 + 0x18) = 0x17;
            *(undefined8 **)((long)puVar5 + lVar7 + 0x20) = puVar6;
            *(ushort *)((long)puVar5 + lVar7 + 0x19) =
                 *(ushort *)((long)puVar5 + lVar7 + 0x19) & 0xf000 | 0x540;
            puVar5 = (undefined8 *)((long)puVar5 + lVar7 + 0x28);
LAB_00156fc0:
            *puVar5 = puVar8;
            puVar8 = puVar9;
          }
          pcVar3 = (char *)*param_1;
          if ((pcVar3 != (char *)param_1[1]) && (*pcVar3 == 'E')) {
            *param_1 = (long)(pcVar3 + 1);
            goto LAB_001570d4;
          }
          puVar5 = (undefined8 *)FUN_00151444(param_1);
          if (puVar5 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar6 = puVar8;
          if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
            lVar7 = FUN_00151a58(param_1,0);
            if (lVar7 == 0) {
              return (undefined8 *)0x0;
            }
            pvVar12 = (void *)param_1[0x266];
            lVar10 = *(long *)((long)pvVar12 + 8);
            puVar8 = pvVar12;
            if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
              puVar8 = malloc(0x1000);
              if (puVar8 == (void *)0x0) goto LAB_00157170;
              lVar10 = 0;
              *puVar8 = pvVar12;
              puVar8[1] = 0;
              param_1[0x266] = (long)puVar8;
            }
            *(long *)((long)puVar8 + 8) = lVar10 + 0x20;
            puVar9 = (undefined8 *)((long)puVar8 + lVar10 + 0x10);
            *puVar9 = &PTR_FUN_00172fe8;
            *(undefined1 *)((long)puVar8 + lVar10 + 0x18) = 0x2d;
            *(undefined8 **)((long)puVar8 + lVar10 + 0x20) = puVar5;
            *(long *)((long)puVar8 + lVar10 + 0x28) = lVar7;
            *(ushort *)((long)puVar8 + lVar10 + 0x19) =
                 *(ushort *)((long)puVar8 + lVar10 + 0x19) & 0xf000 | 0x540;
            puVar5 = puVar9;
          }
        } while( true );
      }
      puVar8 = (undefined8 *)FUN_0015eabc(param_1);
      if (puVar8 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      local_68 = puVar8;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        local_70 = FUN_00151a58(param_1,0);
        if (local_70 == 0) {
          return (undefined8 *)0x0;
        }
        puVar8 = (undefined8 *)FUN_00151f28(param_1,&local_68,&local_70);
      }
LAB_001570d4:
      lVar7 = FUN_0015ec40(param_1);
      if (lVar7 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar12 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar12 + 8);
      puVar5 = pvVar12;
      if (0xfffffffffffff00f < lVar10 - 0xfd0U) {
LAB_00157114:
        *(long *)((long)puVar5 + 8) = lVar10 + 0x20;
        puVar6 = (undefined8 *)((long)puVar5 + lVar10 + 0x10);
        *puVar6 = &PTR_FUN_001728e8;
        uVar4 = *(ushort *)((long)puVar5 + lVar10 + 0x19);
        *(undefined8 **)((long)puVar5 + lVar10 + 0x20) = puVar8;
        *(long *)((long)puVar5 + lVar10 + 0x28) = lVar7;
        *(undefined1 *)((long)puVar5 + lVar10 + 0x18) = 0x17;
LAB_00157144:
        *(ushort *)((long)puVar6 + 9) = uVar4 & 0xf000 | 0x540;
        return puVar6;
      }
      puVar5 = malloc(0x1000);
      if (puVar5 != (void *)0x0) {
        lVar10 = 0;
        *puVar5 = pvVar12;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
        goto LAB_00157114;
      }
      goto LAB_00157170;
    }
  }
  puVar5 = (undefined8 *)FUN_0015ec40(param_1);
  puVar8 = puVar5;
  if ((puVar5 != (undefined8 *)0x0) && ((param_2 & 1) != 0)) {
    pvVar12 = (void *)param_1[0x266];
    lVar7 = *(long *)((long)pvVar12 + 8);
    puVar6 = pvVar12;
    if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
      puVar6 = malloc(0x1000);
      if (puVar6 == (void *)0x0) {
LAB_00157170:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar7 = 0;
      *puVar6 = pvVar12;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
    }
    *(long *)((long)puVar6 + 8) = lVar7 + 0x20;
    puVar8 = (undefined8 *)((long)puVar6 + lVar7 + 0x10);
    *puVar8 = &PTR_FUN_00172aa8;
    *(undefined8 **)((long)puVar6 + lVar7 + 0x20) = puVar5;
    *(undefined1 *)((long)puVar6 + lVar7 + 0x18) = 0x2e;
    *(ushort *)((long)puVar6 + lVar7 + 0x19) =
         *(ushort *)((long)puVar6 + lVar7 + 0x19) & 0xf000 | 0x540;
  }
  return puVar8;
}


