// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001072d8; body: [[001072d8, 0010789f]]

void Java_pl_droidsonroids_gif_GifInfoHandle_bindSurface
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
               long param_5)

{
  short *__mutex;
  pthread_mutex_t *__mutex_00;
  char cVar1;
  long lVar2;
  void *__src;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  pollfd __dest;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  int *piVar11;
  ulong uVar12;
  undefined1 uVar13;
  pollfd *__fds;
  ulong __n;
  ulong uVar14;
  undefined4 *puVar15;
  int local_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  eventfd_t eStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  void *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  __fds = (pollfd *)param_3[0x14];
  if (__fds != (pollfd *)0x0) {
LAB_0010731c:
    do {
      while (iVar3 = poll(__fds,1,0), iVar3 == -1) {
        piVar4 = (int *)__errno();
        if (*piVar4 != 4) {
LAB_00107538:
          pcVar8 = "Could not poll on eventfd ";
          goto LAB_00107388;
        }
      }
      if (iVar3 == 0) {
        uVar10 = 1;
        if (*(char *)(param_3 + 0x13) != '\0') {
          uVar10 = 2;
        }
        uVar6 = ANativeWindow_fromSurface(1,param_1,param_4);
        puVar15 = (undefined4 *)param_3[1];
        iVar3 = ANativeWindow_setBuffersGeometry(uVar6,*puVar15,puVar15[2],uVar10);
        if (iVar3 != 0) {
          ANativeWindow_release(uVar6);
          pcVar8 = "Buffers geometry setting failed ";
          goto LAB_00107388;
        }
        uStack_88 = 0;
        local_90 = (void *)0x0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        local_a0 = 0;
        iVar3 = ANativeWindow_lock(uVar6,&local_a0,0);
        if (iVar3 == 0) {
          *(int *)((long)param_3 + 0x8c) = (int)uStack_98;
          __n = -(ulong)((uint)(local_a0._4_4_ * (int)uStack_98) >> 0x1f) & 0xfffffffc00000000 |
                (ulong)(uint)(local_a0._4_4_ * (int)uStack_98) << 2;
          if (__fds[1] == (pollfd)0x0) {
            if (param_5 == 0) {
              uVar14 = 0;
            }
            else {
              iVar3 = FUN_00106b54(param_3,param_1,param_5,local_90);
              uVar14 = (long)iVar3 & ((long)iVar3 >> 0x3f ^ 0xffffffffffffffffU);
            }
            uVar9 = 0;
            uVar13 = 1;
          }
          else {
            memcpy(local_90,(void *)__fds[1],__n);
            uVar13 = 0;
            uVar14 = 0;
            uVar9 = 1;
          }
          *(undefined1 *)&__fds[0xd].events = uVar9;
          *(undefined1 *)&__fds[2].fd = uVar13;
          param_3[5] = 0xffffffffffffffff;
          ANativeWindow_unlockAndPost(uVar6);
          if ((param_3[0xe] != 0) && (param_3[0xf] == param_3[0xe])) {
            ANativeWindow_release(uVar6);
            goto LAB_00107600;
          }
          iVar3 = pthread_create((pthread_t *)(__fds + 0x19),(pthread_attr_t *)0x0,FUN_001079a4,
                                 param_3);
          piVar4 = (int *)__errno();
          *piVar4 = iVar3;
          if (iVar3 == 0) {
            __mutex = &__fds[2].events;
            __mutex_00 = (pthread_mutex_t *)(__fds + 0xe);
            goto LAB_001076b8;
          }
          FUN_00103dc8(param_1,0,"Slurp thread creation failed ");
        }
        ANativeWindow_release(uVar6);
        goto LAB_00107394;
      }
      if (iVar3 < 1) goto LAB_00107538;
      while (iVar3 = eventfd_read(__fds->fd,&eStack_a8), iVar3 == -1) {
        piVar4 = (int *)__errno();
        if (*piVar4 != 4) goto LAB_00107380;
      }
    } while (iVar3 == 0);
LAB_00107380:
    pcVar8 = "Could not read from eventfd ";
    goto LAB_00107388;
  }
  __fds = malloc(0xd0);
  if (__fds != (pollfd *)0x0) {
    __fds->events = 1;
    iVar3 = eventfd(0,0);
    __fds->fd = iVar3;
    if (iVar3 == -1) {
      FUN_00103dc8(param_1,0,"Eventfd creation failed ");
      free(__fds);
      goto LAB_00107394;
    }
    iVar3 = pthread_cond_init((pthread_cond_t *)&__fds[7].events,(pthread_condattr_t *)0x0);
    piVar4 = (int *)__errno();
    *piVar4 = iVar3;
    if (iVar3 != 0) {
      FUN_00103dc8(param_1,0,"Slurp condition variable initialization failed ");
    }
    iVar3 = pthread_cond_init((pthread_cond_t *)(__fds + 0x13),(pthread_condattr_t *)0x0);
    *piVar4 = iVar3;
    if (iVar3 != 0) {
      FUN_00103dc8(param_1,0,"Render condition variable initialization failed ");
    }
    iVar3 = pthread_mutex_init((pthread_mutex_t *)&__fds[2].events,(pthread_mutexattr_t *)0x0);
    *piVar4 = iVar3;
    if (iVar3 != 0) {
      FUN_00103dc8(param_1,0,"Slurp mutex initialization failed ");
    }
    iVar3 = pthread_mutex_init((pthread_mutex_t *)(__fds + 0xe),(pthread_mutexattr_t *)0x0);
    *piVar4 = iVar3;
    if (iVar3 != 0) {
      FUN_00103dc8(param_1,0,"Render mutex initialization failed ");
    }
    __fds[1].fd = 0;
    __fds[1].events = 0;
    __fds[1].revents = 0;
    param_3[0x14] = __fds;
    *param_3 = FUN_001078a0;
    goto LAB_0010731c;
  }
  pcVar8 = "Failed to allocate native memory";
  uVar6 = 2;
  goto LAB_00107390;
  while (piVar4 = (int *)__errno(), *piVar4 == 4) {
LAB_00107600:
    iVar3 = poll(__fds,1,-1);
    if (iVar3 != -1) {
      if (-1 < iVar3) goto LAB_00107394;
      break;
    }
  }
  pcVar8 = "Animation end poll failed ";
  goto LAB_00107388;
  while (*piVar4 == 4) {
LAB_001076b8:
    iVar3 = poll(__fds,1,(int)uVar14);
    if (iVar3 != -1) {
      uVar7 = FUN_00107bb8();
      __src = local_90;
      if (iVar3 < 0) goto LAB_00107800;
      if (iVar3 != 0) {
        __dest = __fds[1];
        if (__dest == (pollfd)0x0) {
          __dest = (pollfd)malloc(__n);
          __fds[1] = __dest;
          if (__dest == (pollfd)0x0) {
            pcVar8 = "Failed to allocate native memory";
            uVar7 = 2;
            goto LAB_00107810;
          }
        }
        memcpy((void *)__dest,local_90,__n);
        goto LAB_00107814;
      }
      piVar11 = (int *)(*(long *)(puVar15 + 0x16) + param_3[7] * 0x30);
      local_b8 = *piVar11;
      iStack_b4 = (int)*(undefined8 *)(piVar11 + 2);
      local_b0 = piVar11[4] + local_b8;
      iStack_ac = piVar11[6] + iStack_b4;
      piVar11 = (int *)0x0;
      if (param_3[7] != 0) {
        piVar11 = &local_b8;
      }
      iVar3 = ANativeWindow_lock(uVar6,&local_a0,piVar11);
      if (iVar3 != 0) goto LAB_00107814;
      if (param_3[7] == 0) {
        FUN_001037a4(local_90,param_3);
      }
      else {
        memcpy(local_90,__src,__n);
      }
      pthread_mutex_lock(__mutex_00);
      cVar1 = (char)__fds[0xd].events;
      while (cVar1 == '\0') {
        pthread_cond_wait((pthread_cond_t *)(__fds + 0x13),__mutex_00);
        cVar1 = (char)__fds[0xd].events;
      }
      *(undefined1 *)&__fds[0xd].events = 0;
      pthread_mutex_unlock(__mutex_00);
      uVar5 = FUN_00103d24(local_90,param_3);
      pthread_mutex_lock((pthread_mutex_t *)__mutex);
      *(undefined1 *)&__fds[2].fd = 1;
      pthread_cond_signal((pthread_cond_t *)&__fds[7].events);
      pthread_mutex_unlock((pthread_mutex_t *)__mutex);
      ANativeWindow_unlockAndPost(uVar6);
      uVar14 = FUN_00107af0(param_3,uVar7,uVar5);
      uVar12 = param_3[5];
      if (-1 < (long)uVar12) {
        param_3[5] = 0xffffffffffffffff;
        uVar14 = uVar12;
      }
      goto LAB_001076b8;
    }
  }
  FUN_00107bb8();
LAB_00107800:
  pcVar8 = "Display loop poll failed ";
  uVar7 = 0;
LAB_00107810:
  FUN_00103dc8(param_1,uVar7,pcVar8);
LAB_00107814:
  ANativeWindow_release(uVar6);
  pthread_mutex_lock((pthread_mutex_t *)__mutex);
  *(undefined1 *)&__fds[2].fd = 2;
  pthread_cond_signal((pthread_cond_t *)&__fds[7].events);
  pthread_mutex_unlock((pthread_mutex_t *)__mutex);
  iVar3 = pthread_join((pthread_t)__fds[0x19],(void **)0x0);
  *piVar4 = iVar3;
  if (iVar3 == 0) goto LAB_00107394;
  pcVar8 = "Slurp thread join failed";
LAB_00107388:
  uVar6 = 0;
LAB_00107390:
  FUN_00103dc8(param_1,uVar6,pcVar8);
LAB_00107394:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


