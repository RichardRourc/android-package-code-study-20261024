// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00106088; body: [[00106088, 001060cf]]

void * FUN_00106088(void *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  
  if ((param_2 != 0) && ((param_3 | param_2) >> 0x20 != 0)) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = 0xffffffffffffffff / param_2;
    }
    if (uVar1 < param_3) {
      puVar2 = (undefined4 *)__errno();
      *puVar2 = 0xc;
      return (void *)0x0;
    }
  }
  pvVar3 = realloc(param_1,param_3 * param_2);
  return pvVar3;
}


