// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00212e50; body: [[00212e50, 00212e5f]]

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int timer_create(clockid_t __clock_id,sigevent *__evp,timer_t *__timerid)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_timer_create_00217c50)(__clock_id);
  return iVar1;
}


