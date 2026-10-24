// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00102b48; body: [[00102b48, 00102b53]]

void Java_pl_droidsonroids_gif_GifInfoHandle_setSpeedFactor
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    *(undefined4 *)(param_4 + 0x88) = param_1;
  }
  return;
}


