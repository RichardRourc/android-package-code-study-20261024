// [[00154d84, 00154e37]]

ulong FUN_00154d84(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = 0;
  uVar2 = 0xcbf29ce484222325;
  do {
    iVar4 = -0x5c59544c;
    while( true ) {
      iVar1 = -0x3426bef2;
      if (param_2 <= uVar3) {
        iVar1 = -0x9fe7977;
      }
      if (-0x3426bef3 < iVar4) goto LAB_00154dec;
      while( true ) {
        do {
          if (iVar4 != -0x5c59544c) {
            return uVar2;
          }
          iVar4 = iVar1;
        } while (iVar1 < -0x3426bef2);
LAB_00154dec:
        if (iVar4 != -0x9fe7977) break;
        iVar4 = -0x7311f41c;
      }
      if (iVar4 != -0x3426bef2) break;
      uVar2 = (uVar2 ^ *(byte *)(param_1 + uVar3)) * 0x100000001b3;
      iVar4 = 0x2dad4592;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}


