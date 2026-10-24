// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00106cd4; body: [[00106cd4, 00106d77]]

undefined4
Java_pl_droidsonroids_gif_GifInfoHandle_restoreSavedState
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_3 == 0) || (iVar2 = FUN_001027cc(param_1,param_5,param_3,&local_50), iVar2 != 0)) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_00106b54(param_3,param_1,param_4,local_50);
    FUN_001028c4(param_1,param_5);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


