// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 002083ac; body: [[002083ac, 00208493]]

void FUN_002083ac(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = -0x189dd9be034f6f3a;
  if (0x3f < param_2) {
    lVar1 = -0x3f0aedafd881a303;
  }
  lVar2 = -0x7aff4164fa82cff2;
  do {
    while (lVar3 = lVar2, -0x3f0aedafd881a304 < lVar3) {
      if (lVar3 == -0x189dd9be034f6f3a) {
        *(ulong *)(param_1 + 0x210) =
             *(ulong *)(param_1 + 0x210) ^ *(ulong *)(param_1 + (0x3f - param_2) * 8 + 0x10);
        lVar2 = -0x784e00d20971c752;
      }
      else {
        lVar2 = lVar3;
        if (lVar3 == -0x3f0aedafd881a303) {
          lVar2 = -0x784e00d20971c752;
        }
      }
    }
    lVar2 = lVar1;
  } while ((lVar3 == -0x7aff4164fa82cff2) || (lVar2 = lVar3, lVar3 != -0x784e00d20971c752));
  return;
}


