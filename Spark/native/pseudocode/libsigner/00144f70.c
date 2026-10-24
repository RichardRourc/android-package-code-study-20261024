// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00144f70; body: [[00144f70, 001453bf]]

void FUN_00144f70(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long unaff_x24;
  float fVar5;
  
  lVar1 = -0x4688cbf1b8e710fc;
  if (param_1 != 0) {
    lVar1 = 0x6a658235f2f75250;
  }
  lVar2 = 0xebd882dd37b4df1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar4 = lVar2, lVar4 < -0x26386f0274f35e91) {
            if (lVar4 < -0x4688cbf1b8e710fc) {
              if (lVar4 == -0x7786a3a7776af0c2) {
                DAT_0021c5a4 = DAT_0021c5a4 ^ 0xcb;
                DAT_0021c5a5 = DAT_0021c5a5 ^ 0xcb;
                DAT_0021c5a6 = DAT_0021c5a6 ^ 0xcb;
                DAT_0021c5a8 = DAT_0021c5a8 ^ 0xcb;
                DAT_0021c5a9 = DAT_0021c5a9 ^ 0xcb;
                DAT_0021c5aa = DAT_0021c5aa ^ 0xcb;
                DAT_0021c5a7 = DAT_0021c5a7 ^ 0xcb;
                DAT_0021f65e = '\x01';
                lVar2 = -0x378608ebc95f1626;
              }
              else {
                lVar2 = -0x1f3977366e9c25fe;
                if (((lVar4 != -0x4dbbbf854644f9d4) && (lVar2 = lVar4, lVar4 == -0x4a4c07efa47f2f14)
                    ) && (lVar2 = 0x2c1b04b89a220d14, DAT_0021f65e == '\0')) {
                  lVar2 = -0x7786a3a7776af0c2;
                }
              }
            }
            else {
              lVar2 = -0x1f3977366e9c25fe;
              if (lVar4 < -0x3830c116ea00b980) {
                if ((lVar4 != -0x4688cbf1b8e710fc) && (lVar2 = lVar4, lVar4 == -0x3af9e7d617781b85))
                {
                  lVar2 = -0x26386f0274f35e91;
                }
              }
              else if ((lVar4 != -0x3830c116ea00b980) &&
                      (lVar2 = lVar4, lVar4 == -0x378608ebc95f1626)) {
                DAT_0021f294 = 0;
                lVar4 = FUN_001e238c(unaff_x24,&DAT_0021c5a4);
                lVar2 = -0x4dbbbf854644f9d4;
                if (lVar4 != 0) {
                  lVar2 = 0x1b40e3879983fb2d;
                }
              }
            }
          }
          if (lVar4 < 0x2c1b04b89a220d14) break;
          lVar2 = -0x378608ebc95f1626;
          if (((lVar4 != 0x2c1b04b89a220d14) &&
              (lVar2 = -0x26386f0274f35e91, lVar4 != 0x415fb4cacad0c805)) &&
             (lVar2 = lVar4, lVar4 == 0x6a658235f2f75250)) {
            unaff_x24 = *(long *)(param_1 + 0x20);
            lVar2 = -0x3af9e7d617781b85;
            if (unaff_x24 == 0 || param_3 == (ulong *)0x0) {
              lVar2 = -0x3830c116ea00b980;
            }
          }
        }
        if (lVar4 < 0xebd882dd37b4df1) break;
        lVar2 = lVar1;
        if ((lVar4 != 0xebd882dd37b4df1) && (lVar2 = lVar4, lVar4 == 0x1b40e3879983fb2d)) {
          fVar5 = *param_2;
          *param_3 = *param_3 | 0x40000;
          *param_2 = fVar5 + (1.0 - fVar5);
          lVar2 = -0x1f3977366e9c25fe;
        }
      }
      if (lVar4 != -0x26386f0274f35e91) break;
      iVar3 = FUN_00212730(0,1,&DAT_0021f294);
      lVar2 = -0x4a4c07efa47f2f14;
      if (iVar3 != 0) {
        lVar2 = 0x415fb4cacad0c805;
      }
    }
    lVar2 = lVar4;
  } while (lVar4 != -0x1f3977366e9c25fe);
  return;
}


