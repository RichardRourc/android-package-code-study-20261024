// [[00149b68, 00149d43]]

uint FUN_00149b68(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  char *pcVar6;
  int iVar7;
  ulong extraout_x9;
  
  iVar2 = 0x6923ac54;
  uVar5 = FUN_00135328();
  iVar1 = -0x63144cd8;
  if (uVar5 < 8) {
    iVar1 = iVar2;
  }
  uVar5 = extraout_x9;
  iVar7 = 0x2e96ce0f;
  do {
    while( true ) {
      while (iVar7 < -0x388c7b07) {
        if (iVar7 == -0x718583d8) {
          pcVar6 = (char *)FUN_0013e590
                                     (param_1,1);
          uVar5 = 0;
          iVar7 = -0x674c1e13;
          if (*pcVar6 != 'e') {
            iVar7 = iVar2;
          }
        }
        else if (iVar7 == -0x674c1e13) {
          pcVar6 = (char *)FUN_0013e590
                                     (param_1,2);
          uVar5 = 0;
          iVar7 = -0x388c7b07;
          if (*pcVar6 != 'x') {
            iVar7 = iVar2;
          }
        }
        else {
          pcVar6 = (char *)FUN_0013e590
                                     (param_1,0);
          uVar5 = 0;
          iVar7 = -0x718583d8;
          if (*pcVar6 != 'd') {
            iVar7 = iVar2;
          }
        }
      }
      if (0x2e96ce0e < iVar7) break;
      if (iVar7 == -0x388c7b07) {
        pcVar6 = (char *)FUN_0013e590(param_1,3)
        ;
        uVar5 = 0;
        iVar7 = 0x1ee4e3c0;
        if (*pcVar6 != '\n') {
          iVar7 = iVar2;
        }
      }
      else {
        pcVar6 = (char *)FUN_0013e590(param_1,7)
        ;
        uVar5 = (ulong)(*pcVar6 == '\0');
        iVar7 = 0x6923ac54;
      }
    }
    uVar3 = (uint)uVar5;
    uVar5 = 0;
    bVar4 = iVar7 == 0x2e96ce0f;
    iVar7 = iVar1;
  } while (bVar4);
  return uVar3 & 1;
}


