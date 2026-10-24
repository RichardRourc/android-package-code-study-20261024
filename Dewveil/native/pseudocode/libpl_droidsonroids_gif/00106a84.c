// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00106a84; body: [[00106a84, 00106b53]]

long Java_pl_droidsonroids_gif_GifInfoHandle_getSavedState
               (long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x5a0))(param_1,4);
    if (lVar2 == 0) {
      FUN_00103dc8(param_1,1,"Could not create state array");
    }
    else {
      local_58 = *(undefined8 *)(param_3 + 0x38);
      local_50 = *(undefined8 *)(param_3 + 0x78);
      local_48 = *(undefined8 *)(param_3 + 0x28);
      local_40 = (ulong)*(uint *)(param_3 + 0x88);
      (**(code **)(*param_1 + 0x6a0))(param_1,lVar2,0,4,&local_58);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


