// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 0010420c; body: [[0010420c, 0010437f]]

ulong Java_pl_droidsonroids_gif_GifInfoHandle_openFile
                (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  char *__filename;
  FILE *__stream;
  ulong uVar5;
  stat64 sStack_f0;
  long local_60;
  code *pcStack_58;
  __off_t local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00103f30(param_3,param_1);
  if ((uVar4 & 1) == 0) {
    __filename = (char *)(**(code **)(*param_1 + 0x548))(param_1,param_3,0);
    if (__filename == (char *)0x0) {
      uVar4 = FUN_00103dc8(param_1,1,"GetStringUTFChars failed");
    }
    else {
      __stream = fopen(__filename,"rbe");
      if (__stream != (FILE *)0x0) {
        (**(code **)(*param_1 + 0x550))(param_1,param_3,__filename);
        iVar2 = stat64(__filename,&sStack_f0);
        if (iVar2 != 0) {
          sStack_f0.st_size = -1;
        }
        sStack_f0.__unused[1] = 0;
        sStack_f0.__unused[2]._0_4_ = 0;
        local_60 = 0;
        pcStack_58 = FUN_00104104;
        local_50 = sStack_f0.st_size;
        sStack_f0.__unused[1] = FUN_00104e64(__stream,FUN_00104e3c,sStack_f0.__unused + 2);
        local_60 = ftell(__stream);
        uVar5 = FUN_001060d0(sStack_f0.__unused + 1,param_1);
        uVar4 = uVar5;
        if (uVar5 == 0) {
          uVar3 = fclose(__stream);
          uVar4 = (ulong)uVar3;
        }
        goto LAB_00104350;
      }
      FUN_00103fc8(0x65,param_1,1);
      uVar4 = (**(code **)(*param_1 + 0x550))(param_1,param_3,__filename);
    }
  }
  uVar5 = 0;
LAB_00104350:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


