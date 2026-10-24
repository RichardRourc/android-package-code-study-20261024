// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0016a9c0; body: [[0016a9c0, 0016acc7]]

undefined4
FUN_0016a9c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *unaff_x24;
  undefined4 unaff_w25;
  void *unaff_x26;
  
  lVar2 = -0x5f23d1f0ed901c55;
  if (*(ulong *)(param_1 + 0x870) < 0x7f) {
    lVar2 = 0x1bc4b4c8265964f4;
  }
  lVar1 = -0x265968046dc63abc;
LAB_0016aab0:
  do {
    while (lVar3 = lVar1, lVar1 = lVar3, -0x21fcd74d80c23404 < lVar3) {
      if (lVar3 < 0x18b9008125bf3517) {
        if (lVar3 == -0x21fcd74d80c23403) {
          free(unaff_x26);
LAB_0016aa9c:
          unaff_w25 = 2;
          lVar1 = -0x49beaa0b5360d5a8;
        }
        else if (lVar3 == 0xbbaf1cc3210962a) {
          free(unaff_x24);
          lVar1 = -0x65932140ef64459c;
        }
      }
      else {
        lVar1 = -0x65932140ef64459c;
        if (lVar3 != 0x18b9008125bf3517) {
          if (lVar3 == 0x1bc4b4c8265964f4) {
            unaff_x24 = (void *)FUN_001e53f4(param_2,param_3);
            unaff_x26 = (void *)FUN_001e53f4(param_4,param_5);
            lVar1 = -0x49647fc1ac58d378;
            if (unaff_x26 == (void *)0x0 || unaff_x24 == (void *)0x0) {
              lVar1 = 0x44ddb3e419b81b29;
            }
          }
          else {
            lVar1 = lVar3;
            if ((lVar3 == 0x44ddb3e419b81b29) &&
               (lVar1 = 0x18b9008125bf3517, unaff_x24 != (void *)0x0)) {
              lVar1 = 0xbbaf1cc3210962a;
            }
          }
        }
      }
    }
    if (lVar3 < -0x49beaa0b5360d5a8) {
      if (lVar3 == -0x65932140ef64459c) {
        lVar1 = -0x556ca67b74e6399d;
        if (unaff_x26 != (void *)0x0) {
          lVar1 = -0x21fcd74d80c23403;
        }
      }
      else if (lVar3 == -0x5f23d1f0ed901c55) {
        unaff_w25 = 0x25;
        lVar1 = -0x49beaa0b5360d5a8;
      }
      else if (lVar3 == -0x556ca67b74e6399d) goto LAB_0016aa9c;
      goto LAB_0016aab0;
    }
    if (lVar3 == -0x49647fc1ac58d378) {
      lVar3 = *(long *)(param_1 + 0x870);
      unaff_w25 = 0;
      lVar1 = param_1 + lVar3 * 0x10;
      *(void **)(lVar1 + 0x70) = unaff_x24;
      *(void **)(lVar1 + 0x78) = unaff_x26;
      *(long *)(param_1 + 0x870) = lVar3 + 1;
      lVar1 = -0x49beaa0b5360d5a8;
    }
    else {
      lVar1 = lVar2;
      if ((lVar3 != -0x265968046dc63abc) && (lVar1 = lVar3, lVar3 == -0x49beaa0b5360d5a8)) {
        return unaff_w25;
      }
    }
  } while( true );
}


