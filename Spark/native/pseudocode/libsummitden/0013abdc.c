// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013abdc; body: [[0013abdc, 0013ac17]]

ulong FUN_0013abdc(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_001faed0)[(long)DAT_001fbb18 ^ 0x1fffffffdcc3710e])
                    (param_1 + (ulong)param_2);
  return uVar1 >> 0x18;
}


