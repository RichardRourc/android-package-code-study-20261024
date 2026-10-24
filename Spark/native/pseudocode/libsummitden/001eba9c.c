// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001eba9c; body: [[001eba9c, 001ebbb7]]

ulong FUN_001eba9c(long *param_1,uint param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0x4d) & 1) != 0) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x26a) == '\x01') {
    lVar3 = param_1[0x21];
    lVar4 = 0;
    plVar5 = (long *)(lVar3 + 0x138);
    do {
      lVar6 = *plVar5;
      if ((int)lVar4 == 0x1e) {
        param_1[0x20] = lVar6;
      }
      else if ((int)lVar4 == 0x1d) {
        param_1[0x1f] = lVar6;
      }
      else {
        param_1[lVar4 + 2] = lVar6;
      }
      lVar4 = lVar4 + 1;
      plVar5 = plVar5 + 1;
    } while (lVar4 != 0x1f);
    param_1[0x21] = *(long *)(lVar3 + 0x230);
    lVar4 = *(long *)(lVar3 + 0x238);
    *(undefined1 *)((long)param_1 + 0x269) = 1;
    param_1[0x22] = lVar4;
  }
  else {
    lVar4 = param_1[1];
    uVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    uVar2 = FUN_001ebea0(lVar4,uVar1,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    if ((int)uVar2 != 1) {
      return uVar2;
    }
  }
  (**(code **)(*param_1 + 0x68))(param_1,1);
  return (ulong)(*(byte *)(param_1 + 0x4d) ^ 1);
}


