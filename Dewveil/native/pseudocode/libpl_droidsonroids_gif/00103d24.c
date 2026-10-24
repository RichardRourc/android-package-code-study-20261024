// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00103d24; body: [[00103d24, 00103dc7]]

undefined8 FUN_00103d24(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  FUN_00103884();
  lVar2 = *(long *)(param_2 + 0x38);
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x40) + lVar2 * 0x18 + 8);
  *(ulong *)(param_2 + 0x38) = lVar2 + 1U;
  if (*(ulong *)(*(long *)(param_2 + 8) + 0x20) <= lVar2 + 1U) {
    if ((*(ulong *)(param_2 + 0x70) == 0) ||
       (uVar1 = *(long *)(param_2 + 0x78) + 1, uVar1 < *(ulong *)(param_2 + 0x70))) {
      iVar3 = (**(code **)(param_2 + 0x80))(param_2);
      if (iVar3 == 0) {
        if (*(long *)(param_2 + 0x70) != 0) {
          *(long *)(param_2 + 0x78) = *(long *)(param_2 + 0x78) + 1;
        }
        *(undefined8 *)(param_2 + 0x38) = 0;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
      *(ulong *)(param_2 + 0x78) = uVar1;
      *(long *)(param_2 + 0x38) = lVar2;
    }
  }
  return uVar4;
}


