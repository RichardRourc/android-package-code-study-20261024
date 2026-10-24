// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017cc58; body: [[0017cc58, 0017ccb3]]

int FUN_0017cc58(uint param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_001fed90)[(long)DAT_001fee00 ^ 0x4af49c36])
                    ((param_1 ^ 0xddb4e45a) + 0xee55d598,3);
  return (uVar1 ^ uVar1 >> 7) * -0x248ebcd9;
}


