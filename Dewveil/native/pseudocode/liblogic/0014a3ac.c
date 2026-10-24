// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014a3ac; body: [[0014a3ac, 0014a467]]

void FUN_0014a3ac(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte local_a8 [128];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = 0;
  iVar2 = 0x7d1ac447;
  do {
    iVar2 = iVar2 * 0x41c64e6d + 0x3039;
    local_a8[lVar3] =
         (char)lVar3 * '\x11' + 0x8bU ^ (&DAT_0010f498)[lVar3] ^ (byte)((uint)iVar2 >> 0x10);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x25);
  local_a8[0x25] = 0;
  iVar2 = access((char *)local_a8,0);
  lVar3 = 0;
  do {
    local_a8[lVar3] = 0;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x80);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}


