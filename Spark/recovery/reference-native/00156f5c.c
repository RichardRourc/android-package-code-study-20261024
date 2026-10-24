// [[00156f5c, 00156fef]]

long FUN_00156f5c(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  
  lVar3 = 0xf656b670;
  iVar1 = -0x107a7582;
  if (param_1 != (ulong *)0x0) {
    iVar1 = -0x9a94990;
  }
  iVar2 = -0x6a85e80f;
  while( true ) {
    do {
      iVar5 = iVar2;
      iVar2 = iVar1;
    } while (iVar5 == -0x6a85e80f);
    if (iVar5 == -0x614eb80b) break;
    if (iVar5 == -0x107a7582) {
      lVar3 = 0;
    }
    else {
      uVar4 = *param_1 ^ *param_1 >> 0xc;
      uVar4 = uVar4 ^ uVar4 << 0x19;
      uVar4 = uVar4 ^ uVar4 >> 0x1b;
      lVar3 = uVar4 * 0x2545f4914f6cdd1d;
      *param_1 = uVar4;
    }
    iVar2 = -0x614eb80b;
  }
  return lVar3;
}


