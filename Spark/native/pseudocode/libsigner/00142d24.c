// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00142d24; body: [[00142d24, 00143147]]

void FUN_00142d24(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x24;
  float fVar6;
  
  lVar1 = 0x5ff8374435ac5a23;
  if (param_1 != 0) {
    lVar1 = 0x3118625a2df47752;
  }
  lVar2 = 0x3f153cd402340bb7;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar5 = lVar2, 0xa18d0d32a9117c7 < lVar5) {
            if (lVar5 < 0x3f153cd402340bb7) {
              if (lVar5 == 0xa18d0d32a9117c8) {
                DAT_0021c688 = DAT_0021c688 ^ 0xe5e5e5e5e5e5e5e5;
                DAT_0021f66f = '\x01';
                lVar2 = 0x6e35d39d91507b1d;
              }
              else {
                lVar2 = -0xeab2a2c77676fc9;
                if ((lVar5 != 0x14096f70e1e43f56) && (lVar2 = lVar5, lVar5 == 0x3118625a2df47752)) {
                  unaff_x24 = *(long *)(param_1 + 0x30);
                  lVar2 = -0x36fc1679913ae3b4;
                  if (unaff_x24 == 0 || param_3 == (ulong *)0x0) {
                    lVar2 = 0x14096f70e1e43f56;
                  }
                }
              }
            }
            else if (lVar5 < 0x5ff8374435ac5a23) {
              lVar2 = lVar1;
              if ((lVar5 != 0x3f153cd402340bb7) && (lVar2 = lVar5, lVar5 == 0x46695213b8895bc6)) {
                lVar2 = 0x6e35d39d91507b1d;
              }
            }
            else {
              lVar2 = -0xeab2a2c77676fc9;
              if ((lVar5 != 0x5ff8374435ac5a23) && (lVar2 = lVar5, lVar5 == 0x6e35d39d91507b1d)) {
                DAT_0021f2d8 = 0;
                uVar4 = FUN_002006ac(unaff_x24,&DAT_0021c688);
                lVar2 = -0x29e24627b41fdc61;
                if ((uVar4 & 1) == 0) {
                  lVar2 = -0x119120f13bff4c9e;
                }
              }
            }
          }
          if (-0x119120f13bff4c9f < lVar5) break;
          if (lVar5 == -0x6df5c611c3cdcd86) {
            lVar2 = 0x46695213b8895bc6;
            if (DAT_0021f66f == '\0') {
              lVar2 = 0xa18d0d32a9117c8;
            }
          }
          else {
            lVar2 = -0x90a753454583b0d;
            if ((lVar5 != -0x36fc1679913ae3b4) && (lVar2 = lVar5, lVar5 == -0x29e24627b41fdc61)) {
              fVar6 = *param_2;
              *param_3 = *param_3 | 0x800;
              *param_2 = fVar6 + (1.0 - fVar6) * 0.3;
              lVar2 = -0xeab2a2c77676fc9;
            }
          }
        }
        if (-0xeab2a2c77676fca < lVar5) break;
        lVar2 = -0xeab2a2c77676fc9;
        if ((lVar5 != -0x119120f13bff4c9e) && (lVar2 = lVar5, lVar5 == -0x1069740e59bbf902)) {
          lVar2 = -0x90a753454583b0d;
        }
      }
      if (lVar5 != -0x90a753454583b0d) break;
      iVar3 = FUN_00212730(0,1,&DAT_0021f2d8);
      lVar2 = -0x6df5c611c3cdcd86;
      if (iVar3 != 0) {
        lVar2 = -0x1069740e59bbf902;
      }
    }
    lVar2 = lVar5;
  } while (lVar5 != -0xeab2a2c77676fc9);
  return;
}


