// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 0010678c; body: [[0010678c, 001067a7]]

undefined8
Java_pl_droidsonroids_gif_GifInfoHandle_getComment(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0010679c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x538))(param_1,*(undefined8 *)(param_3 + 0x68));
    return uVar1;
  }
  return 0;
}


