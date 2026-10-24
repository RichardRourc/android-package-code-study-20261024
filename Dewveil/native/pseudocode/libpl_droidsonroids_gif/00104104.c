// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00104104; body: [[00104104, 00104147]]

undefined4 FUN_00104104(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fseeko(*(FILE **)(*(long *)(param_1 + 8) + 0x68),*(__off_t *)(param_1 + 0x50),0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x60) = 0x3ec;
  }
  return uVar2;
}


