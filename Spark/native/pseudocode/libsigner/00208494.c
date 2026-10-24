// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00208494; body: [[00208494, 0020863f]]

void FUN_00208494(long param_1,ulong param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar5 = 0x34ee749c3dc3cf5c;
  uVar7 = 1;
LAB_00208544:
  uVar3 = param_4;
  lVar1 = -0x1b715090d60a355e;
  if ((param_2 >> (uVar7 & 0x3f) & 1) != 0) {
    lVar1 = -0x6bf42222db0ad31d;
  }
  do {
    param_4 = uVar3;
    lVar2 = 0x29ff0ff794febe2e;
    if (param_4 + 1 != 0x40) {
      lVar2 = 0xfb13253120e52d5;
    }
    uVar4 = param_5;
    while( true ) {
      while( true ) {
        while (lVar6 = lVar5, param_5 = uVar4, uVar4 = param_5, lVar6 < 0x22f3f9cf91cbb9a6) {
          if (lVar6 == -0x6bf42222db0ad31d) {
            *(ulong *)(param_1 + 0x210) =
                 *(ulong *)(param_1 + 0x210) ^ *(ulong *)(param_1 + (0x3f - param_4) * 8 + 0x10);
            lVar5 = 0x3007aa9d32d99be8;
          }
          else if (lVar6 == -0x1b715090d60a355e) {
            lVar5 = 0x3007aa9d32d99be8;
          }
          else {
            lVar5 = lVar6;
            if (lVar6 == 0xfb13253120e52d5) {
              lVar5 = 0x22f3f9cf91cbb9a6;
              uVar7 = param_5;
              goto LAB_00208544;
            }
          }
        }
        if (lVar6 < 0x3007aa9d32d99be8) break;
        uVar4 = param_4 + 1;
        lVar5 = lVar2;
        if ((lVar6 != 0x3007aa9d32d99be8) &&
           (uVar4 = param_5, lVar5 = lVar6, lVar6 == 0x34ee749c3dc3cf5c)) {
          lVar5 = 0x22f3f9cf91cbb9a6;
        }
      }
      uVar3 = uVar7;
      lVar5 = lVar1;
      if (lVar6 == 0x22f3f9cf91cbb9a6) break;
      lVar5 = lVar6;
      if (lVar6 == 0x29ff0ff794febe2e) {
        return;
      }
    }
  } while( true );
}


