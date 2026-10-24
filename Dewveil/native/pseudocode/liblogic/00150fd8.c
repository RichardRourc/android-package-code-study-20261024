// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00150fd8; body: [[00150fd8, 00151197]]

undefined8 FUN_00150fd8(long *param_1,undefined8 *param_2)

{
  long *__src;
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long *__ptr;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  size_t __n;
  undefined1 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  void *pvVar11;
  
  pcVar5 = (char *)*param_1;
  pcVar7 = (char *)param_1[1];
  if (pcVar5 != pcVar7) {
    __src = param_1 + 0x28;
    do {
      if (*pcVar5 != 'W') {
        return 0;
      }
      pcVar1 = pcVar5 + 1;
      *param_1 = (long)pcVar1;
      if ((pcVar1 == pcVar7) || (*pcVar1 != 'P')) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
        *param_1 = (long)(pcVar5 + 2);
      }
      lVar2 = FUN_00151444(param_1);
      if (lVar2 == 0) {
        return 1;
      }
      pvVar11 = (void *)param_1[0x266];
      lVar6 = *(long *)((long)pvVar11 + 8);
      puVar3 = pvVar11;
      if (lVar6 - 0xfc0U < 0xfffffffffffff010) {
        puVar3 = malloc(0x1000);
        if (puVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = 0;
        *puVar3 = pvVar11;
        puVar3[1] = 0;
        param_1[0x266] = (long)puVar3;
      }
      uVar4 = *param_2;
      *(long *)((long)puVar3 + 8) = lVar6 + 0x30;
      puVar9 = (undefined8 *)((long)puVar3 + lVar6 + 0x10);
      *puVar9 = &PTR_FUN_00171158;
      *(undefined8 *)((long)puVar3 + lVar6 + 0x20) = uVar4;
      *(long *)((long)puVar3 + lVar6 + 0x28) = lVar2;
      *(undefined1 *)((long)puVar3 + lVar6 + 0x18) = 0x1b;
      *(undefined1 *)((long)puVar3 + lVar6 + 0x30) = uVar8;
      *(ushort *)((long)puVar3 + lVar6 + 0x19) =
           *(ushort *)((long)puVar3 + lVar6 + 0x19) & 0xf000 | 0x540;
      *param_2 = puVar9;
      plVar10 = (long *)param_1[0x26];
      if (plVar10 == (long *)param_1[0x27]) {
        __ptr = (long *)param_1[0x25];
        __n = (long)plVar10 - (long)__ptr;
        if (__ptr == __src) {
          pvVar11 = malloc(__n * 2);
          if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar10 != __src) {
            memcpy(pvVar11,__src,__n);
          }
          param_1[0x25] = (long)pvVar11;
        }
        else {
          pvVar11 = realloc(__ptr,__n * 2);
          param_1[0x25] = (long)pvVar11;
          if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar10 = (long *)((long)pvVar11 + __n);
        param_1[0x27] = (long)((long)pvVar11 + ((long)__n >> 2) * 8);
      }
      param_1[0x26] = (long)(plVar10 + 1);
      *plVar10 = (long)puVar9;
      pcVar5 = (char *)*param_1;
      pcVar7 = (char *)param_1[1];
    } while (pcVar5 != pcVar7);
  }
  return 0;
}


