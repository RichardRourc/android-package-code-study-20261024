// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001351cc; body: [[001351cc, 00135327]]

void FUN_001351cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  code *pcVar7;
  undefined1 local_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_6c[0] = 0;
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371bd)])(param_1,param_2,local_6c);
  pcVar7 = (code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371bc)];
  iVar6 = -0x235ea45d;
  do {
    while (-0x235ea45e < iVar6) {
      if (iVar6 == -0x235ea45d) {
        uVar3 = (*pcVar7)(param_1);
        iVar6 = -0x285025e1;
        if ((uVar3 & 1) == 0) {
          iVar6 = 0x26fcada2;
        }
      }
      else {
        uVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371bf)])(param_1);
        uVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(param_1);
        (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371be)])(uVar4,uVar5);
        iVar6 = -0x285025e1;
      }
    }
    bVar2 = iVar6 == -0x285025e1;
    iVar6 = -0x2f43e552;
  } while (bVar2);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


