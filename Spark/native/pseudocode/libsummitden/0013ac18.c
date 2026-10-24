// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013ac18; body: [[0013ac18, 0013ac63]]

ulong FUN_0013ac18(long param_1)

{
  ulong uVar1;
  
  uVar1 = (param_1 + 0x9e3779b97f4a7c15U ^ param_1 + 0x9e3779b97f4a7c15U >> 0x1e) *
          -0x40a7b892e31b1a47;
  uVar1 = (uVar1 ^ uVar1 >> 0x1b) * -0x6b2fb644ecceee15;
  return uVar1 ^ uVar1 >> 0x1f;
}


