// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00167764; body: [[00167764, 00167863]]

int FUN_00167764(long param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)(param_1 + -4);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00178d98);
  if ((DAT_00178dc0 != (ushort *)0x0) && (DAT_00178dc0 != (ushort *)&DAT_00178fd0)) {
    puVar3 = (ushort *)0x0;
    puVar4 = DAT_00178dc0;
    do {
      uVar1 = puVar4[1];
      if (puVar4 + (ulong)uVar1 * 2 == puVar5) {
        puVar4[1] = *(short *)(param_1 + -2) + uVar1;
        goto code_r0x0016784c;
      }
      if (puVar5 + (ulong)*(ushort *)(param_1 + -2) * 2 == puVar4) {
        *(ushort *)(param_1 + -2) = *(ushort *)(param_1 + -2) + uVar1;
        if (puVar3 == (ushort *)0x0) {
          DAT_00178dc0 = puVar5;
          *puVar5 = *puVar4;
        }
        else {
          *puVar3 = (ushort)((int)puVar5 - 0x178dd0U >> 2);
        }
        goto code_r0x0016784c;
      }
      uVar1 = *puVar4;
      puVar3 = puVar4;
      puVar4 = (ushort *)(&DAT_00178dd0 + (ulong)uVar1 * 4);
    } while ((ulong)uVar1 != 0x80);
  }
  iVar2 = (int)DAT_00178dc0;
  DAT_00178dc0 = puVar5;
  *puVar5 = (ushort)(iVar2 - 0x178dd0U >> 2);
code_r0x0016784c:
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00178d98);
  return iVar2;
}


