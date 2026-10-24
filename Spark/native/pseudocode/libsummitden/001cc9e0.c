// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cc9e0; body: [[001cc9e0, 001ccaf7]]

ulong * FUN_001cc9e0(ulong *param_1,ulong param_2,byte *param_3,ulong param_4)

{
  byte *__src;
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  byte *pbVar5;
  
  bVar4 = (byte)*param_1;
  uVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar1 = param_1[1];
  }
  if (param_2 <= uVar1) {
    lVar2 = 0x16;
    if ((bVar4 & 1) != 0) {
      lVar2 = (*param_1 & 0xfffffffffffffffe) - 1;
    }
    if (lVar2 - uVar1 < param_4) {
      FUN_001cc79c(param_1,lVar2,(uVar1 + param_4) - lVar2,uVar1,param_2,0,param_4,param_3);
    }
    else if (param_4 != 0) {
      pbVar5 = (byte *)param_1[2];
      if ((*param_1 & 1) == 0) {
        pbVar5 = (byte *)((long)param_1 + 1);
      }
      if (uVar1 - param_2 != 0) {
        __src = pbVar5 + param_2;
        uVar3 = param_4;
        if (pbVar5 + uVar1 <= param_3 || param_3 < __src) {
          uVar3 = 0;
        }
        param_3 = param_3 + uVar3;
        memmove(__src + param_4,__src,uVar1 - param_2);
      }
      memmove(pbVar5 + param_2,param_3,param_4);
      uVar1 = uVar1 + param_4;
      if ((*param_1 & 1) == 0) {
        *(byte *)param_1 = (byte)((int)uVar1 << 1);
      }
      else {
        param_1[1] = uVar1;
      }
      pbVar5[uVar1] = 0;
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001cc784();
}


