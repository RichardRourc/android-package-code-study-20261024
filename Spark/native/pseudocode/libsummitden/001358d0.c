// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001358d0; body: [[001358d0, 00135947]]

void FUN_001358d0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371af)])();
  lVar2 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719f)])(param_1);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371ae)])(param_1,lVar1 + lVar2);
  return;
}


