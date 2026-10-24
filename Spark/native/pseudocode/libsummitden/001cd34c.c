// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cd34c; body: [[001cd34c, 001cd3c3]]

byte * FUN_001cd34c(byte *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  
  bVar2 = *param_1;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (param_2 <= uVar1) {
    if (param_3 == -1) {
      if ((bVar2 & 1) == 0) {
        pbVar3 = param_1 + 1;
        *param_1 = (byte)((int)param_2 << 1);
      }
      else {
        pbVar3 = *(byte **)(param_1 + 0x10);
        *(ulong *)(param_1 + 8) = param_2;
      }
      pbVar3[param_2] = 0;
    }
    else {
      FUN_001cd3c4();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001cc784();
}


