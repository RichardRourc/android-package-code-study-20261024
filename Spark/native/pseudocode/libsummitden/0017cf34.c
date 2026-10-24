// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017cf34; body: [[0017cf34, 0017cf8f]]

int FUN_0017cf34(uint param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_001fed90)[(long)DAT_001fee00 ^ 0x4af49c36])
                    ((param_1 ^ 0xb15c7de7) + 0xaeace006,6);
  return (uVar1 ^ uVar1 >> 0xb) * -0x57c52965;
}


