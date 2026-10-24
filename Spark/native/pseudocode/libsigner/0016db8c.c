// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0016db8c; body: [[0016db8c, 0016de6f]]

void FUN_0016db8c(int *param_1,long *param_2,long param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  int unaff_w24;
  
  puVar1 = &DAT_f615808441b1dafc;
  if (param_3 != 0) {
    puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  }
  puVar2 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar6 = puVar2, puVar2 = puVar6, 0x887e73b2c28c6a0 < (long)puVar6) {
            if ((long)puVar6 < 0x2ce2edddaf334d81) {
              puVar2 = puVar1;
              if ((puVar6 != (undefined1 *)0x887e73b2c28c6a1) &&
                 (puVar2 = puVar6, puVar6 == (undefined1 *)0x125dd2cc844aecb4)) {
                iVar3 = (**(code **)(*param_2 + 0x540))(param_2,param_3);
                pcVar5 = *(code **)(*param_2 + 0x78);
                *param_4 = (long)iVar3;
                lVar4 = (*pcVar5)(param_2);
                puVar2 = (undefined1 *)0x353e7cd16df664a2;
                if (lVar4 != 0) {
                  puVar2 = (undefined1 *)0x696b554ab6b2c8c5;
                }
              }
            }
            else {
              puVar2 = (undefined1 *)0xf63b36e7a9d9f670;
              if (puVar6 != (undefined1 *)0x2ce2edddaf334d81) {
                if (puVar6 == (undefined1 *)0x353e7cd16df664a2) {
                  puVar2 = (undefined1 *)0xd222672a639a1d2e;
                  if (*param_1 != 0) {
                    puVar2 = (undefined1 *)0x2ce2edddaf334d81;
                  }
                }
                else {
                  puVar2 = puVar6;
                  if (puVar6 == (undefined1 *)0x696b554ab6b2c8c5) {
                    (**(code **)(*param_2 + 0x80))(param_2);
                    (**(code **)(*param_2 + 0x88))(param_2);
                    unaff_w24 = 0x1b;
                    puVar2 = (undefined1 *)0xaa46adf0a78af8c7;
                  }
                }
              }
            }
          }
          if (-0xab3a208b03543c0 < (long)puVar6) break;
          if (puVar6 == (undefined1 *)0xaa46adf0a78af8c7) {
            *param_1 = unaff_w24;
            puVar2 = (undefined1 *)0xf63b36e7a9d9f670;
          }
          else if (puVar6 == (undefined1 *)0xd222672a639a1d2e) {
            puVar2 = (undefined1 *)0xf54c5df74fcabc41;
          }
        }
        if (puVar6 != &DAT_f615808441b1dafc) break;
        unaff_w24 = 3;
        puVar2 = (undefined1 *)0xaa46adf0a78af8c7;
      }
      if (puVar6 != (undefined1 *)0xf63b36e7a9d9f670) break;
      *param_4 = 0;
      puVar2 = (undefined1 *)0xf54c5df74fcabc41;
    }
  } while (puVar6 != (undefined1 *)0xf54c5df74fcabc41);
  return;
}


