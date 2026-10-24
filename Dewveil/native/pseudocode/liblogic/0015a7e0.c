// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0015a7e0; body: [[0015a7e0, 0015a9a3]]

void FUN_0015a7e0(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  void *__ptr;
  char *pcVar6;
  undefined1 *puVar7;
  size_t __size;
  long lVar8;
  undefined1 *puVar9;
  size_t __n;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  char local_50 [40];
  undefined8 local_28;
  
  if (0xf < *(ulong *)(param_1 + 0x18)) {
    pcVar6 = *(char **)(param_1 + 0x10);
    bVar10 = pcVar6[2];
    bVar13 = pcVar6[3];
    bVar11 = pcVar6[4];
    bVar14 = pcVar6[5];
    bVar12 = pcVar6[10];
    bVar15 = pcVar6[0xb];
    puVar9 = (undefined1 *)((ulong)&local_28 | 1);
    uVar2 = CONCAT17(-((byte)pcVar6[0xe] - 0x3a < 0xfffffff6),
                     CONCAT16(-((byte)pcVar6[0xc] - 0x3a < 0xfffffff6),
                              CONCAT15(-(bVar12 - 0x3a < 0xfffffff6),
                                       CONCAT14(-((CONCAT12(bVar12,(ushort)(byte)pcVar6[8]) & 0xffff
                                                  ) - 0x3a < 0xfffffff6),
                                                CONCAT13(-((byte)pcVar6[6] - 0x3a < 0xfffffff6),
                                                         CONCAT12(-(bVar11 - 0x3a < 0xfffffff6),
                                                                  CONCAT11(-(bVar10 - 0x3a <
                                                                            0xfffffff6),
                                                                           -((CONCAT12(bVar11,
                                                  CONCAT11(bVar10,*pcVar6)) & 0xff) - 0x3a <
                                                  0xfffffff6)))))))) & 0x909090909090909;
    uVar3 = CONCAT17(-((byte)pcVar6[0xf] - 0x3a < 0xfffffff6),
                     CONCAT16(-((byte)pcVar6[0xd] - 0x3a < 0xfffffff6),
                              CONCAT15(-(bVar15 - 0x3a < 0xfffffff6),
                                       CONCAT14(-((CONCAT12(bVar15,(ushort)(byte)pcVar6[9]) & 0xffff
                                                  ) - 0x3a < 0xfffffff6),
                                                CONCAT13(-((byte)pcVar6[7] - 0x3a < 0xfffffff6),
                                                         CONCAT12(-(bVar14 - 0x3a < 0xfffffff6),
                                                                  CONCAT11(-(bVar13 - 0x3a <
                                                                            0xfffffff6),
                                                                           -((CONCAT12(bVar14,
                                                  CONCAT11(bVar13,pcVar6[1])) & 0xff) - 0x3a <
                                                  0xfffffff6)))))))) & 0x7979797979797979 ^
            0xd0d0d0d0d0d0d0d0;
    local_28 = CONCAT17((char)(uVar3 >> 0x38) + pcVar6[0xf] +
                        ((char)(uVar2 >> 0x38) + pcVar6[0xe]) * '\x10',
                        CONCAT16((char)(uVar3 >> 0x30) + pcVar6[0xd] +
                                 ((char)(uVar2 >> 0x30) + pcVar6[0xc]) * '\x10',
                                 CONCAT15((char)(uVar3 >> 0x28) + bVar15 +
                                          ((char)(uVar2 >> 0x28) + bVar12) * '\x10',
                                          CONCAT14((char)(uVar3 >> 0x20) + pcVar6[9] +
                                                   ((char)(uVar2 >> 0x20) + pcVar6[8]) * '\x10',
                                                   CONCAT13((char)(uVar3 >> 0x18) + pcVar6[7] +
                                                            ((char)(uVar2 >> 0x18) + pcVar6[6]) *
                                                            '\x10',CONCAT12((char)(uVar3 >> 0x10) +
                                                                            bVar14 + ((char)(uVar2 
                                                  >> 0x10) + bVar11) * '\x10',
                                                  CONCAT11((char)(uVar3 >> 8) + bVar13 +
                                                           ((char)(uVar2 >> 8) + bVar10) * '\x10',
                                                           (char)uVar3 + pcVar6[1] +
                                                           ((char)uVar2 + *pcVar6) * '\x10')))))));
    puVar7 = (undefined1 *)((ulong)&local_28 | 7);
    do {
      uVar1 = puVar9[-1];
      puVar9[-1] = *puVar7;
      *puVar7 = uVar1;
      bVar4 = puVar9 < puVar7 + -1;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + -1;
    } while (bVar4);
    local_50[8] = '\0';
    local_50[9] = '\0';
    local_50[10] = '\0';
    local_50[0xb] = '\0';
    local_50[0xc] = '\0';
    local_50[0xd] = '\0';
    local_50[0xe] = '\0';
    local_50[0xf] = '\0';
    local_50[0] = '\0';
    local_50[1] = '\0';
    local_50[2] = '\0';
    local_50[3] = '\0';
    local_50[4] = '\0';
    local_50[5] = '\0';
    local_50[6] = '\0';
    local_50[7] = '\0';
    local_50[0x18] = '\0';
    local_50[0x19] = '\0';
    local_50[0x1a] = '\0';
    local_50[0x1b] = '\0';
    local_50[0x1c] = '\0';
    local_50[0x1d] = '\0';
    local_50[0x1e] = '\0';
    local_50[0x1f] = '\0';
    local_50[0x10] = '\0';
    local_50[0x11] = '\0';
    local_50[0x12] = '\0';
    local_50[0x13] = '\0';
    local_50[0x14] = '\0';
    local_50[0x15] = '\0';
    local_50[0x16] = '\0';
    local_50[0x17] = '\0';
    iVar5 = snprintf(local_50,0x20,"%a",local_28);
    if (iVar5 != 0) {
      lVar8 = param_2[1];
      __n = (size_t)iVar5;
      __ptr = (void *)*param_2;
      if ((ulong)param_2[2] < lVar8 + __n) {
        __size = param_2[2] * 2;
        uVar2 = lVar8 + __n + 0x3e0;
        if (__size < uVar2 || __size - uVar2 == 0) {
          __size = uVar2;
        }
        param_2[2] = __size;
        __ptr = realloc(__ptr,__size);
        *param_2 = __ptr;
        if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar8 = param_2[1];
      }
      memcpy((void *)((long)__ptr + lVar8),local_50,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  return;
}


