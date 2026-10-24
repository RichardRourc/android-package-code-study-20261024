// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001035c4; body: [[001035c4, 0010374b]]

void Java_pl_droidsonroids_gif_GifInfoHandle_free
               (long *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 *__ptr;
  
  if (param_3 == (undefined8 *)0x0) {
    return;
  }
  if ((code *)*param_3 != (code *)0x0) {
    (*(code *)*param_3)(param_3,param_1);
  }
  puVar3 = (undefined *)param_3[0x10];
  if (puVar3 == PTR_FUN_00119fe0) {
    __ptr = *(undefined8 **)(param_3[1] + 0x68);
    (**(code **)(*param_1 + 0x1e8))(param_1,*__ptr,__ptr[3]);
    cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
    if (cVar1 == '\x01') {
      (**(code **)(*param_1 + 0x88))(param_1);
    }
    (**(code **)(*param_1 + 0xb0))(param_1,*__ptr);
    uVar2 = __ptr[4];
    pcVar4 = *(code **)(*param_1 + 0xb0);
  }
  else {
    if (puVar3 == PTR_FUN_00119fe8) {
      fclose(*(FILE **)(param_3[1] + 0x68));
      goto LAB_001036f8;
    }
    if (puVar3 == PTR_FUN_00119ff8) {
      __ptr = *(undefined8 **)(param_3[1] + 0x68);
      pcVar4 = *(code **)(*param_1 + 0xb0);
      uVar2 = __ptr[1];
    }
    else {
      if (puVar3 != PTR_FUN_00119ff0) goto LAB_001036f8;
      __ptr = *(undefined8 **)(param_3[1] + 0x68);
      pcVar4 = *(code **)(*param_1 + 0xb0);
      uVar2 = __ptr[3];
    }
  }
  (*pcVar4)(param_1,uVar2);
  free(__ptr);
LAB_001036f8:
  *(undefined8 *)(param_3[1] + 0x68) = 0;
  free((void *)param_3[9]);
  param_3[9] = 0;
  free((void *)param_3[8]);
  param_3[8] = 0;
  free((void *)param_3[0xb]);
  param_3[0xb] = 0;
  free((void *)param_3[0xd]);
  param_3[0xd] = 0;
  FUN_00105edc(param_3[1]);
  free(param_3);
  return;
}


