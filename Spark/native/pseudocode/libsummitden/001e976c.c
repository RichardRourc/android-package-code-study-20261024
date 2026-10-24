// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e976c; body: [[001e976c, 001e97cf]]

void FUN_001e976c(int param_1,long param_2)

{
  long lVar1;
  
  if (param_1 == 1) {
    lVar1 = FUN_001eab40(0xffffffffffffffff,param_2 + -0x58);
    if (lVar1 == 1) {
      if (*(code **)(param_2 + -0x48) != (code *)0x0) {
        (**(code **)(param_2 + -0x48))(param_2 + 0x20);
      }
      FUN_001e9b14(param_2 + -0x60);
    }
    return;
  }
  FUN_001cee74(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
  FUN_001cd4e0();
}


