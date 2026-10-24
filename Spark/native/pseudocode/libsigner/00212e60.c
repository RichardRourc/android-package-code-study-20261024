// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00212e60; body: [[00212e60, 00212e6f]]

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int timer_settime(timer_t __timerid,int __flags,itimerspec *__value,itimerspec *__ovalue)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_timer_settime_00217c58)((int)__timerid,__flags);
  return iVar1;
}


