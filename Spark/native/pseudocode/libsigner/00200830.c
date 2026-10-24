// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00200830; body: [[00200830, 002009b7]]

byte FUN_00200830(ulong param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  byte unaff_w19;
  ulong unaff_x21;
  
  lVar1 = 0x7d8bf94548220fb8;
  if (param_2 == 0 || param_1 == 0) {
    lVar1 = 0x77f0428eaa711148;
  }
  uVar3 = param_1;
  lVar4 = -0x124103c739306402;
  do {
LAB_002008f0:
    do {
      while (lVar4 < 0x418b7d3c908df894) {
        if (lVar4 == -0x71c5c29ef27b8351) {
          return unaff_w19 & 1;
        }
        if (lVar4 == -0x45704382c9dcec73) {
LAB_00200934:
          unaff_w19 = 0;
          lVar4 = -0x71c5c29ef27b8351;
        }
        else if (lVar4 == -0x124103c739306402) {
          lVar4 = lVar1;
        }
      }
      if (lVar4 == 0x418b7d3c908df894) {
        iVar2 = FUN_001e2ed0(param_1 + (unaff_x21 - uVar3),param_2);
        unaff_w19 = iVar2 == 0;
        lVar4 = -0x71c5c29ef27b8351;
        goto LAB_002008f0;
      }
      if (lVar4 == 0x77f0428eaa711148) goto LAB_00200934;
    } while (lVar4 != 0x7d8bf94548220fb8);
    unaff_x21 = FUN_001e16c4(param_1);
    uVar3 = FUN_001e16c4(param_2);
    lVar4 = -0x45704382c9dcec73;
    if (uVar3 <= unaff_x21) {
      lVar4 = 0x418b7d3c908df894;
    }
  } while( true );
}


