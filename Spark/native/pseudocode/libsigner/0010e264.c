// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0010e264; body: [[0010e264, 0010e4a3]]

void FUN_0010e264(double param_1,double *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  long local_88;
  long local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar1 = 0x635f31928f91aac5;
  if (*(char *)(param_2 + 1) != '\0') {
    lVar1 = 0x4dc5ede807dc3016;
  }
  lVar3 = 0x5aba0b6a880053f8;
  dVar5 = param_1;
  do {
    while( true ) {
      while( true ) {
        while (lVar4 = lVar3, lVar3 = lVar4, 0x236d10b4e1dc5a1d < lVar4) {
          if (lVar4 < 0x5aba0b6a880053f8) {
            if (lVar4 == 0x236d10b4e1dc5a1e) {
              *param_2 = dVar5;
              lVar3 = -0x2f698491beb5022;
            }
            else if (lVar4 == 0x4dc5ede807dc3016) {
              lVar3 = -0x2f698491beb5022;
            }
          }
          else {
            lVar3 = lVar1;
            if ((lVar4 != 0x5aba0b6a880053f8) && (lVar3 = lVar4, lVar4 == 0x635f31928f91aac5)) {
              local_88 = 0;
              local_80 = 0;
              FUN_001f3abc(0,&local_88);
              dVar5 = (double)local_80 / 1000000.0 + (double)local_88 * 1000.0;
              lVar3 = -0x13f6cef773005e97;
              if (dVar5 - *param_2 <= param_1) {
                lVar3 = -0x51d504ef14920bb2;
              }
            }
          }
        }
        if (lVar4 != -0x51d504ef14920bb2) break;
        lVar3 = 0x236d10b4e1dc5a1e;
      }
      if (lVar4 != -0x13f6cef773005e97) break;
      *(undefined1 *)(param_2 + 1) = 1;
      lVar3 = 0x236d10b4e1dc5a1e;
    }
  } while (lVar4 != -0x2f698491beb5022);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


