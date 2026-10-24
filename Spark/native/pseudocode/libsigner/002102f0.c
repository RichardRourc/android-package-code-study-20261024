// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 002102f0; body: [[002102f0, 00210407]]

void FUN_002102f0(undefined4 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  
  pvVar4 = realloc(*(void **)(param_2 + 0x18),(ulong)(*(int *)(param_2 + 0x14) + 1) << 2);
  lVar1 = 0x65536dc2a8308acd;
  if (pvVar4 != (void *)0x0) {
    lVar1 = 0xc7bf249d1db72b2;
  }
  lVar3 = -0x316a2fad8e5725cc;
  while( true ) {
    while (lVar5 = lVar3, lVar5 < 0x27963d1423e000f6) {
      lVar3 = lVar1;
      if ((lVar5 != -0x316a2fad8e5725cc) && (lVar3 = lVar5, lVar5 == 0xc7bf249d1db72b2)) {
        uVar2 = *(uint *)(param_2 + 0x14);
        *(void **)(param_2 + 0x18) = pvVar4;
        *(undefined4 *)((long)pvVar4 + (ulong)uVar2 * 4) = *(undefined4 *)(param_2 + 0x10);
        *(uint *)(param_2 + 0x14) = uVar2 + 1;
        lVar3 = 0x27963d1423e000f6;
      }
    }
    if (lVar5 == 0x27963d1423e000f6) break;
    lVar3 = lVar5;
    if (lVar5 == 0x65536dc2a8308acd) {
      *param_1 = 2;
      lVar3 = 0x27963d1423e000f6;
    }
  }
  return;
}


