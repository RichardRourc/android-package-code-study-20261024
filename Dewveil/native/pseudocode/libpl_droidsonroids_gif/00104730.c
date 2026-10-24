// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00104730; body: [[00104730, 001049ef]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Java_pl_droidsonroids_gif_GifInfoHandle_openStream
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  long lVar7;
  long *__ptr;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  long lVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar7 = (**(code **)(*param_1 + 0x580))(param_1,0x2000);
  if ((lVar7 == 0) || (__ptr = malloc(0x30), __ptr == (long *)0x0)) {
LAB_0010493c:
    pcVar12 = "Failed to allocate native memory";
    uVar11 = 2;
LAB_00104948:
    FUN_00103dc8(param_1,uVar11,pcVar12);
  }
  else {
    lVar7 = (**(code **)(*param_1 + 0xa8))(param_1,lVar7);
    __ptr[4] = lVar7;
    if (lVar7 == 0) {
      free(__ptr);
      goto LAB_0010493c;
    }
    lVar8 = (**(code **)(*param_1 + 0xf8))(param_1,param_3);
    lVar13 = *param_1;
    if (lVar8 == 0) {
LAB_001049a8:
      (**(code **)(lVar13 + 0xb0))(param_1,lVar7);
      free(__ptr);
      pcVar12 = "NewGlobalRef failed";
      uVar11 = 1;
      goto LAB_00104948;
    }
    lVar13 = (**(code **)(lVar13 + 0x108))(param_1,lVar8,&DAT_00107e16,&DAT_00107e1b);
    lVar9 = (**(code **)(*param_1 + 0x108))(param_1,lVar8,"read",&DAT_00107e20);
    __ptr[1] = lVar9;
    lVar10 = (**(code **)(*param_1 + 0x108))(param_1,lVar8,"reset",&DAT_00107e2e);
    __ptr[2] = lVar10;
    lVar8 = (**(code **)(*param_1 + 0x108))(param_1,lVar8,"close",&DAT_00107e2e);
    __ptr[3] = lVar8;
    if ((((lVar13 == 0) || (lVar9 == 0)) || (lVar8 == 0)) || (lVar10 == 0)) {
      lVar8 = *param_1;
    }
    else {
      lVar8 = (**(code **)(*param_1 + 0xa8))(param_1,param_3);
      *__ptr = lVar8;
      uVar5 = DAT_00119c00;
      uVar4 = _UNK_00119bf8;
      uVar3 = _DAT_00119bf0;
      uVar2 = _UNK_00119be8;
      uVar11 = _DAT_00119be0;
      if (lVar8 == 0) {
        lVar13 = *param_1;
        goto LAB_001049a8;
      }
      *(undefined4 *)(__ptr + 5) = 0;
      *(undefined1 *)((long)__ptr + 0x2c) = 0;
      local_70 = uVar5;
      uStack_88 = uVar2;
      local_90 = uVar11;
      uStack_78 = uVar4;
      uStack_80 = uVar3;
      local_90 = FUN_00104e64(__ptr,FUN_001049f0,(ulong)&local_90 | 8);
      (**(code **)(*param_1 + 0x1e8))(param_1,param_3,lVar13,0x7fffffff);
      cVar6 = (**(code **)(*param_1 + 0x720))(param_1);
      if (cVar6 != '\x01') {
        uVar11 = FUN_001060d0(&local_90,param_1);
        *(undefined1 *)((long)__ptr + 0x2c) = 1;
        *(undefined4 *)(__ptr + 5) = 0;
        goto LAB_00104954;
      }
      (**(code **)(*param_1 + 0xb0))(param_1,*__ptr);
      lVar8 = *param_1;
      lVar7 = __ptr[4];
    }
    (**(code **)(lVar8 + 0xb0))(param_1,lVar7);
    free(__ptr);
  }
  uVar11 = 0;
LAB_00104954:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


