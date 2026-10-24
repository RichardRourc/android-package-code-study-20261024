// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014a468; body: [[0014a468, 0014a53f]]

void FUN_0014a468(long param_1)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  byte local_a8 [128];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar6 = *(ulong *)(param_1 + 0x18);
  uVar1 = uVar6;
  if (0x7e < uVar6) {
    uVar1 = 0x7f;
  }
  if (uVar6 != 0) {
    cVar2 = *(char *)(param_1 + 0x15);
    uVar6 = 0;
    uVar7 = *(ushort *)(param_1 + 0x14) ^ 0x7d1a4f62;
    do {
      uVar7 = uVar7 * 0x41c64e6d + 0x3039;
      local_a8[uVar6] =
           (char)uVar6 * '\x11' + cVar2 ^ *(byte *)(param_1 + uVar6) ^ (byte)(uVar7 >> 0x10);
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  local_a8[uVar1] = 0;
  iVar4 = access((char *)local_a8,0);
  lVar5 = 0;
  do {
    local_a8[lVar5] = 0;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x80);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4 == 0);
}


