// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00212730; body: [[00212730, 00212763]]

char FUN_00212730(char param_1,char param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  
  if (DAT_0021fb78 != '\0') {
    cVar3 = *param_3;
    if (cVar3 == param_1) {
      *param_3 = param_2;
    }
    return cVar3;
  }
  do {
    cVar3 = *param_3;
    if (*param_3 != param_1) {
      return cVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return cVar3;
}


