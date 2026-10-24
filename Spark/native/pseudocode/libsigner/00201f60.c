// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00201f60; body: [[00201f60, 0020204f]]

byte FUN_00201f60(undefined8 param_1,uint param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  byte in_w15;
  long lVar6;
  
  uVar4 = (uint)((ulong)param_3 >> 0x20);
  uVar5 = (uint)((ulong)param_1 >> 0x20);
  bVar2 = param_4 <= param_2;
  if (uVar5 != uVar4) {
    bVar2 = uVar4 < uVar5;
  }
  lVar1 = -0x405b680ffecd4131;
  if ((int)param_1 != (int)param_3) {
    lVar1 = -0x12e0f8e15901e122;
  }
  lVar3 = 0x3ace195dd3930386;
  do {
    while (lVar6 = lVar3, lVar6 < 0x3ace195dd3930386) {
      if (lVar6 == -0x405b680ffecd4131) {
        lVar3 = 0x5eda44100212fa2c;
        in_w15 = bVar2;
      }
      else {
        lVar3 = lVar6;
        if (lVar6 == -0x12e0f8e15901e122) {
          lVar3 = 0x5eda44100212fa2c;
          in_w15 = 0;
        }
      }
    }
    lVar3 = lVar1;
  } while ((lVar6 == 0x3ace195dd3930386) || (lVar3 = lVar6, lVar6 != 0x5eda44100212fa2c));
  return in_w15 & 1;
}


