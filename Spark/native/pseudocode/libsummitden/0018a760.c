// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0018a760; body: [[0018a760, 0018a8cb]]

/* WARNING: Removing unreachable block (ram,0x0018a874) */

uint FUN_0018a760(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])(auStack_80,param_2);
  pcVar5 = (code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)];
  do {
    uVar3 = (*pcVar5)(auStack_80);
    uVar2 = 0;
    iVar4 = 0x3e780d64;
    if ((uVar3 & 1) == 0) {
      iVar4 = 0x4900a4c0;
    }
  } while (iVar4 == 0x191c6580);
  while (iVar4 == 0x4900a4c0) {
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
              (&DAT_0020015b,2,&DAT_00204790,&DAT_0020015b);
    uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f6)])
                      (auStack_80,&DAT_0020015b);
    iVar4 = 0x3e780d64;
  }
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_80);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


