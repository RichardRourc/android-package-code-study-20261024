// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c5858; body: [[001c5858, 001c59e3]]

void FUN_001c5858(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar6 = 0x6c88a08c;
  local_78 = param_4;
  do {
    puVar7 = param_3;
    iVar1 = 0x1564c4bd;
    if (puVar7 != (undefined8 *)0x0) {
      iVar1 = -0x22156245;
    }
    while( true ) {
      while (iVar6 < 0x1564c4bd) {
        bVar3 = iVar6 != -0x5e545a99;
        iVar6 = 0x6c88a08c;
        if (bVar3) {
          uVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb35)])(param_1);
          uVar5 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb34)])
                            (uVar4,puVar7 + 4,param_2);
          iVar6 = 0x70633fba;
          if ((uVar5 & 1) == 0) {
            iVar6 = 0x76de5efb;
          }
        }
      }
      if (0x70633fb9 < iVar6) break;
      bVar3 = iVar6 != 0x6c88a08c;
      iVar6 = iVar1;
      if (bVar3) {
        (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bae4)])(&local_70,local_78);
        if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(local_70);
        }
        return;
      }
    }
    if (iVar6 == 0x70633fba) {
      iVar6 = -0x5e545a99;
      param_3 = (undefined8 *)puVar7[1];
    }
    else {
      iVar6 = -0x5e545a99;
      param_3 = (undefined8 *)*puVar7;
      local_78 = puVar7;
    }
  } while( true );
}


