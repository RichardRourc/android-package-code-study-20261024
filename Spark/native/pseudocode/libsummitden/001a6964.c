// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a6964; body: [[001a6964, 001a6adb] [001a6fac, 001a6faf]]

void FUN_001a6964(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b48a)])();
  plVar5 = param_2 + 1;
  plVar6 = param_1 + 1;
  lVar1 = *plVar5 + (*param_1 - *plVar6);
  uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b48b)])();
  uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b48b)])(*plVar6);
  uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b48b)])(lVar1);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b488)])(param_1 + 2,uVar2,uVar3,uVar4);
  *plVar5 = lVar1;
  *plVar6 = *param_1;
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b489)])(param_1,plVar5);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b489)])(plVar6,param_2 + 2);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b489)])(param_1 + 2,param_2 + 3);
  *param_2 = *plVar5;
  uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b49c)])(param_1);
                    /* WARNING: Could not recover jumptable at 0x001a6ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b48e)])(param_1,uVar2);
  return;
}


