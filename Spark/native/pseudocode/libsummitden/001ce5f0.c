// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ce5f0; body: [[001ce5f0, 001ce66f]]

void FUN_001ce5f0(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t *psVar2;
  byte *__s;
  
  *param_1 = (long)(PTR_DAT_001f6b40 + 0x10);
  __s = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __s = param_2 + 1;
  }
  sVar1 = strlen((char *)__s);
  psVar2 = (size_t *)FUN_001eeb4c(sVar1 + 0x19);
  *psVar2 = sVar1;
  psVar2[1] = sVar1;
  *(undefined4 *)(psVar2 + 2) = 0;
  memcpy(psVar2 + 3,__s,sVar1 + 1);
  param_1[1] = (long)(psVar2 + 3);
  return;
}


