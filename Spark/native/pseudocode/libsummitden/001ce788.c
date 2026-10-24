// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ce788; body: [[001ce788, 001ce7b3]]

int FUN_001ce788(pthread_mutex_t *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  iVar1 = pthread_mutex_lock(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  __mutex = (pthread_mutex_t *)FUN_001cebf8(iVar1,"pqvkoov5tfyo8go9a");
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}


