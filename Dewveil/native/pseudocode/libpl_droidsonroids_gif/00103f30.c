// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00103f30; body: [[00103f30, 00103fc7]]

undefined8 FUN_00103f30(long param_1,long *param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  
  if (param_1 == 0) {
    piVar5 = (int *)__errno();
    iVar2 = *piVar5;
    cVar3 = (**(code **)(*param_2 + 0x720))(param_2);
    if (cVar3 != '\x01') {
      pcVar1 = "java/lang/OutOfMemoryError";
      if (iVar2 != 0xc) {
        pcVar1 = "java/lang/NullPointerException";
      }
      lVar6 = (**(code **)(*param_2 + 0x30))(param_2,pcVar1);
      if (lVar6 != 0) {
        (**(code **)(*param_2 + 0x70))(param_2,lVar6,"Input source is null");
      }
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


