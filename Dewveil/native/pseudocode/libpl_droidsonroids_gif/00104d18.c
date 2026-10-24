// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00104d18; body: [[00104d18, 00104d23]]

int Java_pl_droidsonroids_gif_GifInfoHandle_createTempNativeFileDescriptor(void)

{
  int iVar1;
  
  iVar1 = eventfd(0,0);
  return iVar1;
}


