// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00200de0; body: [[00200de0, 00200efb]]

byte FUN_00200de0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  byte in_w8;
  
  lVar1 = -0x316a2fad8e5725cc;
  if (param_2 == 0 || param_1 == 0) {
    lVar1 = 0x32f4713bcaf93571;
  }
  lVar2 = 0x31b9d74c89a90fe3;
  do {
    while( true ) {
      while (lVar2 < 0x32f4713bcaf93571) {
        if (lVar2 == -0x316a2fad8e5725cc) {
          lVar2 = FUN_001e238c(param_1,param_2);
          in_w8 = lVar2 != 0;
          lVar2 = 0x65536dc2a8308acd;
        }
        else if (lVar2 == 0x31b9d74c89a90fe3) {
          lVar2 = lVar1;
        }
      }
      if (lVar2 != 0x32f4713bcaf93571) break;
      in_w8 = 0;
      lVar2 = 0x65536dc2a8308acd;
    }
  } while (lVar2 != 0x65536dc2a8308acd);
  return in_w8 & 1;
}


