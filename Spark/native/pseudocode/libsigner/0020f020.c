// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0020f020; body: [[0020f020, 0020f317]]

uint * FUN_0020f020(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  uint *__ptr;
  void *pvVar5;
  uint *extraout_x1;
  uint *puVar6;
  undefined1 *puVar7;
  void *unaff_x22;
  
  __ptr = calloc(1,0x20);
  puVar2 = &DAT_f615808441b1dafc;
  if (__ptr != (uint *)0x0) {
    puVar2 = (undefined1 *)0x125dd2cc844aecb4;
  }
  uVar1 = (-param_2 & 0x7fU) + param_2;
  puVar3 = extraout_x1;
  puVar4 = (undefined1 *)0x887e73b2c28c6a1;
LAB_0020f10c:
  do {
    while (puVar7 = puVar4, puVar6 = puVar3, puVar3 = puVar6, 0x887e73b2c28c6a0 < (long)puVar7) {
      if ((long)puVar7 < 0x2ce2edddaf334d81) {
        puVar4 = puVar2;
        if ((puVar7 != (undefined1 *)0x887e73b2c28c6a1) &&
           (puVar4 = puVar7, puVar7 == (undefined1 *)0x125dd2cc844aecb4)) {
          *__ptr = uVar1;
          unaff_x22 = calloc((ulong)uVar1,4);
          *(void **)(__ptr + 2) = unaff_x22;
          puVar4 = (undefined1 *)0x696b554ab6b2c8c5;
          if (unaff_x22 != (void *)0x0) {
            puVar4 = (undefined1 *)0x353e7cd16df664a2;
          }
        }
      }
      else {
        puVar3 = __ptr;
        puVar4 = (undefined1 *)0xf54c5df74fcabc41;
        if (puVar7 != (undefined1 *)0x2ce2edddaf334d81) {
          if (puVar7 == (undefined1 *)0x353e7cd16df664a2) {
            __ptr[5] = 1;
            pvVar5 = calloc(1,4);
            *(void **)(__ptr + 6) = pvVar5;
            puVar3 = puVar6;
            puVar4 = (undefined1 *)0xd222672a639a1d2e;
            if (pvVar5 != (void *)0x0) {
              puVar4 = (undefined1 *)0x2ce2edddaf334d81;
            }
          }
          else {
            puVar3 = puVar6;
            puVar4 = puVar7;
            if (puVar7 == (undefined1 *)0x696b554ab6b2c8c5) {
LAB_0020f284:
              puVar3 = puVar6;
              puVar4 = (undefined1 *)0xaa46adf0a78af8c7;
            }
          }
        }
      }
    }
    if ((long)puVar7 < -0xab3a208b03543bf) {
      if (puVar7 == (undefined1 *)0xaa46adf0a78af8c7) {
        free(__ptr);
        puVar4 = (undefined1 *)0xf63b36e7a9d9f670;
      }
      else {
        puVar4 = puVar7;
        if (puVar7 == (undefined1 *)0xd222672a639a1d2e) {
          free(unaff_x22);
          goto LAB_0020f284;
        }
      }
      goto LAB_0020f10c;
    }
    puVar4 = (undefined1 *)0xf63b36e7a9d9f670;
    if (puVar7 != &DAT_f615808441b1dafc) {
      if (puVar7 == (undefined1 *)0xf63b36e7a9d9f670) {
        *param_1 = 2;
        puVar3 = (uint *)0x0;
        puVar4 = (undefined1 *)0xf54c5df74fcabc41;
      }
      else {
        puVar4 = puVar7;
        if (puVar7 == (undefined1 *)0xf54c5df74fcabc41) {
          return puVar6;
        }
      }
    }
  } while( true );
}


