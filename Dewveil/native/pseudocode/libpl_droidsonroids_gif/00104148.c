// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00104148; body: [[00104148, 001041db]]

undefined8 FUN_00104148(long param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x68);
  plVar2 = (long *)FUN_001063a0();
  *(undefined4 *)(puVar3 + 5) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1e8))(plVar2,*puVar3,puVar3[2]);
    cVar1 = (**(code **)(*plVar2 + 0x720))(plVar2);
    if (cVar1 != '\x01') {
      return 0;
    }
    (**(code **)(*plVar2 + 0x88))(plVar2);
  }
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x60) = 0x3ec;
  return 0xffffffff;
}


