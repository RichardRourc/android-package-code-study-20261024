// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00105edc; body: [[00105edc, 00105f53]]

undefined8 FUN_00105edc(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x70) == 0) {
      uVar1 = 0;
    }
    else {
      if (*(long *)((long)param_1 + 0x50) != 0) {
        FUN_00105fd8();
        *(undefined8 *)((long)param_1 + 0x50) = 0;
      }
      if (*(long *)((long)param_1 + 0x18) != 0) {
        FUN_00105fd8();
        *(undefined8 *)((long)param_1 + 0x18) = 0;
      }
      if (*(long *)((long)param_1 + 0x58) != 0) {
        FUN_00106008(param_1);
        *(undefined8 *)((long)param_1 + 0x58) = 0;
      }
      free(*(void **)((long)param_1 + 0x70));
      free(param_1);
      uVar1 = 1;
    }
  }
  return uVar1;
}


