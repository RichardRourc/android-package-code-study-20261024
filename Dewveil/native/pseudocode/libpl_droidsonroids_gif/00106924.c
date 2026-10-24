// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00106924; body: [[00106924, 0010696b]]

long Java_pl_droidsonroids_gif_GifInfoHandle_getMetadataByteCount
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  
  if (param_3 != 0) {
    lVar2 = *(long *)(*(long *)(param_3 + 8) + 0x20);
    sVar1 = 0;
    if (*(char **)(param_3 + 0x68) != (char *)0x0) {
      sVar1 = strlen(*(char **)(param_3 + 0x68));
    }
    return lVar2 * 0x48 + 0x120 + sVar1;
  }
  return 0;
}


