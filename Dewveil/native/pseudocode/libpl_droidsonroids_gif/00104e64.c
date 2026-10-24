// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00104e64; body: [[00104e64, 00104fb7]]

void * FUN_00104e64(undefined8 param_1,code *param_2,undefined4 *param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  void *__ptr;
  void *__ptr_00;
  undefined4 uVar4;
  undefined1 auStack_50 [6];
  undefined1 local_4a;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __ptr = calloc(1,0x78);
  if (__ptr == (void *)0x0) {
    __ptr = (void *)0x0;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0x6d;
    }
    goto LAB_00104f4c;
  }
  __ptr_00 = calloc(1,0x6160);
  if (__ptr_00 == (void *)0x0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0x6d;
    }
  }
  else {
    *(undefined8 *)((long)__ptr + 0x68) = param_1;
    *(void **)((long)__ptr + 0x70) = __ptr_00;
    *(code **)((long)__ptr_00 + 0x58) = param_2;
    cVar2 = (*param_2)(__ptr,auStack_50,6);
    if (cVar2 == '\x06') {
      local_4a = 0;
      iVar3 = memcmp("GIFVER",auStack_50,3);
      if (iVar3 == 0) {
        iVar3 = FUN_00104fb8(__ptr);
        if (iVar3 == 0) {
          free(__ptr_00);
          free(__ptr);
          __ptr = (void *)0x0;
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = 0x68;
          }
        }
        else {
          *(undefined4 *)((long)__ptr + 0x60) = 0;
          *param_3 = 0;
        }
        goto LAB_00104f4c;
      }
      if (param_3 != (undefined4 *)0x0) {
        uVar4 = 0x67;
        goto LAB_00104f34;
      }
    }
    else if (param_3 != (undefined4 *)0x0) {
      uVar4 = 0x66;
LAB_00104f34:
      *param_3 = uVar4;
    }
    free(__ptr_00);
  }
  free(__ptr);
  __ptr = (void *)0x0;
LAB_00104f4c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


