// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c1c30; body: [[001c1c30, 001c1da7] [001c238c, 001c238f]]

void FUN_001c1c30(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb7e)])();
  plVar5 = param_2 + 1;
  plVar6 = param_1 + 1;
  lVar1 = *plVar5 + (*param_1 - *plVar6);
  uVar2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb6f)])();
  uVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb6f)])(*plVar6);
  uVar4 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb6f)])(lVar1);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb7d)])(param_1 + 2,uVar2,uVar3,uVar4);
  *plVar5 = lVar1;
  *plVar6 = *param_1;
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb7c)])(param_1,plVar5);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb7c)])(plVar6,param_2 + 2);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb7c)])(param_1 + 2,param_2 + 3);
  *param_2 = *plVar5;
  uVar2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb6c)])(param_1);
                    /* WARNING: Could not recover jumptable at 0x001c1da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb73)])(param_1,uVar2);
  return;
}


