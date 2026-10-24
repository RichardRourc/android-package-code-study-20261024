// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00102e2c; body: [[00102e2c, 00102f0b]]

void Java_pl_droidsonroids_gif_GifInfoHandle_seekToFrame
               (undefined8 param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_3 != 0) && (*(long *)(*(long *)(param_3 + 8) + 0x20) != 1)) {
    iVar2 = FUN_001027cc(param_1,param_5,param_3,&local_50);
    fVar5 = 0.0;
    if (iVar2 == 0) {
      uVar3 = FUN_00102b54(param_3,(long)param_4,local_50);
      FUN_001028c4(param_1,param_5);
      fVar5 = (float)uVar3;
    }
    lVar4 = FUN_00107bb8();
    *(long *)(param_3 + 0x30) = lVar4 + (long)(fVar5 / *(float *)(param_3 + 0x88));
    if (*(long *)(param_3 + 0x28) != -1) {
      *(undefined8 *)(param_3 + 0x28) = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


