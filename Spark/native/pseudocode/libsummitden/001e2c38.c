// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e2c38; body: [[001e2c38, 001e2c4b]]

void FUN_001e2c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001e2c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
  return;
}


