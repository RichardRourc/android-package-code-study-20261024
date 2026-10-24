// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001f9f24; body: [[001f9f24, 001fa06b]]

void FUN_001f9f24(undefined4 *param_1,uint *param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  *param_2 = param_3;
  pvVar2 = calloc(1,(ulong)param_3);
  lVar1 = -0x6bd26373b69e2212;
  if (pvVar2 != (void *)0x0) {
    lVar1 = -0x28ee212cd644d530;
  }
  *(void **)(param_2 + 2) = pvVar2;
  lVar3 = 0x21f15559b2a9e8ab;
  while( true ) {
    while (lVar3 < -0x19fe551b65af4a47) {
      if (lVar3 == -0x6bd26373b69e2212) {
        *param_1 = 1;
        lVar3 = -0x19fe551b65af4a47;
      }
      else if (lVar3 == -0x28ee212cd644d530) {
        FUN_001f4fdc(param_1,pvVar2,(ulong)param_3,1,param_4);
        lVar3 = -0x19fe551b65af4a47;
      }
    }
    if (lVar3 == -0x19fe551b65af4a47) break;
    if (lVar3 == 0x21f15559b2a9e8ab) {
      lVar3 = lVar1;
    }
  }
  return;
}


