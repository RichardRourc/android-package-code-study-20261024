// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001647d0; body: [[001647d0, 0016484f]]

/* WARNING: Removing unreachable block (ram,0x0016483c) */

void FUN_001647d0(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = 0x2804dddd;
    if (param_2 != 0) {
      uVar1 = 0x29fe851c;
    }
    uVar2 = 0xdc9dc8c6;
    while (uVar2 == 0xdc9dc8c6) {
      uVar2 = uVar1;
      if (0x2804dddc < uVar1) {
        if (uVar1 != 0x29fe851c) {
          return;
        }
        *param_1 = *param_3;
        uVar2 = 0xe5c16bc7;
      }
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}


