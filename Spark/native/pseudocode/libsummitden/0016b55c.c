// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016b55c; body: [[0016b55c, 0016b827]]

void FUN_0016b55c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b76)])();
  uVar3 = local_88;
  uVar2 = local_90;
  pcVar6 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)];
  iVar4 = 0x606afbc8;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar7 = iVar4, iVar4 = iVar7, 0x2292e9e0 < iVar7) {
            if (iVar7 < 0x5efbb689) {
              iVar4 = 0x24de5dbc;
              if ((iVar7 != 0x2292e9e1) && (iVar4 = iVar7, iVar7 == 0x24de5dbc)) {
                iVar4 = -0x56d5e3b6;
              }
            }
            else if (iVar7 == 0x5efbb689) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&local_88,&local_90);
              uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                                (param_6,local_88,local_80);
              iVar4 = 0x1fdc9b06;
              if ((uVar5 & 1) == 0) {
                iVar4 = -0x56d5e3b6;
              }
            }
            else if (iVar7 == 0x606afbc8) {
              uVar5 = (*pcVar6)(param_6,uVar2,uVar3);
              iVar4 = 0x5efbb689;
              if ((uVar5 & 1) == 0) {
                iVar4 = -0x7ba3e33a;
              }
            }
          }
          if (iVar7 < -0x1c05648) break;
          if (iVar7 == -0x1c05648) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&uStack_70,&local_78);
            iVar4 = 0x2292e9e1;
          }
          else if (iVar7 == 0x1fdc9b06) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&local_80,&local_88);
            uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                              (param_6,local_80,local_78);
            iVar4 = -0x1abfdc53;
            if ((uVar5 & 1) == 0) {
              iVar4 = 0x24de5dbc;
            }
          }
        }
        iVar4 = -0x7ba3e33a;
      } while (iVar7 == -0x56d5e3b6);
      if (iVar7 != -0x1abfdc53) break;
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&local_78,&local_80);
      uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                        (param_6,local_78,uStack_70);
      iVar4 = -0x1c05648;
      if ((uVar5 & 1) == 0) {
        iVar4 = 0x2292e9e1;
      }
    }
    iVar4 = iVar7;
  } while (iVar7 != -0x7ba3e33a);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


