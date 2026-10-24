// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 002105f4; body: [[002105f4, 00210873]]

void FUN_002105f4(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *unaff_x20;
  void *unaff_x21;
  
  lVar1 = -0x29504ee3cf2d5633;
  if (param_1 != (void *)0x0) {
    lVar1 = 0x1db468c64d6a7ed0;
  }
  lVar2 = 0x483dcbc36ada42c4;
  do {
    while( true ) {
      while( true ) {
        while (lVar3 = lVar2, -0x29504ee3cf2d5634 < lVar3) {
          if (lVar3 < 0x483dcbc36ada42c4) {
            lVar2 = -0x56ad058abb7434bf;
            if (((lVar3 != -0x29504ee3cf2d5633) && (lVar2 = lVar3, lVar3 == 0x1db468c64d6a7ed0)) &&
               (unaff_x20 = *(void **)((long)param_1 + 8), lVar2 = -0x3cc327df2eecc1c6,
               unaff_x20 != (void *)0x0)) {
              lVar2 = 0x54c2b837d86711b8;
            }
          }
          else {
            lVar2 = -0x2e5d71d46d443370;
            if (lVar3 != 0x55dcd19dee737a1a) {
              if (lVar3 == 0x54c2b837d86711b8) {
                free(unaff_x20);
                *(undefined8 *)((long)param_1 + 8) = 0;
                lVar2 = -0x2eb8ff3123f5eabc;
              }
              else {
                lVar2 = lVar3;
                if (lVar3 == 0x483dcbc36ada42c4) {
                  lVar2 = lVar1;
                }
              }
            }
          }
        }
        if (lVar3 < -0x2eb8ff3123f5eabc) break;
        if (lVar3 == -0x2eb8ff3123f5eabc) {
          unaff_x21 = *(void **)((long)param_1 + 0x18);
          lVar2 = 0x55dcd19dee737a1a;
          if (unaff_x21 != (void *)0x0) {
            lVar2 = -0x5412c5352f1dc37a;
          }
        }
        else {
          lVar2 = lVar3;
          if (lVar3 == -0x2e5d71d46d443370) {
            free(param_1);
            lVar2 = -0x56ad058abb7434bf;
          }
        }
      }
      if (lVar3 != -0x5412c5352f1dc37a) break;
      free(unaff_x21);
      lVar2 = -0x2e5d71d46d443370;
    }
    lVar2 = -0x2eb8ff3123f5eabc;
  } while ((lVar3 == -0x3cc327df2eecc1c6) || (lVar2 = lVar3, lVar3 != -0x56ad058abb7434bf));
  return;
}


