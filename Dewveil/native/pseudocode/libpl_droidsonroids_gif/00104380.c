// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00104380; body: [[00104380, 001044cf]]

long Java_pl_droidsonroids_gif_GifInfoHandle_openByteArray
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *__ptr;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  code *pcStack_48;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00103f30(param_3,param_1);
  if ((uVar3 & 1) == 0) {
    __ptr = malloc(0x18);
    if (__ptr == (undefined8 *)0x0) {
      pcVar6 = "Failed to allocate native memory";
      uVar5 = 2;
    }
    else {
      lVar4 = (**(code **)(*param_1 + 0xa8))(param_1,param_3);
      __ptr[1] = lVar4;
      if (lVar4 != 0) {
        uVar2 = (**(code **)(*param_1 + 0x558))(param_1,lVar4);
        *(uint *)(__ptr + 2) = uVar2;
        local_40 = (ulong)uVar2;
        *__ptr = 0;
        local_60 = 0;
        local_58[0] = 0;
        local_50 = 0;
        pcStack_48 = FUN_001041dc;
        local_60 = FUN_00104e64(__ptr,FUN_001044d0,local_58);
        local_50 = *__ptr;
        lVar4 = FUN_001060d0(&local_60,param_1);
        if (lVar4 == 0) {
          (**(code **)(*param_1 + 0xb0))(param_1,__ptr[1]);
          free(__ptr);
        }
        goto LAB_001044a4;
      }
      free(__ptr);
      pcVar6 = "NewGlobalRef failed";
      uVar5 = 1;
    }
    FUN_00103dc8(param_1,uVar5,pcVar6);
  }
  lVar4 = 0;
LAB_001044a4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


