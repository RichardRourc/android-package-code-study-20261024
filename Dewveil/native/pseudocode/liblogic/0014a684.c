// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014a684; body: [[0014a684, 0014a707]]

void FUN_0014a684(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char local_a8 [128];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_a8._0_8_ = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38._8_8_;
  local_a8[8] = 'm';
  local_a8[9] = 'u';
  local_a8[10] = 0;
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


