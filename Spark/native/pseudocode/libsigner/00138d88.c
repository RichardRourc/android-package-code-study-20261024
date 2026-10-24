// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00138d88; body: [[00138d88, 00138f03]]

uint FUN_00138d88(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = -0x5d4f5f4ae909129f;
  if (((uint)((ulong)param_2 >> 0x18) & 0xff) != 1 || ((uint)((ulong)param_1 >> 0x18) & 0xff) == 1)
  {
    lVar1 = 0x7a95b11d6cd70979;
  }
  lVar2 = -0x10e82560a42dc9a5;
  if ((((uint)param_2 ^ (uint)param_1) & 0xffffff) != 0) {
    lVar2 = 0x5f469bbce37b4e46;
  }
  lVar3 = -0x4022e60db29d08bd;
  do {
    while( true ) {
      while (lVar4 = lVar3, lVar4 < -0x10e82560a42dc9a5) {
        if (lVar4 == -0x5d4f5f4ae909129f) {
          param_2 = 1;
          lVar3 = 0x2cfdc6d466d500b;
        }
        else {
          lVar3 = lVar2;
          if ((lVar4 != -0x4022e60db29d08bd) && (lVar3 = lVar4, lVar4 == -0x2111cc06df94c18b)) {
            param_2 = 0;
            lVar3 = 0x2cfdc6d466d500b;
          }
        }
      }
      if (lVar4 < 0x5f469bbce37b4e46) break;
      if (lVar4 == 0x7a95b11d6cd70979) {
        lVar3 = -0x2111cc06df94c18b;
      }
      else {
        lVar3 = lVar4;
        if (lVar4 == 0x5f469bbce37b4e46) {
          lVar3 = -0x2111cc06df94c18b;
        }
      }
    }
    lVar3 = lVar1;
  } while ((lVar4 == -0x10e82560a42dc9a5) || (lVar3 = lVar4, lVar4 != 0x2cfdc6d466d500b));
  return (uint)param_2 & 1;
}


