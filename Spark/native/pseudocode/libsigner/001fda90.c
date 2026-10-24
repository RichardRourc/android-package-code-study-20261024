// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001fda90; body: [[001fda90, 001fde2f]]

long * FUN_001fda90(undefined4 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
  puVar1 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar3 = puVar1, puVar1 = puVar3, -0x938e289074b7148 < (long)puVar3) {
            if ((long)puVar3 < 0x2ce2edddaf334d81) {
              puVar1 = (undefined1 *)0x353e7cd16df664a2;
              if (((puVar3 != (undefined1 *)0xf6c71d76f8b48eb9) &&
                  (puVar1 = &DAT_f615808441b1dafc, puVar3 != (undefined1 *)0x887e73b2c28c6a1)) &&
                 (puVar1 = puVar3, puVar3 == (undefined1 *)0x125dd2cc844aecb4)) {
                puVar1 = &DAT_f615808441b1dafc;
              }
            }
            else if (puVar3 == (undefined1 *)0x2ce2edddaf334d81) {
              *param_1 = 2;
              puVar1 = (undefined1 *)0xf54c5df74fcabc41;
              unaff_x25 = (long *)0x0;
            }
            else if (puVar3 == (undefined1 *)0x353e7cd16df664a2) {
              DAT_0021fb04 = 0;
              unaff_x23 = FUN_001f3978(param_2,&DAT_0021eef4);
              puVar1 = (undefined1 *)0x2ce2edddaf334d81;
              if (unaff_x23 != 0) {
                puVar1 = (undefined1 *)0xd222672a639a1d2e;
              }
            }
            else if (puVar3 == (undefined1 *)0x696b554ab6b2c8c5) {
              DAT_0021eef4 = DAT_0021eef4 ^ 0x6a;
              DAT_0021eef6 = DAT_0021eef6 ^ 0x6a;
              DAT_0021eef5 = DAT_0021eef5 ^ 0x6a;
              DAT_0021fb05 = '\x01';
              puVar1 = (undefined1 *)0x353e7cd16df664a2;
            }
          }
          if (-0xab3a208b03543c0 < (long)puVar3) break;
          if (puVar3 == (undefined1 *)0xaa46adf0a78af8c7) {
            *param_1 = 1;
            puVar1 = (undefined1 *)0xf54c5df74fcabc41;
            unaff_x25 = (long *)0x0;
          }
          else if (puVar3 == (undefined1 *)0xc23f84056fd30bd6) {
            puVar1 = (undefined1 *)0xf6c71d76f8b48eb9;
            if (DAT_0021fb05 == '\0') {
              puVar1 = (undefined1 *)0x696b554ab6b2c8c5;
            }
          }
          else if (puVar3 == (undefined1 *)0xd222672a639a1d2e) {
            unaff_x24 = calloc(1,0x48);
            puVar1 = (undefined1 *)0xaa46adf0a78af8c7;
            if (unaff_x24 != (long *)0x0) {
              puVar1 = (undefined1 *)0xf63b36e7a9d9f670;
            }
          }
        }
        if (puVar3 != &DAT_f615808441b1dafc) break;
        iVar2 = FUN_00212730(0,1,&DAT_0021fb04);
        puVar1 = (undefined1 *)0xc23f84056fd30bd6;
        if (iVar2 != 0) {
          puVar1 = (undefined1 *)0x125dd2cc844aecb4;
        }
      }
      if (puVar3 != (undefined1 *)0xf63b36e7a9d9f670) break;
      *unaff_x24 = unaff_x23;
      FUN_001fb538(unaff_x24 + 3);
      FUN_001fd37c(unaff_x24 + 5);
      FUN_001fd37c(unaff_x24 + 7);
      puVar1 = (undefined1 *)0xf54c5df74fcabc41;
      unaff_x25 = unaff_x24;
    }
  } while (puVar3 != (undefined1 *)0xf54c5df74fcabc41);
  return unaff_x25;
}


