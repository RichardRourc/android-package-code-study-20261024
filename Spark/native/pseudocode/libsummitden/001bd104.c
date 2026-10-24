// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bd104; body: [[001bd104, 001bd247]]

undefined * FUN_001bd104(void)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  
  iVar5 = 0x1efecf93;
  iVar1 = 0x4b5db6bc;
  if (DAT_00204c30 == '\0') {
    iVar1 = 0x275c8830;
  }
  do {
    while( true ) {
      while (iVar5 < 0x275c8830) {
        bVar3 = iVar5 == -0x12b61551;
        iVar5 = iVar1;
        if (bVar3) {
          DAT_00204c30 = '\x01';
          iVar5 = 0x45f3fb82;
        }
      }
      if (iVar5 != 0x275c8830) break;
      (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fce)])
                (&DAT_00202fbd,0xe,&DAT_00205c44,&DAT_00202fbd);
      uVar4 = (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fcf)])
                        (&DAT_00202fbd,&DAT_00204c34,0x1000);
      iVar5 = -0x12b61551;
      if ((uVar4 & 1) == 0) {
        iVar5 = 0x45f3fb82;
      }
    }
    bVar3 = iVar5 == 0x45f3fb82;
    iVar5 = 0x4b5db6bc;
  } while (bVar3);
  puVar2 = &DAT_00204c34;
  if (DAT_00204c30 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}


