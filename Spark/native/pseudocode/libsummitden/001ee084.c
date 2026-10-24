// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ee084; body: [[001ee084, 001ee357]]

undefined8 FUN_001ee084(long param_1,ulong param_2,long *param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  undefined *__src;
  ulong uVar3;
  undefined *__dest;
  long *plVar4;
  size_t __n;
  long lVar5;
  undefined1 auStack_6f0 [32];
  undefined8 local_6d0;
  long local_6b8;
  undefined4 uStack_6b0;
  long local_6a0;
  long local_698;
  undefined8 uStack_690;
  undefined1 auStack_688 [16];
  uint local_678;
  
  if (((param_4 == 0) ||
      (uVar3 = FUN_001ee5b4(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b8,auStack_6f0), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_001ee77c(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b8,auStack_6f0), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00205ef4);
    if (PTR_DAT_00204080 < PTR_DAT_00204088) {
      plVar4 = (long *)PTR_DAT_00204080;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_001ee18c;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_00204088);
      }
      else {
        do {
          if (((lVar5 == *plVar4) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_001ee18c;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_00204088);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00205ef4);
    goto LAB_001ee1d4;
  }
LAB_001ee1f4:
  bVar2 = 1;
LAB_001ee1f8:
  lVar5 = *param_3;
  memset(auStack_688,0,0x620);
  uVar3 = FUN_001ec350(*(undefined8 *)(param_1 + 8),&local_6b8,auStack_6f0,param_2,4,auStack_688);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x230) = uStack_690;
  *(long *)(param_1 + 0x228) = local_698;
  *(undefined8 *)(param_1 + 0x238) = local_6d0;
  bVar1 = (bool)(bVar2 ^ 1);
  *(ulong *)(param_1 + 0x240) = (ulong)local_678;
  *(undefined4 *)(param_1 + 0x250) = 0x3000000;
  *(long *)(param_1 + 0x220) = local_6a0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x254) = uStack_6b0;
  if (param_4 != 0) {
    bVar1 = true;
  }
  *(long *)(param_1 + 600) = local_6b8;
  *(long *)(param_1 + 0x260) = lVar5;
  if (!bVar1) {
    if (param_3[4] == 0) {
      lVar5 = *param_3;
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00205ef4);
      __src = PTR_DAT_00204080;
      if (DAT_00204090 <= PTR_DAT_00204088) {
        __n = (long)DAT_00204090 - (long)PTR_DAT_00204080;
        __dest = malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_00205f30) {
          free(__src);
        }
        DAT_00204090 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_00204088 = __dest + __n;
        PTR_DAT_00204080 = __dest;
      }
      *(long *)PTR_DAT_00204088 = lVar5;
      *(long *)((long)PTR_DAT_00204088 + 8) = local_6a0;
      *(long *)((long)PTR_DAT_00204088 + 0x18) = local_6b8;
      *(long *)((long)PTR_DAT_00204088 + 0x10) = local_698;
      PTR_DAT_00204088 = (undefined *)((long)PTR_DAT_00204088 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00205ef4);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_001ee18c:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00205ef4);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_001ee5b4(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b8,auStack_6f0), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_001ee1f8;
  }
LAB_001ee1d4:
  uVar3 = FUN_001ee5b4(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b8,
                       auStack_6f0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_001ee1f4;
}


