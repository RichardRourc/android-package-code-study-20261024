// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016e4cc; body: [[0016e4cc, 0016e51f]]

void FUN_0016e4cc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_2;
  uVar3 = param_2[2];
  uVar7 = param_1[1];
  uVar6 = *param_1;
  uVar4 = param_1[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar3;
  param_2[1] = uVar7;
  *param_2 = uVar6;
  param_2[2] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


