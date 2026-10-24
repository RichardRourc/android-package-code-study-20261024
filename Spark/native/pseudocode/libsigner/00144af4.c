// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00144af4; body: [[00144af4, 00144f5f]]

void FUN_00144af4(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long unaff_x24;
  float fVar5;
  
  lVar1 = -0x565d3f9f390e31f8;
  if (param_1 != 0) {
    lVar1 = 0x464fff414fe94363;
  }
  lVar2 = -0x5a29a71200787f91;
  do {
    while( true ) {
      while( true ) {
        while (lVar4 = lVar2, lVar2 = lVar4, 0x2eb656586ae1c09b < lVar4) {
          if (lVar4 < 0x55a7512c4f9fb3b1) {
            if (lVar4 == 0x2eb656586ae1c09c) {
              lVar2 = 0x19d182fb2a0d48c0;
              if (DAT_0021f65e == '\0') {
                lVar2 = 0x1b227b4075b5ff91;
              }
            }
            else if (lVar4 == 0x464fff414fe94363) {
              unaff_x24 = *(long *)(param_1 + 0x40);
              lVar2 = 0x7f485bc7ca918184;
              if (unaff_x24 == 0 || param_3 == (ulong *)0x0) {
                lVar2 = 0x5defe1ba657c8727;
              }
            }
            else if (lVar4 == 0x51706970709dc699) {
              lVar2 = -0x1908bdf94340ff80;
            }
          }
          else if (lVar4 < 0x7f485bc7ca918184) {
            if (lVar4 == 0x55a7512c4f9fb3b1) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f294);
              lVar2 = 0x2eb656586ae1c09c;
              if (iVar3 != 0) {
                lVar2 = -0x170ef0d4f8bd410d;
              }
            }
            else if (lVar4 == 0x5defe1ba657c8727) {
              lVar2 = -0x1908bdf94340ff80;
            }
          }
          else {
            lVar2 = 0x55a7512c4f9fb3b1;
            if ((lVar4 != 0x7f485bc7ca918184) && (lVar2 = lVar4, lVar4 == 0x7f4b48ec98e337a2)) {
              fVar5 = *param_2;
              *param_3 = *param_3 | 0x20000;
              *param_2 = fVar5 + (1.0 - fVar5);
              lVar2 = -0x1908bdf94340ff80;
            }
          }
        }
        if (-0x1908bdf94340ff81 < lVar4) break;
        if (lVar4 == -0x788425b0aaae11f0) {
          DAT_0021f294 = 0;
          lVar4 = FUN_001e238c(unaff_x24,&DAT_0021c5a4);
          lVar2 = 0x51706970709dc699;
          if (lVar4 != 0) {
            lVar2 = 0x7f4b48ec98e337a2;
          }
        }
        else {
          lVar2 = lVar1;
          if ((lVar4 != -0x5a29a71200787f91) && (lVar2 = lVar4, lVar4 == -0x565d3f9f390e31f8)) {
            lVar2 = -0x1908bdf94340ff80;
          }
        }
      }
      if (lVar4 < 0x19d182fb2a0d48c0) break;
      lVar2 = -0x788425b0aaae11f0;
      if ((lVar4 != 0x19d182fb2a0d48c0) && (lVar2 = lVar4, lVar4 == 0x1b227b4075b5ff91)) {
        DAT_0021c5a4 = DAT_0021c5a4 ^ 0xcb;
        DAT_0021c5a5 = DAT_0021c5a5 ^ 0xcb;
        DAT_0021c5a6 = DAT_0021c5a6 ^ 0xcb;
        DAT_0021c5a8 = DAT_0021c5a8 ^ 0xcb;
        DAT_0021c5a9 = DAT_0021c5a9 ^ 0xcb;
        DAT_0021c5aa = DAT_0021c5aa ^ 0xcb;
        DAT_0021c5a7 = DAT_0021c5a7 ^ 0xcb;
        DAT_0021f65e = '\x01';
        lVar2 = -0x788425b0aaae11f0;
      }
    }
    lVar2 = 0x55a7512c4f9fb3b1;
  } while ((lVar4 == -0x170ef0d4f8bd410d) || (lVar2 = lVar4, lVar4 != -0x1908bdf94340ff80));
  return;
}


