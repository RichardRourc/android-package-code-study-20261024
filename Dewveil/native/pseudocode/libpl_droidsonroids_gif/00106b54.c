// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00106b54; body: [[00106b54, 00106cd3]]

ulong FUN_00106b54(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_68;
  byte local_60;
  long local_58;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((*(long *)(*(long *)(param_1 + 8) + 0x20) != 1) &&
      ((**(code **)(*param_2 + 0x660))(param_2,param_3,0,4,&local_68),
      local_68 < *(ulong *)(*(long *)(param_1 + 8) + 0x20))) &&
     (*(ulong *)(param_1 + 0x78) <= *(ulong *)(param_1 + 0x70))) {
    uVar3 = *(ulong *)(param_1 + 0x38);
    if (local_68 < uVar3) {
      uVar3 = FUN_00102ab8(param_1);
      if ((uVar3 & 1) == 0) {
        uVar3 = 0xffffffff;
        *(undefined4 *)(*(long *)(param_1 + 8) + 0x60) = 0x3ec;
        goto LAB_00106c70;
      }
      uVar3 = *(ulong *)(param_1 + 0x38);
    }
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x40) + uVar3 * 0x18 + 8);
    if (uVar3 < local_68) {
      if (uVar3 == 0) {
        FUN_001037a4(param_4,param_1);
        uVar3 = *(ulong *)(param_1 + 0x38);
      }
      while (uVar3 < local_68) {
        FUN_00102fd8(param_1,1,0);
        uVar4 = FUN_00103d24(param_4,param_1);
        uVar3 = *(ulong *)(param_1 + 0x38);
      }
    }
    *(ulong *)(param_1 + 0x78) = (ulong)local_60;
    *(long *)(param_1 + 0x28) = local_58;
    *(float *)(param_1 + 0x88) = local_50;
    if (local_58 == -1) {
      uVar3 = (ulong)(local_50 * (float)uVar4);
      lVar2 = FUN_00107bb8();
      *(ulong *)(param_1 + 0x30) = lVar2 + uVar3;
      goto LAB_00106c70;
    }
  }
  uVar3 = 0xffffffff;
LAB_00106c70:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 0xffffffff;
}


