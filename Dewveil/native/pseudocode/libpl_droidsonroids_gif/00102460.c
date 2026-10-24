// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00102460; body: [[00102460, 0010246f]]

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int eventfd(int __count,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_eventfd_00119e40)(__count,__flags);
  return iVar1;
}


