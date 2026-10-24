// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001712c0; body: [[001712c0, 001713e3]]

void FUN_001712c0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = -0x55c949af59ae76f;
  if (param_3 == 0 || param_2 == 0) {
    lVar1 = -0x28b93f8217cb5d73;
  }
  lVar2 = 0x332dfd522f05c93c;
  while( true ) {
    while (-0x55c949af59ae770 < lVar2) {
      if (lVar2 == -0x55c949af59ae76f) {
        (**(code **)(*param_1 + 0x600))(param_1,param_2,param_3,0);
        lVar2 = -0x342c529d4277a1df;
      }
      else if (lVar2 == 0x332dfd522f05c93c) {
        lVar2 = lVar1;
      }
    }
    if (lVar2 == -0x342c529d4277a1df) break;
    if (lVar2 == -0x28b93f8217cb5d73) {
      lVar2 = -0x342c529d4277a1df;
    }
  }
  return;
}


