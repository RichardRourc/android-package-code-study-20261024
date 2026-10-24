// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001753c0; body: [[001753c0, 00175693]]

void FUN_001753c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_90 = param_5;
  local_88 = param_4;
  local_80 = param_3;
  local_78 = param_2;
  uStack_70 = param_1;
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d7)])();
  uVar3 = local_88;
  uVar2 = local_90;
  pcVar6 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)];
  iVar4 = -0x669ba2a9;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar7 = iVar4, iVar4 = iVar7, iVar7 < 0x45172a6d) {
            if (iVar7 < -0x56595cdc) {
              iVar4 = 0x5d269838;
              if ((iVar7 != -0x70822ebb) && (iVar4 = iVar7, iVar7 == -0x669ba2a9)) {
                uVar5 = (*pcVar6)(param_6,uVar2,uVar3);
                iVar4 = -0x30381c41;
                if ((uVar5 & 1) == 0) {
                  iVar4 = 0x5d269838;
                }
              }
            }
            else {
              iVar4 = 0x5612007d;
              if ((iVar7 != -0x56595cdc) && (iVar4 = iVar7, iVar7 == -0x30381c41)) {
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])
                          (&local_88,&local_90);
                uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                                  (param_6,local_88,local_80);
                iVar4 = 0x45172a6d;
                if ((uVar5 & 1) == 0) {
                  iVar4 = -0x70822ebb;
                }
              }
            }
          }
          if (0x56cbab30 < iVar7) break;
          if (iVar7 == 0x45172a6d) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&local_80,&local_88);
            uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                              (param_6,local_80,local_78);
            iVar4 = 0x56cbab31;
            if ((uVar5 & 1) == 0) {
              iVar4 = 0x5612007d;
            }
          }
          else if (iVar7 == 0x5612007d) {
            iVar4 = -0x70822ebb;
          }
        }
        if (iVar7 != 0x56cbab31) break;
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&local_78,&local_80);
        uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                          (param_6,local_78,uStack_70);
        iVar4 = 0x60536d8e;
        if ((uVar5 & 1) == 0) {
          iVar4 = -0x56595cdc;
        }
      }
      if (iVar7 != 0x60536d8e) break;
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&uStack_70,&local_78);
      iVar4 = -0x56595cdc;
    }
  } while (iVar7 != 0x5d269838);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


