// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0015a9ac; body: [[0015a9ac, 0015abab]]

void FUN_0015a9ac(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  uint6 uVar3;
  uint3 uVar4;
  uint6 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  int iVar9;
  void *__ptr;
  char *pcVar10;
  size_t __size;
  char *pcVar11;
  long lVar12;
  char cVar13;
  char cVar14;
  size_t __n;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  char local_60 [47];
  char cStack_31;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (0x1f < *(ulong *)(param_1 + 0x18)) {
    pcVar11 = *(char **)(param_1 + 0x10);
    if ((&local_30 < pcVar11 + 0x20) && (pcVar11 < &stack0xffffffffffffffe0)) {
      lVar12 = 0;
      pcVar10 = &cStack_31;
      do {
        pbVar2 = (byte *)(pcVar11 + lVar12);
        lVar12 = lVar12 + 2;
        bVar15 = *pbVar2;
        bVar16 = pbVar2[1];
        cVar13 = '\t';
        if (0xfffffff5 < bVar15 - 0x3a) {
          cVar13 = '\0';
        }
        cVar14 = -0x57;
        if (0xfffffff5 < bVar16 - 0x3a) {
          cVar14 = -0x30;
        }
        pcVar10 = pcVar10 + 1;
        *pcVar10 = cVar14 + bVar16 + (cVar13 + bVar15) * '\x10';
      } while (lVar12 != 0x20);
    }
    else {
      bVar15 = pcVar11[2];
      bVar21 = pcVar11[3];
      bVar16 = pcVar11[4];
      bVar22 = pcVar11[5];
      bVar17 = pcVar11[10];
      bVar23 = pcVar11[0xb];
      bVar18 = pcVar11[0x12];
      bVar24 = pcVar11[0x13];
      bVar19 = pcVar11[0x14];
      bVar25 = pcVar11[0x15];
      bVar20 = pcVar11[0x1a];
      bVar26 = pcVar11[0x1b];
      pcVar10 = (char *)((ulong)&local_30 | 0xf);
      uVar3 = (uint6)CONCAT14(-(bVar17 - 0x3a < 0xfffffff6),
                              -(uint)((CONCAT12(bVar17,(ushort)(byte)pcVar11[8]) & 0xffff) - 0x3a <
                                     0xfffffff6)) & 0xffff0000ffff;
      uVar5 = (uint6)CONCAT14(-(bVar20 - 0x3a < 0xfffffff6),
                              -(uint)((CONCAT12(bVar20,(ushort)(byte)pcVar11[0x18]) & 0xffff) - 0x3a
                                     < 0xfffffff6)) & 0xffff0000ffff;
      uVar4 = CONCAT12(-(bVar15 - 0x3a < 0xfffffff6),
                       -(ushort)((CONCAT12(bVar16,CONCAT11(bVar15,*pcVar11)) & 0xff) - 0x3a <
                                0xfffffff6)) & 0xff00ff;
      auVar27[1] = -(bVar21 - 0x3a < 0xfffffff6);
      auVar27[0] = -((CONCAT12(bVar22,CONCAT11(bVar21,pcVar11[1])) & 0xff) - 0x3a < 0xfffffff6);
      auVar27[2] = -(bVar22 - 0x3a < 0xfffffff6);
      auVar27[3] = -((byte)pcVar11[7] - 0x3a < 0xfffffff6);
      auVar27[4] = -((CONCAT12(bVar23,(ushort)(byte)pcVar11[9]) & 0xffff) - 0x3a < 0xfffffff6);
      auVar27[5] = -(bVar23 - 0x3a < 0xfffffff6);
      auVar27[6] = -((byte)pcVar11[0xd] - 0x3a < 0xfffffff6);
      auVar27[7] = -((byte)pcVar11[0xf] - 0x3a < 0xfffffff6);
      auVar27[8] = -((CONCAT12(bVar25,CONCAT11(bVar24,pcVar11[0x11])) & 0xff) - 0x3a < 0xfffffff6);
      auVar27[9] = -(bVar24 - 0x3a < 0xfffffff6);
      auVar27[10] = -(bVar25 - 0x3a < 0xfffffff6);
      auVar27[0xb] = -((byte)pcVar11[0x17] - 0x3a < 0xfffffff6);
      auVar27[0xc] = -((CONCAT12(bVar26,(ushort)(byte)pcVar11[0x19]) & 0xffff) - 0x3a < 0xfffffff6);
      auVar27[0xd] = -(bVar26 - 0x3a < 0xfffffff6);
      auVar27[0xe] = -((byte)pcVar11[0x1d] - 0x3a < 0xfffffff6);
      auVar27[0xf] = -((byte)pcVar11[0x1f] - 0x3a < 0xfffffff6);
      auVar6[8] = 0xd0;
      auVar6._0_8_ = 0xd0d0d0d0d0d0d0d0;
      auVar6[9] = 0xd0;
      auVar6[10] = 0xd0;
      auVar6[0xb] = 0xd0;
      auVar6[0xc] = 0xd0;
      auVar6[0xd] = 0xd0;
      auVar6[0xe] = 0xd0;
      auVar6[0xf] = 0xd0;
      auVar7[8] = 0xa9;
      auVar7._0_8_ = 0xa9a9a9a9a9a9a9a9;
      auVar7[9] = 0xa9;
      auVar7[10] = 0xa9;
      auVar7[0xb] = 0xa9;
      auVar7[0xc] = 0xa9;
      auVar7[0xd] = 0xa9;
      auVar7[0xe] = 0xa9;
      auVar7[0xf] = 0xa9;
      auVar28[8] = 0xd0;
      auVar28._0_8_ = 0xd0d0d0d0d0d0d0d0;
      auVar28[9] = 0xd0;
      auVar28[10] = 0xd0;
      auVar28[0xb] = 0xd0;
      auVar28[0xc] = 0xd0;
      auVar28[0xd] = 0xd0;
      auVar28[0xe] = 0xd0;
      auVar28[0xf] = 0xd0;
      auVar28 = auVar28 ^ (auVar6 ^ auVar7) & auVar27;
      uStack_28 = CONCAT17(auVar28[0xf] + pcVar11[0x1f] +
                           ((-((byte)pcVar11[0x1e] - 0x3a < 0xfffffff6) & 9U) + pcVar11[0x1e]) *
                           '\x10',CONCAT16(auVar28[0xe] + pcVar11[0x1d] +
                                           ((-((byte)pcVar11[0x1c] - 0x3a < 0xfffffff6) & 9U) +
                                           pcVar11[0x1c]) * '\x10',
                                           CONCAT15(auVar28[0xd] + bVar26 +
                                                    (((byte)(uVar5 >> 0x20) & 9) + bVar20) * '\x10',
                                                    CONCAT14(auVar28[0xc] + pcVar11[0x19] +
                                                             (((byte)uVar5 & 9) + pcVar11[0x18]) *
                                                             '\x10',CONCAT13(auVar28[0xb] +
                                                                             pcVar11[0x17] +
                                                                             ((-((byte)pcVar11[0x16]
                                                                                 - 0x3a < 0xfffffff6
                                                                                ) & 9U) +
                                                                             pcVar11[0x16]) * '\x10'
                                                                             ,CONCAT12(auVar28[10] +
                                                                                       bVar25 + ((-(
                                                  bVar19 - 0x3a < 0xfffffff6) & 9U) + bVar19) *
                                                  '\x10',CONCAT11(auVar28[9] + bVar24 +
                                                                  ((-(bVar18 - 0x3a < 0xfffffff6) &
                                                                   9U) + bVar18) * '\x10',
                                                                  auVar28[8] + pcVar11[0x11] +
                                                                  ((-((CONCAT12(bVar19,CONCAT11(
                                                  bVar18,pcVar11[0x10])) & 0xff) - 0x3a < 0xfffffff6
                                                  ) & 9U) + pcVar11[0x10]) * '\x10')))))));
      local_30 = CONCAT17(auVar28[7] + pcVar11[0xf] +
                          ((-((byte)pcVar11[0xe] - 0x3a < 0xfffffff6) & 9U) + pcVar11[0xe]) * '\x10'
                          ,CONCAT16(auVar28[6] + pcVar11[0xd] +
                                    ((-((byte)pcVar11[0xc] - 0x3a < 0xfffffff6) & 9U) + pcVar11[0xc]
                                    ) * '\x10',
                                    CONCAT15(auVar28[5] + bVar23 +
                                             (((byte)(uVar3 >> 0x20) & 9) + bVar17) * '\x10',
                                             CONCAT14(auVar28[4] + pcVar11[9] +
                                                      (((byte)uVar3 & 9) + pcVar11[8]) * '\x10',
                                                      CONCAT13(auVar28[3] + pcVar11[7] +
                                                               ((-((byte)pcVar11[6] - 0x3a <
                                                                  0xfffffff6) & 9U) + pcVar11[6]) *
                                                               '\x10',CONCAT12(auVar28[2] + bVar22 +
                                                                               ((-(bVar16 - 0x3a <
                                                                                  0xfffffff6) & 9U)
                                                                               + bVar16) * '\x10',
                                                                               CONCAT11(auVar28[1] +
                                                                                        bVar21 + (((
                                                  byte)(uVar4 >> 0x10) & 9) + bVar15) * '\x10',
                                                  auVar28[0] + pcVar11[1] +
                                                  (((byte)uVar4 & 9) + *pcVar11) * '\x10')))))));
    }
    if (&local_30 < pcVar10) {
      pcVar11 = (char *)((ulong)&local_30 | 1);
      do {
        cVar13 = pcVar11[-1];
        pcVar11[-1] = *pcVar10;
        *pcVar10 = cVar13;
        bVar8 = pcVar11 < pcVar10 + -1;
        pcVar11 = pcVar11 + 1;
        pcVar10 = pcVar10 + -1;
      } while (bVar8);
    }
    local_60[0x22] = '\0';
    local_60[0x23] = '\0';
    local_60[0x24] = '\0';
    local_60[0x25] = '\0';
    local_60[0x26] = '\0';
    local_60[0x27] = '\0';
    local_60[0x28] = '\0';
    local_60[0x29] = '\0';
    local_60[0x20] = '\0';
    local_60[0x21] = '\0';
    local_60[8] = '\0';
    local_60[9] = '\0';
    local_60[10] = '\0';
    local_60[0xb] = '\0';
    local_60[0xc] = '\0';
    local_60[0xd] = '\0';
    local_60[0xe] = '\0';
    local_60[0xf] = '\0';
    local_60[0] = '\0';
    local_60[1] = '\0';
    local_60[2] = '\0';
    local_60[3] = '\0';
    local_60[4] = '\0';
    local_60[5] = '\0';
    local_60[6] = '\0';
    local_60[7] = '\0';
    local_60[0x18] = '\0';
    local_60[0x19] = '\0';
    local_60[0x1a] = '\0';
    local_60[0x1b] = '\0';
    local_60[0x1c] = '\0';
    local_60[0x1d] = '\0';
    local_60[0x1e] = '\0';
    local_60[0x1f] = '\0';
    local_60[0x10] = '\0';
    local_60[0x11] = '\0';
    local_60[0x12] = '\0';
    local_60[0x13] = '\0';
    local_60[0x14] = '\0';
    local_60[0x15] = '\0';
    local_60[0x16] = '\0';
    local_60[0x17] = '\0';
    iVar9 = snprintf(local_60,0x2a,"%LaL",local_30);
    if (iVar9 != 0) {
      lVar12 = param_2[1];
      __n = (size_t)iVar9;
      __ptr = (void *)*param_2;
      if ((ulong)param_2[2] < lVar12 + __n) {
        __size = param_2[2] * 2;
        uVar1 = lVar12 + __n + 0x3e0;
        if (__size < uVar1 || __size - uVar1 == 0) {
          __size = uVar1;
        }
        param_2[2] = __size;
        __ptr = realloc(__ptr,__size);
        *param_2 = __ptr;
        if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar12 = param_2[1];
      }
      memcpy((void *)((long)__ptr + lVar12),local_60,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  return;
}


