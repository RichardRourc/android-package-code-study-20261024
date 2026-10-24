// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00211910; body: [[00211910, 00211957]]

void FUN_00211910(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = FUN_00210504(*(undefined8 *)(param_2 + 0x28),0);
  FUN_0020f318(param_1,uVar1,0,uVar2,param_3);
  return;
}


