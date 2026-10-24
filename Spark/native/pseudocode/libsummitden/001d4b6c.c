// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d4b6c; body: [[001d4b6c, 001d4cdb]]

long FUN_001d4b6c(long *param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  short *psVar3;
  undefined8 *puVar4;
  void *pvVar5;
  
  psVar3 = (short *)*param_1;
  if (((ulong)(param_1[1] - (long)psVar3) < 2) || (*psVar3 != 0x7453)) {
    puVar4 = (undefined8 *)0x0;
    if ((short *)param_1[1] != psVar3) goto LAB_001d4bac;
  }
  else {
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(psVar3 + 1);
    lVar1 = *(long *)((long)pvVar5 + 8);
    puVar2 = pvVar5;
    if (lVar1 - 0xfd0U < 0xfffffffffffff010) {
      puVar2 = malloc(0x1000);
      if (puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_001cee20();
      }
      lVar1 = 0;
      *puVar2 = pvVar5;
      puVar2[1] = 0;
      param_1[0x266] = (long)puVar2;
    }
    *(long *)((long)puVar2 + 8) = lVar1 + 0x20;
    puVar4 = (undefined8 *)((long)puVar2 + lVar1 + 0x10);
    *puVar4 = &PTR_FUN_001f3c10;
    *(undefined8 *)((long)puVar2 + lVar1 + 0x28) = 3;
    *(ushort *)((long)puVar2 + lVar1 + 0x19) =
         *(ushort *)((long)puVar2 + lVar1 + 0x19) & 0xf000 | 0x540;
    *(undefined **)((long)puVar2 + lVar1 + 0x20) = &DAT_0011e867;
    *(undefined1 *)((long)puVar2 + lVar1 + 0x18) = 8;
    psVar3 = (short *)*param_1;
    if ((short *)param_1[1] != psVar3) {
LAB_001d4bac:
      if ((char)*psVar3 == 'S') {
        lVar1 = FUN_001d5748(param_1,param_2);
        if (lVar1 == 0) {
          return 0;
        }
        if (*(char *)(lVar1 + 8) != '\x1b') {
          if (puVar4 != (undefined8 *)0x0) {
            return 0;
          }
          *param_3 = 1;
          return lVar1;
        }
        goto LAB_001d4c94;
      }
    }
  }
  lVar1 = 0;
LAB_001d4c94:
  lVar1 = FUN_001d5a1c(param_1,param_2,puVar4,lVar1);
  return lVar1;
}


