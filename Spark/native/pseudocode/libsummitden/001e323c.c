// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e323c; body: [[001e323c, 001e3263]]

undefined1  [16] FUN_001e323c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)(&DAT_001207f8 + (long)*(int *)(param_1 + 0xc) * 8);
  auVar1._0_8_ = &DAT_00120828 + *(int *)(&DAT_00120828 + (long)*(int *)(param_1 + 0xc) * 4);
  return auVar1;
}


