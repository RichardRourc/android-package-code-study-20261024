// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00106dfc; body: [[00106dfc, 00106e8b]]

ulong Java_pl_droidsonroids_gif_GifInfoHandle_glTexImage2D
                (ulong param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined4 param_5
                )

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((param_3 != 0) && (lVar4 = *(long *)(param_3 + 0xa0), lVar4 != 0)) {
    uVar5 = *(undefined8 *)(lVar4 + 8);
    uVar1 = **(undefined4 **)(param_3 + 8);
    uVar2 = (*(undefined4 **)(param_3 + 8))[2];
    pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x10));
    glTexImage2D(param_4,param_5,0x1908,uVar1,uVar2,0,0x1908,0x1401,uVar5);
    uVar3 = pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x10));
    return (ulong)uVar3;
  }
  return param_1;
}


