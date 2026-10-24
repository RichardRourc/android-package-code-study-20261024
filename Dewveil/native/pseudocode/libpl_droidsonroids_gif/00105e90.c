// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00105e90; body: [[00105e90, 00105edb]]

undefined8 FUN_00105e90(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  
  if (param_1 == 4) {
    *param_3 = *param_2 >> 2 & 7;
    *(ulong *)(param_3 + 8) = (ulong)*(ushort *)(param_2 + 1);
    if ((*param_2 & 1) == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (uint)param_2[3];
    }
    *(uint *)(param_3 + 0x10) = uVar1;
    return 1;
  }
  return 0;
}


