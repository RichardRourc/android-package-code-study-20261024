// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001025a0; body: [[001025a0, 001025af]]

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int eventfd_read(int __fd,eventfd_t *__value)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_eventfd_read_00119ee0)(__fd);
  return iVar1;
}


