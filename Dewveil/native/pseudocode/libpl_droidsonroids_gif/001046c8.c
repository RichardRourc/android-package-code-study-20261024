// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001046c8; body: [[001046c8, 0010472f]]

ulong FUN_001046c8(long param_1,void *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  ulong __n;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x68);
  lVar1 = *plVar3 + (ulong)(byte)param_3;
  iVar2 = (int)plVar3[2] - (int)lVar1;
  if (lVar1 <= plVar3[2]) {
    iVar2 = 0;
  }
  __n = (ulong)(uint)(iVar2 + param_3) & 0xff;
  memcpy(param_2,(void *)(plVar3[1] + *plVar3),__n);
  *plVar3 = *plVar3 + __n;
  return (ulong)(uint)(iVar2 + param_3);
}


