// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b4e80; body: [[001b4e80, 001b504b]]

undefined8 FUN_001b4e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  undefined8 unaff_x19;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_80 = param_3;
  local_78 = param_2;
  local_70 = param_1;
  local_88 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b791)])(&local_70,1);
  uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b452)])(&local_88,&local_78);
  iVar1 = 0x35d4d578;
  if ((uVar4 & 1) == 0) {
    iVar1 = -0x5307028e;
  }
  iVar3 = 0x5660ef02;
  do {
    while (iVar5 = iVar3, 0x4e12acd5 < iVar5) {
      iVar3 = iVar1;
      if (iVar5 != 0x5660ef02) {
        if (iVar5 == 0x4e12acd6) {
          if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return unaff_x19;
        }
        unaff_x19 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7c9)])
                              (local_70,local_78,local_80);
LAB_001b5004:
        iVar3 = 0x4e12acd6;
      }
    }
    if (iVar5 != -0x5307028e) {
      if (iVar5 == -0x2e3511bc) {
        uVar6 = 0x1873b7c8;
      }
      else {
        uVar6 = 0x1873b7cb;
      }
      unaff_x19 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ uVar6)])(local_70,local_80);
      goto LAB_001b5004;
    }
    local_90 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b791)])(&local_78,1);
    uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b452)])(&local_90,&local_80);
    iVar3 = -0x2e3511bc;
    if ((uVar4 & 1) == 0) {
      iVar3 = 0x721b6c5e;
    }
  } while( true );
}


