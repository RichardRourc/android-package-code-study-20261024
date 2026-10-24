// [[00144594, 001448db]]

void FUN_00144594(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar1 = 0xe48bc29;
  if (param_3 != 0) {
    iVar1 = 0x5987657f;
  }
  iVar2 = 0xe48bc29;
  if (param_2 != 0) {
    iVar2 = 0x7bd6ea67;
  }
  iVar5 = 0x1ff3c70a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (0x43569b65 < iVar5) {
            if (iVar5 < 0x60ea4c3b) {
              if (iVar5 == 0x43569b66) {
                FUN_00146914
                          (param_1,param_2,param_3,auStack_80,auStack_98,param_5,param_6);
                iVar5 = -0x4127c5fc;
              }
              else if (iVar5 == 0x5987657f) {
                uVar4 = FUN_00135028(param_4);
                iVar5 = 0xe48bc29;
                if ((uVar4 & 1) == 0) {
                  iVar5 = 0x1e130a11;
                }
              }
            }
            else if (iVar5 == 0x60ea4c3b) {
              FUN_00157878
                        (&DAT_001fbb60,6,&DAT_002041ac,&DAT_001fbb60) /* b'error' */;
              FUN_001448dc
                        (param_1,&DAT_001fbb60);
              iVar5 = -0x4127c5fc;
            }
            else if (iVar5 == 0x7bd6ea67) {
              iVar5 = iVar1;
            }
          }
          if (iVar5 < 0x1e130a11) break;
          if (iVar5 == 0x1e130a11) {
            FUN_00135064(auStack_80);
            FUN_00135064(auStack_98);
            uVar4 = FUN_00144958
                              (param_2,param_4,auStack_80,auStack_98);
            iVar5 = 0x43569b66;
            if ((uVar4 & 1) == 0) {
              iVar5 = 0x60ea4c3b;
            }
          }
          else if (iVar5 == 0x1ff3c70a) {
            iVar5 = iVar2;
          }
        }
        if (iVar5 != -0x4127c5fc) break;
        FUN_001cc928(auStack_98);
        FUN_001cc928(auStack_80);
        iVar5 = -0x442ac5d2;
      }
      if (iVar5 != 0xe48bc29) break;
      FUN_00157878
                (&DAT_001fbb60,6,&DAT_002041ac,&DAT_001fbb60) /* b'error' */;
      FUN_001448dc(param_1,&DAT_001fbb60);
      iVar5 = -0x442ac5d2;
    }
  } while (iVar5 != -0x442ac5d2);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


