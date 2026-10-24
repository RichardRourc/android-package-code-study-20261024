// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001ace90; body: [[001ace90, 001ad07b]]

void FUN_001ace90(undefined4 *param_1,long param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *unaff_x22;
  
  uVar2 = *(uint *)*param_3;
  lVar1 = 0x2ce2edddaf334d81;
  if (uVar2 != 0xffffffff) {
    lVar1 = -0x2ddd98d59c65e2d2;
  }
  *param_3 = (uint *)*param_3 + 1;
  lVar4 = 0x353e7cd16df664a2;
  while( true ) {
    while( true ) {
      while (-0xab3a208b03543c0 < lVar4) {
        if (lVar4 < 0x2ce2edddaf334d81) {
          if (lVar4 == -0xab3a208b03543bf) {
            *param_1 = 2;
            lVar4 = -0x3dc07bfa902cf42a;
          }
          else if (lVar4 == -0x9c4c91856260990) {
            lVar4 = -0x3dc07bfa902cf42a;
          }
        }
        else if (lVar4 == 0x2ce2edddaf334d81) {
          unaff_x22 = &DAT_001030a0;
          lVar4 = -0x55b9520f58750739;
        }
        else if (lVar4 == 0x353e7cd16df664a2) {
          lVar4 = lVar1;
        }
      }
      if (lVar4 != -0x55b9520f58750739) break;
      lVar3 = FUN_001e5154(unaff_x22);
      lVar4 = -0xab3a208b03543bf;
      if (lVar3 != 0) {
        lVar4 = -0x9c4c91856260990;
      }
      *(long *)(param_4 + 8) = lVar3;
    }
    if (lVar4 == -0x3dc07bfa902cf42a) break;
    if (lVar4 == -0x2ddd98d59c65e2d2) {
      unaff_x22 = (undefined *)
                  (*(long *)(param_2 + 8) +
                  (ulong)*(uint *)(*(long *)(param_2 + 8) + (ulong)*(uint *)(param_2 + 0x24) +
                                  (ulong)uVar2 * 4));
      lVar4 = -0x55b9520f58750739;
    }
  }
  return;
}


