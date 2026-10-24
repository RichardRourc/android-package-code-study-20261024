// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00102ab8; body: [[00102ab8, 00102afb]]

bool FUN_00102ab8(long param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x80))();
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  }
  return iVar1 == 0;
}


