// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016b35c; body: [[0016b35c, 0016b55b]]

void FUN_0016b35c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_88 = param_4;
  local_80 = param_3;
  local_78 = param_2;
  uStack_70 = param_1;
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b71)])();
  uVar3 = local_80;
  uVar2 = local_88;
  pcVar7 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)];
  iVar6 = 0x28189ae8;
  while( true ) {
    while( true ) {
      while (iVar6 < 0x9a024e9) {
        if (iVar6 == -0x34fa452b) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&local_80,&local_88);
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                            (param_5,local_80,local_78);
          iVar6 = -0x14e61ee5;
          if ((uVar5 & 1) == 0) {
            iVar6 = 0x3717a2d1;
          }
        }
        else {
          bVar4 = iVar6 == -0x14e61ee5;
          iVar6 = 0x3717a2d1;
          if (bVar4) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&local_78,&local_80);
            uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b73)])
                              (param_5,local_78,uStack_70);
            iVar6 = 0x1e52788c;
            if ((uVar5 & 1) == 0) {
              iVar6 = -0xa445eec;
            }
          }
        }
      }
      if (iVar6 < 0x28189ae8) break;
      bVar4 = iVar6 == 0x28189ae8;
      iVar6 = 0x9a024e9;
      if (bVar4) {
        uVar5 = (*pcVar7)(param_5,uVar2,uVar3);
        iVar6 = -0x34fa452b;
        if ((uVar5 & 1) == 0) {
          iVar6 = 0x9a024e9;
        }
      }
    }
    if (iVar6 != 0x1e52788c) break;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b70)])(&uStack_70,&local_78);
    iVar6 = -0xa445eec;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


