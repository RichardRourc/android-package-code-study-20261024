// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00102f68; body: [[00102f68, 00102fd7]]

long Java_pl_droidsonroids_gif_GifInfoHandle_restoreRemainder
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if ((((param_3 == 0) || (*(long *)(param_3 + 0x28) == -1)) ||
      (*(long *)(*(long *)(param_3 + 8) + 0x20) == 1)) ||
     ((*(long *)(param_3 + 0x70) != 0 && (*(long *)(param_3 + 0x78) == *(long *)(param_3 + 0x70)))))
  {
    lVar1 = -1;
  }
  else {
    lVar2 = FUN_00107bb8();
    lVar1 = *(long *)(param_3 + 0x28);
    *(undefined8 *)(param_3 + 0x28) = 0xffffffffffffffff;
    *(long *)(param_3 + 0x30) = lVar1 + lVar2;
  }
  return lVar1;
}


