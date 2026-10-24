// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e96fc; body: [[001e96fc, 001e976b]]

long FUN_001e96fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + -0x78) = 0;
  uVar1 = FUN_001cee0c();
  *(undefined8 *)(param_1 + -0x60) = uVar1;
  uVar1 = FUN_001cee60();
  *(undefined8 *)(param_1 + -0x70) = param_2;
  *(undefined8 *)(param_1 + -0x68) = param_3;
  *(undefined8 *)(param_1 + -0x58) = uVar1;
  *(undefined8 *)(param_1 + -0x20) = 0x434c4e47432b2b00;
  *(code **)(param_1 + -0x18) = FUN_001e976c;
  return param_1 + -0x80;
}


