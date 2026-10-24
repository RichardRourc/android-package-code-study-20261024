// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e7090; body: [[001e7090, 001e70bf]]

ulong FUN_001e7090(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((char)uVar1 < -0x40) {
                    /* WARNING: Could not recover jumptable at 0x001e70b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)((uVar1 & 0xc0) == 0);
}


