// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001028c4; body: [[001028c4, 0010292b]]

void FUN_001028c4(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = AndroidBitmap_unlockPixels();
  if (iVar1 != 0) {
    if (iVar1 == -1) {
      pcVar2 = "Unlock pixels error, bad parameter";
    }
    else if (iVar1 == -2) {
      pcVar2 = "Unlock pixels error, JNI exception";
    }
    else {
      pcVar2 = "Unlock pixels error";
    }
    FUN_00103dc8(param_1,1,pcVar2);
    return;
  }
  return;
}


