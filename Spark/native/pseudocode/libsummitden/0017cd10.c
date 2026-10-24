// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017cd10; body: [[0017cd10, 0017cd6b]]

int FUN_0017cd10(uint param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_001fed90)[(long)DAT_001fee00 ^ 0x4af49c36])
                    ((param_1 ^ 0xf35743eb) + 0x4146b056,0x10);
  return (uVar1 ^ uVar1 >> 0x12) * 0x1f67284b;
}


