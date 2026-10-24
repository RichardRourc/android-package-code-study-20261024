// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001eebc0; body: [[001eebc0, 001eec4f]]

void FUN_001eebc0(size_t param_1,size_t param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  void *local_28;
  
  if (param_1 < 2) {
    param_1 = 1;
  }
  if (param_2 < 9) {
    param_2 = 8;
  }
  while( true ) {
    local_28 = (void *)0x0;
    posix_memalign(&local_28,param_2,param_1);
    if (local_28 != (void *)0x0) {
      return;
    }
    pcVar1 = (code *)FUN_001ceea4();
    if (pcVar1 == (code *)0x0) break;
    (*pcVar1)();
  }
  uVar2 = FUN_001e95ec(8);
  FUN_001cf038();
  FUN_001e97d4(uVar2,PTR_PTR_001f6af8,PTR_FUN_001f6b00);
  FUN_001eebc0();
  return;
}


