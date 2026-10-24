// [[00156ff0, 00157077]]

uint FUN_00156ff0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = 0x7bdf281;
  if ((param_2 & 7) != 0) {
    iVar1 = -0x1c82b94a;
  }
  uVar3 = param_2;
  iVar2 = -0x115e7e1a;
  while( true ) {
    while( true ) {
      do {
        iVar4 = iVar2;
        iVar2 = iVar1;
      } while (iVar4 == -0x115e7e1a);
      if (iVar4 != -0x1c82b94a) break;
      uVar3 = (param_1 & 0xff) >> (ulong)(param_2 & 7) | param_1 << (ulong)(-param_2 & 7);
      iVar2 = 0x3f0522fe;
    }
    if (iVar4 != 0x7bdf281) break;
    uVar3 = param_1;
    iVar2 = 0x3f0522fe;
  }
  return uVar3;
}


