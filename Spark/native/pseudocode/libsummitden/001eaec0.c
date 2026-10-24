// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001eaec0; body: [[001eaec0, 001eaf43]]

void FUN_001eaec0(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_001eeab0(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_001eac68(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_001eaf44(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_001f6b60;
  fprintf((FILE *)(PTR___sF_001f6b60 + 0x130),"w4j375t7av %s - %s\n","xmp8bq4xc5cda5",
          "x6z1za5hzf2koo5p023b3mj6sda9e");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


