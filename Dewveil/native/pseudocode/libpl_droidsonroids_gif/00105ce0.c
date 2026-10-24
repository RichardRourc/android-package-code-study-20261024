// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00105ce0; body: [[00105ce0, 00105dcf]]

void FUN_00105ce0(long param_1,uint *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  byte local_40 [4];
  byte local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  cVar2 = (**(code **)(*(long *)(param_1 + 0x70) + 0x58))(param_1,local_40,1);
  if (cVar2 == '\x01') {
    *param_2 = (uint)local_40[0];
    lVar5 = *(long *)(param_1 + 0x70);
    cVar2 = (**(code **)(lVar5 + 0x58))(param_1,local_3c,1);
    if (cVar2 == '\x01') {
      if (local_3c[0] == 0) {
        *param_3 = 0;
      }
      else {
        *param_3 = lVar5 + 0x60;
        *(byte *)(lVar5 + 0x60) = local_3c[0];
        bVar3 = (**(code **)(*(long *)(param_1 + 0x70) + 0x58))(param_1,*param_3 + 1);
        if (local_3c[0] != bVar3) goto LAB_00105d90;
      }
      uVar4 = 1;
      goto LAB_00105d9c;
    }
  }
LAB_00105d90:
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x66;
LAB_00105d9c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


