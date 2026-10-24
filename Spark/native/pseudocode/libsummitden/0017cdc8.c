// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017cdc8; body: [[0017cdc8, 0017ce23]]

int FUN_0017cdc8(uint param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_001fed90)[(long)DAT_001fee00 ^ 0x4af49c36])
                    ((param_1 ^ 0x9c1cc10e) + 0x5ed4d7c2,5);
  return (uVar1 ^ uVar1 >> 10) * -0x2e36d3f;
}


