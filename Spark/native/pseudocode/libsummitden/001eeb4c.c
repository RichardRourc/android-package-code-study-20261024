// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001eeb4c; body: [[001eeb4c, 001eebb7]]

void FUN_001eeb4c(size_t param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (param_1 < 2) {
    param_1 = 1;
  }
  while( true ) {
    pvVar1 = malloc(param_1);
    if (pvVar1 != (void *)0x0) {
      return;
    }
    pcVar2 = (code *)FUN_001ceea4();
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
  }
  uVar3 = FUN_001e95ec(8);
  FUN_001cf038();
  FUN_001e97d4(uVar3,PTR_PTR_001f6af8,PTR_FUN_001f6b00);
  FUN_001eeb4c();
  return;
}


