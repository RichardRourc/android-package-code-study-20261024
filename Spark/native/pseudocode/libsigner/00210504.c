// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00210504; body: [[00210504, 002105f3]]

int FUN_00210504(uint *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = *(int *)(*(long *)(param_1 + 6) + (ulong)(param_1[5] - 1) * 4);
  uVar1 = iVar4 + param_2;
  lVar2 = -0x2ef756f1c7496e5f;
  if (*param_1 <= uVar1) {
    lVar2 = 0x5eda44100212fa2c;
  }
  lVar3 = -0x405b680ffecd4131;
  do {
    while (lVar5 = lVar3, -0x2ef756f1c7496e60 < lVar5) {
      if (lVar5 == 0x5eda44100212fa2c) {
        iVar4 = 0;
        lVar3 = -0x34ce59f19df9112f;
      }
      else {
        lVar3 = lVar5;
        if (lVar5 == -0x2ef756f1c7496e5f) {
          iVar4 = *(int *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 4);
          lVar3 = -0x34ce59f19df9112f;
        }
      }
    }
    lVar3 = lVar2;
  } while ((lVar5 == -0x405b680ffecd4131) || (lVar3 = lVar5, lVar5 != -0x34ce59f19df9112f));
  return iVar4;
}


