// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00105240; body: [[00105240, 001055ab]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00105240(long param_1,ulong param_2)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  byte local_54 [4];
  byte local_50;
  byte local_4f;
  byte local_4e;
  ushort local_4c [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar14 = *(long *)(param_1 + 0x70);
  cVar5 = (**(code **)(lVar14 + 0x58))(param_1,local_4c,2);
  if (cVar5 == '\x02') {
    *(ulong *)(param_1 + 0x28) = (ulong)local_4c[0];
    cVar5 = (**(code **)(*(long *)(param_1 + 0x70) + 0x58))(param_1,local_4c,2);
    if (cVar5 != '\x02') goto LAB_001054e0;
    *(ulong *)(param_1 + 0x30) = (ulong)local_4c[0];
    cVar5 = (**(code **)(*(long *)(param_1 + 0x70) + 0x58))(param_1,local_4c,2);
    if (cVar5 != '\x02') goto LAB_001054e0;
    *(ulong *)(param_1 + 0x38) = (ulong)local_4c[0];
    cVar5 = (**(code **)(*(long *)(param_1 + 0x70) + 0x58))(param_1,local_4c,2);
    if (cVar5 != '\x02') goto LAB_001054e0;
    *(ulong *)(param_1 + 0x40) = (ulong)local_4c[0];
    cVar5 = (**(code **)(*(long *)(param_1 + 0x70) + 0x58))(param_1,&local_50,1);
    bVar3 = local_50;
    if (cVar5 != '\x01') {
      *(undefined4 *)(param_1 + 0x60) = 0x66;
      FUN_00105fd8(*(undefined8 *)(param_1 + 0x50));
      uVar8 = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      goto LAB_001054ec;
    }
    *(byte *)(param_1 + 0x48) = local_50 >> 6 & 1;
    if (*(long *)(param_1 + 0x50) == 0) {
      if ((char)local_50 < '\0') goto LAB_001053b0;
LAB_00105438:
      if ((param_2 & 1) != 0) {
        lVar7 = FUN_00106088(*(undefined8 *)(param_1 + 0x58),*(long *)(param_1 + 0x20) + 1,0x30);
        if (lVar7 == 0) goto LAB_00105514;
        *(long *)(param_1 + 0x58) = lVar7;
        lVar15 = *(long *)(param_1 + 0x20);
        uVar22 = *(undefined8 *)(param_1 + 0x38);
        uVar18 = *(undefined8 *)(param_1 + 0x50);
        uVar8 = *(undefined8 *)(param_1 + 0x48);
        uVar21 = *(undefined8 *)(param_1 + 0x30);
        uVar20 = *(undefined8 *)(param_1 + 0x28);
        puVar11 = (undefined8 *)(lVar7 + lVar15 * 0x30);
        puVar11[3] = *(undefined8 *)(param_1 + 0x40);
        puVar11[2] = uVar22;
        puVar11[5] = uVar18;
        puVar11[4] = uVar8;
        puVar11[1] = uVar21;
        *puVar11 = uVar20;
        lVar12 = *(long *)(param_1 + 0x50);
        if (lVar12 != 0) {
          lVar12 = FUN_00105f54(*(undefined1 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10));
          *(long *)(lVar7 + lVar15 * 0x30 + 0x28) = lVar12;
          if (lVar12 == 0) goto LAB_00105514;
        }
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      }
      *(long *)(lVar14 + 0x50) = *(long *)(param_1 + 0x40) * *(long *)(param_1 + 0x38);
      puVar10 = *(ulong **)(param_1 + 0x70);
      (*(code *)puVar10[0xb])(param_1,local_54,1);
      uVar16 = _UNK_00107e68;
      uVar4 = _DAT_00107e60;
      if (local_54[0] < 9) {
        uVar13 = (ulong)(1 << (ulong)(local_54[0] & 0x1f));
        uVar17 = uVar13 + _DAT_00107e50;
        uVar19 = uVar13 + _UNK_00107e58;
        *puVar10 = (ulong)local_54[0];
        puVar10[1] = uVar13;
        puVar10[4] = (ulong)local_54[0] + 1;
        puVar10[5] = (long)(2 << (ulong)(local_54[0] & 0x1f));
        puVar10[3] = uVar19;
        puVar10[2] = uVar17;
        *(undefined1 *)(puVar10 + 0xc) = 0;
        puVar10[8] = 0;
        puVar10[9] = 0;
        puVar10[7] = uVar16;
        puVar10[6] = uVar4;
        lVar14 = -0x4000;
        do {
          lVar7 = lVar14 + 0x20;
          *(undefined8 *)((long)puVar10 + lVar14 + 0x6168) = 0x100200001002;
          *(undefined8 *)((long)puVar10 + lVar14 + 0x6160) = 0x100200001002;
          *(undefined8 *)((long)puVar10 + lVar14 + 0x6178) = 0x100200001002;
          *(undefined8 *)((long)puVar10 + lVar14 + 0x6170) = 0x100200001002;
          lVar14 = lVar7;
        } while (lVar7 != 0);
        uVar8 = 1;
        goto LAB_001054ec;
      }
      goto LAB_001054e0;
    }
    FUN_00105fd8();
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (-1 < (char)local_50) goto LAB_00105438;
LAB_001053b0:
    plVar6 = (long *)FUN_00105f54((bVar3 & 7) + 1,0);
    *(long **)(param_1 + 0x50) = plVar6;
    if (plVar6 != (long *)0x0) {
      if (*plVar6 != 0) {
        uVar4 = 1;
        uVar16 = 0;
        do {
          uVar13 = uVar4;
          cVar5 = (**(code **)(*(long *)(param_1 + 0x70) + 0x58))(param_1,&local_50,3);
          if (cVar5 != '\x03') {
            FUN_00105fd8(*(undefined8 *)(param_1 + 0x50));
            uVar8 = 0;
            *(undefined4 *)(param_1 + 0x60) = 0x66;
            *(undefined8 *)(param_1 + 0x50) = 0;
            goto LAB_001054ec;
          }
          puVar10 = *(ulong **)(param_1 + 0x50);
          pbVar1 = (byte *)(puVar10[2] + uVar16 * 3);
          *pbVar1 = local_50;
          pbVar1[1] = local_4f;
          pbVar1[2] = local_4e;
          uVar4 = (ulong)((int)uVar13 + 1);
          uVar16 = uVar13;
        } while (uVar13 < *puVar10);
      }
      goto LAB_00105438;
    }
LAB_00105514:
    uVar9 = 0x6d;
  }
  else {
LAB_001054e0:
    uVar9 = 0x66;
  }
  uVar8 = 0;
  *(undefined4 *)(param_1 + 0x60) = uVar9;
LAB_001054ec:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


