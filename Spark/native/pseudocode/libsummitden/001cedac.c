// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cedac; body: [[001cedac, 001cedef]]

bool FUN_001cedac(long *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long extraout_x1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  return *(long *)(param_3 + 2) == extraout_x1 && *param_3 == iVar1;
}


