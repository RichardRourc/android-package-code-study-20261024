// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001b15e8; body: [[001b15e8, 001b1707]]

void FUN_001b15e8(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = -0x3f0aedafd881a303;
LAB_001b166c:
  do {
    lVar1 = -0x784e00d20971c752;
    if (DAT_0021faa9 == '\0') {
      lVar1 = -0x189dd9be034f6f3a;
    }
    do {
      while (lVar2 < -0x189dd9be034f6f3a) {
        if (lVar2 == -0x784e00d20971c752) {
          FUN_002083ac(param_2 + 0x20,0x26);
          param_1 = *(ulong *)(param_2 + 0x238) | 1;
          lVar2 = 0x34ee749c3dc3cf5c;
          goto LAB_001b166c;
        }
        if (lVar2 == -0x3f0aedafd881a303) {
          lVar2 = lVar1;
        }
      }
      if (lVar2 == 0x34ee749c3dc3cf5c) {
        *(ulong *)(param_2 + 0x238) = param_1 | 0x4000000000;
        return;
      }
    } while (lVar2 != -0x189dd9be034f6f3a);
    param_1 = *(ulong *)(param_2 + 0x238);
    lVar2 = 0x34ee749c3dc3cf5c;
  } while( true );
}


