// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00168510; body: [[00168510, 0016854b]]

void FUN_00168510(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_00178fd4,FUN_0016854c);
  if (iVar1 == 0) {
    DAT_00178fd0 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


