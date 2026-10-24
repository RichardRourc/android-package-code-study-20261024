// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001044d0; body: [[001044d0, 0010454b]]

uint FUN_001044d0(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x68);
  plVar3 = (long *)FUN_001063a0();
  if (plVar3 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *plVar5 + (ulong)(byte)param_3;
    iVar2 = *(uint *)(plVar5 + 2) - (int)uVar1;
    if (uVar1 <= *(uint *)(plVar5 + 2)) {
      iVar2 = 0;
    }
    uVar4 = iVar2 + param_3;
    (**(code **)(*plVar3 + 0x640))(plVar3,plVar5[1],*plVar5,uVar4 & 0xff,param_2);
    *plVar5 = *plVar5 + (ulong)(byte)uVar4;
  }
  return uVar4;
}


