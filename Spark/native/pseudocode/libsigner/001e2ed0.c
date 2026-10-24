// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001e2ed0; body: [[001e2ed0, 001e30ab]]

int FUN_001e2ed0(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *unaff_x19;
  byte *unaff_x20;
  byte *unaff_x21;
  byte *unaff_x22;
  long lVar9;
  
  bVar4 = *param_1;
  uVar6 = 0;
  uVar7 = 0;
  lVar3 = 0x483dcbc36ada42c4;
  if ((uint)bVar4 == (uint)*param_2 && bVar4 != 0) {
    lVar3 = -0x34ce59f19df9112f;
  }
  lVar9 = -0x2ef756f1c7496e5f;
  uVar8 = 0;
  uVar5 = 0;
LAB_001e2fa4:
  do {
    pbVar1 = unaff_x19 + 1;
    pbVar2 = unaff_x20 + 1;
    do {
      while( true ) {
        while( true ) {
          while (lVar9 < -0x29504ee3cf2d5633) {
            if (lVar9 == -0x3cc327df2eecc1c6) {
              lVar9 = 0x54c2b837d86711b8;
              uVar8 = uVar7;
              uVar5 = uVar6;
              goto LAB_001e2fa4;
            }
            if (lVar9 == -0x34ce59f19df9112f) {
              lVar9 = -0x29504ee3cf2d5633;
              unaff_x19 = param_1;
              unaff_x20 = param_2;
              goto LAB_001e2fa4;
            }
            if (lVar9 == -0x2ef756f1c7496e5f) {
              lVar9 = lVar3;
            }
          }
          if (lVar9 < 0x483dcbc36ada42c4) break;
          if (lVar9 == 0x483dcbc36ada42c4) {
            lVar9 = 0x54c2b837d86711b8;
            uVar8 = (uint)*param_2;
            uVar5 = (uint)bVar4;
            goto LAB_001e2fa4;
          }
          if (lVar9 == 0x54c2b837d86711b8) {
            return uVar5 - uVar8;
          }
        }
        if (lVar9 != -0x29504ee3cf2d5633) break;
        uVar6 = (uint)*pbVar1;
        uVar7 = (uint)*pbVar2;
        unaff_x21 = pbVar2;
        unaff_x22 = pbVar1;
        lVar9 = -0x3cc327df2eecc1c6;
        if (uVar6 == uVar7 && uVar6 != 0) {
          lVar9 = 0x1db468c64d6a7ed0;
        }
      }
    } while (lVar9 != 0x1db468c64d6a7ed0);
    lVar9 = -0x29504ee3cf2d5633;
    unaff_x19 = unaff_x22;
    unaff_x20 = unaff_x21;
  } while( true );
}


