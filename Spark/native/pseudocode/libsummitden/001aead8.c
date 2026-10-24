// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001aead8; body: [[001aead8, 001aec93]]

/* WARNING: Removing unreachable block (ram,0x001aeb80) */

void FUN_001aead8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b581)])();
  pcVar6 = (code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f9)];
  uVar5 = 0xc7bf2137;
  while (uVar5 == 0xc7bf2137) {
    uVar3 = (*pcVar6)(param_1);
    uVar5 = 0x62d50dd5;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0x25c22b94;
    }
    if (0x30a01efd < uVar5) goto LAB_001aeb9c;
  }
  uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b55b)])(param_1);
  local_70[0] = 0;
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b551)])(uVar4,local_70);
  uVar5 = DAT_00202698 ^ 0x1873b550;
  while( true ) {
    (*(code *)(&PTR_FUN_00201200)[(int)uVar5])(param_1,0);
    uVar5 = 0x30a01efe;
LAB_001aeb9c:
    if (uVar5 != 0x62d50dd5) break;
    uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5fe)])(param_1);
    local_6c[0] = 0;
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b551)])(uVar4,local_6c);
    uVar5 = DAT_00202698 ^ 0x1873b4b5;
  }
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b556)])(param_1,uVar2);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


