// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017c370; body: [[0017c370, 0017c427]]

undefined8 FUN_0017c370(void)

{
  int iVar1;
  ulong uVar2;
  
  while( true ) {
    do {
      uVar2 = (*(code *)(&PTR_FUN_001fed30)[(int)(DAT_001fed88 ^ 0xdc30b661)])();
      iVar1 = 0x21a38b78;
      if ((uVar2 & 1) == 0) {
        iVar1 = 0x7a41a367;
      }
    } while (iVar1 == -0x162c5661);
    if (iVar1 != 0x7a41a367) break;
    (*(code *)(&PTR_FUN_001fed30)[(int)(DAT_001fed88 ^ 0xdc30b660)])(1500000);
  }
  DAT_00204430 = 1;
  return 0;
}


