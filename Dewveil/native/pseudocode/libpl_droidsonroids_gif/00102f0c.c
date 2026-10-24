// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00102f0c; body: [[00102f0c, 00102f67]]

void Java_pl_droidsonroids_gif_GifInfoHandle_saveRemainder
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if ((((param_3 != 0) && (*(long *)(param_3 + 0x28) == -1)) &&
      (lVar1 = *(long *)(*(long *)(param_3 + 8) + 0x20), *(long *)(param_3 + 0x38) != lVar1)) &&
     (lVar1 != 1)) {
    lVar3 = *(long *)(param_3 + 0x30);
    lVar1 = FUN_00107bb8();
    uVar2 = lVar3 - lVar1;
    *(ulong *)(param_3 + 0x28) = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
  }
  return;
}


