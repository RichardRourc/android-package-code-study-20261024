// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00205de0; body: [[00205de0, 002063b3]]

void FUN_00205de0(uint param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 unaff_w26;
  
  puVar1 = (undefined1 *)0xf63b36e7a9d9f670;
  if (param_3 != 0) {
    puVar1 = (undefined1 *)0x696b554ab6b2c8c5;
  }
  puVar2 = (undefined1 *)0x125dd2cc844aecb4;
  if (3 < param_1) {
    puVar2 = &DAT_f615808441b1dafc;
  }
  puVar3 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar5 = puVar3, puVar3 = puVar5, 0x887e73b2c28c6a0 < (long)puVar5) {
            if ((long)puVar5 < 0x312910f1547c7c77) {
              if ((long)puVar5 < 0x1cba5f82f77e481f) {
                puVar3 = puVar2;
                if ((puVar5 != (undefined1 *)0x887e73b2c28c6a1) &&
                   (puVar3 = puVar5, puVar5 == (undefined1 *)0x125dd2cc844aecb4)) {
                  unaff_w26 = *(undefined4 *)(&DAT_00103030 + (long)(int)param_1 * 4);
                  puVar3 = puVar1;
                }
              }
              else if (puVar5 == (undefined1 *)0x1cba5f82f77e481f) {
                puVar3 = (undefined1 *)0x3b36a7a007b21166;
                if (DAT_0021fb5d == '\0') {
                  puVar3 = (undefined1 *)0xd222672a639a1d2e;
                }
              }
              else if (puVar5 == (undefined1 *)0x2ce2edddaf334d81) {
                puVar3 = (undefined1 *)0x353e7cd16df664a2;
              }
            }
            else if ((long)puVar5 < 0x3b36a7a007b21166) {
              if (puVar5 == (undefined1 *)0x312910f1547c7c77) {
                puVar3 = (undefined1 *)0xc89737e2f8768a05;
                if (DAT_0021fb5e == '\0') {
                  puVar3 = (undefined1 *)0xf6c71d76f8b48eb9;
                }
              }
              else if (puVar5 == (undefined1 *)0x353e7cd16df664a2) {
                iVar4 = FUN_00212730(0,1,&DAT_0021fb58);
                puVar3 = (undefined1 *)0x1cba5f82f77e481f;
                if (iVar4 != 0) {
                  puVar3 = (undefined1 *)0x2ce2edddaf334d81;
                }
              }
            }
            else {
              puVar3 = (undefined1 *)0xaa46adf0a78af8c7;
              if (((puVar5 != (undefined1 *)0x3b36a7a007b21166) &&
                  (puVar3 = (undefined1 *)0x353e7cd16df664a2,
                  puVar5 != (undefined1 *)0x696b554ab6b2c8c5)) &&
                 (puVar3 = puVar5, puVar5 == (undefined1 *)0x6b5051bf1aed633d)) {
                DAT_0021fb5c = 0;
                __android_log_print(unaff_w26,param_2,&DAT_0021f010,param_4);
                puVar3 = (undefined1 *)0xbf711ec4fafe862e;
              }
            }
          }
          if ((long)puVar5 < -0xab3a208b03543bf) break;
          if ((long)puVar5 < -0x9c4c91856260990) {
            if (puVar5 == (undefined1 *)0xf54c5df74fcabc41) {
              iVar4 = FUN_00212730(0,1,&DAT_0021fb5c);
              puVar3 = (undefined1 *)0x312910f1547c7c77;
              if (iVar4 != 0) {
                puVar3 = (undefined1 *)0xc23f84056fd30bd6;
              }
            }
            else if (puVar5 == &DAT_f615808441b1dafc) {
              puVar3 = (undefined1 *)0xbf711ec4fafe862e;
            }
          }
          else {
            puVar3 = (undefined1 *)0xf54c5df74fcabc41;
            if ((puVar5 != (undefined1 *)0xf63b36e7a9d9f670) &&
               (puVar3 = puVar5, puVar5 == (undefined1 *)0xf6c71d76f8b48eb9)) {
              DAT_0021f010 = DAT_0021f010 ^ 0xfe;
              DAT_0021f012 = DAT_0021f012 ^ 0xfe;
              DAT_0021f011 = DAT_0021f011 ^ 0xfe;
              DAT_0021fb5e = '\x01';
              puVar3 = (undefined1 *)0x6b5051bf1aed633d;
            }
          }
        }
        if ((long)puVar5 < -0x3768c81d078975fb) break;
        puVar3 = (undefined1 *)0x6b5051bf1aed633d;
        if ((puVar5 != (undefined1 *)0xc89737e2f8768a05) &&
           (puVar3 = puVar5, puVar5 == (undefined1 *)0xd222672a639a1d2e)) {
          DAT_0021f008 = DAT_0021f008 ^ 0x2e;
          DAT_0021f009 = DAT_0021f009 ^ 0x2e;
          DAT_0021f00a = DAT_0021f00a ^ 0x2e;
          DAT_0021f00c = DAT_0021f00c ^ 0x2e;
          DAT_0021f00d = DAT_0021f00d ^ 0x2e;
          DAT_0021f00e = DAT_0021f00e ^ 0x2e;
          DAT_0021f00b = DAT_0021f00b ^ 0x2e;
          DAT_0021fb5d = '\x01';
          puVar3 = (undefined1 *)0xaa46adf0a78af8c7;
        }
      }
      if (puVar5 != (undefined1 *)0xaa46adf0a78af8c7) break;
      DAT_0021fb58 = 0;
      __android_log_print(unaff_w26,param_2,&DAT_0021f008,param_3,param_4);
      puVar3 = (undefined1 *)0xbf711ec4fafe862e;
    }
    puVar3 = (undefined1 *)0xf54c5df74fcabc41;
  } while ((puVar5 == (undefined1 *)0xc23f84056fd30bd6) ||
          (puVar3 = puVar5, puVar5 != (undefined1 *)0xbf711ec4fafe862e));
  return;
}


