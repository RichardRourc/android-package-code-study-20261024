// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0018cc40; body: [[0018cc40, 0018ce5b]]

uint FUN_0018cc40(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_w28;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001fffdc,2,&DAT_00204738,&DAT_001fffdc);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_0020015d,0x18,&DAT_00204794,&DAT_0020015d);
  lVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b588)])
                    (&DAT_0020015d,&DAT_001fffdc);
  uVar6 = 0xeb4ab2d7;
  uVar1 = 0xa1f8e3f0;
  if (lVar4 != 0) {
    uVar1 = uVar6;
  }
  uVar3 = 0xdae23295;
  while( true ) {
    while( true ) {
      while( true ) {
        do {
          uVar7 = uVar3;
          uVar3 = uVar1;
        } while (uVar7 == 0xdae23295);
        if (0x575eb50 < (int)uVar7) break;
        if (uVar7 == 0xa1f8e3f0) {
          unaff_w28 = 0;
          uVar3 = 0x3f63cf6d;
        }
        else {
          local_70 = 0;
          lVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b589)])
                            (&local_70,8,lVar4);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b580)])(lVar4);
          uVar6 = 0;
          uVar3 = 0x6059e3a4;
          if (lVar5 != 0) {
            uVar3 = 0x575eb51;
          }
        }
      }
      if (uVar7 != 0x575eb51) break;
      uVar6 = (uint)((char)local_70 == '0');
      uVar3 = 0x6059e3a4;
    }
    if (uVar7 == 0x3f63cf6d) break;
    uVar3 = 0x3f63cf6d;
    unaff_w28 = uVar6;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_w28 & 1;
}


