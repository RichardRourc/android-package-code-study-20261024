// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e97d4; body: [[001e97d4, 001e982f]]

void FUN_001e97d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = FUN_001cefe8();
  *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  lVar2 = FUN_001e96fc(param_1,param_2,param_3);
  *(undefined8 *)(lVar2 + 8) = 1;
  FUN_001eab70(lVar2 + 0x60);
  lVar2 = FUN_001e9830(lVar2);
  FUN_001e963c(lVar2 + 0x60);
  FUN_001cee74(*(undefined8 *)(lVar2 + 0x28));
  plVar3 = (long *)FUN_001cf00c();
  lVar2 = *plVar3;
  if (lVar2 == 0) {
    return;
  }
  if (*(ulong *)(lVar2 + 0x60) >> 8 == 0x434c4e47432b2b) {
    iVar1 = *(int *)(lVar2 + 0x38);
    if (-1 < iVar1) {
      *(int *)(lVar2 + 0x38) = iVar1 + -1;
      if (iVar1 + -1 != 0) {
        return;
      }
      *plVar3 = *(long *)(lVar2 + 0x30);
      lVar4 = lVar2;
      if (*(char *)(lVar2 + 0x60) == '\x01') {
        lVar4 = *(long *)(lVar2 + 8) + -0x80;
        FUN_001e9b14(lVar2);
      }
      lVar2 = FUN_001eab40(0xffffffffffffffff,lVar4 + 8);
      if (lVar2 != 1) {
        return;
      }
      if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
        (**(code **)(lVar4 + 0x18))(lVar4 + 0x80);
      }
      FUN_001e9b14(lVar4);
      return;
    }
    *(int *)(lVar2 + 0x38) = iVar1 + 1;
    if (iVar1 != -1) {
      return;
    }
    lVar2 = *(long *)(lVar2 + 0x30);
  }
  else {
    FUN_001eb100((ulong *)(lVar2 + 0x60));
    lVar2 = 0;
  }
  *plVar3 = lVar2;
  return;
}


