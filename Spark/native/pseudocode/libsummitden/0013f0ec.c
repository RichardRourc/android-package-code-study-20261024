// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013f0ec; body: [[0013f0ec, 0013f143]]

uint FUN_0013f0ec(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(&DAT_0011d6c0 + (ulong)param_1 * 4);
  uVar2 = (*(code *)(&PTR_FUN_001faed0)[(long)DAT_001fbb18 ^ 0x1fffffffdcc37090])
                    (0x89e612a9b9553e1d,param_1);
  return uVar2 ^ uVar1;
}


