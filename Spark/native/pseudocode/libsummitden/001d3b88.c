// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d3b88; body: [[001d3b88, 001d3d6f]]

undefined8 FUN_001d3b88(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar3 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if (pbVar3 == pbVar1) {
    return 1;
  }
  if (*pbVar3 == 0x68) {
    pbVar2 = pbVar3 + 1;
    *param_1 = (long)pbVar2;
    pbVar4 = pbVar2;
    if ((pbVar2 != pbVar1) && (*pbVar2 == 0x6e)) {
      pbVar4 = pbVar3 + 2;
      *param_1 = (long)pbVar4;
    }
    if (pbVar1 == pbVar4) {
      return 1;
    }
    if (*pbVar4 - 0x3a < 0xfffffff6) {
      return 1;
    }
    do {
      pbVar3 = pbVar4;
      if (*pbVar4 - 0x3a < 0xfffffff6) break;
      pbVar4 = pbVar4 + 1;
      *param_1 = (long)pbVar4;
      pbVar3 = pbVar1;
    } while (pbVar4 != pbVar1);
  }
  else {
    if (*pbVar3 != 0x76) {
      return 1;
    }
    pbVar2 = pbVar3 + 1;
    *param_1 = (long)pbVar2;
    pbVar5 = pbVar2;
    if ((pbVar2 != pbVar1) && (*pbVar2 == 0x6e)) {
      pbVar5 = pbVar3 + 2;
      *param_1 = (long)pbVar5;
    }
    if (pbVar1 == pbVar5) {
      return 1;
    }
    if (*pbVar5 - 0x3a < 0xfffffff6) {
      return 1;
    }
    do {
      pbVar3 = pbVar5;
      if (*pbVar5 - 0x3a < 0xfffffff6) break;
      pbVar5 = pbVar5 + 1;
      *param_1 = (long)pbVar5;
      pbVar3 = pbVar1;
    } while (pbVar5 != pbVar1);
    if (pbVar3 == pbVar2) {
      return 1;
    }
    if (pbVar5 == pbVar1) {
      return 1;
    }
    if (*pbVar5 != 0x5f) {
      return 1;
    }
    pbVar2 = pbVar5 + 1;
    *param_1 = (long)pbVar2;
    pbVar4 = pbVar2;
    if ((pbVar2 != pbVar1) && (*pbVar2 == 0x6e)) {
      *param_1 = (long)(pbVar5 + 2);
      pbVar4 = pbVar5 + 2;
    }
    if (pbVar1 == pbVar4) {
      return 1;
    }
    if (*pbVar4 - 0x3a < 0xfffffff6) {
      return 1;
    }
    do {
      pbVar3 = pbVar4;
      if (*pbVar4 - 0x3a < 0xfffffff6) break;
      pbVar4 = pbVar4 + 1;
      *param_1 = (long)pbVar4;
      pbVar3 = pbVar1;
    } while (pbVar4 != pbVar1);
  }
  if (((pbVar3 != pbVar2) && (pbVar4 != pbVar1)) && (*pbVar4 == 0x5f)) {
    *param_1 = (long)(pbVar4 + 1);
    return 0;
  }
  return 1;
}


