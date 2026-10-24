// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b0570; body: [[001b0570, 001b05eb]]

bool FUN_001b0570(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = *param_1;
  lVar1 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b505)])(uVar2);
  uVar3 = *(ulong *)(lVar1 + 0x30);
  lVar1 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b505)])(uVar2,param_3);
  return uVar3 < *(ulong *)(lVar1 + 0x30);
}


