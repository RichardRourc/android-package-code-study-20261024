// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00105178; body: [[00105178, 0010523f]]

void FUN_00105178(long param_1,undefined4 *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  cVar2 = (**(code **)(*(long *)(param_1 + 0x70) + 0x58))(param_1,local_3c,1);
  if (cVar2 == '\x01') {
    if (local_3c[0] == '!') {
      uVar4 = 3;
    }
    else if (local_3c[0] == ';') {
      uVar4 = 4;
    }
    else {
      if (local_3c[0] != ',') {
        uVar4 = 0x6b;
        *param_2 = 0;
        goto LAB_001051ec;
      }
      uVar4 = 2;
    }
    *param_2 = uVar4;
    uVar3 = 1;
  }
  else {
    uVar4 = 0x66;
LAB_001051ec:
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x60) = uVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


