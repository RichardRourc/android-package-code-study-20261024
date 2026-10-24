// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001a5734; body: [[001a5734, 001a5aa7]]

void FUN_001a5734(void *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  void *unaff_x21;
  long unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  
  lVar1 = -0x70cbbcb2d9379497;
  if (param_2 != 0) {
    lVar1 = 0x18cea95c7aa82e9c;
  }
  lVar2 = -0x6ffbcb93e7a3f6a6;
  if (param_1 != (void *)0x0) {
    lVar2 = -0x1ea97c9610d8d670;
  }
  lVar3 = -0x5aa069224e609ae;
  do {
    while( true ) {
      while( true ) {
        while (lVar4 = lVar3, -0x5aa069224e609af < lVar4) {
          if (lVar4 < 0x18cea95c7aa82e9c) {
            lVar3 = lVar2;
            if (((lVar4 != -0x5aa069224e609ae) &&
                (lVar3 = -0xd42967cfb29632b, lVar4 != 0x1a56dbc320b72f5)) &&
               (lVar3 = lVar4, lVar4 == 0x5f27daa339ea2b5)) {
              unaff_x27 = (undefined8 *)((long)param_1 + unaff_x26 * 8);
              unaff_x21 = (void *)*unaff_x27;
              lVar3 = -0x14860c0c74340044;
              unaff_x20 = unaff_x26;
              if (unaff_x21 != (void *)0x0) {
                lVar3 = -0x1c2ba9e6d9d4bf2b;
              }
            }
          }
          else if (lVar4 == 0x18cea95c7aa82e9c) {
            unaff_x26 = 0;
            lVar3 = 0x5f27daa339ea2b5;
          }
          else if (lVar4 == 0x3d0c6eb98e16c8ab) {
            unaff_x28 = unaff_x20 + 1;
            lVar3 = 0x1a56dbc320b72f5;
            if (unaff_x28 != param_2) {
              lVar3 = 0x7ed46942f235a794;
            }
          }
          else {
            lVar3 = lVar4;
            if (lVar4 == 0x7ed46942f235a794) {
              lVar3 = 0x5f27daa339ea2b5;
              unaff_x26 = unaff_x28;
            }
          }
        }
        if (lVar4 < -0x1c2ba9e6d9d4bf2b) break;
        if (lVar4 == -0x1c2ba9e6d9d4bf2b) {
          free(unaff_x21);
          *unaff_x27 = 0;
          lVar3 = 0x3d0c6eb98e16c8ab;
        }
        else {
          lVar3 = 0x3d0c6eb98e16c8ab;
          if ((lVar4 != -0x14860c0c74340044) && (lVar3 = lVar4, lVar4 == -0xd42967cfb29632b)) {
            free(param_1);
            lVar3 = -0x4be75c64be9f347a;
          }
        }
      }
      if (-0x4be75c64be9f347b < lVar4) break;
      lVar3 = -0xd42967cfb29632b;
      if ((lVar4 != -0x70cbbcb2d9379497) && (lVar3 = lVar4, lVar4 == -0x6ffbcb93e7a3f6a6)) {
        lVar3 = -0x4be75c64be9f347a;
      }
    }
    lVar3 = lVar1;
  } while ((lVar4 == -0x1ea97c9610d8d670) || (lVar3 = lVar4, lVar4 != -0x4be75c64be9f347a));
  return;
}


