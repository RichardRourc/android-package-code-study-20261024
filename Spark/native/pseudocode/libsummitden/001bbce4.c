// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bbce4; body: [[001bbce4, 001bbd53]]

void FUN_001bbce4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  void *__dest;
  void *__src;
  
  __dest = (void *)(*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa5b)])(param_4);
  __src = (void *)(*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa5b)])(param_2);
  memcpy(__dest,__src,param_3 - param_2);
  return;
}


