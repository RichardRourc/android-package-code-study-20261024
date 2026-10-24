// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001060d0; body: [[001060d0, 001062db]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_001060d0(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *__ptr;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = param_1[2];
  if (lVar7 < 0) {
    iVar2 = 0x6f;
    *(undefined4 *)(param_1 + 1) = 0x6f;
  }
  else {
    iVar2 = (int)param_1[1];
    if (iVar2 == 0) {
      lVar6 = *param_1;
      if (lVar6 != 0) {
        __ptr = malloc(0xa8);
        if (__ptr == (undefined8 *)0x0) {
          FUN_00105edc(lVar6);
          FUN_00103dc8(param_2,2,"Failed to allocate native memory");
          return (undefined8 *)0x0;
        }
        puVar4 = malloc(0x18);
        __ptr[8] = puVar4;
        uVar1 = _UNK_00107eb8;
        uVar8 = _DAT_00107eb0;
        if (puVar4 != (undefined1 *)0x0) {
          *__ptr = 0;
          __ptr[1] = lVar6;
          *puVar4 = 0;
          __ptr[9] = 0;
          __ptr[10] = lVar7;
          __ptr[6] = 0;
          __ptr[7] = 0;
          __ptr[0xd] = 0;
          *(undefined8 *)(puVar4 + 8) = 100;
          *(undefined4 *)(puVar4 + 0x10) = 0xffffffff;
          *(undefined4 *)(__ptr + 0x11) = 0x3f800000;
          __ptr[0xf] = uVar1;
          __ptr[0xe] = uVar8;
          uVar1 = _UNK_00107ec8;
          uVar8 = _DAT_00107ec0;
          __ptr[0x12] = param_1[4];
          lVar7 = param_1[3];
          __ptr[0x14] = 0;
          *(undefined1 *)(__ptr + 0x13) = 0;
          __ptr[0x10] = lVar7;
          __ptr[5] = uVar1;
          __ptr[4] = uVar8;
          FUN_00102fd8(__ptr,0,0);
          __ptr[0xb] = 0;
          __ptr[0xc] = 0;
          uVar8 = *(undefined8 *)__ptr[1];
          __ptr[3] = ((undefined8 *)__ptr[1])[1];
          __ptr[2] = uVar8;
          plVar5 = (long *)*param_1;
          if ((*plVar5 == 0) || (plVar5[1] == 0)) {
            FUN_0010374c(__ptr);
            uVar3 = 0x3e9;
          }
          else {
            if ((int)plVar5[0xc] == 0x6d) {
              FUN_0010374c(__ptr);
              goto LAB_00106278;
            }
            if (plVar5[4] == 0) {
              *(undefined4 *)(param_1 + 1) = 1000;
            }
            else if ((int)plVar5[0xc] == 0x3ec) {
              *(undefined4 *)(param_1 + 1) = 0x3ec;
            }
            else if ((int)param_1[1] == 0) {
              return __ptr;
            }
            FUN_0010374c(__ptr);
            uVar3 = (undefined4)param_1[1];
          }
          FUN_00103fc8(uVar3,param_2,0);
          return (undefined8 *)0x0;
        }
        FUN_00105edc(lVar6);
        free(__ptr);
LAB_00106278:
        FUN_00103dc8(param_2,2,"Failed to allocate native memory");
        return (undefined8 *)0x0;
      }
      iVar2 = 0;
    }
  }
  FUN_00103fc8(iVar2,param_2,
               (undefined *)param_1[3] == PTR_FUN_00119fe8 && (iVar2 == 0x6f || iVar2 == 0x66));
  FUN_00105edc(*param_1);
  return (undefined8 *)0x0;
}


