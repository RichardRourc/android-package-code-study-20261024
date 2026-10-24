// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d036c; body: [[001d036c, 001d03cb]]

undefined8 FUN_001d036c(long *param_1,void *param_2,size_t param_3)

{
  void *__s1;
  int iVar1;
  undefined8 uVar2;
  
  __s1 = (void *)*param_1;
  if (((ulong)(param_1[1] - (long)__s1) < param_3) ||
     (iVar1 = memcmp(__s1,param_2,param_3), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    *param_1 = (long)__s1 + param_3;
  }
  return uVar2;
}


