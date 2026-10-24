// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001062f4; body: [[001062f4, 0010639f]]

void Java_pl_droidsonroids_gif_GifInfoHandle_setOptions
               (undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,char param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  
  if (param_3 == 0) {
    return;
  }
  puVar7 = *(ulong **)(param_3 + 8);
  param_4 = param_4 & 0xffff;
  *(ulong *)(param_3 + 0x20) = param_4;
  *(bool *)(param_3 + 0x98) = param_5 == '\x01';
  uVar5 = *puVar7;
  uVar6 = puVar7[1];
  uVar1 = 0;
  if (param_4 != 0) {
    uVar1 = uVar6 / param_4;
  }
  uVar2 = 0;
  if (param_4 != 0) {
    uVar2 = uVar5 / param_4;
  }
  *puVar7 = uVar2;
  puVar7[1] = uVar1;
  if (uVar6 < param_4) {
    puVar7[1] = 1;
  }
  if (uVar5 < param_4) {
    *puVar7 = 1;
    uVar5 = puVar7[4];
  }
  else {
    uVar5 = puVar7[4];
  }
  if (uVar5 != 0) {
    uVar6 = 0;
    puVar7 = (ulong *)(puVar7[0xb] + 0x10);
    do {
      uVar6 = uVar6 + 1;
      uVar1 = 0;
      if (param_4 != 0) {
        uVar1 = *puVar7 / param_4;
      }
      uVar2 = 0;
      if (param_4 != 0) {
        uVar2 = puVar7[1] / param_4;
      }
      uVar3 = 0;
      if (param_4 != 0) {
        uVar3 = puVar7[-2] / param_4;
      }
      uVar4 = 0;
      if (param_4 != 0) {
        uVar4 = puVar7[-1] / param_4;
      }
      *puVar7 = uVar1;
      puVar7[1] = uVar2;
      puVar7[-2] = uVar3;
      puVar7[-1] = uVar4;
      puVar7 = puVar7 + 6;
    } while (uVar6 < uVar5);
  }
  return;
}


