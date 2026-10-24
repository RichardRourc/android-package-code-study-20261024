// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00166ea8; body: [[00166ea8, 00166f17]]

long __cxa_init_primary_exception(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + -0x78) = 0;
  uVar1 = std::get_unexpected();
  *(undefined8 *)(param_1 + -0x60) = uVar1;
  uVar1 = std::get_terminate();
  *(undefined8 *)(param_1 + -0x70) = param_2;
  *(undefined8 *)(param_1 + -0x68) = param_3;
  *(undefined8 *)(param_1 + -0x58) = uVar1;
  *(undefined8 *)(param_1 + -0x20) = 0x434c4e47432b2b00;
  *(code **)(param_1 + -0x18) = FUN_00166f18;
  return param_1 + -0x80;
}


