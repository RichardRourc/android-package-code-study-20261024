// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ce568; body: [[001ce568, 001ce5db]]

void FUN_001ce568(long *param_1,char *param_2)

{
  size_t sVar1;
  size_t *psVar2;
  
  *param_1 = (long)(PTR_DAT_001f6b38 + 0x10);
  sVar1 = strlen(param_2);
  psVar2 = (size_t *)FUN_001eeb4c(sVar1 + 0x19);
  *psVar2 = sVar1;
  psVar2[1] = sVar1;
  *(undefined4 *)(psVar2 + 2) = 0;
  memcpy(psVar2 + 3,param_2,sVar1 + 1);
  param_1[1] = (long)(psVar2 + 3);
  return;
}


