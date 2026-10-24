// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e2c58; body: [[001e2c58, 001e2d67]]

undefined8 * FUN_001e2c58(long *param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined1 auVar7 [16];
  
  pcVar3 = (char *)*param_1;
  puVar5 = param_2;
  if (pcVar3 != (char *)param_1[1]) {
    do {
      if (*pcVar3 != 'B') {
        return puVar5;
      }
      *param_1 = (long)(pcVar3 + 1);
      auVar7 = FUN_001e3270(param_1);
      if (auVar7._8_8_ == 0) {
        return (undefined8 *)0x0;
      }
      pvVar6 = (void *)param_1[0x266];
      lVar4 = *(long *)((long)pvVar6 + 8);
      puVar2 = pvVar6;
      if (lVar4 - 0xfc0U < 0xfffffffffffff010) {
        puVar2 = malloc(0x1000);
        if (puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_001cee20();
        }
        lVar4 = 0;
        *puVar2 = pvVar6;
        puVar2[1] = 0;
        param_1[0x266] = (long)puVar2;
      }
      *(long *)((long)puVar2 + 8) = lVar4 + 0x30;
      uVar1 = *(ushort *)((long)puVar5 + 9);
      param_2 = (undefined8 *)((long)puVar2 + lVar4 + 0x10);
      *param_2 = &PTR_FUN_001f58d8;
      *(long *)((long)puVar2 + lVar4 + 0x28) = auVar7._0_8_;
      *(undefined8 **)((long)puVar2 + lVar4 + 0x20) = puVar5;
      *(undefined1 *)((long)puVar2 + lVar4 + 0x18) = 9;
      *(long *)((long)puVar2 + lVar4 + 0x30) = auVar7._8_8_;
      *(ushort *)((long)puVar2 + lVar4 + 0x19) =
           *(ushort *)((long)puVar2 + lVar4 + 0x19) & 0xf000 | uVar1 & 0xfc0;
      pcVar3 = (char *)*param_1;
      puVar5 = param_2;
    } while (pcVar3 != (char *)param_1[1]);
  }
  return param_2;
}


