// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00105dd0; body: [[00105dd0, 00105e8f]]

void FUN_00105dd0(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  byte local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x70);
  cVar2 = (**(code **)(lVar5 + 0x58))(param_1,local_3c,1);
  if (cVar2 == '\x01') {
    if (local_3c[0] == 0) {
      *param_2 = 0;
    }
    else {
      *param_2 = lVar5 + 0x60;
      *(byte *)(lVar5 + 0x60) = local_3c[0];
      bVar3 = (**(code **)(*(long *)(param_1 + 0x70) + 0x58))(param_1,*param_2 + 1);
      if (local_3c[0] != bVar3) goto LAB_00105e50;
    }
    uVar4 = 1;
  }
  else {
LAB_00105e50:
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x66;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


