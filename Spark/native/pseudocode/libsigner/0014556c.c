// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0014556c; body: [[0014556c, 001459cb]]

void FUN_0014556c(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long unaff_x24;
  float fVar5;
  
  lVar1 = 0x760cb7f24d53c426;
  if (param_1 != 0) {
    lVar1 = -0x5bd62d9d555e3e28;
  }
  lVar2 = 0x1ce61cb766af2c30;
  do {
    while( true ) {
      while( true ) {
        while (lVar4 = lVar2, lVar2 = lVar4, lVar4 < -0x9888437dc260965) {
          if (lVar4 < -0x47424ab50666ced8) {
            if (lVar4 == -0x78f6f5e8da711af8) {
              DAT_0021f504 = 0;
              lVar4 = FUN_001e238c(unaff_x24,&DAT_0021d260);
              lVar2 = -0x47424ab50666ced8;
              if (lVar4 != 0) {
                lVar2 = -0x1d25e6566a72556c;
              }
            }
            else if (lVar4 == -0x5bd62d9d555e3e28) {
              unaff_x24 = *(long *)(param_1 + 0x40);
              lVar2 = 0x2a3d0e7168b938ac;
              if (unaff_x24 == 0 || param_3 == (ulong *)0x0) {
                lVar2 = -0x203ee968e41c49ce;
              }
            }
            else if (lVar4 == -0x48fc8f69589c447c) {
              lVar2 = 0x51b5d07c3e2c9a24;
              if (DAT_0021f6fa == '\0') {
                lVar2 = 0x25e86f7968f49167;
              }
            }
          }
          else if (lVar4 < -0x1d25e6566a72556c) {
            lVar2 = 0x655eb7e342aa1b21;
            if ((lVar4 != -0x47424ab50666ced8) && (lVar2 = lVar4, lVar4 == -0x203ee968e41c49ce)) {
              lVar2 = 0x655eb7e342aa1b21;
            }
          }
          else if (lVar4 == -0x1d25e6566a72556c) {
            fVar5 = *param_2;
            *param_3 = *param_3 | 0x100000;
            *param_2 = fVar5 + (1.0 - fVar5);
            lVar2 = 0x655eb7e342aa1b21;
          }
          else if (lVar4 == -0xd3b217146797eb7) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f504);
            lVar2 = -0x48fc8f69589c447c;
            if (iVar3 != 0) {
              lVar2 = -0x9888437dc260965;
            }
          }
        }
        if (0x2a3d0e7168b938ab < lVar4) break;
        lVar2 = -0xd3b217146797eb7;
        if (((lVar4 != -0x9888437dc260965) && (lVar2 = lVar1, lVar4 != 0x1ce61cb766af2c30)) &&
           (lVar2 = lVar4, lVar4 == 0x25e86f7968f49167)) {
          DAT_0021d268 = DAT_0021d268 ^ 0x6e;
          DAT_0021d269 = DAT_0021d269 ^ 0x6e;
          DAT_0021d26a = DAT_0021d26a ^ 0x6e;
          DAT_0021d26b = DAT_0021d26b ^ 0x6e;
          DAT_0021d260 = DAT_0021d260 ^ 0x6e6e6e6e6e6e6e6e;
          DAT_0021f6fa = '\x01';
          lVar2 = -0x78f6f5e8da711af8;
        }
      }
      if (0x655eb7e342aa1b20 < lVar4) break;
      lVar2 = -0xd3b217146797eb7;
      if ((lVar4 != 0x2a3d0e7168b938ac) && (lVar2 = lVar4, lVar4 == 0x51b5d07c3e2c9a24)) {
        lVar2 = -0x78f6f5e8da711af8;
      }
    }
    lVar2 = 0x655eb7e342aa1b21;
  } while ((lVar4 == 0x760cb7f24d53c426) || (lVar2 = lVar4, lVar4 != 0x655eb7e342aa1b21));
  return;
}


