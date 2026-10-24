// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 0010689c; body: [[0010689c, 00106923]]

int Java_pl_droidsonroids_gif_GifInfoHandle_getCurrentPosition
              (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  
  if (param_3 == 0) {
    return 0;
  }
  if (*(long *)(*(long *)(param_3 + 8) + 0x20) != 1) {
    lVar1 = *(long *)(param_3 + 0x38);
    if (lVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      piVar3 = (int *)(*(long *)(param_3 + 0x40) + 8);
      do {
        lVar1 = lVar1 + -1;
        iVar4 = *piVar3 + iVar4;
        piVar3 = piVar3 + 6;
      } while (lVar1 != 0);
    }
    uVar2 = *(ulong *)(param_3 + 0x28);
    if (uVar2 == 0xffffffffffffffff) {
      lVar5 = *(long *)(param_3 + 0x30);
      lVar1 = FUN_00107bb8();
      uVar2 = lVar5 - lVar1;
      uVar2 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
    }
    return iVar4 - (int)uVar2;
  }
  return 0;
}


