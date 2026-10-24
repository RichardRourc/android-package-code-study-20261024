// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0015ec40; body: [[0015ec40, 0015eecf]]

undefined8 * FUN_0015ec40(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar2 == pbVar1) || (*pbVar1 - 0x3a < 0xfffffff6)) {
    if (1 < (ulong)((long)pbVar2 - (long)pbVar1)) {
      if (*(short *)pbVar1 == 0x6e64) {
        pbVar1 = pbVar1 + 2;
        *param_1 = (long)pbVar1;
        if ((pbVar2 == pbVar1) || (*pbVar1 - 0x3a < 0xfffffff6)) {
          puVar3 = (undefined8 *)FUN_0015eabc(param_1);
          if (puVar3 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        }
        else {
          puVar7 = (undefined8 *)FUN_00151444(param_1);
          if (puVar7 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar3 = puVar7;
          if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
            lVar4 = FUN_00151a58(param_1,0);
            if (lVar4 == 0) {
              return (undefined8 *)0x0;
            }
            pvVar8 = (void *)param_1[0x266];
            lVar6 = *(long *)((long)pvVar8 + 8);
            puVar5 = pvVar8;
            if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
              puVar5 = malloc(0x1000);
              if (puVar5 == (void *)0x0) goto LAB_0015eecc;
              lVar6 = 0;
              *puVar5 = pvVar8;
              puVar5[1] = 0;
              param_1[0x266] = (long)puVar5;
            }
            *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
            puVar3 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
            *puVar3 = &PTR_FUN_00172fe8;
            *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar7;
            *(long *)((long)puVar5 + lVar6 + 0x28) = lVar4;
            *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 0x2d;
            *(ushort *)((long)puVar5 + lVar6 + 0x19) =
                 *(ushort *)((long)puVar5 + lVar6 + 0x19) & 0xf000 | 0x540;
          }
        }
        pvVar8 = (void *)param_1[0x266];
        lVar4 = *(long *)((long)pvVar8 + 8);
        puVar7 = pvVar8;
        if (0xfffffffffffff00f < lVar4 - 0xfd0U) {
LAB_0015edd0:
          *(long *)((long)puVar7 + 8) = lVar4 + 0x20;
          puVar5 = (undefined8 *)((long)puVar7 + lVar4 + 0x10);
          *puVar5 = &PTR_FUN_00172958;
          *(undefined8 **)((long)puVar7 + lVar4 + 0x20) = puVar3;
          *(undefined1 *)((long)puVar7 + lVar4 + 0x18) = 0x32;
          *(ushort *)((long)puVar7 + lVar4 + 0x19) =
               *(ushort *)((long)puVar7 + lVar4 + 0x19) & 0xf000 | 0x540;
          return puVar5;
        }
        puVar7 = malloc(0x1000);
        if (puVar7 != (void *)0x0) {
          lVar4 = 0;
          *puVar7 = pvVar8;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
          goto LAB_0015edd0;
        }
        goto LAB_0015eecc;
      }
      if (*(short *)pbVar1 == 0x6e6f) {
        *param_1 = (long)(pbVar1 + 2);
      }
    }
    puVar3 = (undefined8 *)FUN_0015eff0(param_1,0);
  }
  else {
    puVar3 = (undefined8 *)FUN_00151444(param_1);
  }
  puVar7 = puVar3;
  if (((puVar3 != (undefined8 *)0x0) && ((char *)param_1[1] != (char *)*param_1)) &&
     (*(char *)*param_1 == 'I')) {
    lVar4 = FUN_00151a58(param_1,0);
    puVar7 = (undefined8 *)0x0;
    if (lVar4 != 0) {
      pvVar8 = (void *)param_1[0x266];
      lVar6 = *(long *)((long)pvVar8 + 8);
      puVar5 = pvVar8;
      if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) {
LAB_0015eecc:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = 0;
        *puVar5 = pvVar8;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
      puVar7 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
      *puVar7 = &PTR_FUN_00172fe8;
      *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar3;
      *(long *)((long)puVar5 + lVar6 + 0x28) = lVar4;
      *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 0x2d;
      *(ushort *)((long)puVar5 + lVar6 + 0x19) =
           *(ushort *)((long)puVar5 + lVar6 + 0x19) & 0xf000 | 0x540;
    }
  }
  return puVar7;
}


