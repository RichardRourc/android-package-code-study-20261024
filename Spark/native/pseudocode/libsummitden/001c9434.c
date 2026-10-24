// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c9434; body: [[001c9434, 001c9617]]

uint FUN_001c9434(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_w26;
  undefined1 uStack_81;
  char local_80 [24];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1e8c)])(local_80,&uStack_81);
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ede)])(local_80);
  iVar4 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef5)])();
  (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1edc)])(local_80);
  uVar6 = 0xb5cb0ea7;
  uVar1 = 0x1bdb43c0;
  if (-1 < iVar4) {
    uVar1 = uVar6;
  }
  uVar3 = 0x32597db5;
  while( true ) {
    while( true ) {
      while( true ) {
        do {
          uVar7 = uVar3;
          uVar3 = uVar1;
        } while (uVar7 == 0x32597db5);
        if (-0x25e06b1e < (int)uVar7) break;
        if (uVar7 == 0xb35cf84f) {
          uVar6 = (uint)(local_80[0] == '0');
          uVar3 = 0xda1f94e3;
        }
        else {
          local_80[0] = '\0';
          lVar5 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef2)])(iVar4,local_80,1)
          ;
          (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ef0)])(iVar4);
          uVar6 = 0;
          uVar3 = 0xb35cf84f;
          if (lVar5 != 1) {
            uVar3 = 0xda1f94e3;
          }
        }
      }
      if (uVar7 != 0xda1f94e3) break;
      uVar3 = 0x32b7400b;
      unaff_w26 = uVar6;
    }
    if (uVar7 != 0x1bdb43c0) break;
    uVar3 = 0x32b7400b;
    unaff_w26 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_w26 & 1;
}


