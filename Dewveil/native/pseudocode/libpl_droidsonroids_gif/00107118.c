// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00107118; body: [[00107118, 00107207]]

undefined8 FUN_00107118(long param_1)

{
  int __timeout;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  pollfd *__fds;
  
  uVar2 = FUN_001063a0();
  while( true ) {
    uVar3 = FUN_00107bb8();
    FUN_00102fd8(param_1,1,0);
    __fds = *(pollfd **)(param_1 + 0xa0);
    pthread_mutex_lock((pthread_mutex_t *)(__fds + 2));
    if (*(long *)(param_1 + 0x38) == 0) {
      FUN_001037a4(__fds[1],param_1);
    }
    uVar4 = FUN_00103d24(__fds[1],param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(__fds + 2));
    __timeout = FUN_00107af0(param_1,uVar3,uVar4);
    while (iVar1 = poll(__fds,1,__timeout), iVar1 == -1) {
      piVar5 = (int *)__errno();
      if (*piVar5 != 4) goto LAB_001071d8;
    }
    if (iVar1 < 0) break;
    if (iVar1 != 0) {
LAB_001071ec:
      FUN_0010640c();
      return 0;
    }
  }
LAB_001071d8:
  FUN_00103dc8(uVar2,0,"Could not poll on eventfd ");
  goto LAB_001071ec;
}


