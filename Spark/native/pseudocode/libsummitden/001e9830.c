// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e9830; body: [[001e9830, 001e9853]]

void FUN_001e9830(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  FUN_001e963c(param_1 + 0x60);
  FUN_001cee74(*(undefined8 *)(param_1 + 0x28));
  plVar2 = (long *)FUN_001cf00c();
  lVar3 = *plVar2;
  if (lVar3 == 0) {
    return;
  }
  if (*(ulong *)(lVar3 + 0x60) >> 8 == 0x434c4e47432b2b) {
    iVar1 = *(int *)(lVar3 + 0x38);
    if (-1 < iVar1) {
      *(int *)(lVar3 + 0x38) = iVar1 + -1;
      if (iVar1 + -1 != 0) {
        return;
      }
      *plVar2 = *(long *)(lVar3 + 0x30);
      lVar4 = lVar3;
      if (*(char *)(lVar3 + 0x60) == '\x01') {
        lVar4 = *(long *)(lVar3 + 8) + -0x80;
        FUN_001e9b14(lVar3);
      }
      lVar3 = FUN_001eab40(0xffffffffffffffff,lVar4 + 8);
      if (lVar3 != 1) {
        return;
      }
      if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
        (**(code **)(lVar4 + 0x18))(lVar4 + 0x80);
      }
      FUN_001e9b14(lVar4);
      return;
    }
    *(int *)(lVar3 + 0x38) = iVar1 + 1;
    if (iVar1 != -1) {
      return;
    }
    lVar3 = *(long *)(lVar3 + 0x30);
  }
  else {
    FUN_001eb100((ulong *)(lVar3 + 0x60));
    lVar3 = 0;
  }
  *plVar2 = lVar3;
  return;
}


