// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017ccb4; body: [[0017ccb4, 0017cd0f]]

int FUN_0017ccb4(uint param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_001fed90)[(long)DAT_001fee00 ^ 0x4af49c36])
                    ((param_1 ^ 0xb6603c07) + 0xd91aecc,4);
  return (uVar1 ^ uVar1 >> 0x13) * 0x245b6dfd;
}


