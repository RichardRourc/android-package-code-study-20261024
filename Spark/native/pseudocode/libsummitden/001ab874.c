// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ab874; body: [[001ab874, 001ab9eb]]

void FUN_001ab874(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b41a)])();
  plVar5 = param_2 + 1;
  plVar6 = param_1 + 1;
  lVar1 = *plVar5 + (*param_1 - *plVar6);
  uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b429)])();
  uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b429)])(*plVar6);
  uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b429)])(lVar1);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b41b)])(param_1 + 2,uVar2,uVar3,uVar4);
  *plVar5 = lVar1;
  *plVar6 = *param_1;
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b418)])(param_1,plVar5);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b418)])(plVar6,param_2 + 2);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b418)])(param_1 + 2,param_2 + 3);
  *param_2 = *plVar5;
  uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b42c)])(param_1);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b419)])(param_1,uVar2);
  return;
}


