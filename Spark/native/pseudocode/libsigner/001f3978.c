// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001f3978; body: [[001f3978, 001f3a87]]

FILE * FUN_001f3978(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  FILE *pFVar4;
  long lVar5;
  
  uVar3 = access(param_1,4);
  pFVar4 = (FILE *)(ulong)uVar3;
  lVar1 = 0x3b36a7a007b21166;
  if (uVar3 != 0) {
    lVar1 = 0x1cba5f82f77e481f;
  }
  lVar2 = -0x408ee13b050179d2;
  while( true ) {
    while (lVar5 = lVar2, lVar5 < 0x312910f1547c7c77) {
      lVar2 = lVar1;
      if ((lVar5 != -0x408ee13b050179d2) && (lVar2 = lVar5, lVar5 == 0x1cba5f82f77e481f)) {
        pFVar4 = (FILE *)0x0;
        lVar2 = 0x312910f1547c7c77;
      }
    }
    if (lVar5 == 0x312910f1547c7c77) break;
    lVar2 = lVar5;
    if (lVar5 == 0x3b36a7a007b21166) {
      pFVar4 = fopen(param_1,param_2);
      lVar2 = 0x312910f1547c7c77;
    }
  }
  return pFVar4;
}


