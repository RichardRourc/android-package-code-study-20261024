// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001067e4; body: [[001067e4, 001067f3]]

void Java_pl_droidsonroids_gif_GifInfoHandle_setLoopCount
               (undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  if (param_3 != 0) {
    *(ulong *)(param_3 + 0x70) = param_4 & 0xffff;
  }
  return;
}


