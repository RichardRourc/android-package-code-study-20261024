// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b653c; body: [[001b653c, 001b65b7]]

void FUN_001b653c(void)

{
  DAT_00204bf0 = 0;
  (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0b)])(&DAT_00204bf8);
  (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0a)])(&DAT_00204c10);
  __cxa_atexit(FUN_001b6600,&DAT_00204bf0,&PTR_LOOP_001f2f50);
  return;
}


