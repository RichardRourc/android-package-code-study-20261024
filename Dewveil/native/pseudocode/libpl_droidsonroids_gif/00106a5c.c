// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00106a5c; body: [[00106a5c, 00106a6f]]

undefined4
Java_pl_droidsonroids_gif_GifInfoHandle_getCurrentLoop
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return *(undefined4 *)(param_3 + 0x78);
  }
  return 0;
}


