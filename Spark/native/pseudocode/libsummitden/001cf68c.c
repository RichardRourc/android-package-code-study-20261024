// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cf68c; body: [[001cf68c, 001cf713]]

void FUN_001cf68c(long param_1,long param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_1 + 8) == *(long *)(*(long *)(param_2 + 0x10) + 8)) {
    if (*(int *)(param_2 + 0x3c) == 0) {
      *(undefined4 *)(param_2 + 0x30) = param_4;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      *(long *)(param_2 + 0x20) = param_3;
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x50);
      return;
    }
    if ((*(long *)(param_2 + 0x28) != *(long *)(param_2 + 0x50)) ||
       (*(long *)(param_2 + 0x20) != param_3)) {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(undefined1 *)(param_2 + 0x4e) = 1;
      return;
    }
    if (*(int *)(param_2 + 0x30) == 2) {
      *(undefined4 *)(param_2 + 0x30) = param_4;
      return;
    }
  }
  return;
}


