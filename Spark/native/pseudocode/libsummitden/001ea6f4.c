// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ea6f4; body: [[001ea6f4, 001ea72f]]

void FUN_001ea6f4(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_00205ea4,FUN_001ea730);
  if (iVar1 == 0) {
    DAT_00205ea0 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


