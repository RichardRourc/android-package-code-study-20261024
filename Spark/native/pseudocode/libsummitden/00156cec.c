// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00156cec; body: [[00156cec, 00156f5b]]

void FUN_00156cec(long *param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong local_78;
  ulong local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_70 = param_2;
  uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8be2)])();
  iVar1 = 0x18efeb9c;
  if (param_2 <= uVar4) {
    iVar1 = -0x41fa9556;
  }
  iVar7 = 0x66fbadb0;
  do {
    while( true ) {
      while (0x18efeb9b < iVar7) {
        if (iVar7 == 0x18efeb9c) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bfc)])(param_1);
          uVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b98)])(param_1,local_70)
          ;
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a47)])(param_1,uVar5);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ae1)])(param_1,local_70,param_3)
          ;
          iVar7 = -0x360beadb;
        }
        else {
          bVar3 = iVar7 != 0x66fbadb0;
          iVar7 = iVar1;
          if (bVar3) {
            iVar7 = -0x360beadb;
          }
        }
      }
      if (iVar7 < -0x360beadb) break;
      if (iVar7 != -0x2a89a4a3) {
        if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ae1)])
                (param_1,local_70 - local_78,param_3);
LAB_00156ea4:
      iVar7 = 0x7de0fce5;
    }
    if (iVar7 == -0x66880962) {
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b96)])(param_1,*param_1 + local_70);
      goto LAB_00156ea4;
    }
    local_78 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])(param_1);
    lVar8 = *param_1;
    puVar6 = (undefined8 *)
             (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b1f)])(&local_70,&local_78);
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ae0)])(lVar8,*puVar6,param_3);
    iVar7 = -0x2a89a4a3;
    if (local_70 <= local_78) {
      iVar7 = -0x66880962;
    }
  } while( true );
}


