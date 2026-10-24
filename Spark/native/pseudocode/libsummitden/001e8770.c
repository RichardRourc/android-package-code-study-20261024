// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e8770; body: [[001e8770, 001e879f]]

ulong FUN_001e8770(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)((long)*(undefined8 **)(param_1 + 0x18) + 9);
  if ((char)uVar1 < -0x40) {
                    /* WARNING: Could not recover jumptable at 0x001e8790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x18))();
    return uVar2;
  }
  return (ulong)((uVar1 & 0xc0) == 0);
}


