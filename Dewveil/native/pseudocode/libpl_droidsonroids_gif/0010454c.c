// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 0010454c; body: [[0010454c, 001046c7]]

long Java_pl_droidsonroids_gif_GifInfoHandle_openDirectByteBuffer
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *__ptr;
  long lVar4;
  ulong uVar5;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  code *pcStack_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*param_1 + 0x730))(param_1,param_3);
  lVar3 = (**(code **)(*param_1 + 0x738))(param_1,param_3);
  if ((lVar2 == 0) || (lVar3 < 1)) {
    uVar5 = FUN_00103f30(param_3,param_1);
    if ((uVar5 & 1) == 0) {
      FUN_00103fc8(0x3ed,param_1,0);
    }
  }
  else {
    __ptr = malloc(0x20);
    if (__ptr != (undefined8 *)0x0) {
      lVar4 = (**(code **)(*param_1 + 0xa8))(param_1,param_3);
      __ptr[3] = lVar4;
      if (lVar4 != 0) {
        *__ptr = 0;
        __ptr[1] = lVar2;
        __ptr[2] = lVar3;
        local_70 = 0;
        local_68[0] = 0;
        local_60 = 0;
        pcStack_58 = FUN_001041f4;
        local_50 = lVar3;
        local_70 = FUN_00104e64(__ptr,FUN_001046c8,local_68);
        local_60 = *__ptr;
        lVar2 = FUN_001060d0(&local_70,param_1);
        if (lVar2 == 0) {
          (**(code **)(*param_1 + 0xb0))(param_1,__ptr[3]);
          free(__ptr);
        }
        goto LAB_00104698;
      }
      free(__ptr);
    }
    FUN_00103dc8(param_1,2,"Failed to allocate native memory");
  }
  lVar2 = 0;
LAB_00104698:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


