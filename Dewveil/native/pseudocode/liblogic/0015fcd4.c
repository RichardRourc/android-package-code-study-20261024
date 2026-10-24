// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0015fcd4; body: [[0015fcd4, 0015fd3b]]

undefined1  [16] FUN_0015fcd4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  ulong local_8;
  
  local_8 = 0;
  uVar1 = FUN_001515f0(param_1,&local_8);
  lVar2 = 0;
  uVar3 = 0;
  if ((uVar1 & 1) == 0) {
    lVar2 = *param_1;
    if ((ulong)(param_1[1] - lVar2) < local_8) {
      lVar2 = 0;
      uVar3 = 0;
    }
    else {
      *param_1 = lVar2 + local_8;
      uVar3 = local_8;
    }
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = lVar2;
  return auVar4;
}


