// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001063a0; body: [[001063a0, 0010640b]]

void FUN_001063a0(void)

{
  long lVar1;
  int iVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = (**(code **)(*DAT_0011a028 + 0x20))(DAT_0011a028,&local_30,&DAT_0011a008);
  if (iVar2 != 0) {
    local_30 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


