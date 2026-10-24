// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00106d98; body: [[00106d98, 00106db3]]

undefined8
Java_pl_droidsonroids_gif_GifInfoHandle_isOpaque(undefined8 param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(char *)(param_3 + 0x98) != '\0')) {
    return 1;
  }
  return 0;
}


