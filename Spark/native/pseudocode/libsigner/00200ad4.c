// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00200ad4; body: [[00200ad4, 00200c57]]

byte FUN_00200ad4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte unaff_w19;
  ulong unaff_x22;
  
  lVar1 = -0x189dd9be034f6f3a;
  if (param_2 == 0 || param_1 == 0) {
    lVar1 = -0x3f0aedafd881a303;
  }
  lVar2 = -0x7aff4164fa82cff2;
  while( true ) {
    while( true ) {
      while (lVar5 = lVar2, lVar5 < -0x189dd9be034f6f3a) {
        lVar2 = lVar1;
        if ((lVar5 != -0x7aff4164fa82cff2) &&
           ((lVar5 == -0x784e00d20971c752 || (lVar2 = lVar5, lVar5 == -0x3f0aedafd881a303)))) {
          unaff_w19 = 0;
          lVar2 = 0x29ff0ff794febe2e;
        }
      }
      if (lVar5 != 0x34ee749c3dc3cf5c) break;
      iVar3 = FUN_001e1c70(param_1,param_2,unaff_x22);
      unaff_w19 = iVar3 == 0;
      lVar2 = 0x29ff0ff794febe2e;
    }
    if (lVar5 == 0x29ff0ff794febe2e) break;
    lVar2 = lVar5;
    if (lVar5 == -0x189dd9be034f6f3a) {
      uVar4 = FUN_001e16c4(param_1);
      unaff_x22 = FUN_001e16c4(param_2);
      lVar2 = -0x784e00d20971c752;
      if (unaff_x22 <= uVar4) {
        lVar2 = 0x34ee749c3dc3cf5c;
      }
    }
  }
  return unaff_w19 & 1;
}


