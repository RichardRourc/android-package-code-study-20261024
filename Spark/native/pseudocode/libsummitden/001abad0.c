// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001abad0; body: [[001abad0, 001abb3f]]

void FUN_001abad0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  void *__dest;
  void *__src;
  
  __dest = (void *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b429)])(param_4);
  __src = (void *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b429)])(param_2);
  memcpy(__dest,__src,param_3 - param_2);
  return;
}


