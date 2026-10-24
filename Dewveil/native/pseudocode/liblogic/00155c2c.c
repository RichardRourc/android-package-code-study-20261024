// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00155c2c; body: [[00155c2c, 00155d93]]

undefined8 * FUN_00155c2c(long *param_1)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  void *pvVar11;
  
  lVar2 = FUN_0014e160();
  if ((lVar2 != 0) && (lVar3 = FUN_00153210(param_1), lVar3 != 0)) {
    pbVar9 = (byte *)*param_1;
    pbVar1 = (byte *)param_1[1];
    pbVar5 = pbVar9;
    if ((pbVar9 != pbVar1) && (*pbVar9 == 0x6e)) {
      pbVar5 = pbVar9 + 1;
      *param_1 = (long)pbVar5;
    }
    if (pbVar1 != pbVar5) {
      if (*pbVar5 - 0x3a < 0xfffffff6) {
        pbVar9 = (byte *)0x0;
        lVar10 = 0;
      }
      else {
        do {
          pbVar6 = pbVar5;
          if (*pbVar5 - 0x3a < 0xfffffff6) break;
          pbVar5 = pbVar5 + 1;
          *param_1 = (long)pbVar5;
          pbVar6 = pbVar1;
        } while (pbVar5 != pbVar1);
        lVar10 = (long)pbVar6 - (long)pbVar9;
        pbVar5 = pbVar6;
      }
      if ((pbVar5 != pbVar1) && (*pbVar5 == 0x45)) {
        pvVar11 = (void *)param_1[0x266];
        *param_1 = (long)(pbVar5 + 1);
        lVar7 = *(long *)((long)pvVar11 + 8);
        puVar4 = pvVar11;
        if (lVar7 - 0xfc0U < 0xfffffffffffff010) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar7 = 0;
          *puVar4 = pvVar11;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar7 + 0x30;
        puVar8 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
        *puVar8 = &PTR_FUN_001724f8;
        *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 0x45;
        *(long *)((long)puVar4 + lVar7 + 0x20) = lVar2;
        *(long *)((long)puVar4 + lVar7 + 0x28) = lVar3;
        *(byte **)((long)puVar4 + lVar7 + 0x30) = pbVar9;
        *(long *)((long)puVar4 + lVar7 + 0x38) = lVar10;
        *(ushort *)((long)puVar4 + lVar7 + 0x19) =
             *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0x542;
        return puVar8;
      }
    }
  }
  return (undefined8 *)0x0;
}


