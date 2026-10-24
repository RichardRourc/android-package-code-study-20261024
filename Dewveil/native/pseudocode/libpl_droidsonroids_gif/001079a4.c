// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001079a4; body: [[001079a4, 00107a67]]

undefined8 FUN_001079a4(long param_1)

{
  pthread_mutex_t *__mutex;
  char cVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xa0);
  __mutex = (pthread_mutex_t *)(lVar3 + 0x14);
  while( true ) {
    pthread_mutex_lock(__mutex);
    cVar1 = *(char *)(lVar3 + 0x10);
    while (cVar1 == '\0') {
      pthread_cond_wait((pthread_cond_t *)(lVar3 + 0x3c),__mutex);
      cVar1 = *(char *)(lVar3 + 0x10);
    }
    if (cVar1 == '\x02') break;
    *(undefined1 *)(lVar3 + 0x10) = 0;
    pthread_mutex_unlock(__mutex);
    FUN_00102fd8(param_1,1,0);
    pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x70));
    *(undefined1 *)(lVar3 + 0x6c) = 1;
    pthread_cond_signal((pthread_cond_t *)(lVar3 + 0x98));
    pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x70));
  }
  iVar2 = pthread_mutex_unlock(__mutex);
  FUN_0010640c(iVar2);
  return 0;
}


