// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0018bd98; body: [[0018bd98, 0018c177]]

void FUN_0018bd98(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  int iVar8;
  undefined1 auStack_268 [512];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001fffdc,2,&DAT_00204738,&DAT_001fffdc);
  lVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b588)])(param_2,&DAT_001fffdc);
  iVar1 = -0x3dbe250c;
  if (lVar4 != 0) {
    iVar1 = 0x3de9bc88;
  }
  iVar3 = 0x5a069261;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar8 = iVar3, iVar3 = iVar8, iVar8 < 0x41fe12dd) {
            if (iVar8 < 0x223b8d70) {
              if (iVar8 == -0x3dbe250c) {
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])
                          (param_1,&DAT_0011dd07);
                iVar3 = 0x7937e0c3;
              }
              else if (iVar8 == -0x3075f38d) {
                lVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b581)])(param_1);
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b583)])
                          (param_1,lVar7 + -1,0xffffffffffffffff);
                iVar3 = 0x674991cf;
              }
              else if (iVar8 == -0x2d3e863a) {
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b580)])(lVar4);
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])
                          (param_1,auStack_268);
                uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(param_1);
                iVar3 = 0x674991cf;
                if ((uVar5 & 1) == 0) {
                  iVar3 = 0x7b8683e4;
                }
              }
            }
            else if (iVar8 == 0x223b8d70) {
              iVar3 = 0x7937e0c3;
            }
            else {
              iVar3 = 0x223b8d70;
              if ((iVar8 != 0x32b2d754) && (iVar3 = iVar8, iVar8 == 0x3de9bc88)) {
                lVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b589)])
                                  (auStack_268,0x200,lVar4);
                iVar3 = 0x41fe12dd;
                if (lVar7 != 0) {
                  iVar3 = -0x2d3e863a;
                }
              }
            }
          }
          if (0x7368ed86 < iVar8) break;
          if (iVar8 == 0x41fe12dd) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b580)])(lVar4);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])(param_1,&DAT_0011dd07);
            iVar3 = 0x223b8d70;
          }
          else {
            iVar3 = iVar1;
            if ((iVar8 != 0x5a069261) && (iVar3 = iVar8, iVar8 == 0x674991cf)) {
              iVar3 = 0x32b2d754;
            }
          }
        }
        if (iVar8 != 0x7368ed87) break;
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(param_1);
        iVar3 = 0x32b2d754;
      }
      if (iVar8 != 0x7b8683e4) break;
      lVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b581)])(param_1);
      pcVar6 = (char *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b582)])
                                 (param_1,lVar7 + -1);
      iVar3 = -0x3075f38d;
      if (*pcVar6 != '\n') {
        iVar3 = 0x674991cf;
      }
    }
  } while (iVar8 != 0x7937e0c3);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


