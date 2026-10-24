// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00102afc; body: [[00102afc, 00102b47]]

undefined8
Java_pl_droidsonroids_gif_GifInfoHandle_reset(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_3 == 0) || (iVar1 = (**(code **)(param_3 + 0x80))(param_3), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    *(undefined8 *)(param_3 + 0x78) = 0;
    *(undefined8 *)(param_3 + 0x30) = 0;
    *(undefined8 *)(param_3 + 0x38) = 0;
    *(undefined8 *)(param_3 + 0x28) = 0xffffffffffffffff;
  }
  return uVar2;
}


