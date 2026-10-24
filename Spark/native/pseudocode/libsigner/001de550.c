// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001de550; body: [[001de550, 001de687]]

void FUN_001de550(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = 0;
  FUN_0016db8c(param_1,param_2,param_4,&local_40);
  lVar1 = -0x25a3e9f6f44c50c;
  if (*param_1 != 0) {
    lVar1 = 0xfb13253120e52d5;
  }
  lVar3 = 0x3007aa9d32d99be8;
  do {
    while (lVar4 = lVar3, lVar4 < 0x3007aa9d32d99be8) {
      if (lVar4 == -0x25a3e9f6f44c50c) {
        *param_5 = *param_5 + local_40;
        lVar3 = 0x31b9d74c89a90fe3;
      }
      else {
        lVar3 = lVar4;
        if (lVar4 == 0xfb13253120e52d5) {
          lVar3 = 0x31b9d74c89a90fe3;
        }
      }
    }
    lVar3 = lVar1;
  } while ((lVar4 == 0x3007aa9d32d99be8) || (lVar3 = lVar4, lVar4 != 0x31b9d74c89a90fe3));
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


