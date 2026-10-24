// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0018a62c; body: [[0018a62c, 0018a75f]]

/* WARNING: Removing unreachable block (ram,0x0018a73c) */

uint FUN_0018a62c(void)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  code *pcVar4;
  
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_00200124,0x1c,&DAT_00204788,&DAT_00200124);
  pcVar4 = (code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a2)];
  do {
    uVar2 = (*pcVar4)(&DAT_00200124);
    uVar1 = 0;
    iVar3 = 0xd89bdfe;
    if ((uVar2 & 1) == 0) {
      iVar3 = -0x30258aaf;
    }
  } while (iVar3 == -0x38971a3);
  while (iVar3 == 0xd89bdfe) {
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
              (&DAT_00200140,0x1b,&DAT_0020478c,&DAT_00200140);
    uVar1 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a2)])(&DAT_00200140);
    iVar3 = -0x30258aaf;
  }
  return uVar1 & 1;
}


