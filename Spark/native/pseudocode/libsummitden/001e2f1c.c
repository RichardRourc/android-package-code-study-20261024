// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001e2f1c; body: [[001e2f1c, 001e2ff3]]

undefined1  [16] FUN_001e2f1c(long param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((int)uVar1 < 3) {
    if (1 < uVar1 - 1) {
      auVar4._8_8_ = 9;
      auVar4._0_8_ = "allocator";
      return auVar4;
    }
    pcVar2 = (char *)&DAT_0011e9cf;
    if (uVar1 < 2) {
      auVar5._8_8_ = 0xc;
      auVar5._0_8_ = &DAT_0011e9cf;
      return auVar5;
    }
    uVar3 = 6;
  }
  else {
    if (uVar1 == 3) {
      pcVar2 = "basic_istream";
    }
    else {
      if (uVar1 == 5) {
        pcVar2 = "basic_iostream";
        uVar3 = 8;
        goto LAB_001e2fa0;
      }
      pcVar2 = "basic_ostream";
    }
    uVar3 = 7;
  }
LAB_001e2fa0:
  if (*(int *)pcVar2 == 0x69736162 && (short)*(int *)((long)pcVar2 + 4) == 0x5f63) {
    auVar6._8_8_ = uVar3;
    auVar6._0_8_ = (char *)((long)pcVar2 + 6);
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001cf218("%s:%d: %s","75h2tvbqqiyelu6ergavx69288j4fh21moacaekj9a5g1ychamkwv5wxa",0x6be,
               &DAT_0011dd07);
}


