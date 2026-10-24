// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c3e6c; body: [[001c3e6c, 001c3fab]]

void FUN_001c3e6c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  puVar3 = (undefined8 *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb2d)])();
  iVar1 = 0x5aedab2a;
  if (*(long *)*puVar3 != 0) {
    iVar1 = -0x248da6d6;
  }
  iVar5 = 0x268311;
  do {
    while (iVar5 == -0x248da6d6) {
      puVar3 = (undefined8 *)
               (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb2d)])(param_1);
      uVar6 = *(undefined8 *)*puVar3;
      puVar3 = (undefined8 *)
               (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb2d)])(param_1);
      *puVar3 = uVar6;
      iVar5 = 0x5aedab2a;
    }
    bVar2 = iVar5 == 0x268311;
    iVar5 = iVar1;
  } while (bVar2);
  puVar3 = (undefined8 *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb2e)])(param_1);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bac3)])(*puVar3,*param_3);
  plVar4 = (long *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bac2)])(param_1);
  *plVar4 = *plVar4 + 1;
  return;
}


