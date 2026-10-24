// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e9b40; body: [[001e9b40, 001e9c3f]]

int FUN_001e9b40(long param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)(param_1 + -4);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00205c68);
  if ((DAT_00205c90 != (ushort *)0x0) && (DAT_00205c90 != (ushort *)&DAT_00205ea0)) {
    puVar3 = (ushort *)0x0;
    puVar4 = DAT_00205c90;
    do {
      uVar1 = puVar4[1];
      if (puVar4 + (ulong)uVar1 * 2 == puVar5) {
        puVar4[1] = *(short *)(param_1 + -2) + uVar1;
        goto code_r0x001e9c28;
      }
      if (puVar5 + (ulong)*(ushort *)(param_1 + -2) * 2 == puVar4) {
        *(ushort *)(param_1 + -2) = *(ushort *)(param_1 + -2) + uVar1;
        if (puVar3 == (ushort *)0x0) {
          DAT_00205c90 = puVar5;
          *puVar5 = *puVar4;
        }
        else {
          *puVar3 = (ushort)((int)puVar5 - 0x205ca0U >> 2);
        }
        goto code_r0x001e9c28;
      }
      uVar1 = *puVar4;
      puVar3 = puVar4;
      puVar4 = (ushort *)(&DAT_00205ca0 + (ulong)uVar1 * 4);
    } while ((ulong)uVar1 != 0x80);
  }
  iVar2 = (int)DAT_00205c90;
  DAT_00205c90 = puVar5;
  *puVar5 = (ushort)(iVar2 - 0x205ca0U >> 2);
code_r0x001e9c28:
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00205c68);
  return iVar2;
}


