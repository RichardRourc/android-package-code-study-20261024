// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00104d24; body: [[00104d24, 00104e3b]]

ulong Java_pl_droidsonroids_gif_GifInfoHandle_openNativeFileDescriptor
                (undefined8 param_1,undefined8 param_2,int param_3,__off64_t param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  __off64_t _Var4;
  FILE *__stream;
  ulong uVar5;
  stat64 sStack_e0;
  long local_50;
  code *pcStack_48;
  __off_t local_40;
  long local_38;
  ulong uVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  _Var4 = lseek64(param_3,param_4,0);
  if ((_Var4 == -1) || (__stream = fdopen(param_3,"rb"), __stream == (FILE *)0x0)) {
    FUN_00103fc8(0x65,param_1,1);
    uVar3 = close(param_3);
    uVar6 = (ulong)uVar3;
    uVar5 = 0;
  }
  else {
    iVar2 = fstat64(param_3,&sStack_e0);
    if (iVar2 != 0) {
      sStack_e0.st_size = -1;
    }
    sStack_e0.__unused[1] = 0;
    sStack_e0.__unused[2]._0_4_ = 0;
    local_50 = 0;
    pcStack_48 = FUN_00104104;
    local_40 = sStack_e0.st_size;
    sStack_e0.__unused[1] = FUN_00104e64(__stream,FUN_00104e3c,sStack_e0.__unused + 2);
    local_50 = ftell(__stream);
    uVar5 = FUN_001060d0(sStack_e0.__unused + 1,param_1);
    uVar6 = uVar5;
    if (uVar5 == 0) {
      uVar3 = close(param_3);
      uVar6 = (ulong)uVar3;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


