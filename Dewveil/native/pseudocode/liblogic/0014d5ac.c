// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014d5ac; body: [[0014d5ac, 0014d60b]]

undefined8 FUN_0014d5ac(long *param_1,void *param_2,size_t param_3)

{
  void *__s1;
  int iVar1;
  undefined8 uVar2;
  
  __s1 = (void *)*param_1;
  if (((ulong)(param_1[1] - (long)__s1) < param_3) ||
     (iVar1 = memcmp(__s1,param_2,param_3), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    *param_1 = (long)__s1 + param_3;
  }
  return uVar2;
}


