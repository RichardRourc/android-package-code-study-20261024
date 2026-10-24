// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00106a70; body: [[00106a70, 00106a83]]

undefined4
Java_pl_droidsonroids_gif_GifInfoHandle_getCurrentFrameIndex
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return *(undefined4 *)(param_3 + 0x38);
  }
  return 0xffffffff;
}


