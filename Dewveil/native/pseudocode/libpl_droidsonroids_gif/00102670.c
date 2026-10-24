// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00102670; body: [[00102670, 0010267f]]

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int eventfd_write(int __fd,eventfd_t __value)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_eventfd_write_00119f48)(__fd);
  return iVar1;
}


