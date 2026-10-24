// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017cd6c; body: [[0017cd6c, 0017cdc7]]

int FUN_0017cd6c(uint param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_001fed90)[(long)DAT_001fee00 ^ 0x4af49c36])
                    ((param_1 ^ 0x607677f4) + 0xe575e768,10);
  return (uVar1 ^ uVar1 >> 8) * -0x64ed5ed1;
}


