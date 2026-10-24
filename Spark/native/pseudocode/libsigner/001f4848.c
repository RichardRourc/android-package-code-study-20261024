// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001f4848; body: [[001f4848, 001f4873]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f4848(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar3 = _UNK_00103058;
  uVar2 = _DAT_00103050;
  uVar1 = _DAT_00103040;
  *(undefined8 *)(param_1 + 0x58) = _UNK_00103048;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 0x70) = 0xca62c1d6;
  return;
}


