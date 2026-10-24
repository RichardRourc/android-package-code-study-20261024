// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001067f4; body: [[001067f4, 00106887]]

int Java_pl_droidsonroids_gif_GifInfoHandle_getDuration
              (undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = *(ulong *)(*(long *)(param_3 + 8) + 0x20);
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      iVar5 = 0;
      uVar2 = 0;
    }
    else {
      uVar2 = uVar1 & 0xfffffffffffffffe;
      iVar4 = 0;
      iVar5 = 0;
      piVar3 = (int *)(*(long *)(param_3 + 0x40) + 0x20);
      uVar6 = uVar2;
      do {
        uVar6 = uVar6 - 2;
        iVar4 = iVar4 + piVar3[-6];
        iVar5 = iVar5 + *piVar3;
        piVar3 = piVar3 + 0xc;
      } while (uVar6 != 0);
      iVar5 = iVar5 + iVar4;
      if (uVar1 == uVar2) {
        return iVar5;
      }
    }
    piVar3 = (int *)(*(long *)(param_3 + 0x40) + uVar2 * 0x18 + 8);
    do {
      uVar2 = uVar2 + 1;
      iVar5 = iVar5 + *piVar3;
      piVar3 = piVar3 + 6;
    } while (uVar2 < uVar1);
    return iVar5;
  }
  return 0;
}


