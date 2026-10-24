// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a4464; body: [[001a4464, 001a46d3]]

void FUN_001a4464(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_a0;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar1 = 0x70320253;
  if (*(char *)*param_1 == '\0') {
    iVar1 = -0x7198b654;
  }
  iVar2 = -0x6349c789;
  if (param_2 != 0) {
    iVar2 = -0x77919456;
  }
  iVar5 = 0x2a1eb803;
  do {
    while (-0x6349c78a < iVar5) {
      if (iVar5 < 0x2a1eb803) {
        if (iVar5 != -0x6349c789) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b52d)])(local_a0,auStack_80);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_80);
          uVar6 = param_1[1];
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_00201191,3,&DAT_00204bb4,&DAT_00201191);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b591)])(uVar6,&DAT_00201191);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b595)])(auStack_80,param_3);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b597)])(param_1[1],auStack_80);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_80);
          if (*(long *)(lVar3 + 0x28) == local_68) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b592)])(auStack_80);
LAB_001a457c:
        iVar5 = -0x247c5305;
      }
      else {
        bVar4 = iVar5 != 0x2a1eb803;
        iVar5 = iVar1;
        if (bVar4) {
          *(undefined1 *)*param_1 = 0;
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b594)])(param_1[1],0x22);
          local_a0 = param_1[1];
          iVar5 = iVar2;
        }
      }
    }
    if (iVar5 == -0x77919456) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])(auStack_80,param_2);
      goto LAB_001a457c;
    }
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b594)])(param_1[1],0x2c);
    iVar5 = 0x70320253;
  } while( true );
}


