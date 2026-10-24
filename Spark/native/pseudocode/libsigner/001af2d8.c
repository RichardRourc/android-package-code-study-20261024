// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001af2d8; body: [[001af2d8, 001af583]]

void FUN_001af2d8(int *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *unaff_x20;
  int unaff_w21;
  
  lVar1 = -0x7e369e6589ba78e7;
  if (param_1 != (int *)0x0) {
    lVar1 = 0x39a16bddf8dc82a2;
  }
  lVar2 = 0x7bca060775e09e1e;
  do {
    while( true ) {
      do {
        while( true ) {
          while (lVar3 = lVar2, lVar3 < -0x73716f9563fa402) {
            if (lVar3 < -0x7440f7630005660c) {
              lVar2 = -0x73716f9563fa402;
              if ((lVar3 != -0x7e369e6589ba78e7) && (lVar2 = lVar3, lVar3 == -0x7ad67c16664e25fa)) {
                munmap(unaff_x20,*(size_t *)(param_1 + 4));
                lVar2 = -0x23395a9e9c848352;
              }
            }
            else if (lVar3 == -0x7440f7630005660c) {
              lVar2 = 0x4d5d50fcdd4992d2;
              if (1 < (long)unaff_x20 + 1U) {
                lVar2 = -0x7ad67c16664e25fa;
              }
            }
            else if (lVar3 == -0x503101e48cc58732) {
              FUN_001f3aa0(unaff_w21);
              lVar2 = 0x1b91058c21da9ca7;
            }
            else {
              lVar2 = lVar3;
              if ((lVar3 == -0x23395a9e9c848352) &&
                 (unaff_w21 = *param_1, lVar2 = -0x503101e48cc58732, unaff_w21 < 0)) {
                lVar2 = 0x1552bb494d897f7e;
              }
            }
          }
          if (lVar3 < 0x39a16bddf8dc82a2) break;
          if (lVar3 == 0x39a16bddf8dc82a2) {
            unaff_x20 = *(void **)(param_1 + 2);
            lVar2 = -0x7440f7630005660c;
          }
          else {
            lVar2 = -0x23395a9e9c848352;
            if ((lVar3 != 0x4d5d50fcdd4992d2) && (lVar2 = lVar3, lVar3 == 0x7bca060775e09e1e)) {
              lVar2 = lVar1;
            }
          }
        }
        lVar2 = 0x1b91058c21da9ca7;
      } while (lVar3 == 0x1552bb494d897f7e);
      if (lVar3 != 0x1b91058c21da9ca7) break;
      free(param_1);
      lVar2 = -0x73716f9563fa402;
    }
    lVar2 = lVar3;
  } while (lVar3 != -0x73716f9563fa402);
  return;
}


