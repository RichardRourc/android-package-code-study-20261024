// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00200c58; body: [[00200c58, 00200ddf]]

byte FUN_00200c58(ulong param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte unaff_w19;
  ulong unaff_x21;
  
  lVar1 = -0x6bf42222db0ad31d;
  if (param_2 == 0 || param_1 == 0) {
    lVar1 = -0x1b715090d60a355e;
  }
  uVar3 = param_1;
  lVar4 = 0x22f3f9cf91cbb9a6;
  do {
    while( true ) {
      while (lVar5 = lVar4, 0xfb13253120e52d4 < lVar5) {
        if (lVar5 == 0xfb13253120e52d5) {
          iVar2 = FUN_001e17a8(param_1 + (unaff_x21 - uVar3),param_2);
          unaff_w19 = iVar2 == 0;
          lVar4 = -0x25a3e9f6f44c50c;
        }
        else {
          lVar4 = lVar1;
          if ((lVar5 != 0x22f3f9cf91cbb9a6) && (lVar4 = lVar5, lVar5 == 0x3007aa9d32d99be8))
          goto LAB_00200d54;
        }
      }
      if (lVar5 == -0x6bf42222db0ad31d) break;
      if (lVar5 == -0x1b715090d60a355e) {
LAB_00200d54:
        unaff_w19 = 0;
        lVar4 = -0x25a3e9f6f44c50c;
      }
      else {
        lVar4 = lVar5;
        if (lVar5 == -0x25a3e9f6f44c50c) {
          return unaff_w19 & 1;
        }
      }
    }
    unaff_x21 = FUN_001e16c4(param_1);
    uVar3 = FUN_001e16c4(param_2);
    lVar4 = 0x3007aa9d32d99be8;
    if (uVar3 <= unaff_x21) {
      lVar4 = 0xfb13253120e52d5;
    }
  } while( true );
}


