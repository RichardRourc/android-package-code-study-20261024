// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001751bc; body: [[001751bc, 001753bf]]

void FUN_001751bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
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
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d6)])();
  uVar3 = local_80;
  uVar2 = local_88;
  pcVar7 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)];
  iVar4 = 0x6699024;
  while( true ) {
    while( true ) {
      while (iVar6 = iVar4, 0x63314de6 < iVar6) {
        iVar4 = -0x3200955a;
        if ((iVar6 != 0x63314de7) && (iVar4 = 0x63314de7, iVar6 == 0x6eaa2fb4)) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&uStack_70,&local_78);
          iVar4 = 0x6f4df9d1;
        }
      }
      if (iVar6 < 0x6699024) break;
      if (iVar6 == 0x6699024) {
        uVar5 = (*pcVar7)(param_5,uVar2,uVar3);
        iVar4 = -0x36cdf3a2;
        if ((uVar5 & 1) == 0) {
          iVar4 = -0x3200955a;
        }
      }
      else {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&local_78,&local_80);
        uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                          (param_5,local_78,uStack_70);
        iVar4 = 0x6eaa2fb4;
        if ((uVar5 & 1) == 0) {
          iVar4 = 0x6f4df9d1;
        }
      }
    }
    if (iVar6 != -0x36cdf3a2) break;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d1)])(&local_80,&local_88);
    uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                      (param_5,local_80,local_78);
    iVar4 = 0x2a2243d8;
    if ((uVar5 & 1) == 0) {
      iVar4 = 0x63314de7;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


