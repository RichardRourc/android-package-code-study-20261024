// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cc8e4; body: [[001cc8e4, 001cc8fb]]

void FUN_001cc8e4(void)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  auVar5 = FUN_001cdb08(&DAT_0011e9cf);
  pbVar2 = auVar5._8_8_;
  puVar1 = auVar5._0_8_;
  if ((*pbVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)(pbVar2 + 8);
    uVar3 = *(undefined8 *)pbVar2;
    puVar1[2] = *(undefined8 *)(pbVar2 + 0x10);
    puVar1[1] = uVar4;
    *puVar1 = uVar3;
    return;
  }
  FUN_0017289c(puVar1,*(undefined8 *)(pbVar2 + 0x10),*(undefined8 *)(pbVar2 + 8));
  return;
}


