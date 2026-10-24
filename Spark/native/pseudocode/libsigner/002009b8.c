// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 002009b8; body: [[002009b8, 00200ad3]]

byte FUN_002009b8(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  byte in_w8;
  undefined1 *puVar4;
  
  puVar1 = (undefined1 *)0xc879bc31bae5bb14;
  if (param_2 == 0 || param_1 == 0) {
    puVar1 = (undefined1 *)0x36f07785a64d7584;
  }
  puVar2 = (undefined1 *)0x960858df0b0de441;
  do {
    while (puVar4 = puVar2, -0x378643ce451a44ed < (long)puVar4) {
      if (puVar4 == (undefined1 *)0x36f07785a64d7584) {
        in_w8 = 0;
        puVar2 = &DAT_c45038db124ae016;
      }
      else {
        puVar2 = puVar4;
        if (puVar4 == (undefined1 *)0xc879bc31bae5bb14) {
          lVar3 = FUN_001ef4b4(param_1,param_2);
          in_w8 = lVar3 != 0;
          puVar2 = &DAT_c45038db124ae016;
        }
      }
    }
    puVar2 = puVar1;
  } while ((puVar4 == (undefined1 *)0x960858df0b0de441) ||
          (puVar2 = puVar4, puVar4 != &DAT_c45038db124ae016));
  return in_w8 & 1;
}


