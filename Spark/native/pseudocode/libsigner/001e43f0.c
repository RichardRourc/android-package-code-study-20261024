// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001e43f0; body: [[001e43f0, 001e4577]]

char * FUN_001e43f0(char *param_1,char param_2,char *param_3)

{
  char *pcVar1;
  char *extraout_x1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar1 = (char *)strlen(param_1);
  pcVar4 = extraout_x1 + -1;
  pcVar2 = extraout_x1;
  lVar3 = 0x2ea5ec9aa4903e5;
  pcVar5 = pcVar1 + 1;
LAB_001e44b8:
  while( true ) {
    while (lVar3 < -0x1600a62692a3eebb) {
      pcVar6 = param_3;
      if (lVar3 == -0x56bb61885886ae54) goto LAB_001e4538;
      if (lVar3 == -0x220211bfb882d8f5) {
        return pcVar1;
      }
      if ((lVar3 == -0x1d6a050721dd3e21) &&
         (param_3 = pcVar4, lVar3 = 0xdc8188db88ec11b, param_1[(long)pcVar4] != param_2)) {
        lVar3 = -0x56bb61885886ae54;
      }
    }
    if (0x41a203875b031c2 < lVar3) break;
    if (lVar3 == -0x1600a62692a3eebb) {
      lVar3 = 0x41a203875b031c3;
      if (pcVar5 != (char *)0x0) {
        lVar3 = -0x1d6a050721dd3e21;
      }
      pcVar4 = pcVar5 + -1;
      pcVar2 = pcVar5;
    }
    else {
      pcVar6 = pcVar5;
      if (lVar3 == 0x2ea5ec9aa4903e5) {
LAB_001e4538:
        lVar3 = -0x1600a62692a3eebb;
        pcVar5 = pcVar6;
      }
    }
  }
  if (lVar3 == 0x41a203875b031c3) {
    pcVar1 = (char *)0x0;
  }
  else {
    if (lVar3 != 0xdc8188db88ec11b) goto LAB_001e44b8;
    pcVar1 = param_1 + (long)param_3;
  }
  pcVar4 = pcVar2 + -1;
  lVar3 = -0x220211bfb882d8f5;
  goto LAB_001e44b8;
}


