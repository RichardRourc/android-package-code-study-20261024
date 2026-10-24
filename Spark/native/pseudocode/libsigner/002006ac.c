// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 002006ac; body: [[002006ac, 0020082f]]

byte FUN_002006ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte unaff_w19;
  ulong unaff_x22;
  
  lVar1 = 0x7e713fa43f38c582;
  if (param_2 == 0 || param_1 == 0) {
    lVar1 = 0x58b842c6f86d5804;
  }
  lVar2 = 0x5ece82223eee3411;
  do {
    do {
      while (lVar5 = lVar2, lVar5 < 0x5ece82223eee3411) {
        if (lVar5 == -0x579a549dca8d1ccf) {
          iVar3 = FUN_001e30ac(param_1,param_2,unaff_x22);
          unaff_w19 = iVar3 == 0;
          lVar2 = 0x5039187a35dab08d;
        }
        else {
          if (lVar5 == 0x5039187a35dab08d) {
            return unaff_w19 & 1;
          }
          lVar2 = lVar5;
          if (lVar5 == 0x58b842c6f86d5804) goto LAB_00200764;
        }
      }
      lVar2 = lVar1;
    } while (lVar5 == 0x5ece82223eee3411);
    if (lVar5 == 0x75df443d79079721) {
LAB_00200764:
      unaff_w19 = 0;
      lVar2 = 0x5039187a35dab08d;
    }
    else {
      lVar2 = lVar5;
      if (lVar5 == 0x7e713fa43f38c582) {
        uVar4 = FUN_001e16c4(param_1);
        unaff_x22 = FUN_001e16c4(param_2);
        lVar2 = 0x75df443d79079721;
        if (unaff_x22 <= uVar4) {
          lVar2 = -0x579a549dca8d1ccf;
        }
      }
    }
  } while( true );
}


