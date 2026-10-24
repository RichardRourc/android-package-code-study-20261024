// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014a5fc; body: [[0014a5fc, 0014a683]]

void FUN_0014a5fc(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char local_a8 [8];
  undefined4 local_a0;
  undefined1 local_9c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_a8 = (char  [8])s__data_bigetFiles__BII_V_0010eea0._0_8_;
  local_a0 = (undefined4)DAT_0010ee98;
  local_9c = 0;
  iVar2 = access(local_a8,0);
  lVar3 = 0;
  do {
    local_a8[lVar3] = '\0';
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x80);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}


